// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 14

// StaticClass @ 14b70c0f0

UClass * __cdecl UDS_VM_W_Account::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_Account.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_Account",
               &Z_Registration_Info_UClass_UDS_VM_W_Account.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_Account,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_VM_W_Account>,
               InternalVTableHelperCtorCaller<UDS_VM_W_Account>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_Account.InnerSingleton;
}

// UDS_VM_W_Account @ 14b710320

UDS_VM_W_Account * __thiscall
UDS_VM_W_Account::UDS_VM_W_Account(UDS_VM_W_Account *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->ActiveWidgetIndex = 1;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Account__6B_;
  (this->OnUpdateAccountListEvent).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->OnUpdateAccountListEvent).UserObjectList.ArrayNum = 0;
  (this->OnUpdateAccountListEvent).UserObjectList.ArrayMax = 0;
  return this;
}

// UDS_VM_W_Account @ 14b710380

UDS_VM_W_Account * __thiscall
UDS_VM_W_Account::UDS_VM_W_Account(UDS_VM_W_Account *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->ActiveWidgetIndex = 1;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Account__6B_;
  (this->OnUpdateAccountListEvent).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->OnUpdateAccountListEvent).UserObjectList.ArrayNum = 0;
  (this->OnUpdateAccountListEvent).UserObjectList.ArrayMax = 0;
  return this;
}

// ~UDS_VM_W_Account @ 14b712d90

