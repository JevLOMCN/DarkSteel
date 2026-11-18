// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 21

// StaticClass @ 14b6ef690

UClass * __cdecl UDS_VM_WaitCompleteData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WaitCompleteData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WaitCompleteData",
               &Z_Registration_Info_UClass_UDS_VM_WaitCompleteData.InnerSingleton,
               StaticRegisterNativesUDS_VM_WaitCompleteData,0x188,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_WaitCompleteData>,
               InternalVTableHelperCtorCaller<UDS_VM_WaitCompleteData>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WaitCompleteData.InnerSingleton;
}

// UDS_VM_WaitCompleteData @ 14b6f3ad0

UDS_VM_WaitCompleteData * __thiscall
UDS_VM_WaitCompleteData::UDS_VM_WaitCompleteData
          (UDS_VM_WaitCompleteData *this,FVTableHelper *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->Name).StringTableType = None;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WaitCompleteData__6B_;
  (this->Name).StringTableID = 0;
  (this->Name).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Name).StringEnumTableNameID.Number = 0;
  (this->Name).DateTime.Ticks = 0;
  (this->Name).TimeSpan.Ticks = 0;
  (this->Name).TimeExpressionType = None;
  (this->Name).IsExpression = false;
  (this->Name).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).UniqueString.Data.ArrayNum = 0;
  (this->Name).UniqueString.Data.ArrayMax = 0;
  (this->Name).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).FormatArgs.ArrayNum = 0;
  (this->Name).FormatArgs.ArrayMax = 0;
  FText::FText(&this->RemainTime);
  (this->FixedText_TimeLeft).StringTableType = StringUi;
  (this->FixedText_TimeLeft).StringTableID = 0x13a1;
  (this->FixedText_TimeLeft).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_TimeLeft).StringEnumTableNameID.Number = 0;
  (this->FixedText_TimeLeft).DateTime.Ticks = 0;
  (this->FixedText_TimeLeft).TimeSpan.Ticks = 0;
  (this->FixedText_TimeLeft).TimeExpressionType = None;
  (this->FixedText_TimeLeft).IsExpression = false;
  (this->FixedText_TimeLeft).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_TimeLeft).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_TimeLeft).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_TimeLeft).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_TimeLeft).FormatArgs.ArrayNum = 0;
  (this->FixedText_TimeLeft).FormatArgs.ArrayMax = 0;
  (this->WaitCompleteData).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UDS_VM_WaitCompleteData @ 14b6f3bd0

UDS_VM_WaitCompleteData * __thiscall
UDS_VM_WaitCompleteData::UDS_VM_WaitCompleteData
          (UDS_VM_WaitCompleteData *this,FObjectInitializer *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->Name).StringTableType = None;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WaitCompleteData__6B_;
  (this->Name).StringTableID = 0;
  (this->Name).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Name).StringEnumTableNameID.Number = 0;
  (this->Name).DateTime.Ticks = 0;
  (this->Name).TimeSpan.Ticks = 0;
  (this->Name).TimeExpressionType = None;
  (this->Name).IsExpression = false;
  (this->Name).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).UniqueString.Data.ArrayNum = 0;
  (this->Name).UniqueString.Data.ArrayMax = 0;
  (this->Name).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).FormatArgs.ArrayNum = 0;
  (this->Name).FormatArgs.ArrayMax = 0;
  FText::FText(&this->RemainTime);
  (this->FixedText_TimeLeft).StringTableType = StringUi;
  (this->FixedText_TimeLeft).StringTableID = 0x13a1;
  (this->FixedText_TimeLeft).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_TimeLeft).StringEnumTableNameID.Number = 0;
  (this->FixedText_TimeLeft).DateTime.Ticks = 0;
  (this->FixedText_TimeLeft).TimeSpan.Ticks = 0;
  (this->FixedText_TimeLeft).TimeExpressionType = None;
  (this->FixedText_TimeLeft).IsExpression = false;
  (this->FixedText_TimeLeft).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_TimeLeft).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_TimeLeft).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_TimeLeft).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_TimeLeft).FormatArgs.ArrayNum = 0;
  (this->FixedText_TimeLeft).FormatArgs.ArrayMax = 0;
  (this->WaitCompleteData).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UDS_VM_WaitCompleteData @ 14b6f4ca0

