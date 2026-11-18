// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 35

// SetSearchNameTextCommitted_WrapperImpl @ 14b6adfe0

void __cdecl
UDS_VM_PartyInvitation::SetSearchNameTextCommitted_WrapperImpl(void *param_1,void *param_2)

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
  ::FString::operator=((FString *)((longlong)param_1 + 0x160),pFVar3);
  iVar1 = FFieldNotificationClassDescriptor::bIsShowSearchedList.BitNumber;
  FStack_88 = FFieldNotificationClassDescriptor::bIsShowSearchedList.FieldName;
  if (*(int *)((longlong)param_2 + 0x10) != 1) {
    return;
  }
  if (*(int *)((longlong)param_1 + 0x168) < 2) {
    return;
  }
  if (*(char *)((longlong)param_1 + 0x159) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x159) = 0;
    FStack_80.Data._0_4_ = iVar1;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_88);
  }
  FStack_88 = (FName)SearchPlayerResultEvent;
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
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_PartyInvitation____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
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
    if (FStack_28.Data == (FScriptContainerElement *)0x0) goto LAB_14bf03a35;
    (*(code *)**(undefined8 **)FStack_28.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_28,0,0,0x10);
    iStack_20 = 0;
  }
  if (FStack_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_28.Data);
  }
LAB_14bf03a35:
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
            ((FString *)((longlong)param_1 + 0x160),
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

// SetSearchNameTextChanged_WrapperImpl @ 14b6adff0

void __cdecl
UDS_VM_PartyInvitation::SetSearchNameTextChanged_WrapperImpl(void *param_1,void *param_2)

{
  UDS_VM_Common_TabGroup *this;
  bool bVar1;
  byte bVar2;
  FName FStack_18;
  int iStack_10;
  
  this = *(UDS_VM_Common_TabGroup **)((longlong)param_1 + 0x210);
  if ((this != (UDS_VM_Common_TabGroup *)0x0) && (this->SelectedIndex != 2)) {
    UDS_VM_Common_TabGroup::SetSelectedIndex(this,2);
  }
  bVar1 = FText::IsEmpty(param_2);
  iStack_10 = FFieldNotificationClassDescriptor::bIsShowSearchedList.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::bIsShowSearchedList.FieldName;
  bVar2 = *(byte *)((longlong)param_1 + 0x159) | bVar1;
  if (*(byte *)((longlong)param_1 + 0x159) != bVar2) {
    *(byte *)((longlong)param_1 + 0x159) = bVar2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  }
  return;
}

// SetClickClose_WrapperImpl @ 14b6ae000

void __cdecl UDS_VM_PartyInvitation::SetClickClose_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined1 *)((longlong)param_1 + 0xf0) = 1;
  iStack_10 = FFieldNotificationClassDescriptor::CloseMyselfEvent.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::CloseMyselfEvent.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetClickSearch_WrapperImpl @ 14b6ae010

void __cdecl UDS_VM_PartyInvitation::SetClickSearch_WrapperImpl(void *param_1,void *param_2)

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
  
  iVar1 = FFieldNotificationClassDescriptor::bIsShowSearchedList.BitNumber;
  FStack_88 = FFieldNotificationClassDescriptor::bIsShowSearchedList.FieldName;
  if (*(int *)((longlong)param_1 + 0x168) < 2) {
    return;
  }
  if (*(char *)((longlong)param_1 + 0x159) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x159) = 0;
    FStack_80.Data._0_4_ = iVar1;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_88);
  }
  FStack_88 = (FName)SearchPlayerResultEvent;
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
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_PartyInvitation____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
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
    if (FStack_28.Data == (FScriptContainerElement *)0x0) goto LAB_14befac0a;
    (*(code *)**(undefined8 **)FStack_28.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_28,0,0,0x10);
    iStack_20 = 0;
  }
  if (FStack_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_28.Data);
  }
LAB_14befac0a:
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
            ((FString *)((longlong)param_1 + 0x160),
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

// SetClickTextClear_WrapperImpl @ 14b6ae020

void __cdecl UDS_VM_PartyInvitation::SetClickTextClear_WrapperImpl(void *param_1,void *param_2)

{
  int iVar1;
  FString FStack_18;
  
  FStack_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_18.Data.ArrayNum = 0;
  FStack_18.Data.ArrayMax = 0;
  SetCurrentSearchName(param_1,&FStack_18);
  if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
  }
  iVar1 = FFieldNotificationClassDescriptor::bIsShowSearchedList.BitNumber;
  FStack_18.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)FFieldNotificationClassDescriptor::bIsShowSearchedList.FieldName;
  if (*(char *)((longlong)param_1 + 0x159) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x159) = 0;
    FStack_18.Data.ArrayNum = iVar1;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  }
  return;
}

// SetbHasPlayerList_WrapperImpl @ 14b6ae030

void __cdecl UDS_VM_PartyInvitation::SetbHasPlayerList_WrapperImpl(void *param_1,void *param_2)

{
  SetHasPlayerList(param_1,*(bool *)param_2);
  return;
}

// SetbIsShowSearchedList_WrapperImpl @ 14b6ae040

void __cdecl UDS_VM_PartyInvitation::SetbIsShowSearchedList_WrapperImpl(void *param_1,void *param_2)

{
  SetIsShowSearchedList(param_1,*(bool *)param_2);
  return;
}

// SetCurrentSearchName_WrapperImpl @ 14b6ae050

void __cdecl UDS_VM_PartyInvitation::SetCurrentSearchName_WrapperImpl(void *param_1,void *param_2)

{
  FName FVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  FName FStack_18;
  int iStack_10;
  
  iVar2 = FFieldNotificationClassDescriptor::CurrentSearchName.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::CurrentSearchName.FieldName;
  iVar3 = *(int *)((longlong)param_1 + 0x168);
  if (iVar3 == *(int *)((longlong)param_2 + 8)) {
    if (iVar3 < 2) {
      return;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp
                      (*(wchar_t **)((longlong)param_1 + 0x160),*(wchar_t **)param_2);
    bVar4 = iVar3 == 0;
  }
  else {
    bVar4 = iVar3 + *(int *)((longlong)param_2 + 8) == 1;
  }
  if (!bVar4) {
    ::FString::operator=((FString *)((longlong)param_1 + 0x160),param_2);
    FStack_18 = FVar1;
    iStack_10 = iVar2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  }
  return;
}

// SetEmptyText_WrapperImpl @ 14b6ae060

void __cdecl UDS_VM_PartyInvitation::SetEmptyText_WrapperImpl(void *param_1,void *param_2)

{
  FName FVar1;
  int iVar2;
  FName FStack_18;
  int iStack_10;
  
  iVar2 = FFieldNotificationClassDescriptor::EmptyText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::EmptyText.FieldName;
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 0x1c0),param_2);
  FStack_18 = FVar1;
  iStack_10 = iVar2;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// StaticClass @ 14b6ae070

UClass * __cdecl UDS_VM_PartyInvitation::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_PartyInvitation.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_PartyInvitation",
               &Z_Registration_Info_UClass_UDS_VM_PartyInvitation.InnerSingleton,
               StaticRegisterNativesUDS_VM_PartyInvitation,0x220,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_PartyInvitation>,
               InternalVTableHelperCtorCaller<UDS_VM_PartyInvitation>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_PartyInvitation.InnerSingleton;
}

// UDS_VM_PartyInvitation @ 14b6b30a0

