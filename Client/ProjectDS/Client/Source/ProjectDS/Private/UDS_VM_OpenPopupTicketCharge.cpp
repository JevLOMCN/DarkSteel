// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 23

// StaticClass @ 14b6acbd0

UClass * __cdecl UDS_VM_OpenPopupTicketCharge::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_OpenPopupTicketCharge.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_OpenPopupTicketCharge",
               &Z_Registration_Info_UClass_UDS_VM_OpenPopupTicketCharge.InnerSingleton,
               StaticRegisterNativesUDS_VM_OpenPopupTicketCharge,0xa8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_OpenPopupTicketCharge>,
               InternalVTableHelperCtorCaller<UDS_VM_OpenPopupTicketCharge>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_OpenPopupTicketCharge.InnerSingleton;
}

// UDS_VM_OpenPopupTicketCharge @ 14b6b2ce0

UDS_VM_OpenPopupTicketCharge * __thiscall
UDS_VM_OpenPopupTicketCharge::UDS_VM_OpenPopupTicketCharge
          (UDS_VM_OpenPopupTicketCharge *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_OpenPopupTicketCharge__6B_;
  (this->TicketData).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UDS_VM_OpenPopupTicketCharge @ 14b6b2d30

UDS_VM_OpenPopupTicketCharge * __thiscall
UDS_VM_OpenPopupTicketCharge::UDS_VM_OpenPopupTicketCharge
          (UDS_VM_OpenPopupTicketCharge *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_OpenPopupTicketCharge__6B_;
  (this->TicketData).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UDS_VM_OpenPopupTicketCharge @ 14b6b43b0

void __thiscall
UDS_VM_OpenPopupTicketCharge::~UDS_VM_OpenPopupTicketCharge(UDS_VM_OpenPopupTicketCharge *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_OpenPopupTicketCharge__6B_;
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b6b78e0

UClass * __cdecl UDS_VM_OpenPopupTicketCharge::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_OpenPopupTicketCharge.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_OpenPopupTicketCharge",
               &Z_Registration_Info_UClass_UDS_VM_OpenPopupTicketCharge.InnerSingleton,
               StaticRegisterNativesUDS_VM_OpenPopupTicketCharge,0xa8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_OpenPopupTicketCharge>,
               InternalVTableHelperCtorCaller<UDS_VM_OpenPopupTicketCharge>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_OpenPopupTicketCharge.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_OpenPopupTicketCharge @ 14b6b7e60

void __cdecl UDS_VM_OpenPopupTicketCharge::StaticRegisterNativesUDS_VM_OpenPopupTicketCharge(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_OpenPopupTicketCharge_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execTicketDataDirty @ 14b6b9930

void __cdecl
UDS_VM_OpenPopupTicketCharge::execTicketDataDirty(UObject *param_1,FFrame *param_2,void *param_3)

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
  TicketDataDirty((UDS_VM_OpenPopupTicketCharge *)param_1,local_res10);
  return;
}

// BindModel @ 14be12920

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UDS_VM_OpenPopupTicketCharge::BindModel(UDS_VM_OpenPopupTicketCharge *this)

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
  UDS_VM_OpenPopupTicketCharge *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b8;
  FWeakObjectPtr local_b0;
  FName local_a8;
  FName *local_a0;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_98;
  FDestructionSentinel local_88;
  FReadAccessScope local_70;
  FReadAccessScope local_58;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  bVar2 = FWeakObjectPtr::IsValid(&(this->TicketData).WeakPtr);
  if (!bVar2) {
    return;
  }
  pUVar3 = FWeakObjectPtr::Get(&(this->TicketData).WeakPtr);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar3 + 1),(UObject *)this);
  pUVar3 = FWeakObjectPtr::Get(&(this->TicketData).WeakPtr);
  pcVar4 = strstr("&UDS_VM_OpenPopupTicketCharge::TicketDataDirty","::");
  if (pcVar4 == (char *)0x0) {
LAB_14be129db:
    pcVar6 = &DAT_00000002;
LAB_14be129e0:
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
    if (pcVar6 == (char *)0x0) goto LAB_14be129db;
    pcVar6 = pcVar6 + 2;
    if (*pcVar6 == '0') goto LAB_14be129e0;
  }
  ::FName::FName(&local_res18,pcVar6);
  if ((this == (UDS_VM_OpenPopupTicketCharge *)0x0) &&
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
  if ((this == (UDS_VM_OpenPopupTicketCharge *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_res20 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this != (UDS_VM_OpenPopupTicketCharge *)0x0)) {
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
    if (pUVar5 != (UFunction *)0x0) goto LAB_14be12b21;
  }
  local_a0 = &local_res10;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UDS_DataBase_*>::
  __Internal_BindDynamic<UDS_VM_OpenPopupTicketCharge>'::__l2::<lambda_1>::operator()(&local_a0);
LAB_14be12b21:
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

// ChargeCountZeroOpenCommonPopup @ 14be141f0

void __thiscall
UDS_VM_OpenPopupTicketCharge::ChargeCountZeroOpenCommonPopup(UDS_VM_OpenPopupTicketCharge *this)

{
  code *pcVar1;
  bool bVar2;
  UDS_M_CommonPopup *pUVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  FWeakObjectPtr local_res10;
  UDS_VM_OpenPopupTicketCharge *local_res18 [2];
  uint uStack_10c;
  undefined1 local_108 [8];
  FDelegateAllocation local_100;
  FDS_Text local_f0;
  FDS_Text local_a0;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  GetCommonPopupModel(this);
  bVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar2) {
    pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res10);
    local_f0.StringTableType = None;
    local_f0.StringTableID = 0;
    local_f0.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_f0.StringEnumTableNameID.Number = 0;
    local_f0.TimeExpressionType = None;
    local_f0.IsExpression = false;
    local_f0.DateTime.Ticks = 0;
    local_f0.TimeSpan.Ticks = 0;
    local_f0.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f0.UniqueString.Data.ArrayNum = 0;
    local_f0.UniqueString.Data.ArrayMax = 0;
    local_f0.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f0.FormatArgs.ArrayNum = 0;
    local_f0.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromStringTable(&local_f0,StringUi,4);
    UDS_M_CommonPopup::SetTitle(pUVar3,&local_f0);
    pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res10);
    local_a0.StringTableType = None;
    local_a0.StringTableID = 0;
    local_a0.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_a0.StringEnumTableNameID.Number = 0;
    local_a0.TimeExpressionType = None;
    local_a0.DateTime.Ticks = 0;
    local_a0.TimeSpan.Ticks = 0;
    local_a0.IsExpression = false;
    local_a0.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a0.UniqueString.Data.ArrayNum = 0;
    local_a0.UniqueString.Data.ArrayMax = 0;
    local_a0.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a0.FormatArgs.ArrayNum = 0;
    local_a0.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromStringTable(&local_a0,StringUi,0x4e4d);
    UDS_M_CommonPopup::SetMainContent(pUVar3,&local_a0);
    pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res10);
    UDS_M_CommonPopup::SetButton(pUVar3,ButtonCancel,StringUi,0x69,false);
    pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res10);
    local_108 = (undefined1  [8])0x0;
    local_100.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_100.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_108,
               (FWriteAccessScope *)&local_50);
    local_38 = &local_100;
    puVar4 = UE::Core::Private::DelegateAllocate(0x30,&local_100);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_OpenPopupTicketCharge____A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_VM_OpenPopupTicketCharge *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar4[3] = 0;
      local_res18[0] = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_VM_OpenPopupTicketCharge *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)local_res18);
      puVar4[4] = OnClickClose;
      puVar4[5] = (ulonglong)uStack_10c << 0x20;
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    UDS_M_CommonPopup::SetDelegate
              (pUVar3,ButtonCancel,
               (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                *)local_108);
    pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res10);
    UDS_M_CommonPopup::OpenCommonPopup(pUVar3);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2031255356159557484>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_OpenPopupTicketCharge.cpp"
                       ,0x94,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// CheckMoneyData @ 14be14620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_VM_OpenPopupTicketCharge::CheckMoneyData
          (UDS_VM_OpenPopupTicketCharge *this,long64 param_1,FDS_PlayerTicketChargeTableRow *param_2
          )

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  FDS_MoneyExchangeTableRow *pFVar3;
  UDS_MoneyData *this_00;
  long64 lVar4;
  int iVar5;
  float fVar6;
  undefined1 auStackY_178 [32];
  uint uVar7;
  wchar_t *pwVar8;
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (param_2 == (FDS_PlayerTicketChargeTableRow *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return true;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_OpenPopupTicketCharge::CheckMoneyData",0x2c,Yes);
    pwVar8 = L"InTicketChargeTableRow is nullptr.";
    uVar7 = 0xf3;
  }
  else {
    pFVar3 = FDS_MoneyExchangeTableRow::GetRef((longlong)param_2->ID_MoneyExchange,true);
    if (pFVar3->ExchangeRate == 0) {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 == (UDS_LogManager *)0x0) {
        return true;
      }
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_OpenPopupTicketCharge::CheckMoneyData",0x2c,Yes);
      pwVar8 = L"moneyExchangeTableRow.ExchangeRate is 0.";
      uVar7 = 0xfd;
    }
    else {
      fVar6 = (float)((int)param_2->CostValue - (int)param_1);
      iVar5 = -((int)ROUND(__real_bf000000 -
                           (__real_49742400 / (float)pFVar3->ExchangeRate) * (fVar6 + fVar6)) >> 1);
      UDS_MoneyData::GetData
                ((ulong64)local_148,UDS_PlayerData::MainPlayerEntityID,(bool)pFVar3->ExchangeMoney);
      bVar1 = TWeakObjectPtr<UDS_MoneyData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_MoneyData,FWeakObjectPtr> *)local_148,(void *)0x0);
      if (!bVar1) {
        if (iVar5 < pFVar3->StandardMoneyMin) {
          return true;
        }
        this_00 = (UDS_MoneyData *)FWeakObjectPtr::Get(local_148);
        lVar4 = UDS_MoneyData::GetTotalQuantity(this_00);
        if (lVar4 < iVar5) {
          return true;
        }
        return false;
      }
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 == (UDS_LogManager *)0x0) {
        return true;
      }
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_OpenPopupTicketCharge::CheckMoneyData",0x2c,Yes);
      pwVar8 = L"insteadMoneyData is nullptr.";
      uVar7 = 0x107;
    }
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar7,pwVar8);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return true;
}

