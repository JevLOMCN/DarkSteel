// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 32

// SetSearchNameTextCommitted_WrapperImpl @ 14b64d600

void __cdecl
UDS_VM_GuildInvitePopup::SetSearchNameTextCommitted_WrapperImpl(void *param_1,void *param_2)

{
  int iVar1;
  ForAnyElementType FVar2;
  FString *pFVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  void *pvStackX_8;
  FName FStack_88;
  ForAnyElementType FStack_80;
  int iStack_78;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TStack_68;
  FDelegateAllocation FStack_60;
  FDestructionSentinel FStack_50;
  FDelegateAllocation *pFStack_38;
  undefined1 auStack_30 [8];
  ForAnyElementType FStack_28;
  int iStack_20;
  
  pFVar3 = FText::ToString(param_2);
  ::FString::operator=((FString *)((longlong)param_1 + 0x148),pFVar3);
  iVar1 = FFieldNotificationClassDescriptor::IsShowSearchHistoryList.BitNumber;
  FStack_88 = FFieldNotificationClassDescriptor::IsShowSearchHistoryList.FieldName;
  if (*(int *)((longlong)param_2 + 0x10) != 1) {
    return;
  }
  if (*(int *)((longlong)param_1 + 0x150) < 2) {
    return;
  }
  if (*(char *)((longlong)param_1 + 0xa1) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0xa1) = 0;
    FStack_80.Data._0_4_ = iVar1;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_88);
  }
  FStack_88 = (FName)OnSearchPlayerResultEvent;
  TStack_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  FStack_60.DelegateSize = 0;
  FStack_80.Data = FStack_80.Data & 0xffffffff00000000;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&TStack_68,(FWriteAccessScope *)&FStack_50);
  pFStack_38 = &FStack_60;
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,&FStack_60);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_GuildInvitePopup____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(param_1);
    }
    puVar4[3] = 0;
    pvStackX_8 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&pvStackX_8);
    *(FName *)(puVar4 + 4) = FStack_88;
    puVar4[5] = FStack_80.Data;
  }
  if (FStack_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_50.Accessor,&FStack_50);
  }
  auStack_30 = (undefined1  [8])0x0;
  FStack_28.Data = (FScriptContainerElement *)0x0;
  iStack_20 = 0;
  FStack_88.ComparisonIndex.Value = 0;
  FStack_88.Number = 0;
  FStack_80.Data = (FScriptContainerElement *)0x0;
  iStack_78 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&TStack_68,(FReadAccessScope *)&FStack_50);
  if ((FStack_60.DelegateSize != 0) &&
     (FStack_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (**(code **)(*(longlong *)FStack_60.DelegateAllocator + 0x50))
              (FStack_60.DelegateAllocator,&FStack_88);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&FStack_50);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&FStack_88,
             (FWriteAccessScope *)&FStack_50);
  iVar1 = iStack_78;
  FVar2.Data = FStack_80.Data;
  FStack_80.Data = (FScriptContainerElement *)0x0;
  iStack_78 = 0;
  if (FStack_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_50.Accessor,&FStack_50);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_30,
             (FWriteAccessScope *)&FStack_50);
  if (iStack_20 != 0) {
    if (FStack_28.Data == (FScriptContainerElement *)0x0) goto LAB_14be9c195;
    (*(code *)**(undefined8 **)FStack_28.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_28,0,0,0x10);
    iStack_20 = 0;
  }
  if (FStack_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_28.Data);
  }
LAB_14be9c195:
  FStack_28.Data = FVar2.Data;
  iStack_20 = iVar1;
  if (FStack_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_50.Accessor,&FStack_50);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&FStack_88,
             (FWriteAccessScope *)&FStack_50);
  if ((iStack_78 != 0) && (FStack_80.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_80.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_80,0,0,0x10);
    iStack_78 = 0;
  }
  if (FStack_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_50.Accessor,&FStack_50);
  }
  if (FStack_80.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_80.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FStack_88);
  FDS_PlayerRepo::RequestSearchPlayersByName
            ((FString *)((longlong)param_1 + 0x148),
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_30);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&TStack_68,(FWriteAccessScope *)&FStack_50);
  if ((FStack_60.DelegateSize != 0) &&
     (FStack_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)FStack_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FStack_60,0,0,0x10);
    FStack_60.DelegateSize = 0;
  }
  if (FStack_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_50.Accessor,&FStack_50);
  }
  if (FStack_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)FStack_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_68.AccessDetector);
  return;
}

// SetSearchNameTextChanged_WrapperImpl @ 14b64d610

void __cdecl
UDS_VM_GuildInvitePopup::SetSearchNameTextChanged_WrapperImpl(void *param_1,void *param_2)

{
  UDS_VM_Common_TabGroup *this;
  bool bVar1;
  FName FStack_18;
  int iStack_10;
  
  this = *(UDS_VM_Common_TabGroup **)((longlong)param_1 + 0x260);
  if ((this != (UDS_VM_Common_TabGroup *)0x0) && (this->SelectedIndex != 1)) {
    UDS_VM_Common_TabGroup::SetSelectedIndex(this,1);
  }
  bVar1 = FText::IsEmpty(param_2);
  FStack_18 = FFieldNotificationClassDescriptor::IsShowSearchHistoryList.FieldName;
  if ((bool)*(char *)((longlong)param_1 + 0xa1) != !bVar1) {
    iStack_10 = FFieldNotificationClassDescriptor::IsShowSearchHistoryList.BitNumber;
    *(bool *)((longlong)param_1 + 0xa1) = !bVar1;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  }
  return;
}

// SetClickClose_WrapperImpl @ 14b64d620

void __cdecl UDS_VM_GuildInvitePopup::SetClickClose_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined1 *)((longlong)param_1 + 0x238) = 1;
  iStack_10 = FFieldNotificationClassDescriptor::CloseMySelf.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::CloseMySelf.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetClickSearch_WrapperImpl @ 14b64d630

void __cdecl UDS_VM_GuildInvitePopup::SetClickSearch_WrapperImpl(void *param_1,void *param_2)

{
  int iVar1;
  ForAnyElementType FVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  void *pvStackX_8;
  FName FStack_88;
  ForAnyElementType FStack_80;
  int iStack_78;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TStack_68;
  FDelegateAllocation FStack_60;
  FDestructionSentinel FStack_50;
  FDelegateAllocation *pFStack_38;
  undefined1 auStack_30 [8];
  ForAnyElementType FStack_28;
  int iStack_20;
  
  iVar1 = FFieldNotificationClassDescriptor::IsShowSearchHistoryList.BitNumber;
  FStack_88 = FFieldNotificationClassDescriptor::IsShowSearchHistoryList.FieldName;
  if (*(int *)((longlong)param_1 + 0x150) < 2) {
    return;
  }
  if (*(char *)((longlong)param_1 + 0xa1) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0xa1) = 0;
    FStack_80.Data._0_4_ = iVar1;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_88);
  }
  FStack_88 = (FName)OnSearchPlayerResultEvent;
  TStack_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  FStack_60.DelegateSize = 0;
  FStack_80.Data = FStack_80.Data & 0xffffffff00000000;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&TStack_68,(FWriteAccessScope *)&FStack_50);
  pFStack_38 = &FStack_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x30,&FStack_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_GuildInvitePopup____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (void *)0x0)) {
      UE::GC::MarkAsReachable(param_1);
    }
    puVar3[3] = 0;
    pvStackX_8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (void *)0x0)) {
      UE::GC::MarkAsReachable(param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&pvStackX_8);
    *(FName *)(puVar3 + 4) = FStack_88;
    puVar3[5] = FStack_80.Data;
  }
  if (FStack_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_50.Accessor,&FStack_50);
  }
  auStack_30 = (undefined1  [8])0x0;
  FStack_28.Data = (FScriptContainerElement *)0x0;
  iStack_20 = 0;
  FStack_88.ComparisonIndex.Value = 0;
  FStack_88.Number = 0;
  FStack_80.Data = (FScriptContainerElement *)0x0;
  iStack_78 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&TStack_68,(FReadAccessScope *)&FStack_50);
  if ((FStack_60.DelegateSize != 0) &&
     (FStack_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (**(code **)(*(longlong *)FStack_60.DelegateAllocator + 0x50))
              (FStack_60.DelegateAllocator,&FStack_88);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&FStack_50);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&FStack_88,
             (FWriteAccessScope *)&FStack_50);
  iVar1 = iStack_78;
  FVar2.Data = FStack_80.Data;
  FStack_80.Data = (FScriptContainerElement *)0x0;
  iStack_78 = 0;
  if (FStack_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_50.Accessor,&FStack_50);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_30,
             (FWriteAccessScope *)&FStack_50);
  if (iStack_20 != 0) {
    if (FStack_28.Data == (FScriptContainerElement *)0x0) goto LAB_14be96caa;
    (*(code *)**(undefined8 **)FStack_28.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_28,0,0,0x10);
    iStack_20 = 0;
  }
  if (FStack_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_28.Data);
  }
