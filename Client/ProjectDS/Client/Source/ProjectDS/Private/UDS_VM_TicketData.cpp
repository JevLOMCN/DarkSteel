// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 30

// SetCurrentQuantity_WrapperImpl @ 14b6efe40

void __cdecl UDS_VM_TicketData::SetCurrentQuantity_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::CurrentQuantity.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::CurrentQuantity.FieldName;
  if (*(int *)((longlong)param_1 + 0xa8) != *(int *)param_2) {
    *(int *)((longlong)param_1 + 0xa8) = *(int *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetTotalQuantity_WrapperImpl @ 14b6efe50

void __cdecl UDS_VM_TicketData::SetTotalQuantity_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::TotalQuantity.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::TotalQuantity.FieldName;
  if (*(int *)((longlong)param_1 + 0xac) != *(int *)param_2) {
    *(int *)((longlong)param_1 + 0xac) = *(int *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetCostValue_WrapperImpl @ 14b6efe60

void __cdecl UDS_VM_TicketData::SetCostValue_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::CostValue.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::CostValue.FieldName;
  if (*(int *)((longlong)param_1 + 0xb0) != *(int *)param_2) {
    *(int *)((longlong)param_1 + 0xb0) = *(int *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// GetTicketText_WrapperImpl @ 14b6efe70

void __cdecl UDS_VM_TicketData::GetTicketText_WrapperImpl(void *param_1,void *param_2)

{
  FText *pFVar1;
  undefined1 local_res8 [8];
  FText local_18;
  
  pFVar1 = GetTicketText(param_1);
  local_18.TextData.Reference = (pFVar1->TextData).Reference;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 8))
              (local_18.TextData.Reference,local_res8);
  }
  local_18.Flags = pFVar1->Flags;
  FText::operator=(param_2,&local_18);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// GetCurrnetPerTotalText_WrapperImpl @ 14b6efee0

void __cdecl UDS_VM_TicketData::GetCurrnetPerTotalText_WrapperImpl(void *param_1,void *param_2)

{
  FText *pFVar1;
  undefined1 local_res8 [8];
  FText local_18;
  
  pFVar1 = GetCurrnetPerTotalText(param_1);
  local_18.TextData.Reference = (pFVar1->TextData).Reference;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 8))
              (local_18.TextData.Reference,local_res8);
  }
  local_18.Flags = pFVar1->Flags;
  FText::operator=(param_2,&local_18);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// StaticClass @ 14b6eff50

UClass * __cdecl UDS_VM_TicketData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_TicketData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_TicketData",
               &Z_Registration_Info_UClass_UDS_VM_TicketData.InnerSingleton,
               StaticRegisterNativesUDS_VM_TicketData,0xe0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_TicketData>,
               InternalVTableHelperCtorCaller<UDS_VM_TicketData>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_TicketData.InnerSingleton;
}

// UDS_VM_TicketData @ 14b6f2470

UDS_VM_TicketData * __thiscall
UDS_VM_TicketData::UDS_VM_TicketData(UDS_VM_TicketData *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_TicketData__6B_;
  (this->TicketData).WeakPtr = (FWeakObjectPtr)0x0;
  FText::FText(&this->TicketText);
  FText::FText(&this->CurrnetPerTotalText);
  return this;
}

// UDS_VM_TicketData @ 14b6f24d0

UDS_VM_TicketData * __thiscall
UDS_VM_TicketData::UDS_VM_TicketData(UDS_VM_TicketData *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_TicketData__6B_;
  (this->TicketData).WeakPtr = (FWeakObjectPtr)0x0;
  FText::FText(&this->TicketText);
  FText::FText(&this->CurrnetPerTotalText);
  return this;
}

// ~UDS_VM_TicketData @ 14b6f4270

void __thiscall UDS_VM_TicketData::~UDS_VM_TicketData(UDS_VM_TicketData *this)

{
  ITextData *pIVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_TicketData__6B_;
  pIVar1 = (this->CurrnetPerTotalText).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pIVar1 = (this->TicketText).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6f6c40

IClassDescriptor * __thiscall
UDS_VM_TicketData::GetFieldNotificationDescriptor(UDS_VM_TicketData *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_TicketData::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6f75a0

UClass * __cdecl UDS_VM_TicketData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_TicketData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_TicketData",
               &Z_Registration_Info_UClass_UDS_VM_TicketData.InnerSingleton,
               StaticRegisterNativesUDS_VM_TicketData,0xe0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_TicketData>,
               InternalVTableHelperCtorCaller<UDS_VM_TicketData>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_TicketData.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_TicketData @ 14b6f83f0

void __cdecl UDS_VM_TicketData::StaticRegisterNativesUDS_VM_TicketData(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_TicketData_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execTicketDataDirty @ 14b6f9b90

void __cdecl UDS_VM_TicketData::execTicketDataDirty(UObject *param_1,FFrame *param_2,void *param_3)

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
  TicketDataDirty((UDS_VM_TicketData *)param_1,local_res10);
  return;
}

// BindModel @ 14be13220

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UDS_VM_TicketData::BindModel(UDS_VM_TicketData *this)

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
  UDS_VM_TicketData *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b8;
  FWeakObjectPtr local_b0;
  FName local_a8;
  FName *local_a0;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_98;
  FDestructionSentinel local_88;
  FReadAccessScope local_70;
  FReadAccessScope local_58;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->TicketData).WeakPtr);
  if (!bVar2) {
    return;
  }
  pUVar3 = FWeakObjectPtr::Get(&(this->TicketData).WeakPtr);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar3 + 1),(UObject *)this);
  pUVar3 = FWeakObjectPtr::Get(&(this->TicketData).WeakPtr);
  pcVar4 = strstr("&UDS_VM_TicketData::TicketDataDirty","::");
  if (pcVar4 == (char *)0x0) {
LAB_14be132cd:
    pcVar6 = &DAT_00000002;
LAB_14be132d2:
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
    if (pcVar6 == (char *)0x0) goto LAB_14be132cd;
    pcVar6 = pcVar6 + 2;
    if (*pcVar6 == '0') goto LAB_14be132d2;
  }
  ::FName::FName(&local_res18,pcVar6);
  if ((this == (UDS_VM_TicketData *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x4c8,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_res10 = local_res18;
  local_b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_b0.ObjectIndex = 0;
  local_b0.ObjectSerialNumber = 0;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  if ((this == (UDS_VM_TicketData *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_res20 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_VM_TicketData *)0x0)) {
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
    if (pUVar5 != (UFunction *)0x0) goto LAB_14be13413;
  }
  local_a0 = &local_res10;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UDS_DataBase_*>::
  __Internal_BindDynamic<UDS_VM_TicketData>'::__l2::<lambda_1>::operator()(&local_a0);
LAB_14be13413:
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

// GetChargeCount @ 14be20c00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall UDS_VM_TicketData::GetChargeCount(UDS_VM_TicketData *this)

{
  bool bVar1;
  int iVar2;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  bVar1 = FWeakObjectPtr::IsValid(&(this->TicketData).WeakPtr);
  if (bVar1) {
    pUVar4 = FWeakObjectPtr::Get(&(this->TicketData).WeakPtr);
    iVar2 = *(int *)&pUVar4[2].field_0x10;
  }
  else {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_TicketData::GetChargeCount",0x21,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x5a,L"TicketData is invalid.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    iVar2 = 0;
  }
  return iVar2;
}

// GetCurrentQuantity @ 14be20e40

int __thiscall UDS_VM_TicketData::GetCurrentQuantity(UDS_VM_TicketData *this)

{
  return this->CurrentQuantity;
}

// GetCurrnetPerTotalText @ 14be20e50

FText * __thiscall UDS_VM_TicketData::GetCurrnetPerTotalText(UDS_VM_TicketData *this)

{
  return &this->CurrnetPerTotalText;
}

// GetTicketID @ 14be231f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall UDS_VM_TicketData::GetTicketID(UDS_VM_TicketData *this)

{
  bool bVar1;
  int iVar2;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  bVar1 = FWeakObjectPtr::IsValid(&(this->TicketData).WeakPtr);
  if (bVar1) {
    pUVar4 = FWeakObjectPtr::Get(&(this->TicketData).WeakPtr);
    iVar2 = *(int *)&pUVar4[2].field_0x8;
  }
  else {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_TicketData::GetTicketID",0x1e,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x40,L"TicketData is invalid.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    iVar2 = 0;
  }
  return iVar2;
}

// GetTicketText @ 14be232d0

FText * __thiscall UDS_VM_TicketData::GetTicketText(UDS_VM_TicketData *this)

{
  return &this->TicketText;
}

// OnSetViewModel @ 14be412a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_TicketData::OnSetViewModel
          (UDS_VM_TicketData *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_198 [32];
  uint uVar4;
  wchar_t *pwVar5;
  FWeakObjectPtr local_168;
  TSharedPtr<FDS_ViewModelContext_Ticket,1> local_160;
  TSharedPtr<FDS_ViewModelContext,1> local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_150.Object = param_1->Object;
  local_150.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_150.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_150.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_150.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_Ticket>(&local_160,&local_150);
  if (local_160.Object == (FDS_ViewModelContext_Ticket *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) goto LAB_14be4140e;
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_TicketData::OnSetViewModel",0x21,Yes);
    pwVar5 = L"ticketContext is nullptr.";
    uVar4 = 0x19;
  }
  else {
    local_168 = ((local_160.Object)->TicketData).WeakPtr;
    bVar2 = TWeakObjectPtr<UDS_TicketData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_TicketData,FWeakObjectPtr> *)&local_168,(void *)0x0);
    if (!bVar2) {
      UpdateTicketData(this,(TWeakObjectPtr<UDS_TicketData,FWeakObjectPtr>)local_168);
      goto LAB_14be4140e;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) goto LAB_14be4140e;
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_TicketData::OnSetViewModel",0x21,Yes);
    pwVar5 = L"ticketData is nullptr.";
    uVar4 = 0x20;
  }
  UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,uVar4,pwVar5);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
LAB_14be4140e:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_160.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetCostValue @ 14be4a4f0

void __thiscall UDS_VM_TicketData::SetCostValue(UDS_VM_TicketData *this,int *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::CostValue.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::CostValue.FieldName;
  if (this->CostValue != *param_1) {
    this->CostValue = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetCurrentPerTotalProgress @ 14be4a620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_TicketData::SetCurrentPerTotalProgress(UDS_VM_TicketData *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
  UDS_TicketData *pUVar6;
  float fVar7;
  undefined1 auStackY_188 [32];
  FName local_158;
  int local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  bVar2 = FWeakObjectPtr::IsValid(&(this->TicketData).WeakPtr);
  if (bVar2) {
    pUVar5 = FWeakObjectPtr::Get(&(this->TicketData).WeakPtr);
    iVar1 = *(int *)&pUVar5[2].field_0xc;
    pUVar6 = (UDS_TicketData *)FWeakObjectPtr::Get(&(this->TicketData).WeakPtr);
    iVar3 = UDS_TicketData::GetPlayerMax(pUVar6);
    if ((float)iVar1 <= (float)iVar3) {
      pUVar6 = (UDS_TicketData *)FWeakObjectPtr::Get(&(this->TicketData).WeakPtr);
      iVar3 = UDS_TicketData::GetPlayerMax(pUVar6);
    }
    else {
      pUVar6 = (UDS_TicketData *)FWeakObjectPtr::Get(&(this->TicketData).WeakPtr);
      iVar3 = UDS_TicketData::GetSystemMax(pUVar6);
    }
    local_150 = FFieldNotificationClassDescriptor::CurrentPerTotalProgress.BitNumber;
    local_158 = FFieldNotificationClassDescriptor::CurrentPerTotalProgress.FieldName;
    if ((float)iVar3 == 0.0) {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_VM_TicketData::SetCurrentPerTotalProgress",0x2d,Yes);
        UDS_LogManager::PrintLog(pUVar4,1,Warning,local_148.Ptr,0x7f,L"maxQuantity is 0.");
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
    }
    else {
      fVar7 = (float)iVar1 / (float)iVar3;
      if (fVar7 != this->CurrentPerTotalProgress) {
        this->CurrentPerTotalProgress = fVar7;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_158);
      }
    }
  }
  else {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_TicketData::SetCurrentPerTotalProgress",0x2d,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_148.Ptr,0x76,L"TicketData is invalid.");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  return;
}

// SetCurrentQuantity @ 14be4a840

void __thiscall UDS_VM_TicketData::SetCurrentQuantity(UDS_VM_TicketData *this,int *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::CurrentQuantity.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::CurrentQuantity.FieldName;
  if (this->CurrentQuantity != *param_1) {
    this->CurrentQuantity = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetCurrnetPerTotalText @ 14be4a890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_TicketData::SetCurrnetPerTotalText(UDS_VM_TicketData *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
  UDS_TicketData *pUVar6;
  FText *pFVar7;
  undefined1 auStackY_198 [32];
  FFieldId local_168;
  FString local_158;
  FText local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  bVar2 = FWeakObjectPtr::IsValid(&(this->TicketData).WeakPtr);
  if (bVar2) {
    pUVar5 = FWeakObjectPtr::Get(&(this->TicketData).WeakPtr);
    iVar1 = *(int *)&pUVar5[2].field_0xc;
    pUVar6 = (UDS_TicketData *)FWeakObjectPtr::Get(&(this->TicketData).WeakPtr);
    iVar3 = UDS_TicketData::GetPlayerMax(pUVar6);
    if (iVar3 < iVar1) {
      pUVar6 = (UDS_TicketData *)FWeakObjectPtr::Get(&(this->TicketData).WeakPtr);
      UDS_TicketData::GetSystemMax(pUVar6);
    }
    else {
      pUVar6 = (UDS_TicketData *)FWeakObjectPtr::Get(&(this->TicketData).WeakPtr);
      UDS_TicketData::GetPlayerMax(pUVar6);
    }
    iVar1 = FFieldNotificationClassDescriptor::CurrnetPerTotalText.BitNumber;
    local_168.FieldName = FFieldNotificationClassDescriptor::CurrnetPerTotalText.FieldName;
    ::FString::PrintfImpl(&local_158,L"%d/%d");
    pFVar7 = FText::FromString(&local_148,&local_158);
    local_168.BitNumber = iVar1;
    UMVVMViewModelBase::SetPropertyValue
              ((UMVVMViewModelBase *)this,&this->CurrnetPerTotalText,pFVar7,&local_168);
    if (local_148.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_148.TextData.Reference + 0x10))();
    }
  }
  else {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_TicketData::SetCurrnetPerTotalText",0x29,Yes);
    UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0x8a,L"TicketData is invalid.");
    local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_138._padding_;
  }
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  return;
}

// SetTicketData @ 14be52140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_TicketData::SetTicketData(UDS_VM_TicketData *this)

{
  TWeakObjectPtr<UDS_TicketData,FWeakObjectPtr> *this_00;
  FName FVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  UDS_LogManager *pUVar6;
  UObject *pUVar7;
  UDS_TicketData *pUVar8;
  FString *pFVar9;
  FText *pFVar10;
  TRefCountPtr<ITextData> TVar11;
  float fVar12;
  undefined1 auStackY_1c8 [32];
  uint uVar13;
  wchar_t *pwVar14;
  FFieldId local_198;
  FText local_188;
  FText local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  this_00 = &this->TicketData;
  bVar3 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (!bVar3) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar6 = UDS_LogManager::GetInst();
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"UDS_VM_TicketData::SetTicketData",0x20,Yes);
    UDS_LogManager::PrintLog(pUVar6,1,Warning,local_168.Ptr,0x65,L"TicketData is invalid.");
    if ((void *)local_168._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_168._padding_);
    return;
  }
  pUVar7 = FWeakObjectPtr::Get(&this_00->WeakPtr);
  iVar4 = FFieldNotificationClassDescriptor::CurrentQuantity.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::CurrentQuantity.FieldName;
  if (this->CurrentQuantity != *(int *)&pUVar7[2].field_0xc) {
    this->CurrentQuantity = *(int *)&pUVar7[2].field_0xc;
    local_198.BitNumber = iVar4;
    local_198.FieldName = FVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_198);
  }
  pUVar8 = (UDS_TicketData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
  iVar4 = UDS_TicketData::GetPlayerMax(pUVar8);
  if (iVar4 < this->CurrentQuantity) {
    pUVar8 = (UDS_TicketData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
    iVar4 = UDS_TicketData::GetSystemMax(pUVar8);
  }
  else {
    pUVar8 = (UDS_TicketData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
    iVar4 = UDS_TicketData::GetPlayerMax(pUVar8);
  }
  iVar5 = FFieldNotificationClassDescriptor::TotalQuantity.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::TotalQuantity.FieldName;
  if (this->TotalQuantity != iVar4) {
    this->TotalQuantity = iVar4;
    local_198.BitNumber = iVar5;
    local_198.FieldName = FVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_198);
  }
  bVar3 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  iVar4 = FFieldNotificationClassDescriptor::TicketText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::TicketText.FieldName;
  if (bVar3) {
    pUVar8 = (UDS_TicketData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
    pFVar9 = UDS_TicketData::GetTicketName(pUVar8,(FString *)&local_178);
    pFVar10 = FText::FromString(&local_188,pFVar9);
    local_198.FieldName = FVar1;
    local_198.BitNumber = iVar4;
    UMVVMViewModelBase::SetPropertyValue
              ((UMVVMViewModelBase *)this,&this->TicketText,pFVar10,&local_198);
    TVar11.Reference = local_178.TextData.Reference;
    if (local_188.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_188.TextData.Reference + 0x10))();
      TVar11.Reference = local_178.TextData.Reference;
    }
LAB_14be52399:
    if (TVar11.Reference != (ITextData *)0x0) {
      FMemory::Free(TVar11.Reference);
    }
  }
  else {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_VM_TicketData::SetTicketText",0x20,Yes);
      UDS_LogManager::PrintLog(pUVar6,1,Warning,local_168.Ptr,0xa8,L"TicketData is invalid.");
      TVar11.Reference = (ITextData *)local_168._padding_;
      goto LAB_14be52399;
    }
  }
  bVar3 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar3) {
    pUVar7 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    iVar4 = *(int *)&pUVar7[2].field_0xc;
    pUVar8 = (UDS_TicketData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
    iVar5 = UDS_TicketData::GetPlayerMax(pUVar8);
    if ((float)iVar4 <= (float)iVar5) {
      pUVar8 = (UDS_TicketData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      iVar5 = UDS_TicketData::GetPlayerMax(pUVar8);
    }
    else {
      pUVar8 = (UDS_TicketData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      iVar5 = UDS_TicketData::GetSystemMax(pUVar8);
    }
    iVar2 = FFieldNotificationClassDescriptor::CurrentPerTotalProgress.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::CurrentPerTotalProgress.FieldName;
    if ((float)iVar5 != 0.0) {
      fVar12 = (float)iVar4 / (float)iVar5;
      if (fVar12 != this->CurrentPerTotalProgress) {
        this->CurrentPerTotalProgress = fVar12;
        local_198.BitNumber = iVar2;
        local_198.FieldName = FVar1;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_198);
      }
      goto LAB_14be52504;
    }
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 == (UDS_LogManager *)0x0) goto LAB_14be52504;
    pUVar6 = UDS_LogManager::GetInst();
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"UDS_VM_TicketData::SetCurrentPerTotalProgress",0x2d,Yes);
    pwVar14 = L"maxQuantity is 0.";
    uVar13 = 0x7f;
  }
  else {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 == (UDS_LogManager *)0x0) goto LAB_14be52504;
    pUVar6 = UDS_LogManager::GetInst();
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"UDS_VM_TicketData::SetCurrentPerTotalProgress",0x2d,Yes);
    pwVar14 = L"TicketData is invalid.";
    uVar13 = 0x76;
  }
  UDS_LogManager::PrintLog(pUVar6,1,Warning,local_168.Ptr,uVar13,pwVar14);
  if ((ITextData *)local_168._padding_ != (ITextData *)0x0) {
    FMemory::Free((void *)local_168._padding_);
  }
