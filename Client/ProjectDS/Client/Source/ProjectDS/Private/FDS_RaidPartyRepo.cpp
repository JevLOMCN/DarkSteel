// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 16

// Clear @ 14b8b8890

void __thiscall FDS_RaidPartyRepo::Clear(FDS_RaidPartyRepo *this)

{
  int *piVar1;
  bool bVar2;
  UDS_DungeonEvent *pUVar3;
  
  (this->RaidPartyInfo).RaidPartyUID = 0;
  (this->RaidPartyInfo).DungeonId = 0;
  ::FString::Empty(&(this->RaidPartyInfo).PartyName);
  (this->RaidPartyInfo).IsPassword = false;
  DestructItems<FDS_RaidPartyMemberInfo,int>
            ((FDS_RaidPartyMemberInfo *)(this->RaidPartyInfo).Members.AllocatorInstance.Data,
             (this->RaidPartyInfo).Members.ArrayNum);
  piVar1 = &(this->RaidPartyInfo).Members.ArrayMax;
  (this->RaidPartyInfo).Members.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x160,8,0,&(this->RaidPartyInfo).Members.AllocatorInstance,0,piVar1);
  }
  (this->RaidPartyInfo).LeaderUID = 0;
  (this->RaidPartyInfo).IsPublic = false;
  (this->RaidPartyInfo).MemberCount = 0;
  (this->RaidPartyInfo).State = 0;
  (this->RaidPartyVoteData).RaidPartyUID = 0;
  (this->RaidPartyVoteData).PlayerUID = 0;
  (this->RaidPartyVoteData).AgreementCount = 0;
  (this->RaidPartyVoteData).RejectCount = 0;
  (this->RaidPartyVoteData).VoteProposerUID = 0;
  this->bIsVoteable = false;
  ::FString::operator=(&this->Password,L"");
  pUVar3 = UDS_DungeonEvent::GetEvent();
  if (pUVar3 != (UDS_DungeonEvent *)0x0) {
    bVar2 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar3->OnChangedRaidPartyInfo);
    if (bVar2) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar3->OnChangedRaidPartyInfo).Delegate);
    }
    bVar2 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar3->OnLeftRaidParty);
    if (bVar2) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar3->OnLeftRaidParty).Delegate);
    }
    bVar2 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar3->OnChangedRaidPartyVoteData);
    if (bVar2) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar3->OnChangedRaidPartyVoteData).Delegate);
    }
    bVar2 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar3->OnChangedMyRaidPartyState);
    if (bVar2) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar3->OnChangedMyRaidPartyState).Delegate);
    }
  }
  return;
}

// GetMyRaidPartyMemberInfo @ 14b8c7c10

FDS_RaidPartyMemberInfo * __thiscall
FDS_RaidPartyRepo::GetMyRaidPartyMemberInfo(FDS_RaidPartyRepo *this)

{
  bool bVar1;
  UObject *pUVar2;
  FDS_RaidPartyMemberInfo *pFVar3;
  FWeakObjectPtr local_res10 [3];
  
  UDS_PlayerData::GetMainPlayerData();
  bVar1 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)local_res10,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res10);
    if (0 < (this->RaidPartyInfo).RaidPartyUID) {
      pFVar3 = FDS_RaidPartyInfo::GetMemberInfoByPlayerUID
                         (&this->RaidPartyInfo,*(long64 *)&pUVar2[6].field_0x8);
      return pFVar3;
    }
  }
  return &FDS_RaidPartyInfo::DefaultMemberInfo;
}

// GetRaidPartyCharInfo @ 14b8c8410

FDS_RaidCharInfo * __thiscall
FDS_RaidPartyRepo::GetRaidPartyCharInfo(FDS_RaidPartyRepo *this,int param_1)