LAB_14be96caa:
  iStack_20 = iVar1;
  FStack_28.Data = FVar2.Data;
  if (FStack_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_50.Accessor,&FStack_50);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&FStack_88,
             (FWriteAccessScope *)&FStack_50);
  if ((iStack_78 != 0) && (FStack_80.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_80.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_80,0,0,0x10);
    iStack_78 = 0;
  }
  if (FStack_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_50.Accessor,&FStack_50);
  }
  if (FStack_80.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_80.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FStack_88);
  FDS_PlayerRepo::RequestSearchPlayersByName
            ((FString *)((longlong)param_1 + 0x148),
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_30);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&TStack_68,(FWriteAccessScope *)&FStack_50);
  if ((FStack_60.DelegateSize != 0) &&
     (FStack_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)FStack_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FStack_60,0,0,0x10);
    FStack_60.DelegateSize = 0;
  }
  if (FStack_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_50.Accessor,&FStack_50);
  }
  if (FStack_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)FStack_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_68.AccessDetector);
  return;
}

// SetClickTextClear_WrapperImpl @ 14b64d640

void __cdecl UDS_VM_GuildInvitePopup::SetClickTextClear_WrapperImpl(void *param_1,void *param_2)

{
  int iVar1;
  FString FStack_18;
  
  FStack_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_18.Data.ArrayNum = 0;
  FStack_18.Data.ArrayMax = 0;
  SetTxt_SearchName(param_1,&FStack_18);
  if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
  }
  iVar1 = FFieldNotificationClassDescriptor::IsShowSearchHistoryList.BitNumber;
  FStack_18.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)
       FFieldNotificationClassDescriptor::IsShowSearchHistoryList.FieldName;
  if (*(char *)((longlong)param_1 + 0xa1) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0xa1) = 0;
    FStack_18.Data.ArrayNum = iVar1;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  }
  return;
}

// StaticClass @ 14b64d650

UClass * __cdecl UDS_VM_GuildInvitePopup::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_GuildInvitePopup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_GuildInvitePopup",
               &Z_Registration_Info_UClass_UDS_VM_GuildInvitePopup.InnerSingleton,
               StaticRegisterNativesUDS_VM_GuildInvitePopup,0x268,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_GuildInvitePopup>,
               InternalVTableHelperCtorCaller<UDS_VM_GuildInvitePopup>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_GuildInvitePopup.InnerSingleton;
}

// UDS_VM_GuildInvitePopup @ 14b652e00

UDS_VM_GuildInvitePopup * __thiscall
UDS_VM_GuildInvitePopup::UDS_VM_GuildInvitePopup
          (UDS_VM_GuildInvitePopup *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->FixedTxt_Title).StringTableType = StringUi;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildInvitePopup__6B_;
  (this->FixedTxt_Title).StringTableID = 0x3a9f4;
  (this->FixedTxt_Title).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_Title).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_Title).DateTime.Ticks = 0;
  (this->FixedTxt_Title).TimeSpan.Ticks = 0;
  (this->FixedTxt_Title).TimeExpressionType = None;
  (this->FixedTxt_Title).IsExpression = false;
  (this->FixedTxt_Title).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Title).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_Title).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_Title).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Title).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_Title).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_SearchNameHint).StringTableType = StringUi;
  (this->FixedTxt_SearchNameHint).StringTableID = 0x41efd;
  (this->FixedTxt_SearchNameHint).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_SearchNameHint).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_SearchNameHint).DateTime.Ticks = 0;
  (this->FixedTxt_SearchNameHint).TimeSpan.Ticks = 0;
  (this->FixedTxt_SearchNameHint).TimeExpressionType = None;
  (this->FixedTxt_SearchNameHint).IsExpression = false;
  (this->FixedTxt_SearchNameHint).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_SearchNameHint).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_SearchNameHint).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_SearchNameHint).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->FixedTxt_SearchNameHint).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_SearchNameHint).FormatArgs.ArrayMax = 0;
  (this->Txt_SearchName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Txt_SearchName).Data.ArrayNum = 0;
  (this->Txt_SearchName).Data.ArrayMax = 0;
  (this->Txt_Empty).StringTableType = None;
  (this->Txt_Empty).StringTableID = 0;
  (this->Txt_Empty).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Txt_Empty).StringEnumTableNameID.Number = 0;
  (this->Txt_Empty).DateTime.Ticks = 0;
  (this->Txt_Empty).TimeSpan.Ticks = 0;
  (this->Txt_Empty).TimeExpressionType = None;
  (this->Txt_Empty).IsExpression = false;
  (this->Txt_Empty).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Txt_Empty).UniqueString.Data.ArrayNum = 0;
  (this->Txt_Empty).UniqueString.Data.ArrayMax = 0;
  (this->Txt_Empty).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Txt_Empty).FormatArgs.ArrayNum = 0;
  (this->Txt_Empty).FormatArgs.ArrayMax = 0;
  FText::FText(&(this->SearchNameTextCommitted).NewText);
  FText::FText(&(this->SearchNameTextChanged).NewText);
  (this->ClickClose)._padding_ = '\0';
  (this->ClickClose).bIsCustomSelected = false;
  (this->ClickClose).bIsLacked = false;
  (this->ClickClose).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickClose).Delegate = 0;
  *(undefined8 *)&(this->ClickClose).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickClose).Delegate.field_0x10 = 0;
  (this->ClickSearch)._padding_ = '\0';
  (this->ClickSearch).bIsCustomSelected = false;
  (this->ClickSearch).bIsLacked = false;
  (this->ClickSearch).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickSearch).Delegate = 0;
  *(undefined8 *)&(this->ClickSearch).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickSearch).Delegate.field_0x10 = 0;
  (this->ClickTextClear)._padding_ = '\0';
  (this->ClickTextClear).bIsCustomSelected = false;
  (this->ClickTextClear).bIsLacked = false;
  (this->ClickTextClear).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickTextClear).Delegate = 0;
  *(undefined8 *)&(this->ClickTextClear).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickTextClear).Delegate.field_0x10 = 0;
  (this->CloseMySelf).bIsActivate = false;
  (this->EntryBindingEventField_PlayerList).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_PlayerList).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_PlayerList).UserObjectList.ArrayMax = 0;
  (this->EntryBindingEventField_SearchHistoryList).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_SearchHistoryList).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_SearchHistoryList).UserObjectList.ArrayMax = 0;
  (this->VM_TabGroup).field0_0x0.DebugPtr = (UDS_VM_Common_TabGroup *)0x0;
  return this;
}

// UDS_VM_GuildInvitePopup @ 14b652fe0

