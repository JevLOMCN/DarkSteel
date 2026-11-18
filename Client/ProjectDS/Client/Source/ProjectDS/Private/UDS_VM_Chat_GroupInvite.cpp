// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 45

// SetTitleText_WrapperImpl @ 14b6114a0

void __cdecl UDS_VM_Chat_GroupInvite::SetTitleText_WrapperImpl(void *param_1,void *param_2)

{
  FName FVar1;
  int iVar2;
  FName FStack_18;
  int iStack_10;
  
  iVar2 = FFieldNotificationClassDescriptor::TitleText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::TitleText.FieldName;
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 0xa0),param_2);
  FStack_18 = FVar1;
  iStack_10 = iVar2;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetInviteMessage_WrapperImpl @ 14b6114c0

void __cdecl UDS_VM_Chat_GroupInvite::SetInviteMessage_WrapperImpl(void *param_1,void *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStackX_8 [8];
  FName FStack_28;
  int iStack_20;
  
  iVar4 = FFieldNotificationClassDescriptor::InviteMessage.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::InviteMessage.FieldName;
  bVar5 = FText::IdenticalTo((FText *)((longlong)param_1 + 0xf0),param_2,None);
  if (!bVar5) {
    plVar1 = *(longlong **)param_2;
    plVar2 = *(longlong **)((longlong)param_1 + 0xf0);
    if (plVar2 != plVar1) {
      *(longlong **)((longlong)param_1 + 0xf0) = plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1,auStackX_8);
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    *(undefined4 *)((longlong)param_1 + 0xf8) = *(undefined4 *)((longlong)param_2 + 8);
    FStack_28 = FVar3;
    iStack_20 = iVar4;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_28);
  }
  return;
}

// SetInviteMessageHint_WrapperImpl @ 14b6114d0

void __cdecl UDS_VM_Chat_GroupInvite::SetInviteMessageHint_WrapperImpl(void *param_1,void *param_2)

{
  FName FVar1;
  int iVar2;
  FName FStack_18;
  int iStack_10;
  
  iVar2 = FFieldNotificationClassDescriptor::InviteMessageHint.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::InviteMessageHint.FieldName;
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 0x100),param_2);
  FStack_18 = FVar1;
  iStack_10 = iVar2;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetCurrentSearchName_WrapperImpl @ 14b6114e0

void __cdecl UDS_VM_Chat_GroupInvite::SetCurrentSearchName_WrapperImpl(void *param_1,void *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStackX_8 [8];
  FName FStack_28;
  int iStack_20;
  
  iVar4 = FFieldNotificationClassDescriptor::CurrentSearchName.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::CurrentSearchName.FieldName;
  bVar5 = FText::IdenticalTo((FText *)((longlong)param_1 + 0x150),param_2,None);
  if (!bVar5) {
    plVar1 = *(longlong **)param_2;
    plVar2 = *(longlong **)((longlong)param_1 + 0x150);
    if (plVar2 != plVar1) {
      *(longlong **)((longlong)param_1 + 0x150) = plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1,auStackX_8);
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    *(undefined4 *)((longlong)param_1 + 0x158) = *(undefined4 *)((longlong)param_2 + 8);
    FStack_28 = FVar3;
    iStack_20 = iVar4;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_28);
  }
  return;
}

// SetSearchNameHint_WrapperImpl @ 14b6114f0

void __cdecl UDS_VM_Chat_GroupInvite::SetSearchNameHint_WrapperImpl(void *param_1,void *param_2)

{
  FName FVar1;
  int iVar2;
  FName FStack_18;
  int iStack_10;
  
  iVar2 = FFieldNotificationClassDescriptor::SearchNameHint.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::SearchNameHint.FieldName;
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 0x160),param_2);
  FStack_18 = FVar1;
  iStack_10 = iVar2;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetEmptyText_WrapperImpl @ 14b611500

void __cdecl UDS_VM_Chat_GroupInvite::SetEmptyText_WrapperImpl(void *param_1,void *param_2)

{
  FName FVar1;
  int iVar2;
  FName FStack_18;
  int iStack_10;
  
  iVar2 = FFieldNotificationClassDescriptor::EmptyText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::EmptyText.FieldName;
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 0x1b0),param_2);
  FStack_18 = FVar1;
  iStack_10 = iVar2;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetSearchNameTextCommitted_WrapperImpl @ 14b611510

void __cdecl
UDS_VM_Chat_GroupInvite::SetSearchNameTextCommitted_WrapperImpl(void *param_1,void *param_2)

{
  FText *this;
  ITextData *pIVar1;
  ITextData *pIVar2;
  int iVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  FString *pFVar8;
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
  
  this = (FText *)((longlong)param_1 + 0x150);
  pIVar1 = (this->TextData).Reference;
  pIVar2 = *(ITextData **)param_2;
  if (pIVar1 != pIVar2) {
    (this->TextData).Reference = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,&pvStackX_8);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  *(undefined4 *)((longlong)param_1 + 0x158) = *(undefined4 *)((longlong)param_2 + 8);
  if (*(int *)((longlong)param_2 + 0x10) != 1) {
    return;
  }
  bVar5 = FText::IsEmpty(this);
  iVar3 = FFieldNotificationClassDescriptor::bIsShowSearchedList.BitNumber;
  FStack_88 = FFieldNotificationClassDescriptor::bIsShowSearchedList.FieldName;
  if (bVar5) {
    return;
  }
  if (*(char *)((longlong)param_1 + 0x321) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x321) = 0;
    FStack_80.Data._0_4_ = iVar3;
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
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,&FStack_60);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_Chat_GroupInvite____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (void *)0x0)) {
      UE::GC::MarkAsReachable(param_1);
    }
    puVar6[3] = 0;
    pvStackX_8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (void *)0x0)) {
      UE::GC::MarkAsReachable(param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&pvStackX_8);
    *(FName *)(puVar6 + 4) = FStack_88;
    puVar6[5] = FStack_80.Data;
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
  iVar3 = iStack_78;
  FVar4.Data = FStack_80.Data;
  FStack_80.Data = (FScriptContainerElement *)0x0;
  iStack_78 = 0;
  if (FStack_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_50.Accessor,&FStack_50);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_30,
             (FWriteAccessScope *)&FStack_50);
  if (iStack_20 != 0) {
    if (FStack_28.Data == (FScriptContainerElement *)0x0) goto LAB_14bd7cc66;
    (*(code *)**(undefined8 **)FStack_28.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_28,0,0,0x10);
    iStack_20 = 0;
  }
  if (FStack_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_28.Data);
  }
LAB_14bd7cc66:
  FStack_28.Data = FVar4.Data;
  iStack_20 = iVar3;
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
  pFVar8 = FText::ToString(this);
  FDS_PlayerRepo::RequestSearchPlayersByName
            (pFVar8,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_30);
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

// SetSearchNameTextChanged_WrapperImpl @ 14b611520

void __cdecl
UDS_VM_Chat_GroupInvite::SetSearchNameTextChanged_WrapperImpl(void *param_1,void *param_2)

{
  UDS_VM_Common_TabGroup *this;
  bool bVar1;
  byte bVar2;
  FName FStack_18;
  int iStack_10;
  
  this = *(UDS_VM_Common_TabGroup **)((longlong)param_1 + 0x328);
  if ((this != (UDS_VM_Common_TabGroup *)0x0) && (this->SelectedIndex != 2)) {
    UDS_VM_Common_TabGroup::SetSelectedIndex(this,2);
  }
  bVar1 = FText::IsEmpty(param_2);
  iStack_10 = FFieldNotificationClassDescriptor::bIsShowSearchedList.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::bIsShowSearchedList.FieldName;
  bVar2 = *(byte *)((longlong)param_1 + 0x321) | bVar1;
  if (*(byte *)((longlong)param_1 + 0x321) != bVar2) {
    *(byte *)((longlong)param_1 + 0x321) = bVar2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  }
  return;
}

// SetInviteMessageTextChanged_WrapperImpl @ 14b611530

void __cdecl
UDS_VM_Chat_GroupInvite::SetInviteMessageTextChanged_WrapperImpl(void *param_1,void *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined1 auStackX_8 [8];
  
  plVar1 = *(longlong **)param_2;
  plVar2 = *(longlong **)((longlong)param_1 + 0xf0);
  if (plVar2 == plVar1) {
    uVar3 = *(undefined4 *)((longlong)param_2 + 8);
  }
  else {
    *(longlong **)((longlong)param_1 + 0xf0) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1,auStackX_8);
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
    uVar3 = *(undefined4 *)((longlong)param_2 + 8);
  }
  *(undefined4 *)((longlong)param_1 + 0xf8) = uVar3;
  return;
}

// SetClickClose_WrapperImpl @ 14b611540

void __cdecl UDS_VM_Chat_GroupInvite::SetClickClose_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined1 *)((longlong)param_1 + 0x2b8) = 1;
  iStack_10 = FFieldNotificationClassDescriptor::CloseMyselfEvent.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::CloseMyselfEvent.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetClickSearch_WrapperImpl @ 14b611550

void __cdecl UDS_VM_Chat_GroupInvite::SetClickSearch_WrapperImpl(void *param_1,void *param_2)

{
  int iVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  FString *pFVar6;
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
  
  bVar3 = FText::IsEmpty((FText *)((longlong)param_1 + 0x150));
  iVar1 = FFieldNotificationClassDescriptor::bIsShowSearchedList.BitNumber;
  FStack_88 = FFieldNotificationClassDescriptor::bIsShowSearchedList.FieldName;
  if (bVar3) {
    return;
  }
  if (*(char *)((longlong)param_1 + 0x321) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x321) = 0;
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
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_Chat_GroupInvite____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (void *)0x0)) {
      UE::GC::MarkAsReachable(param_1);
    }
    puVar4[3] = 0;
    pvStackX_8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (void *)0x0)) {
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
    if (FStack_28.Data == (FScriptContainerElement *)0x0) goto LAB_14bd74126;
    (*(code *)**(undefined8 **)FStack_28.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_28,0,0,0x10);
    iStack_20 = 0;
  }
  if (FStack_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_28.Data);
  }
