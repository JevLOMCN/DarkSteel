// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 14

// StaticClass @ 14b5fc740

UClass * __cdecl UDS_VM_AchievementData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_AchievementData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_AchievementData",
               &Z_Registration_Info_UClass_UDS_VM_AchievementData.InnerSingleton,
               StaticRegisterNativesUDS_VM_AchievementData,0x170,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_AchievementData>,
               InternalVTableHelperCtorCaller<UDS_VM_AchievementData>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_AchievementData.InnerSingleton;
}

// UDS_VM_AchievementData @ 14b5ffd90

UDS_VM_AchievementData * __thiscall
UDS_VM_AchievementData::UDS_VM_AchievementData(UDS_VM_AchievementData *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_AchievementData__6B_;
  (this->Title).StringTableID = 0;
  (this->Title).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Title).StringEnumTableNameID.Number = 0;
  (this->Title).DateTime.Ticks = 0;
  (this->Title).TimeSpan.Ticks = 0;
  (this->Title).TimeExpressionType = None;
  (this->Title).IsExpression = false;
  (this->Title).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Title).UniqueString.Data.ArrayNum = 0;
  (this->Title).UniqueString.Data.ArrayMax = 0;
  (this->Title).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Title).FormatArgs.ArrayNum = 0;
  (this->Title).FormatArgs.ArrayMax = 0;
  (this->Explanation).StringTableType = None;
  (this->Explanation).StringTableID = 0;
  (this->Explanation).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Explanation).StringEnumTableNameID.Number = 0;
  (this->Explanation).DateTime.Ticks = 0;
  (this->Explanation).TimeSpan.Ticks = 0;
  (this->Explanation).TimeExpressionType = None;
  (this->Explanation).IsExpression = false;
  (this->Explanation).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Explanation).UniqueString.Data.ArrayNum = 0;
  (this->Explanation).UniqueString.Data.ArrayMax = 0;
  (this->Explanation).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Explanation).FormatArgs.ArrayNum = 0;
  (this->Explanation).FormatArgs.ArrayMax = 0;
  (this->AchievementItemRewardEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AchievementItemRewardEventField).UserObjectList.ArrayNum = 0;
  (this->AchievementItemRewardEventField).UserObjectList.ArrayMax = 0;
  this->TableID = 0;
  this->DifferenceQuantity = 0;
  (this->AchievementData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->Title).StringTableType = None;
  return this;
}

// UDS_VM_AchievementData @ 14b5ffe80

UDS_VM_AchievementData * __thiscall
UDS_VM_AchievementData::UDS_VM_AchievementData
          (UDS_VM_AchievementData *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_AchievementData__6B_;
  (this->Title).StringTableID = 0;
  (this->Title).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Title).StringEnumTableNameID.Number = 0;
  (this->Title).DateTime.Ticks = 0;
  (this->Title).TimeSpan.Ticks = 0;
  (this->Title).TimeExpressionType = None;
  (this->Title).IsExpression = false;
  (this->Title).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Title).UniqueString.Data.ArrayNum = 0;
  (this->Title).UniqueString.Data.ArrayMax = 0;
  (this->Title).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Title).FormatArgs.ArrayNum = 0;
  (this->Title).FormatArgs.ArrayMax = 0;
  (this->Explanation).StringTableType = None;
  (this->Explanation).StringTableID = 0;
  (this->Explanation).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Explanation).StringEnumTableNameID.Number = 0;
  (this->Explanation).DateTime.Ticks = 0;
  (this->Explanation).TimeSpan.Ticks = 0;
  (this->Explanation).TimeExpressionType = None;
  (this->Explanation).IsExpression = false;
  (this->Explanation).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Explanation).UniqueString.Data.ArrayNum = 0;
  (this->Explanation).UniqueString.Data.ArrayMax = 0;
  (this->Explanation).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Explanation).FormatArgs.ArrayNum = 0;
  (this->Explanation).FormatArgs.ArrayMax = 0;
  (this->AchievementItemRewardEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AchievementItemRewardEventField).UserObjectList.ArrayNum = 0;
  (this->AchievementItemRewardEventField).UserObjectList.ArrayMax = 0;
  this->TableID = 0;
  this->DifferenceQuantity = 0;
  (this->AchievementData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->Title).StringTableType = None;
  return this;
}

// ~UDS_VM_AchievementData @ 14b6019b0

void __thiscall UDS_VM_AchievementData::~UDS_VM_AchievementData(UDS_VM_AchievementData *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_AchievementData__6B_;
  pFVar1 = (this->AchievementItemRewardEventField).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->Explanation).FormatArgs.AllocatorInstance.Data,
             (this->Explanation).FormatArgs.ArrayNum);
  pFVar1 = (this->Explanation).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Explanation).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->Title).FormatArgs.AllocatorInstance.Data,
             (this->Title).FormatArgs.ArrayNum);
  pFVar1 = (this->Title).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Title).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b603a00