UDS_VM_GuildInvitePopup * __thiscall
UDS_VM_GuildInvitePopup::UDS_VM_GuildInvitePopup
          (UDS_VM_GuildInvitePopup *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->FixedTxt_Title).StringTableType = StringUi;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildInvitePopup__6B_;
  (this->FixedTxt_Title).StringTableID = 0x3a9f4;
  (this->FixedTxt_Title).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_Title).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_Title).DateTime.Ticks = 0;
  (this->FixedTxt_Title).TimeSpan.Ticks = 0;
  (this->FixedTxt_Title).TimeExpressionType = None;
  (this->FixedTxt_Title).IsExpression = false;
  (this->FixedTxt_Title).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Title).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_Title).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_Title).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Title).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_Title).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_SearchNameHint).StringTableType = StringUi;
  (this->FixedTxt_SearchNameHint).StringTableID = 0x41efd;
  (this->FixedTxt_SearchNameHint).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_SearchNameHint).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_SearchNameHint).DateTime.Ticks = 0;
  (this->FixedTxt_SearchNameHint).TimeSpan.Ticks = 0;
  (this->FixedTxt_SearchNameHint).TimeExpressionType = None;
  (this->FixedTxt_SearchNameHint).IsExpression = false;
  (this->FixedTxt_SearchNameHint).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_SearchNameHint).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_SearchNameHint).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_SearchNameHint).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->FixedTxt_SearchNameHint).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_SearchNameHint).FormatArgs.ArrayMax = 0;
  (this->Txt_SearchName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Txt_SearchName).Data.ArrayNum = 0;
  (this->Txt_SearchName).Data.ArrayMax = 0;
  (this->Txt_Empty).StringTableType = None;
  (this->Txt_Empty).StringTableID = 0;
  (this->Txt_Empty).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Txt_Empty).StringEnumTableNameID.Number = 0;
  (this->Txt_Empty).DateTime.Ticks = 0;
  (this->Txt_Empty).TimeSpan.Ticks = 0;
  (this->Txt_Empty).TimeExpressionType = None;
  (this->Txt_Empty).IsExpression = false;
  (this->Txt_Empty).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Txt_Empty).UniqueString.Data.ArrayNum = 0;
  (this->Txt_Empty).UniqueString.Data.ArrayMax = 0;
  (this->Txt_Empty).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Txt_Empty).FormatArgs.ArrayNum = 0;
  (this->Txt_Empty).FormatArgs.ArrayMax = 0;
  FText::FText(&(this->SearchNameTextCommitted).NewText);
  FText::FText(&(this->SearchNameTextChanged).NewText);
  (this->ClickClose)._padding_ = '\0';
  (this->ClickClose).bIsCustomSelected = false;
  (this->ClickClose).bIsLacked = false;
  (this->ClickClose).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickClose).Delegate = 0;
  *(undefined8 *)&(this->ClickClose).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickClose).Delegate.field_0x10 = 0;
  (this->ClickSearch)._padding_ = '\0';
  (this->ClickSearch).bIsCustomSelected = false;
  (this->ClickSearch).bIsLacked = false;
  (this->ClickSearch).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickSearch).Delegate = 0;
  *(undefined8 *)&(this->ClickSearch).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickSearch).Delegate.field_0x10 = 0;
  (this->ClickTextClear)._padding_ = '\0';
  (this->ClickTextClear).bIsCustomSelected = false;
  (this->ClickTextClear).bIsLacked = false;
  (this->ClickTextClear).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickTextClear).Delegate = 0;
  *(undefined8 *)&(this->ClickTextClear).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickTextClear).Delegate.field_0x10 = 0;
  (this->CloseMySelf).bIsActivate = false;
  (this->EntryBindingEventField_PlayerList).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_PlayerList).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_PlayerList).UserObjectList.ArrayMax = 0;
  (this->EntryBindingEventField_SearchHistoryList).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_SearchHistoryList).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_SearchHistoryList).UserObjectList.ArrayMax = 0;
  (this->VM_TabGroup).field0_0x0.DebugPtr = (UDS_VM_Common_TabGroup *)0x0;
  return this;
}

// ~UDS_VM_GuildInvitePopup @ 14b6551c0

void __thiscall UDS_VM_GuildInvitePopup::~UDS_VM_GuildInvitePopup(UDS_VM_GuildInvitePopup *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  ITextData *pIVar3;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildInvitePopup__6B_;
  pFVar1 = (this->EntryBindingEventField_SearchHistoryList).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EntryBindingEventField_PlayerList).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickTextClear).Delegate);
  pvVar2 = *(void **)&(this->ClickTextClear).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickTextClear).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickSearch).Delegate);
  pvVar2 = *(void **)&(this->ClickSearch).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickSearch).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickClose).Delegate);
  pvVar2 = *(void **)&(this->ClickClose).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickClose).Delegate);
  pIVar3 = (this->SearchNameTextChanged).NewText.TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  pIVar3 = (this->SearchNameTextCommitted).NewText.TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->Txt_Empty).FormatArgs.AllocatorInstance.Data,
             (this->Txt_Empty).FormatArgs.ArrayNum);
  pFVar1 = (this->Txt_Empty).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Txt_Empty).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Txt_SearchName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_SearchNameHint).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_SearchNameHint).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_SearchNameHint).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_SearchNameHint).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_Title).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_Title).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_Title).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_Title).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b657350

IClassDescriptor * __thiscall
UDS_VM_GuildInvitePopup::GetFieldNotificationDescriptor(UDS_VM_GuildInvitePopup *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_GuildInvitePopup::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b657c10

UClass * __cdecl UDS_VM_GuildInvitePopup::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_GuildInvitePopup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_GuildInvitePopup",
               &Z_Registration_Info_UClass_UDS_VM_GuildInvitePopup.InnerSingleton,
               StaticRegisterNativesUDS_VM_GuildInvitePopup,0x268,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_GuildInvitePopup>,
               InternalVTableHelperCtorCaller<UDS_VM_GuildInvitePopup>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_GuildInvitePopup.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_GuildInvitePopup @ 14b658310

void __cdecl UDS_VM_GuildInvitePopup::StaticRegisterNativesUDS_VM_GuildInvitePopup(void)

{
  return;
}

// BindModel @ 14be75930

void __thiscall UDS_VM_GuildInvitePopup::BindModel(UDS_VM_GuildInvitePopup *this)

{
  TObjectPtr<UDS_VM_Common_TabGroup>_u_0 TVar1;
  UDS_UIEvent *pUVar2;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  UDS_PlayerEvent *pUVar3;
  FWeakObjectPtr local_res10;
  TObjectPtr<UDS_VM_Common_TabGroup>_u_0 local_res18 [2];
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar2 = UDS_UIEvent::GetEvent();
  if (pUVar2 != (UDS_UIEvent *)0x0) {
    TVar1 = (TObjectPtr<UDS_VM_Common_TabGroup>_u_0)(this->VM_TabGroup).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (TVar1.DebugPtr != (UDS_VM_Common_TabGroup *)0x0) {
        UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.DebugPtr != (UDS_VM_Common_TabGroup *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
      }
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res18[0] = TVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar1.DebugPtr != (UDS_VM_Common_TabGroup *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_res18);
    this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
              TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>_>
              ::FindOrAddImpl<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&>
                        ((TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>_>
                          *)&(pUVar2->OnClickTabIndex).Subscriptions,
                         local_res10.ObjectSerialNumber ^ local_res10.ObjectIndex,
                         (TWeakObjectPtr<UObject,FWeakObjectPtr> *)&local_res10);
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(this_00,this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultTSDelegateUserPolicy>::
    AddUObject<UDS_VM_GuildInvitePopup>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultTSDelegateUserPolicy> *)
               this_00,(UDS_VM_GuildInvitePopup *)&local_res18[0].ObjectPtr,(pmf_06cf9741 *)this);
  }
  pUVar3 = UDS_PlayerEvent::GetEvent();
  if (pUVar3 != (UDS_PlayerEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar3->OnUpdateSearchPlayerNames,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_GuildInvitePopup>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar3->OnUpdateSearchPlayerNames,(UDS_VM_GuildInvitePopup *)&local_res10,
               (pmf_1de9d769 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar3->OnClickSearchedNameEntry,this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_GuildInvitePopup>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar3->OnClickSearchedNameEntry,(UDS_VM_GuildInvitePopup *)&local_res10,
               (pmf_06cf9741 *)this);
  }
  return;
}

// InitViewModel @ 14be8cbd0

void __thiscall UDS_VM_GuildInvitePopup::InitViewModel(UDS_VM_GuildInvitePopup *this)

{
  return;
}

// OnClickClose @ 14be94340

void __thiscall
UDS_VM_GuildInvitePopup::OnClickClose(UDS_VM_GuildInvitePopup *this,FDS_ButtonEventField *param_1)

{
  FName local_18;
  int local_10;
  
  (this->CloseMySelf).bIsActivate = true;
  local_10 = FFieldNotificationClassDescriptor::CloseMySelf.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::CloseMySelf.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnClickSearch @ 14be96ab0

void __thiscall
UDS_VM_GuildInvitePopup::OnClickSearch(UDS_VM_GuildInvitePopup *this,FDS_ButtonEventField *param_1)

{
  int iVar1;
  ForAnyElementType FVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  UDS_VM_GuildInvitePopup *local_res8;
  FName local_88;
  ForAnyElementType FStack_80;
  int local_78;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  undefined1 local_30 [8];
  ForAnyElementType local_28;
  int local_20;
  
  iVar1 = FFieldNotificationClassDescriptor::IsShowSearchHistoryList.BitNumber;
  local_88 = FFieldNotificationClassDescriptor::IsShowSearchHistoryList.FieldName;
  if ((this->Txt_SearchName).Data.ArrayNum < 2) {
    return;
  }
  if (this->IsShowSearchHistoryList != false) {
    this->IsShowSearchHistoryList = false;
    FStack_80.Data._0_4_ = iVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
  }
  local_88 = (FName)OnSearchPlayerResultEvent;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  FStack_80.Data = FStack_80.Data & 0xffffffff00000000;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_50);
  local_38 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x30,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_GuildInvitePopup____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_VM_GuildInvitePopup *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar3[3] = 0;
    local_res8 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_VM_GuildInvitePopup *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_res8);
    *(FName *)(puVar3 + 4) = local_88;
    puVar3[5] = FStack_80.Data;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  local_30 = (undefined1  [8])0x0;
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = 0;
  local_88.ComparisonIndex.Value = 0;
  local_88.Number = 0;
  FStack_80.Data = (FScriptContainerElement *)0x0;
  local_78 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_68,(FReadAccessScope *)&local_50);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x50))
              (local_60.DelegateAllocator,&local_88);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_50);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_88,
             (FWriteAccessScope *)&local_50);
  iVar1 = local_78;
  FVar2.Data = FStack_80.Data;
  FStack_80.Data = (FScriptContainerElement *)0x0;
  local_78 = 0;
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_30,
             (FWriteAccessScope *)&local_50);
  if (local_20 != 0) {
    if (local_28.Data == (FScriptContainerElement *)0x0) goto LAB_14be96caa;
    (*(code *)**(undefined8 **)local_28.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_28,0,0,0x10);
    local_20 = 0;
  }
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
LAB_14be96caa:
  local_20 = iVar1;
  local_28.Data = FVar2.Data;
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_88,
             (FWriteAccessScope *)&local_50);
  if ((local_78 != 0) && (FStack_80.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_80.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_80,0,0,0x10);
    local_78 = 0;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  if (FStack_80.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_80.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&local_88);
  FDS_PlayerRepo::RequestSearchPlayersByName
            (&this->Txt_SearchName,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_30);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_50);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return;
}