LAB_14bd74126:
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
  pFVar6 = FText::ToString((FText *)((longlong)param_1 + 0x150));
  FDS_PlayerRepo::RequestSearchPlayersByName
            (pFVar6,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_30);
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

// SetClickTextClear_WrapperImpl @ 14b611560

void __cdecl UDS_VM_Chat_GroupInvite::SetClickTextClear_WrapperImpl(void *param_1,void *param_2)

{
  FText *pFVar1;
  FText FStack_18;
  
  pFVar1 = FText::FText(&FStack_18);
  SetCurrentSearchName(param_1,pFVar1);
  if (FStack_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FStack_18.TextData.Reference + 0x10))();
  }
  FStack_18.Flags = FFieldNotificationClassDescriptor::bIsShowSearchedList.BitNumber;
  FStack_18.TextData.Reference =
       (ITextData *)FFieldNotificationClassDescriptor::bIsShowSearchedList.FieldName;
  if (*(char *)((longlong)param_1 + 0x321) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x321) = 0;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  }
  return;
}

// SetbHasPlayerList_WrapperImpl @ 14b611570

void __cdecl UDS_VM_Chat_GroupInvite::SetbHasPlayerList_WrapperImpl(void *param_1,void *param_2)

{
  SetHasPlayerList(param_1,*(bool *)param_2);
  return;
}

// SetbIsShowSearchedList_WrapperImpl @ 14b611580

void __cdecl
UDS_VM_Chat_GroupInvite::SetbIsShowSearchedList_WrapperImpl(void *param_1,void *param_2)

{
  SetIsShowSearchedList(param_1,*(bool *)param_2);
  return;
}

// StaticClass @ 14b611590

UClass * __cdecl UDS_VM_Chat_GroupInvite::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Chat_GroupInvite.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Chat_GroupInvite",
               &Z_Registration_Info_UClass_UDS_VM_Chat_GroupInvite.InnerSingleton,
               StaticRegisterNativesUDS_VM_Chat_GroupInvite,0x348,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Chat_GroupInvite>,
               InternalVTableHelperCtorCaller<UDS_VM_Chat_GroupInvite>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Chat_GroupInvite.InnerSingleton;
}

// UDS_VM_Chat_GroupInvite @ 14b614980

UDS_VM_Chat_GroupInvite * __thiscall
UDS_VM_Chat_GroupInvite::UDS_VM_Chat_GroupInvite
          (UDS_VM_Chat_GroupInvite *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->TitleText).StringTableType = None;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_GroupInvite__6B_;
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
  FText::FText(&this->InviteMessage);
  (this->InviteMessageHint).StringTableType = None;
  (this->InviteMessageHint).StringTableID = 0;
  (this->InviteMessageHint).StringEnumTableNameID.ComparisonIndex = 0;
  (this->InviteMessageHint).StringEnumTableNameID.Number = 0;
  (this->InviteMessageHint).DateTime.Ticks = 0;
  (this->InviteMessageHint).TimeSpan.Ticks = 0;
  (this->InviteMessageHint).TimeExpressionType = None;
  (this->InviteMessageHint).IsExpression = false;
  (this->InviteMessageHint).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->InviteMessageHint).UniqueString.Data.ArrayNum = 0;
  (this->InviteMessageHint).UniqueString.Data.ArrayMax = 0;
  (this->InviteMessageHint).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InviteMessageHint).FormatArgs.ArrayNum = 0;
  (this->InviteMessageHint).FormatArgs.ArrayMax = 0;
  FText::FText(&this->CurrentSearchName);
  (this->SearchNameHint).StringTableType = None;
  (this->SearchNameHint).StringTableID = 0;
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
  (this->FixedText_Invitation).StringTableType = StringUi;
  (this->FixedText_Invitation).StringTableID = 0xc5c4;
  (this->FixedText_Invitation).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Invitation).StringEnumTableNameID.Number = 0;
  (this->FixedText_Invitation).DateTime.Ticks = 0;
  (this->FixedText_Invitation).TimeSpan.Ticks = 0;
  (this->FixedText_Invitation).TimeExpressionType = None;
  (this->FixedText_Invitation).IsExpression = false;
  (this->FixedText_Invitation).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Invitation).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Invitation).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Invitation).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Invitation).FormatArgs.ArrayNum = 0;
  (this->FixedText_Invitation).FormatArgs.ArrayMax = 0;
  (this->SearchedNameEntry).UserObjectList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SearchedNameEntry).UserObjectList.ArrayNum = 0;
  (this->SearchedNameEntry).UserObjectList.ArrayMax = 0;
  (this->SearchPlayerEntry).UserObjectList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SearchPlayerEntry).UserObjectList.ArrayNum = 0;
  (this->SearchPlayerEntry).UserObjectList.ArrayMax = 0;
  FText::FText(&(this->SearchNameTextCommitted).NewText);
  FText::FText(&(this->SearchNameTextChanged).NewText);
  FText::FText(&(this->InviteMessageTextChanged).NewText);
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
  (this->TabGroup).field0_0x0.DebugPtr = (UDS_VM_Common_TabGroup *)0x0;
  (this->VM_CloseInputKey).field0_0x0.DebugPtr = (UDS_VM_InputKey *)0x0;
  (this->GroupID).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GroupID).Data.ArrayNum = 0;
  (this->GroupID).Data.ArrayMax = 0;
  return this;
}

// UDS_VM_Chat_GroupInvite @ 14b614c20

UDS_VM_Chat_GroupInvite * __thiscall
UDS_VM_Chat_GroupInvite::UDS_VM_Chat_GroupInvite
          (UDS_VM_Chat_GroupInvite *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->TitleText).StringTableType = None;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_GroupInvite__6B_;
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
  FText::FText(&this->InviteMessage);
  (this->InviteMessageHint).StringTableType = None;
  (this->InviteMessageHint).StringTableID = 0;
  (this->InviteMessageHint).StringEnumTableNameID.ComparisonIndex = 0;
  (this->InviteMessageHint).StringEnumTableNameID.Number = 0;
  (this->InviteMessageHint).DateTime.Ticks = 0;
  (this->InviteMessageHint).TimeSpan.Ticks = 0;
  (this->InviteMessageHint).TimeExpressionType = None;
  (this->InviteMessageHint).IsExpression = false;
  (this->InviteMessageHint).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->InviteMessageHint).UniqueString.Data.ArrayNum = 0;
  (this->InviteMessageHint).UniqueString.Data.ArrayMax = 0;
  (this->InviteMessageHint).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InviteMessageHint).FormatArgs.ArrayNum = 0;
  (this->InviteMessageHint).FormatArgs.ArrayMax = 0;
  FText::FText(&this->CurrentSearchName);
  (this->SearchNameHint).StringTableType = None;
  (this->SearchNameHint).StringTableID = 0;
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
  (this->FixedText_Invitation).StringTableType = StringUi;
  (this->FixedText_Invitation).StringTableID = 0xc5c4;
  (this->FixedText_Invitation).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Invitation).StringEnumTableNameID.Number = 0;
  (this->FixedText_Invitation).DateTime.Ticks = 0;
  (this->FixedText_Invitation).TimeSpan.Ticks = 0;
  (this->FixedText_Invitation).TimeExpressionType = None;
  (this->FixedText_Invitation).IsExpression = false;
  (this->FixedText_Invitation).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Invitation).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Invitation).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Invitation).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Invitation).FormatArgs.ArrayNum = 0;
  (this->FixedText_Invitation).FormatArgs.ArrayMax = 0;
  (this->SearchedNameEntry).UserObjectList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SearchedNameEntry).UserObjectList.ArrayNum = 0;
  (this->SearchedNameEntry).UserObjectList.ArrayMax = 0;
  (this->SearchPlayerEntry).UserObjectList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SearchPlayerEntry).UserObjectList.ArrayNum = 0;
  (this->SearchPlayerEntry).UserObjectList.ArrayMax = 0;
  FText::FText(&(this->SearchNameTextCommitted).NewText);
  FText::FText(&(this->SearchNameTextChanged).NewText);
  FText::FText(&(this->InviteMessageTextChanged).NewText);
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
  (this->TabGroup).field0_0x0.DebugPtr = (UDS_VM_Common_TabGroup *)0x0;
  (this->VM_CloseInputKey).field0_0x0.DebugPtr = (UDS_VM_InputKey *)0x0;
  (this->GroupID).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GroupID).Data.ArrayNum = 0;
  (this->GroupID).Data.ArrayMax = 0;
  return this;
}

// ~UDS_VM_Chat_GroupInvite @ 14b616ce0

void __thiscall UDS_VM_Chat_GroupInvite::~UDS_VM_Chat_GroupInvite(UDS_VM_Chat_GroupInvite *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  ITextData *pIVar3;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_GroupInvite__6B_;
  pFVar1 = (this->GroupID).Data.AllocatorInstance.Data;
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
  pIVar3 = (this->InviteMessageTextChanged).NewText.TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
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
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Invitation).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Invitation).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Invitation).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Invitation).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
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
  pIVar3 = (this->CurrentSearchName).TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->InviteMessageHint).FormatArgs.AllocatorInstance.Data,
             (this->InviteMessageHint).FormatArgs.ArrayNum);
  pFVar1 = (this->InviteMessageHint).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InviteMessageHint).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar3 = (this->InviteMessage).TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
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
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b618fa0