UDS_VM_PartyInvitation * __thiscall
UDS_VM_PartyInvitation::UDS_VM_PartyInvitation(UDS_VM_PartyInvitation *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->SearchedNameEntry).UserObjectList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_PartyInvitation__6B_;
  (this->SearchedNameEntry).UserObjectList.ArrayNum = 0;
  (this->SearchedNameEntry).UserObjectList.ArrayMax = 0;
  (this->SearchPlayerEntry).UserObjectList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SearchPlayerEntry).UserObjectList.ArrayNum = 0;
  (this->SearchPlayerEntry).UserObjectList.ArrayMax = 0;
  FText::FText(&(this->SearchNameTextCommitted).NewText);
  FText::FText(&(this->SearchNameTextChanged).NewText);
  (this->CloseMyselfEvent).bIsActivate = false;
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
  this->bHasPlayerList = false;
  this->bIsShowSearchedList = false;
  (this->CurrentSearchName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentSearchName).Data.ArrayNum = 0;
  (this->CurrentSearchName).Data.ArrayMax = 0;
  (this->SearchNameHint).StringTableType = StringUi;
  (this->SearchNameHint).StringTableID = 0x41efd;
  (this->SearchNameHint).StringEnumTableNameID.ComparisonIndex = 0;
  (this->SearchNameHint).StringEnumTableNameID.Number = 0;
  (this->SearchNameHint).DateTime.Ticks = 0;
  (this->SearchNameHint).TimeSpan.Ticks = 0;
  (this->SearchNameHint).TimeExpressionType = None;
  (this->SearchNameHint).IsExpression = false;
  (this->SearchNameHint).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SearchNameHint).UniqueString.Data.ArrayNum = 0;
  (this->SearchNameHint).UniqueString.Data.ArrayMax = 0;
  (this->SearchNameHint).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SearchNameHint).FormatArgs.ArrayNum = 0;
  (this->SearchNameHint).FormatArgs.ArrayMax = 0;
  (this->EmptyText).StringTableType = None;
  (this->EmptyText).StringTableID = 0;
  (this->EmptyText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->EmptyText).StringEnumTableNameID.Number = 0;
  (this->EmptyText).DateTime.Ticks = 0;
  (this->EmptyText).TimeSpan.Ticks = 0;
  (this->EmptyText).TimeExpressionType = None;
  (this->EmptyText).IsExpression = false;
  (this->EmptyText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EmptyText).UniqueString.Data.ArrayNum = 0;
  (this->EmptyText).UniqueString.Data.ArrayMax = 0;
  (this->EmptyText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EmptyText).FormatArgs.ArrayNum = 0;
  (this->EmptyText).FormatArgs.ArrayMax = 0;
  (this->TabGroup).field0_0x0.DebugPtr = (UDS_VM_Common_TabGroup *)0x0;
  this->PartyType = None;
  return this;
}

// UDS_VM_PartyInvitation @ 14b6b3230

UDS_VM_PartyInvitation * __thiscall
UDS_VM_PartyInvitation::UDS_VM_PartyInvitation
          (UDS_VM_PartyInvitation *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->SearchedNameEntry).UserObjectList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_PartyInvitation__6B_;
  (this->SearchedNameEntry).UserObjectList.ArrayNum = 0;
  (this->SearchedNameEntry).UserObjectList.ArrayMax = 0;
  (this->SearchPlayerEntry).UserObjectList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SearchPlayerEntry).UserObjectList.ArrayNum = 0;
  (this->SearchPlayerEntry).UserObjectList.ArrayMax = 0;
  FText::FText(&(this->SearchNameTextCommitted).NewText);
  FText::FText(&(this->SearchNameTextChanged).NewText);
  (this->CloseMyselfEvent).bIsActivate = false;
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
  this->bHasPlayerList = false;
  this->bIsShowSearchedList = false;
  (this->CurrentSearchName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentSearchName).Data.ArrayNum = 0;
  (this->CurrentSearchName).Data.ArrayMax = 0;
  (this->SearchNameHint).StringTableType = StringUi;
  (this->SearchNameHint).StringTableID = 0x41efd;
  (this->SearchNameHint).StringEnumTableNameID.ComparisonIndex = 0;
  (this->SearchNameHint).StringEnumTableNameID.Number = 0;
  (this->SearchNameHint).DateTime.Ticks = 0;
  (this->SearchNameHint).TimeSpan.Ticks = 0;
  (this->SearchNameHint).TimeExpressionType = None;
  (this->SearchNameHint).IsExpression = false;
  (this->SearchNameHint).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SearchNameHint).UniqueString.Data.ArrayNum = 0;
  (this->SearchNameHint).UniqueString.Data.ArrayMax = 0;
  (this->SearchNameHint).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SearchNameHint).FormatArgs.ArrayNum = 0;
  (this->SearchNameHint).FormatArgs.ArrayMax = 0;
  (this->EmptyText).StringTableType = None;
  (this->EmptyText).StringTableID = 0;
  (this->EmptyText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->EmptyText).StringEnumTableNameID.Number = 0;
  (this->EmptyText).DateTime.Ticks = 0;
  (this->EmptyText).TimeSpan.Ticks = 0;
  (this->EmptyText).TimeExpressionType = None;
  (this->EmptyText).IsExpression = false;
  (this->EmptyText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EmptyText).UniqueString.Data.ArrayNum = 0;
  (this->EmptyText).UniqueString.Data.ArrayMax = 0;
  (this->EmptyText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EmptyText).FormatArgs.ArrayNum = 0;
  (this->EmptyText).FormatArgs.ArrayMax = 0;
  (this->TabGroup).field0_0x0.DebugPtr = (UDS_VM_Common_TabGroup *)0x0;
  this->PartyType = None;
  return this;
}

// ~UDS_VM_PartyInvitation @ 14b6b4550

void __thiscall UDS_VM_PartyInvitation::~UDS_VM_PartyInvitation(UDS_VM_PartyInvitation *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  ITextData *pIVar3;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_PartyInvitation__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->EmptyText).FormatArgs.AllocatorInstance.Data,
             (this->EmptyText).FormatArgs.ArrayNum);
  pFVar1 = (this->EmptyText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EmptyText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->SearchNameHint).FormatArgs.AllocatorInstance.Data,
             (this->SearchNameHint).FormatArgs.ArrayNum);
  pFVar1 = (this->SearchNameHint).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SearchNameHint).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CurrentSearchName).Data.AllocatorInstance.Data;
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
  pFVar1 = (this->SearchPlayerEntry).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SearchedNameEntry).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6b6c50

IClassDescriptor * __thiscall
UDS_VM_PartyInvitation::GetFieldNotificationDescriptor(UDS_VM_PartyInvitation *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_PartyInvitation::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6b7a60

UClass * __cdecl UDS_VM_PartyInvitation::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_PartyInvitation.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_PartyInvitation",
               &Z_Registration_Info_UClass_UDS_VM_PartyInvitation.InnerSingleton,
               StaticRegisterNativesUDS_VM_PartyInvitation,0x220,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_PartyInvitation>,
               InternalVTableHelperCtorCaller<UDS_VM_PartyInvitation>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_PartyInvitation.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_PartyInvitation @ 14b6b7eb0

void __cdecl UDS_VM_PartyInvitation::StaticRegisterNativesUDS_VM_PartyInvitation(void)

{
  return;
}

// __VTableCtorCaller @ 14b6b94b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UDS_VM_PartyInvitation::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDS_ViewModelBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  this = (UDS_ViewModelBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDS_ViewModelBase *)0x0) {
    UDS_ViewModelBase::UDS_ViewModelBase(this,param_1);
    this->_padding_ = (longlong)&_vftable__for__UObject__;
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
    this->_padding_ = (longlong)&___7UDS_VM_PartyInvitation__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FText::FText((FText *)&this[1]._padding_);
    FText::FText((FText *)&this[1]._padding_);
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1].ViewModelContext.Object = 0;
    *(undefined4 *)&this[1].ViewModelContext.SharedReferenceCount.ReferenceController = 0;
    this[1].Visibility = Visible;
    *(undefined3 *)&this[1].field_0x81 = 0;
    this[1].VMName.ComparisonIndex = 0;
    *(undefined8 *)&this[1].VMName.Number = 0;
    *(undefined4 *)&this[1].TextPropertyIDList.AllocatorInstance.Data = 0;
    this[1].TextPropertyIDList.ArrayNum = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined2 *)&this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined1 *)&this[2]._padding_ = 2;
    this[2]._padding_ = 0x41efd;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined1 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2].ViewModelContext.Object = (FDS_ViewModelContext *)0x0;
    this[2].ViewModelContext.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    this[2].Visibility = Visible;
    *(undefined8 *)&this[2].VMName.Number = 0;
    this[2].TextPropertyIDList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[2].TextPropertyIDList.ArrayNum = 0;
    this[2].TextPropertyIDList.ArrayMax = 0;
    this[3]._padding_ = 0;
    *(undefined4 *)&this[3]._padding_ = 0;
    *(undefined1 *)((longlong)&this[3]._padding_ + 4) = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    *(undefined4 *)&this[3]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// BindModel @ 14bed97b0

