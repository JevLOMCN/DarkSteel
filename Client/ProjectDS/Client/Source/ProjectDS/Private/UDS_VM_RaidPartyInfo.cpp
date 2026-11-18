// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 34

// SetRaidPartyUID_WrapperImpl @ 14b6d4270

void __cdecl UDS_VM_RaidPartyInfo::SetRaidPartyUID_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::RaidPartyUID.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::RaidPartyUID.FieldName;
  if (*(longlong *)((longlong)param_1 + 0xa0) != *(longlong *)param_2) {
    *(longlong *)((longlong)param_1 + 0xa0) = *(longlong *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetDungeonId_WrapperImpl @ 14b6d4280

void __cdecl UDS_VM_RaidPartyInfo::SetDungeonId_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::DungeonId.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::DungeonId.FieldName;
  if (*(int *)((longlong)param_1 + 0xa8) != *(int *)param_2) {
    *(int *)((longlong)param_1 + 0xa8) = *(int *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetPartyName_WrapperImpl @ 14b6d4290

void __cdecl UDS_VM_RaidPartyInfo::SetPartyName_WrapperImpl(void *param_1,void *param_2)

{
  FName FVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  FName FStack_18;
  int iStack_10;
  
  iVar2 = FFieldNotificationClassDescriptor::PartyName.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::PartyName.FieldName;
  iVar3 = *(int *)((longlong)param_1 + 0xb8);
  if (iVar3 == *(int *)((longlong)param_2 + 8)) {
    if (iVar3 < 2) {
      return;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp
                      (*(wchar_t **)((longlong)param_1 + 0xb0),*(wchar_t **)param_2);
    bVar4 = iVar3 == 0;
  }
  else {
    bVar4 = iVar3 + *(int *)((longlong)param_2 + 8) == 1;
  }
  if (!bVar4) {
    ::FString::operator=((FString *)((longlong)param_1 + 0xb0),param_2);
    FStack_18 = FVar1;
    iStack_10 = iVar2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  }
  return;
}

// SetIsPassword_WrapperImpl @ 14b6d42a0

void __cdecl UDS_VM_RaidPartyInfo::SetIsPassword_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::IsPassword.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IsPassword.FieldName;
  if (*(char *)((longlong)param_1 + 0xc0) != *(char *)param_2) {
    *(char *)((longlong)param_1 + 0xc0) = *(char *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetLeaderUID_WrapperImpl @ 14b6d42b0

void __cdecl UDS_VM_RaidPartyInfo::SetLeaderUID_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::LeaderUID.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::LeaderUID.FieldName;
  if (*(longlong *)((longlong)param_1 + 200) != *(longlong *)param_2) {
    *(longlong *)((longlong)param_1 + 200) = *(longlong *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetIsPublic_WrapperImpl @ 14b6d42c0

void __cdecl UDS_VM_RaidPartyInfo::SetIsPublic_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::IsPublic.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IsPublic.FieldName;
  if (*(char *)((longlong)param_1 + 0xd0) != *(char *)param_2) {
    *(char *)((longlong)param_1 + 0xd0) = *(char *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetMemberCount_WrapperImpl @ 14b6d42d0

void __cdecl UDS_VM_RaidPartyInfo::SetMemberCount_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::MemberCount.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::MemberCount.FieldName;
  if (*(int *)((longlong)param_1 + 0xd4) != *(int *)param_2) {
    *(int *)((longlong)param_1 + 0xd4) = *(int *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetMaxMemberCount_WrapperImpl @ 14b6d42e0

void __cdecl UDS_VM_RaidPartyInfo::SetMaxMemberCount_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::MaxMemberCount.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::MaxMemberCount.FieldName;
  if (*(int *)((longlong)param_1 + 0xd8) != *(int *)param_2) {
    *(int *)((longlong)param_1 + 0xd8) = *(int *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetState_WrapperImpl @ 14b6d42f0

void __cdecl UDS_VM_RaidPartyInfo::SetState_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::State.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::State.FieldName;
  if (*(int *)((longlong)param_1 + 0xdc) != *(int *)param_2) {
    *(int *)((longlong)param_1 + 0xdc) = *(int *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetIsVoteStart_WrapperImpl @ 14b6d4300

void __cdecl UDS_VM_RaidPartyInfo::SetIsVoteStart_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::IsVoteStart.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IsVoteStart.FieldName;
  if (*(char *)((longlong)param_1 + 0xe0) != *(char *)param_2) {
    *(char *)((longlong)param_1 + 0xe0) = *(char *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// StaticClass @ 14b6d4310

UClass * __cdecl UDS_VM_RaidPartyInfo::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_RaidPartyInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_RaidPartyInfo",
               &Z_Registration_Info_UClass_UDS_VM_RaidPartyInfo.InnerSingleton,
               StaticRegisterNativesUDS_VM_RaidPartyInfo,0xf8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_RaidPartyInfo>,
               InternalVTableHelperCtorCaller<UDS_VM_RaidPartyInfo>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_RaidPartyInfo.InnerSingleton;
}

// UDS_VM_RaidPartyInfo @ 14b6d7720

UDS_VM_RaidPartyInfo * __thiscall
UDS_VM_RaidPartyInfo::UDS_VM_RaidPartyInfo(UDS_VM_RaidPartyInfo *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_RaidPartyInfo__6B_;
  this->RaidPartyUID = 0;
  this->DungeonId = 0;
  (this->PartyName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PartyName).Data.ArrayNum = 0;
  (this->PartyName).Data.ArrayMax = 0;
  this->IsPassword = false;
  this->LeaderUID = 0;
  this->IsPublic = false;
  this->MemberCount = 0;
  this->State = 0;
  this->IsVoteStart = false;
  (this->MemberEntryBindingEvent).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MemberEntryBindingEvent).UserObjectList.ArrayNum = 0;
  (this->MemberEntryBindingEvent).UserObjectList.ArrayMax = 0;
  return this;
}

// UDS_VM_RaidPartyInfo @ 14b6d77b0

UDS_VM_RaidPartyInfo * __thiscall
UDS_VM_RaidPartyInfo::UDS_VM_RaidPartyInfo(UDS_VM_RaidPartyInfo *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_RaidPartyInfo__6B_;
  this->RaidPartyUID = 0;
  this->DungeonId = 0;
  (this->PartyName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PartyName).Data.ArrayNum = 0;
  (this->PartyName).Data.ArrayMax = 0;
  this->IsPassword = false;
  this->LeaderUID = 0;
  this->IsPublic = false;
  this->MemberCount = 0;
  this->State = 0;
  this->IsVoteStart = false;
  (this->MemberEntryBindingEvent).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MemberEntryBindingEvent).UserObjectList.ArrayNum = 0;
  (this->MemberEntryBindingEvent).UserObjectList.ArrayMax = 0;
  return this;
}

// ~UDS_VM_RaidPartyInfo @ 14b6d9e00

void __thiscall UDS_VM_RaidPartyInfo::~UDS_VM_RaidPartyInfo(UDS_VM_RaidPartyInfo *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_RaidPartyInfo__6B_;
  pFVar1 = (this->MemberEntryBindingEvent).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PartyName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6dc980

IClassDescriptor * __thiscall
UDS_VM_RaidPartyInfo::GetFieldNotificationDescriptor(UDS_VM_RaidPartyInfo *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_RaidPartyInfo::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6dd200

UClass * __cdecl UDS_VM_RaidPartyInfo::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_RaidPartyInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_RaidPartyInfo",
               &Z_Registration_Info_UClass_UDS_VM_RaidPartyInfo.InnerSingleton,
               StaticRegisterNativesUDS_VM_RaidPartyInfo,0xf8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_RaidPartyInfo>,
               InternalVTableHelperCtorCaller<UDS_VM_RaidPartyInfo>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_RaidPartyInfo.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_RaidPartyInfo @ 14b6dde60

void __cdecl UDS_VM_RaidPartyInfo::StaticRegisterNativesUDS_VM_RaidPartyInfo(void)

{
  return;
}

// BindModel @ 14be12cc0

void __thiscall UDS_VM_RaidPartyInfo::BindModel(UDS_VM_RaidPartyInfo *this)

{
  UDS_DungeonEvent *pUVar1;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_DungeonEvent::GetEvent();
  if (pUVar1 != (UDS_DungeonEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnChangedRaidPartyInfo
               ,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_RaidPartyInfo>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangedRaidPartyInfo,(UDS_VM_RaidPartyInfo *)&stack0x00000010,
               (pmf_0da9a63f *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangedRaidPartyNotify,this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_RaidPartyNotifyType,__int64),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_RaidPartyInfo>
              (&pUVar1->OnChangedRaidPartyNotify,(UDS_VM_RaidPartyInfo *)&stack0x00000010,
               (pmf_41626943 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangedRaidPartyVoteData,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_RaidPartyInfo>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangedRaidPartyVoteData,(UDS_VM_RaidPartyInfo *)&stack0x00000010,
               (pmf_0da9a63f *)this);
  }
  return;
}

// OnChangedRaidPartyInfo @ 14be2ad30

void __thiscall UDS_VM_RaidPartyInfo::OnChangedRaidPartyInfo(UDS_VM_RaidPartyInfo *this)

{
  longlong lVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FDS_RaidPartyRepo *pFVar7;
  FDS_DungeonBaseTableRow *pFVar8;
  FName local_38;
  int local_30;
  
  pFVar7 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  bVar4 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(pFVar7);
  if (!bVar4) {
    return;
  }
  pFVar7 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  iVar5 = FFieldNotificationClassDescriptor::RaidPartyUID.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::RaidPartyUID.FieldName;
  lVar1 = (pFVar7->RaidPartyInfo).RaidPartyUID;
  if (this->RaidPartyUID != lVar1) {
    this->RaidPartyUID = lVar1;
    local_30 = iVar5;
    local_38 = FVar2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
  }
  iVar6 = FFieldNotificationClassDescriptor::DungeonId.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::DungeonId.FieldName;
  iVar5 = (pFVar7->RaidPartyInfo).DungeonId;
  if (this->DungeonId != iVar5) {
    this->DungeonId = iVar5;
    local_30 = iVar6;
    local_38 = FVar2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
  }
  iVar3 = FFieldNotificationClassDescriptor::PartyName.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::PartyName.FieldName;
  iVar5 = (this->PartyName).Data.ArrayNum;
  iVar6 = (pFVar7->RaidPartyInfo).PartyName.Data.ArrayNum;
  if (iVar5 == iVar6) {
    if (iVar5 < 2) goto LAB_14be2ae55;
    iVar5 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(this->PartyName).Data.AllocatorInstance.Data,
                       (wchar_t *)(pFVar7->RaidPartyInfo).PartyName.Data.AllocatorInstance.Data);
    bVar4 = iVar5 == 0;
  }
  else {
    bVar4 = iVar5 + iVar6 == 1;
  }
  if (!bVar4) {
    ::FString::operator=(&this->PartyName,&(pFVar7->RaidPartyInfo).PartyName);
    local_38 = FVar2;
    local_30 = iVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
  }
LAB_14be2ae55:
  iVar5 = FFieldNotificationClassDescriptor::IsPassword.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::IsPassword.FieldName;
  bVar4 = (pFVar7->RaidPartyInfo).IsPassword;
  if (this->IsPassword != bVar4) {
    this->IsPassword = bVar4;
    local_30 = iVar5;
    local_38 = FVar2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
  }
  iVar5 = FFieldNotificationClassDescriptor::LeaderUID.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::LeaderUID.FieldName;
  lVar1 = (pFVar7->RaidPartyInfo).LeaderUID;
  if (this->LeaderUID != lVar1) {
    this->LeaderUID = lVar1;
    local_30 = iVar5;
    local_38 = FVar2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
  }
  iVar5 = FFieldNotificationClassDescriptor::IsPublic.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::IsPublic.FieldName;
  bVar4 = (pFVar7->RaidPartyInfo).IsPublic;
  if (this->IsPublic != bVar4) {
    this->IsPublic = bVar4;
    local_30 = iVar5;
    local_38 = FVar2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
  }
  iVar6 = FFieldNotificationClassDescriptor::MemberCount.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::MemberCount.FieldName;
  iVar5 = (pFVar7->RaidPartyInfo).MemberCount;
  if (this->MemberCount != iVar5) {
    this->MemberCount = iVar5;
    local_30 = iVar6;
    local_38 = FVar2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
  }
  iVar6 = FFieldNotificationClassDescriptor::State.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::State.FieldName;
  iVar5 = (pFVar7->RaidPartyInfo).State;
  if (this->State != iVar5) {
    this->State = iVar5;
    local_30 = iVar6;
    local_38 = FVar2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
  }
  pFVar8 = FDS_DungeonBaseTableRow::GetRef((longlong)this->DungeonId,true);
  iVar6 = DS_CommonDataHelper::GetMaxRaidPartyMember((uint)pFVar8->DungeonType);
  iVar5 = FFieldNotificationClassDescriptor::MaxMemberCount.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::MaxMemberCount.FieldName;
  if (this->MaxMemberCount != iVar6) {
    this->MaxMemberCount = iVar6;
    local_30 = iVar5;
    local_38 = FVar2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
  }
  OnUpdateMemberEntryBindingEvent(this);
  return;
}

// OnChangedRaidPartyNotify @ 14be2b3b0

void __thiscall
UDS_VM_RaidPartyInfo::OnChangedRaidPartyNotify
          (UDS_VM_RaidPartyInfo *this,EDS_RaidPartyNotifyType param_1,long64 param_2)

{
  return;
}

// OnChangedRaidPartyVoteData @ 14be2b3c0

void __thiscall UDS_VM_RaidPartyInfo::OnChangedRaidPartyVoteData(UDS_VM_RaidPartyInfo *this)

{
  bool bVar1;
  FDS_RaidPartyRepo *pFVar2;
  FName local_18;
  int local_10;
  
  pFVar2 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  bVar1 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(pFVar2);
  if ((((bVar1) &&
       (pFVar2 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst(),
       local_10 = FFieldNotificationClassDescriptor::IsVoteStart.BitNumber,
       local_18 = FFieldNotificationClassDescriptor::IsVoteStart.FieldName,
       0 < (pFVar2->RaidPartyVoteData).RaidPartyUID)) &&
      (0 < (pFVar2->RaidPartyVoteData).VoteProposerUID)) &&
     (0 < (pFVar2->RaidPartyVoteData).PlayerUID)) {
    if (this->IsVoteStart == true) {
      return;
    }
    this->IsVoteStart = true;
  }
  else {
    local_10 = FFieldNotificationClassDescriptor::IsVoteStart.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::IsVoteStart.FieldName;
    if (this->IsVoteStart == false) {
      return;
    }
    this->IsVoteStart = false;
  }
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnSetViewModel @ 14be3d8f0

void __thiscall
UDS_VM_RaidPartyInfo::OnSetViewModel
          (UDS_VM_RaidPartyInfo *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  OnChangedRaidPartyInfo(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUpdateMemberEntryBindingEvent @ 14be447a0

void __thiscall UDS_VM_RaidPartyInfo::OnUpdateMemberEntryBindingEvent(UDS_VM_RaidPartyInfo *this)

{
  code *pcVar1;
  bool bVar2;
  FDS_RaidPartyRepo *pFVar3;
  ulonglong uVar4;
  UDS_UserObjectListItem *this_00;
  FDS_ViewModelContext *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  UScriptStruct *pUVar7;
  UDS_ViewModelContextManager *this_01;
  FDS_ViewModelContext *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  uint local_res10;
  UDS_UserObjectListItem *local_res18;
  FName local_78;
  int local_70;
  FName local_68;
  int local_60;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  TSharedPtr<FDS_ViewModelContext,1> local_48;
  
  FDS_EntryBindingEventField::Reset(&this->MemberEntryBindingEvent);
  pFVar3 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  bVar2 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(pFVar3);
  if (!bVar2) {
    local_70 = FFieldNotificationClassDescriptor::MemberEntryBindingEvent.BitNumber;
    local_78 = FFieldNotificationClassDescriptor::MemberEntryBindingEvent.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
    return;
  }
  pFVar3 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  pFVar10 = (pFVar3->RaidPartyInfo).Members.AllocatorInstance.Data;
  local_res10 = (pFVar3->RaidPartyInfo).Members.ArrayNum;
  uVar4 = (ulonglong)(int)local_res10;
  pFVar9 = pFVar10 + uVar4 * 0x160;
  while( true ) {
    pFVar8 = (FDS_ViewModelContext *)0x0;
    if ((pFVar3->RaidPartyInfo).Members.ArrayNum != (int)uVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FDS_RaidPartyMemberInfo_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar10 == pFVar9) {
      local_60 = FFieldNotificationClassDescriptor::MemberEntryBindingEvent.BitNumber;
      local_68 = FFieldNotificationClassDescriptor::MemberEntryBindingEvent.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
      return;
    }
    this_00 = NewObject<UDS_UserObjectListItem>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this_00 != (UDS_UserObjectListItem *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    pFVar5 = ::operator_new(0x48);
    if (pFVar5 != (FDS_ViewModelContext *)0x0) {
      *(undefined8 *)&pFVar5->field_0x1c = 0;
      *(undefined8 *)((longlong)&pFVar5[1]._padding_ + 4) = 0;
      *(undefined8 *)((longlong)&pFVar5[1].DerivedStaticStruct + 4) = 0;
      *(undefined8 *)&pFVar5[1].ViewModelName.Number = 0;
      *(undefined8 *)&pFVar5[1].field_0x1c = 0;
      *(undefined4 *)((longlong)&pFVar5[2]._padding_ + 4) = 0;
      pFVar5->DerivedStaticStruct = (UStruct *)0x0;
      (pFVar5->ViewModelName).ComparisonIndex = 0;
      (pFVar5->ViewModelName).Number = 0;
      pFVar5->ViewModelTemplateKey = None;
      pFVar5->_padding_ = (longlong)&___7FDS_ViewModelContext_RaidPartyMemberInfo__6B_;
      pFVar8 = pFVar5;
    }
    pTVar6 = ::operator_new(0x20);
    if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
      pTVar6 = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      pTVar6->SharedReferenceCount = (atomic<int>)0x1;
      pTVar6[1]._padding_ = (longlong)ViewModelContextDeleter;
      pTVar6->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_RaidPartyMemberInfo__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      pTVar6->WeakReferenceCount = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pTVar6[1].SharedReferenceCount = pFVar8;
    }
    if ((pFVar8 == (FDS_ViewModelContext *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) break;
    pUVar7 = FDS_ViewModelContext_RaidPartyMemberInfo::StaticStruct();
    pFVar8->DerivedStaticStruct = (UStruct *)pUVar7;
    this_01 = UDS_ViewModelContextManager::GetInst();
    if (this_01 != (UDS_ViewModelContextManager *)0x0) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_58.Object = pFVar8;
      local_58.SharedReferenceCount.ReferenceController = pTVar6;
      UDS_ViewModelContextManager::RegisterContext(this_01,&local_58);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
    }
    pFVar8->ViewModelTemplateKey = RaidPartyMemberInfo;
    *(undefined1 *)&pFVar8[1].DerivedStaticStruct = 0;
    pFVar8[1].ViewModelTemplateKey = *(EDS_ViewModelTemplateKey *)pFVar10;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_48.Object = pFVar8;
    local_48.SharedReferenceCount.ReferenceController = pTVar6;
    UDS_UserObjectListItem::AddContext(this_00,&local_48);
    local_res18 = this_00;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this_00 != (UDS_UserObjectListItem *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    FDS_EntryBindingEventField::Add
              (&this->MemberEntryBindingEvent,(TObjectPtr<UDS_UserObjectListItem>)&local_res18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    uVar4 = (ulonglong)local_res10;
    pFVar10 = pFVar10 + 0x160;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// SetDungeonId @ 14be4ae00

void __thiscall UDS_VM_RaidPartyInfo::SetDungeonId(UDS_VM_RaidPartyInfo *this,int *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::DungeonId.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::DungeonId.FieldName;
  if (this->DungeonId != *param_1) {
    this->DungeonId = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetIsPassword @ 14be4c270

void __thiscall UDS_VM_RaidPartyInfo::SetIsPassword(UDS_VM_RaidPartyInfo *this,bool *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::IsPassword.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsPassword.FieldName;
  if (this->IsPassword != *param_1) {
    this->IsPassword = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetIsPublic @ 14be4c470

void __thiscall UDS_VM_RaidPartyInfo::SetIsPublic(UDS_VM_RaidPartyInfo *this,bool *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::IsPublic.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsPublic.FieldName;
  if (this->IsPublic != *param_1) {
    this->IsPublic = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetIsVoteStart @ 14be4d120

void __thiscall UDS_VM_RaidPartyInfo::SetIsVoteStart(UDS_VM_RaidPartyInfo *this,bool *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::IsVoteStart.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsVoteStart.FieldName;
  if (this->IsVoteStart != *param_1) {
    this->IsVoteStart = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetLeaderUID @ 14be4d540

void __thiscall UDS_VM_RaidPartyInfo::SetLeaderUID(UDS_VM_RaidPartyInfo *this,long64 *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::LeaderUID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::LeaderUID.FieldName;
  if (this->LeaderUID != *param_1) {
    this->LeaderUID = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetMaxMemberCount @ 14be4dd30

void __thiscall UDS_VM_RaidPartyInfo::SetMaxMemberCount(UDS_VM_RaidPartyInfo *this,int *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::MaxMemberCount.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::MaxMemberCount.FieldName;
  if (this->MaxMemberCount != *param_1) {
    this->MaxMemberCount = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetMemberCount @ 14be4ddd0

void __thiscall UDS_VM_RaidPartyInfo::SetMemberCount(UDS_VM_RaidPartyInfo *this,int *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::MemberCount.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::MemberCount.FieldName;
  if (this->MemberCount != *param_1) {
    this->MemberCount = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetPartyName @ 14be4f010

void __thiscall UDS_VM_RaidPartyInfo::SetPartyName(UDS_VM_RaidPartyInfo *this,FString *param_1)

{
  int iVar1;
  FName FVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  FName local_18;
  int local_10;
  
  iVar3 = FFieldNotificationClassDescriptor::PartyName.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::PartyName.FieldName;
  iVar4 = (param_1->Data).ArrayNum;
  iVar1 = (this->PartyName).Data.ArrayNum;
  if (iVar1 == iVar4) {
    if (iVar1 < 2) {
      return;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(this->PartyName).Data.AllocatorInstance.Data,
                       (wchar_t *)(param_1->Data).AllocatorInstance.Data);
    bVar5 = iVar4 == 0;
  }
  else {
    bVar5 = iVar1 + iVar4 == 1;
  }
  if (!bVar5) {
    ::FString::operator=(&this->PartyName,param_1);
    local_18 = FVar2;
    local_10 = iVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetRaidPartyUID @ 14be4fdd0

void __thiscall UDS_VM_RaidPartyInfo::SetRaidPartyUID(UDS_VM_RaidPartyInfo *this,long64 *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::RaidPartyUID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::RaidPartyUID.FieldName;
  if (this->RaidPartyUID != *param_1) {
    this->RaidPartyUID = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetState @ 14be51cc0

void __thiscall UDS_VM_RaidPartyInfo::SetState(UDS_VM_RaidPartyInfo *this,int *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::State.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::State.FieldName;
  if (this->State != *param_1) {
    this->State = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// UnbindModel @ 14be55a70

void __thiscall UDS_VM_RaidPartyInfo::UnbindModel(UDS_VM_RaidPartyInfo *this)

{
  UDS_DungeonEvent *pUVar1;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_DungeonEvent::GetEvent();
  if (pUVar1 != (UDS_DungeonEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnChangedRaidPartyInfo
               ,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangedRaidPartyNotify,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangedRaidPartyVoteData,this);
  }
  return;
}

