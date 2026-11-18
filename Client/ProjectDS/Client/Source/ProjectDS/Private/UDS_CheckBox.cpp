// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 12

// StaticClass @ 14b447b20

UClass * __cdecl UDS_CheckBox::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CheckBox.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CheckBox",
               &Z_Registration_Info_UClass_UDS_CheckBox.InnerSingleton,
               StaticRegisterNativesUDS_CheckBox,0xb90,0x10,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_CheckBox>,InternalVTableHelperCtorCaller<UDS_CheckBox>,
               local_res8,UCheckBox::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CheckBox.InnerSingleton;
}

// UDS_CheckBox @ 14b44ea70

UDS_CheckBox * __thiscall UDS_CheckBox::UDS_CheckBox(UDS_CheckBox *this,FVTableHelper *param_1)

{
  UCheckBox::UCheckBox((UCheckBox *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  *(undefined8 *)&(this->CheckBoxCheckedEvent).Delegate = 0;
  *(undefined8 *)&(this->CheckBoxCheckedEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->CheckBoxCheckedEvent).Delegate.field_0x10 = 0;
  return this;
}

// ~UDS_CheckBox @ 14b450c30

void __thiscall UDS_CheckBox::~UDS_CheckBox(UDS_CheckBox *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->CheckBoxCheckedEvent).Delegate);
  pvVar1 = *(void **)&(this->CheckBoxCheckedEvent).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->CheckBoxCheckedEvent).Delegate);
  UCheckBox::~UCheckBox((UCheckBox *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b453990

IClassDescriptor * __thiscall UDS_CheckBox::GetFieldNotificationDescriptor(UDS_CheckBox *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_CheckBox::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b454820

UClass * __cdecl UDS_CheckBox::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CheckBox.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CheckBox",
               &Z_Registration_Info_UClass_UDS_CheckBox.InnerSingleton,
               StaticRegisterNativesUDS_CheckBox,0xb90,0x10,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_CheckBox>,InternalVTableHelperCtorCaller<UDS_CheckBox>,
               local_res8,UCheckBox::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CheckBox.InnerSingleton;
}

// StaticRegisterNativesUDS_CheckBox @ 14b455230

void __cdecl UDS_CheckBox::StaticRegisterNativesUDS_CheckBox(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_CheckBox_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execCheckBoxChanged @ 14b456dd0

void __cdecl UDS_CheckBox::execCheckBoxChanged(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  CheckBoxChanged((UDS_CheckBox *)param_1,local_res10[0] != 0);
  return;
}

// UDS_CheckBox @ 14bc833c0

UDS_CheckBox * __thiscall UDS_CheckBox::UDS_CheckBox(UDS_CheckBox *this,FObjectInitializer *param_1)

{
  UCheckBox::UCheckBox((UCheckBox *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  *(undefined8 *)&(this->CheckBoxCheckedEvent).Delegate = 0;
  *(undefined8 *)&(this->CheckBoxCheckedEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->CheckBoxCheckedEvent).Delegate.field_0x10 = 0;
  return this;
}

// BeginDestroy @ 14bc87ba0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_CheckBox::BeginDestroy(UDS_CheckBox *this)

{
  UWorld *pUVar1;
  UGameViewportSubsystem *this_00;
  
  if ((this->_padding_ & 0x2000) != 0) {
    pUVar1 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
    this_00 = UGameViewportSubsystem::Get(pUVar1);
    if (this_00 != (UGameViewportSubsystem *)0x0) {
      UGameViewportSubsystem::RemoveWidget(this_00,(UWidget *)this);
    }
  }
  UObject::BeginDestroy((UObject *)this);
                    /* WARNING: Could not recover jumptable at 0x0001469a3148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2b0))(this,0);
  return;
}

// CheckBoxChanged @ 14bc8bd20

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_CheckBox::CheckBoxChanged(UDS_CheckBox *this,bool param_1)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  (this->CheckBoxCheckedEvent).IsChecked = param_1;
  local_28.DestructionSentinel.AccessType =
       FFieldNotificationClassDescriptor::CheckBoxCheckedEvent.FieldName.ComparisonIndex.Value;
  local_28.DestructionSentinel._4_4_ =
       FFieldNotificationClassDescriptor::CheckBoxCheckedEvent.FieldName.Number;
  local_28.DestructionSentinel.Accessor._0_4_ =
       FFieldNotificationClassDescriptor::CheckBoxCheckedEvent.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,(FFieldId *)&local_28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(this->CheckBoxCheckedEvent).Delegate,&local_28);
  if ((*(int *)&(this->CheckBoxCheckedEvent).Delegate.field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->CheckBoxCheckedEvent).Delegate.field_0x8,
     plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,this,param_1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// ReleaseSlateResources @ 14bcc3960

void __thiscall UDS_CheckBox::ReleaseSlateResources(UDS_CheckBox *this,bool param_1)

{
  undefined8 uStack_18;
  FSharedReferencer<1> FStack_10;
  
  UPanelWidget::ReleaseSlateResources((UPanelWidget *)this,param_1);
  uStack_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->_padding_ != &uStack_18) {
    this->_padding_ = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->_padding_,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// SynchronizeProperties @ 14bcca2f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UDS_CheckBox::SynchronizeProperties(UDS_CheckBox *this)

{
  longlong *this_00;
  code *pcVar1;
  longlong lVar2;
  bool bVar3;
  FName *pFVar4;
  char *pcVar5;
  UObject *this_01;
  UFunction *pUVar6;
  char *pcVar7;
  <lambda_1> local_res8 [8];
  FName local_res10;
  FName local_res18;
  UDS_CheckBox *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_d8;
  FWeakObjectPtr local_d0;
  FName local_c8;
  FName *local_c0;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_b8;
  FDestructionSentinel local_a8;
  FName local_90;
  FReadAccessScope local_88;
  FReadAccessScope local_70;
  FReadAccessScope local_58;
  
  UCheckBox::SynchronizeProperties((UCheckBox *)this);
  this_00 = &this->_padding_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_70);
  lVar2 = this->_padding_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_70);
  if (0 < (int)lVar2) {
    pFVar4 = ::FName::FName(&local_90,"CheckBoxChanged");
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::Remove
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)this_00,(UObject *)this,
               *pFVar4);
  }
  pcVar5 = strstr("&UDS_CheckBox::CheckBoxChanged","::");
  if (pcVar5 == (char *)0x0) {
LAB_14bcca39b:
    pcVar7 = &DAT_00000002;
LAB_14bcca3a0:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    do {
      pcVar7 = pcVar5;
      pcVar5 = strstr(pcVar7 + 1,"::");
    } while (pcVar5 != (char *)0x0);
    if (pcVar7 == (char *)0x0) goto LAB_14bcca39b;
    pcVar7 = pcVar7 + 2;
    if (*pcVar7 == '0') goto LAB_14bcca3a0;
  }
  ::FName::FName(&local_res18,pcVar7);
  if ((this == (UDS_CheckBox *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x4c8,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_res10 = local_res18;
  local_d8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_d0.ObjectIndex = 0;
  local_d0.ObjectSerialNumber = 0;
  local_c8.ComparisonIndex.Value = 0;
  local_c8.Number = 0;
  if ((this == (UDS_CheckBox *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_res20 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_CheckBox *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_d0,(FObjectPtr)&local_res20);
  local_c8 = local_res10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_d8,&local_88);
  if ((local_c8 == (FName)0x0) ||
     (this_01 = FWeakObjectPtr::Get(&local_d0), this_01 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_88);
  }
  else {
    pUVar6 = UObject::FindFunction(this_01,local_c8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_88);
    if (pUVar6 != (UFunction *)0x0) goto LAB_14bcca4d1;
  }
  local_c0 = &local_res10;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,bool>::__Internal_BindDynamic<UDS_CheckBox>'
  ::__l2::<lambda_1>::operator()(&local_c0);
LAB_14bcca4d1:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_d8,&local_58);
  local_b8.Object = local_d0;
  local_b8.FunctionName = local_c8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_58);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FWriteAccessScope *)&local_a8);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&this->_padding_,local_res8,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)this_00,&local_b8);
  if (local_a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_d8.AccessDetector);
  return;
}

