// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 22

// SetEnterCount_WrapperImpl @ 14b644ab0

void __cdecl UDS_VM_Dungeon_Record::SetEnterCount_WrapperImpl(void *param_1,void *param_2)

{
  SetEnterCount(param_1,*(int *)param_2);
  return;
}

// SetRewardCount_WrapperImpl @ 14b644ac0

void __cdecl UDS_VM_Dungeon_Record::SetRewardCount_WrapperImpl(void *param_1,void *param_2)

{
  SetRewardCount(param_1,*(int *)param_2);
  return;
}

// SetLimitedReceiptVisibility_WrapperImpl @ 14b644ad0

void __cdecl
UDS_VM_Dungeon_Record::SetLimitedReceiptVisibility_WrapperImpl(void *param_1,void *param_2)

{
  SetLimitedReceiptVisibility(param_1,*(ESlateVisibility *)param_2);
  return;
}

// SetEntryRestrictionVisibility_WrapperImpl @ 14b644ae0

void __cdecl
UDS_VM_Dungeon_Record::SetEntryRestrictionVisibility_WrapperImpl(void *param_1,void *param_2)

{
  SetEntryRestrictionVisibility(param_1,*(ESlateVisibility *)param_2);
  return;
}

// StaticClass @ 14b644af0

UClass * __cdecl UDS_VM_Dungeon_Record::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Dungeon_Record.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Dungeon_Record",
               &Z_Registration_Info_UClass_UDS_VM_Dungeon_Record.InnerSingleton,
               StaticRegisterNativesUDS_VM_Dungeon_Record,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Dungeon_Record>,
               InternalVTableHelperCtorCaller<UDS_VM_Dungeon_Record>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Dungeon_Record.InnerSingleton;
}

// UDS_VM_Dungeon_Record @ 14b6475c0

UDS_VM_Dungeon_Record * __thiscall
UDS_VM_Dungeon_Record::UDS_VM_Dungeon_Record(UDS_VM_Dungeon_Record *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Dungeon_Record__6B_;
  (this->EntryRestriction_ViewModel).field0_0x0.DebugPtr = (UDS_VM_W_Common_Condition *)0x0;
  (this->LimitedReceipt_ViewModel).field0_0x0.DebugPtr = (UDS_VM_W_Common_Condition *)0x0;
  return this;
}

// UDS_VM_Dungeon_Record @ 14b647610

UDS_VM_Dungeon_Record * __thiscall
UDS_VM_Dungeon_Record::UDS_VM_Dungeon_Record
          (UDS_VM_Dungeon_Record *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Dungeon_Record__6B_;
  (this->EntryRestriction_ViewModel).field0_0x0.DebugPtr = (UDS_VM_W_Common_Condition *)0x0;
  (this->LimitedReceipt_ViewModel).field0_0x0.DebugPtr = (UDS_VM_W_Common_Condition *)0x0;
  return this;
}

// ~UDS_VM_Dungeon_Record @ 14b6490d0

