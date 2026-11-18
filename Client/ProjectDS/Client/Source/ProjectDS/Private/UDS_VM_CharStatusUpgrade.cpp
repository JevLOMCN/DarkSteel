// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 17

// StaticClass @ 14b6064b0

UClass * __cdecl UDS_VM_CharStatusUpgrade::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_CharStatusUpgrade.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_CharStatusUpgrade",
               &Z_Registration_Info_UClass_UDS_VM_CharStatusUpgrade.InnerSingleton,
               StaticRegisterNativesUDS_VM_CharStatusUpgrade,200,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_CharStatusUpgrade>,
               InternalVTableHelperCtorCaller<UDS_VM_CharStatusUpgrade>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_CharStatusUpgrade.InnerSingleton;
}

// UDS_VM_CharStatusUpgrade @ 14b60a7c0

UDS_VM_CharStatusUpgrade * __thiscall
UDS_VM_CharStatusUpgrade::UDS_VM_CharStatusUpgrade
          (UDS_VM_CharStatusUpgrade *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_CharStatusUpgrade__6B_;
  (this->VM_Status_CombatPower).field0_0x0.DebugPtr = (UDS_VM_W_StatusUpgradeInfo *)0x0;
  (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField).UserObjectList.ArrayMax = 0;
  this->CharEntityID = 0;
  this->PreviewLevel = 0;
  return this;
}

// UDS_VM_CharStatusUpgrade @ 14b60a830

UDS_VM_CharStatusUpgrade * __thiscall
UDS_VM_CharStatusUpgrade::UDS_VM_CharStatusUpgrade
          (UDS_VM_CharStatusUpgrade *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_CharStatusUpgrade__6B_;
  (this->VM_Status_CombatPower).field0_0x0.DebugPtr = (UDS_VM_W_StatusUpgradeInfo *)0x0;
  (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField).UserObjectList.ArrayMax = 0;
  this->CharEntityID = 0;
  this->PreviewLevel = 0;
  return this;
}

// ~UDS_VM_CharStatusUpgrade @ 14b60bf80

