// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 22

// SetClickRepair_WrapperImpl @ 14b6955a0

void __cdecl UDS_VM_ItemRepair::SetClickRepair_WrapperImpl(void *param_1,void *param_2)

{
  UObject *pUVar1;
  UDS_ModelBase *this;
  FWeakObjectPtr FStackX_8;
  UDS_ModelEventItemRepair *apUStackX_18 [2];
  
  pUVar1 = GetTransientPackageAsObject();
  apUStackX_18[0] = NewObject<UDS_ModelEventItemRepair>(pUVar1);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (apUStackX_18[0] != (UDS_ModelEventItemRepair *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)apUStackX_18[0]);
  }
  FStackX_8.ObjectIndex = 0;
  FStackX_8.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (apUStackX_18[0] != (UDS_ModelEventItemRepair *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)apUStackX_18[0]);
  }
  FWeakObjectPtr::operator=(&FStackX_8,(FObjectPtr)apUStackX_18);
  pUVar1 = FWeakObjectPtr::Get(&FStackX_8);
  *(undefined4 *)&pUVar1[5].field_0x8 = 5;
  this = (UDS_ModelBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 0x174));
  UDS_ModelBase::UpdateModel(this,(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>)FStackX_8);
  return;
}

// StaticClass @ 14b6955b0

UClass * __cdecl UDS_VM_ItemRepair::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_ItemRepair.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_ItemRepair",
               &Z_Registration_Info_UClass_UDS_VM_ItemRepair.InnerSingleton,
               StaticRegisterNativesUDS_VM_ItemRepair,400,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_VM_ItemRepair>,
               InternalVTableHelperCtorCaller<UDS_VM_ItemRepair>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_ItemRepair.InnerSingleton;
}

// UDS_VM_ItemRepair @ 14b697cf0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_VM_ItemRepair * __thiscall
UDS_VM_ItemRepair::UDS_VM_ItemRepair(UDS_VM_ItemRepair *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ItemRepair__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  (this->VM_Repair_TabGroup).field0_0x0.DebugPtr = (UDS_VM_Common_TabGroup *)0x0;
  (this->VM_Management_TabGroup).field0_0x0.DebugPtr = (UDS_VM_Common_TabGroup *)0x0;
  (this->VM_Repair_AllTarget).field0_0x0.DebugPtr = (UDS_VM_ItemRepair_AllTarget *)0x0;
  (this->VM_Repair_Target).field0_0x0.DebugPtr = (UDS_VM_ItemRepair_Target *)0x0;
  (this->VM_Repair_MaterialInfo).field0_0x0.DebugPtr = (UDS_VM_ItemRepair_MaterialInfo *)0x0;
  (this->VM_CoinDisplay).field0_0x0.DebugPtr = (UDS_VM_MoneyDisplay *)0x0;
  (this->ClickRepair)._padding_ = '\0';
  (this->ClickRepair).bIsCustomSelected = false;
  (this->ClickRepair).bIsLacked = false;
  (this->ClickRepair).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickRepair).Delegate = 0;
  *(undefined8 *)&(this->ClickRepair).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickRepair).Delegate.field_0x10 = 0;
  (this->RepairButtonLabelText).StringTableType = None;
  (this->RepairButtonLabelText).StringTableID = 0;
  (this->RepairButtonLabelText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->RepairButtonLabelText).StringEnumTableNameID.Number = 0;
  (this->RepairButtonLabelText).DateTime.Ticks = 0;
  (this->RepairButtonLabelText).TimeSpan.Ticks = 0;
  (this->RepairButtonLabelText).TimeExpressionType = None;
  (this->RepairButtonLabelText).IsExpression = false;
  (this->RepairButtonLabelText).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RepairButtonLabelText).UniqueString.Data.ArrayNum = 0;
  (this->RepairButtonLabelText).UniqueString.Data.ArrayMax = 0;
  (this->RepairButtonLabelText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RepairButtonLabelText).FormatArgs.ArrayNum = 0;
  (this->RepairButtonLabelText).FormatArgs.ArrayMax = 0;
  (this->ItemRepairModel).WeakPtr = (FWeakObjectPtr)0x0;
  (this->M_WaitCompleteList).field0_0x0.DebugPtr = (UDS_M_WaitCompleteList *)0x0;
  return this;
}

// UDS_VM_ItemRepair @ 14b697df0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_VM_ItemRepair * __thiscall
UDS_VM_ItemRepair::UDS_VM_ItemRepair(UDS_VM_ItemRepair *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ItemRepair__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  (this->VM_Repair_TabGroup).field0_0x0.DebugPtr = (UDS_VM_Common_TabGroup *)0x0;
  (this->VM_Management_TabGroup).field0_0x0.DebugPtr = (UDS_VM_Common_TabGroup *)0x0;
  (this->VM_Repair_AllTarget).field0_0x0.DebugPtr = (UDS_VM_ItemRepair_AllTarget *)0x0;
  (this->VM_Repair_Target).field0_0x0.DebugPtr = (UDS_VM_ItemRepair_Target *)0x0;
  (this->VM_Repair_MaterialInfo).field0_0x0.DebugPtr = (UDS_VM_ItemRepair_MaterialInfo *)0x0;
  (this->VM_CoinDisplay).field0_0x0.DebugPtr = (UDS_VM_MoneyDisplay *)0x0;
  (this->ClickRepair)._padding_ = '\0';
  (this->ClickRepair).bIsCustomSelected = false;
  (this->ClickRepair).bIsLacked = false;
  (this->ClickRepair).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickRepair).Delegate = 0;
  *(undefined8 *)&(this->ClickRepair).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickRepair).Delegate.field_0x10 = 0;
  (this->RepairButtonLabelText).StringTableType = None;
  (this->RepairButtonLabelText).StringTableID = 0;
  (this->RepairButtonLabelText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->RepairButtonLabelText).StringEnumTableNameID.Number = 0;
  (this->RepairButtonLabelText).DateTime.Ticks = 0;
  (this->RepairButtonLabelText).TimeSpan.Ticks = 0;
  (this->RepairButtonLabelText).TimeExpressionType = None;
  (this->RepairButtonLabelText).IsExpression = false;
  (this->RepairButtonLabelText).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RepairButtonLabelText).UniqueString.Data.ArrayNum = 0;
  (this->RepairButtonLabelText).UniqueString.Data.ArrayMax = 0;
  (this->RepairButtonLabelText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RepairButtonLabelText).FormatArgs.ArrayNum = 0;
  (this->RepairButtonLabelText).FormatArgs.ArrayMax = 0;
  (this->ItemRepairModel).WeakPtr = (FWeakObjectPtr)0x0;
  (this->M_WaitCompleteList).field0_0x0.DebugPtr = (UDS_M_WaitCompleteList *)0x0;
  return this;
}

