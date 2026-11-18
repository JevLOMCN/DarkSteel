// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 22

// SetDungeonId_WrapperImpl @ 14b636b20

void __cdecl UDS_VM_DungeonRecordData::SetDungeonId_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined4 *)((longlong)param_1 + 0xa0) = *(undefined4 *)param_2;
  iStack_10 = FFieldNotificationClassDescriptor::DungeonId.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::DungeonId.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetEnterCount_WrapperImpl @ 14b636b30

void __cdecl UDS_VM_DungeonRecordData::SetEnterCount_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined4 *)((longlong)param_1 + 0xa4) = *(undefined4 *)param_2;
  iStack_10 = FFieldNotificationClassDescriptor::EnterCount.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::EnterCount.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetRewardCount_WrapperImpl @ 14b636b40

void __cdecl UDS_VM_DungeonRecordData::SetRewardCount_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined4 *)((longlong)param_1 + 0xa8) = *(undefined4 *)param_2;
  iStack_10 = FFieldNotificationClassDescriptor::RewardCount.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::RewardCount.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetFirstClearReward_WrapperImpl @ 14b636b50

void __cdecl UDS_VM_DungeonRecordData::SetFirstClearReward_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined1 *)((longlong)param_1 + 0xac) = *(undefined1 *)param_2;
  iStack_10 = FFieldNotificationClassDescriptor::FirstClearReward.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::FirstClearReward.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// StaticClass @ 14b636b60

UClass * __cdecl UDS_VM_DungeonRecordData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_DungeonRecordData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_DungeonRecordData",
               &Z_Registration_Info_UClass_UDS_VM_DungeonRecordData.InnerSingleton,
               StaticRegisterNativesUDS_VM_DungeonRecordData,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_DungeonRecordData>,
               InternalVTableHelperCtorCaller<UDS_VM_DungeonRecordData>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_DungeonRecordData.InnerSingleton;
}

// UDS_VM_DungeonRecordData @ 14b63a930

UDS_VM_DungeonRecordData * __thiscall
UDS_VM_DungeonRecordData::UDS_VM_DungeonRecordData
          (UDS_VM_DungeonRecordData *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_DungeonRecordData__6B_;
  return this;
}

// UDS_VM_DungeonRecordData @ 14b63a970

UDS_VM_DungeonRecordData * __thiscall
UDS_VM_DungeonRecordData::UDS_VM_DungeonRecordData
          (UDS_VM_DungeonRecordData *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_DungeonRecordData__6B_;
  return this;
}

// ~UDS_VM_DungeonRecordData @ 14b63caf0

void __thiscall UDS_VM_DungeonRecordData::~UDS_VM_DungeonRecordData(UDS_VM_DungeonRecordData *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_DungeonRecordData__6B_;
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b63f4c0

IClassDescriptor * __thiscall
UDS_VM_DungeonRecordData::GetFieldNotificationDescriptor(UDS_VM_DungeonRecordData *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_DungeonRecordData::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b63ff10

UClass * __cdecl UDS_VM_DungeonRecordData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_DungeonRecordData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_DungeonRecordData",
               &Z_Registration_Info_UClass_UDS_VM_DungeonRecordData.InnerSingleton,
               StaticRegisterNativesUDS_VM_DungeonRecordData,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_DungeonRecordData>,
               InternalVTableHelperCtorCaller<UDS_VM_DungeonRecordData>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_DungeonRecordData.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_DungeonRecordData @ 14b640ad0

void __cdecl UDS_VM_DungeonRecordData::StaticRegisterNativesUDS_VM_DungeonRecordData(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_DungeonRecordData_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execDungeonRecordDataDirty @ 14b641b40

void __cdecl
UDS_VM_DungeonRecordData::execDungeonRecordDataDirty(UObject *param_1,FFrame *param_2,void *param_3)

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
  DungeonRecordDataDirty((UDS_VM_DungeonRecordData *)param_1,local_res10);
  return;
}

// BindModel @ 14be74b70

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UDS_VM_DungeonRecordData::BindModel(UDS_VM_DungeonRecordData *this)

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
  UDS_VM_DungeonRecordData *local_a0;
  FName *local_98;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_90;
  FDestructionSentinel local_80;
  FReadAccessScope local_68;
  FReadAccessScope local_50;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
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
  pcVar4 = strstr("&UDS_VM_DungeonRecordData::DungeonRecordDataDirty","::");
  if (pcVar4 == (char *)0x0) {
LAB_14be74c3c:
    pcVar6 = &DAT_00000002;
LAB_14be74c41:
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
    if (pcVar6 == (char *)0x0) goto LAB_14be74c3c;
    pcVar6 = pcVar6 + 2;
    if (*pcVar6 == '0') goto LAB_14be74c41;
  }
  ::FName::FName(&local_res20,pcVar6);
  local_b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_b0.ObjectIndex = 0;
  local_b0.ObjectSerialNumber = 0;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  local_res18 = local_res20;
  local_a0 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this != (UDS_VM_DungeonRecordData *)0x0)) {
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
    if (pUVar5 != (UFunction *)0x0) goto LAB_14be74d2a;
  }
  local_98 = &local_res18;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UDS_DataBase_*>::
  __Internal_BindDynamic<UDS_VM_DungeonRecordData>'::__l2::<lambda_1>::operator()(&local_98);