LAB_14be52504:
  bVar3 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar3) {
    pUVar7 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    iVar4 = *(int *)&pUVar7[2].field_0xc;
    pUVar8 = (UDS_TicketData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
    iVar5 = UDS_TicketData::GetPlayerMax(pUVar8);
    if (iVar5 < iVar4) {
      pUVar8 = (UDS_TicketData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      UDS_TicketData::GetSystemMax(pUVar8);
    }
    else {
      pUVar8 = (UDS_TicketData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      UDS_TicketData::GetPlayerMax(pUVar8);
    }
    iVar4 = FFieldNotificationClassDescriptor::CurrnetPerTotalText.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::CurrnetPerTotalText.FieldName;
    ::FString::PrintfImpl((FString *)&local_188,L"%d/%d");
    pFVar10 = FText::FromString(&local_178,(FString *)&local_188);
    local_198.FieldName = FVar1;
    local_198.BitNumber = iVar4;
    UMVVMViewModelBase::SetPropertyValue
              ((UMVVMViewModelBase *)this,&this->CurrnetPerTotalText,pFVar10,&local_198);
    if (local_178.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_178.TextData.Reference + 0x10))();
    }
  }
  else {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar6 = UDS_LogManager::GetInst();
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"UDS_VM_TicketData::SetCurrnetPerTotalText",0x29,Yes);
    UDS_LogManager::PrintLog(pUVar6,1,Warning,local_168.Ptr,0x8a,L"TicketData is invalid.");
    local_188.TextData.Reference = (ITextData *)local_168._padding_;
  }
  if (local_188.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_188.TextData.Reference);
  }
  return;
}