void __thiscall UDS_VM_W_Account::~UDS_VM_W_Account(UDS_VM_W_Account *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Account__6B_;
  pFVar1 = (this->OnUpdateAccountListEvent).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b7167c0

IClassDescriptor * __thiscall
UDS_VM_W_Account::GetFieldNotificationDescriptor(UDS_VM_W_Account *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_Account::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b717350

UClass * __cdecl UDS_VM_W_Account::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_Account.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_Account",
               &Z_Registration_Info_UClass_UDS_VM_W_Account.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_Account,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_VM_W_Account>,
               InternalVTableHelperCtorCaller<UDS_VM_W_Account>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_Account.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_Account @ 14b7188c0

void __cdecl UDS_VM_W_Account::StaticRegisterNativesUDS_VM_W_Account(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_W_Account_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execUpdateAccountListNum @ 14b71a200

void __cdecl
UDS_VM_W_Account::execUpdateAccountListNum(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int *piVar2;
  int local_res10 [2];
  
  local_res10[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  piVar2 = local_res10;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar2 = (int *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UpdateAccountListNum((UDS_VM_W_Account *)param_1,piVar2);
  return;
}

// BindModel @ 14bf9bb80

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UDS_VM_W_Account::BindModel(UDS_VM_W_Account *this)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  char *pcVar4;
  UObject *this_00;
  UFunction *pUVar5;
  char *pcVar6;
  <lambda_1> local_res10 [8];
  FWeakObjectPtr local_res18;
  FName local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b8;
  FWeakObjectPtr local_b0;
  FName local_a8;
  FName local_a0;
  UDS_VM_W_Account *local_98;
  FName *local_90;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_88;
  FDestructionSentinel local_78;
  FReadAccessScope local_60;
  FReadAccessScope local_48;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  UDS_AccountLocalSave::GetInst();
  bVar2 = FWeakObjectPtr::IsValid(&local_res18);
  if (!bVar2) {
    return;
  }
  pUVar3 = FWeakObjectPtr::Get(&local_res18);
  pcVar4 = strstr("&UDS_VM_W_Account::UpdateAccountListNum","::");
  if (pcVar4 == (char *)0x0) {
LAB_14bf9bc2b:
    pcVar6 = &DAT_00000002;
LAB_14bf9bc30:
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
    if (pcVar6 == (char *)0x0) goto LAB_14bf9bc2b;
    pcVar6 = pcVar6 + 2;
    if (*pcVar6 == '0') goto LAB_14bf9bc30;
  }
  ::FName::FName(&local_a0,pcVar6);
  if ((this == (UDS_VM_W_Account *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x4c8,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_res20 = local_a0;
  local_b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_b0.ObjectIndex = 0;
  local_b0.ObjectSerialNumber = 0;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  if ((this == (UDS_VM_W_Account *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_98 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_VM_W_Account *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_b0,(FObjectPtr)&local_98);
  local_a8 = local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_b8,&local_60);
  if ((local_a8 == (FName)0x0) ||
     (this_00 = FWeakObjectPtr::Get(&local_b0), this_00 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_60);
  }
  else {
    pUVar5 = UObject::FindFunction(this_00,local_a8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_60);
    if (pUVar5 != (UFunction *)0x0) goto LAB_14bf9bd71;
  }
  local_90 = &local_res20;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,int_const_&>::
  __Internal_BindDynamic<UDS_VM_W_Account>'::__l2::<lambda_1>::operator()(&local_90);
LAB_14bf9bd71:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_b8,&local_48);
  local_88.Object = local_b0;
  local_88.FunctionName = local_a8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_48);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar3[2].field_0x8,
             (FWriteAccessScope *)&local_78);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&pUVar3[2].field_0x10,local_res10,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar3[2].field_0x8,&local_88)
  ;
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b8.AccessDetector);
  return;
}

// OnSetViewModel @ 14bfc32f0

void __thiscall
UDS_VM_W_Account::OnSetViewModel(UDS_VM_W_Account *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  bool bVar2;
  int iVar3;
  UDS_AccountLocalSave *this_00;
  FWeakObjectPtr local_res10 [3];
  FName local_18;
  int local_10;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  UDS_AccountLocalSave::GetInst();
  bVar2 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar2) {
    UpdateAccountList(this);
    this_00 = (UDS_AccountLocalSave *)FWeakObjectPtr::Get(local_res10);
    iVar3 = UDS_AccountLocalSave::GetAccountListNum(this_00);
    this->ActiveWidgetIndex = (uint)(iVar3 < 1);
    local_10 = FFieldNotificationClassDescriptor::ActiveWidgetIndex.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::ActiveWidgetIndex.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetActiveWidgetIndex @ 14bfd6050

void __thiscall UDS_VM_W_Account::SetActiveWidgetIndex(UDS_VM_W_Account *this,int *param_1)

{
  FName local_18;
  int local_10;
  
  this->ActiveWidgetIndex = (uint)(*param_1 < 1);
  local_10 = FFieldNotificationClassDescriptor::ActiveWidgetIndex.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ActiveWidgetIndex.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// UnbindModel @ 14bfdf300

void __thiscall UDS_VM_W_Account::UnbindModel(UDS_VM_W_Account *this)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  char *pcVar4;
  char *pcVar5;
  FWeakObjectPtr local_res10;
  FName local_res18;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  UDS_AccountLocalSave::GetInst();
  bVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (!bVar2) {
    return;
  }
  pUVar3 = FWeakObjectPtr::Get(&local_res10);
  pcVar4 = strstr("&UDS_VM_W_Account::UpdateAccountListNum","::");
  if (pcVar4 == (char *)0x0) {
LAB_14bfdf39b:
    pcVar5 = &DAT_00000002;
  }
  else {
    do {
      pcVar5 = pcVar4;
      pcVar4 = strstr(pcVar5 + 1,"::");
    } while (pcVar4 != (char *)0x0);
    if (pcVar5 == (char *)0x0) goto LAB_14bfdf39b;
    pcVar5 = pcVar5 + 2;
    if (*pcVar5 != '0') goto LAB_14bfdf3ce;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Result && Result[2] != \'0\'",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                     ,0x1da,L"\'%hs\' does not look like a member function");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_14bfdf3ce:
  ::FName::FName(&local_res18,pcVar5);
  if ((this == (UDS_VM_W_Account *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x500,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::Remove
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar3[2].field_0x8,
             (UObject *)this,local_res18);
  return;
}

// UpdateAccountList @ 14bfe0f40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_Account::UpdateAccountList(UDS_VM_W_Account *this)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  FDS_ViewModelContext_AccountInfo *pFVar5;
  FSharedReferencer<1> FVar6;
  bool bVar7;
  UDS_LogManager *pUVar8;
  UDS_AccountLocalSave *this_00;
  TMap<FDS_AccountKey,FDS_AccountInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDS_AccountKey,FDS_AccountInfo,0>_>
  *pTVar9;
  UDS_UserObjectListItem *this_01;
  FDS_ViewModelContext *pFVar10;
  FDS_ViewModelContext *pFVar11;
  UScriptStruct *pUVar12;
  UDS_ViewModelContextManager *this_02;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  FDS_ViewModelContext *pFVar16;
  uint uVar17;
  undefined1 *puVar18;
  uint *puVar19;
  TBitArray<FDefaultBitArrayAllocator> *pTVar20;
  FDS_ViewModelContext *pFVar21;
  undefined1 auStackY_4c8 [32];
  undefined1 local_498 [8];
  FWeakObjectPtr local_490;
  UDS_VM_W_Account *local_488;
  TSharedPtr<FDS_ViewModelContext_AccountInfo,1> local_478;
  TMap<FDS_AccountKey,FDS_AccountInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDS_AccountKey,FDS_AccountInfo,0>_>
  *local_468;
  uint uStack_460;
  uint uStack_45c;
  undefined1 *local_458;
  undefined4 uStack_450;
  uint uStack_44c;
  uint local_448;
  uint uStack_444;
  int iStack_440;
  undefined4 uStack_43c;
  int local_438;
  int local_434;
  TMap<FDS_AccountKey,FDS_AccountInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDS_AccountKey,FDS_AccountInfo,0>_>
  *local_430;
  UDS_UserObjectListItem *local_428;
  FDS_EntryBindingEventField *local_420;
  TBitArray<FDefaultBitArrayAllocator> *local_418;
  FName local_408;
  int local_400;
  TSharedPtr<FDS_ViewModelContext,1> local_3f8;
  TMap<FDS_AccountKey,FDS_AccountInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDS_AccountKey,FDS_AccountInfo,0>_>
  *local_3e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_3e0;
  undefined8 uStack_3c0;
  TSharedPtr<FDS_ViewModelContext,1> local_3b8;
  TSharedPtr<FDS_ViewModelContext,1> local_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_4c8;
  local_420 = &this->OnUpdateAccountListEvent;
  local_488 = this;
  FDS_EntryBindingEventField::Reset(local_420);
  UDS_AccountLocalSave::GetInst();
  bVar7 = FWeakObjectPtr::IsValid(&local_490);
  if (!bVar7) {
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 != (UDS_LogManager *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      local_398._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_398,"UDS_VM_W_Account::UpdateAccountList",0x23,Yes);
      UDS_LogManager::PrintLog(pUVar8,1,Warning,local_398.Ptr,0x37,L"AccountLocalSave is nullptr.");
      if ((void *)local_398._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_398._padding_);
      }
    }
    return;
  }
  this_00 = (UDS_AccountLocalSave *)FWeakObjectPtr::Get(&local_490);
  pTVar9 = UDS_AccountLocalSave::GetAccountList(this_00);
  uVar2 = *(uint *)&pTVar9->field_0x28;
  pFVar21 = (FDS_ViewModelContext *)0x0;
  uStack_460 = 0;
  uStack_45c = 1;
  pTVar20 = (TBitArray<FDefaultBitArrayAllocator> *)&pTVar9->field_0x10;
  uStack_44c = uStack_460;
  local_448 = uStack_460;
  if (uVar2 != 0) {
    puVar19 = *(uint **)&pTVar9->field_0x20;
    if (*(uint **)&pTVar9->field_0x20 == (uint *)0x0) {
      puVar19 = (uint *)pTVar20;
    }
    uVar17 = *puVar19;
    pFVar16 = pFVar21;
    pFVar10 = pFVar21;
    local_448 = 0;
    uStack_460 = 0;
    while (uVar17 == 0) {
      iVar14 = (int)pFVar16;
      local_448 = (int)pFVar10 + 0x20;
      pFVar10 = (FDS_ViewModelContext *)(ulonglong)local_448;
      uStack_460 = iVar14 + 1;
      pFVar16 = (FDS_ViewModelContext *)(ulonglong)uStack_460;
      uStack_44c = uVar2;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_460)
      goto LAB_14bfe10ed;
      uVar17 = puVar19[(longlong)iVar14 + 1];
    }
    uStack_45c = -uVar17 & uVar17;
    uVar1 = (ulonglong)uStack_45c * 2 + 1;
    lVar13 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_438 = (int)lVar13;
    uStack_44c = (local_448 - 1) + local_438;
    if ((int)uVar2 < (int)uStack_44c) {
      uStack_44c = uVar2;
    }
  }
LAB_14bfe10ed:
  uVar17 = *(uint *)&pTVar9->field_0x28;
  iStack_440 = *(int *)&pTVar9->field_0x8 - *(int *)&pTVar9->field_0x34;
  uVar15 = uVar17 & 0xffffffe0;
  TStack_3e0._padding_ = CONCAT44(uStack_45c,uStack_460);
  uStack_450 = 0xffffffff;
  TStack_3e0.CurrentBitIndex = uStack_44c;
  TStack_3e0.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar17 >> 5;
  TStack_3e0._28_4_ = uStack_44c;
  TStack_3e0.BaseBitIndex = local_448;
  uStack_3c0 = CONCAT44(uStack_43c,iStack_440);
  local_468 = pTVar9;
  local_458 = (undefined1 *)pTVar20;
  uStack_444 = uStack_44c;
  local_430 = pTVar9;
  local_418 = pTVar20;
  local_3e8 = pTVar9;
  TStack_3e0.Array = pTVar20;
  if ((((int)uVar17 < 0) || ((int)uVar2 < (int)uVar17)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar2 = *(uint *)&pTVar9->field_0x28;
  if (uVar17 != uVar2) {
    puVar18 = *(undefined1 **)&pTVar9->field_0x20;
    if (*(undefined1 **)&pTVar9->field_0x20 == (undefined1 *)0x0) {
      puVar18 = (undefined1 *)pTVar20;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar14 * 4);
    while (uVar17 == 0) {
      lVar13 = (longlong)iVar14;
      uVar15 = uVar15 + 0x20;
      iVar14 = iVar14 + 1;
      uVar17 = uVar2;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14bfe11ed;
      uVar17 = *(uint *)(puVar18 + lVar13 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_434 = (int)lVar13;
    uVar17 = local_434 + -1 + uVar15;
    if ((int)uVar2 < (int)uVar17) {
      uVar17 = uVar2;
    }
  }
LAB_14bfe11ed:
  do {
    pTVar9 = local_3e8;
    if (*(int *)&local_3e8->field_0x8 - *(int *)&local_3e8->field_0x34 != (int)uStack_3c0) {
      local_498[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FDS_AccountKey,FDS_AccountInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_498);
    }
    lVar13 = (longlong)TStack_3e0.CurrentBitIndex;
    if (((TStack_3e0.CurrentBitIndex == uVar17) && (TStack_3e0.Array == pTVar20)) &&
       (pTVar9 == local_430)) {
      local_400 = FFieldNotificationClassDescriptor::OnUpdateAccountListEvent.BitNumber;
      local_408 = FFieldNotificationClassDescriptor::OnUpdateAccountListEvent.FieldName;
      (**(code **)(local_488->_padding_ + 0x38))(&local_488->_padding_,&local_408);
      return;
    }
    lVar3 = *(longlong *)pTVar9;
    this_01 = NewObject<UDS_UserObjectListItem>((UObject *)local_488);
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (this_01 == (UDS_UserObjectListItem *)0x0) goto LAB_14bfe156c;
    }
    else {
      if (this_01 == (UDS_UserObjectListItem *)0x0) {
LAB_14bfe156c:
        pUVar8 = UDS_LogManager::GetInst();
        if (pUVar8 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar8 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_VM_W_Account::UpdateAccountList",0x23,Yes);
        UDS_LogManager::PrintLog(pUVar8,1,Warning,local_158.Ptr,0x41,L"listItem is nullptr.");
        if ((void *)local_158._padding_ == (void *)0x0) {
          return;
        }
        FMemory::Free((void *)local_158._padding_);
        return;
      }
      UE::GC::MarkAsReachable((UObject *)this_01);
    }
    pFVar10 = ::operator_new(0x78);
    pFVar16 = pFVar21;
    if (pFVar10 != (FDS_ViewModelContext *)0x0) {
      *(undefined8 *)&pFVar10->DerivedStaticStruct = 0;
      (pFVar10->ViewModelName).ComparisonIndex = 0;
      (pFVar10->ViewModelName).Number = 0;
      pFVar10->_padding_ = (longlong)&___7FDS_ViewModelContext_AccountInfo__6B_;
      *(undefined8 *)&pFVar10->ViewModelTemplateKey = 0;
      pFVar10[1]._padding_ = 0;
      *(undefined8 *)&pFVar10[1].DerivedStaticStruct = 0;
      pFVar10[1].ViewModelName.ComparisonIndex = 0;
      pFVar10[1].ViewModelName.Number = 0;
      *(undefined8 *)&pFVar10[1].ViewModelTemplateKey = 0;
      pFVar10[2]._padding_ = 0;
      *(undefined8 *)&pFVar10[2].DerivedStaticStruct = 0;
      pFVar10[2].ViewModelName.ComparisonIndex = 0;
      pFVar10[2].ViewModelName.Number = 0;
      *(undefined8 *)&pFVar10[2].ViewModelTemplateKey = 0;
      pFVar10[3]._padding_ = 0;
      *(undefined8 *)&pFVar10[3].DerivedStaticStruct = 0;
      pFVar10[3].ViewModelName.ComparisonIndex = 0;
      pFVar10[3].ViewModelName.Number = 0;
      ::FString::FString((FString *)(pFVar10 + 1),"");
      ::FString::FString((FString *)&pFVar10[1].ViewModelName,"");
      FText::FromString((FText *)(pFVar10 + 2),"Memo");
      ::FString::FString((FString *)&pFVar10[2].ViewModelName,"None");
      pFVar10[3]._padding_ = 0;
      *(atomic<int> *)&pFVar10[3].DerivedStaticStruct = (atomic<int>)0x0;
      *(undefined8 *)((atomic<int> *)&pFVar10[3].DerivedStaticStruct + 1) = 0xffffffffffffffff;
      pFVar10[3].ViewModelName.Number = 0;
      pFVar16 = pFVar10;
    }
    pFVar11 = ::operator_new(0x20);
    pFVar10 = pFVar21;
    if (pFVar11 != (FDS_ViewModelContext *)0x0) {
      *(atomic<int> *)&pFVar11->DerivedStaticStruct = (atomic<int>)0x1;
      *(code **)&(pFVar11->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
      pFVar11->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_AccountInfo__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      ((atomic<int> *)&pFVar11->DerivedStaticStruct)[1] = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pFVar11->ViewModelTemplateKey = pFVar16;
      pFVar10 = pFVar11;
    }
    if ((pFVar16 == (FDS_ViewModelContext *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pUVar12 = FDS_ViewModelContext_AccountInfo::StaticStruct();
    *(UScriptStruct **)&pFVar16->DerivedStaticStruct = pUVar12;
    this_02 = UDS_ViewModelContextManager::GetInst();
    if (this_02 != (UDS_ViewModelContextManager *)0x0) {
      if (pFVar10 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar10->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar10->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_3f8.Object = pFVar16;
      local_3f8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar10;
      UDS_ViewModelContextManager::RegisterContext(this_02,&local_3f8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_3f8.SharedReferenceCount.ReferenceController);
    }
    pFVar16->ViewModelTemplateKey = LocalAccountData;
    FDS_AccountInfo::operator=
              ((FDS_AccountInfo *)(pFVar16 + 1),(FDS_AccountInfo *)(lVar3 + 0x18 + lVar13 * 0x78));
    if (pFVar10 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar10->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar10->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_3b8.Object = pFVar16;
    local_3b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar10;
    UDS_UserObjectListItem::AddContext(this_01,&local_3b8);
    MakeContext<FDS_ViewModelContext_AccountInfo>(&local_478);
    pFVar5 = local_478.Object;
    if (local_478.Object == (FDS_ViewModelContext_AccountInfo *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      if (pUVar8 != (UDS_LogManager *)0x0) {
        pUVar8 = UDS_LogManager::GetInst();
        local_278._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_278,"UDS_VM_W_Account::UpdateAccountList",0x23,Yes);
        UDS_LogManager::PrintLog
                  (pUVar8,1,Warning,local_278.Ptr,0x52,L"accountlistContext.IsValid() == false");
        if ((void *)local_278._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_278._padding_);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_478.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar10);
      return;
    }
    if ((local_478.Object == (FDS_ViewModelContext_AccountInfo *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(undefined4 *)&pFVar5->_padding_ = 0x58;
    FDS_AccountInfo::operator=
              (&pFVar5->AccountInfo,(FDS_AccountInfo *)(lVar3 + 0x18 + lVar13 * 0x78));
    FVar6.ReferenceController = local_478.SharedReferenceCount.ReferenceController;
    local_3a8.Object = (FDS_ViewModelContext *)local_478.Object;
    local_3a8.SharedReferenceCount.ReferenceController =
         local_478.SharedReferenceCount.ReferenceController;
    if (local_478.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_478.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_478.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_UserObjectListItem::AddContext(this_01,&local_3a8);
    local_428 = this_01;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_01);
    }
    FDS_EntryBindingEventField::Add(local_420,(TObjectPtr<UDS_UserObjectListItem>)&local_428);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar6.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar10);
    TStack_3e0.UnvisitedBitMask = TStack_3e0.UnvisitedBitMask & ~TStack_3e0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_3e0);
    pTVar20 = local_418;
  } while( true );
}

// UpdateAccountListNum @ 14bfe1630

void __thiscall UDS_VM_W_Account::UpdateAccountListNum(UDS_VM_W_Account *this,int *param_1)

{
  FName local_18;
  int local_10;
  
  UpdateAccountList(this);
  this->ActiveWidgetIndex = (uint)(*param_1 < 1);
  local_10 = FFieldNotificationClassDescriptor::ActiveWidgetIndex.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ActiveWidgetIndex.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