void __thiscall UDS_VM_PartyInvitation::BindModel(UDS_VM_PartyInvitation *this)

{
  TObjectPtr<UDS_VM_Common_TabGroup>_u_0 TVar1;
  UDS_UIEvent *pUVar2;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  UDS_PartyEvent *pUVar3;
  UDS_PlayerEvent *pUVar4;
  FWeakObjectPtr local_res10;
  TObjectPtr<UDS_VM_Common_TabGroup>_u_0 local_res18;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar2 = UDS_UIEvent::GetEvent();
  if (pUVar2 != (UDS_UIEvent *)0x0) {
    TVar1 = (TObjectPtr<UDS_VM_Common_TabGroup>_u_0)(this->TabGroup).field0_0x0.DebugPtr;
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
    local_res18 = TVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar1.DebugPtr != (UDS_VM_Common_TabGroup *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
    this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
              TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,0>_>
              ::FindOrAddImpl<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&>
                        ((TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,0>_>
                          *)&(pUVar2->OnSelectedTabIndex).Subscriptions,
                         local_res10.ObjectSerialNumber ^ local_res10.ObjectIndex,
                         (TWeakObjectPtr<UObject,FWeakObjectPtr> *)&local_res10);
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(this_00,this);
    TMulticastDelegateRegistration<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>::
    AddUObject<UDS_VM_PartyInvitation>
              ((TMulticastDelegateRegistration<void___cdecl(int,int),FDefaultTSDelegateUserPolicy> *
               )this_00,(UDS_VM_PartyInvitation *)&local_res18.ObjectPtr,(pmf_e69455c0 *)this);
  }
  pUVar3 = UDS_PartyEvent::GetEvent();
  if (pUVar3 != (UDS_PartyEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3->OnPartyInvitePlayer,
               this);
    TMulticastDelegateRegistration<void___cdecl(int,__int64),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_PartyInvitation>
              ((TMulticastDelegateRegistration<void___cdecl(int,__int64),FDefaultDelegateUserPolicy>
                *)&pUVar3->OnPartyInvitePlayer,(UDS_VM_PartyInvitation *)&local_res10,
               (pmf_efbbc227 *)this);
  }
  pUVar4 = UDS_PlayerEvent::GetEvent();
  if (pUVar4 != (UDS_PlayerEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar4->OnUpdateSearchPlayerNames,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_PartyInvitation>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar4->OnUpdateSearchPlayerNames,(UDS_VM_PartyInvitation *)&local_res10,
               (pmf_ad89152a *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar4->OnClickSearchedNameEntry,this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_PartyInvitation>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar4->OnClickSearchedNameEntry,(UDS_VM_PartyInvitation *)&local_res10,
               (pmf_914193ec *)this);
  }
  return;
}

// InitViewModel @ 14bef3af0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_VM_PartyInvitation::InitViewModel(UDS_VM_PartyInvitation *this)

{
  FName FVar1;
  FName FVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_VM_Common_TabGroup *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if ((this->TabGroup).field0_0x0.DebugPtr == (UDS_VM_Common_TabGroup *)0x0) {
    local_a8.ComparisonIndex.Value = 0;
    local_a8.Number = 0;
    pUVar3 = Z_Construct_UClass_UDS_VM_Common_TabGroup_NoRegister();
    FVar1 = local_a8;
    if (local_a8 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar4 = Z_Construct_UClass_UDS_VM_Common_TabGroup_NoRegister();
    CheckIsClassChildOf_Internal(pUVar4,pUVar3);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar3);
    FVar2 = local_a8;
    local_98._48_8_ = (FObjectInstancingGraph *)0x0;
    local_98._56_8_ = (UPackage *)0x0;
    local_a8.ComparisonIndex = FVar1.ComparisonIndex.Value;
    local_a8.Number = FVar1.Number;
    local_98._16_4_ = local_a8.ComparisonIndex.Value;
    local_98._20_4_ = local_a8.Number;
    local_98._24_4_ = RF_Transient;
    local_98._40_8_ = (UObject *)0x0;
    local_98[0x20] = false;
    local_a8 = FVar2;
    local_98._8_8_ = this;
    pUVar5 = (UDS_VM_Common_TabGroup *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar6 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    if (pUVar5 != (UDS_VM_Common_TabGroup *)0x0) {
      *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_VM_Common_TabGroup *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->TabGroup).field0_0x0.DebugPtr = pUVar5;
  }
  return;
}

// OnClickClose @ 14bef8e60

void __thiscall
UDS_VM_PartyInvitation::OnClickClose(UDS_VM_PartyInvitation *this,FDS_ButtonEventField *param_1)

{
  FName local_18;
  int local_10;
  
  (this->CloseMyselfEvent).bIsActivate = true;
  local_10 = FFieldNotificationClassDescriptor::CloseMyselfEvent.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::CloseMyselfEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnClickSearch @ 14befaa10

void __thiscall
UDS_VM_PartyInvitation::OnClickSearch(UDS_VM_PartyInvitation *this,FDS_ButtonEventField *param_1)

{
  int iVar1;
  ForAnyElementType FVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  UDS_VM_PartyInvitation *local_res8;
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
  
  iVar1 = FFieldNotificationClassDescriptor::bIsShowSearchedList.BitNumber;
  local_88 = FFieldNotificationClassDescriptor::bIsShowSearchedList.FieldName;
  if ((this->CurrentSearchName).Data.ArrayNum < 2) {
    return;
  }
  if (this->bIsShowSearchedList != false) {
    this->bIsShowSearchedList = false;
    FStack_80.Data._0_4_ = iVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
  }
  local_88 = (FName)SearchPlayerResultEvent;
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
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_PartyInvitation____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_VM_PartyInvitation *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar3[3] = 0;
    local_res8 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_VM_PartyInvitation *)0x0)) {
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
    if (local_28.Data == (FScriptContainerElement *)0x0) goto LAB_14befac0a;
    (*(code *)**(undefined8 **)local_28.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_28,0,0,0x10);
    local_20 = 0;
  }
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
LAB_14befac0a:
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
            (&this->CurrentSearchName,
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

// OnClickSearchedNameEntry @ 14befad30

void __thiscall
UDS_VM_PartyInvitation::OnClickSearchedNameEntry(UDS_VM_PartyInvitation *this,int param_1)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  int iVar3;
  bool bVar4;
  FDS_PlayerRepo *pFVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  UDS_VM_PartyInvitation *local_res18 [2];
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
  SetCurrentSearchName
            (this,(FString *)
                  ((pFVar5->SearchedPlayerNameList).AllocatorInstance.Data +
                  (longlong)param_1 * 0x10));
  iStack_c0 = FFieldNotificationClassDescriptor::bIsShowSearchedList.BitNumber;
  local_c8 = FFieldNotificationClassDescriptor::bIsShowSearchedList.FieldName;
  if (this->bIsShowSearchedList != false) {
    this->bIsShowSearchedList = false;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_c8);
  }
  local_c8 = (FName)SearchPlayerResultEvent;
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
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_PartyInvitation____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_VM_PartyInvitation *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar6[3] = 0;
    local_res18[0] = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_VM_PartyInvitation *)0x0)) {
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
    if (local_e0.Data == (FScriptContainerElement *)0x0) goto LAB_14befaf8f;
    (*(code *)**(undefined8 **)local_e0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_e0,0,0,0x10);
    local_d8 = 0;
  }
  if (local_e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data);
  }