void __thiscall UDS_VM_Dungeon_Record::~UDS_VM_Dungeon_Record(UDS_VM_Dungeon_Record *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Dungeon_Record__6B_;
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b64aec0

IClassDescriptor * __thiscall
UDS_VM_Dungeon_Record::GetFieldNotificationDescriptor(UDS_VM_Dungeon_Record *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Dungeon_Record::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b64b5d0

UClass * __cdecl UDS_VM_Dungeon_Record::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Dungeon_Record.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Dungeon_Record",
               &Z_Registration_Info_UClass_UDS_VM_Dungeon_Record.InnerSingleton,
               StaticRegisterNativesUDS_VM_Dungeon_Record,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Dungeon_Record>,
               InternalVTableHelperCtorCaller<UDS_VM_Dungeon_Record>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Dungeon_Record.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Dungeon_Record @ 14b64be70

void __cdecl UDS_VM_Dungeon_Record::StaticRegisterNativesUDS_VM_Dungeon_Record(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_Dungeon_Record_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnChangedDungeonRecordData @ 14b64d2a0

void __cdecl
UDS_VM_Dungeon_Record::execOnChangedDungeonRecordData
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
  OnChangedDungeonRecordData((UDS_VM_Dungeon_Record *)param_1,local_res10);
  return;
}

// BindModel @ 14be750f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UDS_VM_Dungeon_Record::BindModel(UDS_VM_Dungeon_Record *this)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  char *pcVar4;
  UObject *this_00;
  UFunction *pUVar5;
  char *pcVar6;
  <lambda_1> local_res8 [8];
  FWeakObjectPtr local_res10;
  FName local_res18;
  FName local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b8;
  FWeakObjectPtr local_b0;
  FName local_a8;
  UDS_VM_Dungeon_Record *local_a0;
  FName *local_98;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_90;
  FDestructionSentinel local_80;
  FReadAccessScope local_68;
  FReadAccessScope local_50;
  
  UDS_DungeonRecordData::GetData
            ((ulong64)&local_res10,UDS_PlayerData::MainPlayerEntityID,SUB41(this->DungeonId,0));
  bVar2 = TWeakObjectPtr<UDS_DungeonRecordData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DungeonRecordData,FWeakObjectPtr> *)&local_res10,
                     (void *)0x0);
  if (bVar2) {
    return;
  }
  pUVar3 = FWeakObjectPtr::Get(&local_res10);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar3 + 1),(UObject *)this);
  pUVar3 = FWeakObjectPtr::Get(&local_res10);
  pcVar4 = strstr("&UDS_VM_Dungeon_Record::OnChangedDungeonRecordData","::");
  if (pcVar4 == (char *)0x0) {
LAB_14be751bb:
    pcVar6 = &DAT_00000002;
LAB_14be751c0:
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
    if (pcVar6 == (char *)0x0) goto LAB_14be751bb;
    pcVar6 = pcVar6 + 2;
    if (*pcVar6 == '0') goto LAB_14be751c0;
  }
  ::FName::FName(&local_res20,pcVar6);
  local_b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_b0.ObjectIndex = 0;
  local_b0.ObjectSerialNumber = 0;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  local_res18 = local_res20;
  local_a0 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_VM_Dungeon_Record *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_b0,(FObjectPtr)&local_a0);
  local_a8 = local_res18;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_b8,&local_68);
  if ((local_a8 == (FName)0x0) ||
     (this_00 = FWeakObjectPtr::Get(&local_b0), this_00 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_68);
  }
  else {
    pUVar5 = UObject::FindFunction(this_00,local_a8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_68);
    if (pUVar5 != (UFunction *)0x0) goto LAB_14be752a9;
  }
  local_98 = &local_res18;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UDS_DataBase_*>::
  __Internal_BindDynamic<UDS_VM_Dungeon_Record>'::__l2::<lambda_1>::operator()(&local_98);
LAB_14be752a9:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_b8,&local_50);
  local_90.Object = local_b0;
  local_90.FunctionName = local_a8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_50);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pUVar3 + 1),
             (FWriteAccessScope *)&local_80);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&pUVar3[1].field_0x8,local_res8,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar3 + 1),&local_90);
  if (local_80.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b8.AccessDetector);
  return;
}

// InitViewModel @ 14be8cb10

void __thiscall UDS_VM_Dungeon_Record::InitViewModel(UDS_VM_Dungeon_Record *this)

{
  UDS_VM_W_Common_Condition *pUVar1;
  
  if ((this->LimitedReceipt_ViewModel).field0_0x0.DebugPtr == (UDS_VM_W_Common_Condition *)0x0) {
    pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_W_Common_Condition>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_VM_W_Common_Condition *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->LimitedReceipt_ViewModel).field0_0x0.DebugPtr = pUVar1;
  }
  if ((this->EntryRestriction_ViewModel).field0_0x0.DebugPtr == (UDS_VM_W_Common_Condition *)0x0) {
    pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_W_Common_Condition>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_VM_W_Common_Condition *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->EntryRestriction_ViewModel).field0_0x0.DebugPtr = pUVar1;
  }
  return;
}

// OnChangedDungeonRecordData @ 14be91120

void __thiscall
UDS_VM_Dungeon_Record::OnChangedDungeonRecordData(UDS_VM_Dungeon_Record *this,UDS_DataBase *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  FWeakObjectPtr local_res10;
  UDS_DataBase *local_res18 [2];
  
  if (param_1 != (UDS_DataBase *)0x0) {
    pUVar3 = Z_Construct_UClass_UDS_DungeonRecordData_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) goto LAB_14be9115a;
  }
  param_1 = (UDS_DataBase *)0x0;
LAB_14be9115a:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_DataBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_res18[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_DataBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_res18);
  bVar2 = TWeakObjectPtr<UDS_DungeonRecordData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DungeonRecordData,FWeakObjectPtr> *)&local_res10,
                     (void *)0x0);
  if (!bVar2) {
    pUVar4 = FWeakObjectPtr::Get(&local_res10);
    if (*(int *)&pUVar4[2].field_0x8 == this->DungeonId) {
      UpdateDungeonRecord(this,this->DungeonId);
    }
  }
  return;
}

// OnSetViewModel @ 14be9e4d0