// OnClickSearchedNameEntry @ 14be96dd0

void __thiscall
UDS_VM_GuildInvitePopup::OnClickSearchedNameEntry(UDS_VM_GuildInvitePopup *this,int param_1)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  int iVar3;
  bool bVar4;
  FDS_PlayerRepo *pFVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  UDS_VM_GuildInvitePopup *local_res18 [2];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_118;
  ForAnyElementType local_110;
  int local_108;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_100;
  FDelegateAllocation local_f8;
  undefined1 local_e8 [8];
  ForAnyElementType local_e0;
  int local_d8;
  FName local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  FDestructionSentinel local_b8;
  FDestructionSentinel local_a0;
  FDestructionSentinel local_88;
  FDestructionSentinel local_70;
  FDestructionSentinel local_58;
  FDelegateAllocation *local_40;
  FReadAccessScope local_38;
  
  pFVar5 = TDS_Singleton<FDS_PlayerRepo>::GetInst();
  if (param_1 < 0) {
    return;
  }
  if ((pFVar5->SearchedPlayerNameList).ArrayNum <= param_1) {
    return;
  }
  if ((param_1 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  SetTxt_SearchName(this,(FString *)
                         ((pFVar5->SearchedPlayerNameList).AllocatorInstance.Data +
                         (longlong)param_1 * 0x10));
  iStack_c0 = FFieldNotificationClassDescriptor::IsShowSearchHistoryList.BitNumber;
  local_c8 = FFieldNotificationClassDescriptor::IsShowSearchHistoryList.FieldName;
  if (this->IsShowSearchHistoryList != false) {
    this->IsShowSearchHistoryList = false;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_c8);
  }
  local_c8 = (FName)OnSearchPlayerResultEvent;
  local_100.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_f8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_f8.DelegateSize = 0;
  iStack_c0 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_100,(FWriteAccessScope *)&local_58);
  local_40 = &local_f8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,&local_f8);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_GuildInvitePopup____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_VM_GuildInvitePopup *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar6[3] = 0;
    local_res18[0] = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_VM_GuildInvitePopup *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)local_res18);
    *(FName *)(puVar6 + 4) = local_c8;
    puVar6[5] = CONCAT44(uStack_bc,iStack_c0);
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  local_e8 = (undefined1  [8])0x0;
  local_e0.Data = (FScriptContainerElement *)0x0;
  local_d8 = 0;
  local_118.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_110.Data = (FScriptContainerElement *)0x0;
  local_108 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_100,&local_38);
  if ((local_f8.DelegateSize != 0) &&
     (local_f8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (**(code **)(*(longlong *)local_f8.DelegateAllocator + 0x50))
              (local_f8.DelegateAllocator,&local_118);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_118,(FWriteAccessScope *)&local_b8);
  iVar3 = local_108;
  FVar2.Data = local_110.Data;
  local_110.Data = (FScriptContainerElement *)0x0;
  local_108 = 0;
  if (local_b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e8,
             (FWriteAccessScope *)&local_a0);
  if (local_d8 != 0) {
    if (local_e0.Data == (FScriptContainerElement *)0x0) goto LAB_14be9702f;
    (*(code *)**(undefined8 **)local_e0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_e0,0,0,0x10);
    local_d8 = 0;
  }
  if (local_e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data);
  }
LAB_14be9702f:
  local_e0.Data = FVar2.Data;
  local_d8 = iVar3;
  if (local_a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a0.Accessor,&local_a0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_118,(FWriteAccessScope *)&local_88);
  if ((local_108 != 0) && (local_110.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_110.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_110,0,0,0x10);
    local_108 = 0;
  }
  if (local_88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
  }
  if (local_110.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_118.AccessDetector);
  FDS_PlayerRepo::RequestSearchPlayersByName
            (&this->Txt_SearchName,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_e8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_100,(FWriteAccessScope *)&local_70);
  if ((local_f8.DelegateSize != 0) &&
     (local_f8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_f8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_f8,0,0,0x10);
    local_f8.DelegateSize = 0;
  }
  if (local_70.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
  }
  if (local_f8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_f8.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_100.AccessDetector);
  return;
}

// OnClickTabIndex @ 14be973a0

void __thiscall UDS_VM_GuildInvitePopup::OnClickTabIndex(UDS_VM_GuildInvitePopup *this,int param_1)

{
  int iVar1;
  FName FVar2;
  long64 lVar3;
  FString local_78;
  FDS_Text local_68;
  
  if (param_1 == 0) {
    FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField_PlayerList);
    local_78.Data.ArrayNum =
         FFieldNotificationClassDescriptor::EntryBindingEventField_PlayerList.BitNumber;
    local_78.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)
         FFieldNotificationClassDescriptor::EntryBindingEventField_PlayerList.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
    lVar3 = 0x41ef7;
  }
  else {
    lVar3 = 0x41efa;
  }
  local_68.StringTableType = None;
  local_68.StringTableID = 0;
  local_68.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_68.StringEnumTableNameID.Number = 0;
  local_68.TimeExpressionType = None;
  local_68.DateTime.Ticks = 0;
  local_68.TimeSpan.Ticks = 0;
  local_68.IsExpression = false;
  local_68.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.UniqueString.Data.ArrayNum = 0;
  local_68.UniqueString.Data.ArrayMax = 0;
  local_68.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.FormatArgs.ArrayNum = 0;
  local_68.FormatArgs.ArrayMax = 0;
  FDS_Text::SetTextFromStringTable(&local_68,StringUi,lVar3);
  iVar1 = FFieldNotificationClassDescriptor::Txt_Empty.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::Txt_Empty.FieldName;
  FDS_Text::operator=(&this->Txt_Empty,&local_68);
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar2;
  local_78.Data.ArrayNum = iVar1;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_68.FormatArgs.AllocatorInstance.Data,
             local_68.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_68.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_68.FormatArgs.AllocatorInstance.Data);
  }
  if (local_68.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.UniqueString.Data.AllocatorInstance.Data);
  }
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  SetTxt_SearchName(this,&local_78);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  iVar1 = FFieldNotificationClassDescriptor::IsShowSearchHistoryList.BitNumber;
  local_78.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)
       FFieldNotificationClassDescriptor::IsShowSearchHistoryList.FieldName;
  if (this->IsShowSearchHistoryList != false) {
    this->IsShowSearchHistoryList = false;
    local_78.Data.ArrayNum = iVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
  }
  return;
}