IClassDescriptor * __thiscall
UDS_VM_Chat_GroupInvite::GetFieldNotificationDescriptor(UDS_VM_Chat_GroupInvite *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Chat_GroupInvite::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b619740

UClass * __cdecl UDS_VM_Chat_GroupInvite::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Chat_GroupInvite.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Chat_GroupInvite",
               &Z_Registration_Info_UClass_UDS_VM_Chat_GroupInvite.InnerSingleton,
               StaticRegisterNativesUDS_VM_Chat_GroupInvite,0x348,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Chat_GroupInvite>,
               InternalVTableHelperCtorCaller<UDS_VM_Chat_GroupInvite>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Chat_GroupInvite.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Chat_GroupInvite @ 14b61a1e0

void __cdecl UDS_VM_Chat_GroupInvite::StaticRegisterNativesUDS_VM_Chat_GroupInvite(void)

{
  return;
}

// BindModel @ 14bd47dc0

void __thiscall UDS_VM_Chat_GroupInvite::BindModel(UDS_VM_Chat_GroupInvite *this)

{
  TObjectPtr<UDS_VM_Common_TabGroup>_u_0 TVar1;
  UDS_ChatEvent *pUVar2;
  UDS_UIEvent *pUVar3;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  UDS_PlayerEvent *pUVar4;
  FWeakObjectPtr local_res10;
  TObjectPtr<UDS_VM_Common_TabGroup>_u_0 local_res18;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar2 = UDS_ChatEvent::GetEvent();
  if (pUVar2 != (UDS_ChatEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnInviteGroup,this);
    TMulticastDelegateRegistration<void___cdecl(__int64,FString_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_Chat_GroupInvite>
              ((TMulticastDelegateRegistration<void___cdecl(__int64,FString_const_&),FDefaultDelegateUserPolicy>
                *)&pUVar2->OnInviteGroup,(UDS_VM_Chat_GroupInvite *)&local_res10,
               (pmf_0741e56f *)this);
  }
  pUVar3 = UDS_UIEvent::GetEvent();
  if (pUVar3 != (UDS_UIEvent *)0x0) {
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
                          *)&(pUVar3->OnSelectedTabIndex).Subscriptions,
                         local_res10.ObjectSerialNumber ^ local_res10.ObjectIndex,
                         (TWeakObjectPtr<UObject,FWeakObjectPtr> *)&local_res10);
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(this_00,this);
    TMulticastDelegateRegistration<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>::
    AddUObject<UDS_VM_Chat_GroupInvite>
              ((TMulticastDelegateRegistration<void___cdecl(int,int),FDefaultTSDelegateUserPolicy> *
               )this_00,(UDS_VM_Chat_GroupInvite *)&local_res18.ObjectPtr,(pmf_8c587028 *)this);
  }
  pUVar4 = UDS_PlayerEvent::GetEvent();
  if (pUVar4 != (UDS_PlayerEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar4->OnUpdateSearchPlayerNames,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Chat_GroupInvite>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar4->OnUpdateSearchPlayerNames,(UDS_VM_Chat_GroupInvite *)&local_res10,
               (pmf_e6a6053a *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar4->OnClickSearchedNameEntry,this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Chat_GroupInvite>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar4->OnClickSearchedNameEntry,(UDS_VM_Chat_GroupInvite *)&local_res10,
               (pmf_1643900e *)this);
  }
  return;
}

// InitViewModel @ 14bd69770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_VM_Chat_GroupInvite::InitViewModel(UDS_VM_Chat_GroupInvite *this)

{
  code *pcVar1;
  FName FVar2;
  FName FVar3;
  FDS_ViewModelContext_InputKey *pFVar4;
  bool bVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  UDS_VM_Common_TabGroup *pUVar8;
  UDS_VM_InputKey *pUVar9;
  longlong *plVar10;
  undefined1 auStack_e8 [32];
  FName local_c8;
  TSharedPtr<FDS_ViewModelContext_InputKey,1> local_b8;
  TSharedPtr<FDS_ViewModelContext,1> local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if ((this->TabGroup).field0_0x0.DebugPtr == (UDS_VM_Common_TabGroup *)0x0) {
    local_c8.ComparisonIndex.Value = 0;
    local_c8.Number = 0;
    pUVar6 = Z_Construct_UClass_UDS_VM_Common_TabGroup_NoRegister();
    FVar2 = local_c8;
    if (local_c8 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar7 = Z_Construct_UClass_UDS_VM_Common_TabGroup_NoRegister();
    CheckIsClassChildOf_Internal(pUVar7,pUVar6);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar6);
    FVar3 = local_c8;
    local_98._48_8_ = (FObjectInstancingGraph *)0x0;
    local_98._56_8_ = (UPackage *)0x0;
    local_c8.ComparisonIndex = FVar2.ComparisonIndex.Value;
    local_c8.Number = FVar2.Number;
    local_98._16_4_ = local_c8.ComparisonIndex.Value;
    local_98._20_4_ = local_c8.Number;
    local_98._24_4_ = RF_Transient;
    local_98._40_8_ = (UObject *)0x0;
    local_98[0x20] = false;
    local_c8 = FVar3;
    local_98._8_8_ = this;
    pUVar8 = (UDS_VM_Common_TabGroup *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar10 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar10 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    if (pUVar8 != (UDS_VM_Common_TabGroup *)0x0) {
      *(undefined1 *)((longlong)&pUVar8->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar8 != (UDS_VM_Common_TabGroup *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    (this->TabGroup).field0_0x0.DebugPtr = pUVar8;
  }
  if ((this->VM_CloseInputKey).field0_0x0.DebugPtr == (UDS_VM_InputKey *)0x0) {
    MakeContext<FDS_ViewModelContext_InputKey>(&local_b8);
    pFVar4 = local_b8.Object;
    if (local_b8.Object == (FDS_ViewModelContext_InputKey *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *(undefined4 *)&pFVar4->_padding_ = 0x15d;
    local_a8.Object = (FDS_ViewModelContext *)local_b8.Object;
    local_a8.SharedReferenceCount.ReferenceController =
         local_b8.SharedReferenceCount.ReferenceController;
    pFVar4->KeyActionType = IA_UI_Escape;
    if (local_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pUVar9 = UDS_ViewModelBase::CreateViewModel<UDS_VM_InputKey>((UObject *)this,&local_a8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UDS_VM_InputKey *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    (this->VM_CloseInputKey).field0_0x0.DebugPtr = pUVar9;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b8.SharedReferenceCount.ReferenceController);
  }
  return;
}

// OnClickClose @ 14bd72700

void __thiscall
UDS_VM_Chat_GroupInvite::OnClickClose(UDS_VM_Chat_GroupInvite *this,FDS_ButtonEventField *param_1)

{
  FName local_18;
  int local_10;
  
  (this->CloseMyselfEvent).bIsActivate = true;
  local_10 = FFieldNotificationClassDescriptor::CloseMyselfEvent.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::CloseMyselfEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnClickSearch @ 14bd73f20

void __thiscall
UDS_VM_Chat_GroupInvite::OnClickSearch(UDS_VM_Chat_GroupInvite *this,FDS_ButtonEventField *param_1)

{
  int iVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  FString *pFVar6;
  UDS_VM_Chat_GroupInvite *local_res8;
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
  
  bVar3 = FText::IsEmpty(&this->CurrentSearchName);
  iVar1 = FFieldNotificationClassDescriptor::bIsShowSearchedList.BitNumber;
  local_88 = FFieldNotificationClassDescriptor::bIsShowSearchedList.FieldName;
  if (bVar3) {
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
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_Chat_GroupInvite____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_VM_Chat_GroupInvite *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar4[3] = 0;
    local_res8 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_VM_Chat_GroupInvite *)0x0)) {
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
    if (local_28.Data == (FScriptContainerElement *)0x0) goto LAB_14bd74126;
    (*(code *)**(undefined8 **)local_28.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_28,0,0,0x10);
    local_20 = 0;
  }
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
LAB_14bd74126:
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
  pFVar6 = FText::ToString(&this->CurrentSearchName);
  FDS_PlayerRepo::RequestSearchPlayersByName
            (pFVar6,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_30);
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

// OnClickSearchedNameEntry @ 14bd74250

void __thiscall
UDS_VM_Chat_GroupInvite::OnClickSearchedNameEntry(UDS_VM_Chat_GroupInvite *this,int param_1)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  int iVar3;
  bool bVar4;
  FDS_PlayerRepo *pFVar5;
  FText *pFVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  FString *pFVar9;
  UDS_VM_Chat_GroupInvite *local_res18 [2];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_128;
  ForAnyElementType local_120;
  int local_118;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_110;
  FDelegateAllocation local_108;
  undefined1 local_f8 [8];
  ForAnyElementType local_f0;
  int local_e8;
  FName local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  FText local_c8;
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
  pFVar6 = FText::FromString(&local_c8,
                             (FString *)
                             ((pFVar5->SearchedPlayerNameList).AllocatorInstance.Data +
                             (longlong)param_1 * 0x10));
  SetCurrentSearchName(this,pFVar6);
  if (local_c8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
  }
  iStack_d0 = FFieldNotificationClassDescriptor::bIsShowSearchedList.BitNumber;
  local_d8 = FFieldNotificationClassDescriptor::bIsShowSearchedList.FieldName;
  if (this->bIsShowSearchedList != false) {
    this->bIsShowSearchedList = false;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_d8);
  }
  local_d8 = (FName)SearchPlayerResultEvent;
  uStack_cc = local_c8._12_4_;
  local_110.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_108.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_108.DelegateSize = 0;
  iStack_d0 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_110,(FWriteAccessScope *)&local_58);
  local_40 = &local_108;
  puVar7 = UE::Core::Private::DelegateAllocate(0x30,&local_108);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_Chat_GroupInvite____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_VM_Chat_GroupInvite *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar7[3] = 0;
    local_res18[0] = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_VM_Chat_GroupInvite *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)local_res18);
    *(FName *)(puVar7 + 4) = local_d8;
    puVar7[5] = CONCAT44(uStack_cc,iStack_d0);
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  local_f8 = (undefined1  [8])0x0;
  local_f0.Data = (FScriptContainerElement *)0x0;
  local_e8 = 0;
  local_128.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_120.Data = (FScriptContainerElement *)0x0;
  local_118 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_110,&local_38);
  if ((local_108.DelegateSize != 0) &&
     (local_108.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (**(code **)(*(longlong *)local_108.DelegateAllocator + 0x50))
              (local_108.DelegateAllocator,&local_128);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_128,(FWriteAccessScope *)&local_b8);
  iVar3 = local_118;
  FVar2.Data = local_120.Data;
  local_120.Data = (FScriptContainerElement *)0x0;
  local_118 = 0;
  if (local_b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
             (FWriteAccessScope *)&local_a0);
  if (local_e8 != 0) {
    if (local_f0.Data == (FScriptContainerElement *)0x0) goto LAB_14bd744ca;
    (*(code *)**(undefined8 **)local_f0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_f0,0,0,0x10);
    local_e8 = 0;
  }
  if (local_f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data);
  }
LAB_14bd744ca:
  local_f0.Data = FVar2.Data;
  local_e8 = iVar3;
  if (local_a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a0.Accessor,&local_a0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_128,(FWriteAccessScope *)&local_88);
  if ((local_118 != 0) && (local_120.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_120.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_120,0,0,0x10);
    local_118 = 0;
  }
  if (local_88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
  }
  if (local_120.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_128.AccessDetector);
  pFVar9 = FText::ToString(&this->CurrentSearchName);
  FDS_PlayerRepo::RequestSearchPlayersByName
            (pFVar9,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_f8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_110,(FWriteAccessScope *)&local_70);
  if ((local_108.DelegateSize != 0) &&
     (local_108.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_108.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_108,0,0,0x10);
    local_108.DelegateSize = 0;
  }
  if (local_70.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
  }
  if (local_108.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_108.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_110.AccessDetector);
  return;
}

// OnClickTextClear @ 14bd74640

void __thiscall
UDS_VM_Chat_GroupInvite::OnClickTextClear
          (UDS_VM_Chat_GroupInvite *this,FDS_ButtonEventField *param_1)

{
  FText *pFVar1;
  FText local_18;
  
  pFVar1 = FText::FText(&local_18);
  SetCurrentSearchName(this,pFVar1);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  local_18.Flags = FFieldNotificationClassDescriptor::bIsShowSearchedList.BitNumber;
  local_18.TextData.Reference =
       (ITextData *)FFieldNotificationClassDescriptor::bIsShowSearchedList.FieldName;
  if (this->bIsShowSearchedList != false) {
    this->bIsShowSearchedList = false;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnInviteGroup @ 14bd7a5c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Chat_GroupInvite::OnInviteGroup
          (UDS_VM_Chat_GroupInvite *this,long64 param_1,FString *param_2)

{
  UDS_ChattingManager *this_00;
  UDS_LogManager *pUVar1;
  FString *pFVar2;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this_00 = UDS_ChattingManager::GetInst();
  if (this_00 == (UDS_ChattingManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_148._padding_ = (longlong)this_00;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_Chat_GroupInvite::OnInviteGroup",0x26,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_148.Ptr,0xf6,L"chattingManager == nullptr");
      if ((UDS_ChattingManager *)local_148._padding_ != (UDS_ChattingManager *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    pFVar2 = FText::ToString(&this->InviteMessage);
    UDS_ChattingManager::SendGroupChatLink(this_00,&this->GroupID,param_1,param_2,pFVar2);
  }
  return;
}

// OnInviteMessageTextChanged @ 14bd7a6d0

void __thiscall
UDS_VM_Chat_GroupInvite::OnInviteMessageTextChanged
          (UDS_VM_Chat_GroupInvite *this,FDS_TextCommittedEventField *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  uint uVar3;
  undefined1 local_res8 [8];
  
  pIVar1 = (param_1->NewText).TextData.Reference;
  pIVar2 = (this->InviteMessage).TextData.Reference;
  if (pIVar2 == pIVar1) {
    uVar3 = (param_1->NewText).Flags;
  }
  else {
    (this->InviteMessage).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
    uVar3 = (param_1->NewText).Flags;
  }
  (this->InviteMessage).Flags = uVar3;
  return;
}

// OnSearchNameTextChanged @ 14bd7c9a0

void __thiscall
UDS_VM_Chat_GroupInvite::OnSearchNameTextChanged
          (UDS_VM_Chat_GroupInvite *this,FDS_TextCommittedEventField *param_1)

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

// OnSearchNameTextCommitted @ 14bd7ca30

void __thiscall
UDS_VM_Chat_GroupInvite::OnSearchNameTextCommitted
          (UDS_VM_Chat_GroupInvite *this,FDS_TextCommittedEventField *param_1)

{
  FText *this_00;
  ITextData *pIVar1;
  ITextData *pIVar2;
  int iVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  FString *pFVar8;
  UDS_VM_Chat_GroupInvite *local_res8;
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
  
  this_00 = &this->CurrentSearchName;
  pIVar1 = (this_00->TextData).Reference;
  pIVar2 = (param_1->NewText).TextData.Reference;
  if (pIVar1 != pIVar2) {
    (this_00->TextData).Reference = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,&local_res8);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (this->CurrentSearchName).Flags = (param_1->NewText).Flags;
  if (param_1->CommitType != OnEnter) {
    return;
  }
  bVar5 = FText::IsEmpty(this_00);
  iVar3 = FFieldNotificationClassDescriptor::bIsShowSearchedList.BitNumber;
  local_88 = FFieldNotificationClassDescriptor::bIsShowSearchedList.FieldName;
  if (bVar5) {
    return;
  }
  if (this->bIsShowSearchedList != false) {
    this->bIsShowSearchedList = false;
    FStack_80.Data._0_4_ = iVar3;
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
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,&local_60);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_Chat_GroupInvite____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_VM_Chat_GroupInvite *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar6[3] = 0;
    local_res8 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_VM_Chat_GroupInvite *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_res8);
    *(FName *)(puVar6 + 4) = local_88;
    puVar6[5] = FStack_80.Data;
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
  iVar3 = local_78;
  FVar4.Data = FStack_80.Data;
  FStack_80.Data = (FScriptContainerElement *)0x0;
  local_78 = 0;
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_30,
             (FWriteAccessScope *)&local_50);
  if (local_20 != 0) {
    if (local_28.Data == (FScriptContainerElement *)0x0) goto LAB_14bd7cc66;
    (*(code *)**(undefined8 **)local_28.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_28,0,0,0x10);
    local_20 = 0;
  }
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
LAB_14bd7cc66:
  local_28.Data = FVar4.Data;
  local_20 = iVar3;
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
  pFVar8 = FText::ToString(this_00);
  FDS_PlayerRepo::RequestSearchPlayersByName
            (pFVar8,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_30);
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

// OnSelectedTabIndex @ 14bd7da90

void __thiscall
UDS_VM_Chat_GroupInvite::OnSelectedTabIndex(UDS_VM_Chat_GroupInvite *this,int param_1,int param_2)

{
  FName FVar1;
  int iVar2;
  FText *pFVar3;
  long64 lVar4;
  FText local_78;
  FDS_Text local_68;
  
  if (param_1 == 0) {
    lVar4 = 0x41ef7;
  }
  else if (param_1 == 1) {
    lVar4 = 0x41ef8;
  }
  else {
    lVar4 = 0x41efa;
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
  FDS_Text::SetTextFromStringTable(&local_68,StringUi,lVar4);
  iVar2 = FFieldNotificationClassDescriptor::EmptyText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::EmptyText.FieldName;
  FDS_Text::operator=(&this->EmptyText,&local_68);
  local_78.TextData.Reference = (ITextData *)FVar1;
  local_78.Flags = iVar2;
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
  pFVar3 = FText::FText(&local_78);
  SetCurrentSearchName(this,pFVar3);
  if ((FName)local_78.TextData.Reference != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.TextData.Reference + 0x10))();
  }
  local_78.Flags = FFieldNotificationClassDescriptor::bIsShowSearchedList.BitNumber;
  local_78.TextData.Reference =
       (ITextData *)FFieldNotificationClassDescriptor::bIsShowSearchedList.FieldName;
  if (this->bIsShowSearchedList != false) {
    this->bIsShowSearchedList = false;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
  }
  return;
}

// OnSetViewModel @ 14bd80340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Chat_GroupInvite::OnSetViewModel
          (UDS_VM_Chat_GroupInvite *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  UDS_VM_Common_TabGroup *this_00;
  code *pcVar3;
  EDS_StringTableType EVar4;
  long64 lVar5;
  FName FVar6;
  FDateTime FVar7;
  FTimespan FVar8;
  EDS_TimeExpression EVar9;
  ForAnyElementType FVar10;
  bool bVar11;
  uint uVar12;
  UDS_LogManager *pUVar13;
  FDS_ViewModelContext *pFVar14;
  UScriptStruct *pUVar15;
  UDS_ViewModelContextManager *this_01;
  undefined4 *puVar16;
  FDS_ViewModelContext *pFVar17;
  FDS_ViewModelContext *pFVar18;
  int iVar19;
  longlong lVar20;
  undefined1 auStackY_408 [32];
  ForAnyElementType local_388;
  undefined8 local_380;
  ForAnyElementType local_378;
  undefined8 local_370;
  undefined2 local_368;
  undefined1 local_366;
  undefined8 local_360;
  EDS_StringTableType local_358;
  long64 local_350;
  FName local_348;
  long64 local_340;
  long64 local_338;
  EDS_TimeExpression local_330;
  undefined1 local_32c;
  ForAnyElementType local_328;
  undefined8 local_320;
  ForAnyElementType local_318;
  undefined8 local_310;
  undefined2 local_308;
  undefined1 local_306;
  undefined8 local_300;
  EDS_StringTableType local_2f8;
  long64 local_2f0;
  FName local_2e8;
  long64 local_2e0;
  long64 local_2d8;
  EDS_TimeExpression local_2d0;
  undefined1 local_2cc;
  ForAnyElementType local_2c8;
  undefined8 local_2c0;
  ForAnyElementType local_2b8;
  undefined8 local_2b0;
  undefined2 local_2a8;
  undefined1 local_2a6;
  UDS_VM_Chat_GroupInvite *local_2a0;
  FDS_Text local_298;
  FDS_Text local_248;
  FDS_Text local_1f8;
  TSharedPtr<FDS_ViewModelContext_ChatGroup,1> local_1a8;
  TSharedPtr<FDS_ViewModelContext,1> local_198;
  TSharedPtr<FDS_ViewModelContext,1> local_188;
  TSharedPtr<FDS_ViewModelContext,1> local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_408;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2a0 = this;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
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
  SafeCast<FDS_ViewModelContext_ChatGroup>(&local_1a8,&local_188);
  if (local_1a8.Object == (FDS_ViewModelContext_ChatGroup *)0x0) {
    pUVar13 = UDS_LogManager::GetInst();
    if (pUVar13 != (UDS_LogManager *)0x0) {
      pUVar13 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_VM_Chat_GroupInvite::OnSetViewModel",0x27,Yes);
      UDS_LogManager::PrintLog
                (pUVar13,1,Warning,local_168.Ptr,0x1e,L"chatGroupContext.IsValid() == false");
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
    }
  }
  else {
    if ((local_1a8.Object == (FDS_ViewModelContext_ChatGroup *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = ((local_1a8.Object)->GroupID).Data.ArrayNum;
    pFVar18 = (FDS_ViewModelContext *)0x0;
    iVar19 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar19 = 0;
    }
    ::FString::AssignRange
              (&this->GroupID,(wchar_t *)((local_1a8.Object)->GroupID).Data.AllocatorInstance.Data,
               iVar19);
    if ((this->TabGroup).field0_0x0.DebugPtr != (UDS_VM_Common_TabGroup *)0x0) {
      pFVar14 = ::operator_new(0x48);
      pFVar17 = pFVar18;
      if (pFVar14 != (FDS_ViewModelContext *)0x0) {
        *(undefined8 *)&pFVar14->ViewModelTemplateKey = 0;
        *(undefined4 *)((longlong)&pFVar14[1]._padding_ + 4) = 0;
        *(undefined4 *)((longlong)&pFVar14[2]._padding_ + 4) = 0;
        *(undefined8 *)&pFVar14->DerivedStaticStruct = 0;
        (pFVar14->ViewModelName).ComparisonIndex = 0;
        (pFVar14->ViewModelName).Number = 0;
        pFVar14->_padding_ = (longlong)&___7FDS_ViewModelContext_TabGroup__6B_;
        *(undefined4 *)&pFVar14[1]._padding_ = 0;
        *(undefined8 *)&pFVar14[1].DerivedStaticStruct = 0;
        pFVar14[1].ViewModelName.ComparisonIndex = 0;
        pFVar14[1].ViewModelName.Number = 0;
        *(undefined8 *)&pFVar14[1].ViewModelTemplateKey = 0;
        *(undefined4 *)&pFVar14[2]._padding_ = 0;
        pFVar17 = pFVar14;
      }
      pFVar14 = ::operator_new(0x20);
      if (pFVar14 != (FDS_ViewModelContext *)0x0) {
        *(atomic<int> *)&pFVar14->DerivedStaticStruct = (atomic<int>)0x1;
        *(code **)&(pFVar14->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
        pFVar14->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_TabGroup__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
        ;
        ((atomic<int> *)&pFVar14->DerivedStaticStruct)[1] = (atomic<int>)0x1;
        *(FDS_ViewModelContext **)&pFVar14->ViewModelTemplateKey = pFVar17;
        pFVar18 = pFVar14;
      }
      if ((pFVar17 == (FDS_ViewModelContext *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pUVar15 = FDS_ViewModelContext_TabGroup::StaticStruct();
      *(UScriptStruct **)&pFVar17->DerivedStaticStruct = pUVar15;
      this_01 = UDS_ViewModelContextManager::GetInst();
      if (this_01 != (UDS_ViewModelContextManager *)0x0) {
        if (pFVar18 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar18->DerivedStaticStruct =
               (atomic<int>)((int)*(atomic<int> *)&pFVar18->DerivedStaticStruct + 1);
          UNLOCK();
        }
        local_198.Object = pFVar17;
        local_198.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar18;
        UDS_ViewModelContextManager::RegisterContext(this_01,&local_198);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_198.SharedReferenceCount.ReferenceController);
      }
      pFVar17->ViewModelTemplateKey = CommonTabGroup;
      *(undefined4 *)&pFVar17[1]._padding_ = 0;
      local_298.StringTableType = None;
      local_298.StringTableID = 0;
      local_298.DateTime.Ticks = 0;
      local_298.TimeSpan.Ticks = 0;
      local_298.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_298.StringEnumTableNameID.Number = 0;
      local_298.TimeExpressionType = None;
      local_298.IsExpression = false;
      local_298.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_298.UniqueString.Data.ArrayNum = 0;
      local_298.UniqueString.Data.ArrayMax = 0;
      local_298.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_298.FormatArgs.ArrayNum = 0;
      local_298.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringTable(&local_298,StringUi,0x334a4);
      FVar10.Data = local_298.UniqueString.Data.AllocatorInstance.Data;
      bVar11 = local_298.IsExpression;
      EVar9 = local_298.TimeExpressionType;
      FVar8.Ticks = local_298.TimeSpan.Ticks;
      FVar7.Ticks = local_298.DateTime.Ticks;
      FVar6 = local_298.StringEnumTableNameID;
      lVar5 = local_298.StringTableID;
      EVar4 = local_298.StringTableType;
      lVar20 = (longlong)local_298.UniqueString.Data.ArrayNum;
      local_388.Data = (FScriptContainerElement *)0x0;
      local_380 = CONCAT44(local_380._4_4_,local_298.UniqueString.Data.ArrayNum);
      if (local_298.UniqueString.Data.ArrayNum == 0) {
        local_380 = local_298.UniqueString.Data._8_8_ & 0xffffffff;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_298.UniqueString.Data.ArrayNum,0,&local_388,
                   local_298.UniqueString.Data.ArrayNum,(int *)((longlong)&local_380 + 4));
        memcpy(local_388.Data,FVar10.Data,lVar20 * 2);
      }
      FVar10.Data = local_298.FormatArgs.AllocatorInstance.Data;
      iVar1 = local_298.FormatArgs.ArrayNum;
      local_378.Data = (FScriptContainerElement *)0x0;
      local_370 = CONCAT44(local_370._4_4_,local_298.FormatArgs.ArrayNum);
      if (local_298.FormatArgs.ArrayNum == 0) {
        local_370 = local_298.FormatArgs._8_8_ & 0xffffffff;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,local_298.FormatArgs.ArrayNum,0,&local_378,local_298.FormatArgs.ArrayNum,
                   (int *)((longlong)&local_370 + 4));
        ConstructItems<FDS_TextFormatArg,FDS_TextFormatArg,int>
                  (local_378.Data,(FDS_TextFormatArg *)FVar10.Data,iVar1);
      }
      local_368 = 0;
      local_366 = 0;
      uVar12 = pFVar17[1].ViewModelName.ComparisonIndex.Value;
      if (uVar12 == pFVar17[1].ViewModelName.Number) {
        uVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x860,(ForAnyElementType *)&pFVar17[1].DerivedStaticStruct,
                            (int *)&pFVar17[1].ViewModelName.Number);
      }
      pFVar17[1].ViewModelName.ComparisonIndex.Value = uVar12 + 1;
      puVar16 = (undefined4 *)
                ((longlong)(int)uVar12 * 0x60 + *(longlong *)&pFVar17[1].DerivedStaticStruct);
      *puVar16 = 0xffffffff;
      puVar16[1] = 0xffffffff;
      *(EDS_StringTableType *)(puVar16 + 2) = EVar4;
      *(long64 *)(puVar16 + 4) = lVar5;
      *(FName *)(puVar16 + 6) = FVar6;
      *(long64 *)(puVar16 + 8) = FVar7.Ticks;
      *(long64 *)(puVar16 + 10) = FVar8.Ticks;
      puVar16[0xc] = EVar9;
      *(undefined8 *)(puVar16 + 0xe) = 0;
      *(bool *)(puVar16 + 0xd) = bVar11;
      *(FScriptContainerElement **)(puVar16 + 0xe) = local_388.Data;
      local_388.Data = (FScriptContainerElement *)0x0;
      puVar16[0x10] = (undefined4)local_380;
      puVar16[0x11] = local_380._4_4_;
      local_380 = 0;
      *(undefined8 *)(puVar16 + 0x12) = 0;
      *(FScriptContainerElement **)(puVar16 + 0x12) = local_378.Data;
      local_378.Data = (FScriptContainerElement *)0x0;
      puVar16[0x14] = (undefined4)local_370;
      puVar16[0x15] = local_370._4_4_;
      local_370 = 0;
      *(undefined1 *)(puVar16 + 0x16) = (undefined1)local_368;
      *(undefined1 *)((longlong)puVar16 + 0x59) = local_368._1_1_;
      *(undefined1 *)((longlong)puVar16 + 0x5a) = local_366;
      DestructItems<FDS_TextFormatArg,int>((FDS_TextFormatArg *)0x0,0);
      if (local_378.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_378.Data);
      }
      if (local_388.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_388.Data);
      }
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_298.FormatArgs.AllocatorInstance.Data,
                 local_298.FormatArgs.ArrayNum);
      if ((FDS_TextFormatArg *)local_298.FormatArgs.AllocatorInstance.Data !=
          (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_298.FormatArgs.AllocatorInstance.Data);
      }
      if (local_298.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_298.UniqueString.Data.AllocatorInstance.Data);
      }
      local_248.StringTableType = None;
      local_248.StringTableID = 0;
      local_248.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_248.StringEnumTableNameID.Number = 0;
      local_248.TimeExpressionType = None;
      local_248.DateTime.Ticks = 0;
      local_248.TimeSpan.Ticks = 0;
      local_248.IsExpression = false;
      local_248.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_248.UniqueString.Data.ArrayNum = 0;
      local_248.UniqueString.Data.ArrayMax = 0;
      local_248.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_248.FormatArgs.ArrayNum = 0;
      local_248.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringTable(&local_248,StringUi,0x334a5);
      FVar10.Data = local_248.UniqueString.Data.AllocatorInstance.Data;
      lVar20 = (longlong)local_248.UniqueString.Data.ArrayNum;
      local_358 = local_248.StringTableType;
      local_350 = local_248.StringTableID;
      local_348 = local_248.StringEnumTableNameID;
      local_340 = local_248.DateTime.Ticks;
      local_338 = local_248.TimeSpan.Ticks;
      local_330 = local_248.TimeExpressionType;
      local_32c = local_248.IsExpression;
      local_360 = 0xffffffffffffffff;
      local_328.Data = (FScriptContainerElement *)0x0;
      local_320 = CONCAT44(local_320._4_4_,local_248.UniqueString.Data.ArrayNum);
      if (local_248.UniqueString.Data.ArrayNum == 0) {
        local_320 = local_248.UniqueString.Data._8_8_ & 0xffffffff;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_248.UniqueString.Data.ArrayNum,0,&local_328,
                   local_248.UniqueString.Data.ArrayNum,(int *)((longlong)&local_320 + 4));
        memcpy(local_328.Data,FVar10.Data,lVar20 * 2);
      }
      FVar10.Data = local_248.FormatArgs.AllocatorInstance.Data;
      iVar1 = local_248.FormatArgs.ArrayNum;
      local_318.Data = (FScriptContainerElement *)0x0;
      local_310 = CONCAT44(local_310._4_4_,local_248.FormatArgs.ArrayNum);
      if (local_248.FormatArgs.ArrayNum == 0) {
        local_310 = local_248.FormatArgs._8_8_ & 0xffffffff;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,local_248.FormatArgs.ArrayNum,0,&local_318,local_248.FormatArgs.ArrayNum,
                   (int *)((longlong)&local_310 + 4));
        ConstructItems<FDS_TextFormatArg,FDS_TextFormatArg,int>
                  (local_318.Data,(FDS_TextFormatArg *)FVar10.Data,iVar1);
      }
      local_308 = 0;
      local_306 = 0;
      uVar12 = pFVar17[1].ViewModelName.ComparisonIndex.Value;
      if (uVar12 == pFVar17[1].ViewModelName.Number) {
        uVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x860,(ForAnyElementType *)&pFVar17[1].DerivedStaticStruct,
                            (int *)&pFVar17[1].ViewModelName.Number);
      }
      pFVar17[1].ViewModelName.ComparisonIndex.Value = uVar12 + 1;
      puVar16 = (undefined4 *)
                ((longlong)(int)uVar12 * 0x60 + *(longlong *)&pFVar17[1].DerivedStaticStruct);
      *puVar16 = (undefined4)local_360;
      puVar16[1] = local_360._4_4_;
      *(EDS_StringTableType *)(puVar16 + 2) = local_358;
      *(long64 *)(puVar16 + 4) = local_350;
      *(FName *)(puVar16 + 6) = local_348;
      *(long64 *)(puVar16 + 8) = local_340;
      *(long64 *)(puVar16 + 10) = local_338;
      puVar16[0xc] = local_330;
      *(undefined8 *)(puVar16 + 0xe) = 0;
      *(undefined1 *)(puVar16 + 0xd) = local_32c;
      *(FScriptContainerElement **)(puVar16 + 0xe) = local_328.Data;
      local_328.Data = (FScriptContainerElement *)0x0;
      puVar16[0x10] = (undefined4)local_320;
      puVar16[0x11] = local_320._4_4_;
      local_320 = 0;
      *(undefined8 *)(puVar16 + 0x12) = 0;
      *(FScriptContainerElement **)(puVar16 + 0x12) = local_318.Data;
      local_318.Data = (FScriptContainerElement *)0x0;
      puVar16[0x14] = (undefined4)local_310;
      puVar16[0x15] = local_310._4_4_;
      local_310 = 0;
      *(undefined1 *)(puVar16 + 0x16) = (undefined1)local_308;
      *(undefined1 *)((longlong)puVar16 + 0x59) = local_308._1_1_;
      *(undefined1 *)((longlong)puVar16 + 0x5a) = local_306;
      DestructItems<FDS_TextFormatArg,int>((FDS_TextFormatArg *)0x0,0);
      if (local_318.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_318.Data);
      }
      if (local_328.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_328.Data);
      }
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_248.FormatArgs.AllocatorInstance.Data,
                 local_248.FormatArgs.ArrayNum);
      if ((FDS_TextFormatArg *)local_248.FormatArgs.AllocatorInstance.Data !=
          (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_248.FormatArgs.AllocatorInstance.Data);
      }
      if (local_248.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_248.UniqueString.Data.AllocatorInstance.Data);
      }
      local_1f8.StringTableType = None;
      local_1f8.StringTableID = 0;
      local_1f8.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_1f8.StringEnumTableNameID.Number = 0;
      local_1f8.TimeExpressionType = None;
      local_1f8.DateTime.Ticks = 0;
      local_1f8.TimeSpan.Ticks = 0;
      local_1f8.IsExpression = false;
      local_1f8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1f8.UniqueString.Data.ArrayNum = 0;
      local_1f8.UniqueString.Data.ArrayMax = 0;
      local_1f8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1f8.FormatArgs.ArrayNum = 0;
      local_1f8.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringTable(&local_1f8,StringUi,0x334a6);
      FVar10.Data = local_1f8.UniqueString.Data.AllocatorInstance.Data;
      lVar20 = (longlong)local_1f8.UniqueString.Data.ArrayNum;
      local_2f8 = local_1f8.StringTableType;
      local_2f0 = local_1f8.StringTableID;
      local_2e8 = local_1f8.StringEnumTableNameID;
      local_2e0 = local_1f8.DateTime.Ticks;
      local_2d8 = local_1f8.TimeSpan.Ticks;
      local_2d0 = local_1f8.TimeExpressionType;
      local_2cc = local_1f8.IsExpression;
      local_300 = 0xffffffffffffffff;
      local_2c8.Data = (FScriptContainerElement *)0x0;
      local_2c0 = CONCAT44(local_2c0._4_4_,local_1f8.UniqueString.Data.ArrayNum);
      if (local_1f8.UniqueString.Data.ArrayNum == 0) {
        local_2c0 = local_1f8.UniqueString.Data._8_8_ & 0xffffffff;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_1f8.UniqueString.Data.ArrayNum,0,&local_2c8,
                   local_1f8.UniqueString.Data.ArrayNum,(int *)((longlong)&local_2c0 + 4));
        memcpy(local_2c8.Data,FVar10.Data,lVar20 * 2);
      }
      FVar10.Data = local_1f8.FormatArgs.AllocatorInstance.Data;
      iVar1 = local_1f8.FormatArgs.ArrayNum;
      local_2b8.Data = (FScriptContainerElement *)0x0;
      local_2b0 = CONCAT44(local_2b0._4_4_,local_1f8.FormatArgs.ArrayNum);
      if (local_1f8.FormatArgs.ArrayNum == 0) {
        local_2b0 = local_1f8.FormatArgs._8_8_ & 0xffffffff;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,local_1f8.FormatArgs.ArrayNum,0,&local_2b8,local_1f8.FormatArgs.ArrayNum,
                   (int *)((longlong)&local_2b0 + 4));
        ConstructItems<FDS_TextFormatArg,FDS_TextFormatArg,int>
                  (local_2b8.Data,(FDS_TextFormatArg *)FVar10.Data,iVar1);
      }
      local_2a8 = 0;
      local_2a6 = 0;
      uVar12 = pFVar17[1].ViewModelName.ComparisonIndex.Value;
      if (uVar12 == pFVar17[1].ViewModelName.Number) {
        uVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x860,(ForAnyElementType *)&pFVar17[1].DerivedStaticStruct,
                            (int *)&pFVar17[1].ViewModelName.Number);
      }
      pFVar17[1].ViewModelName.ComparisonIndex.Value = uVar12 + 1;
      puVar16 = (undefined4 *)
                ((longlong)(int)uVar12 * 0x60 + *(longlong *)&pFVar17[1].DerivedStaticStruct);
      *puVar16 = (undefined4)local_300;
      puVar16[1] = local_300._4_4_;
      *(EDS_StringTableType *)(puVar16 + 2) = local_2f8;
      *(long64 *)(puVar16 + 4) = local_2f0;
      *(FName *)(puVar16 + 6) = local_2e8;
      *(long64 *)(puVar16 + 8) = local_2e0;
      *(long64 *)(puVar16 + 10) = local_2d8;
      puVar16[0xc] = local_2d0;
      *(undefined8 *)(puVar16 + 0xe) = 0;
      *(undefined1 *)(puVar16 + 0xd) = local_2cc;
      *(FScriptContainerElement **)(puVar16 + 0xe) = local_2c8.Data;
      local_2c8.Data = (FScriptContainerElement *)0x0;
      puVar16[0x10] = (undefined4)local_2c0;
      puVar16[0x11] = local_2c0._4_4_;
      local_2c0 = 0;
      *(undefined8 *)(puVar16 + 0x12) = 0;
      *(FScriptContainerElement **)(puVar16 + 0x12) = local_2b8.Data;
      local_2b8.Data = (FScriptContainerElement *)0x0;
      puVar16[0x14] = (undefined4)local_2b0;
      puVar16[0x15] = local_2b0._4_4_;
      local_2b0 = 0;
      *(undefined1 *)(puVar16 + 0x16) = (undefined1)local_2a8;
      *(undefined1 *)((longlong)puVar16 + 0x59) = local_2a8._1_1_;
      *(undefined1 *)((longlong)puVar16 + 0x5a) = local_2a6;
      DestructItems<FDS_TextFormatArg,int>((FDS_TextFormatArg *)0x0,0);
      if (local_2b8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2b8.Data);
      }
      if (local_2c8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2c8.Data);
      }
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_1f8.FormatArgs.AllocatorInstance.Data,
                 local_1f8.FormatArgs.ArrayNum);
      if ((FDS_TextFormatArg *)local_1f8.FormatArgs.AllocatorInstance.Data !=
          (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_1f8.FormatArgs.AllocatorInstance.Data);
      }
      if (local_1f8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f8.UniqueString.Data.AllocatorInstance.Data);
      }
      pFVar17[1].ViewModelTemplateKey = 0x41f;
      *(undefined4 *)&pFVar17[1].field_0x1c = 0x4e25;
      *(undefined4 *)&pFVar17[2]._padding_ = 0x4e26;
      this_00 = (local_2a0->TabGroup).field0_0x0.DebugPtr;
      if (pFVar18 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar18->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar18->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_178.Object = pFVar17;
      local_178.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar18;
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&local_178);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar18);
      this = local_2a0;
    }
    UpdateGroupInvite(this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUpdateSearchPlayerNames @ 14bd838e0

void __thiscall UDS_VM_Chat_GroupInvite::OnUpdateSearchPlayerNames(UDS_VM_Chat_GroupInvite *this)

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

// SearchPlayerResultEvent @ 14bd869a0

void __thiscall UDS_VM_Chat_GroupInvite::SearchPlayerResultEvent(UDS_VM_Chat_GroupInvite *this)

{
  int iVar1;
  int iVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  FDS_PlayerRepo *pFVar6;
  UObject *pUVar7;
  UDS_UserObjectListItem *this_00;
  FDS_ViewModelContext *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  UScriptStruct *pUVar10;
  UDS_ViewModelContextManager *this_01;
  FScriptContainerElement *pFVar11;
  FName FVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res10 [8];
  FWeakObjectPtr local_res18;
  FName local_res20;
  UDS_UserObjectListItem *local_b8;
  FDS_PlayerRepo *local_b0;
  FScriptContainerElement *local_a8;
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
  local_90 = FFieldNotificationClassDescriptor::bHasPlayerList.BitNumber;
  local_98 = FFieldNotificationClassDescriptor::bHasPlayerList.FieldName;
  local_b0 = pFVar6;
  if ((pFVar6->PlayerList).ArrayNum == 0) {
    if (this->bHasPlayerList != false) {
      this->bHasPlayerList = false;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_98);
      return;
    }
  }
  else {
    if (this->bHasPlayerList != true) {
      this->bHasPlayerList = true;
      local_80 = local_90;
      local_88 = local_98;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
    }
    iVar1 = FFieldNotificationClassDescriptor::bIsShowSearchedList.BitNumber;
    FVar12 = FFieldNotificationClassDescriptor::bIsShowSearchedList.FieldName;
    if (this->bIsShowSearchedList != false) {
      this->bIsShowSearchedList = false;
      local_70 = iVar1;
      local_78 = FVar12;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
    }
    FVar12.ComparisonIndex.Value = 0;
    FVar12.Number = 0;
    local_res20.ComparisonIndex.Value = 0;
    local_res20.Number = 0;
    UDS_PlayerData::GetMainPlayerData();
    bVar5 = FWeakObjectPtr::IsValid(&local_res18);
    if (bVar5) {
      pUVar7 = FWeakObjectPtr::Get(&local_res18);
      FVar12.ComparisonIndex.Value = *(uint *)&pUVar7[6].field_0x8;
      FVar12.Number = *(uint *)&pUVar7[6].field_0xc;
      local_res20 = FVar12;
    }
    FDS_EntryBindingEventField::Reset(&this->SearchPlayerEntry);
    iVar1 = (pFVar6->PlayerList).ArrayNum;
    pFVar14 = (pFVar6->PlayerList).AllocatorInstance.Data;
    pFVar11 = pFVar14 + (longlong)iVar1 * 0x90;
    local_a8 = pFVar11;
    while( true ) {
      if ((pFVar6->PlayerList).ArrayNum != iVar1) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<misc::Player_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar14 == pFVar11) break;
      FVar3 = *(FName *)(pFVar14 + 0x50);
      if (FVar3 != FVar12) {
        pUVar7 = GetTransientPackageAsObject();
        this_00 = NewObject<UDS_UserObjectListItem>(pUVar7);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this_00 != (UDS_UserObjectListItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this_00);
        }
        pFVar8 = ::operator_new(0x40);
        if (pFVar8 == (FDS_ViewModelContext *)0x0) {
          pFVar8 = (FDS_ViewModelContext *)0x0;
        }
        else {
          *(undefined8 *)&pFVar8->ViewModelTemplateKey = 0;
          *(undefined4 *)((longlong)&pFVar8[1].ViewModelTemplateKey + 2) = 0;
          *(undefined2 *)&pFVar8[1].field_0x1e = 0;
          (pFVar8->ViewModelName).ComparisonIndex = 0;
          (pFVar8->ViewModelName).Number = 0;
          pFVar8->DerivedStaticStruct = (UStruct *)0x0;
          pFVar8->_padding_ = (longlong)&___7FDS_ViewModelContext_ChatGroupMember__6B_;
          pFVar8[1]._padding_ = 0;
          pFVar8[1].DerivedStaticStruct = (UStruct *)0x0;
          pFVar8[1].ViewModelName.ComparisonIndex = 0;
          pFVar8[1].ViewModelName.Number = 0;
          *(undefined2 *)&pFVar8[1].ViewModelTemplateKey = None;
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
               ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_ChatGroupMember__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
          ;
          pTVar9->WeakReferenceCount = (atomic<int>)0x1;
          *(FDS_ViewModelContext **)&pTVar9[1].SharedReferenceCount = pFVar8;
        }
        if (pFVar8 == (FDS_ViewModelContext *)0x0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        pUVar10 = FDS_ViewModelContext_ChatGroupMember::StaticStruct();
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
        pFVar8->ViewModelTemplateKey = Chat_GroupMemberSlot;
        iVar2 = (this->GroupID).Data.ArrayNum;
        iVar13 = iVar2 + -1;
        if (iVar2 == 0) {
          iVar13 = 0;
        }
        ::FString::AssignRange
                  ((FString *)(pFVar8 + 1),(wchar_t *)(this->GroupID).Data.AllocatorInstance.Data,
                   iVar13);
        pFVar8[1].ViewModelName = FVar3;
        if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_48.Object = pFVar8;
        local_48.SharedReferenceCount.ReferenceController = pTVar9;
        UDS_UserObjectListItem::AddContext(this_00,&local_48);
        local_b8 = this_00;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this_00 != (UDS_UserObjectListItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this_00);
        }
        FDS_EntryBindingEventField::Add
                  (&this->SearchPlayerEntry,(TObjectPtr<UDS_UserObjectListItem>)&local_b8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
        pFVar6 = local_b0;
        pFVar11 = local_a8;
        FVar12 = local_res20;
      }
      pFVar14 = pFVar14 + 0x90;
    }
    local_60 = FFieldNotificationClassDescriptor::SearchPlayerEntry.BitNumber;
    local_68 = FFieldNotificationClassDescriptor::SearchPlayerEntry.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
  }
  return;
}

