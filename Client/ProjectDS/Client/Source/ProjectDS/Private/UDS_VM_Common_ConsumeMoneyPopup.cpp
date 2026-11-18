// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 21

// SetClickConfirmButton_WrapperImpl @ 14b627680

void __cdecl
UDS_VM_Common_ConsumeMoneyPopup::SetClickConfirmButton_WrapperImpl(void *param_1,void *param_2)

{
  FReadAccessScope FStack_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)param_1 + 0x240),
             &FStack_28);
  if ((*(int *)((longlong)param_1 + 0x250) != 0) &&
     (*(longlong **)((longlong)param_1 + 0x248) != (longlong *)0x0)) {
    (**(code **)(**(longlong **)((longlong)param_1 + 0x248) + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&FStack_28);
  return;
}

// SetClickCancelButton_WrapperImpl @ 14b627690

void __cdecl
UDS_VM_Common_ConsumeMoneyPopup::SetClickCancelButton_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_28;
  int iStack_20;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)param_1 + 600),
             (FReadAccessScope *)&FStack_28);
  if ((*(int *)((longlong)param_1 + 0x268) != 0) &&
     (*(longlong **)((longlong)param_1 + 0x260) != (longlong *)0x0)) {
    (**(code **)(**(longlong **)((longlong)param_1 + 0x260) + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&FStack_28);
  *(undefined1 *)((longlong)param_1 + 0x1e0) = 1;
  iStack_20 = FFieldNotificationClassDescriptor::CloseMySelf.BitNumber;
  FStack_28 = FFieldNotificationClassDescriptor::CloseMySelf.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_28);
  return;
}

// StaticClass @ 14b6276a0

UClass * __cdecl UDS_VM_Common_ConsumeMoneyPopup::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Common_ConsumeMoneyPopup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Common_ConsumeMoneyPopup",
               &Z_Registration_Info_UClass_UDS_VM_Common_ConsumeMoneyPopup.InnerSingleton,
               StaticRegisterNativesUDS_VM_Common_ConsumeMoneyPopup,0x270,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_Common_ConsumeMoneyPopup>,
               InternalVTableHelperCtorCaller<UDS_VM_Common_ConsumeMoneyPopup>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Common_ConsumeMoneyPopup.InnerSingleton;
}

// UDS_VM_Common_ConsumeMoneyPopup @ 14b62c0f0

