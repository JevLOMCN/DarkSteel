// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 22

// SetClickTabEvent_WrapperImpl @ 14b687750

void __cdecl UDS_VM_ItemCraft_Tab::SetClickTabEvent_WrapperImpl(void *param_1,void *param_2)

{
  UDS_ItemCraftEvent *pUVar1;
  uint auStackX_18 [4];
  
  pUVar1 = UDS_ItemCraftEvent::GetEvent();
  if (pUVar1 != (UDS_ItemCraftEvent *)0x0) {
    auStackX_18[0] = (uint)*(byte *)((longlong)param_1 + 0x120);
    FDS_EventDelegate<int_const_&>::Broadcast(&pUVar1->OnSelectCraftTabEvent,(int *)auStackX_18);
  }
  return;
}

// StaticClass @ 14b687760

UClass * __cdecl UDS_VM_ItemCraft_Tab::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_ItemCraft_Tab.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_ItemCraft_Tab",
               &Z_Registration_Info_UClass_UDS_VM_ItemCraft_Tab.InnerSingleton,
               StaticRegisterNativesUDS_VM_ItemCraft_Tab,0x128,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_ItemCraft_Tab>,
               InternalVTableHelperCtorCaller<UDS_VM_ItemCraft_Tab>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_ItemCraft_Tab.InnerSingleton;
}

// UDS_VM_ItemCraft_Tab @ 14b68d120

UDS_VM_ItemCraft_Tab * __thiscall
UDS_VM_ItemCraft_Tab::UDS_VM_ItemCraft_Tab(UDS_VM_ItemCraft_Tab *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ItemCraft_Tab__6B_;
  (this->VM_TabReddot).field0_0x0.DebugPtr = (UDS_ViewModelBase *)0x0;
  (this->ClickTabEvent)._padding_ = '\0';
  (this->ClickTabEvent).bIsCustomSelected = false;
  (this->ClickTabEvent).bIsLacked = false;
  (this->ClickTabEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickTabEvent).Delegate = 0;
  *(undefined8 *)&(this->ClickTabEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickTabEvent).Delegate.field_0x10 = 0;
  (this->TabName).StringTableType = None;
  (this->TabName).StringTableID = 0;
  (this->TabName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TabName).StringEnumTableNameID.Number = 0;
  (this->TabName).DateTime.Ticks = 0;
  (this->TabName).TimeSpan.Ticks = 0;
  (this->TabName).TimeExpressionType = None;
  (this->TabName).IsExpression = false;
  (this->TabName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TabName).UniqueString.Data.ArrayNum = 0;
  (this->TabName).UniqueString.Data.ArrayMax = 0;
  (this->TabName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TabName).FormatArgs.ArrayNum = 0;
  (this->TabName).FormatArgs.ArrayMax = 0;
  return this;
}

// UDS_VM_ItemCraft_Tab @ 14b68d1d0

UDS_VM_ItemCraft_Tab * __thiscall
UDS_VM_ItemCraft_Tab::UDS_VM_ItemCraft_Tab(UDS_VM_ItemCraft_Tab *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ItemCraft_Tab__6B_;
  (this->VM_TabReddot).field0_0x0.DebugPtr = (UDS_ViewModelBase *)0x0;
  (this->ClickTabEvent)._padding_ = '\0';
  (this->ClickTabEvent).bIsCustomSelected = false;
  (this->ClickTabEvent).bIsLacked = false;
  (this->ClickTabEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickTabEvent).Delegate = 0;
  *(undefined8 *)&(this->ClickTabEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickTabEvent).Delegate.field_0x10 = 0;
  (this->TabName).StringTableType = None;
  (this->TabName).StringTableID = 0;
  (this->TabName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TabName).StringEnumTableNameID.Number = 0;
  (this->TabName).DateTime.Ticks = 0;
  (this->TabName).TimeSpan.Ticks = 0;
  (this->TabName).TimeExpressionType = None;
  (this->TabName).IsExpression = false;
  (this->TabName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TabName).UniqueString.Data.ArrayNum = 0;
  (this->TabName).UniqueString.Data.ArrayMax = 0;
  (this->TabName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TabName).FormatArgs.ArrayNum = 0;
  (this->TabName).FormatArgs.ArrayMax = 0;
  return this;
}

// ~UDS_VM_ItemCraft_Tab @ 14b68e050

void __thiscall UDS_VM_ItemCraft_Tab::~UDS_VM_ItemCraft_Tab(UDS_VM_ItemCraft_Tab *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ItemCraft_Tab__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->TabName).FormatArgs.AllocatorInstance.Data,
             (this->TabName).FormatArgs.ArrayNum);
  pFVar1 = (this->TabName).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TabName).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickTabEvent).Delegate);
  pvVar2 = *(void **)&(this->ClickTabEvent).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickTabEvent).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b68ff60