void __thiscall UDS_VM_WaitCompleteData::~UDS_VM_WaitCompleteData(UDS_VM_WaitCompleteData *this)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_WaitCompleteData__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_TimeLeft).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_TimeLeft).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_TimeLeft).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_TimeLeft).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->RemainTime).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->Name).FormatArgs.AllocatorInstance.Data,
             (this->Name).FormatArgs.ArrayNum);
  pFVar1 = (this->Name).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Name).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_VM_ModelBase::~UDS_VM_ModelBase((UDS_VM_ModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6f7260

IClassDescriptor * __thiscall
UDS_VM_WaitCompleteData::GetFieldNotificationDescriptor(UDS_VM_WaitCompleteData *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_WaitCompleteData::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6f8020

UClass * __cdecl UDS_VM_WaitCompleteData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_WaitCompleteData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_WaitCompleteData",
               &Z_Registration_Info_UClass_UDS_VM_WaitCompleteData.InnerSingleton,
               StaticRegisterNativesUDS_VM_WaitCompleteData,0x188,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_WaitCompleteData>,
               InternalVTableHelperCtorCaller<UDS_VM_WaitCompleteData>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_WaitCompleteData.InnerSingleton;
}

// GetTickableTickType @ 14b6f8350

ETickableTickType __thiscall
UDS_VM_WaitCompleteData::GetTickableTickType(UDS_VM_WaitCompleteData *this)

{
  return Conditional;
}

// IsUpdate @ 14b6f8390

bool __thiscall UDS_VM_WaitCompleteData::IsUpdate(UDS_VM_WaitCompleteData *this)

{
  return this->bIsUpdate;
}

// StaticRegisterNativesUDS_VM_WaitCompleteData @ 14b6f8590

void __cdecl UDS_VM_WaitCompleteData::StaticRegisterNativesUDS_VM_WaitCompleteData(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_WaitCompleteData_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnDirty_WaitCompleteData @ 14b6f95d0

void __cdecl
UDS_VM_WaitCompleteData::execOnDirty_WaitCompleteData
          (UObject *param_1,FFrame *param_2,void *param_3)

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
  OnDirty_WaitCompleteData((UDS_VM_WaitCompleteData *)param_1,local_res10);
  return;
}

// BindModel @ 14be134a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UDS_VM_WaitCompleteData::BindModel(UDS_VM_WaitCompleteData *this)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  char *pcVar4;
  UObject *this_00;
  UFunction *pUVar5;
  char *pcVar6;
  <lambda_1> local_res8 [8];
  FName local_res10;
  FName local_res18;
  UDS_VM_WaitCompleteData *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b8;
  FWeakObjectPtr local_b0;
  FName local_a8;
  FName *local_a0;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_98;
  FDestructionSentinel local_88;
  FReadAccessScope local_70;
  FReadAccessScope local_58;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)this->_padding_ + 0x2c8))();
  }
  bVar2 = FWeakObjectPtr::IsValid(&(this->WaitCompleteData).WeakPtr);
  if (!bVar2) {
    return;
  }
  pUVar3 = FWeakObjectPtr::Get(&(this->WaitCompleteData).WeakPtr);
  pcVar4 = strstr("&UDS_VM_WaitCompleteData::OnDirty_WaitCompleteData","::");
  if (pcVar4 == (char *)0x0) {
LAB_14be1355b:
    pcVar6 = &DAT_00000002;
LAB_14be13560:
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
      pcVar6 = pcVar4;
      pcVar4 = strstr(pcVar6 + 1,"::");
    } while (pcVar4 != (char *)0x0);
    if (pcVar6 == (char *)0x0) goto LAB_14be1355b;
    pcVar6 = pcVar6 + 2;
    if (*pcVar6 == '0') goto LAB_14be13560;
  }
  ::FName::FName(&local_res18,pcVar6);
  local_b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_b0.ObjectIndex = 0;
  local_b0.ObjectSerialNumber = 0;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  local_res10 = local_res18;
  local_res20 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this != (UDS_VM_WaitCompleteData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_b0,(FObjectPtr)&local_res20);
  local_a8 = local_res10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_b8,&local_70);
  if ((local_a8 == (FName)0x0) ||
     (this_00 = FWeakObjectPtr::Get(&local_b0), this_00 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_70);
  }
  else {
    pUVar5 = UObject::FindFunction(this_00,local_a8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_70);
    if (pUVar5 != (UFunction *)0x0) goto LAB_14be13649;
  }
  local_a0 = &local_res10;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UDS_DataBase_*>::
  __Internal_BindDynamic<UDS_VM_WaitCompleteData>'::__l2::<lambda_1>::operator()(&local_a0);