UDS_VM_Common_ConsumeMoneyPopup * __thiscall
UDS_VM_Common_ConsumeMoneyPopup::UDS_VM_Common_ConsumeMoneyPopup
          (UDS_VM_Common_ConsumeMoneyPopup *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Common_ConsumeMoneyPopup__6B_;
  (this->Txt_Title).StringTableID = 0;
  (this->Txt_Title).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Txt_Title).StringEnumTableNameID.Number = 0;
  (this->Txt_Title).DateTime.Ticks = 0;
  (this->Txt_Title).TimeSpan.Ticks = 0;
  (this->Txt_Title).TimeExpressionType = None;
  (this->Txt_Title).IsExpression = false;
  (this->Txt_Title).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Txt_Title).UniqueString.Data.ArrayNum = 0;
  (this->Txt_Title).UniqueString.Data.ArrayMax = 0;
  (this->Txt_Title).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Txt_Title).FormatArgs.ArrayNum = 0;
  (this->Txt_Title).FormatArgs.ArrayMax = 0;
  (this->Txt_Content).StringTableType = None;
  (this->Txt_Content).StringTableID = 0;
  (this->Txt_Content).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Txt_Content).StringEnumTableNameID.Number = 0;
  (this->Txt_Content).DateTime.Ticks = 0;
  (this->Txt_Content).TimeSpan.Ticks = 0;
  (this->Txt_Content).TimeExpressionType = None;
  (this->Txt_Content).IsExpression = false;
  (this->Txt_Content).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Txt_Content).UniqueString.Data.ArrayNum = 0;
  (this->Txt_Content).UniqueString.Data.ArrayMax = 0;
  (this->Txt_Content).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Txt_Content).FormatArgs.ArrayNum = 0;
  (this->Txt_Content).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_ConfrimButton).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_ConfrimButton).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_ConfrimButton).DateTime.Ticks = 0;
  (this->FixedTxt_ConfrimButton).TimeSpan.Ticks = 0;
  (this->FixedTxt_ConfrimButton).TimeExpressionType = None;
  (this->FixedTxt_ConfrimButton).IsExpression = false;
  (this->FixedTxt_ConfrimButton).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_ConfrimButton).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_ConfrimButton).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_ConfrimButton).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_ConfrimButton).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_ConfrimButton).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_CancelButton).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_CancelButton).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_CancelButton).DateTime.Ticks = 0;
  (this->FixedTxt_CancelButton).TimeSpan.Ticks = 0;
  (this->FixedTxt_CancelButton).TimeExpressionType = None;
  (this->FixedTxt_CancelButton).IsExpression = false;
  (this->FixedTxt_CancelButton).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_CancelButton).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_CancelButton).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_CancelButton).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_CancelButton).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_CancelButton).FormatArgs.ArrayMax = 0;
  (this->CloseMySelf).bIsActivate = false;
  (this->ClickConfirmButton)._padding_ = '\0';
  (this->ClickConfirmButton).bIsCustomSelected = false;
  (this->ClickConfirmButton).bIsLacked = false;
  (this->ClickConfirmButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickConfirmButton).Delegate = 0;
  *(undefined8 *)&(this->ClickConfirmButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickConfirmButton).Delegate.field_0x10 = 0;
  (this->ClickCancelButton)._padding_ = '\0';
  (this->ClickCancelButton).bIsCustomSelected = false;
  (this->ClickCancelButton).bIsLacked = false;
  (this->ClickCancelButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickCancelButton).Delegate = 0;
  *(undefined8 *)&(this->ClickCancelButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickCancelButton).Delegate.field_0x10 = 0;
  (this->VM_MoneyDisplay).field0_0x0.DebugPtr = (UDS_VM_MoneyDisplay *)0x0;
  this->MoneyType = 0;
  this->MoneyQuantity = 0;
  *(undefined8 *)&this->OnConsumeConfirm = 0;
  *(undefined8 *)&(this->OnConsumeConfirm).field_0x8 = 0;
  *(undefined4 *)&(this->OnConsumeConfirm).field_0x10 = 0;
  *(undefined8 *)&this->OnConsumeCancel = 0;
  *(undefined8 *)&(this->OnConsumeCancel).field_0x8 = 0;
  *(undefined4 *)&(this->OnConsumeCancel).field_0x10 = 0;
  (this->Txt_Title).StringTableType = None;
  (this->FixedTxt_ConfrimButton).StringTableType = StringUi;
  (this->FixedTxt_ConfrimButton).StringTableID = 0x65;
  (this->FixedTxt_CancelButton).StringTableType = StringUi;
  (this->FixedTxt_CancelButton).StringTableID = 0x66;
  return this;
}

// UDS_VM_Common_ConsumeMoneyPopup @ 14b62c2e0