{
  int iVar1;
  FDS_RaidPartyMemberInfo *pFVar2;
  FDS_RaidPartyMemberInfo *pFVar3;
  undefined1 local_res8 [8];
  
  if ((this->RaidPartyInfo).RaidPartyUID < 1) {
    return &FDS_RaidPartyInfo::DefaultMemberInfo.CharInfo;
  }
  pFVar2 = (FDS_RaidPartyMemberInfo *)(this->RaidPartyInfo).Members.AllocatorInstance.Data;
  iVar1 = (this->RaidPartyInfo).Members.ArrayNum;
  pFVar3 = pFVar2 + iVar1;
  while( true ) {
    if ((this->RaidPartyInfo).Members.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FDS_RaidPartyMemberInfo_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (pFVar2->SlotIndex == param_1) goto LAB_14b8c847c;
    pFVar2 = pFVar2 + 1;
  }
  pFVar2 = &FDS_RaidPartyInfo::DefaultMemberInfo;
LAB_14b8c847c:
  return &pFVar2->CharInfo;
}

// GetRaidPartyLeaderMemberInfo @ 14b8c84a0

FDS_RaidPartyMemberInfo * __thiscall
FDS_RaidPartyRepo::GetRaidPartyLeaderMemberInfo(FDS_RaidPartyRepo *this)

{
  int iVar1;
  FDS_RaidPartyMemberInfo *pFVar2;
  FDS_RaidPartyMemberInfo *pFVar3;
  undefined1 local_res8 [8];
  
  if ((this->RaidPartyInfo).RaidPartyUID < 1) {
LAB_14b8c84fc:
    pFVar2 = &FDS_RaidPartyInfo::DefaultMemberInfo;
  }
  else {
    iVar1 = (this->RaidPartyInfo).Members.ArrayNum;
    pFVar2 = (FDS_RaidPartyMemberInfo *)(this->RaidPartyInfo).Members.AllocatorInstance.Data;
    pFVar3 = pFVar2 + iVar1;
    while( true ) {
      if ((this->RaidPartyInfo).Members.ArrayNum != iVar1) {
        `TCheckedPointerIterator<FDS_RaidPartyMemberInfo_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar2 == pFVar3) goto LAB_14b8c84fc;
      if (pFVar2->PlayerUID == (this->RaidPartyInfo).LeaderUID) break;
      pFVar2 = pFVar2 + 1;
    }
  }
  return pFVar2;
}

// GetRaidPartyMemberInfoByPlayerUID @ 14b8c8520

FDS_RaidPartyMemberInfo * __thiscall
FDS_RaidPartyRepo::GetRaidPartyMemberInfoByPlayerUID(FDS_RaidPartyRepo *this,long64 param_1)

{
  FDS_RaidPartyMemberInfo *pFVar1;
  
  if ((this->RaidPartyInfo).RaidPartyUID < 1) {
    return &FDS_RaidPartyInfo::DefaultMemberInfo;
  }
  pFVar1 = FDS_RaidPartyInfo::GetMemberInfoByPlayerUID(&this->RaidPartyInfo,param_1);
  return pFVar1;
}

// GetRaidPartyMemberInfoBySlotIndex @ 14b8c8540

FDS_RaidPartyMemberInfo * __thiscall
FDS_RaidPartyRepo::GetRaidPartyMemberInfoBySlotIndex(FDS_RaidPartyRepo *this,int param_1)

{
  int iVar1;
  FDS_RaidPartyMemberInfo *pFVar2;
  FDS_RaidPartyMemberInfo *pFVar3;
  undefined1 local_res8 [8];
  
  if ((this->RaidPartyInfo).RaidPartyUID < 1) {
    return &FDS_RaidPartyInfo::DefaultMemberInfo;
  }
  pFVar2 = (FDS_RaidPartyMemberInfo *)(this->RaidPartyInfo).Members.AllocatorInstance.Data;
  iVar1 = (this->RaidPartyInfo).Members.ArrayNum;
  pFVar3 = pFVar2 + iVar1;
  while( true ) {
    if ((this->RaidPartyInfo).Members.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FDS_RaidPartyMemberInfo_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (pFVar2->SlotIndex == param_1) {
      return pFVar2;
    }
    pFVar2 = pFVar2 + 1;
  }
  return &FDS_RaidPartyInfo::DefaultMemberInfo;
}

// IsValidRaidPartyInfo @ 14b8d0b40

bool __thiscall FDS_RaidPartyRepo::IsValidRaidPartyInfo(FDS_RaidPartyRepo *this)

{
  return 0 < (this->RaidPartyInfo).RaidPartyUID;
}

// RaidPartyStateChange @ 14b8df830

void __thiscall
FDS_RaidPartyRepo::RaidPartyStateChange(FDS_RaidPartyRepo *this,EDS_RaidPartyState param_1)

{
  bool bVar1;
  UDS_DungeonEvent *pUVar2;
  
  (this->RaidPartyInfo).State = (uint)param_1;
  pUVar2 = UDS_DungeonEvent::GetEvent();
  if (pUVar2 != (UDS_DungeonEvent *)0x0) {
    bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar2->OnChangedRaidPartyInfo);
    if (bVar1) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar2->OnChangedRaidPartyInfo).Delegate);
      return;
    }
  }
  return;
}

// SetRaidPartyInfo @ 14b8e9f70

void __thiscall FDS_RaidPartyRepo::SetRaidPartyInfo(FDS_RaidPartyRepo *this,RaidPartyInfo *param_1)

{
  longlong lVar1;
  bool bVar2;
  FDS_RaidPartyInfo *pFVar3;
  UDS_DungeonEvent *pUVar4;
  FDS_RaidPartyInfo local_58;
  
  lVar1 = (this->RaidPartyInfo).RaidPartyUID;
  pFVar3 = FDS_RaidPartyInfo::FDS_RaidPartyInfo(&local_58,param_1);
  FDS_RaidPartyInfo::operator=(&this->RaidPartyInfo,pFVar3);
  DestructItems<FDS_RaidPartyMemberInfo,int>
            ((FDS_RaidPartyMemberInfo *)local_58.Members.AllocatorInstance.Data,
             local_58.Members.ArrayNum);
  if ((FDS_RaidPartyMemberInfo *)local_58.Members.AllocatorInstance.Data !=
      (FDS_RaidPartyMemberInfo *)0x0) {
    FMemory::Free(local_58.Members.AllocatorInstance.Data);
  }
  if (local_58.PartyName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.PartyName.Data.AllocatorInstance.Data);
  }
  pUVar4 = UDS_DungeonEvent::GetEvent();
  if (pUVar4 != (UDS_DungeonEvent *)0x0) {
    if ((lVar1 == 0) && (0 < (this->RaidPartyInfo).RaidPartyUID)) {
      bVar2 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &pUVar4->OnJoinedRaidParty);
      if (bVar2) {
        TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                  (&(pUVar4->OnJoinedRaidParty).Delegate);
      }
    }
    bVar2 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar4->OnChangedRaidPartyInfo);
    if (bVar2) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar4->OnChangedRaidPartyInfo).Delegate);
    }
  }
  return;
}

// SetRaidPartyMemberInfo @ 14b8ea030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FDS_RaidPartyRepo::SetRaidPartyMemberInfo(FDS_RaidPartyRepo *this,RaidPartyMemberInfo *param_1)

{
  FString *pFVar1;
  TMap<EDS_StatusType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusType,int,0>_>
  *pTVar2;
  TMap<EDS_StatusType,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusType,float,0>_>
  *pTVar3;
  TMap<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>
  *pTVar4;
  int iVar5;
  double dVar6;
  bool bVar7;
  UDS_LogManager *pUVar8;
  FDS_RaidPartyMemberInfo *pFVar9;
  UDS_DungeonEvent *pUVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 auStackY_1c8 [32];
  undefined1 local_198 [16];
  undefined1 local_188 [256];
  void *local_88;
  wchar_t *local_80;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  if ((this->RaidPartyInfo).RaidPartyUID < 1) {
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 != (UDS_LogManager *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      local_88 = (void *)0x0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)local_188,
                 "FDS_RaidPartyRepo::SetRaidPartyMemberInfo",0x29,Yes);
      UDS_LogManager::PrintLog(pUVar8,1,Warning,local_80,0x117,L"RaidParty id not valid.");
      if (local_88 != (void *)0x0) {
        FMemory::Free(local_88);
      }
    }
  }
  else {
    pFVar11 = (this->RaidPartyInfo).Members.AllocatorInstance.Data;
    iVar5 = (this->RaidPartyInfo).Members.ArrayNum;
    pFVar12 = pFVar11 + (longlong)iVar5 * 0x160;
    while( true ) {
      if ((this->RaidPartyInfo).Members.ArrayNum != iVar5) {
        `TCheckedPointerIterator<FDS_RaidPartyMemberInfo,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_198);
      }
      if (pFVar11 == pFVar12) goto LAB_14b8ea27e;
      if (*(longlong *)(pFVar11 + 8) == (param_1->_impl_).player_uid_) break;
      pFVar11 = pFVar11 + 0x160;
    }
    pFVar9 = FDS_RaidPartyMemberInfo::FDS_RaidPartyMemberInfo
                       ((FDS_RaidPartyMemberInfo *)local_188,param_1);
    pFVar12 = pFVar11 + 0x10;
    pFVar1 = &pFVar9->NickName;
    *(uint *)pFVar11 = pFVar9->SlotIndex;
    *(long64 *)(pFVar11 + 8) = pFVar9->PlayerUID;
    if (pFVar12 != (FScriptContainerElement *)pFVar1) {
      if (*(void **)pFVar12 != (void *)0x0) {
        FMemory::Free(*(void **)pFVar12);
      }
      *(FScriptContainerElement **)pFVar12 = (pFVar1->Data).AllocatorInstance.Data;
      (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar11 + 0x18) = (pFVar9->NickName).Data.ArrayNum;
      *(int *)(pFVar11 + 0x1c) = (pFVar9->NickName).Data.ArrayMax;
      (pFVar9->NickName).Data.ArrayNum = 0;
      (pFVar9->NickName).Data.ArrayMax = 0;
    }
    pTVar2 = &(pFVar9->RaidPartyMemberSyncData).StatusMaxMap;
    *(undefined8 *)(pFVar11 + 0x20) = *(undefined8 *)&pFVar9->CharInfo;
    *(int *)(pFVar11 + 0x28) = (pFVar9->CharInfo).CharAscend;
    pFVar11[0x2c] = (FScriptContainerElement)pFVar9->MemberState;
    *(ulong64 *)(pFVar11 + 0x30) = (pFVar9->RaidPartyMemberSyncData).PlayerEntityId;
    *(long64 *)(pFVar11 + 0x38) = (pFVar9->RaidPartyMemberSyncData).PlayerUID;
    *(int *)(pFVar11 + 0x40) = (pFVar9->RaidPartyMemberSyncData).CharId;
    dVar6 = (pFVar9->RaidPartyMemberSyncData).Position.field0_0x0._s_0.Y;
    *(double *)(pFVar11 + 0x48) = (pFVar9->RaidPartyMemberSyncData).Position.field0_0x0._s_0.X;
    *(double *)(pFVar11 + 0x50) = dVar6;
    *(double *)(pFVar11 + 0x58) = (pFVar9->RaidPartyMemberSyncData).Position.field0_0x0._s_0.Z;
    *(ulong64 *)(pFVar11 + 0x60) = (pFVar9->RaidPartyMemberSyncData).CharEntityId;
    pFVar11[0x68] = (FScriptContainerElement)(pFVar9->RaidPartyMemberSyncData).IsDead;
    *(uint *)(pFVar11 + 0x6c) = (pFVar9->RaidPartyMemberSyncData).ZoneID;
    if ((TSet<TTuple<EDS_StatusType,int>,TDefaultMapHashableKeyFuncs<EDS_StatusType,int,0>,FDefaultSetAllocator>
         *)(pFVar11 + 0x70) !=
        (TSet<TTuple<EDS_StatusType,int>,TDefaultMapHashableKeyFuncs<EDS_StatusType,int,0>,FDefaultSetAllocator>
         *)pTVar2) {
      TSet<TTuple<enum_EDS_StatusType,int>,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,int,0>,FDefaultSetAllocator>
      ::
      Move<TSet<TTuple<enum_EDS_StatusType,int>,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,int,0>,FDefaultSetAllocator>_>
                ((TSet<TTuple<EDS_StatusType,int>,TDefaultMapHashableKeyFuncs<EDS_StatusType,int,0>,FDefaultSetAllocator>
                  *)(pFVar11 + 0x70),
                 (TSet<TTuple<EDS_StatusType,int>,TDefaultMapHashableKeyFuncs<EDS_StatusType,int,0>,FDefaultSetAllocator>
                  *)pTVar2);
    }
    pTVar3 = &(pFVar9->RaidPartyMemberSyncData).StatusCurMap;
    if ((TSet<TTuple<EDS_StatusType,float>,TDefaultMapHashableKeyFuncs<EDS_StatusType,float,0>,FDefaultSetAllocator>
         *)(pFVar11 + 0xc0) !=
        (TSet<TTuple<EDS_StatusType,float>,TDefaultMapHashableKeyFuncs<EDS_StatusType,float,0>,FDefaultSetAllocator>
         *)pTVar3) {
      TSet<TTuple<enum_EDS_StatusType,float>,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,float,0>,FDefaultSetAllocator>
      ::
      Move<TSet<TTuple<enum_EDS_StatusType,float>,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,float,0>,FDefaultSetAllocator>_>
                ((TSet<TTuple<EDS_StatusType,float>,TDefaultMapHashableKeyFuncs<EDS_StatusType,float,0>,FDefaultSetAllocator>
                  *)(pFVar11 + 0xc0),
                 (TSet<TTuple<EDS_StatusType,float>,TDefaultMapHashableKeyFuncs<EDS_StatusType,float,0>,FDefaultSetAllocator>
                  *)pTVar3);
    }
    pTVar4 = &(pFVar9->RaidPartyMemberSyncData).BuffMap;
    if ((TSet<TTuple<int,FDS_BuffInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>,FDefaultSetAllocator>
         *)(pFVar11 + 0x110) !=
        (TSet<TTuple<int,FDS_BuffInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>,FDefaultSetAllocator>
         *)pTVar4) {
      TSet<TTuple<int,FDS_BuffInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>,FDefaultSetAllocator>
      ::
      Move<TSet<TTuple<int,FDS_BuffInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>,FDefaultSetAllocator>_>
                ((TSet<TTuple<int,FDS_BuffInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>,FDefaultSetAllocator>
                  *)(pFVar11 + 0x110),
                 (TSet<TTuple<int,FDS_BuffInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>,FDefaultSetAllocator>
                  *)pTVar4);
    }
    FDS_RaidPartyMemberSyncData::~FDS_RaidPartyMemberSyncData
              ((FDS_RaidPartyMemberSyncData *)(local_188 + 0x30));
    if ((FScriptContainerElement *)local_188._16_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_188._16_8_);
    }
    pUVar10 = UDS_DungeonEvent::GetEvent();
    if (pUVar10 != (UDS_DungeonEvent *)0x0) {
      FDS_EventDelegate<__int64_const_>::Broadcast
                (&pUVar10->OnRaidPartyMemberInfoChanged,*(long64 *)(pFVar11 + 8));
      bVar7 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &pUVar10->OnChangedRaidPartyInfo);
      if (bVar7) {
        TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                  (&(pUVar10->OnChangedRaidPartyInfo).Delegate);
      }
    }
  }