// OnClickTextClear @ 14be97520

void __thiscall
UDS_VM_GuildInvitePopup::OnClickTextClear
          (UDS_VM_GuildInvitePopup *this,FDS_ButtonEventField *param_1)

{
  int iVar1;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  SetTxt_SearchName(this,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  iVar1 = FFieldNotificationClassDescriptor::IsShowSearchHistoryList.BitNumber;
  local_18.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)
       FFieldNotificationClassDescriptor::IsShowSearchHistoryList.FieldName;
  if (this->IsShowSearchHistoryList != false) {
    this->IsShowSearchHistoryList = false;
    local_18.Data.ArrayNum = iVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnCloseMySelf @ 14be976a0

void __thiscall UDS_VM_GuildInvitePopup::OnCloseMySelf(UDS_VM_GuildInvitePopup *this)

{
  FName local_18;
  int local_10;
  
  (this->CloseMySelf).bIsActivate = true;
  local_10 = FFieldNotificationClassDescriptor::CloseMySelf.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::CloseMySelf.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnSearchNameTextChanged @ 14be9bf00

void __thiscall
UDS_VM_GuildInvitePopup::OnSearchNameTextChanged
          (UDS_VM_GuildInvitePopup *this,FDS_TextCommittedEventField *param_1)

{
  UDS_VM_Common_TabGroup *this_00;
  bool bVar1;
  FName local_18;
  int local_10;
  
  this_00 = (this->VM_TabGroup).field0_0x0.DebugPtr;
  if ((this_00 != (UDS_VM_Common_TabGroup *)0x0) && (this_00->SelectedIndex != 1)) {
    UDS_VM_Common_TabGroup::SetSelectedIndex(this_00,1);
  }
  bVar1 = FText::IsEmpty(&param_1->NewText);
  local_18 = FFieldNotificationClassDescriptor::IsShowSearchHistoryList.FieldName;
  if (this->IsShowSearchHistoryList != !bVar1) {
    local_10 = FFieldNotificationClassDescriptor::IsShowSearchHistoryList.BitNumber;
    this->IsShowSearchHistoryList = !bVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnSearchNameTextCommitted @ 14be9bf80

void __thiscall
UDS_VM_GuildInvitePopup::OnSearchNameTextCommitted
          (UDS_VM_GuildInvitePopup *this,FDS_TextCommittedEventField *param_1)

{
  int iVar1;
  ForAnyElementType FVar2;
  FString *pFVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  UDS_VM_GuildInvitePopup *local_res8;
  FName local_88;
  ForAnyElementType FStack_80;
  int local_78;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  undefined1 local_30 [8];
  ForAnyElementType local_28;
  int local_20;
  
  pFVar3 = FText::ToString(&param_1->NewText);
  ::FString::operator=(&this->Txt_SearchName,pFVar3);
  iVar1 = FFieldNotificationClassDescriptor::IsShowSearchHistoryList.BitNumber;
  local_88 = FFieldNotificationClassDescriptor::IsShowSearchHistoryList.FieldName;
  if (param_1->CommitType != OnEnter) {
    return;
  }
  if ((this->Txt_SearchName).Data.ArrayNum < 2) {
    return;
  }
  if (this->IsShowSearchHistoryList != false) {
    this->IsShowSearchHistoryList = false;
    FStack_80.Data._0_4_ = iVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
  }
  local_88 = (FName)OnSearchPlayerResultEvent;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  FStack_80.Data = FStack_80.Data & 0xffffffff00000000;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_50);
  local_38 = &local_60;
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,&local_60);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_GuildInvitePopup____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar4[3] = 0;
    local_res8 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_res8);
    *(FName *)(puVar4 + 4) = local_88;
    puVar4[5] = FStack_80.Data;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  local_30 = (undefined1  [8])0x0;
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = 0;
  local_88.ComparisonIndex.Value = 0;
  local_88.Number = 0;
  FStack_80.Data = (FScriptContainerElement *)0x0;
  local_78 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_68,(FReadAccessScope *)&local_50);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x50))
              (local_60.DelegateAllocator,&local_88);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_50);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_88,
             (FWriteAccessScope *)&local_50);
  iVar1 = local_78;
  FVar2.Data = FStack_80.Data;
  FStack_80.Data = (FScriptContainerElement *)0x0;
  local_78 = 0;
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_30,
             (FWriteAccessScope *)&local_50);
  if (local_20 != 0) {
    if (local_28.Data == (FScriptContainerElement *)0x0) goto LAB_14be9c195;
    (*(code *)**(undefined8 **)local_28.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_28,0,0,0x10);
    local_20 = 0;
  }
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
LAB_14be9c195:
  local_28.Data = FVar2.Data;
  local_20 = iVar1;
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_88,
             (FWriteAccessScope *)&local_50);
  if ((local_78 != 0) && (FStack_80.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_80.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_80,0,0,0x10);
    local_78 = 0;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  if (FStack_80.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_80.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&local_88);
  FDS_PlayerRepo::RequestSearchPlayersByName
            (&this->Txt_SearchName,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_30);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_50);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return;
}

// OnSearchPlayerResultEvent @ 14be9c2b0

void __thiscall UDS_VM_GuildInvitePopup::OnSearchPlayerResultEvent(UDS_VM_GuildInvitePopup *this)