// SetCurrentSearchName @ 14bd88010

void __thiscall
UDS_VM_Chat_GroupInvite::SetCurrentSearchName(UDS_VM_Chat_GroupInvite *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  FName local_28;
  int local_20;
  
  iVar4 = FFieldNotificationClassDescriptor::CurrentSearchName.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::CurrentSearchName.FieldName;
  bVar5 = FText::IdenticalTo(&this->CurrentSearchName,param_1,None);
  if (!bVar5) {
    pIVar1 = (param_1->TextData).Reference;
    pIVar2 = (this->CurrentSearchName).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->CurrentSearchName).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->CurrentSearchName).Flags = param_1->Flags;
    local_28 = FVar3;
    local_20 = iVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  return;
}

// SetEmptyText @ 14bd88250

void __thiscall
UDS_VM_Chat_GroupInvite::SetEmptyText(UDS_VM_Chat_GroupInvite *this,FDS_Text *param_1)

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

// SetHasPlayerList @ 14bd894a0

void __thiscall
UDS_VM_Chat_GroupInvite::SetHasPlayerList(UDS_VM_Chat_GroupInvite *this,bool param_1)

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

// SetInviteMessage @ 14bd898b0

void __thiscall
UDS_VM_Chat_GroupInvite::SetInviteMessage(UDS_VM_Chat_GroupInvite *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  FName local_28;
  int local_20;
  
  iVar4 = FFieldNotificationClassDescriptor::InviteMessage.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::InviteMessage.FieldName;
  bVar5 = FText::IdenticalTo(&this->InviteMessage,param_1,None);
  if (!bVar5) {
    pIVar1 = (param_1->TextData).Reference;
    pIVar2 = (this->InviteMessage).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->InviteMessage).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->InviteMessage).Flags = param_1->Flags;
    local_28 = FVar3;
    local_20 = iVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  return;
}