// EnoughConditionOpenCommonPopup @ 14be1acb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_OpenPopupTicketCharge::EnoughConditionOpenCommonPopup
          (UDS_VM_OpenPopupTicketCharge *this,int param_1,int param_2,
          FDS_PlayerTicketChargeTableRow *param_3)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UDS_M_CommonPopup *pUVar4;
  FDS_Text *pFVar5;
  FDS_MoneyBaseTableRow *pFVar6;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  *pTVar7;
  undefined1 auStackY_418 [32];
  FWeakObjectPtr local_3e8;
  int local_3e0 [2];
  int local_3d8 [4];
  code *local_3c8;
  undefined8 uStack_3c0;
  FDS_Text local_3b8;
  FDS_Text local_368;
  code *local_318;
  longlong lStack_310;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_308;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_2f0;
  FDS_Text local_2d8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_418;
  local_3e0[0] = param_2;
  if (param_3 == (FDS_PlayerTicketChargeTableRow *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_288._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_288,"UDS_VM_OpenPopupTicketCharge::EnoughConditionOpenCommonPopup",0x3c,Yes)
      ;
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_288.Ptr,0x75,L"ticketChargeTableRows is empty.");
      if ((void *)local_288._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_288._padding_);
      }
    }
  }
  else {
    GetCommonPopupModel(this);
    bVar2 = FWeakObjectPtr::IsValid(&local_3e8);
    if (bVar2) {
      pUVar4 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_3e8);
      local_3b8.StringTableType = None;
      local_3b8.StringTableID = 0;
      local_3b8.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_3b8.StringEnumTableNameID.Number = 0;
      local_3b8.TimeExpressionType = None;
      local_3b8.IsExpression = false;
      local_3b8.DateTime.Ticks = 0;
      local_3b8.TimeSpan.Ticks = 0;
      local_3b8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_3b8.UniqueString.Data.ArrayNum = 0;
      local_3b8.UniqueString.Data.ArrayMax = 0;
      local_3b8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_3b8.FormatArgs.ArrayNum = 0;
      local_3b8.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringTable(&local_3b8,StringUi,0x237a);
      UDS_M_CommonPopup::SetTitle(pUVar4,&local_3b8);
      pUVar4 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_3e8);
      local_368.StringTableType = None;
      local_368.StringTableID = 0;
      local_368.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_368.StringEnumTableNameID.Number = 0;
      local_368.TimeExpressionType = None;
      local_368.DateTime.Ticks = 0;
      local_368.TimeSpan.Ticks = 0;
      local_368.IsExpression = false;
      local_368.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_368.UniqueString.Data.ArrayNum = 0;
      local_368.UniqueString.Data.ArrayMax = 0;
      local_368.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_368.FormatArgs.ArrayNum = 0;
      local_368.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringTable(&local_368,StringUi,0x237b);
      UDS_M_CommonPopup::SetMainContent(pUVar4,&local_368);
      pUVar4 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_3e8);
      local_3d8[0] = param_1;
      if (param_1 < 0) {
        local_3d8[0] = 0;
      }
      pFVar5 = FDS_Text::FromStringTableFormat<int,int_&>
                         (&local_2d8,StringUi,0x237c,local_3d8,local_3e0);
      UDS_M_CommonPopup::SetSubContent01(pUVar4,pFVar5);
      pFVar6 = FDS_MoneyBaseTableRow::Get((ulonglong)param_3->ReqMoney,true);
      if (pFVar6 == (FDS_MoneyBaseTableRow *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        if (pUVar3 != (UDS_LogManager *)0x0) {
          pUVar3 = UDS_LogManager::GetInst();
          local_168._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_168,"UDS_VM_OpenPopupTicketCharge::EnoughConditionOpenCommonPopup",0x3c,
                     Yes);
          UDS_LogManager::PrintLog(pUVar3,1,Warning,local_168.Ptr,0x83,L"moneyBaseTable is empty.");
          if ((void *)local_168._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_168._padding_);
          }
        }
      }
      else {
        pUVar4 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_3e8);
        UDS_M_CommonPopup::SetAsset
                  (pUVar4,Asset01,pFVar6->ID_MoneyIcon,(int)param_3->CostValue,0,false);
        pUVar4 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_3e8);
        UDS_M_CommonPopup::SetButton(pUVar4,ButtonCancel,StringUi,0x237d,false);
        pUVar4 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_3e8);
        uStack_3c0._0_4_ = 0;
        local_3c8 = OnClickUseMoney;
        pTVar7 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                 ::CreateUObject<UDS_VM_OpenPopupTicketCharge>
                           (&local_308,this,(pmf_ee5be0e1 *)&local_3c8);
        UDS_M_CommonPopup::SetDelegate(pUVar4,ButtonCancel,pTVar7);
        pUVar4 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_3e8);
        UDS_M_CommonPopup::SetButton(pUVar4,ButtonConfirm,StringUi,0x237e,false);
        pUVar4 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_3e8);
        uStack_3c0 = (ulonglong)uStack_3c0._4_4_ << 0x20;
        local_3c8 = OnClickClose;
        local_318 = OnClickClose;
        lStack_310 = uStack_3c0;
        pTVar7 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                 ::CreateUObject<UDS_VM_OpenPopupTicketCharge>
                           (&local_2f0,this,(pmf_ee5be0e1 *)&local_318);
        UDS_M_CommonPopup::SetDelegate(pUVar4,ButtonConfirm,pTVar7);
        pUVar4 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_3e8);
        UDS_M_CommonPopup::OpenCommonPopup(pUVar4);
      }
    }
    else {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2031255356159557510>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_OpenPopupTicketCharge.cpp"
                         ,0x7a,"false");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  return;
}