IClassDescriptor * __thiscall
UDS_VM_AchievementData::GetFieldNotificationDescriptor(UDS_VM_AchievementData *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_AchievementData::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b603fe0

UClass * __cdecl UDS_VM_AchievementData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_AchievementData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_AchievementData",
               &Z_Registration_Info_UClass_UDS_VM_AchievementData.InnerSingleton,
               StaticRegisterNativesUDS_VM_AchievementData,0x170,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_AchievementData>,
               InternalVTableHelperCtorCaller<UDS_VM_AchievementData>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_AchievementData.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_AchievementData @ 14b604880

void __cdecl UDS_VM_AchievementData::StaticRegisterNativesUDS_VM_AchievementData(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_AchievementData_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execIsClaimAble @ 14b605a80

void __cdecl UDS_VM_AchievementData::execIsClaimAble(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsClaimAble((UDS_VM_AchievementData *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execUpdateData @ 14b605b00

void __cdecl UDS_VM_AchievementData::execUpdateData(UObject *param_1,FFrame *param_2,void *param_3)

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
  UpdateData((UDS_VM_AchievementData *)param_1,local_res10);
  return;
}

// BindModel @ 14bdaee70

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_AchievementData::BindModel(UDS_VM_AchievementData *this)

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

// IsClaimAble @ 14bdc7d20

bool __thiscall UDS_VM_AchievementData::IsClaimAble(UDS_VM_AchievementData *this)

{
  bool bVar1;
  UDS_AchievementData *this_00;
  FDS_AchievementBaseTableRow *pFVar2;
  UObject *pUVar3;
  
  bVar1 = TWeakObjectPtr<UDS_AchievementData,FWeakObjectPtr>::UEOpEquals
                    (&this->AchievementData,(void *)0x0);
  if (!bVar1) {
    this_00 = (UDS_AchievementData *)FWeakObjectPtr::Get(&(this->AchievementData).WeakPtr);
    pFVar2 = UDS_AchievementData::GetAchievementBaseTableRow(this_00);
    if (pFVar2 != (FDS_AchievementBaseTableRow *)0x0) {
      pUVar3 = FWeakObjectPtr::Get(&(this->AchievementData).WeakPtr);
      if ((pUVar3[2].field_0x14 == '\x02') && (pFVar2->ID == this->TableID)) {
        return true;
      }
    }
  }
  return false;
}

// OnSetViewModel @ 14bdd1f80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UDS_VM_AchievementData::OnSetViewModel
          (UDS_VM_AchievementData *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int *piVar1;
  TArray<TSharedPtr<FDS_ViewModelContext,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement FVar3;
  FDS_AchievementBaseTableRow *this_00;
  long64 lVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  code *pcVar7;
  FDS_ViewModelContext_MoneyDisplay *pFVar8;
  FSharedReferencer<1> FVar9;
  UDS_M_ItemImplBase *this_01;
  FDS_VMContext_RewardSlot *pFVar10;
  FSharedReferencer<1> FVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  UDS_LogManager *pUVar15;
  UObject *pUVar16;
  char *pcVar17;
  UObject *this_02;
  UFunction *pUVar18;
  UDS_DataBase *pUVar19;
  FDS_Text *pFVar20;
  TObjectPtr<UDS_UserObjectListItem>_u_0 TVar21;
  FDS_AchievementRewardTableRow *pFVar22;
  UDS_UserObjectListItem *pUVar23;
  undefined8 *puVar24;
  TReferenceControllerBase<1> *pTVar25;
  TObjectPtr<UDS_UserObjectListItem>_u_0 TVar26;
  TObjectPtr<UDS_UserObjectListItem>_u_0 _Src;
  char *pcVar27;
  size_t _Size;
  longlong lVar28;
  uint uVar29;
  atomic<int> *paVar30;
  uint uVar31;
  undefined1 auStackY_728 [32];
  <lambda_1> local_6e8 [8];
  ForAnyElementType local_6e0;
  int local_6d8;
  int local_6d4;
  ForAnyElementType local_6d0;
  int local_6c8;
  int local_6c4;
  ForAnyElementType local_6c0;
  int local_6b8;
  int local_6b4;
  ForAnyElementType local_6b0;
  int local_6a8;
  int local_6a4;
  TSharedPtr<FDS_ViewModelContext,1> *local_6a0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_698;
  FWeakObjectPtr local_690;
  FName local_688;
  longlong local_680;
  TSharedPtr<FDS_ViewModelContext_MoneyDisplay,1> local_678;
  TSharedPtr<FDS_VMContext_AchievementData,1> local_668;
  FName local_658;
  FDS_AchievementRewardTableRow *local_650;
  UDS_M_ItemImplBase *local_648;
  FDS_EntryBindingEventField *local_640;
  UDS_VM_AchievementData *local_638;
  FName local_628;
  int local_620;
  FName local_618;
  int local_610;
  FName local_608;
  int local_600;
  FName local_5f8;
  int local_5f0;
  FName local_5e8;
  int local_5e0;
  FName local_5d8;
  int local_5d0;
  FName local_5c8;
  int local_5c0;
  FName local_5b8;
  UDS_VM_AchievementData *local_5b0;
  FName *local_5a8;
  UDS_UserObjectListItem *local_5a0;
  TSharedPtr<FDS_VMContext_RewardSlot,1> local_598;
  TSharedPtr<FDS_VMContext_RewardSlot,1> local_588;
  UDS_UserObjectListItem *local_578;
  FDS_Text local_570;
  FDS_Text local_520;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_4d0;
  TSharedPtr<FDS_ViewModelContext,1> local_4c0;
  FDestructionSentinel local_4b0;
  TSharedPtr<FDS_ViewModelContext,1> local_498;
  undefined1 local_488 [8];
  TReferenceControllerBase<1> *local_480;
  FReadAccessScope local_478;
  FReadAccessScope local_460;
  FDS_Text local_448;
  FDS_Text local_3f8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_728;
  local_658 = (FName)((ulonglong)local_658 & 0xffffffff00000000);
  pTVar25 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar25 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar25->SharedReferenceCount = (atomic<int>)((int)pTVar25->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_6a0 = param_1;
  local_638 = this;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar25);
  local_4c0.Object = param_1->Object;
  local_4c0.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_4c0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_4c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_4c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_VMContext_AchievementData>(&local_668,&local_4c0);
  if (local_668.Object == (FDS_VMContext_AchievementData *)0x0) {
    bVar12 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_5177261524011450335>,true,
                        "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_AchievementData.cpp"
                        ,0x21,"context.IsValid()");
    if (!bVar12) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_668.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->SharedReferenceCount).ReferenceController);
      return;
    }
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  this_00 = (local_668.Object)->AchievementBaseTableRow;
  if (this_00 == (FDS_AchievementBaseTableRow *)0x0) {
    pUVar15 = UDS_LogManager::GetInst();
    if (pUVar15 != (UDS_LogManager *)0x0) {
      pUVar15 = UDS_LogManager::GetInst();
      local_3a8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_3a8,"UDS_VM_AchievementData::OnSetViewModel",0x26,Yes);
      UDS_LogManager::PrintLog
                (pUVar15,1,Warning,local_3a8.Ptr,0x2a,L"achievementBaseTableRow is nullptr");
      if ((void *)local_3a8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_3a8._padding_);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_668.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return;
  }
  this->DifferenceQuantity =
       (int)this_00->AchievementDefineCountAccrue - this_00->AchievementDefineCount;
  this->TableID = this_00->ID;
  this->IconID = this_00->ID_Icon;
  this->AchievementDefineCount = this_00->AchievementDefineCount;
  (this->AchievementData).WeakPtr = ((local_668.Object)->AchievementData).WeakPtr;
  bVar12 = TWeakObjectPtr<UDS_AchievementData,FWeakObjectPtr>::UEOpEquals
                     (&this->AchievementData,(void *)0x0);
  if (bVar12) goto LAB_14bdd2332;
  pUVar16 = FWeakObjectPtr::Get(&(this->AchievementData).WeakPtr);
  pcVar17 = strstr("&UDS_VM_AchievementData::UpdateData","::");
  if (pcVar17 == (char *)0x0) {
LAB_14bdd21ab:
    pcVar27 = &DAT_00000002;
LAB_14bdd21b0:
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Result && Result[2] != \'0\'",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                        ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else {
    do {
      pcVar27 = pcVar17;
      pcVar17 = strstr(pcVar27 + 1,"::");
    } while (pcVar17 != (char *)0x0);
    if (pcVar27 == (char *)0x0) goto LAB_14bdd21ab;
    pcVar27 = pcVar27 + 2;
    if (*pcVar27 == '0') goto LAB_14bdd21b0;
  }
  ::FName::FName(&local_5b8,pcVar27);
  local_698.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_690.ObjectIndex = 0;
  local_690.ObjectSerialNumber = 0;
  local_5b0 = this;
  if (this == (UDS_VM_AchievementData *)0x0) {
    local_5b0 = (UDS_VM_AchievementData *)0x0;
  }
  local_688.ComparisonIndex.Value = 0;
  local_688.Number = 0;
  local_658 = local_5b8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_5b0 != (UDS_VM_AchievementData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_5b0);
  }
  FWeakObjectPtr::operator=(&local_690,(FObjectPtr)&local_5b0);
  local_688 = local_658;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_698,&local_478);
  if ((local_688 == (FName)0x0) ||
     (this_02 = FWeakObjectPtr::Get(&local_690), this_02 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_478);
LAB_14bdd228f:
    local_5a8 = &local_658;
    `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UDS_DataBase_*>::
    __Internal_BindDynamic<UDS_VM_AchievementData>'::__l2::<lambda_1>::operator()(&local_5a8);
  }
  else {
    pUVar18 = UObject::FindFunction(this_02,local_688);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_478);
    if (pUVar18 == (UFunction *)0x0) goto LAB_14bdd228f;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_698,&local_460);
  local_4d0.Object = local_690;
  local_4d0.FunctionName = local_688;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_460);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pUVar16 + 1),
             (FWriteAccessScope *)&local_4b0);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&pUVar16[1].field_0x8,local_6e8,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar16 + 1),&local_4d0);
  if (local_4b0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4b0.Accessor,&local_4b0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_698.AccessDetector);
  param_1 = local_6a0;
LAB_14bdd2332:
  pUVar19 = (UDS_DataBase *)FWeakObjectPtr::Get(&(this->AchievementData).WeakPtr);
  UpdateData(this,pUVar19);
  bVar12 = FDS_AchievementService::IsGroupAchievement(this_00->AchievementGroupId);
  if (bVar12) {
    pFVar20 = FDS_Text::FromStringTableFormat<int_const_&>
                        (&local_448,StringBase,(this_00->ID_Title).ID,&this_00->AchievementGroupStep
                        );
    FDS_Text::operator=(&this->Title,pFVar20);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_448.FormatArgs.AllocatorInstance.Data,
               local_448.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_448.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0
       ) {
      FMemory::Free(local_448.FormatArgs.AllocatorInstance.Data);
    }
  }
  else {
    local_570.StringTableType = None;
    local_570.StringTableID = 0;
    local_570.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_570.StringEnumTableNameID.Number = 0;
    local_570.DateTime.Ticks = 0;
    local_570.TimeSpan.Ticks = 0;
    local_570.TimeExpressionType = None;
    local_570.IsExpression = false;
    local_570.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_570.UniqueString.Data.ArrayNum = 0;
    local_570.UniqueString.Data.ArrayMax = 0;
    local_570.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_570.FormatArgs.ArrayNum = 0;
    local_570.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromStringID(&local_570,&this_00->ID_Title);
    FDS_Text::operator=(&this->Title,&local_570);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_570.FormatArgs.AllocatorInstance.Data,
               local_570.FormatArgs.ArrayNum);
    local_448.UniqueString.Data.AllocatorInstance.Data =
         local_570.UniqueString.Data.AllocatorInstance.Data;
    if ((FDS_TextFormatArg *)local_570.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0
       ) {
      FMemory::Free(local_570.FormatArgs.AllocatorInstance.Data);
      local_448.UniqueString.Data.AllocatorInstance.Data =
           local_570.UniqueString.Data.AllocatorInstance.Data;
    }
  }
  uVar31 = 0;
  if (local_448.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_448.UniqueString.Data.AllocatorInstance.Data);
  }
  bVar12 = !bVar12;
  if (bVar12) {
    local_520.StringTableType = None;
    local_520.StringTableID = 0;
    local_520.DateTime.Ticks = 0;
    local_520.TimeSpan.Ticks = 0;
    local_520.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_520.StringEnumTableNameID.Number = 0;
    local_520.TimeExpressionType = None;
    local_520.IsExpression = false;
    local_520.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_520.UniqueString.Data.ArrayNum = 0;
    local_520.UniqueString.Data.ArrayMax = 0;
    local_520.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_520.FormatArgs.ArrayNum = 0;
    local_520.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromStringID(&local_520,&this_00->ID_Explanation);
    TVar21.DebugPtr = (UDS_UserObjectListItem *)&local_520;
  }
  else {
    TVar21.DebugPtr =
         (UDS_UserObjectListItem *)
         FDS_Text::FromStringTableFormat<int_&>
                   (&local_3f8,StringBase,(this_00->ID_Explanation).ID,&this->AchievementDefineCount
                   );
  }
  FDS_Text::operator=(&this->Explanation,(FDS_Text *)TVar21.DebugPtr);
  if (bVar12) {
    TVar21.DebugPtr = (UDS_UserObjectListItem *)(local_520.FormatArgs._8_8_ & 0xffffffff);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_520.FormatArgs.AllocatorInstance.Data,
               local_520.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_520.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0
       ) {
      FMemory::Free(local_520.FormatArgs.AllocatorInstance.Data);
    }
    if (local_520.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_520.UniqueString.Data.AllocatorInstance.Data);
    }
  }
  if (!bVar12) {
    TVar21._4_4_ = 0;
    TVar21._0_4_ = local_3f8.FormatArgs.ArrayNum;
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_3f8.FormatArgs.AllocatorInstance.Data,
               local_3f8.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_3f8.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0
       ) {
      FMemory::Free(local_3f8.FormatArgs.AllocatorInstance.Data);
    }
    if (local_3f8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3f8.UniqueString.Data.AllocatorInstance.Data);
    }
  }
  local_640 = &this->AchievementItemRewardEventField;
  FDS_EntryBindingEventField::Reset(local_640);
  pFVar22 = FDS_AchievementBaseTableRow::ID_AchievementRewardTable(this_00);
  local_6e0.Data = (FScriptContainerElement *)0x0;
  local_6d8 = (pFVar22->RewardMoneyType).ArrayNum;
  _Size = (size_t)local_6d8;
  TVar26 = (TObjectPtr<UDS_UserObjectListItem>_u_0)(pFVar22->RewardMoneyType).AllocatorInstance.Data
  ;
  local_650 = pFVar22;
  if (local_6d8 == 0) {
    local_6d4 = 0;
    TVar26 = TVar21;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_6d8,0,&local_6e0,local_6d8,&local_6d4);
    memcpy(local_6e0.Data,TVar26.DebugPtr,_Size);
  }
  local_6c8 = (pFVar22->RewardMoneyCount).ArrayNum;
  lVar28 = (longlong)local_6c8;
  TVar21 = (TObjectPtr<UDS_UserObjectListItem>_u_0)
           (pFVar22->RewardMoneyCount).AllocatorInstance.Data;
  local_6d0.Data = (FScriptContainerElement *)0x0;
  if (local_6c8 == 0) {
    local_6c4 = 0;
    TVar21 = TVar26;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_6c8,0,&local_6d0,local_6c8,&local_6c4);
    memcpy(local_6d0.Data,TVar21.DebugPtr,lVar28 << 3);
  }
  if (local_6d8 == local_6c8) {
    if (0 < local_6d8) {
      lVar28 = 0;
      local_680 = (longlong)local_6d8;
      do {
        uVar29 = ~uVar31 >> 0x1f;
        uVar13 = 0;
        if ((int)uVar31 < local_6d8) {
          uVar13 = uVar29;
        }
        if (uVar13 == 0) {
          TVar21.DebugPtr = (UDS_UserObjectListItem *)0x1506109c0;
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar12) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        if (local_6e0.Data[lVar28] != (FScriptContainerElement)0x0) {
          uVar13 = 0;
          if ((int)uVar31 < local_6c8) {
            uVar13 = uVar29;
          }
          if (uVar13 == 0) {
            TVar21.DebugPtr = (UDS_UserObjectListItem *)0x1506109c0;
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar12) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          if (*(longlong *)(local_6d0.Data + lVar28 * 8) != 0) {
            pUVar23 = NewObject<UDS_UserObjectListItem>((UObject *)this);
            if (UE::GC::GIsIncrementalReachabilityPending == false) {
              if (pUVar23 == (UDS_UserObjectListItem *)0x0) goto LAB_14bdd2ad1;
            }
            else {
              if (pUVar23 == (UDS_UserObjectListItem *)0x0) {
LAB_14bdd2ad1:
                bVar12 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<_5177261524011450279>,false,
                                    "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_AchievementData.cpp"
                                    ,0x59,"false");
                if (bVar12) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                if (local_6d0.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_6d0.Data);
                }
                if (local_6e0.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_6e0.Data);
                }
                goto LAB_14bdd302b;
              }
              UE::GC::MarkAsReachable((UObject *)pUVar23);
            }
            MakeContext<FDS_ViewModelContext_MoneyDisplay>(&local_678);
            pFVar8 = local_678.Object;
            if ((local_678.Object == (FDS_ViewModelContext_MoneyDisplay *)0x0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar12)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            *(undefined4 *)&pFVar8->_padding_ = 0x192;
            uVar13 = 0;
            if ((int)uVar31 < local_6d8) {
              uVar13 = uVar29;
            }
            if ((uVar13 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            FVar3 = local_6e0.Data[lVar28];
            if ((pFVar8 == (FDS_ViewModelContext_MoneyDisplay *)0x0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar12)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar8->MoneyId = (ulonglong)(byte)FVar3;
            uVar13 = 0;
            if ((int)uVar31 < local_6c8) {
              uVar13 = uVar29;
            }
            if ((uVar13 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            lVar4 = *(long64 *)(local_6d0.Data + lVar28 * 8);
            if ((pFVar8 == (FDS_ViewModelContext_MoneyDisplay *)0x0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar12)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            FVar9.ReferenceController = local_678.SharedReferenceCount.ReferenceController;
            pFVar8->Quantity = lVar4;
            if (local_678.SharedReferenceCount.ReferenceController ==
                (TReferenceControllerBase<1> *)0x0) {
              paVar30 = (atomic<int> *)&DAT_00000008;
            }
            else {
              paVar30 = &(local_678.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
              LOCK();
              *paVar30 = (atomic<int>)((int)*paVar30 + 1);
              UNLOCK();
            }
            iVar14 = (pUVar23->ViewModelContextArray).ArrayNum;
            piVar1 = &(pUVar23->ViewModelContextArray).ArrayMax;
            if (iVar14 == *piVar1) {
              iVar14 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&(pUVar23->ViewModelContextArray).AllocatorInstance,piVar1);
            }
            (pUVar23->ViewModelContextArray).ArrayNum = iVar14 + 1;
            pFVar5 = (pUVar23->ViewModelContextArray).AllocatorInstance.Data;
            *(FDS_ViewModelContext_MoneyDisplay **)(pFVar5 + (longlong)iVar14 * 0x10) = pFVar8;
            *(TReferenceControllerBase<1> **)(pFVar5 + (longlong)iVar14 * 0x10 + 8) =
                 FVar9.ReferenceController;
            if (FVar9.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              *paVar30 = (atomic<int>)((int)*paVar30 + 1);
              UNLOCK();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar9.ReferenceController);
            MakeContext<FDS_VMContext_RewardSlot>(&local_598);
            pFVar10 = local_598.Object;
            if ((local_598.Object == (FDS_VMContext_RewardSlot *)0x0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar12)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            FVar11.ReferenceController = local_598.SharedReferenceCount.ReferenceController;
            *(undefined4 *)&pFVar10->_padding_ = 0xb8;
            local_498.Object = (FDS_ViewModelContext *)local_598.Object;
            local_498.SharedReferenceCount.ReferenceController =
                 local_598.SharedReferenceCount.ReferenceController;
            pFVar10->RewardSlotType = Money;
            if (local_598.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_598.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_598.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            UDS_UserObjectListItem::AddContext(pUVar23,&local_498);
            local_5a0 = pUVar23;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)pUVar23);
            }
            TVar21.DebugPtr = (UDS_UserObjectListItem *)&local_5a0;
            FDS_EntryBindingEventField::Add
                      (local_640,(TObjectPtr<UDS_UserObjectListItem>)TVar21.ObjectPtr.field0_0x0);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar11.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar9.ReferenceController);
            this = local_638;
          }
        }
        uVar31 = uVar31 + 1;
        lVar28 = lVar28 + 1;
        pFVar22 = local_650;
      } while (lVar28 < local_680);
    }
    if (local_6d0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6d0.Data);
    }
    if (local_6e0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6e0.Data);
    }
    local_6a8 = (pFVar22->ID_RewardItemId).ArrayNum;
    lVar28 = (longlong)local_6a8;
    uVar31 = 0;
    TVar26 = (TObjectPtr<UDS_UserObjectListItem>_u_0)
             (pFVar22->ID_RewardItemId).AllocatorInstance.Data;
    local_6b0.Data = (FScriptContainerElement *)0x0;
    if (local_6a8 == 0) {
      local_6a4 = 0;
      TVar26 = TVar21;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_6a8,0,&local_6b0,local_6a8,&local_6a4);
      memcpy(local_6b0.Data,TVar26.DebugPtr,lVar28 << 2);
    }
    local_6b8 = (pFVar22->RewardItemCount).ArrayNum;
    lVar28 = (longlong)local_6b8;
    _Src = (TObjectPtr<UDS_UserObjectListItem>_u_0)(pFVar22->RewardItemCount).AllocatorInstance.Data
    ;
    local_6c0.Data = (FScriptContainerElement *)0x0;
    if (local_6b8 == 0) {
      local_6b4 = 0;
      _Src = TVar26;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_6b8,0,&local_6c0,local_6b8,&local_6b4);
      memcpy(local_6c0.Data,_Src.DebugPtr,lVar28 << 2);
    }
    if (local_6a8 == local_6b8) {
      local_650 = (FDS_AchievementRewardTableRow *)(longlong)local_6a8;
      if (0 < local_6a8) {
        local_680 = 0;
        do {
          lVar28 = local_680;
          pUVar23 = NewObject<UDS_UserObjectListItem>((UObject *)this);
          if (UE::GC::GIsIncrementalReachabilityPending == false) {
            if (pUVar23 == (UDS_UserObjectListItem *)0x0) goto LAB_14bdd307e;
          }
          else {
            if (pUVar23 == (UDS_UserObjectListItem *)0x0) {
LAB_14bdd307e:
              bVar12 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_5177261524011450248>,false,
                                  "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_AchievementData.cpp"
                                  ,0x78,"false");
              if (bVar12) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              goto LAB_14bdd2c4d;
            }
            UE::GC::MarkAsReachable((UObject *)pUVar23);
          }
          uVar13 = 0;
          if ((int)uVar31 < local_6a8) {
            uVar13 = ~uVar31 >> 0x1f;
          }
          if (uVar13 == 0) {
            _Src.DebugPtr = (UDS_UserObjectListItem *)0x1506109c0;
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar12) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          _Src._0_1_ = 6;
          DS_ItemDataUtil::CreateItemModel((EDS_ItemSlotStateType)&local_648,_Src._0_4_);
          this_01 = local_648;
          if (local_648 != (UDS_M_ItemImplBase *)0x0) {
            uVar13 = 0;
            if ((int)uVar31 < local_6b8) {
              uVar13 = ~uVar31 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            UDS_M_ItemImplBase::SetQuantity(this_01,*(int *)(local_6c0.Data + lVar28 * 4));
            puVar24 = (undefined8 *)(**(code **)(local_648->_padding_ + 0x310))(local_648,local_488)
            ;
            pTVar25 = (TReferenceControllerBase<1> *)puVar24[1];
            uVar6 = *puVar24;
            if (pTVar25 == (TReferenceControllerBase<1> *)0x0) {
              paVar30 = (atomic<int> *)&DAT_00000008;
            }
            else {
              paVar30 = &pTVar25->SharedReferenceCount;
              LOCK();
              *paVar30 = (atomic<int>)((int)*paVar30 + 1);
              UNLOCK();
            }
            pTVar2 = &pUVar23->ViewModelContextArray;
            iVar14 = (pUVar23->ViewModelContextArray).ArrayNum;
            if (iVar14 == (pUVar23->ViewModelContextArray).ArrayMax) {
              iVar14 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&pTVar2->AllocatorInstance,
                                  &(pUVar23->ViewModelContextArray).ArrayMax);
            }
            (pUVar23->ViewModelContextArray).ArrayNum = iVar14 + 1;
            pFVar5 = (pTVar2->AllocatorInstance).Data;
            *(undefined8 *)(pFVar5 + (longlong)iVar14 * 0x10) = uVar6;
            *(TReferenceControllerBase<1> **)(pFVar5 + (longlong)iVar14 * 0x10 + 8) = pTVar25;
            if (pTVar25 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              *paVar30 = (atomic<int>)((int)*paVar30 + 1);
              UNLOCK();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar25);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_480);
            MakeContext<FDS_VMContext_RewardSlot>(&local_588);
            pFVar10 = local_588.Object;
            if ((local_588.Object == (FDS_VMContext_RewardSlot *)0x0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar12)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            FVar9.ReferenceController = local_588.SharedReferenceCount.ReferenceController;
            *(undefined4 *)&pFVar10->_padding_ = 0xb8;
            pFVar10->RewardSlotType = Item;
            if (local_588.SharedReferenceCount.ReferenceController ==
                (TReferenceControllerBase<1> *)0x0) {
              paVar30 = (atomic<int> *)&DAT_00000008;
            }
            else {
              paVar30 = &(local_588.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
              LOCK();
              *paVar30 = (atomic<int>)((int)*paVar30 + 1);
              UNLOCK();
            }
            iVar14 = (pUVar23->ViewModelContextArray).ArrayNum;
            if (iVar14 == (pUVar23->ViewModelContextArray).ArrayMax) {
              iVar14 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&pTVar2->AllocatorInstance,
                                  &(pUVar23->ViewModelContextArray).ArrayMax);
            }
            (pUVar23->ViewModelContextArray).ArrayNum = iVar14 + 1;
            pFVar5 = (pTVar2->AllocatorInstance).Data;
            *(FDS_VMContext_RewardSlot **)(pFVar5 + (longlong)iVar14 * 0x10) = pFVar10;
            *(TReferenceControllerBase<1> **)(pFVar5 + (longlong)iVar14 * 0x10 + 8) =
                 FVar9.ReferenceController;
            if (FVar9.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              *paVar30 = (atomic<int>)((int)*paVar30 + 1);
              UNLOCK();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar9.ReferenceController);
            local_578 = pUVar23;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)pUVar23);
            }
            _Src.DebugPtr = (UDS_UserObjectListItem *)&local_578;
            FDS_EntryBindingEventField::Add
                      (local_640,(TObjectPtr<UDS_UserObjectListItem>)_Src.ObjectPtr.field0_0x0);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar9.ReferenceController);
            this = local_638;
            lVar28 = local_680;
          }
          local_680 = lVar28 + 1;
          uVar31 = uVar31 + 1;
        } while (local_680 < (longlong)local_650);
      }
      if (local_6c0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6c0.Data);
      }
      if (local_6b0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6b0.Data);
      }
      local_620 = FFieldNotificationClassDescriptor::IconID.BitNumber;
      local_628 = FFieldNotificationClassDescriptor::IconID.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_628);
      local_610 = FFieldNotificationClassDescriptor::AchievementCount.BitNumber;
      local_618 = FFieldNotificationClassDescriptor::AchievementCount.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_618);
      local_600 = FFieldNotificationClassDescriptor::Title.BitNumber;
      local_608 = FFieldNotificationClassDescriptor::Title.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_608);
      local_5c0 = FFieldNotificationClassDescriptor::Explanation.BitNumber;
      local_5c8 = FFieldNotificationClassDescriptor::Explanation.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_5c8);
      local_5f0 = FFieldNotificationClassDescriptor::AchievementDefineCount.BitNumber;
      local_5f8 = FFieldNotificationClassDescriptor::AchievementDefineCount.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_5f8);
      local_5e0 = FFieldNotificationClassDescriptor::AchievementItemRewardEventField.BitNumber;
      local_5e8 = FFieldNotificationClassDescriptor::AchievementItemRewardEventField.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_5e8);
      local_5d0 = FFieldNotificationClassDescriptor::IsClaimAble.BitNumber;
      local_5d8 = FFieldNotificationClassDescriptor::IsClaimAble.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_5d8);
    }
    else {
      pUVar15 = UDS_LogManager::GetInst();
      if (pUVar15 != (UDS_LogManager *)0x0) {
        pUVar15 = UDS_LogManager::GetInst();
        local_168._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_168,"UDS_VM_AchievementData::OnSetViewModel",0x26,Yes);
        UDS_LogManager::PrintLog
                  (pUVar15,1,Warning,local_168.Ptr,0x71,
                   L"rewardItemIDList and rewardItemQuantityList size is not same.");
        if ((void *)local_168._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_168._padding_);
        }
      }
LAB_14bdd2c4d:
      if (local_6c0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6c0.Data);
      }
      if (local_6b0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6b0.Data);
      }
    }
LAB_14bdd302b:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_668.SharedReferenceCount.ReferenceController);
    pTVar25 = (local_6a0->SharedReferenceCount).ReferenceController;
  }
  else {
    pUVar15 = UDS_LogManager::GetInst();
    if (pUVar15 != (UDS_LogManager *)0x0) {
      pUVar15 = UDS_LogManager::GetInst();
      local_288._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_288,"UDS_VM_AchievementData::OnSetViewModel",0x26,Yes);
      UDS_LogManager::PrintLog
                (pUVar15,1,Warning,local_288.Ptr,0x4d,
                 L"rewardMoneyTypeList and rewardMoneyCountList size is not same.");
      if ((void *)local_288._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_288._padding_);
      }
    }
    if (local_6d0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6d0.Data);
    }
    if (local_6e0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6e0.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_668.SharedReferenceCount.ReferenceController);
    pTVar25 = (param_1->SharedReferenceCount).ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar25);
  return;
}

// UnbindModel @ 14bdeb7f0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_AchievementData::UnbindModel(UDS_VM_AchievementData *this)

{
  bool bVar1;
  UDS_LanguageManager *pUVar2;
  UObject *pUVar3;
  
  pUVar2 = UDS_LanguageManager::GetInst();
  if (pUVar2 != (UDS_LanguageManager *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnLanguageChanged,this
              );
  }
  bVar1 = TWeakObjectPtr<UDS_AchievementData,FWeakObjectPtr>::UEOpEquals
                    (&this->AchievementData,(void *)0x0);
  if (!bVar1) {
    pUVar3 = FWeakObjectPtr::Get(&(this->AchievementData).WeakPtr);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar3 + 1),(UObject *)this)
    ;
  }
  return;
}

// UpdateData @ 14bdefde0

void __thiscall
UDS_VM_AchievementData::UpdateData(UDS_VM_AchievementData *this,UDS_DataBase *param_1)

{
  bool bVar1;
  UDS_AchievementData *this_00;
  FDS_AchievementBaseTableRow *pFVar2;
  UObject *pUVar3;
  
  bVar1 = TWeakObjectPtr<UDS_AchievementData,FWeakObjectPtr>::UEOpEquals
                    (&this->AchievementData,(void *)0x0);
  if (!bVar1) {
    this_00 = (UDS_AchievementData *)FWeakObjectPtr::Get(&(this->AchievementData).WeakPtr);
    pFVar2 = UDS_AchievementData::GetAchievementBaseTableRow(this_00);
    if ((pFVar2 != (FDS_AchievementBaseTableRow *)0x0) && (pFVar2->ID == this->TableID)) {
      pUVar3 = FWeakObjectPtr::Get(&(this->AchievementData).WeakPtr);
      this->AchievementCount = *(int *)&pUVar3[2].field_0xc - this->DifferenceQuantity;
      return;
    }
  }
  this->AchievementCount = 0;
  return;
}