// SetTicketText @ 14be52670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_TicketData::SetTicketText(UDS_VM_TicketData *this)

{
  int iVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UDS_TicketData *this_00;
  FString *pFVar4;
  FText *pFVar5;
  undefined1 auStackY_198 [32];
  FFieldId local_168;
  FText local_158;
  FString local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  bVar2 = FWeakObjectPtr::IsValid(&(this->TicketData).WeakPtr);
  iVar1 = FFieldNotificationClassDescriptor::TicketText.BitNumber;
  if (bVar2) {
    local_168.FieldName = FFieldNotificationClassDescriptor::TicketText.FieldName;
    this_00 = (UDS_TicketData *)FWeakObjectPtr::Get(&(this->TicketData).WeakPtr);
    pFVar4 = UDS_TicketData::GetTicketName(this_00,&local_148);
    pFVar5 = FText::FromString(&local_158,pFVar4);
    local_168.BitNumber = iVar1;
    UMVVMViewModelBase::SetPropertyValue
              ((UMVVMViewModelBase *)this,&this->TicketText,pFVar5,&local_168);
    if (local_158.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_158.TextData.Reference + 0x10))();
    }
  }
  else {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_TicketData::SetTicketText",0x20,Yes);
    UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0xa8,L"TicketData is invalid.");
    local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_138._padding_;
  }
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  return;
}