LAB_14befaf8f:
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
            (&this->CurrentSearchName,
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

// OnClickTextClear @ 14befb3b0

void __thiscall
UDS_VM_PartyInvitation::OnClickTextClear(UDS_VM_PartyInvitation *this,FDS_ButtonEventField *param_1)

{
  int iVar1;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  SetCurrentSearchName(this,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  iVar1 = FFieldNotificationClassDescriptor::bIsShowSearchedList.BitNumber;
  local_18.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)FFieldNotificationClassDescriptor::bIsShowSearchedList.FieldName;
  if (this->bIsShowSearchedList != false) {
    this->bIsShowSearchedList = false;
    local_18.Data.ArrayNum = iVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnPartyInvitePlayer @ 14bf02970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_PartyInvitation::OnPartyInvitePlayer(UDS_VM_PartyInvitation *this,int param_1,long64 param_2)

{
  UDS_LogManager *pUVar1;
  undefined1 auStackY_188 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pUVar1 = UDS_LogManager::GetInst();
  if (pUVar1 != (UDS_LogManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_VM_PartyInvitation::OnPartyInvitePlayer",0x2b,Yes);
    UDS_LogManager::PrintLog
              (pUVar1,1,Display,local_148.Ptr,0x12d,
               L"[Party] OnPartyInvitePlayer - GameServerIndex : %d, PlayerUID : %lld");
    if ((void *)local_148._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_148._padding_);
    }
  }
  if (this->PartyType == Party) {
    FDS_PartyService::RequestPartyInvite(param_1,param_2);
  }
  else if (this->PartyType == RaidParty) {
    FDS_RaidPartyService::RequestRaidPartyInvite(param_2);
  }
  return;
}

// OnSearchNameTextChanged @ 14bf03790

void __thiscall
UDS_VM_PartyInvitation::OnSearchNameTextChanged
          (UDS_VM_PartyInvitation *this,FDS_TextCommittedEventField *param_1)

{
  UDS_VM_Common_TabGroup *this_00;
  bool bVar1;
  FName local_18;
  int local_10;
  
  this_00 = (this->TabGroup).field0_0x0.DebugPtr;
  if ((this_00 != (UDS_VM_Common_TabGroup *)0x0) && (this_00->SelectedIndex != 2)) {
    UDS_VM_Common_TabGroup::SetSelectedIndex(this_00,2);
  }
  bVar1 = FText::IsEmpty(&param_1->NewText);
  local_10 = FFieldNotificationClassDescriptor::bIsShowSearchedList.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bIsShowSearchedList.FieldName;
  bVar1 = (bool)(this->bIsShowSearchedList | bVar1);
  if (this->bIsShowSearchedList != bVar1) {
    this->bIsShowSearchedList = bVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnSearchNameTextCommitted @ 14bf03820

void __thiscall
UDS_VM_PartyInvitation::OnSearchNameTextCommitted
          (UDS_VM_PartyInvitation *this,FDS_TextCommittedEventField *param_1)

{
  int iVar1;
  ForAnyElementType FVar2;
  FString *pFVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  UDS_VM_PartyInvitation *local_res8;
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
  ::FString::operator=(&this->CurrentSearchName,pFVar3);
  iVar1 = FFieldNotificationClassDescriptor::bIsShowSearchedList.BitNumber;
  local_88 = FFieldNotificationClassDescriptor::bIsShowSearchedList.FieldName;
  if (param_1->CommitType != OnEnter) {
    return;
  }
  if ((this->CurrentSearchName).Data.ArrayNum < 2) {
    return;
  }
  if (this->bIsShowSearchedList != false) {
    this->bIsShowSearchedList = false;
    FStack_80.Data._0_4_ = iVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
  }
  local_88 = (FName)SearchPlayerResultEvent;
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
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_PartyInvitation____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
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
    if (local_28.Data == (FScriptContainerElement *)0x0) goto LAB_14bf03a35;
    (*(code *)**(undefined8 **)local_28.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_28,0,0,0x10);
    local_20 = 0;
  }
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
LAB_14bf03a35:
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
            (&this->CurrentSearchName,
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

// OnSelectedTabIndex @ 14bf04440

void __thiscall
UDS_VM_PartyInvitation::OnSelectedTabIndex(UDS_VM_PartyInvitation *this,int param_1,int param_2)

{
  int iVar1;
  FName FVar2;
  long64 lVar3;
  FString local_78;
  FDS_Text local_68;
  
  if (param_1 == 0) {
    lVar3 = 0x41ef7;
  }
  else if (param_1 == 1) {
    lVar3 = 0x41ef8;
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
  iVar1 = FFieldNotificationClassDescriptor::EmptyText.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::EmptyText.FieldName;
  FDS_Text::operator=(&this->EmptyText,&local_68);
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
  SetCurrentSearchName(this,&local_78);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  iVar1 = FFieldNotificationClassDescriptor::bIsShowSearchedList.BitNumber;
  local_78.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)FFieldNotificationClassDescriptor::bIsShowSearchedList.FieldName;
  if (this->bIsShowSearchedList != false) {
    this->bIsShowSearchedList = false;
    local_78.Data.ArrayNum = iVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
  }
  return;
}

// OnSetViewModel @ 14bf096d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_PartyInvitation::OnSetViewModel
          (UDS_VM_PartyInvitation *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  UDS_VM_Common_TabGroup *pUVar2;
  code *pcVar3;
  FName FVar4;
  int iVar5;
  EDS_StringTableType EVar6;
  long64 lVar7;
  FDateTime FVar8;
  FTimespan FVar9;
  EDS_TimeExpression EVar10;
  ForAnyElementType FVar11;
  bool bVar12;
  uint uVar13;
  UDS_LogManager *pUVar14;
  FDS_ViewModelContext *pFVar15;
  UScriptStruct *pUVar16;
  UDS_ViewModelContextManager *this_00;
  undefined4 *puVar17;
  FDS_ViewModelContext *pFVar18;
  FDS_ViewModelContext *pFVar19;
  longlong lVar20;
  undefined1 auStackY_428 [32];
  ForAnyElementType local_3a8;
  undefined8 local_3a0;
  ForAnyElementType local_398;
  undefined8 local_390;
  undefined2 local_388;
  undefined1 local_386;
  undefined8 local_380;
  EDS_StringTableType local_378;
  long64 local_370;
  FName local_368;
  long64 local_360;
  long64 local_358;
  EDS_TimeExpression local_350;
  undefined1 local_34c;
  ForAnyElementType local_348;
  undefined8 local_340;
  ForAnyElementType local_338;
  undefined8 local_330;
  undefined2 local_328;
  undefined1 local_326;
  undefined8 local_320;
  EDS_StringTableType local_318;
  long64 local_310;
  FName local_308;
  long64 local_300;
  long64 local_2f8;
  EDS_TimeExpression local_2f0;
  undefined1 local_2ec;
  ForAnyElementType local_2e8;
  undefined8 local_2e0;
  ForAnyElementType local_2d8;
  undefined8 local_2d0;
  undefined2 local_2c8;
  undefined1 local_2c6;
  TSharedPtr<FDS_ViewModelContext,1> *local_2c0;
  FDS_Text local_2b8;
  FDS_Text local_268;
  FDS_Text local_218;
  TSharedPtr<FDS_ViewModelContext_PartyInvitation,1> local_1c8;
  FName local_1b8;
  int local_1b0;
  FName local_1a8;
  int local_1a0;
  TSharedPtr<FDS_ViewModelContext,1> local_198;
  TSharedPtr<FDS_ViewModelContext,1> local_188;
  TSharedPtr<FDS_ViewModelContext,1> local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_428;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2c0 = param_1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_188.Object = param_1->Object;
  local_188.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_188.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_PartyInvitation>(&local_1c8,&local_188);
  if (local_1c8.Object == (FDS_ViewModelContext_PartyInvitation *)0x0) {
    pUVar14 = UDS_LogManager::GetInst();
    if (pUVar14 != (UDS_LogManager *)0x0) {
      pUVar14 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_VM_PartyInvitation::OnSetViewModel",0x26,Yes);
      UDS_LogManager::PrintLog
                (pUVar14,1,Warning,local_168.Ptr,0x23,L"partyInvitationContext.IsValid() == false");
      param_1 = local_2c0;
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
        param_1 = local_2c0;
      }
    }
  }
  else {
    if ((local_1c8.Object == (FDS_ViewModelContext_PartyInvitation *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pUVar2 = (this->TabGroup).field0_0x0.DebugPtr;
    this->PartyType = (local_1c8.Object)->PartyType;
    if (pUVar2 != (UDS_VM_Common_TabGroup *)0x0) {
      pFVar15 = ::operator_new(0x48);
      pFVar19 = (FDS_ViewModelContext *)0x0;
      pFVar18 = pFVar19;
      if (pFVar15 != (FDS_ViewModelContext *)0x0) {
        *(undefined8 *)&pFVar15->ViewModelTemplateKey = 0;
        *(undefined4 *)((longlong)&pFVar15[1]._padding_ + 4) = 0;
        *(undefined4 *)((longlong)&pFVar15[2]._padding_ + 4) = 0;
        *(undefined8 *)&pFVar15->DerivedStaticStruct = 0;
        (pFVar15->ViewModelName).ComparisonIndex = 0;
        (pFVar15->ViewModelName).Number = 0;
        pFVar15->_padding_ = (longlong)&___7FDS_ViewModelContext_TabGroup__6B_;
        *(undefined4 *)&pFVar15[1]._padding_ = 0;
        *(undefined8 *)&pFVar15[1].DerivedStaticStruct = 0;
        pFVar15[1].ViewModelName.ComparisonIndex = 0;
        pFVar15[1].ViewModelName.Number = 0;
        *(undefined8 *)&pFVar15[1].ViewModelTemplateKey = 0;
        *(undefined4 *)&pFVar15[2]._padding_ = 0;
        pFVar18 = pFVar15;
      }
      pFVar15 = ::operator_new(0x20);
      if (pFVar15 != (FDS_ViewModelContext *)0x0) {
        *(atomic<int> *)&pFVar15->DerivedStaticStruct = (atomic<int>)0x1;
        *(code **)&(pFVar15->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
        pFVar15->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_TabGroup__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
        ;
        ((atomic<int> *)&pFVar15->DerivedStaticStruct)[1] = (atomic<int>)0x1;
        *(FDS_ViewModelContext **)&pFVar15->ViewModelTemplateKey = pFVar18;
        pFVar19 = pFVar15;
      }
      if ((pFVar18 == (FDS_ViewModelContext *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pUVar16 = FDS_ViewModelContext_TabGroup::StaticStruct();
      *(UScriptStruct **)&pFVar18->DerivedStaticStruct = pUVar16;
      this_00 = UDS_ViewModelContextManager::GetInst();
      if (this_00 != (UDS_ViewModelContextManager *)0x0) {
        if (pFVar19 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar19->DerivedStaticStruct =
               (atomic<int>)((int)*(atomic<int> *)&pFVar19->DerivedStaticStruct + 1);
          UNLOCK();
        }
        local_198.Object = pFVar18;
        local_198.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar19;
        UDS_ViewModelContextManager::RegisterContext(this_00,&local_198);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_198.SharedReferenceCount.ReferenceController);
      }
      pFVar18->ViewModelTemplateKey = CommonTabGroup;
      *(undefined4 *)&pFVar18[1]._padding_ = 0;
      local_2b8.StringTableType = None;
      local_2b8.StringTableID = 0;
      local_2b8.DateTime.Ticks = 0;
      local_2b8.TimeSpan.Ticks = 0;
      local_2b8.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_2b8.StringEnumTableNameID.Number = 0;
      local_2b8.TimeExpressionType = None;
      local_2b8.IsExpression = false;
      local_2b8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2b8.UniqueString.Data.ArrayNum = 0;
      local_2b8.UniqueString.Data.ArrayMax = 0;
      local_2b8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2b8.FormatArgs.ArrayNum = 0;
      local_2b8.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringTable(&local_2b8,StringUi,0x334a4);
      FVar11.Data = local_2b8.UniqueString.Data.AllocatorInstance.Data;
      bVar12 = local_2b8.IsExpression;
      EVar10 = local_2b8.TimeExpressionType;
      FVar9.Ticks = local_2b8.TimeSpan.Ticks;
      FVar8.Ticks = local_2b8.DateTime.Ticks;
      FVar4 = local_2b8.StringEnumTableNameID;
      lVar7 = local_2b8.StringTableID;
      EVar6 = local_2b8.StringTableType;
      lVar20 = (longlong)local_2b8.UniqueString.Data.ArrayNum;
      local_3a8.Data = (FScriptContainerElement *)0x0;
      local_3a0 = CONCAT44(local_3a0._4_4_,local_2b8.UniqueString.Data.ArrayNum);
      if (local_2b8.UniqueString.Data.ArrayNum == 0) {
        local_3a0 = local_2b8.UniqueString.Data._8_8_ & 0xffffffff;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_2b8.UniqueString.Data.ArrayNum,0,&local_3a8,
                   local_2b8.UniqueString.Data.ArrayNum,(int *)((longlong)&local_3a0 + 4));
        memcpy(local_3a8.Data,FVar11.Data,lVar20 * 2);
      }
      FVar11.Data = local_2b8.FormatArgs.AllocatorInstance.Data;
      iVar5 = local_2b8.FormatArgs.ArrayNum;
      local_398.Data = (FScriptContainerElement *)0x0;
      local_390 = CONCAT44(local_390._4_4_,local_2b8.FormatArgs.ArrayNum);
      if (local_2b8.FormatArgs.ArrayNum == 0) {
        local_390 = local_2b8.FormatArgs._8_8_ & 0xffffffff;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,local_2b8.FormatArgs.ArrayNum,0,&local_398,local_2b8.FormatArgs.ArrayNum,
                   (int *)((longlong)&local_390 + 4));
        ConstructItems<FDS_TextFormatArg,FDS_TextFormatArg,int>
                  (local_398.Data,(FDS_TextFormatArg *)FVar11.Data,iVar5);
      }
      local_388 = 0;
      local_386 = 0;
      uVar13 = pFVar18[1].ViewModelName.ComparisonIndex.Value;
      if (uVar13 == pFVar18[1].ViewModelName.Number) {
        uVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x860,(ForAnyElementType *)&pFVar18[1].DerivedStaticStruct,
                            (int *)&pFVar18[1].ViewModelName.Number);
      }
      pFVar18[1].ViewModelName.ComparisonIndex.Value = uVar13 + 1;
      puVar17 = (undefined4 *)
                ((longlong)(int)uVar13 * 0x60 + *(longlong *)&pFVar18[1].DerivedStaticStruct);
      *puVar17 = 0xffffffff;
      puVar17[1] = 0xffffffff;
      *(EDS_StringTableType *)(puVar17 + 2) = EVar6;
      *(long64 *)(puVar17 + 4) = lVar7;
      *(FName *)(puVar17 + 6) = FVar4;
      *(long64 *)(puVar17 + 8) = FVar8.Ticks;
      *(long64 *)(puVar17 + 10) = FVar9.Ticks;
      puVar17[0xc] = EVar10;
      *(undefined8 *)(puVar17 + 0xe) = 0;
      *(bool *)(puVar17 + 0xd) = bVar12;
      *(FScriptContainerElement **)(puVar17 + 0xe) = local_3a8.Data;
      local_3a8.Data = (FScriptContainerElement *)0x0;
      puVar17[0x10] = (undefined4)local_3a0;
      puVar17[0x11] = local_3a0._4_4_;
      local_3a0 = 0;
      *(undefined8 *)(puVar17 + 0x12) = 0;
      *(FScriptContainerElement **)(puVar17 + 0x12) = local_398.Data;
      local_398.Data = (FScriptContainerElement *)0x0;
      puVar17[0x14] = (undefined4)local_390;
      puVar17[0x15] = local_390._4_4_;
      local_390 = 0;
      *(undefined1 *)(puVar17 + 0x16) = (undefined1)local_388;
      *(undefined1 *)((longlong)puVar17 + 0x59) = local_388._1_1_;
      *(undefined1 *)((longlong)puVar17 + 0x5a) = local_386;
      DestructItems<FDS_TextFormatArg,int>((FDS_TextFormatArg *)0x0,0);
      if (local_398.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_398.Data);
      }
      if (local_3a8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3a8.Data);
      }
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_2b8.FormatArgs.AllocatorInstance.Data,
                 local_2b8.FormatArgs.ArrayNum);
      if ((FDS_TextFormatArg *)local_2b8.FormatArgs.AllocatorInstance.Data !=
          (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_2b8.FormatArgs.AllocatorInstance.Data);
      }
      if (local_2b8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2b8.UniqueString.Data.AllocatorInstance.Data);
      }
      local_268.StringTableType = None;
      local_268.StringTableID = 0;
      local_268.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_268.StringEnumTableNameID.Number = 0;
      local_268.TimeExpressionType = None;
      local_268.DateTime.Ticks = 0;
      local_268.TimeSpan.Ticks = 0;
      local_268.IsExpression = false;
      local_268.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_268.UniqueString.Data.ArrayNum = 0;
      local_268.UniqueString.Data.ArrayMax = 0;
      local_268.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_268.FormatArgs.ArrayNum = 0;
      local_268.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringTable(&local_268,StringUi,0x334a5);
      FVar11.Data = local_268.UniqueString.Data.AllocatorInstance.Data;
      lVar20 = (longlong)local_268.UniqueString.Data.ArrayNum;
      local_378 = local_268.StringTableType;
      local_370 = local_268.StringTableID;
      local_368 = local_268.StringEnumTableNameID;
      local_360 = local_268.DateTime.Ticks;
      local_358 = local_268.TimeSpan.Ticks;
      local_350 = local_268.TimeExpressionType;
      local_34c = local_268.IsExpression;
      local_380 = 0xffffffffffffffff;
      local_348.Data = (FScriptContainerElement *)0x0;
      local_340 = CONCAT44(local_340._4_4_,local_268.UniqueString.Data.ArrayNum);
      if (local_268.UniqueString.Data.ArrayNum == 0) {
        local_340 = local_268.UniqueString.Data._8_8_ & 0xffffffff;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_268.UniqueString.Data.ArrayNum,0,&local_348,
                   local_268.UniqueString.Data.ArrayNum,(int *)((longlong)&local_340 + 4));
        memcpy(local_348.Data,FVar11.Data,lVar20 * 2);
      }
      FVar11.Data = local_268.FormatArgs.AllocatorInstance.Data;
      iVar5 = local_268.FormatArgs.ArrayNum;
      local_338.Data = (FScriptContainerElement *)0x0;
      local_330 = CONCAT44(local_330._4_4_,local_268.FormatArgs.ArrayNum);
      if (local_268.FormatArgs.ArrayNum == 0) {
        local_330 = local_268.FormatArgs._8_8_ & 0xffffffff;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,local_268.FormatArgs.ArrayNum,0,&local_338,local_268.FormatArgs.ArrayNum,
                   (int *)((longlong)&local_330 + 4));
        ConstructItems<FDS_TextFormatArg,FDS_TextFormatArg,int>
                  (local_338.Data,(FDS_TextFormatArg *)FVar11.Data,iVar5);
      }
      local_328 = 0;
      local_326 = 0;
      uVar13 = pFVar18[1].ViewModelName.ComparisonIndex.Value;
      if (uVar13 == pFVar18[1].ViewModelName.Number) {
        uVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x860,(ForAnyElementType *)&pFVar18[1].DerivedStaticStruct,
                            (int *)&pFVar18[1].ViewModelName.Number);
      }
      pFVar18[1].ViewModelName.ComparisonIndex.Value = uVar13 + 1;
      puVar17 = (undefined4 *)
                ((longlong)(int)uVar13 * 0x60 + *(longlong *)&pFVar18[1].DerivedStaticStruct);
      *puVar17 = (undefined4)local_380;
      puVar17[1] = local_380._4_4_;
      *(EDS_StringTableType *)(puVar17 + 2) = local_378;
      *(long64 *)(puVar17 + 4) = local_370;
      *(FName *)(puVar17 + 6) = local_368;
      *(long64 *)(puVar17 + 8) = local_360;
      *(long64 *)(puVar17 + 10) = local_358;
      puVar17[0xc] = local_350;
      *(undefined8 *)(puVar17 + 0xe) = 0;
      *(undefined1 *)(puVar17 + 0xd) = local_34c;
      *(FScriptContainerElement **)(puVar17 + 0xe) = local_348.Data;
      local_348.Data = (FScriptContainerElement *)0x0;
      puVar17[0x10] = (undefined4)local_340;
      puVar17[0x11] = local_340._4_4_;
      local_340 = 0;
      *(undefined8 *)(puVar17 + 0x12) = 0;
      *(FScriptContainerElement **)(puVar17 + 0x12) = local_338.Data;
      local_338.Data = (FScriptContainerElement *)0x0;
      puVar17[0x14] = (undefined4)local_330;
      puVar17[0x15] = local_330._4_4_;
      local_330 = 0;
      *(undefined1 *)(puVar17 + 0x16) = (undefined1)local_328;
      *(undefined1 *)((longlong)puVar17 + 0x59) = local_328._1_1_;
      *(undefined1 *)((longlong)puVar17 + 0x5a) = local_326;
      DestructItems<FDS_TextFormatArg,int>((FDS_TextFormatArg *)0x0,0);
      if (local_338.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_338.Data);
      }
      if (local_348.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_348.Data);
      }
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_268.FormatArgs.AllocatorInstance.Data,
                 local_268.FormatArgs.ArrayNum);
      if ((FDS_TextFormatArg *)local_268.FormatArgs.AllocatorInstance.Data !=
          (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_268.FormatArgs.AllocatorInstance.Data);
      }
      if (local_268.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_268.UniqueString.Data.AllocatorInstance.Data);
      }
      local_218.StringTableType = None;
      local_218.StringTableID = 0;
      local_218.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_218.StringEnumTableNameID.Number = 0;
      local_218.TimeExpressionType = None;
      local_218.DateTime.Ticks = 0;
      local_218.TimeSpan.Ticks = 0;
      local_218.IsExpression = false;
      local_218.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_218.UniqueString.Data.ArrayNum = 0;
      local_218.UniqueString.Data.ArrayMax = 0;
      local_218.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_218.FormatArgs.ArrayNum = 0;
      local_218.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringTable(&local_218,StringUi,0x334a6);
      FVar11.Data = local_218.UniqueString.Data.AllocatorInstance.Data;
      lVar20 = (longlong)local_218.UniqueString.Data.ArrayNum;
      local_318 = local_218.StringTableType;
      local_310 = local_218.StringTableID;
      local_308 = local_218.StringEnumTableNameID;
      local_300 = local_218.DateTime.Ticks;
      local_2f8 = local_218.TimeSpan.Ticks;
      local_2f0 = local_218.TimeExpressionType;
      local_2ec = local_218.IsExpression;
      local_320 = 0xffffffffffffffff;
      local_2e8.Data = (FScriptContainerElement *)0x0;
      local_2e0 = CONCAT44(local_2e0._4_4_,local_218.UniqueString.Data.ArrayNum);
      if (local_218.UniqueString.Data.ArrayNum == 0) {
        local_2e0 = local_218.UniqueString.Data._8_8_ & 0xffffffff;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_218.UniqueString.Data.ArrayNum,0,&local_2e8,
                   local_218.UniqueString.Data.ArrayNum,(int *)((longlong)&local_2e0 + 4));
        memcpy(local_2e8.Data,FVar11.Data,lVar20 * 2);
      }
      FVar11.Data = local_218.FormatArgs.AllocatorInstance.Data;
      iVar5 = local_218.FormatArgs.ArrayNum;
      local_2d8.Data = (FScriptContainerElement *)0x0;
      local_2d0 = CONCAT44(local_2d0._4_4_,local_218.FormatArgs.ArrayNum);
      if (local_218.FormatArgs.ArrayNum == 0) {
        local_2d0 = local_218.FormatArgs._8_8_ & 0xffffffff;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,local_218.FormatArgs.ArrayNum,0,&local_2d8,local_218.FormatArgs.ArrayNum,
                   (int *)((longlong)&local_2d0 + 4));
        ConstructItems<FDS_TextFormatArg,FDS_TextFormatArg,int>
                  (local_2d8.Data,(FDS_TextFormatArg *)FVar11.Data,iVar5);
      }
      local_2c8 = 0;
      local_2c6 = 0;
      uVar13 = pFVar18[1].ViewModelName.ComparisonIndex.Value;
      if (uVar13 == pFVar18[1].ViewModelName.Number) {
        uVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x860,(ForAnyElementType *)&pFVar18[1].DerivedStaticStruct,
                            (int *)&pFVar18[1].ViewModelName.Number);
      }
      pFVar18[1].ViewModelName.ComparisonIndex.Value = uVar13 + 1;
      puVar17 = (undefined4 *)
                ((longlong)(int)uVar13 * 0x60 + *(longlong *)&pFVar18[1].DerivedStaticStruct);
      *puVar17 = (undefined4)local_320;
      puVar17[1] = local_320._4_4_;
      *(EDS_StringTableType *)(puVar17 + 2) = local_318;
      *(long64 *)(puVar17 + 4) = local_310;
      *(FName *)(puVar17 + 6) = local_308;
      *(long64 *)(puVar17 + 8) = local_300;
      *(long64 *)(puVar17 + 10) = local_2f8;
      puVar17[0xc] = local_2f0;
      *(undefined8 *)(puVar17 + 0xe) = 0;
      *(undefined1 *)(puVar17 + 0xd) = local_2ec;
      *(FScriptContainerElement **)(puVar17 + 0xe) = local_2e8.Data;
      local_2e8.Data = (FScriptContainerElement *)0x0;
      puVar17[0x10] = (undefined4)local_2e0;
      puVar17[0x11] = local_2e0._4_4_;
      local_2e0 = 0;
      *(undefined8 *)(puVar17 + 0x12) = 0;
      *(FScriptContainerElement **)(puVar17 + 0x12) = local_2d8.Data;
      local_2d8.Data = (FScriptContainerElement *)0x0;
      puVar17[0x14] = (undefined4)local_2d0;
      puVar17[0x15] = local_2d0._4_4_;
      local_2d0 = 0;
      *(undefined1 *)(puVar17 + 0x16) = (undefined1)local_2c8;
      *(undefined1 *)((longlong)puVar17 + 0x59) = local_2c8._1_1_;
      *(undefined1 *)((longlong)puVar17 + 0x5a) = local_2c6;
      DestructItems<FDS_TextFormatArg,int>((FDS_TextFormatArg *)0x0,0);
      if (local_2d8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2d8.Data);
      }
      if (local_2e8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2e8.Data);
      }
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_218.FormatArgs.AllocatorInstance.Data,
                 local_218.FormatArgs.ArrayNum);
      if ((FDS_TextFormatArg *)local_218.FormatArgs.AllocatorInstance.Data !=
          (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_218.FormatArgs.AllocatorInstance.Data);
      }
      if (local_218.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_218.UniqueString.Data.AllocatorInstance.Data);
      }
      pFVar18[1].ViewModelTemplateKey = Data_NPCSellData;
      *(undefined4 *)&pFVar18[1].field_0x1c = 0x4e25;
      *(undefined4 *)&pFVar18[2]._padding_ = 0x4e26;
      pUVar2 = (this->TabGroup).field0_0x0.DebugPtr;
      if (pFVar19 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar19->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar19->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_178.Object = pFVar18;
      local_178.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar19;
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar2,&local_178);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar19);
      param_1 = local_2c0;
    }
    iVar5 = FFieldNotificationClassDescriptor::bHasPlayerList.BitNumber;
    FVar4 = FFieldNotificationClassDescriptor::bHasPlayerList.FieldName;
    if (this->bHasPlayerList != false) {
      this->bHasPlayerList = false;
      local_1b0 = iVar5;
      local_1b8 = FVar4;
      (**(code **)(this->_padding_ + 0x38))();
    }
    iVar5 = FFieldNotificationClassDescriptor::bIsShowSearchedList.BitNumber;
    FVar4 = FFieldNotificationClassDescriptor::bIsShowSearchedList.FieldName;
    if (this->bIsShowSearchedList != false) {
      this->bIsShowSearchedList = false;
      local_1a0 = iVar5;
      local_1a8 = FVar4;
      (**(code **)(this->_padding_ + 0x38))();
    }
    OnSelectedTabIndex(this,0,-1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUpdateSearchPlayerNames @ 14bf0ae40

void __thiscall UDS_VM_PartyInvitation::OnUpdateSearchPlayerNames(UDS_VM_PartyInvitation *this)

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
  
  FDS_EntryBindingEventField::Reset(&this->SearchedNameEntry);
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
      local_70 = FFieldNotificationClassDescriptor::SearchedNameEntry.BitNumber;
      local_78 = FFieldNotificationClassDescriptor::SearchedNameEntry.FieldName;
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
      pFVar6->_padding_ = (longlong)&___7FDS_ViewModelContext_PartySearchDropBox__6B_;
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
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_PartySearchDropBox__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      pTVar7->WeakReferenceCount = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pTVar7[1].SharedReferenceCount = pFVar10;
    }
    if ((pFVar10 == (FDS_ViewModelContext *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) break;
    pUVar8 = FDS_ViewModelContext_PartySearchDropBox::StaticStruct();
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
    pFVar10->ViewModelTemplateKey = PartySearchDropBox;
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
              (&this->SearchedNameEntry,(TObjectPtr<UDS_UserObjectListItem>)&local_res18);
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

// SearchPlayerResultEvent @ 14bf12f10

void __thiscall UDS_VM_PartyInvitation::SearchPlayerResultEvent(UDS_VM_PartyInvitation *this)

{
  int iVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  FDS_PlayerRepo *pFVar5;
  UObject *pUVar6;
  UDS_UserObjectListItem *this_00;
  FDS_ViewModelContext *pFVar7;
  FDS_ViewModelContext *pFVar8;
  UScriptStruct *pUVar9;
  UDS_ViewModelContextManager *pUVar10;
  TReferenceControllerBase<1> *pTVar11;
  longlong lVar12;
  FDS_ViewModelContext *pFVar13;
  FScriptContainerElement *pFVar14;
  FDS_ViewModelContext *pFVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_res10 [8];
  FWeakObjectPtr local_res18;
  longlong local_res20;
  UDS_UserObjectListItem *local_e8;
  FDS_EntryBindingEventField *local_e0;
  FDS_PlayerRepo *local_d8;
  FScriptContainerElement *local_d0;
  FName local_c8;
  int local_c0;
  FName local_b8;
  int local_b0;
  FName local_a8;
  int local_a0;
  FName local_98;
  int local_90;
  TSharedPtr<FDS_ViewModelContext,1> local_88;
  TSharedPtr<FDS_ViewModelContext,1> local_78;
  TSharedPtr<FDS_ViewModelContext,1> local_68;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  
  pFVar5 = TDS_Singleton<FDS_PlayerRepo>::GetInst();
  local_c0 = FFieldNotificationClassDescriptor::bHasPlayerList.BitNumber;
  local_c8 = FFieldNotificationClassDescriptor::bHasPlayerList.FieldName;
  local_d8 = pFVar5;
  if ((pFVar5->PlayerList).ArrayNum == 0) {
    if (this->bHasPlayerList != false) {
      this->bHasPlayerList = false;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_c8);
      return;
    }
  }
  else {
    if (this->bHasPlayerList != true) {
      this->bHasPlayerList = true;
      local_b0 = local_c0;
      local_b8 = local_c8;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_b8);
    }
    iVar1 = FFieldNotificationClassDescriptor::bIsShowSearchedList.BitNumber;
    FVar3 = FFieldNotificationClassDescriptor::bIsShowSearchedList.FieldName;
    if (this->bIsShowSearchedList != false) {
      this->bIsShowSearchedList = false;
      local_a0 = iVar1;
      local_a8 = FVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_a8);
    }
    lVar12 = 0;
    local_res20 = 0;
    UDS_PlayerData::GetMainPlayerData();
    bVar4 = FWeakObjectPtr::IsValid(&local_res18);
    if (bVar4) {
      pUVar6 = FWeakObjectPtr::Get(&local_res18);
      lVar12 = *(longlong *)&pUVar6[6].field_0x8;
      local_res20 = lVar12;
    }
    local_e0 = &this->SearchPlayerEntry;
    FDS_EntryBindingEventField::Reset(local_e0);
    iVar1 = (pFVar5->PlayerList).ArrayNum;
    pFVar16 = (pFVar5->PlayerList).AllocatorInstance.Data;
    pFVar14 = pFVar16 + (longlong)iVar1 * 0x90;
    local_d0 = pFVar14;
    while( true ) {
      if ((pFVar5->PlayerList).ArrayNum != iVar1) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<misc::Player_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar16 == pFVar14) break;
      if (*(longlong *)(pFVar16 + 0x50) != lVar12) {
        pUVar6 = GetTransientPackageAsObject();
        this_00 = NewObject<UDS_UserObjectListItem>(pUVar6);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this_00 != (UDS_UserObjectListItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this_00);
        }
        pFVar7 = ::operator_new(0x28);
        pFVar13 = (FDS_ViewModelContext *)0x0;
        pFVar15 = pFVar13;
        if (pFVar7 != (FDS_ViewModelContext *)0x0) {
          *(undefined8 *)&pFVar7->ViewModelTemplateKey = 0;
          *(undefined8 *)&pFVar7->DerivedStaticStruct = 0;
          (pFVar7->ViewModelName).ComparisonIndex = 0;
          (pFVar7->ViewModelName).Number = 0;
          pFVar7->_padding_ = (longlong)&___7FDS_ViewModelContext_Player__6B_;
          pFVar7[1]._padding_ = 0;
          pFVar15 = pFVar7;
        }
        pFVar8 = ::operator_new(0x20);
        pFVar7 = pFVar13;
        if (pFVar8 != (FDS_ViewModelContext *)0x0) {
          *(atomic<int> *)&pFVar8->DerivedStaticStruct = (atomic<int>)0x1;
          *(code **)&(pFVar8->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
          pFVar8->_padding_ =
               (longlong)
               &
               ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_Player__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
          ;
          ((atomic<int> *)&pFVar8->DerivedStaticStruct)[1] = (atomic<int>)0x1;
          *(FDS_ViewModelContext **)&pFVar8->ViewModelTemplateKey = pFVar15;
          pFVar7 = pFVar8;
        }
        if ((pFVar15 == (FDS_ViewModelContext *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pUVar9 = FDS_ViewModelContext_Player::StaticStruct();
        *(UScriptStruct **)&pFVar15->DerivedStaticStruct = pUVar9;
        pUVar10 = UDS_ViewModelContextManager::GetInst();
        if (pUVar10 != (UDS_ViewModelContextManager *)0x0) {
          if (pFVar7 != (FDS_ViewModelContext *)0x0) {
            LOCK();
            *(atomic<int> *)&pFVar7->DerivedStaticStruct =
                 (atomic<int>)((int)*(atomic<int> *)&pFVar7->DerivedStaticStruct + 1);
            UNLOCK();
          }
          local_88.Object = pFVar15;
          local_88.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar7;
          UDS_ViewModelContextManager::RegisterContext(pUVar10,&local_88);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_88.SharedReferenceCount.ReferenceController);
        }
        pFVar15->ViewModelTemplateKey = SearchPlayerInfo;
        pFVar15[1]._padding_ = *(longlong *)(pFVar16 + 0x50);
        pFVar8 = ::operator_new(0x28);
        if (pFVar8 != (FDS_ViewModelContext *)0x0) {
          *(undefined8 *)&pFVar8->ViewModelTemplateKey = 0;
          *(undefined8 *)&pFVar8->DerivedStaticStruct = 0;
          (pFVar8->ViewModelName).ComparisonIndex = 0;
          (pFVar8->ViewModelName).Number = 0;
          pFVar8->_padding_ = (longlong)&___7FDS_ViewModelContext_Player__6B_;
          pFVar8[1]._padding_ = 0;
          pFVar13 = pFVar8;
        }
        pTVar11 = ::operator_new(0x20);
        if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
          pTVar11 = (TReferenceControllerBase<1> *)0x0;
        }
        else {
          pTVar11->SharedReferenceCount = (atomic<int>)0x1;
          pTVar11[1]._padding_ = (longlong)ViewModelContextDeleter;
          pTVar11->_padding_ =
               (longlong)
               &
               ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_Player__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
          ;
          pTVar11->WeakReferenceCount = (atomic<int>)0x1;
          *(FDS_ViewModelContext **)&pTVar11[1].SharedReferenceCount = pFVar13;
        }
        if ((pFVar13 == (FDS_ViewModelContext *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pUVar9 = FDS_ViewModelContext_Player::StaticStruct();
        *(UScriptStruct **)&pFVar13->DerivedStaticStruct = pUVar9;
        pUVar10 = UDS_ViewModelContextManager::GetInst();
        if (pUVar10 != (UDS_ViewModelContextManager *)0x0) {
          if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_78.Object = pFVar13;
          local_78.SharedReferenceCount.ReferenceController = pTVar11;
          UDS_ViewModelContextManager::RegisterContext(pUVar10,&local_78);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_78.SharedReferenceCount.ReferenceController);
        }
        pFVar13->ViewModelTemplateKey = PartyInvitationSlot;
        pFVar13[1]._padding_ = *(longlong *)(pFVar16 + 0x50);
        if (pFVar7 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar7->DerivedStaticStruct =
               (atomic<int>)((int)*(atomic<int> *)&pFVar7->DerivedStaticStruct + 1);
          UNLOCK();
        }
        local_68.Object = pFVar15;
        local_68.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar7;
        UDS_UserObjectListItem::AddContext(this_00,&local_68);
        if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_58.Object = pFVar13;
        local_58.SharedReferenceCount.ReferenceController = pTVar11;
        UDS_UserObjectListItem::AddContext(this_00,&local_58);
        local_e8 = this_00;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this_00 != (UDS_UserObjectListItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this_00);
        }
        FDS_EntryBindingEventField::Add(local_e0,(TObjectPtr<UDS_UserObjectListItem>)&local_e8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11)
        ;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar7);
        lVar12 = local_res20;
        pFVar14 = local_d0;
        pFVar5 = local_d8;
      }
      pFVar16 = pFVar16 + 0x90;
    }
    local_90 = FFieldNotificationClassDescriptor::SearchPlayerEntry.BitNumber;
    local_98 = FFieldNotificationClassDescriptor::SearchPlayerEntry.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_98);
  }
  return;
}