// GetCommonPopupModel @ 14be20d10

TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> __thiscall
UDS_VM_OpenPopupTicketCharge::GetCommonPopupModel(UDS_VM_OpenPopupTicketCharge *this)

{
  bool bVar1;
  UDS_CommonPopupManager *pUVar2;
  FWeakObjectPtr in_RDX;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  UDS_GameInstance *local_18 [2];
  
  local_18[0] = UDS_GameInstance::GetInst();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_18[0] != (UDS_GameInstance *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_18[0]);
  }
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_18[0] != (UDS_GameInstance *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_18[0]);
  }
  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)local_18);
  bVar1 = TWeakObjectPtr<UDS_GameInstance,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_GameInstance,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if (!bVar1) {
    pUVar2 = UDS_CommonPopupManager::GetInst();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 != (UDS_CommonPopupManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    local_18[0] = (UDS_GameInstance *)pUVar2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 != (UDS_CommonPopupManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)local_18);
    bVar1 = TWeakObjectPtr<UDS_CommonPopupManager,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_CommonPopupManager,FWeakObjectPtr> *)&local_res18,
                       (void *)0x0);
    if (!bVar1) {
      pUVar2 = (UDS_CommonPopupManager *)FWeakObjectPtr::Get(&local_res18);
      UDS_CommonPopupManager::CreateCommonPopup(pUVar2);
      return (TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>)in_RDX;
    }
  }
  *(undefined8 *)in_RDX = 0;
  local_18[0] = (UDS_GameInstance *)0x0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)local_18);
  return (TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>)in_RDX;
}