void __thiscall UDS_VM_CharStatusUpgrade::~UDS_VM_CharStatusUpgrade(UDS_VM_CharStatusUpgrade *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_CharStatusUpgrade__6B_;
  pFVar1 = (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b60da50

IClassDescriptor * __thiscall
UDS_VM_CharStatusUpgrade::GetFieldNotificationDescriptor(UDS_VM_CharStatusUpgrade *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_CharStatusUpgrade::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b60e140

UClass * __cdecl UDS_VM_CharStatusUpgrade::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_CharStatusUpgrade.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_CharStatusUpgrade",
               &Z_Registration_Info_UClass_UDS_VM_CharStatusUpgrade.InnerSingleton,
               StaticRegisterNativesUDS_VM_CharStatusUpgrade,200,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_CharStatusUpgrade>,
               InternalVTableHelperCtorCaller<UDS_VM_CharStatusUpgrade>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_CharStatusUpgrade.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_CharStatusUpgrade @ 14b60e8a0

void __cdecl UDS_VM_CharStatusUpgrade::StaticRegisterNativesUDS_VM_CharStatusUpgrade(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_CharStatusUpgrade_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnCombatPowerChanged @ 14b60fa20

void __cdecl
UDS_VM_CharStatusUpgrade::execOnCombatPowerChanged(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float *pfVar2;
  float local_res10 [2];
  
  local_res10[0] = 0.0;
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
  pfVar2 = local_res10;
  if ((float *)param_2->MostRecentPropertyAddress != (float *)0x0) {
    pfVar2 = (float *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnCombatPowerChanged((UDS_VM_CharStatusUpgrade *)param_1,pfVar2);
  return;
}

// execOnStatusChanged @ 14b60fb50

void __cdecl
UDS_VM_CharStatusUpgrade::execOnStatusChanged(UObject *param_1,FFrame *param_2,void *param_3)

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
  OnStatusChanged((UDS_VM_CharStatusUpgrade *)param_1,local_res10);
  return;
}

// BindModel @ 14bdafeb0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UDS_VM_CharStatusUpgrade::BindModel(UDS_VM_CharStatusUpgrade *this)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  char *pcVar4;
  UObject *pUVar5;
  UFunction *pUVar6;
  char *pcVar7;
  char *pcVar8;
  <lambda_1> local_res8 [8];
  <lambda_1> local_res10 [8];
  FWeakObjectPtr local_res18;
  FName local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_168;
  FWeakObjectPtr local_160;
  FName local_158;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_150;
  FWeakObjectPtr local_148;
  FName local_140;
  FWeakObjectPtr local_138;
  FName local_130;
  FName local_128;
  UDS_VM_CharStatusUpgrade *local_120;
  FName *local_118;
  FName local_110;
  UDS_VM_CharStatusUpgrade *local_108;
  FName *local_100;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_f8;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_e8;
  FDestructionSentinel local_d8;
  FDestructionSentinel local_c0;
  FReadAccessScope local_a8;
  FReadAccessScope local_90;
  FReadAccessScope local_78;
  FReadAccessScope local_60;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  UDS_CharInfoData::GetData((ulong64)&local_res18);
  bVar2 = FWeakObjectPtr::IsValid(&local_res18);
  pcVar8 = &DAT_00000002;
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&local_res18);
    pcVar4 = strstr("&UDS_VM_CharStatusUpgrade::OnCombatPowerChanged","::");
    if (pcVar4 == (char *)0x0) {
LAB_14bdaff6a:
      pcVar7 = &DAT_00000002;
LAB_14bdaff6d:
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
      if (pcVar7 == (char *)0x0) goto LAB_14bdaff6a;
      pcVar7 = pcVar7 + 2;
      if (*pcVar7 == '0') goto LAB_14bdaff6d;
    }
    ::FName::FName(&local_128,pcVar7);
    local_res20 = local_128;
    local_168.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_160.ObjectIndex = 0;
    local_160.ObjectSerialNumber = 0;
    local_158.ComparisonIndex.Value = 0;
    local_158.Number = 0;
    local_120 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_VM_CharStatusUpgrade *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&local_160,(FObjectPtr)&local_120);
    local_158 = local_res20;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_168,&local_a8)
    ;
    if ((local_158 == (FName)0x0) ||
       (pUVar5 = FWeakObjectPtr::Get(&local_160), pUVar5 == (UObject *)0x0)) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_a8);
LAB_14bdb004e:
      local_118 = &local_res20;
      `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,float_const_&>::
      __Internal_BindDynamic<UDS_VM_CharStatusUpgrade>'::__l2::<lambda_1>::operator()(&local_118);
    }
    else {
      pUVar6 = UObject::FindFunction(pUVar5,local_158);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_a8);
      if (pUVar6 == (UFunction *)0x0) goto LAB_14bdb004e;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_168,&local_78)
    ;
    local_f8.Object = local_160;
    local_f8.FunctionName = local_158;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_78);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar3[5].field_0x8,
               (FWriteAccessScope *)&local_d8);
    TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
    RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
              ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
                *)&pUVar3[5].field_0x10,local_res8,Default);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar3[5].field_0x8,
               &local_f8);
    if (local_d8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d8.Accessor,&local_d8);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_168.AccessDetector);
  }
  UDS_CharStatusData::GetData((ulong64)&local_138);
  bVar2 = FWeakObjectPtr::IsValid(&local_138);
  if (!bVar2) {
    return;
  }
  pUVar3 = FWeakObjectPtr::Get(&local_138);
  pcVar4 = strstr("&UDS_VM_CharStatusUpgrade::OnStatusChanged","::");
  if (pcVar4 == (char *)0x0) {
LAB_14bdb014a:
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
    if ((pcVar7 == (char *)0x0) || (pcVar8 = pcVar7 + 2, pcVar7[2] == '0')) goto LAB_14bdb014a;
  }
  ::FName::FName(&local_110,pcVar8);
  local_130 = local_110;
  local_150.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_148.ObjectIndex = 0;
  local_148.ObjectSerialNumber = 0;
  local_140.ComparisonIndex.Value = 0;
  local_140.Number = 0;
  local_108 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this != (UDS_VM_CharStatusUpgrade *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_148,(FObjectPtr)&local_108);
  local_140 = local_130;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_150,&local_90);
  if ((local_140 == (FName)0x0) ||
     (pUVar5 = FWeakObjectPtr::Get(&local_148), pUVar5 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_90);
  }
  else {
    pUVar6 = UObject::FindFunction(pUVar5,local_140);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_90);
    if (pUVar6 != (UFunction *)0x0) goto LAB_14bdb022d;
  }
  local_100 = &local_130;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UDS_DataBase_*>::
  __Internal_BindDynamic<UDS_VM_CharStatusUpgrade>'::__l2::<lambda_1>::operator()(&local_100);
LAB_14bdb022d:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_150,&local_60);
  local_e8.Object = local_148;
  local_e8.FunctionName = local_140;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_60);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pUVar3 + 1),
             (FWriteAccessScope *)&local_c0);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&pUVar3[1].field_0x8,local_res10,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar3 + 1),&local_e8);
  if (local_c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c0.Accessor,&local_c0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_150.AccessDetector);
  return;
}

// CreateStatusListItem @ 14bdbb1d0

TObjectPtr<UDS_UserObjectListItem> __thiscall
UDS_VM_CharStatusUpgrade::CreateStatusListItem
          (UDS_VM_CharStatusUpgrade *this,FDS_StatusTableRow *param_1,bool param_2,int param_3,
          int param_4)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TObjectPtr<UDS_UserObjectListItem> TVar5;
  UDS_UserObjectListItem *pUVar6;
  atomic<int> *paVar7;
  undefined7 in_register_00000081;
  longlong lVar8;
  int in_stack_00000030;
  TSharedPtr<FDS_ViewModelContext_StatusUpgradeInfo,1> local_28;
  
  lVar8 = CONCAT71(in_register_00000081,param_2);
  MakeContext<FDS_ViewModelContext_StatusUpgradeInfo>(&local_28);
  if (local_28.Object == (FDS_ViewModelContext_StatusUpgradeInfo *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar5.field0_0x0 = (TObjectPtr<UDS_UserObjectListItem>_u_0)(*pcVar2)();
      return (TObjectPtr<UDS_UserObjectListItem>)TVar5.field0_0x0;
    }
  }
  *(undefined4 *)&(local_28.Object)->_padding_ = 0x1b9;
  (local_28.Object)->StatusIconID = *(int *)(lVar8 + 0x38);
  (local_28.Object)->StatusNameID = *(long64 *)(lVar8 + 0x20);
  (local_28.Object)->IsUpagade = SUB41(param_3,0);
  (local_28.Object)->BeforeStatusValue = param_4;
  (local_28.Object)->AfterStatusValue = in_stack_00000030;
  (local_28.Object)->FormatType = *(EDS_InfoViewValueFormat *)(lVar8 + 0xb0);
  pUVar6 = NewObject<UDS_UserObjectListItem>((UObject *)this);
  param_1->_padding_ = (longlong)pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 != (UDS_UserObjectListItem *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  lVar8 = param_1->_padding_;
  if (local_28.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    paVar7 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar7 = &(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
    LOCK();
    *paVar7 = (atomic<int>)((int)*paVar7 + 1);
    UNLOCK();
  }
  iVar4 = *(int *)(lVar8 + 0xa0);
  if (iVar4 == *(int *)(lVar8 + 0xa4)) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)(lVar8 + 0x98),(int *)(lVar8 + 0xa4));
  }
  lVar1 = *(longlong *)(lVar8 + 0x98);
  *(int *)(lVar8 + 0xa0) = iVar4 + 1;
  *(FDS_ViewModelContext_StatusUpgradeInfo **)(lVar1 + (longlong)iVar4 * 0x10) = local_28.Object;
  *(TReferenceControllerBase<1> **)(lVar1 + 8 + (longlong)iVar4 * 0x10) =
       local_28.SharedReferenceCount.ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar7 = (atomic<int>)((int)*paVar7 + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return (TObjectPtr<UDS_UserObjectListItem>)(TObjectPtr<UDS_UserObjectListItem>_u_0)param_1;
}

// OnCombatPowerChanged @ 14bdcdd00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_CharStatusUpgrade::OnCombatPowerChanged(UDS_VM_CharStatusUpgrade *this,float *param_1)

{
  int iVar1;
  EDS_StatusType EVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UDS_LogManager *pUVar6;
  UObject *pUVar7;
  FDS_CharacterBaseTableRow *pFVar8;
  FDS_StatusTableRow *pFVar9;
  UDS_CharStatusData *this_00;
  UDS_CharInfoData *pUVar10;
  long64 lVar11;
  FDS_CharacterLevelTableRow *this_01;
  FDS_CharacterLevelTableRow *this_02;
  FName *pFVar12;
  uint uVar13;
  FDS_StatusTableRow *pFVar14;
  longlong lVar15;
  uint uVar16;
  wchar_t *pwVar17;
  float fVar18;
  float fVar19;
  undefined1 auStackY_588 [32];
  FWeakObjectPtr FStack_548;
  undefined1 auStack_540 [8];
  FDS_StatusTableRow *pFStack_538;
  FWeakObjectPtr FStack_530;
  undefined1 auStack_528 [16];
  undefined1 auStack_518 [16];
  FDS_CharacterLevelTableRow *pFStack_508;
  longlong lStack_500;
  FName FStack_4f8;
  int iStack_4f0;
  FName FStack_4e8;
  int iStack_4e0;
  FName FStack_4d8;
  int iStack_4d0;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_4c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_168;
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStackY_588;
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField);
  UDS_CharInfoData::GetData((ulong64)&FStack_548);
  bVar4 = FWeakObjectPtr::IsValid(&FStack_548);
  if (!bVar4) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      TStack_4c8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_4c8,"UDS_VM_CharStatusUpgrade::UpdateStatusInfo",0x2a,Yes);
      UDS_LogManager::PrintLog
                (pUVar6,1,Warning,TStack_4c8.Ptr,0x53,
                 L"charInfoData is Invalid. CharEntityID : %llu");
      if ((void *)TStack_4c8._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_4c8._padding_);
      }
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<52843877450645588>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_CharStatusUpgrade.cpp"
                       ,0x54,"false");
    if (!bVar4) {
      return;
    }
code_r0x00014bdf5aca:
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  UDS_CharStatusData::GetData((ulong64)&FStack_530);
  bVar4 = FWeakObjectPtr::IsValid(&FStack_530);
  if (!bVar4) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      TStack_3a8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_3a8,"UDS_VM_CharStatusUpgrade::UpdateStatusInfo",0x2a,Yes);
      UDS_LogManager::PrintLog
                (pUVar6,1,Warning,TStack_3a8.Ptr,0x5b,
                 L"charStatusData is Invalid. CharEntityID : %llu");
      if ((void *)TStack_3a8._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_3a8._padding_);
      }
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<52843877450645596>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_CharStatusUpgrade.cpp"
                       ,0x5c,"false");
    if (!bVar4) {
      return;
    }
    goto code_r0x00014bdf5aca;
  }
  if (this->PreviewLevel == 0) {
    pUVar7 = FWeakObjectPtr::Get(&FStack_548);
    UpdateCombatPowerStatus(this,false,0,(int)*(float *)&pUVar7[0xd].field_0x20);
    pUVar7 = FWeakObjectPtr::Get(&FStack_548);
    pFVar8 = FDS_CharacterBaseTableRow::Get((longlong)*(int *)&pUVar7[8].field_0x8,true);
    if (pFVar8 != (FDS_CharacterBaseTableRow *)0x0) {
      pFVar14 = (FDS_StatusTableRow *)(pFVar8->SummaryStatus).AllocatorInstance.Data;
      iVar1 = (pFVar8->SummaryStatus).ArrayNum;
      pFStack_538 = (FDS_StatusTableRow *)((longlong)&pFVar14->_padding_ + (longlong)iVar1 * 4);
      while( true ) {
        pFVar9 = pFStack_538;
        if ((pFVar8->SummaryStatus).ArrayNum != iVar1) {
          `TCheckedPointerIterator<enum_EDS_StatusType_const_,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(auStack_540);
        }
        if (pFVar14 == pFVar9) break;
        EVar2 = (EDS_StatusType)pFVar14->_padding_;
        pFVar9 = FDS_StatusTableRow::GetRef((longlong)(int)EVar2,true);
        bVar4 = FDS_StatusTableRow::IsValid(pFVar9);
        if (bVar4) {
          this_00 = (UDS_CharStatusData *)FWeakObjectPtr::Get(&FStack_530);
          UDS_CharStatusData::GetMaxStatus(this_00,EVar2);
          CreateStatusListItem(this,(FDS_StatusTableRow *)auStack_528,SUB81(pFVar9,0),0,0);
          auStack_528._8_8_ = auStack_528._0_8_;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             ((UObject *)auStack_528._0_8_ != (UObject *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)auStack_528._0_8_);
          }
          FDS_EntryBindingEventField::Add
                    (&this->EntryBindingEventField,
                     (TObjectPtr<UDS_UserObjectListItem>)((longlong)auStack_528 + 8));
        }
        pFVar14 = (FDS_StatusTableRow *)((longlong)&pFVar14->_padding_ + 4);
      }
    }
  }
  else {
    pUVar7 = FWeakObjectPtr::Get(&FStack_548);
    pFVar8 = FDS_CharacterBaseTableRow::Get((longlong)*(int *)&pUVar7[8].field_0x8,true);
    if (pFVar8 != (FDS_CharacterBaseTableRow *)0x0) {
      pUVar10 = (UDS_CharInfoData *)FWeakObjectPtr::Get(&FStack_548);
      pUVar7 = FWeakObjectPtr::Get(&FStack_548);
      lVar11 = UDS_CharInfoData::GetLevelTableRowID(pUVar10,*(int *)&pUVar7[8].field_0xc);
      this_01 = FDS_CharacterLevelTableRow::GetRef((longlong)(int)lVar11,true);
      bVar4 = FDS_CharacterLevelTableRow::IsValid(this_01);
      if (!bVar4) {
        pUVar6 = UDS_LogManager::GetInst();
        if (pUVar6 != (UDS_LogManager *)0x0) {
          pUVar6 = UDS_LogManager::GetInst();
          TStack_288._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&TStack_288,"UDS_VM_CharStatusUpgrade::UpdateStatusInfo",0x2a,Yes);
          UDS_LogManager::PrintLog
                    (pUVar6,1,Warning,TStack_288.Ptr,0x7c,L"charCurrentLevelTableRow is Invalid.");
          if ((void *)TStack_288._padding_ != (void *)0x0) {
            FMemory::Free((void *)TStack_288._padding_);
          }
        }
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<52843877450645629>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_CharStatusUpgrade.cpp"
                           ,0x7d,"false");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar12 = &FStack_4f8;
        FStack_4f8 = FFieldNotificationClassDescriptor::EntryBindingEventField.FieldName;
        iStack_4f0 = FFieldNotificationClassDescriptor::EntryBindingEventField.BitNumber;
        goto LAB_14bdf6031;
      }
      pUVar10 = (UDS_CharInfoData *)FWeakObjectPtr::Get(&FStack_548);
      lVar11 = UDS_CharInfoData::GetLevelTableRowID(pUVar10,this->PreviewLevel);
      this_02 = FDS_CharacterLevelTableRow::GetRef((longlong)(int)lVar11,true);
      pFStack_508 = this_02;
      bVar4 = FDS_CharacterLevelTableRow::IsValid(this_02);
      if (!bVar4) {
        pUVar6 = UDS_LogManager::GetInst();
        if (pUVar6 != (UDS_LogManager *)0x0) {
          pUVar6 = UDS_LogManager::GetInst();
          TStack_168._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&TStack_168,"UDS_VM_CharStatusUpgrade::UpdateStatusInfo",0x2a,Yes);
          UDS_LogManager::PrintLog
                    (pUVar6,1,Warning,TStack_168.Ptr,0x86,L"charTargetLevelTableRow is Invalid.");
          if ((void *)TStack_168._padding_ != (void *)0x0) {
            FMemory::Free((void *)TStack_168._padding_);
          }
        }
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<52843877450645639>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_CharStatusUpgrade.cpp"
                           ,0x87,"false");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar12 = &FStack_4e8;
        FStack_4e8 = FFieldNotificationClassDescriptor::EntryBindingEventField.FieldName;
        iStack_4e0 = FFieldNotificationClassDescriptor::EntryBindingEventField.BitNumber;
        goto LAB_14bdf6031;
      }
      pUVar7 = FWeakObjectPtr::Get(&FStack_548);
      iVar1 = *(int *)&pUVar7[8].field_0xc;
      pUVar7 = FWeakObjectPtr::Get(&FStack_548);
      fVar18 = FDS_CharacterService::CalcCharCombatPower(*(int *)&pUVar7[8].field_0x8,iVar1);
      iVar1 = this->PreviewLevel;
      pUVar7 = FWeakObjectPtr::Get(&FStack_548);
      fVar19 = FDS_CharacterService::CalcCharCombatPower(*(int *)&pUVar7[8].field_0x8,iVar1);
      pwVar17 = (wchar_t *)(ulonglong)(uint)(int)fVar19;
      UpdateCombatPowerStatus(this,true,(int)fVar18,(int)fVar19);
      lStack_500 = (longlong)(this_01->StatusType).ArrayNum;
      uVar16 = 0;
      if (0 < lStack_500) {
        lVar15 = 0;
        do {
          uVar13 = ~uVar16 >> 0x1f;
          uVar5 = 0;
          if ((int)uVar16 < (this_01->StatusType).ArrayNum) {
            uVar5 = uVar13;
          }
          if (uVar5 == 0) {
            pwVar17 = L"Array index out of bounds: %lld into an array of size %lld";
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          pFStack_538 = FDS_StatusTableRow::GetRef
                                  ((longlong)
                                   *(int *)((this_01->StatusType).AllocatorInstance.Data +
                                           lVar15 * 4),true);
          bVar4 = FDS_StatusTableRow::IsValid(pFStack_538);
          if (bVar4) {
            uVar5 = 0;
            if ((int)uVar16 < (this_02->StatusValue).ArrayNum) {
              uVar5 = uVar13;
            }
            if (uVar5 == 0) {
              pwVar17 = L"Array index out of bounds: %lld into an array of size %lld";
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar4) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            uVar5 = 0;
            if ((int)uVar16 < (this_01->StatusValue).ArrayNum) {
              uVar5 = uVar13;
            }
            if (uVar5 == 0) {
              pwVar17 = L"Array index out of bounds: %lld into an array of size %lld";
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar4) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            pwVar17 = (wchar_t *)CONCAT71((int7)((ulonglong)pwVar17 >> 8),1);
            CreateStatusListItem
                      (this,(FDS_StatusTableRow *)auStack_518,SUB81(pFStack_538,0),(int)pwVar17,
                       *(int *)((this_01->StatusValue).AllocatorInstance.Data + lVar15 * 4));
            auStack_518._8_8_ = auStack_518._0_8_;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               ((UObject *)auStack_518._0_8_ != (UObject *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)auStack_518._0_8_);
            }
            FDS_EntryBindingEventField::Add
                      (&this->EntryBindingEventField,
                       (TObjectPtr<UDS_UserObjectListItem>)((longlong)auStack_518 + 8));
            this_02 = pFStack_508;
          }
          uVar16 = uVar16 + 1;
          lVar15 = lVar15 + 1;
        } while (lVar15 < lStack_500);
      }
    }
  }
  pFVar12 = &FStack_4d8;
  FStack_4d8 = FFieldNotificationClassDescriptor::EntryBindingEventField.FieldName;
  iStack_4d0 = FFieldNotificationClassDescriptor::EntryBindingEventField.BitNumber;
