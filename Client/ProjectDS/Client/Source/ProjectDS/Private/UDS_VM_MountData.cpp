// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 22

// SetClickMountData_WrapperImpl @ 14b6a2330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_MountData::SetClickMountData_WrapperImpl(void *param_1,void *param_2)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_MountEvent *pUVar3;
  UObject *pUVar4;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  bVar1 = TWeakObjectPtr<UDS_MountData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_MountData,FWeakObjectPtr> *)((longlong)param_1 + 0x240),
                     (void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_VM_MountData::OnClickMountData",0x22,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,TStack_138.Ptr,0x10a,L"MountData is nullptr");
      if ((void *)TStack_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
      }
    }
  }
  else {
    pUVar3 = UDS_MountEvent::GetEvent();
    if (pUVar3 != (UDS_MountEvent *)0x0) {
      pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 0x240));
      FDS_EventDelegate<__int64_const_>::Broadcast
                (&pUVar3->MountDataSlotSelectedChangeDel,*(long64 *)&pUVar4[2].field_0x10);
    }
  }
  return;
}

// StaticClass @ 14b6a2340

UClass * __cdecl UDS_VM_MountData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_MountData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_MountData",
               &Z_Registration_Info_UClass_UDS_VM_MountData.InnerSingleton,
               StaticRegisterNativesUDS_VM_MountData,0x250,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_MountData>,
               InternalVTableHelperCtorCaller<UDS_VM_MountData>,local_res8,
               UDS_VM_Common_Mount::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_MountData.InnerSingleton;
}

// UDS_VM_MountData @ 14b6a5450

UDS_VM_MountData * __thiscall
UDS_VM_MountData::UDS_VM_MountData(UDS_VM_MountData *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UDS_VM_Common_Mount::UDS_VM_Common_Mount((UDS_VM_Common_Mount *)this,param_1);
  this->IsBoarding = Collapsed;
  this->ClimateTypeIconVisibilty_1 = Collapsed;
  this->ClimateTypeIconVisibilty_2 = Collapsed;
  this->FlooringTypeIconVisibilty_1 = Collapsed;
  this->FlooringTypeIconVisibilty_2 = Collapsed;
  this->SeaterTypeIconVisibilty = Collapsed;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->SelectedMountStatusEntry).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->SelectedMountStatusEntry).UserObjectList.ArrayNum = 0;
  (this->SelectedMountStatusEntry).UserObjectList.ArrayMax = 0;
  this->_padding_ = (longlong)&___7UDS_VM_MountData__6B_;
  (this->ClickMountData)._padding_ = '\0';
  (this->ClickMountData).bIsCustomSelected = false;
  (this->ClickMountData).bIsLacked = false;
  (this->ClickMountData).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickMountData).Delegate = 0;
  *(undefined8 *)&(this->ClickMountData).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickMountData).Delegate.field_0x10 = 0;
  this->MountBodyTypeIconID = 0;
  this->MountClimateTypeIconID_1 = 0;
  this->MountClimateTypeIconID_2 = 0;
  this->MountFlooringTypeIconID_1 = 0;
  this->MountFlooringTypeIconID_2 = 0;
  this->SeaterTypeIconID = 0;
  this->IsSelected = false;
  this->BoardingIconID = 0x35b67;
  (this->FixedText_BoardingText).StringTableType = StringUi;
  (this->FixedText_BoardingText).StringTableID = 0x55742;
  (this->FixedText_BoardingText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_BoardingText).StringEnumTableNameID.Number = 0;
  (this->FixedText_BoardingText).DateTime.Ticks = 0;
  (this->FixedText_BoardingText).TimeSpan.Ticks = 0;
  (this->FixedText_BoardingText).TimeExpressionType = None;
  (this->FixedText_BoardingText).IsExpression = false;
  (this->FixedText_BoardingText).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_BoardingText).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_BoardingText).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_BoardingText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_BoardingText).FormatArgs.ArrayNum = 0;
  (this->FixedText_BoardingText).FormatArgs.ArrayMax = 0;
  (this->MountData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->MountData).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->MountDataSet).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->MountDataSet).WeakPtr,(FObjectPtr)&local_res8);
  return this;
}

// UDS_VM_MountData @ 14b6a5580

UDS_VM_MountData * __thiscall
UDS_VM_MountData::UDS_VM_MountData(UDS_VM_MountData *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UDS_VM_Common_Mount::UDS_VM_Common_Mount((UDS_VM_Common_Mount *)this,param_1);
  this->IsBoarding = Collapsed;
  this->ClimateTypeIconVisibilty_1 = Collapsed;
  this->ClimateTypeIconVisibilty_2 = Collapsed;
  this->FlooringTypeIconVisibilty_1 = Collapsed;
  this->FlooringTypeIconVisibilty_2 = Collapsed;
  this->SeaterTypeIconVisibilty = Collapsed;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->SelectedMountStatusEntry).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->SelectedMountStatusEntry).UserObjectList.ArrayNum = 0;
  (this->SelectedMountStatusEntry).UserObjectList.ArrayMax = 0;
  this->_padding_ = (longlong)&___7UDS_VM_MountData__6B_;
  (this->ClickMountData)._padding_ = '\0';
  (this->ClickMountData).bIsCustomSelected = false;
  (this->ClickMountData).bIsLacked = false;
  (this->ClickMountData).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickMountData).Delegate = 0;
  *(undefined8 *)&(this->ClickMountData).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickMountData).Delegate.field_0x10 = 0;
  this->MountBodyTypeIconID = 0;
  this->MountClimateTypeIconID_1 = 0;
  this->MountClimateTypeIconID_2 = 0;
  this->MountFlooringTypeIconID_1 = 0;
  this->MountFlooringTypeIconID_2 = 0;
  this->SeaterTypeIconID = 0;
  this->IsSelected = false;
  this->BoardingIconID = 0x35b67;
  (this->FixedText_BoardingText).StringTableType = StringUi;
  (this->FixedText_BoardingText).StringTableID = 0x55742;
  (this->FixedText_BoardingText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_BoardingText).StringEnumTableNameID.Number = 0;
  (this->FixedText_BoardingText).DateTime.Ticks = 0;
  (this->FixedText_BoardingText).TimeSpan.Ticks = 0;
  (this->FixedText_BoardingText).TimeExpressionType = None;
  (this->FixedText_BoardingText).IsExpression = false;
  (this->FixedText_BoardingText).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_BoardingText).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_BoardingText).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_BoardingText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_BoardingText).FormatArgs.ArrayNum = 0;
  (this->FixedText_BoardingText).FormatArgs.ArrayMax = 0;
  (this->MountData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->MountData).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->MountDataSet).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->MountDataSet).WeakPtr,(FObjectPtr)&local_res8);
  return this;
}