// SetInviteMessageHint @ 14bd89970

void __thiscall
UDS_VM_Chat_GroupInvite::SetInviteMessageHint(UDS_VM_Chat_GroupInvite *this,FDS_Text *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::InviteMessageHint.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::InviteMessageHint.FieldName;
  FDS_Text::operator=(&this->InviteMessageHint,param_1);
  local_18 = FVar1;
  local_10 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetIsShowSearchedList @ 14bd89d00

void __thiscall
UDS_VM_Chat_GroupInvite::SetIsShowSearchedList(UDS_VM_Chat_GroupInvite *this,bool param_1)

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

// SetSearchNameHint @ 14bd8a6e0

void __thiscall
UDS_VM_Chat_GroupInvite::SetSearchNameHint(UDS_VM_Chat_GroupInvite *this,FDS_Text *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::SearchNameHint.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::SearchNameHint.FieldName;
  FDS_Text::operator=(&this->SearchNameHint,param_1);
  local_18 = FVar1;
  local_10 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetTitleText @ 14bd8ad80

void __thiscall
UDS_VM_Chat_GroupInvite::SetTitleText(UDS_VM_Chat_GroupInvite *this,FDS_Text *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::TitleText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::TitleText.FieldName;
  FDS_Text::operator=(&this->TitleText,param_1);
  local_18 = FVar1;
  local_10 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// UnbindModel @ 14bd8c0a0

void __thiscall UDS_VM_Chat_GroupInvite::UnbindModel(UDS_VM_Chat_GroupInvite *this)

{
  UDS_ChatEvent *pUVar1;
  UDS_UIEvent *pUVar2;
  UDS_PlayerEvent *pUVar3;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_ChatEvent::GetEvent();
  if (pUVar1 != (UDS_ChatEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnInviteGroup,this);
  }
  pUVar2 = UDS_UIEvent::GetEvent();
  if (pUVar2 != (UDS_UIEvent *)0x0) {
    FDS_FilteredEventDelegate<TWeakObjectPtr<UObject,FWeakObjectPtr>,int_const_,int_const_>::
    Remove<UDS_VM_Chat_GroupInvite>(&pUVar2->OnSelectedTabIndex,this);
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

// UpdateGroupInvite @ 14bd90190

void __thiscall UDS_VM_Chat_GroupInvite::UpdateGroupInvite(UDS_VM_Chat_GroupInvite *this)

{
  FInstancedStruct *this_00;
  ITextData *pIVar1;
  ITextData *pIVar2;
  code *pcVar3;
  FObjectPtr_u_0 FVar4;
  FName FVar5;
  bool bVar6;
  int iVar7;
  UDS_ChattingManager *this_01;
  FString *pFVar8;
  FObjectPtr_u_0 *pFVar9;
  FText *pFVar10;
  int iVar11;
  undefined1 local_res8 [8];
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> local_1e8;
  TSharedPtr<FDS_ChatRoomData,1> local_1d8;
  FString local_1c8;
  FName local_1b8;
  int local_1b0;
  FName local_1a8;
  int local_1a0;
  FName local_198;
  int local_190;
  FName local_188;
  int local_180;
  FName local_178;
  int local_170;
  FName local_168;
  int local_160;
  FDS_Text local_158;
  FDS_Text local_108;
  FDS_Text local_b8;
  FDS_StringIDWrapper local_68;
  undefined8 local_60;
  FString local_58;
  FText local_48 [2];
  
  local_1c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.Data.ArrayNum = 0;
  local_1c8.Data.ArrayMax = 0;
  this_01 = UDS_ChattingManager::GetInst();
  if (this_01 != (UDS_ChattingManager *)0x0) {
    UDS_ChattingManager::GetChatRoomDataByGroupID(this_01,&local_1d8,&this->GroupID);
    if (local_1d8.Object != (FDS_ChatRoomData *)0x0) {
      if ((local_1d8.Object == (FDS_ChatRoomData *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      bVar6 = FDS_ChatRoomData::IsValidData(local_1d8.Object);
      if (bVar6) {
        if ((local_1d8.Object == (FDS_ChatRoomData *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar8 = FDS_ChatRoomData::GetShowName(local_1d8.Object,&local_58);
        iVar7 = (pFVar8->Data).ArrayNum;
        iVar11 = iVar7 + -1;
        if (iVar7 == 0) {
          iVar11 = 0;
        }
        ::FString::AssignRange(&local_1c8,(wchar_t *)(pFVar8->Data).AllocatorInstance.Data,iVar11);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1d8.SharedReferenceCount.ReferenceController);
  }
  local_158.StringTableType = None;
  local_158.StringTableID = 0;
  local_158.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_158.StringEnumTableNameID.Number = 0;
  local_158.TimeExpressionType = None;
  local_158.DateTime.Ticks = 0;
  local_158.TimeSpan.Ticks = 0;
  local_158.IsExpression = false;
  local_158.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.UniqueString.Data.ArrayNum = 0;
  local_158.UniqueString.Data.ArrayMax = 0;
  local_158.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.FormatArgs.ArrayNum = 0;
  local_158.FormatArgs.ArrayMax = 0;
  local_1e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e8.ArrayNum = 0;
  local_1e8.ArrayMax = 0;
  iVar7 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x828,&local_1e8.AllocatorInstance,&local_1e8.ArrayMax);
  local_1e8.ArrayNum = iVar7 + 1;
  this_00 = (FInstancedStruct *)(local_1e8.AllocatorInstance.Data + (longlong)iVar7 * 0x28);
  FInstancedStruct::FInstancedStruct(this_00);
  pFVar9 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
  FVar4 = pFVar9[1];
  this_00[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar9;
  this_00[1].StructMemory = (uchar *)FVar4;
  this_00[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar9[2];
  FInstancedStruct::InitializeAs<FDS_StringFormatArg>(this_00);
  pFVar8 = &FInstancedStruct::GetMutablePtr<FDS_StringFormatArg>(this_00)->Value;
  if (pFVar8 != (FString *)0x0) {
    iVar7 = local_1c8.Data.ArrayNum + -1;
    if (local_1c8.Data.ArrayNum == 0) {
      iVar7 = 0;
    }
    ::FString::AssignRange(pFVar8,(wchar_t *)local_1c8.Data.AllocatorInstance.Data,iVar7);
  }
  FDS_Text::SetTextFormatFromStringTable(&local_158,StringUi,0xc5c3,&local_1e8);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_1e8.AllocatorInstance.Data,local_1e8.ArrayNum);
  if ((FDS_TextFormatArg *)local_1e8.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_1e8.AllocatorInstance.Data);
  }
  iVar7 = FFieldNotificationClassDescriptor::TitleText.BitNumber;
  FVar5 = FFieldNotificationClassDescriptor::TitleText.FieldName;
  FDS_Text::operator=(&this->TitleText,&local_158);
  local_1b8 = FVar5;
  local_1b0 = iVar7;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1b8);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_158.FormatArgs.AllocatorInstance.Data,
             local_158.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_158.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0)
  {
    FMemory::Free(local_158.FormatArgs.AllocatorInstance.Data);
  }
  if (local_158.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.UniqueString.Data.AllocatorInstance.Data);
  }
  local_60 = 0xc5c5;
  local_68 = (FDS_StringIDWrapper)&___7FDS_StringUiID__6B_;
  pFVar10 = FDS_StringIDWrapper::Text(&local_68,local_48);
  iVar7 = FFieldNotificationClassDescriptor::InviteMessage.BitNumber;
  FVar5 = FFieldNotificationClassDescriptor::InviteMessage.FieldName;
  bVar6 = FText::IdenticalTo(&this->InviteMessage,pFVar10,None);
  if (!bVar6) {
    pIVar1 = (pFVar10->TextData).Reference;
    pIVar2 = (this->InviteMessage).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->InviteMessage).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->InviteMessage).Flags = pFVar10->Flags;
    local_1a8 = FVar5;
    local_1a0 = iVar7;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1a8);
  }
  if (local_48[0].TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48[0].TextData.Reference + 0x10))();
  }
  local_108.StringTableType = None;
  local_108.StringTableID = 0;
  local_108.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_108.StringEnumTableNameID.Number = 0;
  local_108.TimeExpressionType = None;
  local_108.DateTime.Ticks = 0;
  local_108.TimeSpan.Ticks = 0;
  local_108.IsExpression = false;
  local_108.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.UniqueString.Data.ArrayNum = 0;
  local_108.UniqueString.Data.ArrayMax = 0;
  local_108.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.FormatArgs.ArrayNum = 0;
  local_108.FormatArgs.ArrayMax = 0;
  FDS_Text::SetTextFromStringTable(&local_108,StringUi,0xc5c5);
  iVar7 = FFieldNotificationClassDescriptor::InviteMessageHint.BitNumber;
  FVar5 = FFieldNotificationClassDescriptor::InviteMessageHint.FieldName;
  FDS_Text::operator=(&this->InviteMessageHint,&local_108);
  local_198 = FVar5;
  local_190 = iVar7;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_198);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_108.FormatArgs.AllocatorInstance.Data,
             local_108.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_108.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0)
  {
    FMemory::Free(local_108.FormatArgs.AllocatorInstance.Data);
  }
  if (local_108.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.UniqueString.Data.AllocatorInstance.Data);
  }
  local_b8.StringTableType = None;
  local_b8.StringTableID = 0;
  local_b8.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_b8.StringEnumTableNameID.Number = 0;
  local_b8.TimeExpressionType = None;
  local_b8.DateTime.Ticks = 0;
  local_b8.TimeSpan.Ticks = 0;
  local_b8.IsExpression = false;
  local_b8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.UniqueString.Data.ArrayNum = 0;
  local_b8.UniqueString.Data.ArrayMax = 0;
  local_b8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.FormatArgs.ArrayNum = 0;
  local_b8.FormatArgs.ArrayMax = 0;
  FDS_Text::SetTextFromStringTable(&local_b8,StringUi,0xc5c8);
  iVar7 = FFieldNotificationClassDescriptor::SearchNameHint.BitNumber;
  FVar5 = FFieldNotificationClassDescriptor::SearchNameHint.FieldName;
  FDS_Text::operator=(&this->SearchNameHint,&local_b8);
  local_188 = FVar5;
  local_180 = iVar7;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_188);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_b8.FormatArgs.AllocatorInstance.Data,
             local_b8.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_b8.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_b8.FormatArgs.AllocatorInstance.Data);
  }
  if (local_b8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.UniqueString.Data.AllocatorInstance.Data);
  }
  iVar7 = FFieldNotificationClassDescriptor::bHasPlayerList.BitNumber;
  FVar5 = FFieldNotificationClassDescriptor::bHasPlayerList.FieldName;
  if (this->bHasPlayerList != false) {
    this->bHasPlayerList = false;
    local_170 = iVar7;
    local_178 = FVar5;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_);
  }
  iVar7 = FFieldNotificationClassDescriptor::bIsShowSearchedList.BitNumber;
  FVar5 = FFieldNotificationClassDescriptor::bIsShowSearchedList.FieldName;
  if (this->bIsShowSearchedList != false) {
    this->bIsShowSearchedList = false;
    local_160 = iVar7;
    local_168 = FVar5;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_);
  }
  OnSelectedTabIndex(this,0,-1);
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  return;
}