// GetPlayerTicketChargeTableRow @ 14be21850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FDS_PlayerTicketChargeTableRow * __thiscall
UDS_VM_OpenPopupTicketCharge::GetPlayerTicketChargeTableRow
          (UDS_VM_OpenPopupTicketCharge *this,int *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UObject *pUVar5;
  FDS_PlayerTicketTableRow *pFVar6;
  TArray<FDS_PlayerTicketChargeTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar7;
  FDS_PlayerTicketChargeTableRow *pFVar8;
  UDS_LogManager *pUVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  ForAnyElementType FVar12;
  FDS_PlayerTicketChargeTableRow *pFVar13;
  FDS_PlayerTicketChargeTableRow *pFVar14;
  int iVar15;
  FDS_PlayerTicketChargeTableRow *pFVar16;
  undefined1 auStackY_448 [32];
  FIdentityFunctor local_3f8 [4];
  int local_3f4;
  ForAnyElementType local_3f0;
  undefined8 local_3e8;
  FDS_PlayerTicketChargeTableRow *local_3e0;
  FDS_PlayerTicketChargeTableRow *local_3d8;
  FWeakObjectPtr *local_3d0;
  int *local_3c8;
  TArray<FDS_PlayerTicketChargeTableRow_const_*,TSizedDefaultAllocator<32>_> local_3c0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_448;
  local_3d0 = &(this->TicketData).WeakPtr;
  local_3c8 = param_1;
  pUVar5 = FWeakObjectPtr::Get(local_3d0);
  pFVar6 = FDS_PlayerTicketTableRow::GetRef((longlong)*(int *)&pUVar5[2].field_0x8,true);
  pTVar7 = FDS_PlayerTicketChargeTableRow::GetAll(&local_3c0);
  pFVar8 = (FDS_PlayerTicketChargeTableRow *)0x0;
  iVar4 = 0;
  pFVar14 = (FDS_PlayerTicketChargeTableRow *)0x0;
  local_3f0.Data = (FScriptContainerElement *)0x0;
  local_3e8 = 0;
  pFVar11 = (pTVar7->AllocatorInstance).Data;
  local_3d8 = (FDS_PlayerTicketChargeTableRow *)0x0;
  pFVar1 = pFVar11 + (longlong)pTVar7->ArrayNum * 8;
  FVar12.Data = (FScriptContainerElement *)pFVar8;
  pFVar13 = pFVar8;
  for (; pFVar11 != pFVar1; pFVar11 = pFVar11 + 8) {
    if ((*(FDS_PlayerTicketChargeTableRow **)&pFVar11->field_0x0)->ChargeGroup ==
        pFVar6->ID_ChargeGroup) {
      iVar4 = (int)pFVar13;
      if ((FVar12.Data <= pFVar11) &&
         (local_3e8._4_4_ = (int)((ulonglong)local_3e8 >> 0x20), lVar10 = (longlong)local_3e8._4_4_,
         pFVar11 < (FScriptContainerElement *)
                   (&((FDS_PlayerTicketChargeTableRow *)FVar12.Data)->_padding_ + lVar10))) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar8 = (FDS_PlayerTicketChargeTableRow *)(*pcVar2)();
          return pFVar8;
        }
        FVar12.Data = local_3f0.Data;
        iVar4 = (int)local_3e8;
      }
      if (iVar4 == local_3e8._4_4_) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_3f0,(int *)((longlong)&local_3e8 + 4));
        FVar12.Data = local_3f0.Data;
      }
      local_3e8 = CONCAT44(local_3e8._4_4_,iVar4 + 1U);
      (&((FDS_PlayerTicketChargeTableRow *)FVar12.Data)->_padding_)[iVar4] =
           (longlong)*(FDS_PlayerTicketChargeTableRow **)&pFVar11->field_0x0;
      pFVar13 = (FDS_PlayerTicketChargeTableRow *)(ulonglong)(iVar4 + 1U);
      FVar12.Data = local_3f0.Data;
    }
    iVar4 = (int)pFVar13;
  }
  local_3f0.Data = (FScriptContainerElement *)0x0;
  local_3e8 = 0;
  local_3d8 = (FDS_PlayerTicketChargeTableRow *)FVar12.Data;
  if (local_3c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3c0.AllocatorInstance.Data);
  }
  AlgoImpl::
  IntroSortInternal<FDS_PlayerTicketChargeTableRow_const_*,int,FIdentityFunctor,TDereferenceWrapper<FDS_PlayerTicketChargeTableRow_const_*,_UDS_VM_OpenPopupTicketCharge::GetSortedTicketChargeTableRows_::__l2::<lambda_2>_>_>
            ((FDS_PlayerTicketChargeTableRow **)FVar12.Data,iVar4,local_3f8[0],
             (<lambda_2> *)local_3f8);
  if (iVar4 < 1) {
    pUVar9 = UDS_LogManager::GetInst();
    if (pUVar9 != (UDS_LogManager *)0x0) {
      pUVar9 = UDS_LogManager::GetInst();
      local_3a8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_3a8,"UDS_VM_OpenPopupTicketCharge::GetPlayerTicketChargeTableRow",0x3b,Yes);
      UDS_LogManager::PrintLog
                (pUVar9,1,Warning,local_3a8.Ptr,0x125,L"ticketChargeTableRows is empty.");
      if ((void *)local_3a8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_3a8._padding_);
      }
    }
  }
  else {
    local_3f4 = 0;
    pFVar13 = pFVar8;
    pFVar16 = (FDS_PlayerTicketChargeTableRow *)FVar12.Data;
    do {
      iVar15 = (int)pFVar13;
      if ((iVar15 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar8 = (FDS_PlayerTicketChargeTableRow *)(*pcVar2)();
        return pFVar8;
      }
      if (*(FDS_PlayerTicketChargeTableRow **)pFVar16 == (FDS_PlayerTicketChargeTableRow *)0x0) {
        pUVar9 = UDS_LogManager::GetInst();
        if (pUVar9 != (UDS_LogManager *)0x0) {
          pUVar9 = UDS_LogManager::GetInst();
          local_288._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_288,"UDS_VM_OpenPopupTicketCharge::GetPlayerTicketChargeTableRow",0x3b,
                     Yes);
          UDS_LogManager::PrintLog
                    (pUVar9,1,Warning,local_288.Ptr,0x130,L"ticketChargeTableRow is nullptr.");
          if ((void *)local_288._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_288._padding_);
          }
        }
      }
      else {
        if ((iVar15 < 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          pFVar8 = (FDS_PlayerTicketChargeTableRow *)(*pcVar2)();
          return pFVar8;
        }
        pUVar5 = FWeakObjectPtr::Get(local_3d0);
        if ((*(FDS_PlayerTicketChargeTableRow **)pFVar16)->ChargeCount <=
            *(int *)&pUVar5[2].field_0x10) {
          if ((iVar15 < 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            pFVar8 = (FDS_PlayerTicketChargeTableRow *)(*pcVar2)();
            return pFVar8;
          }
          pFVar8 = *(FDS_PlayerTicketChargeTableRow **)pFVar16;
        }
        if ((iVar15 < 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          pFVar8 = (FDS_PlayerTicketChargeTableRow *)(*pcVar2)();
          return pFVar8;
        }
        if (local_3f4 < (*(FDS_PlayerTicketChargeTableRow **)pFVar16)->ChargeCount) {
          if ((iVar15 < 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            pFVar8 = (FDS_PlayerTicketChargeTableRow *)(*pcVar2)();
            return pFVar8;
          }
          local_3f4 = (*(FDS_PlayerTicketChargeTableRow **)pFVar16)->ChargeCount;
        }
      }
      FVar12.Data = (FScriptContainerElement *)local_3d8;
      pFVar13 = (FDS_PlayerTicketChargeTableRow *)(ulonglong)(iVar15 + 1U);
      pFVar16 = (FDS_PlayerTicketChargeTableRow *)((longlong)pFVar16 + 8);
    } while ((int)(iVar15 + 1U) < iVar4);
    *local_3c8 = local_3f4;
    local_3e0 = pFVar8;
    if ((pFVar8 == (FDS_PlayerTicketChargeTableRow *)0x0) &&
       (pUVar9 = UDS_LogManager::GetInst(), pFVar8 = pFVar14, pUVar9 != (UDS_LogManager *)0x0)) {
      pUVar9 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_VM_OpenPopupTicketCharge::GetPlayerTicketChargeTableRow",0x3b,Yes);
      UDS_LogManager::PrintLog
                (pUVar9,1,Warning,local_168.Ptr,0x143,L"ticketChargeTableRow is nullptr.");
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
    }
  }
  if ((FDS_PlayerTicketChargeTableRow *)FVar12.Data != (FDS_PlayerTicketChargeTableRow *)0x0) {
    FMemory::Free(FVar12.Data);
  }
  return pFVar8;
}

// GetSortedTicketChargeTableRows @ 14be22eb0

TArray<FDS_PlayerTicketChargeTableRow_const_*,TSizedDefaultAllocator<32>_> * __thiscall
UDS_VM_OpenPopupTicketCharge::GetSortedTicketChargeTableRows
          (UDS_VM_OpenPopupTicketCharge *this,
          TArray<FDS_PlayerTicketChargeTableRow_const_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  int iVar4;
  UObject *pUVar5;
  FDS_PlayerTicketTableRow *pFVar6;
  TArray<FDS_PlayerTicketChargeTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar7;
  ForAnyElementType FVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  FIdentityFunctor local_res8 [8];
  TArray<FDS_PlayerTicketChargeTableRow_const_*,TSizedDefaultAllocator<32>_> local_38;
  TArray<FDS_PlayerTicketChargeTableRow_const_*,TSizedDefaultAllocator<32>_> local_28;
  
  pFVar12 = (FScriptContainerElement *)0x0;
  iVar4 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pUVar5 = FWeakObjectPtr::Get(&(this->TicketData).WeakPtr);
  pFVar6 = FDS_PlayerTicketTableRow::GetRef((longlong)*(int *)&pUVar5[2].field_0x8,true);
  pTVar7 = FDS_PlayerTicketChargeTableRow::GetAll(&local_28);
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar10 = (pTVar7->AllocatorInstance).Data;
  pFVar9 = pFVar10 + (longlong)pTVar7->ArrayNum * 8;
  FVar8.Data = pFVar12;
  pFVar11 = pFVar12;
  FVar2.Data = local_38.AllocatorInstance.Data;
  do {
    local_38.AllocatorInstance.Data = FVar8.Data;
    if (pFVar10 == pFVar9) {
      pFVar9 = local_38.AllocatorInstance.Data;
      if (__return_storage_ptr__ != &local_38) {
        pFVar9 = (__return_storage_ptr__->AllocatorInstance).Data;
        if (pFVar9 != (FScriptContainerElement *)0x0) {
          local_38.AllocatorInstance.Data = FVar2.Data;
          FMemory::Free(pFVar9);
          iVar4 = local_38.ArrayNum;
        }
        (__return_storage_ptr__->AllocatorInstance).Data = local_38.AllocatorInstance.Data;
        local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        __return_storage_ptr__->ArrayNum = iVar4;
        __return_storage_ptr__->ArrayMax = local_38.ArrayMax;
        local_38.ArrayNum = 0;
        local_38.ArrayMax = 0;
        pFVar9 = pFVar12;
        FVar2.Data = local_38.AllocatorInstance.Data;
      }
      local_38.AllocatorInstance.Data = FVar2.Data;
      if (pFVar9 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar9);
      }
      if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
      AlgoImpl::
      IntroSortInternal<FDS_PlayerTicketChargeTableRow_const_*,int,FIdentityFunctor,TDereferenceWrapper<FDS_PlayerTicketChargeTableRow_const_*,_UDS_VM_OpenPopupTicketCharge::GetSortedTicketChargeTableRows_::__l2::<lambda_2>_>_>
                ((FDS_PlayerTicketChargeTableRow **)(__return_storage_ptr__->AllocatorInstance).Data
                 ,__return_storage_ptr__->ArrayNum,local_res8[0],(<lambda_2> *)local_res8);
      return __return_storage_ptr__;
    }
    FVar8.Data = local_38.AllocatorInstance.Data;
    if (*(int *)(*(longlong *)pFVar10 + 0x20) == pFVar6->ID_ChargeGroup) {
      iVar4 = (int)pFVar11;
      if ((local_38.AllocatorInstance.Data <= pFVar10) &&
         (pFVar10 < local_38.AllocatorInstance.Data + (longlong)local_38.ArrayMax * 8)) {
        local_38.AllocatorInstance.Data = FVar2.Data;
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          pTVar7 = (TArray<FDS_PlayerTicketChargeTableRow_const_*,TSizedDefaultAllocator<32>_> *)
                   (*pcVar1)();
          return pTVar7;
        }
        FVar8.Data = local_38.AllocatorInstance.Data;
        iVar4 = local_38.ArrayNum;
        FVar2.Data = local_38.AllocatorInstance.Data;
      }
      local_38.AllocatorInstance.Data = FVar2.Data;
      if (iVar4 == local_38.ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_38.AllocatorInstance,&local_38.ArrayMax);
        FVar8.Data = local_38.AllocatorInstance.Data;
      }
      local_38.ArrayNum = iVar4 + 1U;
      *(longlong *)(FVar8.Data + (longlong)iVar4 * 8) = *(longlong *)pFVar10;
      pFVar11 = (FScriptContainerElement *)(ulonglong)(iVar4 + 1U);
      FVar8.Data = local_38.AllocatorInstance.Data;
      FVar2.Data = local_38.AllocatorInstance.Data;
    }
    local_38.AllocatorInstance.Data = FVar2.Data;
    iVar4 = (int)pFVar11;
    pFVar10 = pFVar10 + 8;
    FVar2.Data = local_38.AllocatorInstance.Data;
  } while( true );
}

