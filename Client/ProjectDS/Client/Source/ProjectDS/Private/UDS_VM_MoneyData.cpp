// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 13

// StaticClass @ 14b6a1370

UClass * __cdecl UDS_VM_MoneyData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_MoneyData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_MoneyData",
               &Z_Registration_Info_UClass_UDS_VM_MoneyData.InnerSingleton,
               StaticRegisterNativesUDS_VM_MoneyData,0x148,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_MoneyData>,
               InternalVTableHelperCtorCaller<UDS_VM_MoneyData>,local_res8,
               UDS_VM_Common_Money::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_MoneyData.InnerSingleton;
}

// UDS_VM_MoneyData @ 14b6a4d10

UDS_VM_MoneyData * __thiscall
UDS_VM_MoneyData::UDS_VM_MoneyData(UDS_VM_MoneyData *this,FVTableHelper *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_VM_Common_Money::UDS_VM_Common_Money((UDS_VM_Common_Money *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_MoneyData__6B_;
  (this->MoneyData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->MoneyData).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// UDS_VM_MoneyData @ 14b6a4d70

UDS_VM_MoneyData * __thiscall
UDS_VM_MoneyData::UDS_VM_MoneyData(UDS_VM_MoneyData *this,FObjectInitializer *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_VM_Common_Money::UDS_VM_Common_Money((UDS_VM_Common_Money *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_MoneyData__6B_;
  (this->MoneyData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->MoneyData).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// ~UDS_VM_MoneyData @ 14b6a6f70

void __thiscall UDS_VM_MoneyData::~UDS_VM_MoneyData(UDS_VM_MoneyData *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_MoneyData__6B_;
  UDS_VM_Common_Money::~UDS_VM_Common_Money((UDS_VM_Common_Money *)this);
  return;
}

// GetPrivateStaticClass @ 14b6a9d40

UClass * __cdecl UDS_VM_MoneyData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_MoneyData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_MoneyData",
               &Z_Registration_Info_UClass_UDS_VM_MoneyData.InnerSingleton,
               StaticRegisterNativesUDS_VM_MoneyData,0x148,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_MoneyData>,
               InternalVTableHelperCtorCaller<UDS_VM_MoneyData>,local_res8,
               UDS_VM_Common_Money::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_MoneyData.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_MoneyData @ 14b6aabf0

void __cdecl UDS_VM_MoneyData::StaticRegisterNativesUDS_VM_MoneyData(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_MoneyData_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnUpdateMoneyData @ 14b6ac1d0

void __cdecl UDS_VM_MoneyData::execOnUpdateMoneyData(UObject *param_1,FFrame *param_2,void *param_3)

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
  OnUpdateMoneyData((UDS_VM_MoneyData *)param_1,local_res10);
  return;
}

// BindModel @ 14be11ca0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UDS_VM_MoneyData::BindModel(UDS_VM_MoneyData *this)

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
  UDS_VM_MoneyData *local_res20;
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
  bVar2 = FWeakObjectPtr::IsValid(&(this->MoneyData).WeakPtr);
  if (!bVar2) {
    return;
  }
  pUVar3 = FWeakObjectPtr::Get(&(this->MoneyData).WeakPtr);
  pcVar4 = strstr("&UDS_VM_MoneyData::OnUpdateMoneyData","::");
  if (pcVar4 == (char *)0x0) {
LAB_14be11d5b:
    pcVar6 = &DAT_00000002;
LAB_14be11d60:
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
    if (pcVar6 == (char *)0x0) goto LAB_14be11d5b;
    pcVar6 = pcVar6 + 2;
    if (*pcVar6 == '0') goto LAB_14be11d60;
  }
  ::FName::FName(&local_res18,pcVar6);
  local_b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_b0.ObjectIndex = 0;
  local_b0.ObjectSerialNumber = 0;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  local_res10 = local_res18;
  local_res20 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_VM_MoneyData *)0x0)) {
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
    if (pUVar5 != (UFunction *)0x0) goto LAB_14be11e49;
  }
  local_a0 = &local_res10;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UDS_DataBase_*>::
  __Internal_BindDynamic<UDS_VM_MoneyData>'::__l2::<lambda_1>::operator()(&local_a0);
LAB_14be11e49:
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

// InitUI @ 14be24790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_MoneyData::InitUI(UDS_VM_MoneyData *this)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  FDS_MoneyBaseTableRow *this_00;
  UDS_MoneyData *this_01;
  undefined1 auStackY_1d8 [32];
  long64 local_1a8;
  FDS_Text local_1a0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  bVar2 = FWeakObjectPtr::IsValid(&(this->MoneyData).WeakPtr);
  if (bVar2) {
    pUVar4 = FWeakObjectPtr::Get(&(this->MoneyData).WeakPtr);
    this_00 = FDS_MoneyBaseTableRow::GetRef((ulonglong)(byte)pUVar4[2].field_0x8,true);
    bVar2 = FDS_MoneyBaseTableRow::IsValid(this_00);
    if (bVar2) {
      (**(code **)(this->_padding_ + 0x340))(this,&this_00->ID_MoneyIcon);
      local_1a0.StringTableType = None;
      local_1a0.DateTime.Ticks = 0;
      local_1a0.TimeSpan.Ticks = 0;
      pcVar1 = *(code **)(this->_padding_ + 0x348);
      local_1a0.StringTableID = 0;
      local_1a0.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_1a0.StringEnumTableNameID.Number = 0;
      local_1a0.TimeExpressionType = None;
      local_1a0.IsExpression = false;
      local_1a0.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1a0.UniqueString.Data.ArrayNum = 0;
      local_1a0.UniqueString.Data.ArrayMax = 0;
      local_1a0.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1a0.FormatArgs.ArrayNum = 0;
      local_1a0.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringID(&local_1a0,&this_00->ID_MoneyName);
      (*pcVar1)(this,&local_1a0);
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_1a0.FormatArgs.AllocatorInstance.Data,
                 local_1a0.FormatArgs.ArrayNum);
      if ((FDS_TextFormatArg *)local_1a0.FormatArgs.AllocatorInstance.Data !=
          (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_1a0.FormatArgs.AllocatorInstance.Data);
      }
      if (local_1a0.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a0.UniqueString.Data.AllocatorInstance.Data);
      }
      pcVar1 = *(code **)(this->_padding_ + 0x350);
      this_01 = (UDS_MoneyData *)FWeakObjectPtr::Get(&(this->MoneyData).WeakPtr);
      local_1a8 = UDS_MoneyData::GetTotalQuantity(this_01);
      (*pcVar1)(this,&local_1a8);
    }
    else {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_VM_MoneyData::InitUI",0x18,Yes);
        UDS_LogManager::PrintLog(pUVar3,1,Warning,local_148.Ptr,0x5f,L"moneyTableRow is nullptr.");
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
    }
  }
  else {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_MoneyData::InitUI",0x18,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_148.Ptr,0x58,L"MoneyData is nullptr.");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  return;
}

// OnCloseInit @ 14be2d1a0

void __thiscall UDS_VM_MoneyData::OnCloseInit(UDS_VM_MoneyData *this)

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

// OnSetViewModel @ 14be39f10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_MoneyData::OnSetViewModel(UDS_VM_MoneyData *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  FDS_ViewModelContext *pFVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UDS_MoneyDataSet *this_00;
  TWeakObjectPtr<UDS_MoneyData,FWeakObjectPtr> TVar4;
  undefined1 auStackY_1b8 [32];
  FWeakObjectPtr local_188;
  TSharedPtr<FDS_ViewModelContext_MoneyData,1> local_180;
  TSharedPtr<FDS_ViewModelContext,1> local_170;
  TSharedPtr<FDS_ViewModelContext,1> local_160;
  undefined1 local_150 [8];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  local_170.Object = param_1->Object;
  local_170.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_170.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_170.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_170.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_VM_ModelBase::OnSetViewModel((UDS_VM_ModelBase *)this,&local_170);
  pFVar1 = param_1->Object;
  if (pFVar1 == (FDS_ViewModelContext *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_MoneyData::OnSetViewModel",0x20,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_148.Ptr,0x19,L"InViewModelTemplateContext is nullptr.");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,Collapsed);
  }
  else {
    local_160.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_160.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_160.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_160.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_160.Object = pFVar1;
    SafeCast<FDS_ViewModelContext_MoneyData>(&local_180,&local_160);
    if (local_180.Object == (FDS_ViewModelContext_MoneyData *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_VM_MoneyData::OnSetViewModel",0x20,Yes);
        UDS_LogManager::PrintLog(pUVar3,1,Warning,local_148.Ptr,0x21,L"context is nullptr.");
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
    }
    else {
      TDS_DataSetGetter<UDS_MoneyDataSet>::Get((ulong64)&local_188);
      bVar2 = FWeakObjectPtr::IsValid(&local_188);
      if (bVar2) {
        this_00 = (UDS_MoneyDataSet *)FWeakObjectPtr::Get(&local_188);
        TVar4 = UDS_MoneyDataSet::GetMoneyData(this_00,(EDS_MoneyType)local_150);
                    /* WARNING: Load size is inaccurate */
        (this->MoneyData).WeakPtr = *TVar4.WeakPtr;
        bVar2 = TWeakObjectPtr<UDS_MoneyData,FWeakObjectPtr>::UEOpEquals
                          (&this->MoneyData,(void *)0x0);
        if (bVar2) {
          UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,Collapsed);
        }
        else {
          (**(code **)(this->_padding_ + 0x338))(this,&(local_180.Object)->MoneyType);
          (**(code **)(this->_padding_ + 0x368))(this,&FLinearColor::White);
          UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,SelfHitTestInvisible);
          InitUI(this);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_180.SharedReferenceCount.ReferenceController);
        goto LAB_14be3a159;
      }
    }
    UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,Collapsed);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_180.SharedReferenceCount.ReferenceController);
  }
LAB_14be3a159:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUpdateMoneyData @ 14be45060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_MoneyData::OnUpdateMoneyData(UDS_VM_MoneyData *this,UDS_DataBase *param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UDS_MoneyData *this_00;
  undefined1 auStackY_178 [32];
  long64 local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar2 = FWeakObjectPtr::IsValid(&(this->MoneyData).WeakPtr);
  if (bVar2) {
    pcVar1 = *(code **)(this->_padding_ + 0x350);
    this_00 = (UDS_MoneyData *)FWeakObjectPtr::Get(&(this->MoneyData).WeakPtr);
    local_148[0] = UDS_MoneyData::GetTotalQuantity(this_00);
    (*pcVar1)(this,local_148);
  }
  else {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_MoneyData::OnUpdateMoneyData",0x23,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x6e,L"MoneyData is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

// UnbindModel @ 14be555b0

void __thiscall UDS_VM_MoneyData::UnbindModel(UDS_VM_MoneyData *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  UDS_VM_ModelBase::UnbindModel((UDS_VM_ModelBase *)this);
  bVar1 = FWeakObjectPtr::IsValid(&(this->MoneyData).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->MoneyData).WeakPtr);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar2 + 1),(UObject *)this)
    ;
  }
  return;
}