UDS_VM_Common_ConsumeMoneyPopup * __thiscall
UDS_VM_Common_ConsumeMoneyPopup::UDS_VM_Common_ConsumeMoneyPopup
          (UDS_VM_Common_ConsumeMoneyPopup *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Common_ConsumeMoneyPopup__6B_;
  (this->Txt_Title).StringTableID = 0;
  (this->Txt_Title).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Txt_Title).StringEnumTableNameID.Number = 0;
  (this->Txt_Title).DateTime.Ticks = 0;
  (this->Txt_Title).TimeSpan.Ticks = 0;
  (this->Txt_Title).TimeExpressionType = None;
  (this->Txt_Title).IsExpression = false;
  (this->Txt_Title).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Txt_Title).UniqueString.Data.ArrayNum = 0;
  (this->Txt_Title).UniqueString.Data.ArrayMax = 0;
  (this->Txt_Title).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Txt_Title).FormatArgs.ArrayNum = 0;
  (this->Txt_Title).FormatArgs.ArrayMax = 0;
  (this->Txt_Content).StringTableType = None;
  (this->Txt_Content).StringTableID = 0;
  (this->Txt_Content).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Txt_Content).StringEnumTableNameID.Number = 0;
  (this->Txt_Content).DateTime.Ticks = 0;
  (this->Txt_Content).TimeSpan.Ticks = 0;
  (this->Txt_Content).TimeExpressionType = None;
  (this->Txt_Content).IsExpression = false;
  (this->Txt_Content).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Txt_Content).UniqueString.Data.ArrayNum = 0;
  (this->Txt_Content).UniqueString.Data.ArrayMax = 0;
  (this->Txt_Content).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Txt_Content).FormatArgs.ArrayNum = 0;
  (this->Txt_Content).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_ConfrimButton).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_ConfrimButton).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_ConfrimButton).DateTime.Ticks = 0;
  (this->FixedTxt_ConfrimButton).TimeSpan.Ticks = 0;
  (this->FixedTxt_ConfrimButton).TimeExpressionType = None;
  (this->FixedTxt_ConfrimButton).IsExpression = false;
  (this->FixedTxt_ConfrimButton).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_ConfrimButton).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_ConfrimButton).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_ConfrimButton).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_ConfrimButton).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_ConfrimButton).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_CancelButton).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_CancelButton).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_CancelButton).DateTime.Ticks = 0;
  (this->FixedTxt_CancelButton).TimeSpan.Ticks = 0;
  (this->FixedTxt_CancelButton).TimeExpressionType = None;
  (this->FixedTxt_CancelButton).IsExpression = false;
  (this->FixedTxt_CancelButton).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_CancelButton).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_CancelButton).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_CancelButton).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_CancelButton).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_CancelButton).FormatArgs.ArrayMax = 0;
  (this->CloseMySelf).bIsActivate = false;
  (this->ClickConfirmButton)._padding_ = '\0';
  (this->ClickConfirmButton).bIsCustomSelected = false;
  (this->ClickConfirmButton).bIsLacked = false;
  (this->ClickConfirmButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickConfirmButton).Delegate = 0;
  *(undefined8 *)&(this->ClickConfirmButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickConfirmButton).Delegate.field_0x10 = 0;
  (this->ClickCancelButton)._padding_ = '\0';
  (this->ClickCancelButton).bIsCustomSelected = false;
  (this->ClickCancelButton).bIsLacked = false;
  (this->ClickCancelButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickCancelButton).Delegate = 0;
  *(undefined8 *)&(this->ClickCancelButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickCancelButton).Delegate.field_0x10 = 0;
  (this->VM_MoneyDisplay).field0_0x0.DebugPtr = (UDS_VM_MoneyDisplay *)0x0;
  this->MoneyType = 0;
  this->MoneyQuantity = 0;
  *(undefined8 *)&this->OnConsumeConfirm = 0;
  *(undefined8 *)&(this->OnConsumeConfirm).field_0x8 = 0;
  *(undefined4 *)&(this->OnConsumeConfirm).field_0x10 = 0;
  *(undefined8 *)&this->OnConsumeCancel = 0;
  *(undefined8 *)&(this->OnConsumeCancel).field_0x8 = 0;
  *(undefined4 *)&(this->OnConsumeCancel).field_0x10 = 0;
  (this->Txt_Title).StringTableType = None;
  (this->FixedTxt_ConfrimButton).StringTableType = StringUi;
  (this->FixedTxt_ConfrimButton).StringTableID = 0x65;
  (this->FixedTxt_CancelButton).StringTableType = StringUi;
  (this->FixedTxt_CancelButton).StringTableID = 0x66;
  return this;
}

// ~UDS_VM_Common_ConsumeMoneyPopup @ 14b62e990