// SetCurrentSearchName @ 14bf13860

void __thiscall
UDS_VM_PartyInvitation::SetCurrentSearchName(UDS_VM_PartyInvitation *this,FString *param_1)

{
  int iVar1;
  FName FVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  FName local_18;
  int local_10;
  
  iVar3 = FFieldNotificationClassDescriptor::CurrentSearchName.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::CurrentSearchName.FieldName;
  iVar4 = (param_1->Data).ArrayNum;
  iVar1 = (this->CurrentSearchName).Data.ArrayNum;
  if (iVar1 == iVar4) {
    if (iVar1 < 2) {
      return;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(this->CurrentSearchName).Data.AllocatorInstance.Data,
                       (wchar_t *)(param_1->Data).AllocatorInstance.Data);
    bVar5 = iVar4 == 0;
  }
  else {
    bVar5 = iVar1 + iVar4 == 1;
  }
  if (!bVar5) {
    ::FString::operator=(&this->CurrentSearchName,param_1);
    local_18 = FVar2;
    local_10 = iVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetEmptyText @ 14bf13ac0

void __thiscall UDS_VM_PartyInvitation::SetEmptyText(UDS_VM_PartyInvitation *this,FDS_Text *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::EmptyText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::EmptyText.FieldName;
  FDS_Text::operator=(&this->EmptyText,param_1);
  local_18 = FVar1;
  local_10 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetHasPlayerList @ 14bf14a70

void __thiscall UDS_VM_PartyInvitation::SetHasPlayerList(UDS_VM_PartyInvitation *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::bHasPlayerList.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bHasPlayerList.FieldName;
  if (this->bHasPlayerList != param_1) {
    this->bHasPlayerList = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetIsShowSearchedList @ 14bf14f40

void __thiscall
UDS_VM_PartyInvitation::SetIsShowSearchedList(UDS_VM_PartyInvitation *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::bIsShowSearchedList.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bIsShowSearchedList.FieldName;
  if (this->bIsShowSearchedList != param_1) {
    this->bIsShowSearchedList = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// UnbindModel @ 14bf1e760

void __thiscall UDS_VM_PartyInvitation::UnbindModel(UDS_VM_PartyInvitation *this)

{
  UDS_UIEvent *pUVar1;
  UDS_PartyEvent *pUVar2;
  UDS_PlayerEvent *pUVar3;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_UIEvent::GetEvent();
  if (pUVar1 != (UDS_UIEvent *)0x0) {
    FDS_FilteredEventDelegate<TWeakObjectPtr<UObject,FWeakObjectPtr>,int_const_,int_const_>::
    Remove<UDS_VM_PartyInvitation>(&pUVar1->OnSelectedTabIndex,this);
  }
  pUVar2 = UDS_PartyEvent::GetEvent();
  if (pUVar2 != (UDS_PartyEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnPartyInvitePlayer,
               this);
  }
  pUVar3 = UDS_PlayerEvent::GetEvent();
  if (pUVar3 != (UDS_PlayerEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar3->OnUpdateSearchPlayerNames,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar3->OnClickSearchedNameEntry,this);
  }
  return;
}