{
  longlong lVar1;
  code *pcVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  FDS_PlayerRepo *pFVar6;
  UObject *pUVar7;
  UDS_UserObjectListItem *this_00;
  FDS_ViewModelContext *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  UScriptStruct *pUVar10;
  UDS_ViewModelContextManager *this_01;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res10 [8];
  uint local_res18;
  FWeakObjectPtr local_res20;
  longlong local_b8;
  UDS_UserObjectListItem *local_b0;
  FDS_PlayerRepo *local_a8;
  FScriptContainerElement *local_a0;
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
  
  pFVar6 = TDS_Singleton<FDS_PlayerRepo>::GetInst();
  local_90 = FFieldNotificationClassDescriptor::IsShowPlayerList.BitNumber;
  local_98 = FFieldNotificationClassDescriptor::IsShowPlayerList.FieldName;
  local_a8 = pFVar6;
  if ((pFVar6->PlayerList).ArrayNum == 0) {
    if (this->IsShowPlayerList != false) {
      this->IsShowPlayerList = false;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_98);
      return;
    }
  }
  else {
    if (this->IsShowPlayerList != true) {
      this->IsShowPlayerList = true;
      local_80 = local_90;
      local_88 = local_98;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
    }
    iVar4 = FFieldNotificationClassDescriptor::IsShowSearchHistoryList.BitNumber;
    FVar3 = FFieldNotificationClassDescriptor::IsShowSearchHistoryList.FieldName;
    if (this->IsShowSearchHistoryList != false) {
      this->IsShowSearchHistoryList = false;
      local_70 = iVar4;
      local_78 = FVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
    }
    local_b8 = 0;
    UDS_PlayerData::GetMainPlayerData();
    bVar5 = FWeakObjectPtr::IsValid(&local_res20);
    if (bVar5) {
      pUVar7 = FWeakObjectPtr::Get(&local_res20);
      local_b8 = *(longlong *)&pUVar7[6].field_0x8;
    }
    FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField_PlayerList);
    local_res18 = (pFVar6->PlayerList).ArrayNum;
    uVar11 = (ulonglong)(int)local_res18;
    pFVar13 = (pFVar6->PlayerList).AllocatorInstance.Data;
    pFVar12 = pFVar13 + uVar11 * 0x90;
    local_a0 = pFVar12;
    while( true ) {
      if ((pFVar6->PlayerList).ArrayNum != (int)uVar11) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<misc::Player_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar13 == pFVar12) break;
      lVar1 = *(longlong *)(pFVar13 + 0x50);
      if (lVar1 != local_b8) {
        this_00 = NewObject<UDS_UserObjectListItem>((UObject *)this);
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (this_00 == (UDS_UserObjectListItem *)0x0) {
            return;
          }
        }
        else {
          if (this_00 == (UDS_UserObjectListItem *)0x0) {
            return;
          }
          UE::GC::MarkAsReachable((UObject *)this_00);
        }
        pFVar8 = ::operator_new(0x28);
        if (pFVar8 == (FDS_ViewModelContext *)0x0) {
          pFVar8 = (FDS_ViewModelContext *)0x0;
        }
        else {
          *(undefined8 *)&pFVar8->ViewModelTemplateKey = 0;
          pFVar8->DerivedStaticStruct = (UStruct *)0x0;
          (pFVar8->ViewModelName).ComparisonIndex = 0;
          (pFVar8->ViewModelName).Number = 0;
          pFVar8->_padding_ = (longlong)&___7FDS_ViewModelContext_GuildInvitePopupSlot__6B_;
          pFVar8[1]._padding_ = 0;
        }
        pTVar9 = ::operator_new(0x20);
        if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
          pTVar9 = (TReferenceControllerBase<1> *)0x0;
        }
        else {
          pTVar9->SharedReferenceCount = (atomic<int>)0x1;
          pTVar9[1]._padding_ = (longlong)ViewModelContextDeleter;
          pTVar9->_padding_ =
               (longlong)
               &
               ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_GuildInvitePopupSlot__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
          ;
          pTVar9->WeakReferenceCount = (atomic<int>)0x1;
          *(FDS_ViewModelContext **)&pTVar9[1].SharedReferenceCount = pFVar8;
        }
        if ((pFVar8 == (FDS_ViewModelContext *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pUVar10 = FDS_ViewModelContext_GuildInvitePopupSlot::StaticStruct();
        pFVar8->DerivedStaticStruct = (UStruct *)pUVar10;
        this_01 = UDS_ViewModelContextManager::GetInst();
        if (this_01 != (UDS_ViewModelContextManager *)0x0) {
          if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_58.Object = pFVar8;
          local_58.SharedReferenceCount.ReferenceController = pTVar9;
          UDS_ViewModelContextManager::RegisterContext(this_01,&local_58);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_58.SharedReferenceCount.ReferenceController);
        }
        pFVar8->ViewModelTemplateKey = GuildInvitePopupSlot;
        pFVar8[1]._padding_ = lVar1;
        if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_48.Object = pFVar8;
        local_48.SharedReferenceCount.ReferenceController = pTVar9;
        UDS_UserObjectListItem::AddContext(this_00,&local_48);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
        local_b0 = this_00;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this_00);
        }
        FDS_EntryBindingEventField::Add
                  (&this->EntryBindingEventField_PlayerList,
                   (TObjectPtr<UDS_UserObjectListItem>)&local_b0);
        pFVar6 = local_a8;
        pFVar12 = local_a0;
      }
      uVar11 = (ulonglong)local_res18;
      pFVar13 = pFVar13 + 0x90;
    }
    local_60 = FFieldNotificationClassDescriptor::EntryBindingEventField_PlayerList.BitNumber;
    local_68 = FFieldNotificationClassDescriptor::EntryBindingEventField_PlayerList.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
  }
  return;
}

// OnSetViewModel @ 14be9ecc0