LAB_14be13649:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_b8,&local_58);
  local_98.Object = local_b0;
  local_98.FunctionName = local_a8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_58);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pUVar3 + 1),
             (FWriteAccessScope *)&local_88);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&pUVar3[1].field_0x8,local_res8,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar3 + 1),&local_98);
  if (local_88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b8.AccessDetector);
  return;
}

// InitViewModel @ 14be257d0

void __thiscall UDS_VM_WaitCompleteData::InitViewModel(UDS_VM_WaitCompleteData *this)

{
  return;
}

// OnDirty_WaitCompleteData @ 14be2da80

void __thiscall
UDS_VM_WaitCompleteData::OnDirty_WaitCompleteData
          (UDS_VM_WaitCompleteData *this,UDS_DataBase *param_1)

{
  TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr> *this_00;
  bool bVar1;
  int iVar2;
  UDS_WaitCompleteData *pUVar3;
  UDS_DataBase *this_01;
  FText *pFVar4;
  float fVar5;
  FText FStack_28;
  FString FStack_18;
  
  this_00 = &this->WaitCompleteData;
  bVar1 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar1) {
    pUVar3 = (UDS_WaitCompleteData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
    bVar1 = UDS_WaitCompleteData::IsComplete(pUVar3);
    FStack_28.Flags = FFieldNotificationClassDescriptor::bIsComplete.BitNumber;
    FStack_28.TextData.Reference =
         (ITextData *)FFieldNotificationClassDescriptor::bIsComplete.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_28);
    if (this->bIsComplete != bVar1) {
      this->bIsComplete = bVar1;
      bVar1 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
      if (bVar1) {
        this_01 = (UDS_DataBase *)FWeakObjectPtr::Get(&this_00->WeakPtr);
        UDS_DataBase::SetIsDirty(this_01,true);
      }
    }
    pUVar3 = (UDS_WaitCompleteData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
    fVar5 = UDS_WaitCompleteData::GetProgressRatio(pUVar3);
    this->Ratio = fVar5;
    FStack_28.Flags = FFieldNotificationClassDescriptor::Ratio.BitNumber;
    FStack_28.TextData.Reference = (ITextData *)FFieldNotificationClassDescriptor::Ratio.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_28);
    bVar1 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
    if (bVar1) {
      pUVar3 = (UDS_WaitCompleteData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      iVar2 = UDS_WaitCompleteData::GetRemainingSeconds(pUVar3);
      UDS_TimeUtilManager::ConvertStringFromSec
                (&FStack_18,(float)iVar2 + __real_3f7d70a4,DayHourSec,false);
      pFVar4 = FText::FromString(&FStack_28,&FStack_18);
      FText::operator=(&this->RemainTime,pFVar4);
      if ((FName)FStack_28.TextData.Reference != (FName)0x0) {
        (**(code **)(*(longlong *)FStack_28.TextData.Reference + 0x10))();
      }
      FStack_28.Flags = FFieldNotificationClassDescriptor::RemainTime.BitNumber;
      FStack_28.TextData.Reference =
           (ITextData *)FFieldNotificationClassDescriptor::RemainTime.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_28);
      if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// OnSetViewModel @ 14be41e90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_WaitCompleteData::OnSetViewModel
          (UDS_VM_WaitCompleteData *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UDS_M_WaitCompleteData *pUVar4;
  TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr> TVar5;
  UDS_WaitCompleteData *pUVar6;
  UDS_LogManager *pUVar7;
  UObject *pUVar8;
  FDS_ItemCraftListTableRow *this_00;
  FDS_ItemBaseTableRow *pFVar9;
  TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr> *pTVar10;
  undefined1 auStackY_358 [32];
  FWeakObjectPtr local_328;
  TSharedPtr<FDS_ViewModelContext_WaitComplete,1> local_320;
  UObject *local_310;
  FName local_308;
  int local_300;
  FDS_Text local_2f8;
  TSharedPtr<FDS_ViewModelContext,1> local_2a8;
  TSharedPtr<FDS_ViewModelContext,1> local_298 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_358;
  local_2a8.Object = param_1->Object;
  local_2a8.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_2a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_2a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_VM_ModelBase::OnSetViewModel((UDS_VM_ModelBase *)this,&local_2a8);
  pUVar8 = (UObject *)0x0;
  if (this->_padding_ == 0) {
    local_298[0].Object = param_1->Object;
    local_298[0].SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_298[0].SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
    {
      LOCK();
      (local_298[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_298[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SafeCast<FDS_ViewModelContext_WaitComplete>(&local_320,local_298);
    if (local_320.Object == (FDS_ViewModelContext_WaitComplete *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      if (pUVar7 != (UDS_LogManager *)0x0) {
        pUVar7 = UDS_LogManager::GetInst();
        local_278._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_278,"UDS_VM_WaitCompleteData::OnSetViewModel",0x27,Yes);
        UDS_LogManager::PrintLog
                  (pUVar7,1,Warning,local_278.Ptr,0x28,
                   L"FDS_ViewModelContext_WaitComplete is nullptr");
        if ((void *)local_278._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_278._padding_);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_320.SharedReferenceCount.ReferenceController);
      goto LAB_14be422b1;
    }
    pTVar10 = &this->WaitCompleteData;
    pTVar10->WeakPtr = ((local_320.Object)->WaitCompleteData).WeakPtr;
    bVar2 = FWeakObjectPtr::IsValid(&pTVar10->WeakPtr);
    if (!bVar2) {
      pUVar7 = UDS_LogManager::GetInst();
      if (pUVar7 != (UDS_LogManager *)0x0) {
        pUVar7 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_VM_WaitCompleteData::OnSetViewModel",0x27,Yes);
        UDS_LogManager::PrintLog(pUVar7,1,Warning,local_158.Ptr,0x2f,L"WaitCompleteData is invalid")
        ;
        if ((void *)local_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_158._padding_);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_320.SharedReferenceCount.ReferenceController);
      goto LAB_14be422b1;
    }
    this->bIsUpdate = (local_320.Object)->IsUpdate;
    pUVar6 = (UDS_WaitCompleteData *)FWeakObjectPtr::Get(&pTVar10->WeakPtr);
    bVar2 = UDS_WaitCompleteData::IsComplete(pUVar6);
    this->bIsComplete = bVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_320.SharedReferenceCount.ReferenceController);
  }
  else {
    pUVar3 = Z_Construct_UClass_UDS_M_WaitCompleteData_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar3);
    if (bVar2) {
      pUVar8 = (UObject *)this->_padding_;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar8);
    }
    local_328.ObjectIndex = 0;
    local_328.ObjectSerialNumber = 0;
    local_310 = pUVar8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar8);
    }
    FWeakObjectPtr::operator=(&local_328,(FObjectPtr)&local_310);
    bVar2 = FWeakObjectPtr::IsValid(&local_328);
    if (!bVar2) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3921463436562661403>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_WaitCompleteData.cpp"
                         ,0x1b,"false");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      goto LAB_14be422b1;
    }
    pUVar4 = (UDS_M_WaitCompleteData *)FWeakObjectPtr::Get(&local_328);
    pTVar10 = &this->WaitCompleteData;
    TVar5 = UDS_M_WaitCompleteData::GetWaitCompleteData(pUVar4);
                    /* WARNING: Load size is inaccurate */
    pTVar10->WeakPtr = *TVar5.WeakPtr;
    bVar2 = FWeakObjectPtr::IsValid(&pTVar10->WeakPtr);
    if (!bVar2) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3921463436562661406>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_WaitCompleteData.cpp"
                         ,0x1e,"false");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      goto LAB_14be422b1;
    }
    pUVar4 = (UDS_M_WaitCompleteData *)FWeakObjectPtr::Get(&local_328);
    bVar2 = UDS_M_WaitCompleteData::GetIsUpdate(pUVar4);
    this->bIsUpdate = bVar2;
    pUVar6 = (UDS_WaitCompleteData *)FWeakObjectPtr::Get(&pTVar10->WeakPtr);
    bVar2 = UDS_WaitCompleteData::IsComplete(pUVar6);
    this->bIsComplete = bVar2;
  }
  pTVar10 = &this->WaitCompleteData;
  bVar2 = FWeakObjectPtr::IsValid(&pTVar10->WeakPtr);
  if ((bVar2) && (pUVar8 = FWeakObjectPtr::Get(&pTVar10->WeakPtr), pUVar8[2].field_0x8 == '\x01')) {
    pUVar8 = FWeakObjectPtr::Get(&pTVar10->WeakPtr);
    this_00 = FDS_ItemCraftListTableRow::Get(*(long64 *)&pUVar8[2].field_0x18,true);
    if (this_00 != (FDS_ItemCraftListTableRow *)0x0) {
      pFVar9 = FDS_ItemCraftListTableRow::ID_CraftItemTable(this_00);
      local_2f8.StringTableType = None;
      local_2f8.StringTableID = 0;
      local_2f8.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_2f8.StringEnumTableNameID.Number = 0;
      local_2f8.TimeExpressionType = None;
      local_2f8.DateTime.Ticks = 0;
      local_2f8.TimeSpan.Ticks = 0;
      local_2f8.IsExpression = false;
      local_2f8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2f8.UniqueString.Data.ArrayNum = 0;
      local_2f8.UniqueString.Data.ArrayMax = 0;
      local_2f8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2f8.FormatArgs.ArrayNum = 0;
      local_2f8.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringID(&local_2f8,&pFVar9->ID_Name);
      FDS_Text::operator=(&this->Name,&local_2f8);
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_2f8.FormatArgs.AllocatorInstance.Data,
                 local_2f8.FormatArgs.ArrayNum);
      if ((FDS_TextFormatArg *)local_2f8.FormatArgs.AllocatorInstance.Data !=
          (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_2f8.FormatArgs.AllocatorInstance.Data);
      }
      if (local_2f8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2f8.UniqueString.Data.AllocatorInstance.Data);
      }
      local_300 = FFieldNotificationClassDescriptor::Name.BitNumber;
      local_308 = FFieldNotificationClassDescriptor::Name.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_308);
    }
  }
  Update(this);