// InsteadMoneyOpenCommonPopup @ 14be259b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_OpenPopupTicketCharge::InsteadMoneyOpenCommonPopup
          (UDS_VM_OpenPopupTicketCharge *this,long64 param_1,int param_2,
          FDS_PlayerTicketChargeTableRow *param_3)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  UDS_VM_OpenPopupTicketCharge *pUVar4;
  bool bVar5;
  UDS_LogManager *pUVar6;
  FDS_MoneyExchangeTableRow *this_00;
  UDS_M_CommonPopup *pUVar7;
  FDS_Text *pFVar8;
  UObject *pUVar9;
  FDS_MoneyBaseTableRow *pFVar10;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  *pTVar11;
  int iVar12;
  float fVar13;
  undefined1 auStackY_428 [32];
  FWeakObjectPtr local_3f8;
  int local_3f0 [2];
  int local_3e8 [4];
  code *local_3d8;
  undefined8 uStack_3d0;
  UDS_VM_OpenPopupTicketCharge *local_3c8;
  longlong lStack_3c0;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_3b8;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_3a0;
  FDS_Text local_388;
  FDS_Text local_338;
  FDS_Text local_2e8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_298;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_428;
  local_3f0[0] = param_2;
  local_3c8 = this;
  if (param_3 == (FDS_PlayerTicketChargeTableRow *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_298._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_298,"UDS_VM_OpenPopupTicketCharge::InsteadMoneyOpenCommonPopup",0x39,Yes);
      UDS_LogManager::PrintLog
                (pUVar6,1,Warning,local_298.Ptr,0xaf,L"ticketChargeTableRows is empty.");
      if ((void *)local_298._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_298._padding_);
      }
    }
  }
  else {
    this_00 = FDS_MoneyExchangeTableRow::GetRef((longlong)param_3->ID_MoneyExchange,true);
    if ((this_00->ExchangeRate == 0) ||
       (bVar5 = FDS_MoneyExchangeTableRow::IsValid(this_00), !bVar5)) {
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 != (UDS_LogManager *)0x0) {
        pUVar6 = UDS_LogManager::GetInst();
        local_178._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_178,"UDS_VM_OpenPopupTicketCharge::InsteadMoneyOpenCommonPopup",0x39,Yes);
        UDS_LogManager::PrintLog
                  (pUVar6,1,Warning,local_178.Ptr,0xb6,L"moneyExchangeTableRow.ExchangeRate is 0.");
        if ((void *)local_178._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_178._padding_);
        }
      }
    }
    else {
      iVar12 = (int)param_3->CostValue - (int)param_1;
      fVar13 = (float)iVar12;
      fVar13 = __real_bf000000 -
               (fVar13 + fVar13) * (__real_49742400 / (float)this_00->ExchangeRate);
      GetCommonPopupModel(this);
      bVar5 = FWeakObjectPtr::IsValid(&local_3f8);
      if (bVar5) {
        pUVar7 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_3f8);
        pFVar8 = FDS_Text::FromStringTable(&local_388,StringUi,0x237a);
        UDS_M_CommonPopup::SetTitle(pUVar7,pFVar8);
        pUVar7 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_3f8);
        pFVar8 = FDS_Text::FromStringTable(&local_338,StringUi,0x237f);
        UDS_M_CommonPopup::SetMainContent(pUVar7,pFVar8);
        pUVar9 = FWeakObjectPtr::Get(&(this->TicketData).WeakPtr);
        iVar1 = (param_2 - *(int *)&pUVar9[2].field_0x10) + 1;
        pUVar7 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_3f8);
        local_3e8[0] = iVar1;
        if (iVar1 < 0) {
          local_3e8[0] = 0;
        }
        pFVar8 = FDS_Text::FromStringTableFormat<int,int_&>
                           (&local_2e8,StringUi,0x237c,local_3e8,local_3f0);
        UDS_M_CommonPopup::SetSubContent01(pUVar7,pFVar8);
        pFVar10 = FDS_MoneyBaseTableRow::GetRef((ulonglong)param_3->ReqMoney,true);
        iVar1 = pFVar10->ID_MoneyIcon;
        pFVar10 = FDS_MoneyBaseTableRow::GetRef((ulonglong)this_00->ExchangeMoney,true);
        iVar2 = pFVar10->ID_MoneyIcon;
        pUVar7 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_3f8);
        UDS_M_CommonPopup::SetAsset(pUVar7,Asset01,iVar1,(int)param_3->CostValue - iVar12,0,false);
        pUVar7 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_3f8);
        UDS_M_CommonPopup::SetAsset(pUVar7,Asset02,iVar2,-((int)ROUND(fVar13) >> 1),0,false);
        pUVar7 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_3f8);
        UDS_M_CommonPopup::SetButton(pUVar7,ButtonCancel,StringUi,0x2380,false);
        pUVar7 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_3f8);
        pUVar4 = local_3c8;
        uStack_3d0._0_4_ = 0;
        local_3d8 = OnClickUseMoney;
        pTVar11 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                  ::CreateUObject<UDS_VM_OpenPopupTicketCharge>
                            (&local_3b8,local_3c8,(pmf_ee5be0e1 *)&local_3d8);
        UDS_M_CommonPopup::SetDelegate(pUVar7,ButtonCancel,pTVar11);
        pUVar7 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_3f8);
        UDS_M_CommonPopup::SetButton(pUVar7,ButtonConfirm,StringUi,0x237e,false);
        pUVar7 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_3f8);
        uStack_3d0 = (ulonglong)uStack_3d0._4_4_ << 0x20;
        local_3d8 = OnClickOpenShop;
        local_3c8 = (UDS_VM_OpenPopupTicketCharge *)OnClickOpenShop;
        lStack_3c0 = uStack_3d0;
        pTVar11 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                  ::CreateUObject<UDS_VM_OpenPopupTicketCharge>
                            (&local_3a0,pUVar4,(pmf_ee5be0e1 *)&local_3c8);
        UDS_M_CommonPopup::SetDelegate(pUVar7,ButtonConfirm,pTVar11);
        pUVar7 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_3f8);
        UDS_M_CommonPopup::OpenCommonPopup(pUVar7);
      }
      else {
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_2031255356159557441>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_OpenPopupTicketCharge.cpp"
                           ,0xbf,"false");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
  }
  return;
}