LAB_14b8ea27e:
  ds_proto::RaidPartyMemberInfo::~RaidPartyMemberInfo(param_1);
  return;
}

// SetRaidPartyMemberState @ 14b8ea2b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FDS_RaidPartyRepo::SetRaidPartyMemberState
          (FDS_RaidPartyRepo *this,long64 param_1,long64 param_2,EDS_RaidMemberState param_3)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  UDS_DungeonEvent *pUVar5;
  FDS_RaidPartyMemberInfo *pFVar6;
  UObject *pUVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 auStackY_198 [32];
  uint uVar10;
  wchar_t *pwVar11;
  undefined1 local_168 [8];
  FWeakObjectPtr local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
  lVar2 = (this->RaidPartyInfo).RaidPartyUID;
  if (lVar2 < 1) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"FDS_RaidPartyRepo::SetRaidPartyMemberState",0x2a,Yes);
    pwVar11 = L"RaidParty id not valid.";
    uVar10 = 0xf1;
  }
  else {
    if (lVar2 == param_1) {
      pFVar8 = (this->RaidPartyInfo).Members.AllocatorInstance.Data;
      iVar1 = (this->RaidPartyInfo).Members.ArrayNum;
      pFVar9 = pFVar8 + (longlong)iVar1 * 0x160;
      while( true ) {
        if ((this->RaidPartyInfo).Members.ArrayNum != iVar1) {
          `TCheckedPointerIterator<FDS_RaidPartyMemberInfo,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_168);
        }
        if (pFVar8 == pFVar9) {
          return;
        }
        if (*(longlong *)(pFVar8 + 8) == param_2) break;
        pFVar8 = pFVar8 + 0x160;
      }
      pFVar8[0x2c] = (FScriptContainerElement)param_3;
      pUVar5 = UDS_DungeonEvent::GetEvent();
      if (pUVar5 == (UDS_DungeonEvent *)0x0) {
        return;
      }
      bVar3 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &pUVar5->OnChangedRaidPartyInfo);
      if (bVar3) {
        TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                  (&(pUVar5->OnChangedRaidPartyInfo).Delegate);
      }
      FDS_EventDelegate<__int64_const_>::Broadcast
                (&pUVar5->OnRaidPartyMemberInfoChanged,*(long64 *)(pFVar8 + 8));
      UDS_PlayerData::GetMainPlayerData();
      bVar3 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)&local_160,(void *)0x0);
      if (bVar3) {
        pFVar6 = &FDS_RaidPartyInfo::DefaultMemberInfo;
      }
      else {
        pUVar7 = FWeakObjectPtr::Get(&local_160);
        if ((this->RaidPartyInfo).RaidPartyUID < 1) {
          pFVar6 = &FDS_RaidPartyInfo::DefaultMemberInfo;
        }
        else {
          pFVar6 = FDS_RaidPartyInfo::GetMemberInfoByPlayerUID
                             (&this->RaidPartyInfo,*(long64 *)&pUVar7[6].field_0x8);
        }
      }
      if (pFVar6->PlayerUID != param_2) {
        return;
      }
      bVar3 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &pUVar5->OnChangedMyRaidPartyState);
      if (!bVar3) {
        return;
      }
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar5->OnChangedMyRaidPartyState).Delegate);
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"FDS_RaidPartyRepo::SetRaidPartyMemberState",0x2a,Yes);
    pwVar11 = L"RaidParty id not match.";
    uVar10 = 0xf7;
  }
  UDS_LogManager::PrintLog(pUVar4,1,Warning,local_158.Ptr,uVar10,pwVar11);
  if ((void *)local_158._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
  return;
}

// SetRaidPartyMemberSyncData @ 14b8ea500

void __thiscall
FDS_RaidPartyRepo::SetRaidPartyMemberSyncData
          (FDS_RaidPartyRepo *this,RaidPartyMemberSyncResponse *param_1)

{
  int iVar1;
  longlong lVar2;
  UDS_DungeonEvent *pUVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  iVar1 = (this->RaidPartyInfo).Members.ArrayNum;
  pFVar4 = (this->RaidPartyInfo).Members.AllocatorInstance.Data;
  pFVar5 = pFVar4 + (longlong)iVar1 * 0x160;
  while( true ) {
    if ((this->RaidPartyInfo).Members.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FDS_RaidPartyMemberInfo,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar5) break;
    lVar2 = *(longlong *)(pFVar4 + 8);
    if (lVar2 == (param_1->_impl_).player_uid_) {
      FDS_RaidPartyMemberSyncData::UpdataRaidPartyMemberSyncData
                ((FDS_RaidPartyMemberSyncData *)(pFVar4 + 0x30),param_1);
      pUVar3 = UDS_DungeonEvent::GetEvent();
      if (pUVar3 != (UDS_DungeonEvent *)0x0) {
        FDS_EventDelegate<__int64_const_>::Broadcast(&pUVar3->OnChangedRaidPartyMemberSync,lVar2);
      }
      return;
    }
    pFVar4 = pFVar4 + 0x160;
  }
  return;
}

// SetRaidPartyVoteClear @ 14b8ea5a0

void __thiscall FDS_RaidPartyRepo::SetRaidPartyVoteClear(FDS_RaidPartyRepo *this)

{
  bool bVar1;
  UDS_DungeonEvent *pUVar2;
  
  (this->RaidPartyVoteData).RaidPartyUID = 0;
  (this->RaidPartyVoteData).PlayerUID = 0;
  (this->RaidPartyVoteData).AgreementCount = 0;
  (this->RaidPartyVoteData).RejectCount = 0;
  (this->RaidPartyVoteData).VoteProposerUID = 0;
  this->bIsVoteable = false;
  pUVar2 = UDS_DungeonEvent::GetEvent();
  if (pUVar2 != (UDS_DungeonEvent *)0x0) {
    bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar2->OnChangedRaidPartyVoteData);
    if (bVar1) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar2->OnChangedRaidPartyVoteData).Delegate);
      return;
    }
  }
  return;
}

// SetRaidPartyVoteData @ 14b8ea600

void __thiscall
FDS_RaidPartyRepo::SetRaidPartyVoteData(FDS_RaidPartyRepo *this,RaidPartyKickVoteNotify *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  UObject *pUVar4;
  UDS_DungeonEvent *pUVar5;
  FWeakObjectPtr local_res8;
  RaidPartyKickVoteNotify local_38;
  
  server_msg::RaidPartyKickVoteNotify::RaidPartyKickVoteNotify(&local_38,(Arena *)0x0,param_1);
  local_38._padding_ = (longlong)&___7RaidPartyKickVoteNotify_server_msg__6B_;
  (this->RaidPartyVoteData).RaidPartyUID = local_38._impl_.raid_party_uid_;
  (this->RaidPartyVoteData).PlayerUID = local_38._impl_.vote_player_uid_;
  (this->RaidPartyVoteData).AgreementCount = local_38._impl_.agreement_count_;
  (this->RaidPartyVoteData).RejectCount = local_38._impl_.reject_count_;
  server_msg::RaidPartyKickVoteNotify::~RaidPartyKickVoteNotify(&local_38);
  UDS_PlayerData::GetMainPlayerData();
  bVar3 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)&local_res8,(void *)0x0);
  if (!bVar3) {
    iVar1 = (this->RaidPartyVoteData).RejectCount;
    iVar2 = (this->RaidPartyVoteData).AgreementCount;
    pUVar4 = FWeakObjectPtr::Get(&local_res8);
    if ((*(longlong *)&pUVar4[6].field_0x8 != (this->RaidPartyVoteData).VoteProposerUID) &&
       (iVar1 + iVar2 == 1)) {
      pUVar4 = FWeakObjectPtr::Get(&local_res8);
      this->bIsVoteable = *(longlong *)&pUVar4[6].field_0x8 != (this->RaidPartyVoteData).PlayerUID;
    }
    pUVar5 = UDS_DungeonEvent::GetEvent();
    if (pUVar5 != (UDS_DungeonEvent *)0x0) {
      bVar3 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &pUVar5->OnChangedRaidPartyVoteData);
      if (bVar3) {
        TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                  (&(pUVar5->OnChangedRaidPartyVoteData).Delegate);
      }
    }
  }
  return;
}

// SetRaidPartyVoteProposerUID @ 14b8ea6f0

void __thiscall
FDS_RaidPartyRepo::SetRaidPartyVoteProposerUID(FDS_RaidPartyRepo *this,long64 *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  UObject *pUVar4;
  UDS_DungeonEvent *pUVar5;
  FWeakObjectPtr local_res8;
  
  (this->RaidPartyVoteData).VoteProposerUID = *param_1;
  UDS_PlayerData::GetMainPlayerData();
  bVar3 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)&local_res8,(void *)0x0);
  if (!bVar3) {
    iVar1 = (this->RaidPartyVoteData).RejectCount;
    iVar2 = (this->RaidPartyVoteData).AgreementCount;
    pUVar4 = FWeakObjectPtr::Get(&local_res8);
    if ((*(longlong *)&pUVar4[6].field_0x8 != (this->RaidPartyVoteData).PlayerUID) &&
       (iVar1 + iVar2 == 1)) {
      pUVar4 = FWeakObjectPtr::Get(&local_res8);
      this->bIsVoteable = *(longlong *)&pUVar4[6].field_0x8 != *param_1;
    }
    pUVar5 = UDS_DungeonEvent::GetEvent();
    if (pUVar5 != (UDS_DungeonEvent *)0x0) {
      bVar3 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &pUVar5->OnChangedRaidPartyVoteData);
      if (bVar3) {
        TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                  (&(pUVar5->OnChangedRaidPartyVoteData).Delegate);
      }
    }
  }
  return;
}

// SetVoteStartTime @ 14b8eae90

void __thiscall FDS_RaidPartyRepo::SetVoteStartTime(FDS_RaidPartyRepo *this,FDateTime *param_1)

{
  (this->RaidPartyVoteData).VoteStartTime.Ticks = param_1->Ticks;
  return;
}