// ~UDS_VM_ItemRepair @ 14b69a4a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_ItemRepair::~UDS_VM_ItemRepair(UDS_VM_ItemRepair *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ItemRepair__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->RepairButtonLabelText).FormatArgs.AllocatorInstance.Data,
             (this->RepairButtonLabelText).FormatArgs.ArrayNum);
  pFVar1 = (this->RepairButtonLabelText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RepairButtonLabelText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickRepair).Delegate);
  pvVar2 = *(void **)&(this->ClickRepair).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickRepair).Delegate);
  UDS_VM_ModelBase::~UDS_VM_ModelBase((UDS_VM_ModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b69d020

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

IClassDescriptor * __thiscall
UDS_VM_ItemRepair::GetFieldNotificationDescriptor(UDS_VM_ItemRepair *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_ItemRepair::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b69d8a0

UClass * __cdecl UDS_VM_ItemRepair::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_ItemRepair.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_ItemRepair",
               &Z_Registration_Info_UClass_UDS_VM_ItemRepair.InnerSingleton,
               StaticRegisterNativesUDS_VM_ItemRepair,400,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_VM_ItemRepair>,
               InternalVTableHelperCtorCaller<UDS_VM_ItemRepair>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_ItemRepair.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_ItemRepair @ 14b69e610

void __cdecl UDS_VM_ItemRepair::StaticRegisterNativesUDS_VM_ItemRepair(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_ItemRepair_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnChangeWaitCompleteDataSet @ 14b69f730

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_ItemRepair::execOnChangeWaitCompleteDataSet(UObject *param_1,FFrame *param_2,void *param_3)

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
  OnChangeWaitCompleteDataSet((UDS_VM_ItemRepair *)param_1,local_res10);
  return;
}

// BindModel @ 14be77920

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UDS_VM_ItemRepair::BindModel(UDS_VM_ItemRepair *this)

{
  UDS_VM_Common_TabGroup *pUVar1;
  code *pcVar2;
  bool bVar3;
  UDS_UIEvent *pUVar4;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *pTVar5;
  UObject *pUVar6;
  char *pcVar7;
  UObject *this_00;
  UFunction *pUVar8;
  UDS_ItemRepairEvent *pUVar9;
  char *pcVar10;
  <lambda_1> local_res10 [8];
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_158;
  FWeakObjectPtr local_150;
  FName local_148;
  undefined1 local_140 [32];
  FName FStack_120;
  FWeakObjectPtr local_118;
  FName local_110;
  UDS_VM_Common_TabGroup *local_108;
  UDS_VM_Common_TabGroup *local_100;
  FName local_f8;
  UDS_VM_ItemRepair *local_f0;
  FName *local_e8 [2];
  code *local_d8;
  undefined8 uStack_d0;
  FDestructionSentinel local_c8;
  undefined1 local_b0 [16];
  undefined1 local_a0 [80];
  FReadAccessScope local_50;
  
  UDS_VM_ModelBase::BindModel((UDS_VM_ModelBase *)this);
  pUVar4 = UDS_UIEvent::GetEvent();
  if (pUVar4 != (UDS_UIEvent *)0x0) {
    pUVar1 = (this->VM_Repair_TabGroup).field0_0x0.DebugPtr;
    local_140._0_8_ = OnSelectedRepairTabEvent;
    local_140._8_4_ = 0;
    local_140._12_4_ = uStack_d0._4_4_;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar1 != (UDS_VM_Common_TabGroup *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 != (UDS_VM_Common_TabGroup *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
    }
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    local_108 = pUVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_VM_Common_TabGroup *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_108);
    pTVar5 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,0>_>
             ::FindOrAddImpl<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&>
                       ((TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,0>_>
                         *)&(pUVar4->OnSelectedTabIndex).Subscriptions,
                        local_res18.ObjectSerialNumber ^ local_res18.ObjectIndex,
                        (TWeakObjectPtr<UObject,FWeakObjectPtr> *)&local_res18);
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(pTVar5,this);
    local_a0._16_8_ = CONCAT44(local_140._12_4_,local_140._8_4_);
    local_a0._8_8_ = local_140._0_8_;
    TMulticastDelegateRegistration<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>::
    AddUObject<UDS_VM_ItemRepair>
              ((TMulticastDelegateRegistration<void___cdecl(int,int),FDefaultTSDelegateUserPolicy> *
               )pTVar5,(UDS_VM_ItemRepair *)local_b0,(pmf_8f3d7127 *)this);
    pUVar1 = (this->VM_Management_TabGroup).field0_0x0.DebugPtr;
    local_140._0_8_ = OnSelectedManagementTabEvent;
    local_140._12_4_ = uStack_d0._4_4_;
    local_140._8_4_ = 0;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar1 != (UDS_VM_Common_TabGroup *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 != (UDS_VM_Common_TabGroup *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
    }
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    local_100 = pUVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_VM_Common_TabGroup *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_100);
    pTVar5 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,0>_>
             ::FindOrAddImpl<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&>
                       ((TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,0>_>
                         *)&(pUVar4->OnSelectedTabIndex).Subscriptions,
                        local_res20.ObjectSerialNumber ^ local_res20.ObjectIndex,
                        (TWeakObjectPtr<UObject,FWeakObjectPtr> *)&local_res20);
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(pTVar5,this);
    local_a0._36_4_ = local_140._12_4_;
    local_a0._32_4_ = local_140._8_4_;
    local_a0._24_8_ = local_140._0_8_;
    TMulticastDelegateRegistration<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>::
    AddUObject<UDS_VM_ItemRepair>
              ((TMulticastDelegateRegistration<void___cdecl(int,int),FDefaultTSDelegateUserPolicy> *
               )pTVar5,(UDS_VM_ItemRepair *)(local_b0 + 8),(pmf_8f3d7127 *)this);
  }
  TDS_DataSetGetter<UDS_WaitCompleteDataSet>::Get((ulong64)&local_118);
  bVar3 = FWeakObjectPtr::IsValid(&local_118);
  if (!bVar3) goto LAB_14be77d3d;
  pUVar6 = FWeakObjectPtr::Get(&local_118);
  pcVar7 = strstr("&UDS_VM_ItemRepair::OnChangeWaitCompleteDataSet","::");
  if (pcVar7 == (char *)0x0) {
LAB_14be77b7b:
    pcVar10 = &DAT_00000002;
LAB_14be77b80:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    do {
      pcVar10 = pcVar7;
      pcVar7 = strstr(pcVar10 + 1,"::");
    } while (pcVar7 != (char *)0x0);
    if (pcVar10 == (char *)0x0) goto LAB_14be77b7b;
    pcVar10 = pcVar10 + 2;
    if (*pcVar10 == '0') goto LAB_14be77b80;
  }
  ::FName::FName(&local_f8,pcVar10);
  if ((this == (UDS_VM_ItemRepair *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x4c8,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_158.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_150.ObjectIndex = 0;
  local_150.ObjectSerialNumber = 0;
  local_148.ComparisonIndex.Value = 0;
  local_148.Number = 0;
  local_110 = local_f8;
  if ((this == (UDS_VM_ItemRepair *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_f0 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_VM_ItemRepair *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_150,(FObjectPtr)&local_f0);
  local_148 = local_110;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_158,(FReadAccessScope *)(local_a0 + 0x38));
  if ((local_148 == (FName)0x0) ||
     (this_00 = FWeakObjectPtr::Get(&local_150), this_00 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_a0 + 0x38));
LAB_14be77caf:
    local_e8[0] = &local_110;
    `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UDS_DataSetBase_*>::
    __Internal_BindDynamic<UDS_VM_ItemRepair>'::__l2::<lambda_1>::operator()(local_e8);
  }
  else {
    pUVar8 = UObject::FindFunction(this_00,local_148);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_a0 + 0x38));
    if (pUVar8 == (UFunction *)0x0) goto LAB_14be77caf;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_158,&local_50);
  local_140._24_4_ = local_150.ObjectIndex;
  local_140._28_4_ = local_150.ObjectSerialNumber;
  FStack_120 = local_148;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_50);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pUVar6 + 1),
             (FWriteAccessScope *)&local_c8);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&pUVar6[1].field_0x8,local_res10,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar6 + 1),
             (TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> *)(local_140 + 0x18));
  if (local_c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c8.Accessor,&local_c8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_158.AccessDetector);
LAB_14be77d3d:
  pUVar9 = UDS_ItemRepairEvent::GetEvent();
  if (pUVar9 != (UDS_ItemRepairEvent *)0x0) {
    FStack_120 = (FName)((ulonglong)FStack_120 & 0xffffffff00000000);
    local_140._24_8_ = OnReceivedRegisterRestoreWaitCompleteResult;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar9->OnReceivedRegisterRestoreWaitCompleteResult,this);
    local_a0._40_8_ = local_140._24_8_;
    local_a0._48_4_ = FStack_120.ComparisonIndex.Value;
    local_a0._52_4_ = FStack_120.Number;
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_ItemRepair>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar9->OnReceivedRegisterRestoreWaitCompleteResult,(UDS_VM_ItemRepair *)local_a0,
               (pmf_08e92339 *)this);
    FStack_120 = (FName)((ulonglong)FStack_120 & 0xffffffff00000000);
    local_140._24_8_ = OnReceiveRestoreCancelResult;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar9->OnReceiveRestoreCancelResult,this);
    local_d8 = (code *)local_140._24_8_;
    uStack_d0._0_4_ = FStack_120.ComparisonIndex.Value;
    uStack_d0._4_4_ = FStack_120.Number;
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_ItemRepair>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar9->OnReceiveRestoreCancelResult,(UDS_VM_ItemRepair *)local_140,
               (pmf_08e92339 *)this);
  }
  return;
}

// InitRepair @ 14be8be60

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_ItemRepair::InitRepair(UDS_VM_ItemRepair *this)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  UObject *pUVar4;
  FName FVar5;
  FString *pFVar6;
  wchar_t *_Str;
  ESlateVisibility EVar7;
  wchar_t *_Str_00;
  ESlateVisibility EVar8;
  undefined1 local_res8 [8];
  FName local_38;
  int local_30;
  
  this->bIsDisableRepairButton = true;
  local_30 = FFieldNotificationClassDescriptor::bIsDisableRepairButton.BitNumber;
  local_38 = FFieldNotificationClassDescriptor::bIsDisableRepairButton.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
  pUVar4 = FWeakObjectPtr::Get(&(this->ItemRepairModel).WeakPtr);
  FVar5 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemRepairData>
                    ((FDS_DataContainer *)&pUVar4[1].field_0x18,(EDS_ItemRepairData)local_res8);
  uVar1 = *(undefined8 *)FVar5;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar6 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)&pUVar4[1].field_0x18,uVar2 + (int)((ulonglong)uVar1 >> 0x20),
                      (FName *)FVar5);
  _Str_00 = L"";
  if ((pFVar6->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
  iVar3 = _wtoi(_Str);
  EVar8 = Collapsed;
  EVar7 = Collapsed;
  if (iVar3 == 0) {
    EVar7 = SelfHitTestInvisible;
  }
  this->RepairInfoVisibility = EVar7;
  local_30 = FFieldNotificationClassDescriptor::RepairInfoVisibility.BitNumber;
  local_38 = FFieldNotificationClassDescriptor::RepairInfoVisibility.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
  pUVar4 = FWeakObjectPtr::Get(&(this->ItemRepairModel).WeakPtr);
  FVar5 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemRepairData>
                    ((FDS_DataContainer *)&pUVar4[1].field_0x18,(EDS_ItemRepairData)local_res8);
  uVar1 = *(undefined8 *)FVar5;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar6 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)&pUVar4[1].field_0x18,uVar2 + (int)((ulonglong)uVar1 >> 0x20),
                      (FName *)FVar5);
  if ((pFVar6->Data).ArrayNum != 0) {
    _Str_00 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
  iVar3 = _wtoi(_Str_00);
  if (iVar3 == 0) {
    EVar8 = SelfHitTestInvisible;
  }
  this->MaterialInfoVisibility = EVar8;
  local_30 = FFieldNotificationClassDescriptor::MaterialInfoVisibility.BitNumber;
  local_38 = FFieldNotificationClassDescriptor::MaterialInfoVisibility.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
  return;
}

// InitViewModel @ 14be8d9a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_VM_ItemRepair::InitViewModel(UDS_VM_ItemRepair *this)

{
  UDS_VM_Common_TabGroup *pUVar1;
  UClass *pUVar2;
  UClass *pUVar3;
  UDS_VM_ItemRepair_AllTarget *pUVar4;
  UDS_VM_ItemRepair_Target *pUVar5;
  UDS_VM_ItemRepair_MaterialInfo *pUVar6;
  UDS_VM_MoneyDisplay *pUVar7;
  longlong *plVar8;
  undefined1 auStack_d8 [32];
  FName local_b8;
  int local_b0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if ((this->VM_Repair_TabGroup).field0_0x0.DebugPtr == (UDS_VM_Common_TabGroup *)0x0) {
    pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_Common_TabGroup>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_VM_Common_TabGroup *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->VM_Repair_TabGroup).field0_0x0.DebugPtr = pUVar1;
  }
  if ((this->VM_Management_TabGroup).field0_0x0.DebugPtr == (UDS_VM_Common_TabGroup *)0x0) {
    pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_Common_TabGroup>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_VM_Common_TabGroup *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->VM_Management_TabGroup).field0_0x0.DebugPtr = pUVar1;
  }
  if ((this->VM_Repair_AllTarget).field0_0x0.DebugPtr == (UDS_VM_ItemRepair_AllTarget *)0x0) {
    local_b8.ComparisonIndex.Value = 0;
    local_b8.Number = 0;
    pUVar2 = Z_Construct_UClass_UDS_VM_ItemRepair_AllTarget_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar3 = Z_Construct_UClass_UDS_VM_ItemRepair_AllTarget_NoRegister();
    CheckIsClassChildOf_Internal(pUVar3,pUVar2);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar2);
    local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_a8._56_8_ = (UPackage *)0x0;
    local_a8._16_4_ = 0;
    local_a8._20_4_ = 0;
    local_a8._24_4_ = RF_Transient;
    local_a8._40_8_ = (UObject *)0x0;
    local_a8[0x20] = false;
    local_a8._8_8_ = this;
    pUVar4 = (UDS_VM_ItemRepair_AllTarget *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar8 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    if (pUVar4 != (UDS_VM_ItemRepair_AllTarget *)0x0) {
      *(undefined1 *)((longlong)&pUVar4->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (UDS_VM_ItemRepair_AllTarget *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->VM_Repair_AllTarget).field0_0x0.DebugPtr = pUVar4;
  }
  if ((this->VM_Repair_Target).field0_0x0.DebugPtr == (UDS_VM_ItemRepair_Target *)0x0) {
    local_b8.ComparisonIndex.Value = 0;
    local_b8.Number = 0;
    pUVar2 = Z_Construct_UClass_UDS_VM_ItemRepair_Target_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar3 = Z_Construct_UClass_UDS_VM_ItemRepair_Target_NoRegister();
    CheckIsClassChildOf_Internal(pUVar3,pUVar2);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar2);
    local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_a8._56_8_ = (UPackage *)0x0;
    local_a8._16_4_ = 0;
    local_a8._20_4_ = 0;
    local_a8._24_4_ = RF_Transient;
    local_a8._40_8_ = (UObject *)0x0;
    local_a8[0x20] = false;
    local_a8._8_8_ = this;
    pUVar5 = (UDS_VM_ItemRepair_Target *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar8 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    if (pUVar5 != (UDS_VM_ItemRepair_Target *)0x0) {
      *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_VM_ItemRepair_Target *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->VM_Repair_Target).field0_0x0.DebugPtr = pUVar5;
  }
  if ((this->VM_Repair_MaterialInfo).field0_0x0.DebugPtr == (UDS_VM_ItemRepair_MaterialInfo *)0x0) {
    local_b8.ComparisonIndex.Value = 0;
    local_b8.Number = 0;
    pUVar2 = Z_Construct_UClass_UDS_VM_ItemRepair_MaterialInfo_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar3 = Z_Construct_UClass_UDS_VM_ItemRepair_MaterialInfo_NoRegister();
    CheckIsClassChildOf_Internal(pUVar3,pUVar2);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar2);
    local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_a8._56_8_ = (UPackage *)0x0;
    local_a8._16_4_ = 0;
    local_a8._20_4_ = 0;
    local_a8._24_4_ = RF_Transient;
    local_a8._40_8_ = (UObject *)0x0;
    local_a8[0x20] = false;
    local_a8._8_8_ = this;
    pUVar6 = (UDS_VM_ItemRepair_MaterialInfo *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar8 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    if (pUVar6 != (UDS_VM_ItemRepair_MaterialInfo *)0x0) {
      *(undefined1 *)((longlong)&pUVar6->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar6 != (UDS_VM_ItemRepair_MaterialInfo *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    (this->VM_Repair_MaterialInfo).field0_0x0.DebugPtr = pUVar6;
  }
  if ((this->VM_CoinDisplay).field0_0x0.DebugPtr == (UDS_VM_MoneyDisplay *)0x0) {
    pUVar7 = UDS_ViewModelBase::CreateViewModel<UDS_VM_MoneyDisplay>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar7 != (UDS_VM_MoneyDisplay *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    (this->VM_CoinDisplay).field0_0x0.DebugPtr = pUVar7;
  }
  this->SelectedManagementTab = Inventory;
  this->ItemManagementSwitcher = 0;
  local_b0 = FFieldNotificationClassDescriptor::ItemManagementSwitcher.BitNumber;
  local_b8 = FFieldNotificationClassDescriptor::ItemManagementSwitcher.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_b8);
  return;
}

// OnChangeWaitCompleteDataSet @ 14be90fd0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_ItemRepair::OnChangeWaitCompleteDataSet(UDS_VM_ItemRepair *this,UDS_DataSetBase *param_1)

{
  UDS_VM_Common_TabGroup *pUVar1;
  bool bVar2;
  int iVar3;
  UDS_M_ItemRepair *this_00;
  FString *pFVar4;
  FDS_Text *pFVar5;
  UDS_WaitCompleteDataSet *this_01;
  EDS_WaitCompleteType local_res8 [8];
  FWeakObjectPtr local_res18 [2];
  FString local_68;
  FDS_Text local_58;
  
  pUVar1 = (this->VM_Management_TabGroup).field0_0x0.DebugPtr;
  if ((pUVar1 != (UDS_VM_Common_TabGroup *)0x0) && (((uint)pUVar1->_padding_ >> 0x1e & 1) == 0)) {
    pUVar1 = (this->VM_Management_TabGroup).field0_0x0.DebugPtr;
    this_00 = (UDS_M_ItemRepair *)FWeakObjectPtr::Get(&(this->ItemRepairModel).WeakPtr);
    pFVar4 = UDS_M_ItemRepair::GetWaitCompleteListCountString(this_00,&local_68);
    pFVar5 = FDS_Text::FromStringTableFormat<FString>(&local_58,StringUi,0x9fd8,pFVar4);
    UDS_VM_Common_TabGroup::SetTabText(pUVar1,1,pFVar5);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data,
               local_58.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0)
    {
      FMemory::Free(local_58.FormatArgs.AllocatorInstance.Data);
    }
    if (local_58.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.UniqueString.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    TDS_DataSetGetter<UDS_WaitCompleteDataSet>::Get((ulong64)local_res18);
    bVar2 = FWeakObjectPtr::IsValid(local_res18);
    if (bVar2) {
      this_01 = (UDS_WaitCompleteDataSet *)FWeakObjectPtr::Get(local_res18);
      local_res8[0] = ItemRestore;
      iVar3 = UDS_WaitCompleteDataSet::GetTotalCount(this_01,local_res8);
      UDS_VM_Common_TabGroup::SetIsReddot
                ((this->VM_Management_TabGroup).field0_0x0.DebugPtr,1,iVar3 != 0);
    }
    local_68.Data.ArrayNum = FFieldNotificationClassDescriptor::VM_Management_TabGroup.BitNumber;
    local_68.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)
         FFieldNotificationClassDescriptor::VM_Management_TabGroup.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
  }
  return;
}

// OnClickRepair @ 14be96a00

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_ItemRepair::OnClickRepair(UDS_VM_ItemRepair *this,FDS_ButtonEventField *param_1)

{
  UObject *pUVar1;
  UDS_ModelBase *this_00;
  FWeakObjectPtr local_res8;
  UDS_ModelEventItemRepair *local_res18 [2];
  
  pUVar1 = GetTransientPackageAsObject();
  local_res18[0] = NewObject<UDS_ModelEventItemRepair>(pUVar1);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res18[0] != (UDS_ModelEventItemRepair *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18[0]);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res18[0] != (UDS_ModelEventItemRepair *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18[0]);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
  pUVar1 = FWeakObjectPtr::Get(&local_res8);
  *(undefined4 *)&pUVar1[5].field_0x8 = 5;
  this_00 = (UDS_ModelBase *)FWeakObjectPtr::Get(&(this->ItemRepairModel).WeakPtr);
  UDS_ModelBase::UpdateModel(this_00,(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>)local_res8);
  return;
}

// OnReceiveRestoreCancelResult @ 14be9bdd0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_ItemRepair::OnReceiveRestoreCancelResult(UDS_VM_ItemRepair *this)

{
  FName local_18;
  int local_10;
  
  UDS_VM_Common_TabGroup::SetSelectedIndex((this->VM_Management_TabGroup).field0_0x0.DebugPtr,0);
  local_10 = FFieldNotificationClassDescriptor::VM_Management_TabGroup.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VM_Management_TabGroup.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnReceivedRegisterRestoreWaitCompleteResult @ 14be9be20

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_ItemRepair::OnReceivedRegisterRestoreWaitCompleteResult(UDS_VM_ItemRepair *this)

{
  FName local_18;
  int local_10;
  
  UDS_VM_Common_TabGroup::SetSelectedIndex((this->VM_Management_TabGroup).field0_0x0.DebugPtr,1);
  local_10 = FFieldNotificationClassDescriptor::VM_Management_TabGroup.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VM_Management_TabGroup.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnSelectedManagementTabEvent @ 14be9cbb0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_ItemRepair::OnSelectedManagementTabEvent(UDS_VM_ItemRepair *this,int param_1,int param_2)

{
  bool bVar1;
  UObject *pUVar2;
  UDS_ModelBase *this_00;
  FWeakObjectPtr local_res8;
  UDS_ModelEventItemRepair *local_res20;
  FName local_28;
  int local_20;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->ItemRepairModel).WeakPtr);
  if (bVar1) {
    this->ItemManagementSwitcher = param_1;
    local_20 = FFieldNotificationClassDescriptor::ItemManagementSwitcher.BitNumber;
    local_28 = FFieldNotificationClassDescriptor::ItemManagementSwitcher.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
    pUVar2 = GetTransientPackageAsObject();
    local_res20 = NewObject<UDS_ModelEventItemRepair>(pUVar2);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res20 != (UDS_ModelEventItemRepair *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res20);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res20 != (UDS_ModelEventItemRepair *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res20);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
    pUVar2 = FWeakObjectPtr::Get(&local_res8);
    *(uint *)&pUVar2[5].field_0x8 = (param_1 != 0) + 3;
    this_00 = (UDS_ModelBase *)FWeakObjectPtr::Get(&(this->ItemRepairModel).WeakPtr);
    UDS_ModelBase::UpdateModel
              (this_00,(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>)local_res8);
  }
  return;
}

// OnSelectedRepairTabEvent @ 14be9d080

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_ItemRepair::OnSelectedRepairTabEvent(UDS_VM_ItemRepair *this,int param_1,int param_2)

{
  bool bVar1;
  UObject *pUVar2;
  UDS_ModelBase *this_00;
  FWeakObjectPtr local_res8;
  UDS_ModelEventItemRepair *local_res20;
  FName local_28;
  int local_20;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->ItemRepairModel).WeakPtr);
  if (bVar1) {
    this->RepairSwitcher = param_1;
    local_20 = FFieldNotificationClassDescriptor::RepairSwitcher.BitNumber;
    local_28 = FFieldNotificationClassDescriptor::RepairSwitcher.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
    pUVar2 = GetTransientPackageAsObject();
    local_res20 = NewObject<UDS_ModelEventItemRepair>(pUVar2);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res20 != (UDS_ModelEventItemRepair *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res20);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res20 != (UDS_ModelEventItemRepair *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res20);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
    pUVar2 = FWeakObjectPtr::Get(&local_res8);
    *(uint *)&pUVar2[5].field_0x8 = (param_1 != 0) + 1;
    this_00 = (UDS_ModelBase *)FWeakObjectPtr::Get(&(this->ItemRepairModel).WeakPtr);
    UDS_ModelBase::UpdateModel
              (this_00,(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>)local_res8);
  }
  return;
}

// OnSetViewModel @ 14bea46b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_ItemRepair::OnSetViewModel
          (UDS_VM_ItemRepair *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  UDS_VM_Common_TabGroup *pUVar1;
  UDS_VM_ItemRepair_AllTarget *this_00;
  UDS_VM_ItemRepair_Target *this_01;
  UDS_VM_ItemRepair_MaterialInfo *this_02;
  UDS_VM_MoneyDisplay *this_03;
  code *pcVar2;
  FDS_ViewModelContext_TabGroup *pFVar3;
  FDS_ViewModelContext_ItemRepair *pFVar4;
  FDS_ViewModelContext_MoneyDisplay *pFVar5;
  bool bVar6;
  int iVar7;
  UClass *pUVar8;
  UDS_M_ItemRepair *this_04;
  FString *pFVar9;
  FDS_Text *pFVar10;
  UObject *local_res8;
  FName local_258;
  int local_250;
  TSharedPtr<FDS_ViewModelContext_TabGroup,1> local_248;
  TSharedPtr<FDS_ViewModelContext_ItemRepair,1> local_238;
  TSharedPtr<FDS_ViewModelContext_ItemRepair,1> local_228;
  TSharedPtr<FDS_ViewModelContext_ItemRepair,1> local_218;
  TSharedPtr<FDS_ViewModelContext_MoneyDisplay,1> local_208;
  TSharedPtr<FDS_ViewModelContext_TabGroup,1> local_1f8;
  FDS_Text local_1e8;
  FDS_Text local_198;
  FDS_Text local_148;
  TSharedPtr<FDS_ViewModelContext,1> local_f8;
  TSharedPtr<FDS_ViewModelContext,1> local_e8;
  TSharedPtr<FDS_ViewModelContext,1> local_d8;
  TSharedPtr<FDS_ViewModelContext,1> local_c8;
  TSharedPtr<FDS_ViewModelContext,1> local_b8;
  TSharedPtr<FDS_ViewModelContext,1> local_a8;
  FString local_98;
  TSharedPtr<FDS_ViewModelContext,1> local_88;
  FDS_Text local_78;
  
  local_f8.Object = param_1->Object;
  local_f8.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_VM_ModelBase::OnSetViewModel((UDS_VM_ModelBase *)this,&local_f8);
  local_res8 = (UObject *)0x0;
  if (this->_padding_ != 0) {
    pUVar8 = Z_Construct_UClass_UDS_M_ItemRepair_NoRegister();
    bVar6 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar8);
    if (bVar6) {
      local_res8 = (UObject *)this->_padding_;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  FWeakObjectPtr::operator=(&(this->ItemRepairModel).WeakPtr,(FObjectPtr)&local_res8);
  if ((this->VM_Repair_TabGroup).field0_0x0.DebugPtr != (UDS_VM_Common_TabGroup *)0x0) {
    MakeContext<FDS_ViewModelContext_TabGroup>(&local_248);
    pFVar3 = local_248.Object;
    if ((local_248.Object == (FDS_ViewModelContext_TabGroup *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(undefined4 *)&pFVar3->_padding_ = 0x162;
    pFVar3->SelectedIndex = 0;
    local_1e8.StringTableType = None;
    local_1e8.StringTableID = 0;
    local_1e8.DateTime.Ticks = 0;
    local_1e8.TimeSpan.Ticks = 0;
    local_1e8.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_1e8.StringEnumTableNameID.Number = 0;
    local_1e8.TimeExpressionType = None;
    local_1e8.IsExpression = false;
    local_1e8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1e8.UniqueString.Data.ArrayNum = 0;
    local_1e8.UniqueString.Data.ArrayMax = 0;
    local_1e8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1e8.FormatArgs.ArrayNum = 0;
    local_1e8.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromStringTable(&local_1e8,StringUi,0x9fd5);
    iVar7 = (pFVar3->TabInfos).ArrayNum;
    if (iVar7 == (pFVar3->TabInfos).ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x860,&(pFVar3->TabInfos).AllocatorInstance,&(pFVar3->TabInfos).ArrayMax);
    }
    (pFVar3->TabInfos).ArrayNum = iVar7 + 1;
    FDS_TabInfo::FDS_TabInfo
              ((FDS_TabInfo *)((pFVar3->TabInfos).AllocatorInstance.Data + (longlong)iVar7 * 0x60),
               &local_1e8);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_1e8.FormatArgs.AllocatorInstance.Data,
               local_1e8.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_1e8.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0
       ) {
      FMemory::Free(local_1e8.FormatArgs.AllocatorInstance.Data);
    }
    if (local_1e8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.UniqueString.Data.AllocatorInstance.Data);
    }
    local_198.StringTableType = None;
    local_198.StringTableID = 0;
    local_198.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_198.StringEnumTableNameID.Number = 0;
    local_198.TimeExpressionType = None;
    local_198.DateTime.Ticks = 0;
    local_198.TimeSpan.Ticks = 0;
    local_198.IsExpression = false;
    local_198.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_198.UniqueString.Data.ArrayNum = 0;
    local_198.UniqueString.Data.ArrayMax = 0;
    local_198.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_198.FormatArgs.ArrayNum = 0;
    local_198.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromStringTable(&local_198,StringUi,0x9fd6);
    iVar7 = (pFVar3->TabInfos).ArrayNum;
    if (iVar7 == (pFVar3->TabInfos).ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x860,&(pFVar3->TabInfos).AllocatorInstance,&(pFVar3->TabInfos).ArrayMax);
    }
    (pFVar3->TabInfos).ArrayNum = iVar7 + 1;
    FDS_TabInfo::FDS_TabInfo
              ((FDS_TabInfo *)((pFVar3->TabInfos).AllocatorInstance.Data + (longlong)iVar7 * 0x60),
               &local_198);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_198.FormatArgs.AllocatorInstance.Data,
               local_198.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_198.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0
       ) {
      FMemory::Free(local_198.FormatArgs.AllocatorInstance.Data);
    }
    if (local_198.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.UniqueString.Data.AllocatorInstance.Data);
    }
    pFVar3->LeftKeyActionType = IA_UI_Category_Left;
    pFVar3->RightKeyActionType = IA_UI_Category_Right;
    pUVar1 = (this->VM_Repair_TabGroup).field0_0x0.DebugPtr;
    local_e8.Object = (FDS_ViewModelContext *)local_248.Object;
    local_e8.SharedReferenceCount.ReferenceController =
         local_248.SharedReferenceCount.ReferenceController;
    if (local_248.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_248.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_248.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar1,&local_e8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_248.SharedReferenceCount.ReferenceController);
  }
  if ((this->VM_Repair_AllTarget).field0_0x0.DebugPtr != (UDS_VM_ItemRepair_AllTarget *)0x0) {
    MakeContext<FDS_ViewModelContext_ItemRepair>(&local_238);
    pFVar4 = local_238.Object;
    if ((local_238.Object == (FDS_ViewModelContext_ItemRepair *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(undefined4 *)&pFVar4->_padding_ = 0x1e8;
    (pFVar4->ItemRepairModel).WeakPtr = (this->ItemRepairModel).WeakPtr;
    this_00 = (this->VM_Repair_AllTarget).field0_0x0.DebugPtr;
    local_d8.Object = (FDS_ViewModelContext *)local_238.Object;
    local_d8.SharedReferenceCount.ReferenceController =
         local_238.SharedReferenceCount.ReferenceController;
    if (local_238.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_238.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_238.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&local_d8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_238.SharedReferenceCount.ReferenceController);
  }
  if ((this->VM_Repair_Target).field0_0x0.DebugPtr != (UDS_VM_ItemRepair_Target *)0x0) {
    MakeContext<FDS_ViewModelContext_ItemRepair>(&local_228);
    pFVar4 = local_228.Object;
    if ((local_228.Object == (FDS_ViewModelContext_ItemRepair *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(undefined4 *)&pFVar4->_padding_ = 0x1e9;
    (pFVar4->ItemRepairModel).WeakPtr = (this->ItemRepairModel).WeakPtr;
    this_01 = (this->VM_Repair_Target).field0_0x0.DebugPtr;
    local_c8.Object = (FDS_ViewModelContext *)local_228.Object;
    local_c8.SharedReferenceCount.ReferenceController =
         local_228.SharedReferenceCount.ReferenceController;
    if (local_228.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_228.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_228.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_01,&local_c8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_228.SharedReferenceCount.ReferenceController);
  }
  if ((this->VM_Repair_MaterialInfo).field0_0x0.DebugPtr != (UDS_VM_ItemRepair_MaterialInfo *)0x0) {
    MakeContext<FDS_ViewModelContext_ItemRepair>(&local_218);
    pFVar4 = local_218.Object;
    if ((local_218.Object == (FDS_ViewModelContext_ItemRepair *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(undefined4 *)&pFVar4->_padding_ = 0x1ea;
    (pFVar4->ItemRepairModel).WeakPtr = (this->ItemRepairModel).WeakPtr;
    this_02 = (this->VM_Repair_MaterialInfo).field0_0x0.DebugPtr;
    local_b8.Object = (FDS_ViewModelContext *)local_218.Object;
    local_b8.SharedReferenceCount.ReferenceController =
         local_218.SharedReferenceCount.ReferenceController;
    if (local_218.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_218.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_218.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_02,&local_b8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_218.SharedReferenceCount.ReferenceController);
  }
  if ((this->VM_CoinDisplay).field0_0x0.DebugPtr != (UDS_VM_MoneyDisplay *)0x0) {
    MakeContext<FDS_ViewModelContext_MoneyDisplay>(&local_208);
    pFVar5 = local_208.Object;
    if ((local_208.Object == (FDS_ViewModelContext_MoneyDisplay *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(undefined4 *)&pFVar5->_padding_ = 0x192;
    pFVar5->MoneyId = (long64)&DAT_00000001;
    pFVar5->Quantity = 0;
    this_03 = (this->VM_CoinDisplay).field0_0x0.DebugPtr;
    local_a8.Object = (FDS_ViewModelContext *)local_208.Object;
    local_a8.SharedReferenceCount.ReferenceController =
         local_208.SharedReferenceCount.ReferenceController;
    if (local_208.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_208.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_208.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_03,&local_a8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_208.SharedReferenceCount.ReferenceController);
  }
  FDS_Text::SetTextFromStringTable(&this->RepairButtonLabelText,StringUi,0x9fdc);
  local_250 = FFieldNotificationClassDescriptor::RepairButtonLabelText.BitNumber;
  local_258 = FFieldNotificationClassDescriptor::RepairButtonLabelText.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_258);
  InitRepair(this);
  if ((this->VM_Management_TabGroup).field0_0x0.DebugPtr != (UDS_VM_Common_TabGroup *)0x0) {
    MakeContext<FDS_ViewModelContext_TabGroup>(&local_1f8);
    pFVar3 = local_1f8.Object;
    if ((local_1f8.Object == (FDS_ViewModelContext_TabGroup *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(undefined4 *)&pFVar3->_padding_ = 0x162;
    pFVar3->SelectedIndex = 0;
    local_148.StringTableType = None;
    local_148.StringTableID = 0;
    local_148.DateTime.Ticks = 0;
    local_148.TimeSpan.Ticks = 0;
    local_148.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_148.StringEnumTableNameID.Number = 0;
    local_148.TimeExpressionType = None;
    local_148.IsExpression = false;
    local_148.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_148.UniqueString.Data.ArrayNum = 0;
    local_148.UniqueString.Data.ArrayMax = 0;
    local_148.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_148.FormatArgs.ArrayNum = 0;
    local_148.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromStringTable(&local_148,StringUi,0x9fd7);
    iVar7 = (pFVar3->TabInfos).ArrayNum;
    if (iVar7 == (pFVar3->TabInfos).ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x860,&(pFVar3->TabInfos).AllocatorInstance,&(pFVar3->TabInfos).ArrayMax);
    }
    (pFVar3->TabInfos).ArrayNum = iVar7 + 1;
    FDS_TabInfo::FDS_TabInfo
              ((FDS_TabInfo *)((pFVar3->TabInfos).AllocatorInstance.Data + (longlong)iVar7 * 0x60),
               &local_148);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_148.FormatArgs.AllocatorInstance.Data,
               local_148.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_148.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0
       ) {
      FMemory::Free(local_148.FormatArgs.AllocatorInstance.Data);
    }
    if (local_148.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.UniqueString.Data.AllocatorInstance.Data);
    }
    this_04 = (UDS_M_ItemRepair *)FWeakObjectPtr::Get(&(this->ItemRepairModel).WeakPtr);
    pFVar9 = UDS_M_ItemRepair::GetWaitCompleteListCountString(this_04,&local_98);
    pFVar10 = FDS_Text::FromStringTableFormat<FString>(&local_78,StringUi,0x9fd8,pFVar9);
    iVar7 = (pFVar3->TabInfos).ArrayNum;
    if (iVar7 == (pFVar3->TabInfos).ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x860,&(pFVar3->TabInfos).AllocatorInstance,&(pFVar3->TabInfos).ArrayMax);
    }
    (pFVar3->TabInfos).ArrayNum = iVar7 + 1;
    FDS_TabInfo::FDS_TabInfo
              ((FDS_TabInfo *)((pFVar3->TabInfos).AllocatorInstance.Data + (longlong)iVar7 * 0x60),
               pFVar10);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_78.FormatArgs.AllocatorInstance.Data,
               local_78.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_78.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0)
    {
      FMemory::Free(local_78.FormatArgs.AllocatorInstance.Data);
    }
    if (local_78.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.UniqueString.Data.AllocatorInstance.Data);
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    local_88.Object = (FDS_ViewModelContext *)local_1f8.Object;
    local_88.SharedReferenceCount.ReferenceController =
         local_1f8.SharedReferenceCount.ReferenceController;
    pFVar3->LeftKeyActionType = IA_UI_Category_Left;
    pFVar3->RightKeyActionType = IA_UI_Category_Right;
    pUVar1 = (this->VM_Management_TabGroup).field0_0x0.DebugPtr;
    if (local_1f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_1f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar1,&local_88);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1f8.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// PostUpdateRepairModel @ 14beabff0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_ItemRepair::PostUpdateRepairModel(UDS_VM_ItemRepair *this,EDS_ItemRepairType param_1)

{
  UDS_VM_MoneyDisplay *pUVar1;
  bool bVar2;
  bool bVar3;
  UObject *pUVar4;
  UDS_M_ItemRepair *this_00;
  ESlateVisibility EVar5;
  UDS_VM_MoneyDisplay *this_01;
  int local_res8 [2];
  long64 local_res18 [2];
  FName local_28;
  int local_20;
  
  bVar2 = TWeakObjectPtr<UDS_M_ItemRepair,FWeakObjectPtr>::UEOpEquals
                    (&this->ItemRepairModel,(void *)0x0);
  if ((!bVar2) && ((this->VM_CoinDisplay).field0_0x0.DebugPtr != (UDS_VM_MoneyDisplay *)0x0)) {
    pUVar4 = FWeakObjectPtr::Get(&(this->ItemRepairModel).WeakPtr);
    bVar2 = FDS_DataContainer::GetData<bool,enum_EDS_ItemRepairData>
                      ((FDS_DataContainer *)&pUVar4[1].field_0x18,HasEnoughRepairMaterials);
    pUVar4 = FWeakObjectPtr::Get(&(this->ItemRepairModel).WeakPtr);
    bVar3 = FDS_DataContainer::GetData<bool,enum_EDS_ItemRepairData>
                      ((FDS_DataContainer *)&pUVar4[1].field_0x18,HasEnoughRepairMoney);
    this_00 = (UDS_M_ItemRepair *)FWeakObjectPtr::Get(&(this->ItemRepairModel).WeakPtr);
    local_res18[0] = UDS_M_ItemRepair::GetRepairMoneyValue(this_00);
    pUVar1 = (this->VM_CoinDisplay).field0_0x0.DebugPtr;
    this_01 = (UDS_VM_MoneyDisplay *)0x0;
    if (pUVar1 != (UDS_VM_MoneyDisplay *)0x0) {
      (**(code **)(pUVar1->_padding_ + 0x350))(pUVar1,local_res18);
      pUVar1 = (this->VM_CoinDisplay).field0_0x0.DebugPtr;
      local_res8[0] = CONCAT31(local_res8[0]._1_3_,1);
      (**(code **)(pUVar1->_padding_ + 0x338))(pUVar1,local_res8);
      local_res8[0] = 0x1485;
      if (bVar3) {
        local_res8[0] = 0x1451;
      }
      UDS_VM_MoneyDisplay::SetTextStyleTableID
                ((this->VM_CoinDisplay).field0_0x0.DebugPtr,local_res8);
      this_01 = (this->VM_CoinDisplay).field0_0x0.DebugPtr;
    }
    EVar5 = Collapsed;
    if (0 < local_res18[0]) {
      EVar5 = SelfHitTestInvisible;
    }
    UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this_01,EVar5);
    if ((bVar2) && (bVar3)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    this->bIsDisableRepairButton = bVar2;
    local_20 = FFieldNotificationClassDescriptor::bIsDisableRepairButton.BitNumber;
    local_28 = FFieldNotificationClassDescriptor::bIsDisableRepairButton.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
    local_20 = FFieldNotificationClassDescriptor::VM_CoinDisplay.BitNumber;
    local_28 = FFieldNotificationClassDescriptor::VM_CoinDisplay.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  return;
}

// UnbindModel @ 14bebca80

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_ItemRepair::UnbindModel(UDS_VM_ItemRepair *this)

{
  UDS_UIEvent *pUVar1;
  UDS_ItemRepairEvent *pUVar2;
  
  pUVar1 = UDS_UIEvent::GetEvent();
  if (pUVar1 != (UDS_UIEvent *)0x0) {
    FDS_FilteredEventDelegate<TWeakObjectPtr<UObject,FWeakObjectPtr>,int_const_,int_const_>::
    Remove<UDS_VM_ItemRepair>(&pUVar1->OnSelectedTabIndex,this);
  }
  pUVar2 = UDS_ItemRepairEvent::GetEvent();
  if (pUVar2 != (UDS_ItemRepairEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->OnReceivedRegisterRestoreWaitCompleteResult,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->OnReceiveRestoreCancelResult,this);
  }
  UDS_VM_ModelBase::UnbindModel((UDS_VM_ModelBase *)this);
  return;
}

// UpdateView @ 14bec2370

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_ItemRepair::UpdateView
          (UDS_VM_ItemRepair *this,TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ESlateVisibility EVar5;
  uint uVar6;
  int iVar7;
  UObject *pUVar8;
  FName FVar9;
  FString *pFVar10;
  UEnum *this_00;
  FName *pFVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  wchar_t *pwVar14;
  long64 lVar15;
  EDS_ItemRepairType EVar16;
  ForAnyElementType FVar17;
  byte local_res8 [8];
  TArray<EDS_ModelEventItemRepair,TSizedDefaultAllocator<32>_> local_108;
  FName local_f8;
  int local_f0;
  FName local_e8;
  int local_e0;
  FName local_d8;
  int local_d0;
  FName local_c8;
  int local_c0;
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
  FString local_68;
  undefined1 local_58 [8];
  FName local_50;
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  
  FDS_DataContainer::GetListData<enum_EDS_ModelEventItemRepair,enum_EDS_ItemRepairData>
            ((FDS_DataContainer *)(this->_padding_ + 0x40),&local_108,UpdateViewEvent);
  uVar4 = local_108._8_8_;
  uVar12 = (ulonglong)local_res8[0];
  uVar13 = (ulonglong)local_108.ArrayNum;
  pFVar1 = local_108.AllocatorInstance.Data + uVar13 * 4;
  FVar17.Data = local_108.AllocatorInstance.Data;
  while( true ) {
    if (local_108.ArrayNum != (int)uVar13) {
      `TCheckedPointerIterator<enum_EDS_ModelEventItemRepair,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar17.Data == pFVar1) break;
    iVar2 = *(int *)FVar17.Data;
    pUVar8 = FWeakObjectPtr::Get(&(this->ItemRepairModel).WeakPtr);
    FVar9 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemRepairData>
                      ((FDS_DataContainer *)&pUVar8[1].field_0x18,(EDS_ItemRepairData)local_58);
    uVar3 = *(undefined8 *)FVar9;
    uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
    pFVar10 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
              ::FindOrAddImpl<FName>
                        ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                          *)&pUVar8[1].field_0x18,uVar6 + (int)((ulonglong)uVar3 >> 0x20),
                         (FName *)FVar9);
    if ((pFVar10->Data).ArrayNum == 0) {
      pwVar14 = L"";
    }
    else {
      pwVar14 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
    ::FString::FString(&local_68,pwVar14);
    this_00 = StaticEnum<enum_EDS_ItemRepairType>();
    if (this_00 != (UEnum *)0x0) {
      iVar7 = local_68.Data.ArrayNum + -1;
      if (local_68.Data.ArrayNum == 0) {
        iVar7 = 0;
      }
      pFVar11 = ::FName::FName(&local_50,iVar7,(wchar_t *)local_68.Data.AllocatorInstance.Data,
                               FNAME_Add);
      uVar12 = UEnum::GetValueByName(this_00,*pFVar11,None);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    EVar16 = (EDS_ItemRepairType)uVar12;
    switch(iVar2) {
    case 1:
    case 2:
      pUVar8 = FWeakObjectPtr::Get(&(this->ItemRepairModel).WeakPtr);
      FVar9 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemRepairData>
                        ((FDS_DataContainer *)&pUVar8[1].field_0x18,(EDS_ItemRepairData)local_48);
      uVar3 = *(undefined8 *)FVar9;
      uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
      pFVar10 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                ::FindOrAddImpl<FName>
                          ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                            *)&pUVar8[1].field_0x18,uVar6 + (int)((ulonglong)uVar3 >> 0x20),
                           (FName *)FVar9);
      if ((pFVar10->Data).ArrayNum == 0) {
        pwVar14 = L"";
      }
      else {
        pwVar14 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
      }
      iVar7 = _wtoi(pwVar14);
      this->RepairSwitcher = iVar7;
      local_f0 = FFieldNotificationClassDescriptor::RepairSwitcher.BitNumber;
      local_f8 = FFieldNotificationClassDescriptor::RepairSwitcher.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_f8);
      EVar5 = SelfHitTestInvisible;
      if (iVar2 != 1) {
        EVar5 = Collapsed;
      }
      this->MaterialInfoVisibility = EVar5;
      local_e0 = FFieldNotificationClassDescriptor::MaterialInfoVisibility.BitNumber;
      local_e8 = FFieldNotificationClassDescriptor::MaterialInfoVisibility.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_e8);
      break;
    case 3:
    case 4:
      pUVar8 = FWeakObjectPtr::Get(&(this->ItemRepairModel).WeakPtr);
      FVar9 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemRepairData>
                        ((FDS_DataContainer *)&pUVar8[1].field_0x18,(EDS_ItemRepairData)local_40);
      uVar3 = *(undefined8 *)FVar9;
      uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
      pFVar10 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                ::FindOrAddImpl<FName>
                          ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                            *)&pUVar8[1].field_0x18,uVar6 + (int)((ulonglong)uVar3 >> 0x20),
                           (FName *)FVar9);
      if ((pFVar10->Data).ArrayNum == 0) {
        pwVar14 = L"";
      }
      else {
        pwVar14 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
      }
      iVar7 = _wtoi(pwVar14);
      this->ItemManagementSwitcher = iVar7;
      local_d0 = FFieldNotificationClassDescriptor::ItemManagementSwitcher.BitNumber;
      local_d8 = FFieldNotificationClassDescriptor::ItemManagementSwitcher.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_d8);
      EVar5 = Collapsed;
      if (iVar7 == 0) {
        EVar5 = SelfHitTestInvisible;
      }
      this->RepairInfoVisibility = EVar5;
      local_c0 = FFieldNotificationClassDescriptor::RepairInfoVisibility.BitNumber;
      local_c8 = FFieldNotificationClassDescriptor::RepairInfoVisibility.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_c8);
      if (iVar2 == 3) {
        this->RepairSwitcher = 0;
        local_b0 = FFieldNotificationClassDescriptor::RepairSwitcher.BitNumber;
        local_b8 = FFieldNotificationClassDescriptor::RepairSwitcher.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_b8);
        UDS_VM_Common_TabGroup::SetSelectedIndex
                  ((this->VM_Repair_TabGroup).field0_0x0.DebugPtr,this->RepairSwitcher);
        local_a0 = FFieldNotificationClassDescriptor::VM_Repair_TabGroup.BitNumber;
        local_a8 = FFieldNotificationClassDescriptor::VM_Repair_TabGroup.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_a8);
      }
      break;
    case 7:
      PostUpdateRepairModel(this,EVar16);
      if (EVar16 == BulkRepair) goto LAB_14bec27b0;
      this->MaterialInfoVisibility = Collapsed;
      local_90 = FFieldNotificationClassDescriptor::MaterialInfoVisibility.BitNumber;
      local_98 = FFieldNotificationClassDescriptor::MaterialInfoVisibility.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_98);
      break;
    case 9:
      goto switchD_14bec24b6_caseD_9;
    case 10:
      this->MaterialInfoVisibility = SelfHitTestInvisible;
      local_80 = FFieldNotificationClassDescriptor::MaterialInfoVisibility.BitNumber;
      local_88 = FFieldNotificationClassDescriptor::MaterialInfoVisibility.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
      uVar6 = (uint)uVar12 & 0xff;
      if ((uVar6 == 1) || (uVar6 == 2)) {
        lVar15 = 0x9fdc;
LAB_14bec275c:
        FDS_Text::SetTextFromStringTable(&this->RepairButtonLabelText,StringUi,lVar15);
      }
      else if (uVar6 == 3) {
        lVar15 = 0x9fe7;
        goto LAB_14bec275c;
      }
      local_70 = FFieldNotificationClassDescriptor::RepairButtonLabelText.BitNumber;
      local_78 = FFieldNotificationClassDescriptor::RepairButtonLabelText.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
      goto switchD_14bec24b6_caseD_9;
    case 0xb:
      InitRepair(this);
switchD_14bec24b6_caseD_9:
      PostUpdateRepairModel(this,EVar16);
    }
    FVar17.Data = FVar17.Data + 4;
    uVar13 = uVar4 & 0xffffffff;
  }
LAB_14bec27b0:
  if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.AllocatorInstance.Data);
  }
  return;
}

