// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 21

// SetFirstRewardObtained_WrapperImpl @ 14b645140

void __cdecl UDS_VM_Dungeon_Reward::SetFirstRewardObtained_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::FirstRewardObtained.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::FirstRewardObtained.FieldName;
  if (*(char *)((longlong)param_1 + 0xb0) != *(char *)param_2) {
    *(char *)((longlong)param_1 + 0xb0) = *(char *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetCommonHelpBtn_WrapperImpl @ 14b645150

void __cdecl UDS_VM_Dungeon_Reward::SetCommonHelpBtn_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::CommonHelpBtn.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::CommonHelpBtn.FieldName;
  if (*(char *)((longlong)param_1 + 0xb1) != *(char *)param_2) {
    *(char *)((longlong)param_1 + 0xb1) = *(char *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetTitleText_WrapperImpl @ 14b645160

void __cdecl UDS_VM_Dungeon_Reward::SetTitleText_WrapperImpl(void *param_1,void *param_2)

{
  int iVar1;
  FDS_TextFormatArg *pFVar2;
  FDS_Text local_58;
  
  local_58.StringTableType = *(EDS_StringTableType *)param_2;
  local_58.StringTableID = *(long64 *)((longlong)param_2 + 8);
  local_58.StringEnumTableNameID = *(FName *)((longlong)param_2 + 0x10);
  local_58.DateTime.Ticks = *(long64 *)((longlong)param_2 + 0x18);
  local_58.TimeSpan.Ticks = *(long64 *)((longlong)param_2 + 0x20);
  local_58.TimeExpressionType = *(EDS_TimeExpression *)((longlong)param_2 + 0x28);
  local_58.IsExpression = *(bool *)((longlong)param_2 + 0x2c);
  ::FString::FString(&local_58.UniqueString,(FString *)((longlong)param_2 + 0x30));
  iVar1 = *(int *)((longlong)param_2 + 0x48);
  pFVar2 = *(FDS_TextFormatArg **)((longlong)param_2 + 0x40);
  local_58.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.FormatArgs.ArrayNum = iVar1;
  if (iVar1 == 0) {
    local_58.FormatArgs.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,iVar1,0,&local_58.FormatArgs.AllocatorInstance,iVar1,
               &local_58.FormatArgs.ArrayMax);
    ConstructItems<FDS_TextFormatArg,FDS_TextFormatArg,int>
              (local_58.FormatArgs.AllocatorInstance.Data,pFVar2,iVar1);
  }
  SetTitleText(param_1,&local_58);
  return;
}

// StaticClass @ 14b645250

UClass * __cdecl UDS_VM_Dungeon_Reward::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Dungeon_Reward.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Dungeon_Reward",
               &Z_Registration_Info_UClass_UDS_VM_Dungeon_Reward.InnerSingleton,
               StaticRegisterNativesUDS_VM_Dungeon_Reward,0x1b0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Dungeon_Reward>,
               InternalVTableHelperCtorCaller<UDS_VM_Dungeon_Reward>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Dungeon_Reward.InnerSingleton;
}

// UDS_VM_Dungeon_Reward @ 14b647660

UDS_VM_Dungeon_Reward * __thiscall
UDS_VM_Dungeon_Reward::UDS_VM_Dungeon_Reward(UDS_VM_Dungeon_Reward *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Dungeon_Reward__6B_;
  (this->RewardsEntry).UserObjectList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RewardsEntry).UserObjectList.ArrayNum = 0;
  (this->RewardsEntry).UserObjectList.ArrayMax = 0;
  (this->TitleText).StringTableType = None;
  (this->TitleText).StringTableID = 0;
  (this->TitleText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TitleText).StringEnumTableNameID.Number = 0;
  (this->TitleText).DateTime.Ticks = 0;
  (this->TitleText).TimeSpan.Ticks = 0;
  (this->TitleText).TimeExpressionType = None;
  (this->TitleText).IsExpression = false;
  (this->TitleText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TitleText).UniqueString.Data.ArrayNum = 0;
  (this->TitleText).UniqueString.Data.ArrayMax = 0;
  (this->TitleText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TitleText).FormatArgs.ArrayNum = 0;
  (this->TitleText).FormatArgs.ArrayMax = 0;
  (this->FixedText_ActionPoint).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_ActionPoint).StringEnumTableNameID.Number = 0;
  (this->FixedText_ActionPoint).DateTime.Ticks = 0;
  (this->FixedText_ActionPoint).TimeSpan.Ticks = 0;
  (this->FixedText_ActionPoint).TimeExpressionType = None;
  (this->FixedText_ActionPoint).IsExpression = false;
  (this->FixedText_ActionPoint).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_ActionPoint).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_ActionPoint).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_ActionPoint).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_ActionPoint).FormatArgs.ArrayNum = 0;
  (this->FixedText_ActionPoint).FormatArgs.ArrayMax = 0;
  (this->FixedText_NoItemRewards).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_NoItemRewards).StringEnumTableNameID.Number = 0;
  (this->FixedText_NoItemRewards).DateTime.Ticks = 0;
  (this->FixedText_NoItemRewards).TimeSpan.Ticks = 0;
  (this->FixedText_NoItemRewards).TimeExpressionType = None;
  (this->FixedText_NoItemRewards).IsExpression = false;
  (this->FixedText_NoItemRewards).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_NoItemRewards).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_NoItemRewards).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_NoItemRewards).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->FixedText_NoItemRewards).FormatArgs.ArrayNum = 0;
  (this->FixedText_NoItemRewards).FormatArgs.ArrayMax = 0;
  (this->FixedText_ActionPoint).StringTableType = StringUi;
  (this->FixedText_ActionPoint).StringTableID = 0x2b0a;
  (this->FixedText_NoItemRewards).StringTableType = StringUi;
  (this->FixedText_NoItemRewards).StringTableID = 0xeb33;
  return this;
}