LAB_14be74d2a:
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

// DungeonRecordDataDirty @ 14be81fb0

void __thiscall
UDS_VM_DungeonRecordData::DungeonRecordDataDirty
          (UDS_VM_DungeonRecordData *this,UDS_DataBase *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  FWeakObjectPtr local_res10;
  UDS_DataBase *local_res18 [2];
  FName local_18;
  int local_10;
  
  if (param_1 != (UDS_DataBase *)0x0) {
    pUVar3 = Z_Construct_UClass_UDS_DungeonRecordData_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) goto LAB_14be81fea;
  }
  param_1 = (UDS_DataBase *)0x0;
LAB_14be81fea:
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
    this->DungeonId = *(int *)&pUVar4[2].field_0x8;
    local_10 = FFieldNotificationClassDescriptor::DungeonId.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::DungeonId.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    pUVar4 = FWeakObjectPtr::Get(&local_res10);
    this->EnterCount = *(int *)&pUVar4[2].field_0xc;
    local_10 = FFieldNotificationClassDescriptor::EnterCount.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::EnterCount.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    pUVar4 = FWeakObjectPtr::Get(&local_res10);
    this->RewardCount = *(int *)&pUVar4[2].field_0x10;
    local_10 = FFieldNotificationClassDescriptor::RewardCount.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::RewardCount.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    pUVar4 = FWeakObjectPtr::Get(&local_res10);
    this->FirstClearReward = (bool)pUVar4[2].field_0x14;
    local_10 = FFieldNotificationClassDescriptor::FirstClearReward.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::FirstClearReward.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnSetViewModel @ 14be9d5b0