void __thiscall
UDS_VM_GuildInvitePopup::OnSetViewModel
          (UDS_VM_GuildInvitePopup *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (param_1->Object != (FDS_ViewModelContext *)0x0) {
    SetVM_TabGroup(this);
    if (this->IsShowPlayerList != false) {
      this->IsShowPlayerList = false;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_);
    }
    if (this->IsShowSearchHistoryList != false) {
      this->IsShowSearchHistoryList = false;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_);
    }
    OnClickTabIndex(this,0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUpdateSearchPlayerNames @ 14bea83f0

void __thiscall UDS_VM_GuildInvitePopup::OnUpdateSearchPlayerNames(UDS_VM_GuildInvitePopup *this)

{
  int iVar1;
  void *_Src;
  code *pcVar2;
  bool bVar3;
  FDS_PlayerRepo *pFVar4;
  UObject *pUVar5;
  UDS_UserObjectListItem *this_00;
  FDS_ViewModelContext *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  UScriptStruct *pUVar8;
  UDS_ViewModelContextManager *this_01;
  longlong lVar9;
  FDS_ViewModelContext *pFVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res10 [8];
  UDS_UserObjectListItem *local_res18;
  FName local_78;
  int local_70;
  ForAnyElementType local_68;
  int local_60;
  int local_5c;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  TSharedPtr<FDS_ViewModelContext,1> local_48;
  
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField_SearchHistoryList);
  iVar11 = 0;
  pFVar4 = TDS_Singleton<FDS_PlayerRepo>::GetInst();
  iVar1 = (pFVar4->SearchedPlayerNameList).ArrayNum;
  pFVar12 = (pFVar4->SearchedPlayerNameList).AllocatorInstance.Data;
  pFVar13 = pFVar12 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((pFVar4->SearchedPlayerNameList).ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar12 == pFVar13) {
      local_70 = FFieldNotificationClassDescriptor::EntryBindingEventField_SearchHistoryList.
                 BitNumber;
      local_78 = FFieldNotificationClassDescriptor::EntryBindingEventField_SearchHistoryList.
                 FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
      return;
    }
    local_60 = *(int *)(pFVar12 + 8);
    lVar9 = (longlong)local_60;
    _Src = *(void **)pFVar12;
    local_68.Data = (FScriptContainerElement *)0x0;
    if (local_60 == 0) {
      local_5c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_60,0,&local_68,local_60,&local_5c);
      memcpy(local_68.Data,_Src,lVar9 * 2);
    }
    pFVar10 = (FDS_ViewModelContext *)0x0;
    pUVar5 = GetTransientPackageAsObject();
    this_00 = NewObject<UDS_UserObjectListItem>(pUVar5);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this_00 != (UDS_UserObjectListItem *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    pFVar6 = ::operator_new(0x28);
    if (pFVar6 != (FDS_ViewModelContext *)0x0) {
      *(undefined8 *)&pFVar6->ViewModelTemplateKey = 0;
      *(undefined4 *)((longlong)&pFVar6[1]._padding_ + 4) = 0;
      pFVar6->DerivedStaticStruct = (UStruct *)0x0;
      (pFVar6->ViewModelName).ComparisonIndex = 0;
      (pFVar6->ViewModelName).Number = 0;
      pFVar6->_padding_ = (longlong)&___7FDS_ViewModelContext_GuildInvitePopupHistoryDropBox__6B_;
      *(undefined4 *)&pFVar6[1]._padding_ = 0;
      pFVar10 = pFVar6;
    }
    pTVar7 = ::operator_new(0x20);
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
      pTVar7 = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      pTVar7->SharedReferenceCount = (atomic<int>)0x1;
      pTVar7[1]._padding_ = (longlong)ViewModelContextDeleter;
      pTVar7->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_GuildInvitePopupHistoryDropBox__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      pTVar7->WeakReferenceCount = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pTVar7[1].SharedReferenceCount = pFVar10;
    }
    if ((pFVar10 == (FDS_ViewModelContext *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) break;
    pUVar8 = FDS_ViewModelContext_GuildInvitePopupHistoryDropBox::StaticStruct();
    pFVar10->DerivedStaticStruct = (UStruct *)pUVar8;
    this_01 = UDS_ViewModelContextManager::GetInst();
    if (this_01 != (UDS_ViewModelContextManager *)0x0) {
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_58.Object = pFVar10;
      local_58.SharedReferenceCount.ReferenceController = pTVar7;
      UDS_ViewModelContextManager::RegisterContext(this_01,&local_58);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
    }
    pFVar10->ViewModelTemplateKey = GuildInvitePopup_HistoryDropBox;
    *(int *)&pFVar10[1]._padding_ = iVar11;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_48.Object = pFVar10;
    local_48.SharedReferenceCount.ReferenceController = pTVar7;
    UDS_UserObjectListItem::AddContext(this_00,&local_48);
    local_res18 = this_00;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this_00 != (UDS_UserObjectListItem *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    FDS_EntryBindingEventField::Add
              (&this->EntryBindingEventField_SearchHistoryList,
               (TObjectPtr<UDS_UserObjectListItem>)&local_res18);
    iVar11 = iVar11 + 1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data);
    }
    pFVar12 = pFVar12 + 0x10;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// SetIsShowPlayerList @ 14beb1c10

void __thiscall
UDS_VM_GuildInvitePopup::SetIsShowPlayerList(UDS_VM_GuildInvitePopup *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::IsShowPlayerList.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsShowPlayerList.FieldName;
  if (this->IsShowPlayerList != param_1) {
    this->IsShowPlayerList = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetIsShowSearchHistoryList @ 14beb1c60

void __thiscall
UDS_VM_GuildInvitePopup::SetIsShowSearchHistoryList(UDS_VM_GuildInvitePopup *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::IsShowSearchHistoryList.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsShowSearchHistoryList.FieldName;
  if (this->IsShowSearchHistoryList != param_1) {
    this->IsShowSearchHistoryList = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetTxt_Empty @ 14beb4cc0

void __thiscall
UDS_VM_GuildInvitePopup::SetTxt_Empty(UDS_VM_GuildInvitePopup *this,FDS_Text *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::Txt_Empty.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::Txt_Empty.FieldName;
  FDS_Text::operator=(&this->Txt_Empty,param_1);
  local_18 = FVar1;
  local_10 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetTxt_SearchName @ 14beb5f30

void __thiscall
UDS_VM_GuildInvitePopup::SetTxt_SearchName(UDS_VM_GuildInvitePopup *this,FString *param_1)

{
  int iVar1;
  FName FVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  FName local_18;
  int local_10;
  
  iVar3 = FFieldNotificationClassDescriptor::Txt_SearchName.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::Txt_SearchName.FieldName;
  iVar4 = (param_1->Data).ArrayNum;
  iVar1 = (this->Txt_SearchName).Data.ArrayNum;
  if (iVar1 == iVar4) {
    if (iVar1 < 2) {
      return;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(this->Txt_SearchName).Data.AllocatorInstance.Data,
                       (wchar_t *)(param_1->Data).AllocatorInstance.Data);
    bVar5 = iVar4 == 0;
  }
  else {
    bVar5 = iVar1 + iVar4 == 1;
  }
  if (!bVar5) {
    ::FString::operator=(&this->Txt_SearchName,param_1);
    local_18 = FVar2;
    local_10 = iVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVM_TabGroup @ 14beb99b0

void __thiscall UDS_VM_GuildInvitePopup::SetVM_TabGroup(UDS_VM_GuildInvitePopup *this)

{
  code *pcVar1;
  EDS_StringTableType EVar2;
  long64 lVar3;
  FName FVar4;
  FDateTime FVar5;
  FTimespan FVar6;
  EDS_TimeExpression EVar7;
  ForAnyElementType FVar8;
  FDS_ViewModelContext_TabGroup *pFVar9;
  bool bVar10;
  int iVar11;
  UDS_VM_Common_TabGroup *pUVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  ForAnyElementType local_160;
  undefined8 local_158;
  ForAnyElementType local_150;
  undefined8 local_148;
  undefined2 local_140;
  FScriptContainerElement local_13e;
  undefined8 local_138;
  FScriptContainerElement local_130;
  long64 local_128;
  FName local_120;
  long64 local_118;
  long64 local_110;
  EDS_TimeExpression local_108;
  FScriptContainerElement local_104;
  ForAnyElementType local_100;
  undefined8 local_f8;
  ForAnyElementType local_f0;
  undefined8 local_e8;
  undefined2 local_e0;
  FScriptContainerElement local_de;
  FDS_Text local_d8;
  FDS_Text local_88;
  TSharedPtr<FDS_ViewModelContext_TabGroup,1> local_38;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  
  if ((this->VM_TabGroup).field0_0x0.DebugPtr == (UDS_VM_Common_TabGroup *)0x0) {
    pUVar12 = UDS_ViewModelBase::CreateViewModel<UDS_VM_Common_TabGroup>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar12 != (UDS_VM_Common_TabGroup *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar12);
    }
    (this->VM_TabGroup).field0_0x0.DebugPtr = pUVar12;
    if (pUVar12 == (UDS_VM_Common_TabGroup *)0x0) {
      return;
    }
  }
  MakeContext<FDS_ViewModelContext_TabGroup>(&local_38);
  pFVar9 = local_38.Object;
  if (local_38.Object != (FDS_ViewModelContext_TabGroup *)0x0) {
    if ((local_38.Object == (FDS_ViewModelContext_TabGroup *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined4 *)&pFVar9->_padding_ = 0x162;
    pFVar9->SelectedIndex = 0;
    local_d8.StringTableType = None;
    local_d8.StringTableID = 0;
    local_d8.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_d8.StringEnumTableNameID.Number = 0;
    local_d8.DateTime.Ticks = 0;
    local_d8.TimeSpan.Ticks = 0;
    local_d8.TimeExpressionType = None;
    local_d8.IsExpression = false;
    local_d8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.UniqueString.Data.ArrayNum = 0;
    local_d8.UniqueString.Data.ArrayMax = 0;
    local_d8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.FormatArgs.ArrayNum = 0;
    local_d8.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromStringTable(&local_d8,StringUi,0x334a4);
    FVar8.Data = local_d8.UniqueString.Data.AllocatorInstance.Data;
    bVar10 = local_d8.IsExpression;
    EVar7 = local_d8.TimeExpressionType;
    FVar6.Ticks = local_d8.TimeSpan.Ticks;
    FVar5.Ticks = local_d8.DateTime.Ticks;
    FVar4 = local_d8.StringEnumTableNameID;
    lVar3 = local_d8.StringTableID;
    EVar2 = local_d8.StringTableType;
    lVar14 = (longlong)local_d8.UniqueString.Data.ArrayNum;
    local_160.Data = (FScriptContainerElement *)0x0;
    local_158 = CONCAT44(local_158._4_4_,local_d8.UniqueString.Data.ArrayNum);
    if (local_d8.UniqueString.Data.ArrayNum == 0) {
      local_158 = local_d8.UniqueString.Data._8_8_ & 0xffffffff;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_d8.UniqueString.Data.ArrayNum,0,&local_160,
                 local_d8.UniqueString.Data.ArrayNum,(int *)((longlong)&local_158 + 4));
      memcpy(local_160.Data,FVar8.Data,lVar14 * 2);
    }
    FVar8.Data = local_d8.FormatArgs.AllocatorInstance.Data;
    iVar11 = local_d8.FormatArgs.ArrayNum;
    local_150.Data = (FScriptContainerElement *)0x0;
    local_148 = CONCAT44(local_148._4_4_,local_d8.FormatArgs.ArrayNum);
    if (local_d8.FormatArgs.ArrayNum == 0) {
      local_148 = local_d8.FormatArgs._8_8_ & 0xffffffff;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,local_d8.FormatArgs.ArrayNum,0,&local_150,local_d8.FormatArgs.ArrayNum,
                 (int *)((longlong)&local_148 + 4));
      ConstructItems<FDS_TextFormatArg,FDS_TextFormatArg,int>
                (local_150.Data,(FDS_TextFormatArg *)FVar8.Data,iVar11);
    }
    local_140 = 0;
    local_13e = (FScriptContainerElement)0x0;
    iVar11 = (pFVar9->TabInfos).ArrayNum;
    if (iVar11 == (pFVar9->TabInfos).ArrayMax) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x860,&(pFVar9->TabInfos).AllocatorInstance,&(pFVar9->TabInfos).ArrayMax);
    }
    (pFVar9->TabInfos).ArrayNum = iVar11 + 1;
    pFVar13 = (pFVar9->TabInfos).AllocatorInstance.Data + (longlong)iVar11 * 0x60;
    *(undefined4 *)pFVar13 = 0xffffffff;
    *(undefined4 *)(pFVar13 + 4) = 0xffffffff;
    pFVar13[8] = (FScriptContainerElement)EVar2;
    *(long64 *)(pFVar13 + 0x10) = lVar3;
    *(FName *)(pFVar13 + 0x18) = FVar4;
    *(long64 *)(pFVar13 + 0x20) = FVar5.Ticks;
    *(long64 *)(pFVar13 + 0x28) = FVar6.Ticks;
    *(EDS_TimeExpression *)(pFVar13 + 0x30) = EVar7;
    *(undefined8 *)(pFVar13 + 0x38) = 0;
    pFVar13[0x34] = (FScriptContainerElement)bVar10;
    *(FScriptContainerElement **)(pFVar13 + 0x38) = local_160.Data;
    local_160.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)(pFVar13 + 0x40) = (undefined4)local_158;
    *(undefined4 *)(pFVar13 + 0x44) = local_158._4_4_;
    local_158 = 0;
    *(undefined8 *)(pFVar13 + 0x48) = 0;
    *(FScriptContainerElement **)(pFVar13 + 0x48) = local_150.Data;
    local_150.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)(pFVar13 + 0x50) = (undefined4)local_148;
    *(undefined4 *)(pFVar13 + 0x54) = local_148._4_4_;
    local_148 = 0;
    pFVar13[0x58] = local_140._0_1_;
    pFVar13[0x59] = local_140._1_1_;
    pFVar13[0x5a] = local_13e;
    DestructItems<FDS_TextFormatArg,int>((FDS_TextFormatArg *)0x0,0);
    if (local_150.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Data);
    }
    if (local_160.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data);
    }
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_d8.FormatArgs.AllocatorInstance.Data,
               local_d8.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_d8.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0)
    {
      FMemory::Free(local_d8.FormatArgs.AllocatorInstance.Data);
    }
    if (local_d8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.UniqueString.Data.AllocatorInstance.Data);
    }
    local_88.StringTableType = None;
    local_88.StringTableID = 0;
    local_88.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_88.StringEnumTableNameID.Number = 0;
    local_88.TimeExpressionType = None;
    local_88.DateTime.Ticks = 0;
    local_88.TimeSpan.Ticks = 0;
    local_88.IsExpression = false;
    local_88.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.UniqueString.Data.ArrayNum = 0;
    local_88.UniqueString.Data.ArrayMax = 0;
    local_88.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.FormatArgs.ArrayNum = 0;
    local_88.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromStringTable(&local_88,StringUi,0x334a6);
    FVar8.Data = local_88.UniqueString.Data.AllocatorInstance.Data;
    lVar14 = (longlong)local_88.UniqueString.Data.ArrayNum;
    local_130 = (FScriptContainerElement)local_88.StringTableType;
    local_128 = local_88.StringTableID;
    local_120 = local_88.StringEnumTableNameID;
    local_118 = local_88.DateTime.Ticks;
    local_110 = local_88.TimeSpan.Ticks;
    local_108 = local_88.TimeExpressionType;
    local_104 = (FScriptContainerElement)local_88.IsExpression;
    local_138 = 0xffffffffffffffff;
    local_100.Data = (FScriptContainerElement *)0x0;
    local_f8 = CONCAT44(local_f8._4_4_,local_88.UniqueString.Data.ArrayNum);
    if (local_88.UniqueString.Data.ArrayNum == 0) {
      local_f8 = local_88.UniqueString.Data._8_8_ & 0xffffffff;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_88.UniqueString.Data.ArrayNum,0,&local_100,
                 local_88.UniqueString.Data.ArrayNum,(int *)((longlong)&local_f8 + 4));
      memcpy(local_100.Data,FVar8.Data,lVar14 * 2);
    }
    FVar8.Data = local_88.FormatArgs.AllocatorInstance.Data;
    iVar11 = local_88.FormatArgs.ArrayNum;
    local_f0.Data = (FScriptContainerElement *)0x0;
    local_e8 = CONCAT44(local_e8._4_4_,local_88.FormatArgs.ArrayNum);
    if (local_88.FormatArgs.ArrayNum == 0) {
      local_e8 = local_88.FormatArgs._8_8_ & 0xffffffff;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,local_88.FormatArgs.ArrayNum,0,&local_f0,local_88.FormatArgs.ArrayNum,
                 (int *)((longlong)&local_e8 + 4));
      ConstructItems<FDS_TextFormatArg,FDS_TextFormatArg,int>
                (local_f0.Data,(FDS_TextFormatArg *)FVar8.Data,iVar11);
    }
    local_e0 = 0;
    local_de = (FScriptContainerElement)0x0;
    iVar11 = (pFVar9->TabInfos).ArrayNum;
    if (iVar11 == (pFVar9->TabInfos).ArrayMax) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x860,&(pFVar9->TabInfos).AllocatorInstance,&(pFVar9->TabInfos).ArrayMax);
    }
    (pFVar9->TabInfos).ArrayNum = iVar11 + 1;
    pFVar13 = (pFVar9->TabInfos).AllocatorInstance.Data + (longlong)iVar11 * 0x60;
    *(undefined4 *)pFVar13 = (undefined4)local_138;
    *(undefined4 *)(pFVar13 + 4) = local_138._4_4_;
    pFVar13[8] = local_130;
    *(long64 *)(pFVar13 + 0x10) = local_128;
    *(FName *)(pFVar13 + 0x18) = local_120;
    *(long64 *)(pFVar13 + 0x20) = local_118;
    *(long64 *)(pFVar13 + 0x28) = local_110;
    *(EDS_TimeExpression *)(pFVar13 + 0x30) = local_108;
    *(undefined8 *)(pFVar13 + 0x38) = 0;
    pFVar13[0x34] = local_104;
    *(FScriptContainerElement **)(pFVar13 + 0x38) = local_100.Data;
    local_100.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)(pFVar13 + 0x40) = (undefined4)local_f8;
    *(undefined4 *)(pFVar13 + 0x44) = local_f8._4_4_;
    local_f8 = 0;
    *(undefined8 *)(pFVar13 + 0x48) = 0;
    *(FScriptContainerElement **)(pFVar13 + 0x48) = local_f0.Data;
    local_f0.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)(pFVar13 + 0x50) = (undefined4)local_e8;
    *(undefined4 *)(pFVar13 + 0x54) = local_e8._4_4_;
    local_e8 = 0;
    pFVar13[0x58] = local_e0._0_1_;
    pFVar13[0x59] = local_e0._1_1_;
    pFVar13[0x5a] = local_de;
    DestructItems<FDS_TextFormatArg,int>((FDS_TextFormatArg *)0x0,0);
    if (local_f0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data);
    }
    if (local_100.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data);
    }
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_88.FormatArgs.AllocatorInstance.Data,
               local_88.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_88.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0)
    {
      FMemory::Free(local_88.FormatArgs.AllocatorInstance.Data);
    }
    if (local_88.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.UniqueString.Data.AllocatorInstance.Data);
    }
    pUVar12 = (this->VM_TabGroup).field0_0x0.DebugPtr;
    local_28.Object = (FDS_ViewModelContext *)local_38.Object;
    local_28.SharedReferenceCount.ReferenceController =
         local_38.SharedReferenceCount.ReferenceController;
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar12,&local_28);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  return;
}

// UnbindModel @ 14bebbea0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_GuildInvitePopup::UnbindModel(UDS_VM_GuildInvitePopup *this)

{
  UDS_LanguageManager *pUVar1;
  
  pUVar1 = UDS_LanguageManager::GetInst();
  if (pUVar1 != (UDS_LanguageManager *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnLanguageChanged,this
              );
  }
  return;
}

// UpdateFriendList @ 14bebe5e0

void __thiscall UDS_VM_GuildInvitePopup::UpdateFriendList(UDS_VM_GuildInvitePopup *this)

{
  FName local_18;
  int local_10;
  
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField_PlayerList);
  local_10 = FFieldNotificationClassDescriptor::EntryBindingEventField_PlayerList.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::EntryBindingEventField_PlayerList.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

