// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 17

// SetbIsChecked_WrapperImpl @ 14b77cf40

void __cdecl UDS_W_CommonCheckBox::SetbIsChecked_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)((longlong)param_1 + 0x888) = *(undefined1 *)param_2;
  SetCheckBoxState(param_1);
  return;
}

// SetbIsDisabled_WrapperImpl @ 14b77cf50

void __cdecl UDS_W_CommonCheckBox::SetbIsDisabled_WrapperImpl(void *param_1,void *param_2)

{
  SetbIsDisabled(param_1,*(bool *)param_2);
  return;
}

// StaticClass @ 14b77cf70

UClass * __cdecl UDS_W_CommonCheckBox::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_W_CommonCheckBox.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_W_CommonCheckBox",
               &Z_Registration_Info_UClass_UDS_W_CommonCheckBox.InnerSingleton,
               StaticRegisterNativesUDS_W_CommonCheckBox,0x890,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_W_CommonCheckBox>,
               InternalVTableHelperCtorCaller<UDS_W_CommonCheckBox>,local_res8,
               UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_W_CommonCheckBox.InnerSingleton;
}

// UDS_W_CommonCheckBox @ 14b780ce0

UDS_W_CommonCheckBox * __thiscall
UDS_W_CommonCheckBox::UDS_W_CommonCheckBox(UDS_W_CommonCheckBox *this,FVTableHelper *param_1)

{
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  (this->CheckBox).field0_0x0.DebugPtr = (UDS_CheckBox *)0x0;
  (this->CheckBoxSwitcher).field0_0x0.DebugPtr = (UDS_WidgetSwitcher *)0x0;
  (this->CheckStateChanged).bIsActivate = false;
  return this;
}

// UDS_W_CommonCheckBox @ 14b780d50

UDS_W_CommonCheckBox * __thiscall
UDS_W_CommonCheckBox::UDS_W_CommonCheckBox(UDS_W_CommonCheckBox *this,FObjectInitializer *param_1)

{
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  (this->CheckBox).field0_0x0.DebugPtr = (UDS_CheckBox *)0x0;
  (this->CheckBoxSwitcher).field0_0x0.DebugPtr = (UDS_WidgetSwitcher *)0x0;
  (this->CheckStateChanged).bIsActivate = false;
  return this;
}

// ~UDS_W_CommonCheckBox @ 14b782ba0

void __thiscall UDS_W_CommonCheckBox::~UDS_W_CommonCheckBox(UDS_W_CommonCheckBox *this)

{
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  UDS_UserWidget::~UDS_UserWidget((UDS_UserWidget *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b784f70

IClassDescriptor * __thiscall
UDS_W_CommonCheckBox::GetFieldNotificationDescriptor(UDS_W_CommonCheckBox *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_W_CommonCheckBox::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b7854e0

UClass * __cdecl UDS_W_CommonCheckBox::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_W_CommonCheckBox.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_W_CommonCheckBox",
               &Z_Registration_Info_UClass_UDS_W_CommonCheckBox.InnerSingleton,
               StaticRegisterNativesUDS_W_CommonCheckBox,0x890,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_W_CommonCheckBox>,
               InternalVTableHelperCtorCaller<UDS_W_CommonCheckBox>,local_res8,
               UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_W_CommonCheckBox.InnerSingleton;
}

// StaticRegisterNativesUDS_W_CommonCheckBox @ 14b786430

void __cdecl UDS_W_CommonCheckBox::StaticRegisterNativesUDS_W_CommonCheckBox(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_W_CommonCheckBox_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnCheckStateChanged @ 14b7878d0

void __cdecl
UDS_W_CommonCheckBox::execOnCheckStateChanged(UObject *param_1,FFrame *param_2,void *param_3)

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
  OnCheckStateChanged((UDS_W_CommonCheckBox *)param_1,local_res10[0] != 0);
  return;
}

// NativeConstruct @ 14bcab0f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UDS_W_CommonCheckBox::NativeConstruct(UDS_W_CommonCheckBox *this)

{
  UDS_CheckBox *pUVar1;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  char *pcVar5;
  UObject *this_00;
  UFunction *pUVar6;
  char *pcVar7;
  <lambda_1> local_res8 [8];
  FName local_res10;
  FName local_res18;
  UDS_W_CommonCheckBox *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_c8;
  FWeakObjectPtr local_c0;
  FName local_b8;
  FName *local_b0;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_a8;
  FDestructionSentinel local_98;
  FName local_80;
  FName local_78;
  FReadAccessScope local_70;
  FReadAccessScope local_58;
  
  UDS_UserWidget::NativeConstruct((UDS_UserWidget *)this);
  pFVar4 = ::FName::FName(&local_80,"CB_Img");
  UDS_UserWidget::BindWidget<UDS_CheckBox>((UDS_UserWidget *)this,&this->CheckBox,*pFVar4);
  pFVar4 = ::FName::FName(&local_78,"WS_Check");
  UDS_UserWidget::BindWidget<UDS_WidgetSwitcher>
            ((UDS_UserWidget *)this,&this->CheckBoxSwitcher,*pFVar4);
  pUVar1 = (this->CheckBox).field0_0x0.DebugPtr;
  if (pUVar1 == (UDS_CheckBox *)0x0) {
    return;
  }
  pcVar5 = strstr("&UDS_W_CommonCheckBox::OnCheckStateChanged","::");
  if (pcVar5 == (char *)0x0) {
LAB_14bcab1bb:
    pcVar7 = &DAT_00000002;
LAB_14bcab1c0:
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
      pcVar7 = pcVar5;
      pcVar5 = strstr(pcVar7 + 1,"::");
    } while (pcVar5 != (char *)0x0);
    if (pcVar7 == (char *)0x0) goto LAB_14bcab1bb;
    pcVar7 = pcVar7 + 2;
    if (*pcVar7 == '0') goto LAB_14bcab1c0;
  }
  ::FName::FName(&local_res18,pcVar7);
  local_c8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_c0.ObjectIndex = 0;
  local_c0.ObjectSerialNumber = 0;
  local_b8.ComparisonIndex.Value = 0;
  local_b8.Number = 0;
  local_res10 = local_res18;
  local_res20 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_W_CommonCheckBox *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_c0,(FObjectPtr)&local_res20);
  local_b8 = local_res10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_c8,&local_70);
  if ((local_b8 == (FName)0x0) ||
     (this_00 = FWeakObjectPtr::Get(&local_c0), this_00 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_70);
  }
  else {
    pUVar6 = UObject::FindFunction(this_00,local_b8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_70);
    if (pUVar6 != (UFunction *)0x0) goto LAB_14bcab2a9;
  }
  local_b0 = &local_res10;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,bool>::
  __Internal_BindDynamic<UDS_W_CommonCheckBox>'::__l2::<lambda_1>::operator()(&local_b0);
LAB_14bcab2a9:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_c8,&local_58);
  local_a8.Object = local_c0;
  local_a8.FunctionName = local_b8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_58);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar1->_padding_,
             (FWriteAccessScope *)&local_98);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&pUVar1->_padding_,local_res8,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar1->_padding_,&local_a8);
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_c8.AccessDetector);
  return;
}