IClassDescriptor * __thiscall
UDS_VM_ItemCraft_Tab::GetFieldNotificationDescriptor(UDS_VM_ItemCraft_Tab *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_ItemCraft_Tab::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6909a0

UClass * __cdecl UDS_VM_ItemCraft_Tab::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_ItemCraft_Tab.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_ItemCraft_Tab",
               &Z_Registration_Info_UClass_UDS_VM_ItemCraft_Tab.InnerSingleton,
               StaticRegisterNativesUDS_VM_ItemCraft_Tab,0x128,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_ItemCraft_Tab>,
               InternalVTableHelperCtorCaller<UDS_VM_ItemCraft_Tab>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_ItemCraft_Tab.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_ItemCraft_Tab @ 14b6910f0

void __cdecl UDS_VM_ItemCraft_Tab::StaticRegisterNativesUDS_VM_ItemCraft_Tab(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_ItemCraft_Tab_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnChangeWaitCompleteDataSet @ 14b692120

void __cdecl
UDS_VM_ItemCraft_Tab::execOnChangeWaitCompleteDataSet
          (UObject *param_1,FFrame *param_2,void *param_3)

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
  OnChangeWaitCompleteDataSet((UDS_VM_ItemCraft_Tab *)param_1,local_res10);
  return;
}

// execOnItemCraftEvent @ 14b6921d0

void __cdecl
UDS_VM_ItemCraft_Tab::execOnItemCraftEvent(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnItemCraftEvent((UDS_VM_ItemCraft_Tab *)param_1);
  return;
}

// BindModel @ 14be774e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UDS_VM_ItemCraft_Tab::BindModel(UDS_VM_ItemCraft_Tab *this)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  char *pcVar4;
  UObject *this_00;
  UFunction *pUVar5;
  UDS_ItemCraftEvent *pUVar6;
  char *pcVar7;
  <lambda_1> local_res10 [8];
  FWeakObjectPtr local_res18;
  FName local_res20;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_108;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_f8;
  FWeakObjectPtr local_f0;
  FName local_e8;
  FName local_e0;
  UDS_VM_ItemCraft_Tab *local_d8;
  FName *local_d0;
  FDestructionSentinel local_c8;
  undefined1 local_b0 [16];
  undefined1 local_a0 [80];
  FReadAccessScope local_50;
  
  TDS_DataSetGetter<UDS_WaitCompleteDataSet>::Get((ulong64)&local_res18);
  bVar2 = FWeakObjectPtr::IsValid(&local_res18);
  if (!bVar2) goto LAB_14be77742;
  pUVar3 = FWeakObjectPtr::Get(&local_res18);
  pcVar4 = strstr("&UDS_VM_ItemCraft_Tab::OnChangeWaitCompleteDataSet","::");
  if (pcVar4 == (char *)0x0) {
LAB_14be7757d:
    pcVar7 = &DAT_00000002;
LAB_14be77582:
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
      pcVar7 = pcVar4;
      pcVar4 = strstr(pcVar7 + 1,"::");
    } while (pcVar4 != (char *)0x0);
    if (pcVar7 == (char *)0x0) goto LAB_14be7757d;
    pcVar7 = pcVar7 + 2;
    if (*pcVar7 == '0') goto LAB_14be77582;
  }
  ::FName::FName(&local_e0,pcVar7);
  if ((this == (UDS_VM_ItemCraft_Tab *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x4c8,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_f8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_f0.ObjectIndex = 0;
  local_f0.ObjectSerialNumber = 0;
  local_e8.ComparisonIndex.Value = 0;
  local_e8.Number = 0;
  local_res20 = local_e0;
  if ((this == (UDS_VM_ItemCraft_Tab *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_d8 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_VM_ItemCraft_Tab *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_f0,(FObjectPtr)&local_d8);
  local_e8 = local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_f8,(FReadAccessScope *)(local_a0 + 0x38));
  if ((local_e8 == (FName)0x0) ||
     (this_00 = FWeakObjectPtr::Get(&local_f0), this_00 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_a0 + 0x38));
LAB_14be776b3:
    local_d0 = &local_res20;
    `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UDS_DataSetBase_*>::
    __Internal_BindDynamic<UDS_VM_ItemCraft_Tab>'::__l2::<lambda_1>::operator()(&local_d0);
  }
  else {
    pUVar5 = UObject::FindFunction(this_00,local_e8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_a0 + 0x38));
    if (pUVar5 == (UFunction *)0x0) goto LAB_14be776b3;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_f8,&local_50);
  local_108.Object = local_f0;
  local_108.FunctionName = local_e8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_50);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pUVar3 + 1),
             (FWriteAccessScope *)&local_c8);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&pUVar3[1].field_0x8,local_res10,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar3 + 1),&local_108);
  if (local_c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c8.Accessor,&local_c8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_f8.AccessDetector);
LAB_14be77742:
  pUVar6 = UDS_ItemCraftEvent::GetEvent();
  if (pUVar6 != (UDS_ItemCraftEvent *)0x0) {
    local_108.FunctionName = (FName)((ulonglong)local_108.FunctionName & 0xffffffff00000000);
    local_108.Object = (FWeakObjectPtr)OnSelectCraftTabEvent;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar6->OnSelectCraftTabEvent,
               this);
    local_a0._8_4_ = local_108.Object.ObjectIndex;
    local_a0._12_4_ = local_108.Object.ObjectSerialNumber;
    local_a0._16_4_ = local_108.FunctionName.ComparisonIndex.Value;
    local_a0._20_4_ = local_108.FunctionName.Number;
    TMulticastDelegateRegistration<void___cdecl(int_const_&),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_ItemCraft_Tab>
              ((TMulticastDelegateRegistration<void___cdecl(int_const_&),FDefaultDelegateUserPolicy>
                *)&pUVar6->OnSelectCraftTabEvent,(UDS_VM_ItemCraft_Tab *)local_b0,
               (pmf_19454708 *)this);
    local_108.FunctionName = (FName)((ulonglong)local_108.FunctionName & 0xffffffff00000000);
    local_108.Object = (FWeakObjectPtr)OnChangeCraftManager_ItemCraftListTID;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar6->OnChangeCraftManager_ItemCraftListTID,this);
    local_a0._24_4_ = local_108.Object.ObjectIndex;
    local_a0._28_4_ = local_108.Object.ObjectSerialNumber;
    local_a0._32_4_ = local_108.FunctionName.ComparisonIndex.Value;
    local_a0._36_4_ = local_108.FunctionName.Number;
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_ItemCraft_Tab>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar6->OnChangeCraftManager_ItemCraftListTID,(UDS_VM_ItemCraft_Tab *)(local_b0 + 8)
               ,(pmf_8c8d1b86 *)this);
  }
  local_108.FunctionName = (FName)((ulonglong)local_108.FunctionName & 0xffffffff00000000);
  local_108.Object = (FWeakObjectPtr)OnItemCraftEvent;
  local_a0._40_8_ = OnItemCraftEvent;
  local_a0._48_4_ = local_108.FunctionName.ComparisonIndex.Value;
  local_a0._52_4_ = local_108.FunctionName.Number;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<UDS_VM_ItemCraft_Tab>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FDS_ItemCraftService::ItemCraftDelegate,(UDS_VM_ItemCraft_Tab *)local_a0,
             (pmf_8c8d1b86 *)this);
  return;
}

// InitViewModel @ 14be8d7b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_VM_ItemCraft_Tab::InitViewModel(UDS_VM_ItemCraft_Tab *this)

{
  FName FVar1;
  FName FVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_ViewModelBase *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if ((this->VM_TabReddot).field0_0x0.DebugPtr == (UDS_ViewModelBase *)0x0) {
    local_a8.ComparisonIndex.Value = 0;
    local_a8.Number = 0;
    pUVar3 = Z_Construct_UClass_UDS_ViewModelBase_NoRegister();
    FVar1 = local_a8;
    if (local_a8 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar4 = Z_Construct_UClass_UDS_ViewModelBase_NoRegister();
    CheckIsClassChildOf_Internal(pUVar4,pUVar3);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar3);
    FVar2 = local_a8;
    local_98._48_8_ = (FObjectInstancingGraph *)0x0;
    local_98._56_8_ = (UPackage *)0x0;
    local_a8.ComparisonIndex = FVar1.ComparisonIndex.Value;
    local_a8.Number = FVar1.Number;
    local_98._16_4_ = local_a8.ComparisonIndex.Value;
    local_98._20_4_ = local_a8.Number;
    local_98._24_4_ = RF_Transient;
    local_98._40_8_ = (UObject *)0x0;
    local_98[0x20] = false;
    local_a8 = FVar2;
    local_98._8_8_ = this;
    pUVar5 = (UDS_ViewModelBase *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar6 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    if (pUVar5 != (UDS_ViewModelBase *)0x0) {
      pUVar5->bIsCloseInit = false;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UDS_ViewModelBase *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->VM_TabReddot).field0_0x0.DebugPtr = pUVar5;
  }
  return;
}

// OnChangeCraftManager_ItemCraftListTID @ 14be908d0

void __thiscall
UDS_VM_ItemCraft_Tab::OnChangeCraftManager_ItemCraftListTID(UDS_VM_ItemCraft_Tab *this)

{
  FName local_18;
  int local_10;
  
  this->bIsSelected = this->CraftTab == Craft;
  local_10 = FFieldNotificationClassDescriptor::bIsSelected.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bIsSelected.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnChangeWaitCompleteDataSet @ 14be90f50

void __thiscall
UDS_VM_ItemCraft_Tab::OnChangeWaitCompleteDataSet
          (UDS_VM_ItemCraft_Tab *this,UDS_DataSetBase *param_1)

{
  UDS_ViewModelBase *this_00;
  bool bVar1;
  int iVar2;
  UDS_WaitCompleteDataSet *this_01;
  EDS_WaitCompleteType local_res8 [16];
  FWeakObjectPtr local_res18 [2];
  
  if (this->CraftTab == Crafting) {
    SetCraftingTabName(this);
    TDS_DataSetGetter<UDS_WaitCompleteDataSet>::Get((ulong64)local_res18);
    bVar1 = FWeakObjectPtr::IsValid(local_res18);
    if (bVar1) {
      this_01 = (UDS_WaitCompleteDataSet *)FWeakObjectPtr::Get(local_res18);
      local_res8[0] = ItemCraft;
      iVar2 = UDS_WaitCompleteDataSet::GetTotalCount(this_01,local_res8);
      if ((iVar2 == 0) &&
         (this_00 = (this->VM_TabReddot).field0_0x0.DebugPtr, this_00 != (UDS_ViewModelBase *)0x0))
      {
        UDS_ViewModelBase::SetVisibility(this_00,Collapsed);
      }
    }
  }
  return;
}

// OnClickTabEvent @ 14be97360

void __thiscall
UDS_VM_ItemCraft_Tab::OnClickTabEvent(UDS_VM_ItemCraft_Tab *this,FDS_ButtonEventField *param_1)

{
  UDS_ItemCraftEvent *pUVar1;
  uint local_res18 [4];
  
  pUVar1 = UDS_ItemCraftEvent::GetEvent();
  if (pUVar1 != (UDS_ItemCraftEvent *)0x0) {
    local_res18[0] = (uint)this->CraftTab;
    FDS_EventDelegate<int_const_&>::Broadcast(&pUVar1->OnSelectCraftTabEvent,(int *)local_res18);
  }
  return;
}

// OnItemCraftEvent @ 14be99990

void __thiscall UDS_VM_ItemCraft_Tab::OnItemCraftEvent(UDS_VM_ItemCraft_Tab *this)

{
  UDS_ViewModelBase *this_00;
  FName local_18;
  int local_10;
  
  if ((this->CraftTab == Crafting) &&
     (this_00 = (this->VM_TabReddot).field0_0x0.DebugPtr, this_00 != (UDS_ViewModelBase *)0x0)) {
    UDS_ViewModelBase::SetVisibility(this_00,SelfHitTestInvisible);
  }
  this->bIsSelected = this->CraftTab == Crafting;
  local_10 = FFieldNotificationClassDescriptor::bIsSelected.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bIsSelected.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnSelectCraftTabEvent @ 14be9c620

void __thiscall UDS_VM_ItemCraft_Tab::OnSelectCraftTabEvent(UDS_VM_ItemCraft_Tab *this,int *param_1)

{
  FName local_18;
  int local_10;
  
  this->bIsSelected = (uint)this->CraftTab == *param_1;
  local_10 = FFieldNotificationClassDescriptor::bIsSelected.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bIsSelected.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnSetViewModel @ 14bea4270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_ItemCraft_Tab::OnSetViewModel
          (UDS_VM_ItemCraft_Tab *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  EDS_CraftTab EVar1;
  TReferenceControllerBase<1> *pTVar2;
  UDS_ViewModelBase *this_00;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_1a8 [32];
  FName local_178;
  int local_170;
  FName local_168;
  int local_160;
  TSharedPtr<FDS_ViewModelContext_ItemCraft_Tab,1> local_158;
  TSharedPtr<FDS_ViewModelContext,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
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
  SafeCast<FDS_ViewModelContext_ItemCraft_Tab>(&local_158,&local_148);
  if (local_158.Object == (FDS_ViewModelContext_ItemCraft_Tab *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_ItemCraft_Tab::OnSetViewModel",0x24,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0x24,
                 L"FDS_ViewModelContext_ItemCraft_Tab is nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    EVar1 = (EDS_CraftTab)(local_158.Object)->TabIndex;
    this->CraftTab = EVar1;
    if (EVar1 == Crafting) {
      SetCraftingTabName(this);
    }
    else {
      if (EVar1 == Craft) {
        FDS_Text::SetTextFromStringTable(&this->TabName,StringUi,0x186ae);
        this->bIsSelected = true;
        local_170 = FFieldNotificationClassDescriptor::bIsSelected.BitNumber;
        local_178 = FFieldNotificationClassDescriptor::bIsSelected.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_178);
      }
      else if (EVar1 == Inventory) {
        FDS_Text::SetTextFromStringTable(&this->TabName,StringUi,0x9f65);
      }
      local_160 = FFieldNotificationClassDescriptor::TabName.BitNumber;
      local_168 = FFieldNotificationClassDescriptor::TabName.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_168);
    }
    this_00 = (this->VM_TabReddot).field0_0x0.DebugPtr;
    if (this_00 != (UDS_ViewModelBase *)0x0) {
      UDS_ViewModelBase::SetVisibility(this_00,Collapsed);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_158.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetCraftingTabName @ 14beadd60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_ItemCraft_Tab::SetCraftingTabName(UDS_VM_ItemCraft_Tab *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  FDS_StringUiTableRow *pFVar3;
  UDS_WaitCompleteDataSet *this_00;
  undefined1 auStackY_188 [32];
  EDS_WaitCompleteType local_158 [4];
  int local_154;
  FWeakObjectPtr local_150;
  FName local_148;
  int local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  TDS_DataSetGetter<UDS_WaitCompleteDataSet>::Get((ulong64)&local_150);
  bVar1 = FWeakObjectPtr::IsValid(&local_150);
  if (bVar1) {
    pFVar3 = FDS_StringUiTableRow::Get(0x186a7,true);
    if (pFVar3 != (FDS_StringUiTableRow *)0x0) {
      this_00 = (UDS_WaitCompleteDataSet *)FWeakObjectPtr::Get(&local_150);
      local_158[0] = ItemCraft;
      local_154 = UDS_WaitCompleteDataSet::GetTotalCount(this_00,local_158);
      FDS_Text::SetTextFormatFromStringTable<int,int_&>
                (&this->TabName,StringUi,0x186a7,&local_154,&this->CraftingCountDefault);
      local_140 = FFieldNotificationClassDescriptor::TabName.BitNumber;
      local_148 = FFieldNotificationClassDescriptor::TabName.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_148);
    }
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_ItemCraft_Tab::SetCraftingTabName",0x28,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x6f,L"UDS_WaitCompleteDataSet is invalid");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

// SetShowTabReddot @ 14beb4720

void __thiscall UDS_VM_ItemCraft_Tab::SetShowTabReddot(UDS_VM_ItemCraft_Tab *this,bool *param_1)

{
  UDS_ViewModelBase *this_00;
  ESlateVisibility EVar1;
  
  this_00 = (this->VM_TabReddot).field0_0x0.DebugPtr;
  if (this_00 != (UDS_ViewModelBase *)0x0) {
    EVar1 = Collapsed;
    if (*param_1 == true) {
      EVar1 = SelfHitTestInvisible;
    }
    UDS_ViewModelBase::SetVisibility(this_00,EVar1);
    return;
  }
  return;
}

// SetbIsSelected @ 14bebaf70

void __thiscall UDS_VM_ItemCraft_Tab::SetbIsSelected(UDS_VM_ItemCraft_Tab *this,bool *param_1)

{
  FName local_18;
  int local_10;
  
  this->bIsSelected = *param_1;
  local_10 = FFieldNotificationClassDescriptor::bIsSelected.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bIsSelected.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// UnbindModel @ 14bebc990

void __thiscall UDS_VM_ItemCraft_Tab::UnbindModel(UDS_VM_ItemCraft_Tab *this)

{
  bool bVar1;
  UObject *pUVar2;
  UDS_ItemCraftEvent *pUVar3;
  FWeakObjectPtr local_res10 [3];
  
  TDS_DataSetGetter<UDS_WaitCompleteDataSet>::Get((ulong64)local_res10);
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res10);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar2 + 1),(UObject *)this)
    ;
  }
  pUVar3 = UDS_ItemCraftEvent::GetEvent();
  if (pUVar3 != (UDS_ItemCraftEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3->OnSelectCraftTabEvent,
               this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar3->OnChangeCraftManager_ItemCraftListTID,this);
  }
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FDS_ItemCraftService::ItemCraftDelegate,this);
  return;
}