LAB_14be422b1:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUpdate @ 14be44790

void __thiscall UDS_VM_WaitCompleteData::OnUpdate(UDS_VM_WaitCompleteData *this,float param_1)

{
  TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr> *this_00;
  bool bVar1;
  int iVar2;
  UDS_WaitCompleteData *pUVar3;
  UDS_DataBase *this_01;
  FText *pFVar4;
  float fVar5;
  FText FStack_28;
  FString FStack_18;
  
  this_00 = &this->WaitCompleteData;
  bVar1 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar1) {
    pUVar3 = (UDS_WaitCompleteData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
    bVar1 = UDS_WaitCompleteData::IsComplete(pUVar3);
    FStack_28.Flags = FFieldNotificationClassDescriptor::bIsComplete.BitNumber;
    FStack_28.TextData.Reference =
         (ITextData *)FFieldNotificationClassDescriptor::bIsComplete.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_28);
    if (this->bIsComplete != bVar1) {
      this->bIsComplete = bVar1;
      bVar1 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
      if (bVar1) {
        this_01 = (UDS_DataBase *)FWeakObjectPtr::Get(&this_00->WeakPtr);
        UDS_DataBase::SetIsDirty(this_01,true);
      }
    }
    pUVar3 = (UDS_WaitCompleteData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
    fVar5 = UDS_WaitCompleteData::GetProgressRatio(pUVar3);
    this->Ratio = fVar5;
    FStack_28.Flags = FFieldNotificationClassDescriptor::Ratio.BitNumber;
    FStack_28.TextData.Reference = (ITextData *)FFieldNotificationClassDescriptor::Ratio.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_28);
    bVar1 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
    if (bVar1) {
      pUVar3 = (UDS_WaitCompleteData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      iVar2 = UDS_WaitCompleteData::GetRemainingSeconds(pUVar3);
      UDS_TimeUtilManager::ConvertStringFromSec
                (&FStack_18,(float)iVar2 + __real_3f7d70a4,DayHourSec,false);
      pFVar4 = FText::FromString(&FStack_28,&FStack_18);
      FText::operator=(&this->RemainTime,pFVar4);
      if ((FName)FStack_28.TextData.Reference != (FName)0x0) {
        (**(code **)(*(longlong *)FStack_28.TextData.Reference + 0x10))();
      }
      FStack_28.Flags = FFieldNotificationClassDescriptor::RemainTime.BitNumber;
      FStack_28.TextData.Reference =
           (ITextData *)FFieldNotificationClassDescriptor::RemainTime.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_28);
      if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// SetIsComplete @ 14be4b900

void __thiscall UDS_VM_WaitCompleteData::SetIsComplete(UDS_VM_WaitCompleteData *this,bool *param_1)

{
  bool bVar1;
  UDS_DataBase *this_00;
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::bIsComplete.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bIsComplete.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  if (this->bIsComplete != *param_1) {
    this->bIsComplete = *param_1;
    bVar1 = FWeakObjectPtr::IsValid(&(this->WaitCompleteData).WeakPtr);
    if (bVar1) {
      this_00 = (UDS_DataBase *)FWeakObjectPtr::Get(&(this->WaitCompleteData).WeakPtr);
      UDS_DataBase::SetIsDirty(this_00,true);
    }
  }
  return;
}

// SetName @ 14be4e1f0

void __thiscall UDS_VM_WaitCompleteData::SetName(UDS_VM_WaitCompleteData *this)

{
  bool bVar1;
  UObject *pUVar2;
  FDS_ItemCraftListTableRow *this_00;
  FDS_ItemBaseTableRow *pFVar3;
  FName local_68;
  int local_60;
  FDS_Text local_58;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->WaitCompleteData).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->WaitCompleteData).WeakPtr);
    if (pUVar2[2].field_0x8 == '\x01') {
      pUVar2 = FWeakObjectPtr::Get(&(this->WaitCompleteData).WeakPtr);
      this_00 = FDS_ItemCraftListTableRow::Get(*(long64 *)&pUVar2[2].field_0x18,true);
      if (this_00 != (FDS_ItemCraftListTableRow *)0x0) {
        pFVar3 = FDS_ItemCraftListTableRow::ID_CraftItemTable(this_00);
        local_58.StringTableType = None;
        local_58.StringTableID = 0;
        local_58.StringEnumTableNameID.ComparisonIndex.Value = 0;
        local_58.StringEnumTableNameID.Number = 0;
        local_58.TimeExpressionType = None;
        local_58.IsExpression = false;
        local_58.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_58.UniqueString.Data.ArrayNum = 0;
        local_58.UniqueString.Data.ArrayMax = 0;
        local_58.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_58.FormatArgs.ArrayNum = 0;
        local_58.FormatArgs.ArrayMax = 0;
        local_58.DateTime.Ticks = 0;
        local_58.TimeSpan.Ticks = 0;
        FDS_Text::SetTextFromStringID(&local_58,&pFVar3->ID_Name);
        FDS_Text::operator=(&this->Name,&local_58);
        DestructItems<FDS_TextFormatArg,int>
                  ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data,
                   local_58.FormatArgs.ArrayNum);
        if ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data !=
            (FDS_TextFormatArg *)0x0) {
          FMemory::Free(local_58.FormatArgs.AllocatorInstance.Data);
        }
        if (local_58.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.UniqueString.Data.AllocatorInstance.Data);
        }
        local_60 = FFieldNotificationClassDescriptor::Name.BitNumber;
        local_68 = FFieldNotificationClassDescriptor::Name.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
      }
    }
  }
  return;
}