// UDS_VM_Dungeon_Reward @ 14b6477a0

UDS_VM_Dungeon_Reward * __thiscall
UDS_VM_Dungeon_Reward::UDS_VM_Dungeon_Reward
          (UDS_VM_Dungeon_Reward *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Dungeon_Reward__6B_;
  (this->RewardsEntry).UserObjectList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RewardsEntry).UserObjectList.ArrayNum = 0;
  (this->RewardsEntry).UserObjectList.ArrayMax = 0;
  (this->TitleText).StringTableType = None;
  (this->TitleText).StringTableID = 0;
  (this->TitleText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TitleText).StringEnumTableNameID.Number = 0;
  (this->TitleText).DateTime.Ticks = 0;
  (this->TitleText).TimeSpan.Ticks = 0;
  (this->TitleText).TimeExpressionType = None;
  (this->TitleText).IsExpression = false;
  (this->TitleText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TitleText).UniqueString.Data.ArrayNum = 0;
  (this->TitleText).UniqueString.Data.ArrayMax = 0;
  (this->TitleText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TitleText).FormatArgs.ArrayNum = 0;
  (this->TitleText).FormatArgs.ArrayMax = 0;
  (this->FixedText_ActionPoint).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_ActionPoint).StringEnumTableNameID.Number = 0;
  (this->FixedText_ActionPoint).DateTime.Ticks = 0;
  (this->FixedText_ActionPoint).TimeSpan.Ticks = 0;
  (this->FixedText_ActionPoint).TimeExpressionType = None;
  (this->FixedText_ActionPoint).IsExpression = false;
  (this->FixedText_ActionPoint).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_ActionPoint).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_ActionPoint).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_ActionPoint).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_ActionPoint).FormatArgs.ArrayNum = 0;
  (this->FixedText_ActionPoint).FormatArgs.ArrayMax = 0;
  (this->FixedText_NoItemRewards).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_NoItemRewards).StringEnumTableNameID.Number = 0;
  (this->FixedText_NoItemRewards).DateTime.Ticks = 0;
  (this->FixedText_NoItemRewards).TimeSpan.Ticks = 0;
  (this->FixedText_NoItemRewards).TimeExpressionType = None;
  (this->FixedText_NoItemRewards).IsExpression = false;
  (this->FixedText_NoItemRewards).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_NoItemRewards).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_NoItemRewards).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_NoItemRewards).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->FixedText_NoItemRewards).FormatArgs.ArrayNum = 0;
  (this->FixedText_NoItemRewards).FormatArgs.ArrayMax = 0;
  (this->FixedText_ActionPoint).StringTableType = StringUi;
  (this->FixedText_ActionPoint).StringTableID = 0x2b0a;
  (this->FixedText_NoItemRewards).StringTableType = StringUi;
  (this->FixedText_NoItemRewards).StringTableID = 0xeb33;
  return this;
}