// ~UDS_VM_MountData @ 14b6a7290

void __thiscall UDS_VM_MountData::~UDS_VM_MountData(UDS_VM_MountData *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_MountData__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_BoardingText).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_BoardingText).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_BoardingText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_BoardingText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickMountData).Delegate);
  pvVar2 = *(void **)&(this->ClickMountData).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickMountData).Delegate);
  pFVar1 = (this->SelectedMountStatusEntry).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_VM_Common_Mount::~UDS_VM_Common_Mount((UDS_VM_Common_Mount *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6a98d0

IClassDescriptor * __thiscall
UDS_VM_MountData::GetFieldNotificationDescriptor(UDS_VM_MountData *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_MountData::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6aa280

UClass * __cdecl UDS_VM_MountData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_MountData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_MountData",
               &Z_Registration_Info_UClass_UDS_VM_MountData.InnerSingleton,
               StaticRegisterNativesUDS_VM_MountData,0x250,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_MountData>,
               InternalVTableHelperCtorCaller<UDS_VM_MountData>,local_res8,
               UDS_VM_Common_Mount::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_MountData.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_MountData @ 14b6aacc0

void __cdecl UDS_VM_MountData::StaticRegisterNativesUDS_VM_MountData(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_MountData_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnChangedData @ 14b6abef0

void __cdecl UDS_VM_MountData::execOnChangedData(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDS_DataBase *local_res10;
  
  local_res10 = (UDS_DataBase *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnChangedData((UDS_VM_MountData *)param_1,local_res10);
  return;
}

// execOnChangedDataSet @ 14b6abf80

void __cdecl UDS_VM_MountData::execOnChangedDataSet(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDS_DataSetBase *local_res10;
  
  local_res10 = (UDS_DataSetBase *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnChangedDataSet((UDS_VM_MountData *)param_1,local_res10);
  return;
}

// AddMountListItem @ 14be10fa0

void __thiscall
UDS_VM_MountData::AddMountListItem
          (UDS_VM_MountData *this,int param_1,int param_2,EDS_InfoViewValueFormat param_3)

{
  code *pcVar1;
  FDS_ViewModelContext_StatusUpgradeInfo *pFVar2;
  bool bVar3;
  UDS_UserObjectListItem *this_00;
  UDS_UserObjectListItem *local_48 [2];
  TSharedPtr<FDS_ViewModelContext_StatusUpgradeInfo,1> local_38;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  
  this_00 = NewObject<UDS_UserObjectListItem>((UObject *)this);
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (this_00 == (UDS_UserObjectListItem *)0x0) {
      return;
    }
  }
  else {
    if (this_00 == (UDS_UserObjectListItem *)0x0) {
      return;
    }
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  MakeContext<FDS_ViewModelContext_StatusUpgradeInfo>(&local_38);
  pFVar2 = local_38.Object;
  if ((local_38.Object == (FDS_ViewModelContext_StatusUpgradeInfo *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(undefined4 *)&pFVar2->_padding_ = 0x1b9;
  pFVar2->StatusNameID = (longlong)param_1;
  pFVar2->AfterStatusValue = param_2;
  pFVar2->IsUpagade = false;
  local_28.Object = (FDS_ViewModelContext *)local_38.Object;
  local_28.SharedReferenceCount.ReferenceController =
       local_38.SharedReferenceCount.ReferenceController;
  pFVar2->FormatType = param_3;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_UserObjectListItem::AddContext(this_00,&local_28);
  local_48[0] = this_00;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  FDS_EntryBindingEventField::Add
            (&this->SelectedMountStatusEntry,(TObjectPtr<UDS_UserObjectListItem>)local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  return;
}

// BindModel @ 14be11ed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_MountData::BindModel(UDS_VM_MountData *this)

{
  FDS_EventDelegate<__int64_const_> *this_00;
  code *pcVar1;
  bool bVar2;
  UDS_MountEvent *pUVar3;
  UObject *pUVar4;
  char *pcVar5;
  UObject *pUVar6;
  UFunction *pUVar7;
  UDS_LogManager *pUVar8;
  char *pcVar9;
  UDS_VM_MountData *pUVar10;
  char *pcVar11;
  undefined1 auStackY_2d8 [32];
  <lambda_1> local_2a8;
  <lambda_1> local_2a7 [7];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2a0;
  FWeakObjectPtr local_298;
  FName local_290;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_288;
  FWeakObjectPtr local_280;
  FName local_278;
  FName local_270;
  FName local_268;
  FName local_260;
  UDS_VM_MountData *local_258;
  FName *local_250;
  FName local_248;
  UDS_VM_MountData *local_240;
  FName *local_238 [2];
  undefined1 local_228 [24];
  FName local_210;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_208;
  FDestructionSentinel local_1f8;
  FDestructionSentinel local_1e0;
  code *local_1c8;
  longlong lStack_1c0;
  FReadAccessScope local_1b8;
  FReadAccessScope local_1a0;
  FReadAccessScope local_188;
  FReadAccessScope local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar3 = UDS_MountEvent::GetEvent();
  if (pUVar3 != (UDS_MountEvent *)0x0) {
    this_00 = &pUVar3->MountDataSlotSelectedChangeDel;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,this);
    local_228._8_4_ = 0;
    local_228._0_8_ = OnChangedSelectedMount;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,this);
    lStack_1c0 = CONCAT44(local_228._12_4_,local_228._8_4_);
    local_1c8 = (code *)local_228._0_8_;
    TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_MountData>
              ((TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy> *)
               this_00,(UDS_VM_MountData *)local_228,(pmf_7a83d855 *)this);
  }
  bVar2 = TWeakObjectPtr<UDS_MountData,FWeakObjectPtr>::UEOpEquals(&this->MountData,(void *)0x0);
  if ((bVar2) ||
     (bVar2 = TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr>::UEOpEquals
                        (&this->MountDataSet,(void *)0x0), bVar2)) {
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar8 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_VM_MountData::BindModel",0x1b,Yes);
    UDS_LogManager::PrintLog(pUVar8,1,Warning,local_158.Ptr,0x3b,L"MountData is nullptr.");
    if ((void *)local_158._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_158._padding_);
    return;
  }
  pUVar4 = FWeakObjectPtr::Get(&(this->MountData).WeakPtr);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar4 + 1),(UObject *)this);
  pUVar4 = FWeakObjectPtr::Get(&(this->MountData).WeakPtr);
  pcVar5 = strstr("&UDS_VM_MountData::OnChangedData","::");
  pcVar11 = &DAT_00000002;
  if (pcVar5 == (char *)0x0) {
LAB_14be1201a:
    pcVar9 = &DAT_00000002;
LAB_14be1201d:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    do {
      pcVar9 = pcVar5;
      pcVar5 = strstr(pcVar9 + 1,"::");
    } while (pcVar5 != (char *)0x0);
    if (pcVar9 == (char *)0x0) goto LAB_14be1201a;
    pcVar9 = pcVar9 + 2;
    if (*pcVar9 == '0') goto LAB_14be1201d;
  }
  ::FName::FName(&local_260,pcVar9);
  if ((this == (UDS_VM_MountData *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x4c8,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_2a0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_298.ObjectIndex = 0;
  local_298.ObjectSerialNumber = 0;
  local_290.ComparisonIndex.Value = 0;
  local_290.Number = 0;
  local_270 = local_260;
  if ((this == (UDS_VM_MountData *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pUVar10 = this;
  if (this == (UDS_VM_MountData *)0x0) {
    pUVar10 = (UDS_VM_MountData *)0x0;
  }
  local_258 = pUVar10;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UDS_VM_MountData *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
  FWeakObjectPtr::operator=(&local_298,(FObjectPtr)&local_258);
  local_290 = local_270;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_2a0,&local_1b8);
  if ((local_290 == (FName)0x0) ||
     (pUVar6 = FWeakObjectPtr::Get(&local_298), pUVar6 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_1b8);
LAB_14be12157:
    local_250 = &local_270;
    `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UDS_DataBase_*>::
    __Internal_BindDynamic<UDS_VM_MountData>'::__l2::<lambda_1>::operator()(&local_250);
  }
  else {
    pUVar7 = UObject::FindFunction(pUVar6,local_290);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_1b8);
    if (pUVar7 == (UFunction *)0x0) goto LAB_14be12157;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_2a0,&local_188);
  local_228._16_4_ = local_298.ObjectIndex;
  local_228._20_4_ = local_298.ObjectSerialNumber;
  local_210 = local_290;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_188);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pUVar4 + 1),
             (FWriteAccessScope *)&local_1f8);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&pUVar4[1].field_0x8,&local_2a8,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar4 + 1),
             (TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> *)(local_228 + 0x10));
  if (local_1f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1f8.Accessor,&local_1f8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2a0.AccessDetector);
  pUVar4 = FWeakObjectPtr::Get(&(this->MountDataSet).WeakPtr);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar4 + 1),(UObject *)this);
  pUVar4 = FWeakObjectPtr::Get(&(this->MountDataSet).WeakPtr);
  pcVar5 = strstr("&UDS_VM_MountData::OnChangedDataSet","::");
  if (pcVar5 == (char *)0x0) {
LAB_14be1224a:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    do {
      pcVar9 = pcVar5;
      pcVar5 = strstr(pcVar9 + 1,"::");
    } while (pcVar5 != (char *)0x0);
    if ((pcVar9 == (char *)0x0) || (pcVar11 = pcVar9 + 2, pcVar9[2] == '0')) goto LAB_14be1224a;
  }
  ::FName::FName(&local_248,pcVar11);
  if ((this == (UDS_VM_MountData *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x4c8,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_288.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_280.ObjectIndex = 0;
  local_280.ObjectSerialNumber = 0;
  local_278.ComparisonIndex.Value = 0;
  local_278.Number = 0;
  local_268 = local_248;
  if ((this == (UDS_VM_MountData *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_240 = pUVar10;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UDS_VM_MountData *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
  FWeakObjectPtr::operator=(&local_280,(FObjectPtr)&local_240);
  local_278 = local_268;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_288,&local_1a0);
  if ((local_278 == (FName)0x0) ||
     (pUVar6 = FWeakObjectPtr::Get(&local_280), pUVar6 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_1a0);
  }
  else {
    pUVar7 = UObject::FindFunction(pUVar6,local_278);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_1a0);
    if (pUVar7 != (UFunction *)0x0) goto LAB_14be1239b;
  }
  local_238[0] = &local_268;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UDS_DataSetBase_*>::
  __Internal_BindDynamic<UDS_VM_MountData>'::__l2::<lambda_1>::operator()(local_238);
LAB_14be1239b:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_288,&local_170);
  local_208.Object = local_280;
  local_208.FunctionName = local_278;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_170);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pUVar4 + 1),
             (FWriteAccessScope *)&local_1e0);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&pUVar4[1].field_0x8,local_2a7,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar4 + 1),&local_208);
  if (local_1e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1e0.Accessor,&local_1e0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_288.AccessDetector);
  UpdateData(this);
  return;
}

// GetCommonContentsInfoStringBaseID @ 14be20ce0

int __thiscall
UDS_VM_MountData::GetCommonContentsInfoStringBaseID(UDS_VM_MountData *this,long64 param_1)

{
  FDS_CommonContentsInfoTableRow *pFVar1;
  
  pFVar1 = FDS_CommonContentsInfoTableRow::Get(param_1,true);
  if (pFVar1 == (FDS_CommonContentsInfoTableRow *)0x0) {
    return 0;
  }
  return (int)(pFVar1->ID_Name).ID;
}

// OnChangedData @ 14be29bb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_MountData::OnChangedData(UDS_VM_MountData *this,UDS_DataBase *param_1)

{
  UDS_LogManager *pUVar1;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if (param_1 == (UDS_DataBase *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_MountData::OnChangedData",0x1f,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x5a,L"DataBase is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
        return;
      }
    }
  }
  else {
    UpdateData(this);
  }
  return;
}

// OnChangedDataSet @ 14be29ca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_MountData::OnChangedDataSet(UDS_VM_MountData *this,UDS_DataSetBase *param_1)

{
  EDS_SeaterType EVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  UObject *pUVar6;
  UDS_LogManager *pUVar7;
  FDS_MountBaseTableRow *this_00;
  ESlateVisibility EVar8;
  size_t sVar9;
  undefined1 auStackY_418 [32];
  TArray<EDS_FlooringType,TSizedDefaultAllocator<32>_> TStack_3d0;
  TArray<EDS_ClimateType,TSizedDefaultAllocator<32>_> TStack_3c0;
  FName FStack_3a8;
  int iStack_3a0;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_158;
  ulonglong uStack_38;
  
  if (param_1 == (UDS_DataSetBase *)0x0) {
    return;
  }
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_418;
  bVar5 = TWeakObjectPtr<UDS_MountData,FWeakObjectPtr>::UEOpEquals(&this->MountData,(void *)0x0);
  if ((bVar5) ||
     (bVar5 = TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr>::UEOpEquals
                        (&this->MountDataSet,(void *)0x0), bVar5)) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      TStack_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_158,"UDS_VM_MountData::UpdateData",0x1c,Yes);
      UDS_LogManager::PrintLog(pUVar7,1,Warning,TStack_158.Ptr,0x6f,L"MountData is nullptr.");
      if ((void *)TStack_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_158._padding_);
      }
    }
  }
  else {
    pUVar6 = FWeakObjectPtr::Get(&(this->MountData).WeakPtr);
    if (*(int *)&pUVar6[2].field_0x18 == 0) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_906055593410690954>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_MountData.cpp"
                         ,0x76,"false");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pUVar7 = UDS_LogManager::GetInst();
      if (pUVar7 != (UDS_LogManager *)0x0) {
        pUVar7 = UDS_LogManager::GetInst();
        TStack_398._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&TStack_398,"UDS_VM_MountData::UpdateData",0x1c,Yes);
        UDS_LogManager::PrintLog(pUVar7,1,Warning,TStack_398.Ptr,0x77,L"MountTID is 0");
        if ((void *)TStack_398._padding_ != (void *)0x0) {
          FMemory::Free((void *)TStack_398._padding_);
        }
      }
    }
    this_00 = FDS_MountBaseTableRow::GetRef((longlong)*(int *)&pUVar6[2].field_0x18,true);
    bVar5 = FDS_MountBaseTableRow::IsValid(this_00);
    if (bVar5) {
      UDS_VM_Common_Mount::SetMountIconID((UDS_VM_Common_Mount *)this,this_00->ID_Portrait);
      if (*(int *)(pUVar6 + 3) < 2) {
        UDS_VM_Common_Mount::SetMountName
                  ((UDS_VM_Common_Mount *)this,(int)(this_00->ID_DefaultName).ID);
      }
      else {
        UDS_VM_Common_Mount::SetMountName
                  ((UDS_VM_Common_Mount *)this,(FString *)&pUVar6[2].field_0x20);
      }
      UDS_VM_Common_Mount::SetMountSkillTypeText((UDS_VM_Common_Mount *)this,this_00->RequiredSkill)
      ;
      UDS_VM_Common_Mount::SetRequireMountSkillLevelText
                ((UDS_VM_Common_Mount *)this,this_00->RequiredSkillValue);
      TStack_3d0.ArrayNum = (this_00->MountFlooringType).ArrayNum;
      sVar9 = (size_t)TStack_3d0.ArrayNum;
      EVar1 = this_00->SeaterType;
      pFVar2 = (this_00->MountFlooringType).AllocatorInstance.Data;
      TStack_3d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (TStack_3d0.ArrayNum == 0) {
        TStack_3d0.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,TStack_3d0.ArrayNum,0,&TStack_3d0.AllocatorInstance,TStack_3d0.ArrayNum,
                   &TStack_3d0.ArrayMax);
        memcpy(TStack_3d0.AllocatorInstance.Data,pFVar2,sVar9);
      }
      TStack_3c0.ArrayNum = (this_00->MountClimateType).ArrayNum;
      sVar9 = (size_t)TStack_3c0.ArrayNum;
      pFVar2 = (this_00->MountClimateType).AllocatorInstance.Data;
      TStack_3c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (TStack_3c0.ArrayNum == 0) {
        TStack_3c0.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,TStack_3c0.ArrayNum,0,&TStack_3c0.AllocatorInstance,TStack_3c0.ArrayNum,
                   &TStack_3c0.ArrayMax);
        memcpy(TStack_3c0.AllocatorInstance.Data,pFVar2,sVar9);
      }
      SetAttirbuteIcon(this,this_00->MountBodyType,&TStack_3c0,&TStack_3d0,EVar1);
      SetSelectedMountStatusList(this);
      pUVar6 = FWeakObjectPtr::Get(&(this->MountDataSet).WeakPtr);
      lVar3 = *(longlong *)&pUVar6[4].field_0x20;
      pUVar6 = FWeakObjectPtr::Get(&(this->MountData).WeakPtr);
      iStack_3a0 = FFieldNotificationClassDescriptor::IsBoarding.BitNumber;
      FStack_3a8 = FFieldNotificationClassDescriptor::IsBoarding.FieldName;
      EVar8 = Collapsed;
      if (lVar3 == *(longlong *)&pUVar6[2].field_0x10) {
        EVar8 = SelfHitTestInvisible;
      }
      if (this->IsBoarding != EVar8) {
        this->IsBoarding = EVar8;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_3a8);
      }
    }
    else {
      pUVar7 = UDS_LogManager::GetInst();
      if (pUVar7 != (UDS_LogManager *)0x0) {
        pUVar7 = UDS_LogManager::GetInst();
        TStack_278._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&TStack_278,"UDS_VM_MountData::UpdateData",0x1c,Yes);
        UDS_LogManager::PrintLog
                  (pUVar7,1,Warning,TStack_278.Ptr,0x7d,L"mountBaseTableRow IsValid false.");
        if ((void *)TStack_278._padding_ != (void *)0x0) {
          FMemory::Free((void *)TStack_278._padding_);
        }
      }
    }
  }
  return;
}

// OnChangedSelectedMount @ 14be2b4d0

void __thiscall UDS_VM_MountData::OnChangedSelectedMount(UDS_VM_MountData *this,long64 param_1)

{
  bool bVar1;
  UObject *pUVar2;
  FName local_18;
  int local_10;
  
  bVar1 = TWeakObjectPtr<UDS_MountData,FWeakObjectPtr>::UEOpEquals(&this->MountData,(void *)0x0);
  local_10 = FFieldNotificationClassDescriptor::IsSelected.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsSelected.FieldName;
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->MountData).WeakPtr);
    bVar1 = param_1 == *(longlong *)&pUVar2[2].field_0x10;
    if (this->IsSelected != bVar1) {
      this->IsSelected = bVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
  }
  return;
}

// OnClickMountData @ 14be2c5f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_MountData::OnClickMountData(UDS_VM_MountData *this,FDS_ButtonEventField *param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_MountEvent *pUVar3;
  UObject *pUVar4;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  bVar1 = TWeakObjectPtr<UDS_MountData,FWeakObjectPtr>::UEOpEquals(&this->MountData,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_MountData::OnClickMountData",0x22,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x10a,L"MountData is nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    pUVar3 = UDS_MountEvent::GetEvent();
    if (pUVar3 != (UDS_MountEvent *)0x0) {
      pUVar4 = FWeakObjectPtr::Get(&(this->MountData).WeakPtr);
      FDS_EventDelegate<__int64_const_>::Broadcast
                (&pUVar3->MountDataSlotSelectedChangeDel,*(long64 *)&pUVar4[2].field_0x10);
    }
  }
  return;
}

// OnSetViewModel @ 14be3a380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_MountData::OnSetViewModel(UDS_VM_MountData *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  UDS_LogManager *pUVar5;
  UDS_DataBase *this_00;
  TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr> TVar6;
  UDS_MountEvent *pUVar7;
  UObject *pUVar8;
  undefined1 auStackY_1b8 [32];
  FName local_188;
  int local_180;
  TSharedPtr<FDS_VMContext_MountData,1> local_178;
  TSharedPtr<FDS_ViewModelContext,1> local_168;
  undefined1 local_158 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  (**(code **)(this->_padding_ + 0x2f8))(this);
  local_168.Object = param_1->Object;
  local_168.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_168.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_VMContext_MountData>(&local_178,&local_168);
  if (local_178.Object == (FDS_VMContext_MountData *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_906055593410691048>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_MountData.cpp"
                       ,0x18,"false");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_MountData::OnSetViewModel",0x20,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_148.Ptr,0x19,L"context is nullptr.");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    (this->MountData).WeakPtr = ((local_178.Object)->MountData).WeakPtr;
    bVar4 = TWeakObjectPtr<UDS_MountData,FWeakObjectPtr>::UEOpEquals(&this->MountData,(void *)0x0);
    if (!bVar4) {
      this_00 = (UDS_DataBase *)FWeakObjectPtr::Get(&(this->MountData).WeakPtr);
      UDS_DataBase::GetDataContainerKey(this_00);
      TVar6 = TDS_DataSetGetter<UDS_MountDataSet>::Get((ulong64)local_158);
                    /* WARNING: Load size is inaccurate */
      (this->MountDataSet).WeakPtr = *TVar6.WeakPtr;
    }
    if (((local_178.Object)->IsSelected == true) &&
       (pUVar7 = UDS_MountEvent::GetEvent(), pUVar7 != (UDS_MountEvent *)0x0)) {
      pUVar8 = FWeakObjectPtr::Get(&(this->MountData).WeakPtr);
      FDS_EventDelegate<__int64_const_>::Broadcast
                (&pUVar7->MountDataSlotSelectedChangeDel,*(long64 *)&pUVar8[2].field_0x10);
    }
    (**(code **)(this->_padding_ + 0x2f0))(this);
    FVar3 = FFieldNotificationClassDescriptor::IsSelected.FieldName;
    if (this->IsSelected != (local_178.Object)->IsSelected) {
      local_180 = FFieldNotificationClassDescriptor::IsSelected.BitNumber;
      this->IsSelected = (local_178.Object)->IsSelected;
      local_188 = FVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_188);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_178.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetAttirbuteIcon @ 14be49050

void __thiscall
UDS_VM_MountData::SetAttirbuteIcon
          (UDS_VM_MountData *this,EDS_MountBodyType param_1,
          TArray<EDS_ClimateType,TSizedDefaultAllocator<32>_> *param_2,
          TArray<EDS_FlooringType,TSizedDefaultAllocator<32>_> *param_3,EDS_SeaterType param_4)

{
  FScriptContainerElement FVar1;
  FScriptContainerElement *pFVar2;
  ESlateVisibility EVar3;
  int iVar4;
  UEnum *pUVar5;
  FName local_b8;
  int local_b0;
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
  FName local_58;
  int local_50;
  FName local_48;
  int local_40;
  FName local_38;
  int local_30;
  FName local_28;
  int local_20;
  FName local_18;
  int local_10;
  
  pUVar5 = StaticEnum<enum_EDS_MountBodyType>();
  iVar4 = DS_Util::GetEnumIconID(pUVar5,(uint)param_1);
  this->MountBodyTypeIconID = iVar4;
  if (param_2->ArrayNum < 1) {
    EVar3 = Collapsed;
  }
  else {
    FVar1 = *(param_2->AllocatorInstance).Data;
    pUVar5 = StaticEnum<enum_EDS_ClimateType>();
    iVar4 = DS_Util::GetEnumIconID(pUVar5,(uint)(byte)FVar1);
    this->MountClimateTypeIconID_1 = iVar4;
    EVar3 = SelfHitTestInvisible;
  }
  this->ClimateTypeIconVisibilty_1 = EVar3;
  if (param_2->ArrayNum < 1) {
    EVar3 = Collapsed;
  }
  else {
    FVar1 = *(param_2->AllocatorInstance).Data;
    pUVar5 = StaticEnum<enum_EDS_ClimateType>();
    iVar4 = DS_Util::GetEnumIconID(pUVar5,(uint)(byte)FVar1);
    this->MountClimateTypeIconID_1 = iVar4;
    EVar3 = SelfHitTestInvisible;
  }
  this->ClimateTypeIconVisibilty_1 = EVar3;
  if (param_2->ArrayNum < 2) {
    EVar3 = Collapsed;
  }
  else {
    FVar1 = (param_2->AllocatorInstance).Data[1];
    pUVar5 = StaticEnum<enum_EDS_ClimateType>();
    iVar4 = DS_Util::GetEnumIconID(pUVar5,(uint)(byte)FVar1);
    this->MountClimateTypeIconID_2 = iVar4;
    EVar3 = SelfHitTestInvisible;
  }
  this->ClimateTypeIconVisibilty_2 = EVar3;
  if (param_3->ArrayNum < 1) {
    EVar3 = Collapsed;
  }
  else {
    FVar1 = *(param_3->AllocatorInstance).Data;
    pUVar5 = StaticEnum<enum_EDS_FlooringType>();
    iVar4 = DS_Util::GetEnumIconID(pUVar5,(uint)(byte)FVar1);
    this->MountFlooringTypeIconID_1 = iVar4;
    EVar3 = SelfHitTestInvisible;
  }
  this->FlooringTypeIconVisibilty_1 = EVar3;
  if (param_3->ArrayNum < 2) {
    EVar3 = Collapsed;
  }
  else {
    FVar1 = (param_3->AllocatorInstance).Data[1];
    pUVar5 = StaticEnum<enum_EDS_FlooringType>();
    iVar4 = DS_Util::GetEnumIconID(pUVar5,(uint)(byte)FVar1);
    this->MountFlooringTypeIconID_2 = iVar4;
    EVar3 = SelfHitTestInvisible;
  }
  this->FlooringTypeIconVisibilty_2 = EVar3;
  if (param_4 == None) {
    EVar3 = Collapsed;
  }
  else {
    pUVar5 = StaticEnum<enum_EDS_SeaterType>();
    iVar4 = DS_Util::GetEnumIconID(pUVar5,(uint)param_4);
    this->SeaterTypeIconID = iVar4;
    EVar3 = SelfHitTestInvisible;
  }
  this->SeaterTypeIconVisibilty = EVar3;
  local_b0 = FFieldNotificationClassDescriptor::ClimateTypeIconVisibilty_1.BitNumber;
  local_b8 = FFieldNotificationClassDescriptor::ClimateTypeIconVisibilty_1.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_b8);
  local_a0 = FFieldNotificationClassDescriptor::ClimateTypeIconVisibilty_2.BitNumber;
  local_a8 = FFieldNotificationClassDescriptor::ClimateTypeIconVisibilty_2.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_a8);
  local_90 = FFieldNotificationClassDescriptor::FlooringTypeIconVisibilty_1.BitNumber;
  local_98 = FFieldNotificationClassDescriptor::FlooringTypeIconVisibilty_1.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_98);
  local_80 = FFieldNotificationClassDescriptor::FlooringTypeIconVisibilty_2.BitNumber;
  local_88 = FFieldNotificationClassDescriptor::FlooringTypeIconVisibilty_2.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
  local_70 = FFieldNotificationClassDescriptor::SeaterTypeIconVisibilty.BitNumber;
  local_78 = FFieldNotificationClassDescriptor::SeaterTypeIconVisibilty.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
  local_60 = FFieldNotificationClassDescriptor::MountBodyTypeIconID.BitNumber;
  local_68 = FFieldNotificationClassDescriptor::MountBodyTypeIconID.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
  local_50 = FFieldNotificationClassDescriptor::MountClimateTypeIconID_1.BitNumber;
  local_58 = FFieldNotificationClassDescriptor::MountClimateTypeIconID_1.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_58);
  local_40 = FFieldNotificationClassDescriptor::MountClimateTypeIconID_2.BitNumber;
  local_48 = FFieldNotificationClassDescriptor::MountClimateTypeIconID_2.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_48);
  local_30 = FFieldNotificationClassDescriptor::MountFlooringTypeIconID_1.BitNumber;
  local_38 = FFieldNotificationClassDescriptor::MountFlooringTypeIconID_1.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
  local_20 = FFieldNotificationClassDescriptor::MountFlooringTypeIconID_2.BitNumber;
  local_28 = FFieldNotificationClassDescriptor::MountFlooringTypeIconID_2.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  local_10 = FFieldNotificationClassDescriptor::SeaterTypeIconID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::SeaterTypeIconID.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  pFVar2 = (param_2->AllocatorInstance).Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (param_3->AllocatorInstance).Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// SetSelectedMountStatusList @ 14be51680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_MountData::SetSelectedMountStatusList(UDS_VM_MountData *this)

{
  EDS_InfoViewValueFormat EVar1;
  int iVar2;
  bool bVar3;
  FDS_StatusTableRow *pFVar4;
  UDS_LogManager *pUVar5;
  UObject *pUVar6;
  FDS_CommonContentsInfoTableRow *pFVar7;
  int iVar8;
  int iVar9;
  undefined1 auStackY_188 [32];
  FName local_158;
  int local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  bVar3 = TWeakObjectPtr<UDS_MountData,FWeakObjectPtr>::UEOpEquals(&this->MountData,(void *)0x0);
  if ((bVar3) ||
     (bVar3 = TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr>::UEOpEquals
                        (&this->MountDataSet,(void *)0x0), bVar3)) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_MountData::SetSelectedMountStatusList",0x2c,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_148.Ptr,0xd4,L"MountData is nullptr.");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    FDS_EntryBindingEventField::Reset(&this->SelectedMountStatusEntry);
    pFVar4 = FDS_StatusTableRow::Get(0x197,true);
    if (pFVar4 == (FDS_StatusTableRow *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 != (UDS_LogManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_VM_MountData::SetSelectedMountStatusList",0x2c,Yes);
        UDS_LogManager::PrintLog(pUVar5,1,Warning,local_148.Ptr,0xdd,L"statusTableRow is nullptr.");
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
    }
    else {
      pUVar6 = FWeakObjectPtr::Get(&(this->MountData).WeakPtr);
      iVar2 = *(int *)&pUVar6[3].field_0x20;
      pFVar7 = FDS_CommonContentsInfoTableRow::Get(5,true);
      iVar9 = 0;
      iVar8 = 0;
      if (pFVar7 != (FDS_CommonContentsInfoTableRow *)0x0) {
        iVar8 = (int)(pFVar7->ID_Name).ID;
      }
      AddMountListItem(this,iVar8,iVar2,Integer);
      pUVar6 = FWeakObjectPtr::Get(&(this->MountData).WeakPtr);
      iVar2 = *(int *)&pUVar6[3].field_0x24;
      pFVar7 = FDS_CommonContentsInfoTableRow::Get(6,true);
      iVar8 = 0;
      if (pFVar7 != (FDS_CommonContentsInfoTableRow *)0x0) {
        iVar8 = (int)(pFVar7->ID_Name).ID;
      }
      AddMountListItem(this,iVar8,iVar2,Integer);
      pUVar6 = FWeakObjectPtr::Get(&(this->MountData).WeakPtr);
      iVar2 = *(int *)(pUVar6 + 4);
      pFVar7 = FDS_CommonContentsInfoTableRow::Get(7,true);
      if (pFVar7 != (FDS_CommonContentsInfoTableRow *)0x0) {
        iVar9 = (int)(pFVar7->ID_Name).ID;
      }
      AddMountListItem(this,iVar9,iVar2,Integer);
      EVar1 = pFVar4->InfoViewValueFormat;
      pUVar6 = FWeakObjectPtr::Get(&(this->MountData).WeakPtr);
      AddMountListItem(this,(int)(pFVar4->ID_StatusName).ID,*(int *)&pUVar6[4].field_0x4,EVar1);
      local_150 = FFieldNotificationClassDescriptor::SelectedMountStatusEntry.BitNumber;
      local_158 = FFieldNotificationClassDescriptor::SelectedMountStatusEntry.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_158);
    }
  }
  return;
}

// UnbindModel @ 14be55600

void __thiscall UDS_VM_MountData::UnbindModel(UDS_VM_MountData *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = TWeakObjectPtr<UDS_MountData,FWeakObjectPtr>::UEOpEquals(&this->MountData,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->MountData).WeakPtr);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar2 + 1),(UObject *)this)
    ;
  }
  bVar1 = TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr>::UEOpEquals
                    (&this->MountDataSet,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->MountDataSet).WeakPtr);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar2 + 1),(UObject *)this)
    ;
  }
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  return;
}

// UpdateData @ 14be56c50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_MountData::UpdateData(UDS_VM_MountData *this)

{
  EDS_SeaterType EVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  UObject *pUVar6;
  UDS_LogManager *pUVar7;
  FDS_MountBaseTableRow *this_00;
  ESlateVisibility EVar8;
  size_t sVar9;
  undefined1 auStackY_418 [32];
  TArray<EDS_FlooringType,TSizedDefaultAllocator<32>_> local_3d0;
  TArray<EDS_ClimateType,TSizedDefaultAllocator<32>_> local_3c0;
  FName local_3a8;
  int local_3a0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_418;
  bVar5 = TWeakObjectPtr<UDS_MountData,FWeakObjectPtr>::UEOpEquals(&this->MountData,(void *)0x0);
  if ((bVar5) ||
     (bVar5 = TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr>::UEOpEquals
                        (&this->MountDataSet,(void *)0x0), bVar5)) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_VM_MountData::UpdateData",0x1c,Yes);
      UDS_LogManager::PrintLog(pUVar7,1,Warning,local_158.Ptr,0x6f,L"MountData is nullptr.");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
  else {
    pUVar6 = FWeakObjectPtr::Get(&(this->MountData).WeakPtr);
    if (*(int *)&pUVar6[2].field_0x18 == 0) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_906055593410690954>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_MountData.cpp"
                         ,0x76,"false");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pUVar7 = UDS_LogManager::GetInst();
      if (pUVar7 != (UDS_LogManager *)0x0) {
        pUVar7 = UDS_LogManager::GetInst();
        local_398._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_398,"UDS_VM_MountData::UpdateData",0x1c,Yes);
        UDS_LogManager::PrintLog(pUVar7,1,Warning,local_398.Ptr,0x77,L"MountTID is 0");
        if ((void *)local_398._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_398._padding_);
        }
      }
    }
    this_00 = FDS_MountBaseTableRow::GetRef((longlong)*(int *)&pUVar6[2].field_0x18,true);
    bVar5 = FDS_MountBaseTableRow::IsValid(this_00);
    if (bVar5) {
      UDS_VM_Common_Mount::SetMountIconID((UDS_VM_Common_Mount *)this,this_00->ID_Portrait);
      if (*(int *)(pUVar6 + 3) < 2) {
        UDS_VM_Common_Mount::SetMountName
                  ((UDS_VM_Common_Mount *)this,(int)(this_00->ID_DefaultName).ID);
      }
      else {
        UDS_VM_Common_Mount::SetMountName
                  ((UDS_VM_Common_Mount *)this,(FString *)&pUVar6[2].field_0x20);
      }
      UDS_VM_Common_Mount::SetMountSkillTypeText((UDS_VM_Common_Mount *)this,this_00->RequiredSkill)
      ;
      UDS_VM_Common_Mount::SetRequireMountSkillLevelText
                ((UDS_VM_Common_Mount *)this,this_00->RequiredSkillValue);
      local_3d0.ArrayNum = (this_00->MountFlooringType).ArrayNum;
      sVar9 = (size_t)local_3d0.ArrayNum;
      EVar1 = this_00->SeaterType;
      pFVar2 = (this_00->MountFlooringType).AllocatorInstance.Data;
      local_3d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_3d0.ArrayNum == 0) {
        local_3d0.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,local_3d0.ArrayNum,0,&local_3d0.AllocatorInstance,local_3d0.ArrayNum,
                   &local_3d0.ArrayMax);
        memcpy(local_3d0.AllocatorInstance.Data,pFVar2,sVar9);
      }
      local_3c0.ArrayNum = (this_00->MountClimateType).ArrayNum;
      sVar9 = (size_t)local_3c0.ArrayNum;
      pFVar2 = (this_00->MountClimateType).AllocatorInstance.Data;
      local_3c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_3c0.ArrayNum == 0) {
        local_3c0.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,local_3c0.ArrayNum,0,&local_3c0.AllocatorInstance,local_3c0.ArrayNum,
                   &local_3c0.ArrayMax);
        memcpy(local_3c0.AllocatorInstance.Data,pFVar2,sVar9);
      }
      SetAttirbuteIcon(this,this_00->MountBodyType,&local_3c0,&local_3d0,EVar1);
      SetSelectedMountStatusList(this);
      pUVar6 = FWeakObjectPtr::Get(&(this->MountDataSet).WeakPtr);
      lVar3 = *(longlong *)&pUVar6[4].field_0x20;
      pUVar6 = FWeakObjectPtr::Get(&(this->MountData).WeakPtr);
      local_3a0 = FFieldNotificationClassDescriptor::IsBoarding.BitNumber;
      local_3a8 = FFieldNotificationClassDescriptor::IsBoarding.FieldName;
      EVar8 = Collapsed;
      if (lVar3 == *(longlong *)&pUVar6[2].field_0x10) {
        EVar8 = SelfHitTestInvisible;
      }
      if (this->IsBoarding != EVar8) {
        this->IsBoarding = EVar8;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_3a8);
      }
    }
    else {
      pUVar7 = UDS_LogManager::GetInst();
      if (pUVar7 != (UDS_LogManager *)0x0) {
        pUVar7 = UDS_LogManager::GetInst();
        local_278._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_278,"UDS_VM_MountData::UpdateData",0x1c,Yes);
        UDS_LogManager::PrintLog
                  (pUVar7,1,Warning,local_278.Ptr,0x7d,L"mountBaseTableRow IsValid false.");
        if ((void *)local_278._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_278._padding_);
        }
      }
    }
  }
  return;
}