void __thiscall
UDS_VM_DungeonRecordData::OnSetViewModel
          (UDS_VM_DungeonRecordData *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FDS_DungeonBaseTableRow *pFVar4;
  int iVar5;
  TSharedPtr<FDS_ViewModelContext_Dungeon,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_18.Object = param_1->Object;
  iVar5 = 0;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_Dungeon>(&local_28,&local_18);
  if (local_28.Object != (FDS_ViewModelContext_Dungeon *)0x0) {
    if (local_28.Object == (FDS_ViewModelContext_Dungeon *)0x0) {
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
    iVar5 = (int)(local_28.Object)->DungeonId;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  pFVar4 = FDS_DungeonBaseTableRow::GetRef((longlong)iVar5,true);
  if (pFVar4->DungeonType == Raid) {
    UpdateDungeonRecordData(this,iVar5);
    (**(code **)(this->_padding_ + 0x2f0))(this);
  }
  else {
    UpdateDungeonRecordData(this,0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Reset @ 14bead030

void __thiscall UDS_VM_DungeonRecordData::Reset(UDS_VM_DungeonRecordData *this)

{
  FName local_18;
  int local_10;
  
  this->DungeonId = 0;
  local_10 = FFieldNotificationClassDescriptor::DungeonId.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::DungeonId.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  this->EnterCount = 0;
  local_10 = FFieldNotificationClassDescriptor::EnterCount.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::EnterCount.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  this->RewardCount = 0;
  local_10 = FFieldNotificationClassDescriptor::RewardCount.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::RewardCount.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  this->FirstClearReward = false;
  local_10 = FFieldNotificationClassDescriptor::FirstClearReward.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::FirstClearReward.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetDungeonId @ 14beae550

void __thiscall UDS_VM_DungeonRecordData::SetDungeonId(UDS_VM_DungeonRecordData *this,int *param_1)

{
  FName local_18;
  int local_10;
  
  this->DungeonId = *param_1;
  local_10 = FFieldNotificationClassDescriptor::DungeonId.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::DungeonId.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetEnterCount @ 14beaf010

void __thiscall UDS_VM_DungeonRecordData::SetEnterCount(UDS_VM_DungeonRecordData *this,int *param_1)

{
  FName local_18;
  int local_10;
  
  this->EnterCount = *param_1;
  local_10 = FFieldNotificationClassDescriptor::EnterCount.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::EnterCount.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetFirstClearReward @ 14beaf480

void __thiscall
UDS_VM_DungeonRecordData::SetFirstClearReward(UDS_VM_DungeonRecordData *this,bool *param_1)

{
  FName local_18;
  int local_10;
  
  this->FirstClearReward = *param_1;
  local_10 = FFieldNotificationClassDescriptor::FirstClearReward.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::FirstClearReward.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetRewardCount @ 14beb3f90

void __thiscall
UDS_VM_DungeonRecordData::SetRewardCount(UDS_VM_DungeonRecordData *this,int *param_1)

{
  FName local_18;
  int local_10;
  
  this->RewardCount = *param_1;
  local_10 = FFieldNotificationClassDescriptor::RewardCount.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::RewardCount.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// UnbindModel @ 14bebbb50

void __thiscall UDS_VM_DungeonRecordData::UnbindModel(UDS_VM_DungeonRecordData *this)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8 [4];
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
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

// UpdateDungeonRecordData @ 14bebe150

void __thiscall
UDS_VM_DungeonRecordData::UpdateDungeonRecordData(UDS_VM_DungeonRecordData *this,int param_1)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8;
  FName local_18;
  int local_10;
  
  UDS_DungeonRecordData::GetData
            ((ulong64)&local_res8,UDS_PlayerData::MainPlayerEntityID,SUB41(this->DungeonId,0));
  bVar1 = TWeakObjectPtr<UDS_DungeonRecordData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DungeonRecordData,FWeakObjectPtr> *)&local_res8,(void *)0x0
                    );
  if (bVar1) {
    this->DungeonId = 0;
    local_10 = FFieldNotificationClassDescriptor::DungeonId.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::DungeonId.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    this->EnterCount = 0;
    local_10 = FFieldNotificationClassDescriptor::EnterCount.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::EnterCount.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    this->RewardCount = 0;
    local_10 = FFieldNotificationClassDescriptor::RewardCount.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::RewardCount.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    this->FirstClearReward = false;
  }
  else {
    pUVar2 = FWeakObjectPtr::Get(&local_res8);
    this->DungeonId = *(int *)&pUVar2[2].field_0x8;
    local_10 = FFieldNotificationClassDescriptor::DungeonId.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::DungeonId.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    pUVar2 = FWeakObjectPtr::Get(&local_res8);
    this->EnterCount = *(int *)&pUVar2[2].field_0xc;
    local_10 = FFieldNotificationClassDescriptor::EnterCount.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::EnterCount.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    pUVar2 = FWeakObjectPtr::Get(&local_res8);
    this->RewardCount = *(int *)&pUVar2[2].field_0x10;
    local_10 = FFieldNotificationClassDescriptor::RewardCount.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::RewardCount.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    pUVar2 = FWeakObjectPtr::Get(&local_res8);
    this->FirstClearReward = (bool)pUVar2[2].field_0x14;
  }
  local_10 = FFieldNotificationClassDescriptor::FirstClearReward.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::FirstClearReward.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