void __thiscall
UDS_VM_Common_ConsumeMoneyPopup::~UDS_VM_Common_ConsumeMoneyPopup
          (UDS_VM_Common_ConsumeMoneyPopup *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Common_ConsumeMoneyPopup__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnConsumeCancel);
  pvVar1 = *(void **)&(this->OnConsumeCancel).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnConsumeCancel);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnConsumeConfirm);
  pvVar1 = *(void **)&(this->OnConsumeConfirm).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnConsumeConfirm);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickCancelButton).Delegate);
  pvVar1 = *(void **)&(this->ClickCancelButton).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickCancelButton).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickConfirmButton).Delegate);
  pvVar1 = *(void **)&(this->ClickConfirmButton).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickConfirmButton).Delegate);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_CancelButton).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_CancelButton).FormatArgs.ArrayNum);
  pFVar2 = (this->FixedTxt_CancelButton).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->FixedTxt_CancelButton).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_ConfrimButton).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_ConfrimButton).FormatArgs.ArrayNum);
  pFVar2 = (this->FixedTxt_ConfrimButton).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->FixedTxt_ConfrimButton).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->Txt_Content).FormatArgs.AllocatorInstance.Data,
             (this->Txt_Content).FormatArgs.ArrayNum);
  pFVar2 = (this->Txt_Content).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Txt_Content).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->Txt_Title).FormatArgs.AllocatorInstance.Data,
             (this->Txt_Title).FormatArgs.ArrayNum);
  pFVar2 = (this->Txt_Title).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Txt_Title).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b631670

IClassDescriptor * __thiscall
UDS_VM_Common_ConsumeMoneyPopup::GetFieldNotificationDescriptor
          (UDS_VM_Common_ConsumeMoneyPopup *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Common_ConsumeMoneyPopup::FFieldNotificationClassDescriptor::GetDescriptor'::
             __l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b631fa0

UClass * __cdecl UDS_VM_Common_ConsumeMoneyPopup::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Common_ConsumeMoneyPopup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Common_ConsumeMoneyPopup",
               &Z_Registration_Info_UClass_UDS_VM_Common_ConsumeMoneyPopup.InnerSingleton,
               StaticRegisterNativesUDS_VM_Common_ConsumeMoneyPopup,0x270,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_Common_ConsumeMoneyPopup>,
               InternalVTableHelperCtorCaller<UDS_VM_Common_ConsumeMoneyPopup>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Common_ConsumeMoneyPopup.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Common_ConsumeMoneyPopup @ 14b632f60

void __cdecl
UDS_VM_Common_ConsumeMoneyPopup::StaticRegisterNativesUDS_VM_Common_ConsumeMoneyPopup(void)

{
  return;
}

// BindModel @ 14bdb1220

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_Common_ConsumeMoneyPopup::BindModel(UDS_VM_Common_ConsumeMoneyPopup *this)

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

// InitViewModel @ 14bdc6ab0

void __thiscall
UDS_VM_Common_ConsumeMoneyPopup::InitViewModel(UDS_VM_Common_ConsumeMoneyPopup *this)

{
  return;
}

// OnClickCancelButton @ 14bdcb9d0

void __thiscall
UDS_VM_Common_ConsumeMoneyPopup::OnClickCancelButton
          (UDS_VM_Common_ConsumeMoneyPopup *this,FDS_ButtonEventField *param_1)

{
  longlong *plVar1;
  FName local_28;
  int local_20;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnConsumeCancel,
             (FReadAccessScope *)&local_28);
  if ((*(int *)&(this->OnConsumeCancel).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnConsumeCancel).field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_28);
  (this->CloseMySelf).bIsActivate = true;
  local_20 = FFieldNotificationClassDescriptor::CloseMySelf.BitNumber;
  local_28 = FFieldNotificationClassDescriptor::CloseMySelf.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  return;
}

// OnClickConfirmButton @ 14bdcc2a0