// SetRatio @ 14be4fe70

void __thiscall UDS_VM_WaitCompleteData::SetRatio(UDS_VM_WaitCompleteData *this,float *param_1)

{
  FName local_18;
  int local_10;
  
  this->Ratio = *param_1;
  local_10 = FFieldNotificationClassDescriptor::Ratio.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Ratio.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetRemainTime @ 14be4ff00

void __thiscall UDS_VM_WaitCompleteData::SetRemainTime(UDS_VM_WaitCompleteData *this)

{
  bool bVar1;
  int iVar2;
  UDS_WaitCompleteData *this_00;
  FText *pFVar3;
  FText local_28;
  FString local_18;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->WaitCompleteData).WeakPtr);
  if (bVar1) {
    this_00 = (UDS_WaitCompleteData *)FWeakObjectPtr::Get(&(this->WaitCompleteData).WeakPtr);
    iVar2 = UDS_WaitCompleteData::GetRemainingSeconds(this_00);
    UDS_TimeUtilManager::ConvertStringFromSec
              (&local_18,(float)iVar2 + __real_3f7d70a4,DayHourSec,false);
    pFVar3 = FText::FromString(&local_28,&local_18);
    FText::operator=(&this->RemainTime,pFVar3);
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
    local_28.Flags = FFieldNotificationClassDescriptor::RemainTime.BitNumber;
    local_28.TextData.Reference =
         (ITextData *)FFieldNotificationClassDescriptor::RemainTime.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// UnbindModel @ 14be55dc0

void __thiscall UDS_VM_WaitCompleteData::UnbindModel(UDS_VM_WaitCompleteData *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  UDS_VM_ModelBase::UnbindModel((UDS_VM_ModelBase *)this);
  bVar1 = FWeakObjectPtr::IsValid(&(this->WaitCompleteData).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->WaitCompleteData).WeakPtr);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar2 + 1),(UObject *)this)
    ;
  }
  return;
}