// NativeDestruct @ 14bcac510

void __thiscall UDS_W_CommonCheckBox::NativeDestruct(UDS_W_CommonCheckBox *this)

{
  UDS_CheckBox *pUVar1;
  
  pUVar1 = (this->CheckBox).field0_0x0.DebugPtr;
  if (pUVar1 != (UDS_CheckBox *)0x0) {
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar1->_padding_,
               (UObject *)this);
    return;
  }
  return;
}

// NativePreConstruct @ 14bcaeab0

void __thiscall UDS_W_CommonCheckBox::NativePreConstruct(UDS_W_CommonCheckBox *this)

{
  FName *pFVar1;
  FName local_res8;
  
  UDS_UserWidget::NativePreConstruct((UDS_UserWidget *)this);
  if ((this->CheckBox).field0_0x0.DebugPtr == (UDS_CheckBox *)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"CB_Img");
    UDS_UserWidget::BindWidget<UDS_CheckBox>((UDS_UserWidget *)this,&this->CheckBox,*pFVar1);
  }
  if ((this->CheckBoxSwitcher).field0_0x0.DebugPtr == (UDS_WidgetSwitcher *)0x0) {
    pFVar1 = ::FName::FName(&local_res8,"WS_Check");
    UDS_UserWidget::BindWidget<UDS_WidgetSwitcher>
              ((UDS_UserWidget *)this,&this->CheckBoxSwitcher,*pFVar1);
  }
  SetCheckBoxState(this);
  return;
}

// OnCheckStateChanged @ 14bcb1d80

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_CommonCheckBox::OnCheckStateChanged(UDS_W_CommonCheckBox *this,bool param_1)

{
  FFieldId local_18 [2];
  
  (this->CheckStateChanged).bIsActivate = param_1;
  local_18[0].FieldName = FFieldNotificationClassDescriptor::CheckStateChanged.FieldName;
  local_18[0].BitNumber = FFieldNotificationClassDescriptor::CheckStateChanged.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,local_18);
  return;
}

// SetCheckBoxState @ 14bcc5430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_CommonCheckBox::SetCheckBoxState(UDS_W_CommonCheckBox *this)

{
  UDS_WidgetSwitcher *pUVar1;
  code *pcVar2;
  UDS_LogManager *pUVar3;
  UDS_CheckBox *this_00;
  bool bVar4;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this_00 = (this->CheckBox).field0_0x0.DebugPtr;
  if (this_00 == (UDS_CheckBox *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_W_CommonCheckBox::SetCheckBoxState",0x26,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x45,L"CheckBox is nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    pUVar1 = (this->CheckBoxSwitcher).field0_0x0.DebugPtr;
    if (pUVar1 == (UDS_WidgetSwitcher *)0x0) {
      bVar4 = this->bIsChecked != false;
    }
    else {
      if (this->bIsDisabled != false) {
        pcVar2 = *(code **)(*(longlong *)pUVar1 + 0x330);
        if (this->bIsChecked != false) {
          (*pcVar2)(pUVar1,1);
          return;
        }
        (*pcVar2)(pUVar1,2);
        return;
      }
      (**(code **)(*(longlong *)pUVar1 + 0x330))();
      this_00 = (this->CheckBox).field0_0x0.DebugPtr;
      if (this->bIsChecked == false) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
    }
    UCheckBox::SetCheckedState((UCheckBox *)this_00,bVar4);
  }
  return;
}

// SetbIsChecked @ 14bcc9bf0

void __thiscall UDS_W_CommonCheckBox::SetbIsChecked(UDS_W_CommonCheckBox *this,bool *param_1)

{
  this->bIsChecked = *param_1;
  SetCheckBoxState(this);
  return;
}

// SetbIsDisabled @ 14bcc9c40

void __thiscall UDS_W_CommonCheckBox::SetbIsDisabled(UDS_W_CommonCheckBox *this,bool param_1)

{
  this->bIsDisabled = param_1;
  SetCheckBoxState(this);
  return;
}