void __thiscall
UDS_VM_Common_ConsumeMoneyPopup::OnClickConfirmButton
          (UDS_VM_Common_ConsumeMoneyPopup *this,FDS_ButtonEventField *param_1)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnConsumeConfirm,
             &local_28);
  if ((*(int *)&(this->OnConsumeConfirm).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnConsumeConfirm).field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// OnCloseMySelf @ 14bdcdcc0

void __thiscall
UDS_VM_Common_ConsumeMoneyPopup::OnCloseMySelf(UDS_VM_Common_ConsumeMoneyPopup *this)

{
  FName local_18;
  int local_10;
  
  (this->CloseMySelf).bIsActivate = true;
  local_10 = FFieldNotificationClassDescriptor::CloseMySelf.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::CloseMySelf.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnOpenPopup @ 14bdd0950

void __cdecl
UDS_VM_Common_ConsumeMoneyPopup::OnOpenPopup
          (UDS_UserWidget *param_1,
          TSharedPtr<FDS_ViewModelContext_Common_ConsumeMoneyPopup,1> *param_2)

{
  FDS_ViewModelContext_Common_ConsumeMoneyPopup *pFVar1;
  FWeakObjectPtr local_res8;
  UDS_UserWidget *local_res18 [2];
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  if ((param_1 != (UDS_UserWidget *)0x0) &&
     (pFVar1 = param_2->Object, pFVar1 != (FDS_ViewModelContext_Common_ConsumeMoneyPopup *)0x0)) {
    local_18.SharedReferenceCount.ReferenceController =
         (param_2->SharedReferenceCount).ReferenceController;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18.Object = (FDS_ViewModelContext *)pFVar1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res18[0] = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res8,&local_18,false);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// OnSetViewModel @ 14bdd7920

void __thiscall
UDS_VM_Common_ConsumeMoneyPopup::OnSetViewModel
          (UDS_VM_Common_ConsumeMoneyPopup *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  FName FVar3;
  int iVar4;
  FDS_ViewModelContext_MoneyDisplay *pFVar5;
  bool bVar6;
  UDS_VM_MoneyDisplay *pUVar7;
  FName local_78;
  int local_70;
  FName local_68;
  int local_60;
  TSharedPtr<FDS_ViewModelContext_Common_ConsumeMoneyPopup,1> local_58;
  TSharedPtr<FDS_ViewModelContext_MoneyDisplay,1> local_48;
  TSharedPtr<FDS_ViewModelContext,1> local_38;
  TSharedPtr<FDS_ViewModelContext,1> local_28 [2];
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_38.Object = param_1->Object;
  local_38.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_Common_ConsumeMoneyPopup>(&local_58,&local_38);
  if (local_58.Object == (FDS_ViewModelContext_Common_ConsumeMoneyPopup *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    goto LAB_14bdd7bf5;
  }
  if ((local_58.Object == (FDS_ViewModelContext_Common_ConsumeMoneyPopup *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = FFieldNotificationClassDescriptor::Txt_Title.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::Txt_Title.FieldName;
  FDS_Text::operator=(&this->Txt_Title,&(local_58.Object)->Txt_Title);
  local_78 = FVar3;
  local_70 = iVar4;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
  if ((local_58.Object == (FDS_ViewModelContext_Common_ConsumeMoneyPopup *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = FFieldNotificationClassDescriptor::Txt_Content.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::Txt_Content.FieldName;
  FDS_Text::operator=(&this->Txt_Content,&(local_58.Object)->Txt_Content);
  local_68 = FVar3;
  local_60 = iVar4;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
  if ((local_58.Object == (FDS_ViewModelContext_Common_ConsumeMoneyPopup *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this->MoneyType = (local_58.Object)->MoneyType;
  this->MoneyQuantity = (local_58.Object)->MoneyQuantity;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnConsumeConfirm,&(local_58.Object)->OnConsumeConfirm);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnConsumeCancel,&(local_58.Object)->OnConsumeCancel);
  if ((this->VM_MoneyDisplay).field0_0x0.DebugPtr == (UDS_VM_MoneyDisplay *)0x0) {
    pUVar7 = UDS_ViewModelBase::CreateViewModel<UDS_VM_MoneyDisplay>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar7 != (UDS_VM_MoneyDisplay *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    (this->VM_MoneyDisplay).field0_0x0.DebugPtr = pUVar7;
    if (pUVar7 != (UDS_VM_MoneyDisplay *)0x0) goto LAB_14bdd7b37;
  }
  else {
LAB_14bdd7b37:
    MakeContext<FDS_ViewModelContext_MoneyDisplay>(&local_48);
    pFVar5 = local_48.Object;
    if (local_48.Object != (FDS_ViewModelContext_MoneyDisplay *)0x0) {
      if ((local_48.Object == (FDS_ViewModelContext_MoneyDisplay *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(undefined4 *)&pFVar5->_padding_ = 0x192;
      pFVar5->MoneyId = (longlong)this->MoneyType;
      pFVar5->Quantity = this->MoneyQuantity;
      pFVar5->IsLackMoney = true;
      pUVar7 = (this->VM_MoneyDisplay).field0_0x0.DebugPtr;
      local_28[0].Object = (FDS_ViewModelContext *)local_48.Object;
      local_28[0].SharedReferenceCount.ReferenceController =
           local_48.SharedReferenceCount.ReferenceController;
      if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar7,local_28);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
LAB_14bdd7bf5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OpenPopup @ 14bde1950

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_Common_ConsumeMoneyPopup::OpenPopup
          (TSharedPtr<FDS_ViewModelContext_Common_ConsumeMoneyPopup,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  UDS_WindowManager *this;
  undefined8 *puVar2;
  ulong64 uVar3;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  if ((param_1->Object != (FDS_ViewModelContext_Common_ConsumeMoneyPopup *)0x0) &&
     (this = UDS_WindowManager::GetInst(), this != (UDS_WindowManager *)0x0)) {
    local_48 = (undefined1  [8])0x0;
    local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_40.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
               (FWriteAccessScope *)&local_30);
    local_18 = &local_40;
    puVar2 = UE::Core::Private::DelegateAllocate(0x28,&local_40);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__V__TSharedPtr_UFDS_ViewModelContext_Common_ConsumeMoneyPopup___00____6B_
      ;
      puVar2[1] = param_1->Object;
      pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
      puVar2[2] = pTVar1;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[3] = uVar3;
      *puVar2 = &
                ___7__TBaseStaticDelegateInstance___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__V__TSharedPtr_UFDS_ViewModelContext_Common_ConsumeMoneyPopup___00____6B_
      ;
      puVar2[4] = OnOpenPopup;
    }
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    UDS_WindowManager::OpenWindow
              (this,PopupConsumeMoney,
               (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)local_48);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetTxt_Content @ 14bde9a50

void __thiscall
UDS_VM_Common_ConsumeMoneyPopup::SetTxt_Content
          (UDS_VM_Common_ConsumeMoneyPopup *this,FDS_Text *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::Txt_Content.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::Txt_Content.FieldName;
  FDS_Text::operator=(&this->Txt_Content,param_1);
  local_18 = FVar1;
  local_10 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetTxt_Title @ 14bde9ab0

void __thiscall
UDS_VM_Common_ConsumeMoneyPopup::SetTxt_Title
          (UDS_VM_Common_ConsumeMoneyPopup *this,FDS_Text *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::Txt_Title.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::Txt_Title.FieldName;
  FDS_Text::operator=(&this->Txt_Title,param_1);
  local_18 = FVar1;
  local_10 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetVM_MoneyDisplay @ 14bde9d10

void __thiscall
UDS_VM_Common_ConsumeMoneyPopup::SetVM_MoneyDisplay(UDS_VM_Common_ConsumeMoneyPopup *this)

{
  code *pcVar1;
  FDS_ViewModelContext_MoneyDisplay *pFVar2;
  bool bVar3;
  UDS_VM_MoneyDisplay *pUVar4;
  TSharedPtr<FDS_ViewModelContext_MoneyDisplay,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  if ((this->VM_MoneyDisplay).field0_0x0.DebugPtr == (UDS_VM_MoneyDisplay *)0x0) {
    pUVar4 = UDS_ViewModelBase::CreateViewModel<UDS_VM_MoneyDisplay>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (UDS_VM_MoneyDisplay *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->VM_MoneyDisplay).field0_0x0.DebugPtr = pUVar4;
    if (pUVar4 == (UDS_VM_MoneyDisplay *)0x0) {
      return;
    }
  }
  MakeContext<FDS_ViewModelContext_MoneyDisplay>(&local_28);
  pFVar2 = local_28.Object;
  if (local_28.Object == (FDS_ViewModelContext_MoneyDisplay *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    return;
  }
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
  pFVar2->MoneyId = (longlong)this->MoneyType;
  pFVar2->Quantity = this->MoneyQuantity;
  pFVar2->IsLackMoney = true;
  pUVar4 = (this->VM_MoneyDisplay).field0_0x0.DebugPtr;
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

// UnbindModel @ 14bdec8b0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_Common_ConsumeMoneyPopup::UnbindModel(UDS_VM_Common_ConsumeMoneyPopup *this)

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