// NotEnoughMoneyOpenCommonPopup @ 14be28b40

void __thiscall
UDS_VM_OpenPopupTicketCharge::NotEnoughMoneyOpenCommonPopup(UDS_VM_OpenPopupTicketCharge *this)

{
  code *pcVar1;
  bool bVar2;
  UDS_M_CommonPopup *pUVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  FWeakObjectPtr local_res10;
  UDS_VM_OpenPopupTicketCharge *local_res18 [2];
  uint uStack_10c;
  undefined1 local_108 [8];
  FDelegateAllocation local_100;
  FDS_Text local_f0;
  FDS_Text local_a0;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  GetCommonPopupModel(this);
  bVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar2) {
    pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res10);
    local_f0.StringTableType = None;
    local_f0.StringTableID = 0;
    local_f0.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_f0.StringEnumTableNameID.Number = 0;
    local_f0.TimeExpressionType = None;
    local_f0.IsExpression = false;
    local_f0.DateTime.Ticks = 0;
    local_f0.TimeSpan.Ticks = 0;
    local_f0.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f0.UniqueString.Data.ArrayNum = 0;
    local_f0.UniqueString.Data.ArrayMax = 0;
    local_f0.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f0.FormatArgs.ArrayNum = 0;
    local_f0.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromStringTable(&local_f0,StringUi,4);
    UDS_M_CommonPopup::SetTitle(pUVar3,&local_f0);
    pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res10);
    local_a0.StringTableType = None;
    local_a0.StringTableID = 0;
    local_a0.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_a0.StringEnumTableNameID.Number = 0;
    local_a0.TimeExpressionType = None;
    local_a0.DateTime.Ticks = 0;
    local_a0.TimeSpan.Ticks = 0;
    local_a0.IsExpression = false;
    local_a0.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a0.UniqueString.Data.ArrayNum = 0;
    local_a0.UniqueString.Data.ArrayMax = 0;
    local_a0.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a0.FormatArgs.ArrayNum = 0;
    local_a0.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromStringTable(&local_a0,StringUi,0x4e24);
    UDS_M_CommonPopup::SetMainContent(pUVar3,&local_a0);
    pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res10);
    UDS_M_CommonPopup::SetButton(pUVar3,ButtonConfirm,StringUi,0x69,false);
    pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res10);
    local_108 = (undefined1  [8])0x0;
    local_100.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_100.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_108,
               (FWriteAccessScope *)&local_50);
    local_38 = &local_100;
    puVar4 = UE::Core::Private::DelegateAllocate(0x30,&local_100);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_OpenPopupTicketCharge____A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_VM_OpenPopupTicketCharge *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar4[3] = 0;
      local_res18[0] = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_VM_OpenPopupTicketCharge *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)local_res18);
      puVar4[4] = OnClickClose;
      puVar4[5] = (ulonglong)uStack_10c << 0x20;
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    UDS_M_CommonPopup::SetDelegate
              (pUVar3,ButtonConfirm,
               (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                *)local_108);
    pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res10);
    UDS_M_CommonPopup::OpenCommonPopup(pUVar3);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2031255356159557471>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_OpenPopupTicketCharge.cpp"
                       ,0xa1,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// OnClickClose @ 14be2c2f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_OpenPopupTicketCharge::OnClickClose
          (UDS_VM_OpenPopupTicketCharge *this,
          TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  UDS_WindowManager *this_00;
  float local_res18 [2];
  uint local_res20 [2];
  
  this_00 = UDS_WindowManager::GetInst();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (this_00 == (UDS_WindowManager *)0x0) {
      return;
    }
  }
  else {
    if (this_00 == (UDS_WindowManager *)0x0) {
      return;
    }
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  local_res18[0] = 0.0;
  local_res20[0] = 0;
  UDS_WindowManager::CloseWindow(this_00,PopupCommon,local_res20,local_res18);
  return;
}