// SetTotalQuantity @ 14be527d0

void __thiscall UDS_VM_TicketData::SetTotalQuantity(UDS_VM_TicketData *this,int *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::TotalQuantity.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::TotalQuantity.FieldName;
  if (this->TotalQuantity != *param_1) {
    this->TotalQuantity = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// TicketDataDirty @ 14be54b50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_TicketData::TicketDataDirty(UDS_VM_TicketData *this,UDS_DataBase *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_178 [32];
  FWeakObjectPtr local_148;
  UDS_DataBase *local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (param_1 != (UDS_DataBase *)0x0) {
    pUVar3 = Z_Construct_UClass_UDS_TicketData_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) goto LAB_14be54b9f;
  }
  param_1 = (UDS_DataBase *)0x0;
LAB_14be54b9f:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_DataBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_148.ObjectIndex = 0;
  local_148.ObjectSerialNumber = 0;
  local_140 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_DataBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_148,(FObjectPtr)&local_140);
  bVar2 = FWeakObjectPtr::IsValid(&local_148);
  if (bVar2) {
    UpdateTicketData(this,(TWeakObjectPtr<UDS_TicketData,FWeakObjectPtr>)local_148);
  }
  else {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_TicketData::TicketDataDirty",0x22,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0xc1,L"ticketData is invalid.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

// UnbindModel @ 14be55d70

void __thiscall UDS_VM_TicketData::UnbindModel(UDS_VM_TicketData *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->TicketData).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->TicketData).WeakPtr);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar2 + 1),(UObject *)this)
    ;
  }
  return;
}

// UpdateTicketData @ 14be59d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_TicketData::UpdateTicketData
          (UDS_VM_TicketData *this,TWeakObjectPtr<UDS_TicketData,FWeakObjectPtr> param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  FWeakObjectPtr local_res10 [3];
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_res10[0] = param_1.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar1) {
    (this->TicketData).WeakPtr = local_res10[0];
    SetTicketData(this);
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_TicketData::UpdateTicketData",0x23,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0xb3,L"InTicketData is invalid.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