void __thiscall
UDS_VM_Dungeon_Record::OnSetViewModel
          (UDS_VM_Dungeon_Record *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  UDS_DungeonManager *pUVar2;
  int iVar3;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  iVar3 = 0;
  pUVar2 = UDS_DungeonManager::GetInst();
  if (pUVar2 != (UDS_DungeonManager *)0x0) {
    iVar3 = pUVar2->SelectedDungeonID;
  }
  UpdateDungeonRecord(this,iVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetEnterCount @ 14beaf050

void __thiscall UDS_VM_Dungeon_Record::SetEnterCount(UDS_VM_Dungeon_Record *this,int param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::EnterCount.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::EnterCount.FieldName;
  if (this->EnterCount != param_1) {
    this->EnterCount = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetEntryRestrictionVisibility @ 14beaf160

void __thiscall
UDS_VM_Dungeon_Record::SetEntryRestrictionVisibility
          (UDS_VM_Dungeon_Record *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::EntryRestrictionVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::EntryRestrictionVisibility.FieldName;
  if (this->EntryRestrictionVisibility != param_1) {
    this->EntryRestrictionVisibility = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetLimitedReceiptVisibility @ 14beb2460

void __thiscall
UDS_VM_Dungeon_Record::SetLimitedReceiptVisibility
          (UDS_VM_Dungeon_Record *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::LimitedReceiptVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::LimitedReceiptVisibility.FieldName;
  if (this->LimitedReceiptVisibility != param_1) {
    this->LimitedReceiptVisibility = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetRewardCount @ 14beb3fd0

void __thiscall UDS_VM_Dungeon_Record::SetRewardCount(UDS_VM_Dungeon_Record *this,int param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::RewardCount.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::RewardCount.FieldName;
  if (this->RewardCount != param_1) {
    this->RewardCount = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// UnbindModel @ 14bebbd30

void __thiscall UDS_VM_Dungeon_Record::UnbindModel(UDS_VM_Dungeon_Record *this)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8 [4];
  
  UDS_DungeonRecordData::GetData
            ((ulong64)local_res8,UDS_PlayerData::MainPlayerEntityID,SUB41(this->DungeonId,0));
  bVar1 = TWeakObjectPtr<UDS_DungeonRecordData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DungeonRecordData,FWeakObjectPtr> *)local_res8,(void *)0x0)
  ;
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res8);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar2 + 1),(UObject *)this)
    ;
  }
  return;
}

// UpdateDungeonRecord @ 14bebddc0

void __thiscall UDS_VM_Dungeon_Record::UpdateDungeonRecord(UDS_VM_Dungeon_Record *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  UDS_VM_W_Common_Condition *pUVar2;
  code *pcVar3;
  FName FVar4;
  int iVar5;
  FDS_DungeonTypeDataTableRow *pFVar6;
  FDS_ViewModelContext_Condition *pFVar7;
  bool bVar8;
  ESlateVisibility EVar9;
  FDS_DungeonBaseTableRow *pFVar10;
  UObject *pUVar11;
  ForAnyElementType FVar12;
  ESlateVisibility EVar13;
  int iVar14;
  int iVar15;
  FWeakObjectPtr local_res8;
  undefined1 local_res10 [8];
  FDS_DungeonTypeDataTableRow *local_res18;
  TSharedPtr<FDS_ViewModelContext_Condition,1> local_c8;
  TSharedPtr<FDS_ViewModelContext_Condition,1> local_b8;
  TArray<FDS_DungeonBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_a8;
  FName local_98;
  int local_90;
  FName local_88;
  int local_80;
  FName local_78;
  int local_70;
  FName local_68;
  int local_60;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  TSharedPtr<FDS_ViewModelContext,1> local_48;
  
  this->DungeonId = param_1;
  pFVar10 = FDS_DungeonBaseTableRow::GetRef((longlong)param_1,true);
  local_res18 = FDS_DungeonTypeDataTableRow::GetRef((ulonglong)pFVar10->DungeonType,true);
  iVar15 = 0;
  iVar14 = 0;
  FDS_DungeonBaseTableRow::GetAll(&local_a8);
  iVar5 = local_a8.ArrayNum;
  if (local_a8.ArrayNum != 0) {
    pFVar1 = local_a8.AllocatorInstance.Data + (longlong)local_a8.ArrayNum * 8;
    FVar12.Data = local_a8.AllocatorInstance.Data;
    while( true ) {
      if (local_a8.ArrayNum != iVar5) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FDS_DungeonBaseTableRow_const_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      pFVar6 = local_res18;
      if (FVar12.Data == pFVar1) break;
      if (*(EDS_DungeonType *)(*(longlong *)FVar12.Data + 0x20) == pFVar10->DungeonType) {
        UDS_DungeonRecordData::GetData
                  ((ulong64)&local_res8,UDS_PlayerData::MainPlayerEntityID,
                   SUB41(*(undefined4 *)(*(longlong *)FVar12.Data + 8),0));
        bVar8 = TWeakObjectPtr<UDS_DungeonRecordData,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_DungeonRecordData,FWeakObjectPtr> *)&local_res8,
                           (void *)0x0);
        if (!bVar8) {
          pUVar11 = FWeakObjectPtr::Get(&local_res8);
          iVar15 = iVar15 + *(int *)&pUVar11[2].field_0xc;
          pUVar11 = FWeakObjectPtr::Get(&local_res8);
          iVar14 = iVar14 + *(int *)&pUVar11[2].field_0x10;
        }
      }
      FVar12.Data = FVar12.Data + 8;
    }
    iVar15 = local_res18->EnterLimitCount - iVar15;
    iVar14 = local_res18->RewardLimitCount - iVar14;
    if ((this->EntryRestriction_ViewModel).field0_0x0.DebugPtr != (UDS_VM_W_Common_Condition *)0x0)
    {
      MakeContext<FDS_ViewModelContext_Condition>(&local_c8);
      pFVar7 = local_c8.Object;
      if (local_c8.Object != (FDS_ViewModelContext_Condition *)0x0) {
        if ((local_c8.Object == (FDS_ViewModelContext_Condition *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar7->StringUiId = 0x33451;
        pFVar7->LeftValue = iVar15;
        pFVar7->RightValue = pFVar6->EnterLimitCount;
        pUVar2 = (this->EntryRestriction_ViewModel).field0_0x0.DebugPtr;
        local_58.Object = (FDS_ViewModelContext *)local_c8.Object;
        local_58.SharedReferenceCount.ReferenceController =
             local_c8.SharedReferenceCount.ReferenceController;
        if (local_c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar2,&local_58);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_c8.SharedReferenceCount.ReferenceController);
    }
    if ((this->LimitedReceipt_ViewModel).field0_0x0.DebugPtr != (UDS_VM_W_Common_Condition *)0x0) {
      MakeContext<FDS_ViewModelContext_Condition>(&local_b8);
      pFVar7 = local_b8.Object;
      if (local_b8.Object != (FDS_ViewModelContext_Condition *)0x0) {
        if ((local_b8.Object == (FDS_ViewModelContext_Condition *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar7->StringUiId = 0x33452;
        pFVar7->LeftValue = iVar14;
        pFVar7->RightValue = pFVar6->RewardLimitCount;
        pUVar2 = (this->LimitedReceipt_ViewModel).field0_0x0.DebugPtr;
        local_48.Object = (FDS_ViewModelContext *)local_b8.Object;
        local_48.SharedReferenceCount.ReferenceController =
             local_b8.SharedReferenceCount.ReferenceController;
        if (local_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar2,&local_48);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_b8.SharedReferenceCount.ReferenceController);
    }
    iVar5 = FFieldNotificationClassDescriptor::EnterCount.BitNumber;
    FVar4 = FFieldNotificationClassDescriptor::EnterCount.FieldName;
    if (this->EnterCount != iVar15) {
      this->EnterCount = iVar15;
      local_90 = iVar5;
      local_98 = FVar4;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_98);
    }
    iVar5 = FFieldNotificationClassDescriptor::RewardCount.BitNumber;
    FVar4 = FFieldNotificationClassDescriptor::RewardCount.FieldName;
    if (this->RewardCount != iVar14) {
      this->RewardCount = iVar14;
      local_80 = iVar5;
      local_88 = FVar4;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
    }
    iVar5 = FFieldNotificationClassDescriptor::LimitedReceiptVisibility.BitNumber;
    FVar4 = FFieldNotificationClassDescriptor::LimitedReceiptVisibility.FieldName;
    EVar13 = Collapsed;
    EVar9 = Collapsed;
    if (0 < pFVar6->RewardLimitCount) {
      EVar9 = SelfHitTestInvisible;
    }
    if (this->LimitedReceiptVisibility != EVar9) {
      this->LimitedReceiptVisibility = EVar9;
      local_70 = iVar5;
      local_78 = FVar4;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
    }
    iVar5 = FFieldNotificationClassDescriptor::EntryRestrictionVisibility.BitNumber;
    FVar4 = FFieldNotificationClassDescriptor::EntryRestrictionVisibility.FieldName;
    if (0 < pFVar6->EnterLimitCount) {
      EVar13 = SelfHitTestInvisible;
    }
    if (this->EntryRestrictionVisibility != EVar13) {
      this->EntryRestrictionVisibility = EVar13;
      local_60 = iVar5;
      local_68 = FVar4;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
    }
  }
  if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  return;
}