// OnClickOpenShop @ 14be2c960

void __thiscall
UDS_VM_OpenPopupTicketCharge::OnClickOpenShop
          (UDS_VM_OpenPopupTicketCharge *this,
          TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  return;
}

// OnClickUseMoney @ 14be2cb80

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_OpenPopupTicketCharge::OnClickUseMoney
          (UDS_VM_OpenPopupTicketCharge *this,
          TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  UDS_WindowManager *this_00;
  float local_res18 [2];
  uint local_res20 [2];
  
  FDS_PlayerService::SendActionPointCharge();
  this_00 = UDS_WindowManager::GetInst();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (this_00 == (UDS_WindowManager *)0x0) {
      return;
    }
  }
  else {
    if (this_00 == (UDS_WindowManager *)0x0) {
      return;
    }
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  local_res18[0] = 0.0;
  local_res20[0] = 0;
  UDS_WindowManager::CloseWindow(this_00,PopupCommon,local_res20,local_res18);
  return;
}

// OnSetViewModel @ 14be3b940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_OpenPopupTicketCharge::OnSetViewModel
          (UDS_VM_OpenPopupTicketCharge *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_188 [32];
  TSharedPtr<FDS_ViewModelContext_Ticket,1> local_158;
  TSharedPtr<FDS_ViewModelContext,1> local_148;
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
  SafeCast<FDS_ViewModelContext_Ticket>(&local_158,&local_148);
  if (local_158.Object == (FDS_ViewModelContext_Ticket *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_OpenPopupTicketCharge::OnSetViewModel",0x2c,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_138.Ptr,0x1b,L"ticketContext.IsValid() == false");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    if (local_158.Object == (FDS_ViewModelContext_Ticket *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    (this->TicketData).WeakPtr = ((local_158.Object)->TicketData).WeakPtr;
    OpenCommonPopup(this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_158.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OpenCommonPopup @ 14be452e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_OpenPopupTicketCharge::OpenCommonPopup(UDS_VM_OpenPopupTicketCharge *this)

{
  longlong lVar1;
  bool bVar2;
  FDS_PlayerTicketChargeTableRow *pFVar3;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
  UDS_MoneyData *pUVar6;
  long64 lVar7;
  int iVar8;
  undefined1 auStackY_178 [32];
  int local_148 [2];
  FWeakObjectPtr local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_148[0] = 0;
  pFVar3 = GetPlayerTicketChargeTableRow(this,local_148);
  if (pFVar3 == (FDS_PlayerTicketChargeTableRow *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = (longlong)pFVar3;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_OpenPopupTicketCharge::OpenCommonPopup",0x2d,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_138.Ptr,0x43,L"ticketChargeTableRows is empty.");
      if ((FDS_PlayerTicketChargeTableRow *)local_138._padding_ !=
          (FDS_PlayerTicketChargeTableRow *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else if (pFVar3->IsChargeCountAble == true) {
    pUVar5 = FWeakObjectPtr::Get(&(this->TicketData).WeakPtr);
    iVar8 = (local_148[0] - *(int *)&pUVar5[2].field_0x10) + 1;
    if (iVar8 < 1) {
      ChargeCountZeroOpenCommonPopup(this);
    }
    else {
      UDS_MoneyData::GetData
                ((ulong64)&local_140,UDS_PlayerData::MainPlayerEntityID,(bool)pFVar3->ReqMoney);
      bVar2 = TWeakObjectPtr<UDS_MoneyData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_MoneyData,FWeakObjectPtr> *)&local_140,(void *)0x0);
      if (bVar2) {
        pUVar4 = UDS_LogManager::GetInst();
        if (pUVar4 != (UDS_LogManager *)0x0) {
          pUVar4 = UDS_LogManager::GetInst();
          local_138._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_138,"UDS_VM_OpenPopupTicketCharge::OpenCommonPopup",0x2d,Yes);
          UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0x56,L"moneyData is nullptr.");
          if ((void *)local_138._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_138._padding_);
          }
        }
      }
      else {
        pUVar6 = (UDS_MoneyData *)FWeakObjectPtr::Get(&local_140);
        lVar1 = pFVar3->CostValue;
        lVar7 = UDS_MoneyData::GetTotalQuantity(pUVar6);
        if (lVar7 < lVar1) {
          pUVar6 = (UDS_MoneyData *)FWeakObjectPtr::Get(&local_140);
          lVar7 = UDS_MoneyData::GetTotalQuantity(pUVar6);
          bVar2 = CheckMoneyData(this,lVar7,pFVar3);
          if (bVar2) {
            NotEnoughMoneyOpenCommonPopup(this);
          }
          else {
            pUVar6 = (UDS_MoneyData *)FWeakObjectPtr::Get(&local_140);
            lVar7 = UDS_MoneyData::GetTotalQuantity(pUVar6);
            InsteadMoneyOpenCommonPopup(this,lVar7,local_148[0],pFVar3);
          }
        }
        else {
          EnoughConditionOpenCommonPopup(this,iVar8,local_148[0],pFVar3);
        }
      }
    }
  }
  return;
}

// TicketDataDirty @ 14be549e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_OpenPopupTicketCharge::TicketDataDirty
          (UDS_VM_OpenPopupTicketCharge *this,UDS_DataBase *param_1)

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
        == &pUVar3->_padding_)) goto LAB_14be54a2f;
  }
  param_1 = (UDS_DataBase *)0x0;
LAB_14be54a2f:
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
    (this->TicketData).WeakPtr = local_148;
    OpenCommonPopup(this);
  }
  else {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_OpenPopupTicketCharge::TicketDataDirty",0x2d,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0x164,L"ticketData is invalid.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

// UnbindModel @ 14be558b0

void __thiscall UDS_VM_OpenPopupTicketCharge::UnbindModel(UDS_VM_OpenPopupTicketCharge *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  bVar1 = FWeakObjectPtr::IsValid(&(this->TicketData).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->TicketData).WeakPtr);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar2 + 1),(UObject *)this)
    ;
  }
  return;
}