// Update @ 14be55fb0

void __thiscall UDS_VM_WaitCompleteData::Update(UDS_VM_WaitCompleteData *this)

{
  TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr> *this_00;
  bool bVar1;
  int iVar2;
  UDS_WaitCompleteData *pUVar3;
  UDS_DataBase *this_01;
  FText *pFVar4;
  float fVar5;
  FText local_28;
  FString local_18;
  
  this_00 = &this->WaitCompleteData;
  bVar1 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar1) {
    pUVar3 = (UDS_WaitCompleteData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
    bVar1 = UDS_WaitCompleteData::IsComplete(pUVar3);
    local_28.Flags = FFieldNotificationClassDescriptor::bIsComplete.BitNumber;
    local_28.TextData.Reference =
         (ITextData *)FFieldNotificationClassDescriptor::bIsComplete.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
    if (this->bIsComplete != bVar1) {
      this->bIsComplete = bVar1;
      bVar1 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
      if (bVar1) {
        this_01 = (UDS_DataBase *)FWeakObjectPtr::Get(&this_00->WeakPtr);
        UDS_DataBase::SetIsDirty(this_01,true);
      }
    }
    pUVar3 = (UDS_WaitCompleteData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
    fVar5 = UDS_WaitCompleteData::GetProgressRatio(pUVar3);
    this->Ratio = fVar5;
    local_28.Flags = FFieldNotificationClassDescriptor::Ratio.BitNumber;
    local_28.TextData.Reference = (ITextData *)FFieldNotificationClassDescriptor::Ratio.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
    bVar1 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
    if (bVar1) {
      pUVar3 = (UDS_WaitCompleteData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      iVar2 = UDS_WaitCompleteData::GetRemainingSeconds(pUVar3);
      UDS_TimeUtilManager::ConvertStringFromSec
                (&local_18,(float)iVar2 + __real_3f7d70a4,DayHourSec,false);
      pFVar4 = FText::FromString(&local_28,&local_18);
      FText::operator=(&this->RemainTime,pFVar4);
      if ((FName)local_28.TextData.Reference != (FName)0x0) {
        (**(code **)(*(longlong *)local_28.TextData.Reference + 0x10))();
      }
      local_28.Flags = FFieldNotificationClassDescriptor::RemainTime.BitNumber;
      local_28.TextData.Reference =
           (ITextData *)FFieldNotificationClassDescriptor::RemainTime.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