// ~UDS_VM_Dungeon_Reward @ 14b649100

void __thiscall UDS_VM_Dungeon_Reward::~UDS_VM_Dungeon_Reward(UDS_VM_Dungeon_Reward *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Dungeon_Reward__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_NoItemRewards).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_NoItemRewards).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_NoItemRewards).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_NoItemRewards).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_ActionPoint).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_ActionPoint).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_ActionPoint).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_ActionPoint).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->TitleText).FormatArgs.AllocatorInstance.Data,
             (this->TitleText).FormatArgs.ArrayNum);
  pFVar1 = (this->TitleText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TitleText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RewardsEntry).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b64af30

IClassDescriptor * __thiscall
UDS_VM_Dungeon_Reward::GetFieldNotificationDescriptor(UDS_VM_Dungeon_Reward *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Dungeon_Reward::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b64b690

UClass * __cdecl UDS_VM_Dungeon_Reward::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Dungeon_Reward.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Dungeon_Reward",
               &Z_Registration_Info_UClass_UDS_VM_Dungeon_Reward.InnerSingleton,
               StaticRegisterNativesUDS_VM_Dungeon_Reward,0x1b0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Dungeon_Reward>,
               InternalVTableHelperCtorCaller<UDS_VM_Dungeon_Reward>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Dungeon_Reward.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Dungeon_Reward @ 14b64beb0

void __cdecl UDS_VM_Dungeon_Reward::StaticRegisterNativesUDS_VM_Dungeon_Reward(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_Dungeon_Reward_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnChangedDungeonRecordData @ 14b64d330

void __cdecl
UDS_VM_Dungeon_Reward::execOnChangedDungeonRecordData
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
  OnChangedDungeonRecordData((UDS_VM_Dungeon_Reward *)param_1,local_res10);
  return;
}

// BindModel @ 14be75340

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UDS_VM_Dungeon_Reward::BindModel(UDS_VM_Dungeon_Reward *this)

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
  UDS_VM_Dungeon_Reward *local_a0;
  FName *local_98;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_90;
  FDestructionSentinel local_80;
  FReadAccessScope local_68;
  FReadAccessScope local_50;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  UDS_DungeonRecordData::GetData
            ((ulong64)&local_res10,UDS_PlayerData::MainPlayerEntityID,SUB41(this->DungeonID,0));
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
  pcVar4 = strstr("&UDS_VM_Dungeon_Reward::OnChangedDungeonRecordData","::");
  if (pcVar4 == (char *)0x0) {
LAB_14be7540c:
    pcVar6 = &DAT_00000002;
LAB_14be75411:
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
    if (pcVar6 == (char *)0x0) goto LAB_14be7540c;
    pcVar6 = pcVar6 + 2;
    if (*pcVar6 == '0') goto LAB_14be75411;
  }
  ::FName::FName(&local_res20,pcVar6);
  local_b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_b0.ObjectIndex = 0;
  local_b0.ObjectSerialNumber = 0;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  local_res18 = local_res20;
  local_a0 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_VM_Dungeon_Reward *)0x0)
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
    if (pUVar5 != (UFunction *)0x0) goto LAB_14be754fa;
  }
  local_98 = &local_res18;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UDS_DataBase_*>::
  __Internal_BindDynamic<UDS_VM_Dungeon_Reward>'::__l2::<lambda_1>::operator()(&local_98);