LAB_14bdf6031:
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,pFVar12);
  return;
}

// OnSetViewModel @ 14bdd4cb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_CharStatusUpgrade::OnSetViewModel
          (UDS_VM_CharStatusUpgrade *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_188 [32];
  TSharedPtr<FDS_ViewModelContext_CharStatusUpgrade,1> local_158;
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
  SafeCast<FDS_ViewModelContext_CharStatusUpgrade>(&local_158,&local_148);
  if (local_158.Object == (FDS_ViewModelContext_CharStatusUpgrade *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_CharStatusUpgrade::OnSetViewModel",0x28,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_138.Ptr,0x1f,L"commonTemplateContext is Invalid.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<52843877450645536>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_CharStatusUpgrade.cpp"
                       ,0x20,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if (local_158.Object == (FDS_ViewModelContext_CharStatusUpgrade *)0x0) {
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
    this->CharEntityID = (local_158.Object)->CharEntityID;
    this->PreviewLevel = (local_158.Object)->PreviewLevel;
    UpdateStatusInfo(this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_158.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnStatusChanged @ 14bdde420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_CharStatusUpgrade::OnStatusChanged(UDS_VM_CharStatusUpgrade *this,UDS_DataBase *param_1)

{
  int iVar1;
  EDS_StatusType EVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UDS_LogManager *pUVar6;
  UObject *pUVar7;
  FDS_CharacterBaseTableRow *pFVar8;
  FDS_StatusTableRow *pFVar9;
  UDS_CharStatusData *this_00;
  UDS_CharInfoData *pUVar10;
  long64 lVar11;
  FDS_CharacterLevelTableRow *this_01;
  FDS_CharacterLevelTableRow *this_02;
  FName *pFVar12;
  uint uVar13;
  FDS_StatusTableRow *pFVar14;
  longlong lVar15;
  uint uVar16;
  wchar_t *pwVar17;
  float fVar18;
  float fVar19;
  undefined1 auStackY_588 [32];
  FWeakObjectPtr FStack_548;
  undefined1 auStack_540 [8];
  FDS_StatusTableRow *pFStack_538;
  FWeakObjectPtr FStack_530;
  undefined1 auStack_528 [16];
  undefined1 auStack_518 [16];
  FDS_CharacterLevelTableRow *pFStack_508;
  longlong lStack_500;
  FName FStack_4f8;
  int iStack_4f0;
  FName FStack_4e8;
  int iStack_4e0;
  FName FStack_4d8;
  int iStack_4d0;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_4c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_168;
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStackY_588;
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField);
  UDS_CharInfoData::GetData((ulong64)&FStack_548);
  bVar4 = FWeakObjectPtr::IsValid(&FStack_548);
  if (!bVar4) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      TStack_4c8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_4c8,"UDS_VM_CharStatusUpgrade::UpdateStatusInfo",0x2a,Yes);
      UDS_LogManager::PrintLog
                (pUVar6,1,Warning,TStack_4c8.Ptr,0x53,
                 L"charInfoData is Invalid. CharEntityID : %llu");
      if ((void *)TStack_4c8._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_4c8._padding_);
      }
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<52843877450645588>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_CharStatusUpgrade.cpp"
                       ,0x54,"false");
    if (!bVar4) {
      return;
    }
code_r0x00014bdf5aca:
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  UDS_CharStatusData::GetData((ulong64)&FStack_530);
  bVar4 = FWeakObjectPtr::IsValid(&FStack_530);
  if (!bVar4) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      TStack_3a8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_3a8,"UDS_VM_CharStatusUpgrade::UpdateStatusInfo",0x2a,Yes);
      UDS_LogManager::PrintLog
                (pUVar6,1,Warning,TStack_3a8.Ptr,0x5b,
                 L"charStatusData is Invalid. CharEntityID : %llu");
      if ((void *)TStack_3a8._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_3a8._padding_);
      }
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<52843877450645596>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_CharStatusUpgrade.cpp"
                       ,0x5c,"false");
    if (!bVar4) {
      return;
    }
    goto code_r0x00014bdf5aca;
  }
  if (this->PreviewLevel == 0) {
    pUVar7 = FWeakObjectPtr::Get(&FStack_548);
    UpdateCombatPowerStatus(this,false,0,(int)*(float *)&pUVar7[0xd].field_0x20);
    pUVar7 = FWeakObjectPtr::Get(&FStack_548);
    pFVar8 = FDS_CharacterBaseTableRow::Get((longlong)*(int *)&pUVar7[8].field_0x8,true);
    if (pFVar8 != (FDS_CharacterBaseTableRow *)0x0) {
      pFVar14 = (FDS_StatusTableRow *)(pFVar8->SummaryStatus).AllocatorInstance.Data;
      iVar1 = (pFVar8->SummaryStatus).ArrayNum;
      pFStack_538 = (FDS_StatusTableRow *)((longlong)&pFVar14->_padding_ + (longlong)iVar1 * 4);
      while( true ) {
        pFVar9 = pFStack_538;
        if ((pFVar8->SummaryStatus).ArrayNum != iVar1) {
          `TCheckedPointerIterator<enum_EDS_StatusType_const_,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(auStack_540);
        }
        if (pFVar14 == pFVar9) break;
        EVar2 = (EDS_StatusType)pFVar14->_padding_;
        pFVar9 = FDS_StatusTableRow::GetRef((longlong)(int)EVar2,true);
        bVar4 = FDS_StatusTableRow::IsValid(pFVar9);
        if (bVar4) {
          this_00 = (UDS_CharStatusData *)FWeakObjectPtr::Get(&FStack_530);
          UDS_CharStatusData::GetMaxStatus(this_00,EVar2);
          CreateStatusListItem(this,(FDS_StatusTableRow *)auStack_528,SUB81(pFVar9,0),0,0);
          auStack_528._8_8_ = auStack_528._0_8_;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             ((UObject *)auStack_528._0_8_ != (UObject *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)auStack_528._0_8_);
          }
          FDS_EntryBindingEventField::Add
                    (&this->EntryBindingEventField,
                     (TObjectPtr<UDS_UserObjectListItem>)((longlong)auStack_528 + 8));
        }
        pFVar14 = (FDS_StatusTableRow *)((longlong)&pFVar14->_padding_ + 4);
      }
    }
  }
  else {
    pUVar7 = FWeakObjectPtr::Get(&FStack_548);
    pFVar8 = FDS_CharacterBaseTableRow::Get((longlong)*(int *)&pUVar7[8].field_0x8,true);
    if (pFVar8 != (FDS_CharacterBaseTableRow *)0x0) {
      pUVar10 = (UDS_CharInfoData *)FWeakObjectPtr::Get(&FStack_548);
      pUVar7 = FWeakObjectPtr::Get(&FStack_548);
      lVar11 = UDS_CharInfoData::GetLevelTableRowID(pUVar10,*(int *)&pUVar7[8].field_0xc);
      this_01 = FDS_CharacterLevelTableRow::GetRef((longlong)(int)lVar11,true);
      bVar4 = FDS_CharacterLevelTableRow::IsValid(this_01);
      if (!bVar4) {
        pUVar6 = UDS_LogManager::GetInst();
        if (pUVar6 != (UDS_LogManager *)0x0) {
          pUVar6 = UDS_LogManager::GetInst();
          TStack_288._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&TStack_288,"UDS_VM_CharStatusUpgrade::UpdateStatusInfo",0x2a,Yes);
          UDS_LogManager::PrintLog
                    (pUVar6,1,Warning,TStack_288.Ptr,0x7c,L"charCurrentLevelTableRow is Invalid.");
          if ((void *)TStack_288._padding_ != (void *)0x0) {
            FMemory::Free((void *)TStack_288._padding_);
          }
        }
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<52843877450645629>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_CharStatusUpgrade.cpp"
                           ,0x7d,"false");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar12 = &FStack_4f8;
        FStack_4f8 = FFieldNotificationClassDescriptor::EntryBindingEventField.FieldName;
        iStack_4f0 = FFieldNotificationClassDescriptor::EntryBindingEventField.BitNumber;
        goto LAB_14bdf6031;
      }
      pUVar10 = (UDS_CharInfoData *)FWeakObjectPtr::Get(&FStack_548);
      lVar11 = UDS_CharInfoData::GetLevelTableRowID(pUVar10,this->PreviewLevel);
      this_02 = FDS_CharacterLevelTableRow::GetRef((longlong)(int)lVar11,true);
      pFStack_508 = this_02;
      bVar4 = FDS_CharacterLevelTableRow::IsValid(this_02);
      if (!bVar4) {
        pUVar6 = UDS_LogManager::GetInst();
        if (pUVar6 != (UDS_LogManager *)0x0) {
          pUVar6 = UDS_LogManager::GetInst();
          TStack_168._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&TStack_168,"UDS_VM_CharStatusUpgrade::UpdateStatusInfo",0x2a,Yes);
          UDS_LogManager::PrintLog
                    (pUVar6,1,Warning,TStack_168.Ptr,0x86,L"charTargetLevelTableRow is Invalid.");
          if ((void *)TStack_168._padding_ != (void *)0x0) {
            FMemory::Free((void *)TStack_168._padding_);
          }
        }
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<52843877450645639>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_CharStatusUpgrade.cpp"
                           ,0x87,"false");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar12 = &FStack_4e8;
        FStack_4e8 = FFieldNotificationClassDescriptor::EntryBindingEventField.FieldName;
        iStack_4e0 = FFieldNotificationClassDescriptor::EntryBindingEventField.BitNumber;
        goto LAB_14bdf6031;
      }
      pUVar7 = FWeakObjectPtr::Get(&FStack_548);
      iVar1 = *(int *)&pUVar7[8].field_0xc;
      pUVar7 = FWeakObjectPtr::Get(&FStack_548);
      fVar18 = FDS_CharacterService::CalcCharCombatPower(*(int *)&pUVar7[8].field_0x8,iVar1);
      iVar1 = this->PreviewLevel;
      pUVar7 = FWeakObjectPtr::Get(&FStack_548);
      fVar19 = FDS_CharacterService::CalcCharCombatPower(*(int *)&pUVar7[8].field_0x8,iVar1);
      pwVar17 = (wchar_t *)(ulonglong)(uint)(int)fVar19;
      UpdateCombatPowerStatus(this,true,(int)fVar18,(int)fVar19);
      lStack_500 = (longlong)(this_01->StatusType).ArrayNum;
      uVar16 = 0;
      if (0 < lStack_500) {
        lVar15 = 0;
        do {
          uVar13 = ~uVar16 >> 0x1f;
          uVar5 = 0;
          if ((int)uVar16 < (this_01->StatusType).ArrayNum) {
            uVar5 = uVar13;
          }
          if (uVar5 == 0) {
            pwVar17 = L"Array index out of bounds: %lld into an array of size %lld";
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          pFStack_538 = FDS_StatusTableRow::GetRef
                                  ((longlong)
                                   *(int *)((this_01->StatusType).AllocatorInstance.Data +
                                           lVar15 * 4),true);
          bVar4 = FDS_StatusTableRow::IsValid(pFStack_538);
          if (bVar4) {
            uVar5 = 0;
            if ((int)uVar16 < (this_02->StatusValue).ArrayNum) {
              uVar5 = uVar13;
            }
            if (uVar5 == 0) {
              pwVar17 = L"Array index out of bounds: %lld into an array of size %lld";
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar4) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            uVar5 = 0;
            if ((int)uVar16 < (this_01->StatusValue).ArrayNum) {
              uVar5 = uVar13;
            }
            if (uVar5 == 0) {
              pwVar17 = L"Array index out of bounds: %lld into an array of size %lld";
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar4) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            pwVar17 = (wchar_t *)CONCAT71((int7)((ulonglong)pwVar17 >> 8),1);
            CreateStatusListItem
                      (this,(FDS_StatusTableRow *)auStack_518,SUB81(pFStack_538,0),(int)pwVar17,
                       *(int *)((this_01->StatusValue).AllocatorInstance.Data + lVar15 * 4));
            auStack_518._8_8_ = auStack_518._0_8_;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               ((UObject *)auStack_518._0_8_ != (UObject *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)auStack_518._0_8_);
            }
            FDS_EntryBindingEventField::Add
                      (&this->EntryBindingEventField,
                       (TObjectPtr<UDS_UserObjectListItem>)((longlong)auStack_518 + 8));
            this_02 = pFStack_508;
          }
          uVar16 = uVar16 + 1;
          lVar15 = lVar15 + 1;
        } while (lVar15 < lStack_500);
      }
    }
  }
  pFVar12 = &FStack_4d8;
  FStack_4d8 = FFieldNotificationClassDescriptor::EntryBindingEventField.FieldName;
  iStack_4d0 = FFieldNotificationClassDescriptor::EntryBindingEventField.BitNumber;
LAB_14bdf6031:
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,pFVar12);
  return;
}

// UnbindModel @ 14bdebe90

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_CharStatusUpgrade::UnbindModel(UDS_VM_CharStatusUpgrade *this)

{
  bool bVar1;
  UObject *pUVar2;
  UDS_LanguageManager *pUVar3;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  
  UDS_CharInfoData::GetData((ulong64)&local_res8);
  bVar1 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&local_res8);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar2[5].field_0x8,
               (UObject *)this);
  }
  UDS_CharStatusData::GetData((ulong64)&local_res10);
  bVar1 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&local_res10);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar2 + 1),(UObject *)this)
    ;
  }
  pUVar3 = UDS_LanguageManager::GetInst();
  if (pUVar3 != (UDS_LanguageManager *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3->OnLanguageChanged,this
              );
  }
  return;
}

// UpdateCombatPowerStatus @ 14bdefb40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_CharStatusUpgrade::UpdateCombatPowerStatus
          (UDS_VM_CharStatusUpgrade *this,bool param_1,int param_2,int param_3)

{
  code *pcVar1;
  FDS_ViewModelContext_StatusUpgradeInfo *pFVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
  FDS_CharacterBaseTableRow *pFVar6;
  FDS_CommonContentsInfoTableRow *this_00;
  UDS_VM_W_StatusUpgradeInfo *pUVar7;
  undefined1 auStackY_1c8 [32];
  FWeakObjectPtr local_188 [2];
  FName local_178;
  int local_170;
  TSharedPtr<FDS_ViewModelContext_StatusUpgradeInfo,1> local_168;
  TSharedPtr<FDS_ViewModelContext,1> local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  UDS_CharInfoData::GetData((ulong64)local_188);
  bVar3 = FWeakObjectPtr::IsValid(local_188);
  if (bVar3) {
    pUVar5 = FWeakObjectPtr::Get(local_188);
    pFVar6 = FDS_CharacterBaseTableRow::Get((longlong)*(int *)&pUVar5[8].field_0x8,true);
    if (pFVar6 != (FDS_CharacterBaseTableRow *)0x0) {
      this_00 = FDS_CommonContentsInfoTableRow::GetRef(4,true);
      bVar3 = FDS_CommonContentsInfoTableRow::IsValid(this_00);
      if (bVar3) {
        if ((this->VM_Status_CombatPower).field0_0x0.DebugPtr == (UDS_VM_W_StatusUpgradeInfo *)0x0)
        {
          pUVar7 = UDS_ViewModelBase::CreateViewModel<UDS_VM_W_StatusUpgradeInfo>((UObject *)this);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar7 != (UDS_VM_W_StatusUpgradeInfo *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar7);
          }
          (this->VM_Status_CombatPower).field0_0x0.DebugPtr = pUVar7;
          if (pUVar7 == (UDS_VM_W_StatusUpgradeInfo *)0x0) {
            return;
          }
        }
        MakeContext<FDS_ViewModelContext_StatusUpgradeInfo>(&local_168);
        pFVar2 = local_168.Object;
        if ((local_168.Object == (FDS_ViewModelContext_StatusUpgradeInfo *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        *(undefined4 *)&pFVar2->_padding_ = 0x1b9;
        pFVar2->StatusIconID = this_00->ID_Icon;
        pFVar2->StatusNameID = (this_00->ID_Name).ID;
        pFVar2->IsUpagade = param_1;
        pFVar2->BeforeStatusValue = param_2;
        pFVar2->AfterStatusValue = param_3;
        pFVar2->FormatType = Integer;
        pUVar7 = (this->VM_Status_CombatPower).field0_0x0.DebugPtr;
        local_158.Object = (FDS_ViewModelContext *)local_168.Object;
        local_158.SharedReferenceCount.ReferenceController =
             local_168.SharedReferenceCount.ReferenceController;
        if (local_168.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar7,&local_158);
        local_170 = FFieldNotificationClassDescriptor::VM_Status_CombatPower.BitNumber;
        local_178 = FFieldNotificationClassDescriptor::VM_Status_CombatPower.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_178);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_168.SharedReferenceCount.ReferenceController);
      }
    }
  }
  else {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_CharStatusUpgrade::UpdateCombatPowerStatus",0x31,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_148.Ptr,0xa6,L"charInfoData is Invalid. CharEntityID : %llu"
                );
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<52843877450645671>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_CharStatusUpgrade.cpp"
                       ,0xa7,"false");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// UpdateStatusInfo @ 14bdf58e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_CharStatusUpgrade::UpdateStatusInfo(UDS_VM_CharStatusUpgrade *this)

{
  int iVar1;
  EDS_StatusType EVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UDS_LogManager *pUVar6;
  UObject *pUVar7;
  FDS_CharacterBaseTableRow *pFVar8;
  FDS_StatusTableRow *pFVar9;
  UDS_CharStatusData *this_00;
  UDS_CharInfoData *pUVar10;
  long64 lVar11;
  FDS_CharacterLevelTableRow *this_01;
  FDS_CharacterLevelTableRow *this_02;
  FName *pFVar12;
  uint uVar13;
  FDS_StatusTableRow *pFVar14;
  longlong lVar15;
  uint uVar16;
  wchar_t *pwVar17;
  float fVar18;
  float fVar19;
  undefined1 auStackY_588 [32];
  FWeakObjectPtr local_548;
  undefined1 local_540 [8];
  FDS_StatusTableRow *local_538;
  FWeakObjectPtr local_530;
  undefined1 local_528 [16];
  undefined1 local_518 [16];
  FDS_CharacterLevelTableRow *local_508;
  longlong local_500;
  FName local_4f8;
  int local_4f0;
  FName local_4e8;
  int local_4e0;
  FName local_4d8;
  int local_4d0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_588;
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField);
  UDS_CharInfoData::GetData((ulong64)&local_548);
  bVar4 = FWeakObjectPtr::IsValid(&local_548);
  if (!bVar4) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_4c8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_4c8,"UDS_VM_CharStatusUpgrade::UpdateStatusInfo",0x2a,Yes);
      UDS_LogManager::PrintLog
                (pUVar6,1,Warning,local_4c8.Ptr,0x53,L"charInfoData is Invalid. CharEntityID : %llu"
                );
      if ((void *)local_4c8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_4c8._padding_);
      }
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<52843877450645588>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_CharStatusUpgrade.cpp"
                       ,0x54,"false");
    if (!bVar4) {
      return;
    }
code_r0x00014bdf5aca:
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  UDS_CharStatusData::GetData((ulong64)&local_530);
  bVar4 = FWeakObjectPtr::IsValid(&local_530);
  if (!bVar4) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_3a8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_3a8,"UDS_VM_CharStatusUpgrade::UpdateStatusInfo",0x2a,Yes);
      UDS_LogManager::PrintLog
                (pUVar6,1,Warning,local_3a8.Ptr,0x5b,
                 L"charStatusData is Invalid. CharEntityID : %llu");
      if ((void *)local_3a8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_3a8._padding_);
      }
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<52843877450645596>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_CharStatusUpgrade.cpp"
                       ,0x5c,"false");
    if (!bVar4) {
      return;
    }
    goto code_r0x00014bdf5aca;
  }
  if (this->PreviewLevel == 0) {
    pUVar7 = FWeakObjectPtr::Get(&local_548);
    UpdateCombatPowerStatus(this,false,0,(int)*(float *)&pUVar7[0xd].field_0x20);
    pUVar7 = FWeakObjectPtr::Get(&local_548);
    pFVar8 = FDS_CharacterBaseTableRow::Get((longlong)*(int *)&pUVar7[8].field_0x8,true);
    if (pFVar8 != (FDS_CharacterBaseTableRow *)0x0) {
      pFVar14 = (FDS_StatusTableRow *)(pFVar8->SummaryStatus).AllocatorInstance.Data;
      iVar1 = (pFVar8->SummaryStatus).ArrayNum;
      local_538 = (FDS_StatusTableRow *)((longlong)&pFVar14->_padding_ + (longlong)iVar1 * 4);
      while( true ) {
        pFVar9 = local_538;
        if ((pFVar8->SummaryStatus).ArrayNum != iVar1) {
          `TCheckedPointerIterator<enum_EDS_StatusType_const_,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_540);
        }
        if (pFVar14 == pFVar9) break;
        EVar2 = (EDS_StatusType)pFVar14->_padding_;
        pFVar9 = FDS_StatusTableRow::GetRef((longlong)(int)EVar2,true);
        bVar4 = FDS_StatusTableRow::IsValid(pFVar9);
        if (bVar4) {
          this_00 = (UDS_CharStatusData *)FWeakObjectPtr::Get(&local_530);
          UDS_CharStatusData::GetMaxStatus(this_00,EVar2);
          CreateStatusListItem(this,(FDS_StatusTableRow *)local_528,SUB81(pFVar9,0),0,0);
          local_528._8_8_ = local_528._0_8_;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             ((UObject *)local_528._0_8_ != (UObject *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_528._0_8_);
          }
          FDS_EntryBindingEventField::Add
                    (&this->EntryBindingEventField,
                     (TObjectPtr<UDS_UserObjectListItem>)((longlong)local_528 + 8));
        }
        pFVar14 = (FDS_StatusTableRow *)((longlong)&pFVar14->_padding_ + 4);
      }
    }
  }
  else {
    pUVar7 = FWeakObjectPtr::Get(&local_548);
    pFVar8 = FDS_CharacterBaseTableRow::Get((longlong)*(int *)&pUVar7[8].field_0x8,true);
    if (pFVar8 != (FDS_CharacterBaseTableRow *)0x0) {
      pUVar10 = (UDS_CharInfoData *)FWeakObjectPtr::Get(&local_548);
      pUVar7 = FWeakObjectPtr::Get(&local_548);
      lVar11 = UDS_CharInfoData::GetLevelTableRowID(pUVar10,*(int *)&pUVar7[8].field_0xc);
      this_01 = FDS_CharacterLevelTableRow::GetRef((longlong)(int)lVar11,true);
      bVar4 = FDS_CharacterLevelTableRow::IsValid(this_01);
      if (!bVar4) {
        pUVar6 = UDS_LogManager::GetInst();
        if (pUVar6 != (UDS_LogManager *)0x0) {
          pUVar6 = UDS_LogManager::GetInst();
          local_288._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_288,"UDS_VM_CharStatusUpgrade::UpdateStatusInfo",0x2a,Yes);
          UDS_LogManager::PrintLog
                    (pUVar6,1,Warning,local_288.Ptr,0x7c,L"charCurrentLevelTableRow is Invalid.");
          if ((void *)local_288._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_288._padding_);
          }
        }
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<52843877450645629>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_CharStatusUpgrade.cpp"
                           ,0x7d,"false");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar12 = &local_4f8;
        local_4f8 = FFieldNotificationClassDescriptor::EntryBindingEventField.FieldName;
        local_4f0 = FFieldNotificationClassDescriptor::EntryBindingEventField.BitNumber;
        goto LAB_14bdf6031;
      }
      pUVar10 = (UDS_CharInfoData *)FWeakObjectPtr::Get(&local_548);
      lVar11 = UDS_CharInfoData::GetLevelTableRowID(pUVar10,this->PreviewLevel);
      this_02 = FDS_CharacterLevelTableRow::GetRef((longlong)(int)lVar11,true);
      local_508 = this_02;
      bVar4 = FDS_CharacterLevelTableRow::IsValid(this_02);
      if (!bVar4) {
        pUVar6 = UDS_LogManager::GetInst();
        if (pUVar6 != (UDS_LogManager *)0x0) {
          pUVar6 = UDS_LogManager::GetInst();
          local_168._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_168,"UDS_VM_CharStatusUpgrade::UpdateStatusInfo",0x2a,Yes);
          UDS_LogManager::PrintLog
                    (pUVar6,1,Warning,local_168.Ptr,0x86,L"charTargetLevelTableRow is Invalid.");
          if ((void *)local_168._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_168._padding_);
          }
        }
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<52843877450645639>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_CharStatusUpgrade.cpp"
                           ,0x87,"false");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar12 = &local_4e8;
        local_4e8 = FFieldNotificationClassDescriptor::EntryBindingEventField.FieldName;
        local_4e0 = FFieldNotificationClassDescriptor::EntryBindingEventField.BitNumber;
        goto LAB_14bdf6031;
      }
      pUVar7 = FWeakObjectPtr::Get(&local_548);
      iVar1 = *(int *)&pUVar7[8].field_0xc;
      pUVar7 = FWeakObjectPtr::Get(&local_548);
      fVar18 = FDS_CharacterService::CalcCharCombatPower(*(int *)&pUVar7[8].field_0x8,iVar1);
      iVar1 = this->PreviewLevel;
      pUVar7 = FWeakObjectPtr::Get(&local_548);
      fVar19 = FDS_CharacterService::CalcCharCombatPower(*(int *)&pUVar7[8].field_0x8,iVar1);
      pwVar17 = (wchar_t *)(ulonglong)(uint)(int)fVar19;
      UpdateCombatPowerStatus(this,true,(int)fVar18,(int)fVar19);
      local_500 = (longlong)(this_01->StatusType).ArrayNum;
      uVar16 = 0;
      if (0 < local_500) {
        lVar15 = 0;
        do {
          uVar13 = ~uVar16 >> 0x1f;
          uVar5 = 0;
          if ((int)uVar16 < (this_01->StatusType).ArrayNum) {
            uVar5 = uVar13;
          }
          if (uVar5 == 0) {
            pwVar17 = L"Array index out of bounds: %lld into an array of size %lld";
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          local_538 = FDS_StatusTableRow::GetRef
                                ((longlong)
                                 *(int *)((this_01->StatusType).AllocatorInstance.Data + lVar15 * 4)
                                 ,true);
          bVar4 = FDS_StatusTableRow::IsValid(local_538);
          if (bVar4) {
            uVar5 = 0;
            if ((int)uVar16 < (this_02->StatusValue).ArrayNum) {
              uVar5 = uVar13;
            }
            if (uVar5 == 0) {
              pwVar17 = L"Array index out of bounds: %lld into an array of size %lld";
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar4) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            uVar5 = 0;
            if ((int)uVar16 < (this_01->StatusValue).ArrayNum) {
              uVar5 = uVar13;
            }
            if (uVar5 == 0) {
              pwVar17 = L"Array index out of bounds: %lld into an array of size %lld";
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar4) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            pwVar17 = (wchar_t *)CONCAT71((int7)((ulonglong)pwVar17 >> 8),1);
            CreateStatusListItem
                      (this,(FDS_StatusTableRow *)local_518,SUB81(local_538,0),(int)pwVar17,
                       *(int *)((this_01->StatusValue).AllocatorInstance.Data + lVar15 * 4));
            local_518._8_8_ = local_518._0_8_;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               ((UObject *)local_518._0_8_ != (UObject *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)local_518._0_8_);
            }
            FDS_EntryBindingEventField::Add
                      (&this->EntryBindingEventField,
                       (TObjectPtr<UDS_UserObjectListItem>)((longlong)local_518 + 8));
            this_02 = local_508;
          }
          uVar16 = uVar16 + 1;
          lVar15 = lVar15 + 1;
        } while (lVar15 < local_500);
      }
    }
  }
  pFVar12 = &local_4d8;
  local_4d8 = FFieldNotificationClassDescriptor::EntryBindingEventField.FieldName;
  local_4d0 = FFieldNotificationClassDescriptor::EntryBindingEventField.BitNumber;
LAB_14bdf6031:
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,pFVar12);
  return;
}