LAB_14be754fa:
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

// OnChangedDungeonRecordData @ 14be911f0

void __thiscall
UDS_VM_Dungeon_Reward::OnChangedDungeonRecordData(UDS_VM_Dungeon_Reward *this,UDS_DataBase *param_1)

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
        == &pUVar3->_padding_)) goto LAB_14be9122a;
  }
  param_1 = (UDS_DataBase *)0x0;
LAB_14be9122a:
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
    if (*(int *)&pUVar4[2].field_0x8 == this->DungeonID) {
      UpdateDungeonRewards(this);
    }
  }
  return;
}

// OnSetViewModel @ 14be9e530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Dungeon_Reward::OnSetViewModel
          (UDS_VM_Dungeon_Reward *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  int iVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_1a8 [32];
  FName local_178;
  int local_170;
  FName local_168;
  int local_160;
  TSharedPtr<FDS_ViewModelContext_DungeonReward,1> local_158;
  TSharedPtr<FDS_ViewModelContext,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
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
  SafeCast<FDS_ViewModelContext_DungeonReward>(&local_158,&local_148);
  if (local_158.Object == (FDS_ViewModelContext_DungeonReward *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_Dungeon_Reward::OnSetViewModel",0x25,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0x1e,L"dungeonContext is nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    this->DungeonID = (int)(local_158.Object)->DungeonId;
    this->bIsFirstReward = (local_158.Object)->bIsFirstReward;
    iVar3 = FFieldNotificationClassDescriptor::FirstRewardObtained.BitNumber;
    FVar2 = FFieldNotificationClassDescriptor::FirstRewardObtained.FieldName;
    if (this->FirstRewardObtained != Collapsed) {
      this->FirstRewardObtained = Collapsed;
      local_170 = iVar3;
      local_178 = FVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_178);
    }
    iVar3 = FFieldNotificationClassDescriptor::CommonHelpBtn.BitNumber;
    FVar2 = FFieldNotificationClassDescriptor::CommonHelpBtn.FieldName;
    if (this->CommonHelpBtn != Collapsed) {
      this->CommonHelpBtn = Collapsed;
      local_160 = iVar3;
      local_168 = FVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_168);
    }
    UpdateDungeonRewards(this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_158.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetCommonHelpBtn @ 14beadb10

void __thiscall
UDS_VM_Dungeon_Reward::SetCommonHelpBtn(UDS_VM_Dungeon_Reward *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::CommonHelpBtn.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::CommonHelpBtn.FieldName;
  if (this->CommonHelpBtn != *param_1) {
    this->CommonHelpBtn = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetExpectedRewards @ 14beaf260

void __thiscall UDS_VM_Dungeon_Reward::SetExpectedRewards(UDS_VM_Dungeon_Reward *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FDS_DungeonBaseTableRow *this_00;
  FDS_ItemDisplayTableRow *pFVar3;
  UDS_UserObjectListItem *this_01;
  undefined8 *puVar4;
  undefined8 in_RDX;
  TObjectPtr<UDS_UserObjectListItem>_u_0 TVar5;
  FScriptContainerElement *pFVar6;
  UDS_UserObjectListItem *local_res8;
  longlong *local_res10;
  TSharedPtr<FDS_ViewModelContext,1> local_48;
  undefined1 local_38 [8];
  TReferenceControllerBase<1> *local_30;
  
  TVar5._1_7_ = (undefined7)((ulonglong)in_RDX >> 8);
  TVar5._0_1_ = 1;
  this_00 = FDS_DungeonBaseTableRow::GetRef((longlong)this->DungeonID,true);
  pFVar3 = FDS_DungeonBaseTableRow::ID_ClearRewardItemDPListTable(this_00);
  FDS_EntryBindingEventField::Reset(&this->RewardsEntry);
  pFVar6 = (pFVar3->ID_Item).AllocatorInstance.Data;
  iVar2 = (pFVar3->ID_Item).ArrayNum;
  pFVar1 = pFVar6 + (longlong)iVar2 * 4;
  while( true ) {
    if ((pFVar3->ID_Item).ArrayNum != iVar2) {
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if (pFVar6 == pFVar1) break;
    this_01 = NewObject<UDS_UserObjectListItem>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this_01 != (UDS_UserObjectListItem *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_01);
    }
    TVar5._0_1_ = 0x45;
    DS_ItemDataUtil::CreateItemModel((EDS_ItemSlotStateType)&local_res10,TVar5._0_4_);
    if (local_res10 != (longlong *)0x0) {
      puVar4 = (undefined8 *)(**(code **)(*local_res10 + 0x310))(local_res10,local_38);
      local_48.Object = (FDS_ViewModelContext *)*puVar4;
      local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar4[1];
      if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_UserObjectListItem::AddContext(this_01,&local_48);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
      local_res8 = this_01;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this_01 != (UDS_UserObjectListItem *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_01);
      }
      TVar5.DebugPtr = (UDS_UserObjectListItem *)&local_res8;
      FDS_EntryBindingEventField::Add
                (&this->RewardsEntry,(TObjectPtr<UDS_UserObjectListItem>)TVar5.ObjectPtr.field0_0x0)
      ;
    }
    pFVar6 = pFVar6 + 4;
  }
  local_48.SharedReferenceCount.ReferenceController._0_4_ =
       FFieldNotificationClassDescriptor::RewardsEntry.BitNumber;
  local_48.Object =
       (FDS_ViewModelContext *)FFieldNotificationClassDescriptor::RewardsEntry.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_48);
  return;
}

// SetFirstRewardObtained @ 14beaf4c0

void __thiscall
UDS_VM_Dungeon_Reward::SetFirstRewardObtained(UDS_VM_Dungeon_Reward *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::FirstRewardObtained.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::FirstRewardObtained.FieldName;
  if (this->FirstRewardObtained != *param_1) {
    this->FirstRewardObtained = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetFirstRewards @ 14beaf510

void __thiscall UDS_VM_Dungeon_Reward::SetFirstRewards(UDS_VM_Dungeon_Reward *this)

{
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  uint uVar4;
  UObject *pUVar5;
  FDS_DungeonBaseTableRow *pFVar6;
  UDS_UserObjectListItem *this_00;
  UClass *pUVar7;
  UDS_M_ItemImplBase *this_01;
  UDS_M_ItemImplRewardItemSlot *this_02;
  undefined8 *puVar8;
  FName *pFVar9;
  TObjectPtr<UDS_UserObjectListItem>_u_0 TVar10;
  uint uVar11;
  FObjectPtr_u_0 FVar12;
  int iVar13;
  longlong lVar14;
  bool local_res8;
  FWeakObjectPtr local_res10;
  FObjectPtr_u_0 local_res18;
  FWeakObjectPtr local_res20;
  FObjectPtr_u_0 local_a8;
  UDS_UserObjectListItem *local_a0;
  longlong local_98;
  FName local_88;
  int local_80;
  FName local_78;
  int local_70;
  TSharedPtr<FDS_ViewModelContext,1> local_68;
  undefined1 local_58 [8];
  TReferenceControllerBase<1> *local_50;
  
  local_res8 = false;
  UDS_DungeonRecordData::GetData
            ((ulong64)&local_res20,UDS_PlayerData::MainPlayerEntityID,SUB41(this->DungeonID,0));
  pFVar9 = (FName *)0x0;
  bVar3 = TWeakObjectPtr<UDS_DungeonRecordData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DungeonRecordData,FWeakObjectPtr> *)&local_res20,
                     (void *)0x0);
  if (!bVar3) {
    pUVar5 = FWeakObjectPtr::Get(&local_res20);
    iVar13 = FFieldNotificationClassDescriptor::FirstRewardObtained.BitNumber;
    FVar2 = FFieldNotificationClassDescriptor::FirstRewardObtained.FieldName;
    local_res8 = (bool)pUVar5[2].field_0x14;
    if ((local_res8 != false) && (this->FirstRewardObtained != SelfHitTestInvisible)) {
      this->FirstRewardObtained = SelfHitTestInvisible;
      local_80 = iVar13;
      pFVar9 = &local_88;
      local_88 = FVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,pFVar9);
    }
  }
  TVar10._1_7_ = (undefined7)((ulonglong)pFVar9 >> 8);
  TVar10._0_1_ = 1;
  pFVar6 = FDS_DungeonBaseTableRow::GetRef((longlong)this->DungeonID,true);
  FDS_EntryBindingEventField::Reset(&this->RewardsEntry);
  local_98 = (longlong)(pFVar6->ID_FirstRewardItemList).ArrayNum;
  uVar11 = 0;
  if (0 < local_98) {
    lVar14 = 0;
    do {
      iVar13 = 1;
      if ((-1 < (int)uVar11) && ((int)uVar11 < (pFVar6->FirstRewardItemValue).ArrayNum)) {
        if ((int)uVar11 < 0) {
          TVar10.DebugPtr = (UDS_UserObjectListItem *)0x1506109c0;
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        iVar13 = *(int *)((pFVar6->FirstRewardItemValue).AllocatorInstance.Data + lVar14 * 4);
      }
      this_00 = NewObject<UDS_UserObjectListItem>((UObject *)this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this_00 != (UDS_UserObjectListItem *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      uVar4 = 0;
      if ((int)uVar11 < (pFVar6->ID_FirstRewardItemList).ArrayNum) {
        uVar4 = ~uVar11 >> 0x1f;
      }
      if (uVar4 == 0) {
        TVar10.DebugPtr = (UDS_UserObjectListItem *)0x1506109c0;
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      TVar10._0_1_ = 0x45;
      DS_ItemDataUtil::CreateItemModel((EDS_ItemSlotStateType)&local_res18,TVar10._0_4_);
      if (local_res18.Handle != (UObject *)0x0) {
        pUVar7 = Z_Construct_UClass_UDS_M_ItemImplRewardItemSlot_NoRegister();
        bVar3 = FObjectPtr::IsA((FObjectPtr *)&local_res18,pUVar7);
        FVar12.Handle = (UObject *)0x0;
        if (bVar3) {
          FVar12 = local_res18;
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (FVar12.Handle != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(FVar12.Handle);
        }
        local_res10.ObjectIndex = 0;
        local_res10.ObjectSerialNumber = 0;
        local_a8 = FVar12;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (FVar12.Handle != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(FVar12.Handle);
        }
        FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_a8);
        TVar10.DebugPtr = (UDS_UserObjectListItem *)0x0;
        bVar3 = TWeakObjectPtr<UDS_M_ItemImplRewardItemSlot,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_M_ItemImplRewardItemSlot,FWeakObjectPtr> *)
                           &local_res10,(void *)0x0);
        if (!bVar3) {
          this_01 = (UDS_M_ItemImplBase *)FWeakObjectPtr::Get(&local_res10);
          UDS_M_ItemImplBase::SetQuantity(this_01,iVar13);
          this_02 = (UDS_M_ItemImplRewardItemSlot *)FWeakObjectPtr::Get(&local_res10);
          UDS_M_ItemImplRewardItemSlot::SetFirstClearReWard(this_02,local_res8);
          pUVar5 = FWeakObjectPtr::Get(&local_res10);
          puVar8 = (undefined8 *)(**(code **)(*(longlong *)pUVar5 + 0x310))(pUVar5,local_58);
          local_68.Object = (FDS_ViewModelContext *)*puVar8;
          local_68.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)puVar8[1];
          if (local_68.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          UDS_UserObjectListItem::AddContext(this_00,&local_68);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_50);
          local_a0 = this_00;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (this_00 != (UDS_UserObjectListItem *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)this_00);
          }
          TVar10.DebugPtr = (UDS_UserObjectListItem *)&local_a0;
          FDS_EntryBindingEventField::Add
                    (&this->RewardsEntry,
                     (TObjectPtr<UDS_UserObjectListItem>)TVar10.ObjectPtr.field0_0x0);
        }
      }
      uVar11 = uVar11 + 1;
      lVar14 = lVar14 + 1;
    } while (lVar14 < local_98);
  }
  local_70 = FFieldNotificationClassDescriptor::RewardsEntry.BitNumber;
  local_78 = FFieldNotificationClassDescriptor::RewardsEntry.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
  return;
}

// SetTitleText @ 14beb4aa0

void __thiscall UDS_VM_Dungeon_Reward::SetTitleText(UDS_VM_Dungeon_Reward *this,FDS_Text *param_1)

{
  FScriptContainerElement *pFVar1;
  FName FVar2;
  int iVar3;
  FName local_18;
  int local_10;
  
  iVar3 = FFieldNotificationClassDescriptor::TitleText.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::TitleText.FieldName;
  FDS_Text::operator=(&this->TitleText,param_1);
  local_18 = FVar2;
  local_10 = iVar3;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(param_1->FormatArgs).AllocatorInstance.Data,
             (param_1->FormatArgs).ArrayNum);
  pFVar1 = (param_1->FormatArgs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_1->UniqueString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// UnbindModel @ 14bebbd90

void __thiscall UDS_VM_Dungeon_Reward::UnbindModel(UDS_VM_Dungeon_Reward *this)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8 [4];
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  UDS_DungeonRecordData::GetData
            ((ulong64)local_res8,UDS_PlayerData::MainPlayerEntityID,SUB41(this->DungeonID,0));
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

// UpdateDungeonRewards @ 14bebe320

void __thiscall UDS_VM_Dungeon_Reward::UpdateDungeonRewards(UDS_VM_Dungeon_Reward *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FName FVar3;
  ForAnyElementType FVar4;
  FDS_DungeonBaseTableRow *this_00;
  FDS_ItemDisplayTableRow *pFVar5;
  UDS_UserObjectListItem *this_01;
  FName *pFVar6;
  TSharedPtr<FDS_ViewModelContext,1> *pTVar7;
  TObjectPtr<UDS_UserObjectListItem>_u_0 TVar8;
  FScriptContainerElement *pFVar9;
  UDS_UserObjectListItem *local_res8;
  longlong *local_res10 [2];
  TSharedPtr<FDS_ViewModelContext,1> local_b8;
  undefined1 local_a8 [8];
  TReferenceControllerBase<1> *local_a0;
  FDS_Text local_98;
  
  iVar2 = FFieldNotificationClassDescriptor::TitleText.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::TitleText.FieldName;
  local_98.StringTableType = StringUi;
  local_98.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_98.StringEnumTableNameID.Number = 0;
  local_98.TimeExpressionType = None;
  local_98.IsExpression = false;
  local_98.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.UniqueString.Data.ArrayNum = 0;
  local_98.UniqueString.Data.ArrayMax = 0;
  local_98.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.FormatArgs.ArrayNum = 0;
  local_98.FormatArgs.ArrayMax = 0;
  local_98.DateTime.Ticks = 0;
  local_98.TimeSpan.Ticks = 0;
  if (this->bIsFirstReward == false) {
    local_98.StringTableID = 0x33460;
    FDS_Text::operator=(&this->TitleText,&local_98);
    local_b8.Object = (FDS_ViewModelContext *)FVar3;
    local_b8.SharedReferenceCount.ReferenceController._0_4_ = iVar2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_b8);
    FVar4.Data = local_98.FormatArgs.AllocatorInstance.Data;
    pTVar7 = (TSharedPtr<FDS_ViewModelContext,1> *)(local_98.FormatArgs._8_8_ & 0xffffffff);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_98.FormatArgs.AllocatorInstance.Data,
               local_98.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)FVar4.Data != (FDS_TextFormatArg *)0x0) {
      FMemory::Free(FVar4.Data);
    }
    if (local_98.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.UniqueString.Data.AllocatorInstance.Data);
    }
    iVar2 = FFieldNotificationClassDescriptor::CommonHelpBtn.BitNumber;
    FVar3 = FFieldNotificationClassDescriptor::CommonHelpBtn.FieldName;
    if (this->CommonHelpBtn != SelfHitTestInvisible) {
      this->CommonHelpBtn = SelfHitTestInvisible;
      pTVar7 = &local_b8;
      local_b8.SharedReferenceCount.ReferenceController._0_4_ = iVar2;
      local_b8.Object = (FDS_ViewModelContext *)FVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,pTVar7);
    }
    TVar8._1_7_ = (undefined7)((ulonglong)pTVar7 >> 8);
    TVar8._0_1_ = 1;
    this_00 = FDS_DungeonBaseTableRow::GetRef((longlong)this->DungeonID,true);
    pFVar5 = FDS_DungeonBaseTableRow::ID_ClearRewardItemDPListTable(this_00);
    FDS_EntryBindingEventField::Reset(&this->RewardsEntry);
    pFVar9 = (pFVar5->ID_Item).AllocatorInstance.Data;
    iVar2 = (pFVar5->ID_Item).ArrayNum;
    pFVar1 = pFVar9 + (longlong)iVar2 * 4;
    while( true ) {
      if ((pFVar5->ID_Item).ArrayNum != iVar2) {
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_res8);
      }
      if (pFVar9 == pFVar1) break;
      this_01 = NewObject<UDS_UserObjectListItem>((UObject *)this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this_01 != (UDS_UserObjectListItem *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_01);
      }
      TVar8._0_1_ = 0x45;
      DS_ItemDataUtil::CreateItemModel((EDS_ItemSlotStateType)local_res10,TVar8._0_4_);
      if (local_res10[0] != (longlong *)0x0) {
        pFVar6 = (FName *)(**(code **)(*local_res10[0] + 0x310))(local_res10[0],local_a8);
        local_b8.Object = *(FDS_ViewModelContext **)pFVar6;
        local_b8.SharedReferenceCount.ReferenceController =
             *(TReferenceControllerBase<1> **)(pFVar6 + 1);
        if ((FName)local_b8.SharedReferenceCount.ReferenceController != (FName)0x0) {
          LOCK();
          *(int *)((longlong)local_b8.SharedReferenceCount.ReferenceController + 8) =
               *(int *)((longlong)local_b8.SharedReferenceCount.ReferenceController + 8) + 1;
          UNLOCK();
        }
        UDS_UserObjectListItem::AddContext(this_01,&local_b8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_a0);
        local_res8 = this_01;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this_01 != (UDS_UserObjectListItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this_01);
        }
        TVar8.DebugPtr = (UDS_UserObjectListItem *)&local_res8;
        FDS_EntryBindingEventField::Add
                  (&this->RewardsEntry,
                   (TObjectPtr<UDS_UserObjectListItem>)TVar8.ObjectPtr.field0_0x0);
      }
      pFVar9 = pFVar9 + 4;
    }
    local_b8.SharedReferenceCount.ReferenceController._0_4_ =
         FFieldNotificationClassDescriptor::RewardsEntry.BitNumber;
    local_b8.Object =
         (FDS_ViewModelContext *)FFieldNotificationClassDescriptor::RewardsEntry.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_b8);
  }
  else {
    local_98.StringTableID = 0x3345f;
    FDS_Text::operator=(&this->TitleText,&local_98);
    local_b8.Object = (FDS_ViewModelContext *)FVar3;
    local_b8.SharedReferenceCount.ReferenceController._0_4_ = iVar2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_b8);
    FVar4.Data = local_98.FormatArgs.AllocatorInstance.Data;
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_98.FormatArgs.AllocatorInstance.Data,
               local_98.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)FVar4.Data != (FDS_TextFormatArg *)0x0) {
      FMemory::Free(FVar4.Data);
    }
    if (local_98.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.UniqueString.Data.AllocatorInstance.Data);
    }
    SetFirstRewards(this);
  }
  return;
}

