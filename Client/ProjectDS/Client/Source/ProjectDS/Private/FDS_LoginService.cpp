// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 15

// ErrorSendCreateCharacter @ 14bbb5070

bool __cdecl
FDS_LoginService::ErrorSendCreateCharacter(FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  bool bVar1;
  
  UDS_WindowManager::CloseCommonCenterLoading();
  bVar1 = ProcessError(param_1,param_2);
  return bVar1;
}

// ProcessError @ 14bbce840

bool __cdecl FDS_LoginService::ProcessError(FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  undefined1 *puVar1;
  FDS_EventDelegate<FDS_ErrorMessageInfo_const_&> *this;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  uint uVar9;
  UDS_LoginEvent *pUVar10;
  uint uVar11;
  longlong lVar12;
  FDestructionSentinel local_38;
  
  pUVar10 = UDS_LoginEvent::GetEvent();
  if (pUVar10 == (UDS_LoginEvent *)0x0) {
    return false;
  }
  this = &pUVar10->OnErrorEvent;
  bVar5 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this);
  if (bVar5) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
               (FWriteAccessScope *)&local_38);
    puVar1 = &(pUVar10->OnErrorEvent).Delegate.field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    bVar5 = false;
    uVar11 = *(int *)&(pUVar10->OnErrorEvent).Delegate.field_0x10 - 1;
    if (-1 < (int)uVar11) {
      lVar12 = (longlong)(int)uVar11 << 4;
      bVar5 = false;
      do {
        uVar9 = 0;
        if ((int)uVar11 < *(int *)&(pUVar10->OnErrorEvent).Delegate.field_0x10) {
          uVar9 = ~uVar11 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        lVar2 = *(longlong *)&(pUVar10->OnErrorEvent).Delegate.field_0x8;
        if (((*(int *)(lVar2 + 8 + lVar12) == 0) ||
            (plVar3 = *(longlong **)(lVar2 + lVar12), plVar3 == (longlong *)0x0)) ||
           (cVar8 = (**(code **)(*plVar3 + 0x68))(), cVar8 == '\0')) {
          bVar5 = true;
        }
        lVar12 = lVar12 + -0x10;
        uVar11 = uVar11 - 1;
      } while (-1 < (int)uVar11);
    }
    puVar1 = &(pUVar10->OnErrorEvent).Delegate.field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (bVar5) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,false);
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
  }
  return false;
}

// ProcessJoinGameServerError @ 14bbcebe0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
FDS_LoginService::ProcessJoinGameServerError(FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  bool bVar1;
  ServerMessageTwowayUnion SVar2;
  UDS_GameInstance *this;
  UWorld *pUVar3;
  UDS_NetworkManager *this_00;
  ServerMessagesTwoway local_38;
  
  server_msg_twoway::ServerMessagesTwoway::ServerMessagesTwoway
            (&local_38,(Arena *)0x0,(ServerMessagesTwoway *)param_2);
  local_38._padding_ = (longlong)&___7ServerMessagesTwoway_server_msg_twoway__6B_;
  if (param_1->ErrorCode == NotExistNickname) {
    SVar2 = (ServerMessageTwowayUnion)&server_msg_twoway::_JoinGameServerResponse_default_instance_;
    if (local_38._impl_._oneof_case_[0] == 0x48) {
      SVar2 = local_38._impl_.ServerMessageTwoway_;
    }
    UDS_TimeUtilManager::SetGMTOffset
              ((double)((float)*(int *)&SVar2.pongres_[5].field_0x8 * __real_45610000));
    this = UDS_GameInstance::GetInst();
    if (this != (UDS_GameInstance *)0x0) {
      pUVar3 = UGameInstance::GetWorld((UGameInstance *)this);
      ADS_CustomizeRenderRoom::SpawnRenderRoomAsync(pUVar3);
    }
    bVar1 = true;
  }
  else if (param_1->ErrorCode == TimeOut) {
    this_00 = UDS_NetworkManager::GetInst();
    UDS_NetworkManager::DisconnectWithPopup(this_00,Client_FailedToReceivePacket);
    bVar1 = false;
  }
  else {
    bVar1 = ProcessError(param_1,param_2);
  }
  server_msg_twoway::ServerMessagesTwoway::~ServerMessagesTwoway(&local_38);
  return bVar1;
}

// ReceiveCreateCharacterResponse @ 14bbd0dc0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_LoginService::ReceiveCreateCharacterResponse(ServerMessages *param_1)

{
  bool bVar1;
  UDS_LoginEvent *pUVar2;
  UDS_WindowManager *this;
  float local_res10 [2];
  uint local_res18 [4];
  
  UDS_WindowManager::CloseCommonCenterLoading();
  pUVar2 = UDS_LoginEvent::GetEvent();
  if (pUVar2 != (UDS_LoginEvent *)0x0) {
    bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar2->OnRequestInGameLevelLoad);
    if (bVar1) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar2->OnRequestInGameLevelLoad).Delegate);
    }
  }
  this = UDS_WindowManager::GetInst();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (this == (UDS_WindowManager *)0x0) goto LAB_14bbd0e39;
  }
  else {
    if (this == (UDS_WindowManager *)0x0) goto LAB_14bbd0e39;
    UE::GC::MarkAsReachable((UObject *)this);
  }
  local_res10[0] = 0.0;
  local_res18[0] = 0;
  UDS_WindowManager::CloseWindow(this,PopupInput,local_res18,local_res10);
LAB_14bbd0e39:
  SendJoinContinent();
  return;
}

// ReceiveJoinMapResponse @ 14bbd3d50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_LoginService::ReceiveJoinMapResponse(ServerMessages *param_1)

{
  longlong *plVar1;
  ulong64 uVar2;
  CharacterEntityTypeDefaultTypeInternal *pCVar3;
  code *pcVar4;
  bool bVar5;
  UDS_ZoneManager *this;
  UDS_DataManager *this_00;
  UDS_LogManager *pUVar6;
  UObject *pUVar7;
  UDS_PlayerData *this_01;
  UDS_NetworkManager *this_02;
  ADS_AI_GYM_GameMode *this_03;
  UDS_LoginEvent *pUVar8;
  CharacterEntityTypeDefaultTypeInternal *pCVar9;
  longlong *plVar10;
  JoinMapResponseDefaultTypeInternal *pJVar11;
  undefined1 auStackY_538 [32];
  FWeakObjectPtr local_508;
  FWeakObjectPtr local_500;
  FString local_4f8;
  undefined1 local_4e8 [8];
  undefined1 local_4e0 [8];
  undefined1 local_4d8 [8];
  undefined1 local_4d0 [8];
  undefined1 local_4c8 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_538;
  if ((param_1->_impl_)._oneof_case_[0] == 3) {
    pJVar11 = *(JoinMapResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pJVar11 = &server_msg::_JoinMapResponse_default_instance_;
  }
  this = UDS_ZoneManager::GetInst();
  if (this != (UDS_ZoneManager *)0x0) {
    UDS_ZoneManager::JoinMapResponseProcess(this,&pJVar11->_instance);
  }
  this_00 = UDS_DataManager::GetInst();
  if (this_00 == (UDS_DataManager *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_4b8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_4b8,"FDS_LoginService::ReceiveJoinMapResponse",0x28,Yes);
      UDS_LogManager::PrintLog(pUVar6,1,Warning,local_4b8.Ptr,0x157,L"dataMgr is nullptr.");
      if ((void *)local_4b8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_4b8._padding_);
      }
    }
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7771091955961822888>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_LoginService.cpp"
                       ,0x158,"false");
    if (bVar5) {
code_r0x00014bbd4044:
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    uVar2 = *(ulong64 *)((longlong)pJVar11 + 0x50);
    if ((*(ulonglong *)&((Message *)((longlong)pJVar11 + 0x10))->field_0x8 & 1) == 0) {
      plVar10 = (longlong *)&((Message *)((longlong)pJVar11 + 0x10))->field_0x8;
    }
    else {
      plVar10 = (longlong *)(*(ulonglong *)&((Message *)((longlong)pJVar11 + 0x10))->field_0x8 + 7);
    }
    plVar1 = plVar10 + *(int *)((longlong)pJVar11 + 0x20);
    for (; plVar10 != plVar1; plVar10 = plVar10 + 1) {
      pCVar3 = *(CharacterEntityTypeDefaultTypeInternal **)(*plVar10 + 0x18);
      pCVar9 = &messages::_CharacterEntityType_default_instance_;
      if (pCVar3 != (CharacterEntityTypeDefaultTypeInternal *)0x0) {
        pCVar9 = pCVar3;
      }
      if (((pCVar9->_instance)._impl_._oneof_case_[0] == 1) &&
         (bVar5 = UDS_DataManager::CreateDataSetContainer
                            (this_00,(((pCVar9->_instance)._impl_.entity_.main_)->_impl_).bits_,
                             MainCharacter,*(int *)(*plVar10 + 0x28),false), !bVar5)) {
        pUVar6 = UDS_LogManager::GetInst();
        if (pUVar6 != (UDS_LogManager *)0x0) {
          pUVar6 = UDS_LogManager::GetInst();
          local_398._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_398,"FDS_LoginService::ReceiveJoinMapResponse",0x28,Yes);
          UDS_LogManager::PrintLog
                    (pUVar6,1,Warning,local_398.Ptr,0x166,
                     L"Create MainChar DataSetContainer is Failed.");
          if ((void *)local_398._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_398._padding_);
          }
        }
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_7771091955961822873>,true,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_LoginService.cpp"
                           ,0x167,"false");
        if (!bVar5) {
          return;
        }
        goto code_r0x00014bbd4044;
      }
    }
    UDS_PlayerData::GetData((ulong64)&local_508,uVar2,false);
    bVar5 = FWeakObjectPtr::IsValid(&local_508);
    if (bVar5) {
      pUVar7 = FWeakObjectPtr::Get(&local_508);
      (**(code **)(*(longlong *)pUVar7 + 0x2c8))(pUVar7);
      this_01 = (UDS_PlayerData *)FWeakObjectPtr::Get(&local_508);
      UDS_PlayerData::SetDataByJoinMapResponse(this_01,&pJVar11->_instance,true);
      TDS_DataSetGetter<UDS_ItemDataSet>::Get((ulong64)local_4e8);
      TDS_DataSetGetter<UDS_QuestDataSet>::Get((ulong64)local_4e0);
      TDS_DataSetGetter<UDS_PlayerSkillDataSet>::Get((ulong64)local_4d8);
      TDS_DataSetGetter<UDS_MountDataSet>::Get((ulong64)local_4d0);
      TDS_DataSetGetter<UDS_WaitCompleteDataSet>::Get((ulong64)local_4c8);
      this_02 = UDS_NetworkManager::GetInst();
      if (this_02 == (UDS_NetworkManager *)0x0) {
        pUVar6 = UDS_LogManager::GetInst();
        if (pUVar6 != (UDS_LogManager *)0x0) {
          pUVar6 = UDS_LogManager::GetInst();
          local_158._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_158,"FDS_LoginService::ReceiveJoinMapResponse",0x28,Yes);
          UDS_LogManager::PrintLog(pUVar6,1,Warning,local_158.Ptr,0x183,L"netMng is nullptr.");
          if ((void *)local_158._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_158._padding_);
          }
        }
      }
      else {
        UDS_NetworkManager::StartSendNetSyncRequest(this_02);
        bVar5 = UDS_GameInstance::GetIsAIGymMode();
        if (bVar5) {
          ADS_AI_GYM_GameMode::GetInst();
          bVar5 = TWeakObjectPtr<ADS_AI_GYM_GameMode,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<ADS_AI_GYM_GameMode,FWeakObjectPtr> *)&local_500,
                             (void *)0x0);
          if (!bVar5) {
            this_03 = (ADS_AI_GYM_GameMode *)FWeakObjectPtr::Get(&local_500);
            ::FString::PrintfImpl(&local_4f8,L"LoginService::ReceiveJoinMapResponse() [ZoneID] %d");
            ADS_AI_GYM_GameMode::AppendDebugString(this_03,&local_4f8);
            if (local_4f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_4f8.Data.AllocatorInstance.Data);
            }
          }
        }
        pUVar8 = UDS_LoginEvent::GetEvent();
        if (pUVar8 != (UDS_LoginEvent *)0x0) {
          bVar5 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                             &pUVar8->OnReceiveJoinMapResponse);
          if (bVar5) {
            TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                      (&(pUVar8->OnReceiveJoinMapResponse).Delegate);
          }
        }
      }
    }
    else {
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 != (UDS_LogManager *)0x0) {
        pUVar6 = UDS_LogManager::GetInst();
        local_278._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_278,"FDS_LoginService::ReceiveJoinMapResponse",0x28,Yes);
        UDS_LogManager::PrintLog(pUVar6,1,Warning,local_278.Ptr,0x171,L"Failed to get PlayerData.");
        if ((void *)local_278._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_278._padding_);
        }
      }
    }
  }
  return;
}

// ReceiveMyCharacterInfoResponseComplete @ 14bbd42c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_LoginService::ReceiveMyCharacterInfoResponseComplete(ServerMessages *param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UDS_CharInfoData *this;
  UDS_DataBase *this_00;
  ulong64 uVar4;
  UDS_EntityData *this_01;
  ADS_AI_GYM_GameMode *pAVar5;
  UDS_LoginState *this_02;
  UDS_QuestManager *this_03;
  UDS_LoginEvent *pUVar6;
  MyCharacterInfoResponseCompleteDefaultTypeInternal *pMVar7;
  undefined1 auStackY_2c8 [32];
  FWeakObjectPtr local_298;
  FWeakObjectPtr local_290;
  FWeakObjectPtr local_288;
  FWeakObjectPtr local_280;
  FWeakObjectPtr local_278;
  FString local_270;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  if ((param_1->_impl_)._oneof_case_[0] == 0x23) {
    pMVar7 = *(MyCharacterInfoResponseCompleteDefaultTypeInternal **)
              &(param_1->_impl_).ServerMessage_;
  }
  else {
    pMVar7 = &server_msg::_MyCharacterInfoResponseComplete_default_instance_;
  }
  UDS_PlayerData::GetData((ulong64)&local_288,UDS_PlayerData::MainPlayerEntityID,false);
  bVar2 = FWeakObjectPtr::IsValid(&local_288);
  if (bVar2) {
    FWeakObjectPtr::Get(&local_288);
    UDS_CharInfoData::GetData((ulong64)&local_298);
    bVar2 = FWeakObjectPtr::IsValid(&local_298);
    if (bVar2) {
      this = (UDS_CharInfoData *)FWeakObjectPtr::Get(&local_298);
      UDS_CharInfoData::SetDataByMyCharacterInfoResponseComplete(this,&pMVar7->_instance);
      this_00 = (UDS_DataBase *)FWeakObjectPtr::Get(&local_298);
      uVar4 = UDS_DataBase::GetDataContainerKey(this_00);
      UDS_EntityData::GetData((ulong64)&local_280,uVar4);
      bVar2 = FWeakObjectPtr::IsValid(&local_280);
      if (bVar2) {
        this_01 = (UDS_EntityData *)FWeakObjectPtr::Get(&local_280);
        UDS_EntityData::SetMoveMode(this_01,*(EDS_MoveMode *)((longlong)pMVar7 + 0x30));
      }
    }
    bVar2 = UDS_GameInstance::GetIsAIGymMode();
    if (bVar2) {
      ADS_AI_GYM_GameMode::GetInst();
      bVar2 = TWeakObjectPtr<ADS_AI_GYM_GameMode,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<ADS_AI_GYM_GameMode,FWeakObjectPtr> *)&local_290,
                         (void *)0x0);
      if (!bVar2) {
        pAVar5 = (ADS_AI_GYM_GameMode *)FWeakObjectPtr::Get(&local_290);
        ::FString::PrintfImpl(&local_270,L"LoginService::ReceiveMyCharacterInfoResponseComplete()");
        ADS_AI_GYM_GameMode::AppendDebugString(pAVar5,&local_270);
        if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_270.Data.AllocatorInstance.Data);
        }
        pAVar5 = (ADS_AI_GYM_GameMode *)FWeakObjectPtr::Get(&local_290);
        ADS_AI_GYM_GameMode::OnReceiveMyCharacterInfoResponseComplete(pAVar5);
      }
    }
    else {
      UDS_LoginState::GetInst();
      bVar2 = TWeakObjectPtr<UDS_LoginState,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_LoginState,FWeakObjectPtr> *)&local_278,(void *)0x0);
      if (bVar2) {
        pUVar3 = UDS_LogManager::GetInst();
        if (pUVar3 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar3 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"FDS_LoginService::ReceiveMyCharacterInfoResponseComplete",0x38,Yes);
        UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x206,L"loginState is nullptr.");
        if ((void *)local_138._padding_ == (void *)0x0) {
          return;
        }
        FMemory::Free((void *)local_138._padding_);
        return;
      }
      this_02 = (UDS_LoginState *)FWeakObjectPtr::Get(&local_278);
      UDS_LoginState::PreLoadInGameLevel(this_02);
    }
    this_03 = UDS_QuestManager::GetInst();
    if (this_03 != (UDS_QuestManager *)0x0) {
      UDS_QuestManager::BindDelegate(this_03);
    }
    pUVar6 = UDS_LoginEvent::GetEvent();
    if (pUVar6 != (UDS_LoginEvent *)0x0) {
      bVar2 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &pUVar6->OnReceiveMyCharacterInfoResponseComplete);
      if (bVar2) {
        TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                  (&(pUVar6->OnReceiveMyCharacterInfoResponseComplete).Delegate);
      }
    }
  }
  else {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_258._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_258,"FDS_LoginService::ReceiveMyCharacterInfoResponseComplete",0x38,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_258.Ptr,0x1dc,L"mainPlayerData is invalid.");
      if ((void *)local_258._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_258._padding_);
      }
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7771091955961822755>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_LoginService.cpp"
                       ,0x1dd,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// ReceiveMyCurrentStatusResponse @ 14bbd45e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_LoginService::ReceiveMyCurrentStatusResponse(ServerMessages *param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_CharStatusData *this;
  MyCurrentStatusResponseDefaultTypeInternal *pMVar3;
  undefined1 auStackY_178 [32];
  uint uVar4;
  wchar_t *pwVar5;
  FWeakObjectPtr local_148;
  FWeakObjectPtr local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if ((param_1->_impl_)._oneof_case_[0] == 0x26) {
    pMVar3 = *(MyCurrentStatusResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pMVar3 = &server_msg::_MyCurrentStatusResponse_default_instance_;
  }
  UDS_PlayerData::GetData((ulong64)&local_148,UDS_PlayerData::MainPlayerEntityID,false);
  bVar1 = FWeakObjectPtr::IsValid(&local_148);
  if (bVar1) {
    FWeakObjectPtr::Get(&local_148);
    UDS_CharStatusData::GetData((ulong64)&local_140);
    bVar1 = FWeakObjectPtr::IsValid(&local_140);
    if (bVar1) {
      this = (UDS_CharStatusData *)FWeakObjectPtr::Get(&local_140);
      UDS_CharStatusData::SetDataByMyCurrentStatusResponse(this,&pMVar3->_instance);
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_LoginService::ReceiveMyCurrentStatusResponse",0x30,Yes);
    pwVar5 = L"charStatusData is Invalid.";
    uVar4 = 0x1ce;
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_LoginService::ReceiveMyCurrentStatusResponse",0x30,Yes);
    pwVar5 = L"My PlayerData is Invalid.";
    uVar4 = 0x1c6;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar4,pwVar5);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// ReceiveMyStatusResponse @ 14bbd47d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_LoginService::ReceiveMyStatusResponse(ServerMessages *param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_CharStatusData *this;
  MyStatusResponseDefaultTypeInternal *pMVar3;
  undefined1 auStackY_178 [32];
  uint uVar4;
  wchar_t *pwVar5;
  FWeakObjectPtr local_148;
  FWeakObjectPtr local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if ((param_1->_impl_)._oneof_case_[0] == 0x25) {
    pMVar3 = *(MyStatusResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pMVar3 = &server_msg::_MyStatusResponse_default_instance_;
  }
  UDS_PlayerData::GetData((ulong64)&local_140,UDS_PlayerData::MainPlayerEntityID,false);
  bVar1 = FWeakObjectPtr::IsValid(&local_140);
  if (bVar1) {
    UDS_PlayerData::GetMainPlayerCurrentEntityID();
    UDS_CharStatusData::GetData((ulong64)&local_148);
    bVar1 = FWeakObjectPtr::IsValid(&local_148);
    if (bVar1) {
      this = (UDS_CharStatusData *)FWeakObjectPtr::Get(&local_148);
      UDS_CharStatusData::SetDataByMyStatusResponse(this,&pMVar3->_instance);
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_LoginService::ReceiveMyStatusResponse",0x29,Yes);
    pwVar5 = L"charStatusData is Invalid.";
    uVar4 = 0x1b8;
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_LoginService::ReceiveMyStatusResponse",0x29,Yes);
    pwVar5 = L"My PlayerData is Invalid.";
    uVar4 = 0x1b1;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar4,pwVar5);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// ReceiveUpdateMyInfoResponse @ 14bbd60a0

void __cdecl FDS_LoginService::ReceiveUpdateMyInfoResponse(ServerMessages *param_1)

{
  int iVar1;
  UDS_TencentCloudChatManager *this;
  DbWorkItem *pDVar2;
  longlong lVar3;
  UpdateMyInfoResponseDefaultTypeInternal *pUVar4;
  
  lVar3 = 0;
  if ((param_1->_impl_)._oneof_case_[0] == 0x22) {
    pUVar4 = *(UpdateMyInfoResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pUVar4 = &server_msg::_UpdateMyInfoResponse_default_instance_;
  }
  iVar1 = *(int *)((longlong)pUVar4 + 0x20);
  if (0 < (longlong)iVar1) {
    do {
      pDVar2 = *(DbWorkItem **)&((Message *)((longlong)pUVar4 + 0x10))->field_0x8;
      if (((ulonglong)pDVar2 & 1) != 0) {
        pDVar2 = *(DbWorkItem **)
                  ((longlong)(&(pDVar2->_impl_)._has_bits_)[lVar3 * 2 + -3].has_bits_ + 3);
      }
      UpdateDbWorkItem(pDVar2);
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar1);
  }
  this = UDS_TencentCloudChatManager::GetInst();
  if (this != (UDS_TencentCloudChatManager *)0x0) {
    UDS_TencentCloudChatManager::Request_Login(this);
  }
  return;
}

// RequestJoinGameServer @ 14bbdb3b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_LoginService::RequestJoinGameServer(void)

{
  uint uVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  void *pvVar5;
  FDS_ClientMessage_Twoway *pFVar6;
  bool bVar7;
  EDS_AccountAuthority EVar8;
  FDS_AuthData *this;
  UDS_LogManager *pUVar9;
  TSharedRef<FDS_ClientMessage_Twoway,1> *pTVar10;
  Message *pMVar11;
  void *pvVar12;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar13;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar14;
  UDS_CCSAIManager *pUVar15;
  undefined8 *puVar16;
  UDS_NetworkManager *this_00;
  Arena *pAVar17;
  ulong64 uVar18;
  longlong lVar19;
  FScriptContainerElement *pFVar20;
  undefined1 auStackY_368 [32];
  undefined1 local_328 [8];
  TSharedPtr<FDS_ClientMessage_Twoway,1> local_320;
  FString local_310;
  FDestructionSentinel local_300;
  undefined1 *local_2e8;
  FDestructionSentinel local_2e0;
  undefined1 *local_2c8;
  TSharedRef<FDS_ClientMessage_Twoway,1> local_2c0;
  _Bxty local_2b0;
  undefined8 local_2a0;
  ulonglong uStack_298;
  _Bxty local_290;
  undefined8 local_280;
  ulonglong uStack_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_368;
  this = TDS_Singleton<FDS_AuthData>::GetInst();
  local_310.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_310.Data.ArrayNum = (this->JwtKey).Data.ArrayNum;
  lVar19 = (longlong)local_310.Data.ArrayNum;
  pFVar3 = (this->JwtKey).Data.AllocatorInstance.Data;
  if (local_310.Data.ArrayNum == 0) {
    local_310.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_310.Data.ArrayNum,0,(ForAnyElementType *)&local_310,local_310.Data.ArrayNum
               ,&local_310.Data.ArrayMax);
    memcpy(local_310.Data.AllocatorInstance.Data,pFVar3,lVar19 * 2);
  }
  bVar7 = UDS_GameInstance::GetIsAIGymMode();
  if (!bVar7) {
    bVar7 = UDS_GameInstance::GetIsCCSAIMode();
    if (!bVar7) {
      bVar7 = UDS_GameInstance::GetIsDungeonPlayBuild();
      if ((!bVar7) &&
         (((((this->SessionUID).Data.ArrayNum < 2 || (this->PlayerUID == 0)) || (this->WorldId < 0))
          || (this->GameServerIndex == 0)))) {
        pUVar9 = UDS_LogManager::GetInst();
        if (pUVar9 != (UDS_LogManager *)0x0) {
          pUVar9 = UDS_LogManager::GetInst();
          local_268._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_268,"FDS_LoginService::RequestJoinGameServer",0x27,Yes);
          UDS_LogManager::PrintLog(pUVar9,1,Warning,local_268.Ptr,0x6b,L"authData is invalid.");
          if ((void *)local_268._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_268._padding_);
          }
        }
        goto LAB_14bbdb9e7;
      }
    }
  }
  pTVar10 = MakeShared<FDS_ClientMessage_Twoway,1>(&local_2c0);
  local_320.Object = pTVar10->Object;
  local_320.SharedReferenceCount.ReferenceController =
       (pTVar10->SharedReferenceCount).ReferenceController;
  if (local_320.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_320.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_320.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2c0.SharedReferenceCount.ReferenceController);
  if (local_320.Object == (FDS_ClientMessage_Twoway *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar6 = local_320.Object;
  if (((local_320.Object)->clientMsg)._impl_._oneof_case_[0] != 0x48) {
    client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
              (&(local_320.Object)->clientMsg);
    (pFVar6->clientMsg)._impl_._oneof_case_[0] = 0x48;
    pAVar17 = (Arena *)((pFVar6->clientMsg)._padding_ & 0xfffffffffffffffe);
    if (((pFVar6->clientMsg)._padding_ & 1) != 0) {
      pAVar17 = (Arena *)(pAVar17->impl_).tag_and_id_;
    }
    pMVar11 = google::protobuf::Arena::DefaultConstruct<client_msg_twoway::JoinGameServerRequest>
                        (pAVar17);
    (pFVar6->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar11;
  }
  pMVar11 = (pFVar6->clientMsg)._impl_.ClientMessageTwoway_.pingreq_;
  if (pMVar11 != (Message *)0x0) {
    if (1 < (this->SessionUID).Data.ArrayNum) {
      *(uint *)(pMVar11 + 1) = *(uint *)(pMVar11 + 1) | 4;
      pvVar12 = *(void **)(pMVar11 + 4);
      if (pvVar12 == (void *)0x0) {
        pAVar17 = (Arena *)(*(ulonglong *)&pMVar11->field_0x8 & 0xfffffffffffffffe);
        if ((pMVar11->field_0x8 & 1) != 0) {
          pAVar17 = (Arena *)(pAVar17->impl_).tag_and_id_;
        }
        pvVar12 = google::protobuf::Arena::DefaultConstruct<UniqueId>(pAVar17);
        *(void **)(pMVar11 + 4) = pvVar12;
      }
      *(uint *)((longlong)pvVar12 + 0x10) = *(uint *)((longlong)pvVar12 + 0x10) | 1;
      pAVar17 = (Arena *)(*(ulonglong *)((longlong)pvVar12 + 8) & 0xfffffffffffffffe);
      if ((*(byte *)((longlong)pvVar12 + 8) & 1) != 0) {
        pAVar17 = (Arena *)(pAVar17->impl_).tag_and_id_;
      }
      pbVar13 = google::protobuf::internal::ArenaStringPtr::Mutable
                          ((ArenaStringPtr *)((longlong)pvVar12 + 0x18),pAVar17);
      pbVar14 = DS_Util::ConvertFStringToBytes
                          ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           &local_2b0,&this->SessionUID);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                (pbVar13,pbVar14);
      if (0xf < uStack_298) {
        pvVar5 = (void *)CONCAT71(local_2b0._1_7_,local_2b0._Buf[0]);
        uVar18 = uStack_298 + 1;
        pvVar12 = pvVar5;
        if (0xfff < uVar18) {
          pvVar12 = *(void **)((longlong)pvVar5 + -8);
          uVar18 = uStack_298 + 0x28;
          if (0x1f < (ulonglong)((longlong)pvVar5 + (-8 - (longlong)pvVar12))) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete(pvVar12,uVar18);
      }
      local_2a0 = ___xmm_000000000000000f0000000000000000;
      uStack_298 = _UNK_15076add8;
      local_2b0._Buf[0] = '\0';
    }
    *(long64 *)(pMVar11 + 5) = this->PlayerUID;
    *(uint *)(pMVar11 + 1) = *(uint *)(pMVar11 + 1) | 0x10;
    uVar1 = *(uint *)(pMVar11 + 1);
    *(int *)&pMVar11[5].field_0x8 = this->WorldId;
    *(uint *)(pMVar11 + 1) = uVar1 | 0x20;
    *(int *)&pMVar11[5].field_0xc = this->GameServerIndex;
    *(uint *)(pMVar11 + 1) = uVar1 | 0x60;
    if (1 < local_310.Data.ArrayNum) {
      pbVar13 = DS_Util::ConvertFStringToUTF8
                          ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           &local_290,&local_310);
      *(uint *)(pMVar11 + 1) = *(uint *)(pMVar11 + 1) | 2;
      pAVar17 = (Arena *)(*(ulonglong *)&pMVar11->field_0x8 & 0xfffffffffffffffe);
      if ((pMVar11->field_0x8 & 1) != 0) {
        pAVar17 = (Arena *)(pAVar17->impl_).tag_and_id_;
      }
      google::protobuf::internal::ArenaStringPtr::Set
                ((ArenaStringPtr *)&pMVar11[3].field_0x8,pbVar13,pAVar17);
      if (0xf < uStack_278) {
        pvVar5 = (void *)CONCAT71(local_290._1_7_,local_290._Buf[0]);
        uVar18 = uStack_278 + 1;
        pvVar12 = pvVar5;
        if (0xfff < uVar18) {
          pvVar12 = *(void **)((longlong)pvVar5 + -8);
          uVar18 = uStack_278 + 0x28;
          if (0x1f < (ulonglong)((longlong)pvVar5 + (-8 - (longlong)pvVar12))) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete(pvVar12,uVar18);
      }
      local_280 = ___xmm_000000000000000f0000000000000000;
      uStack_278 = _UNK_15076add8;
      local_290._Buf[0] = '\0';
    }
    bVar7 = UDS_GameInstance::GetIsCCSAIMode();
    if (bVar7) {
      pUVar15 = UDS_CCSAIManager::GetInst();
      if (pUVar15 == (UDS_CCSAIManager *)0x0) {
        pUVar9 = UDS_LogManager::GetInst();
        if (pUVar9 != (UDS_LogManager *)0x0) {
          pUVar9 = UDS_LogManager::GetInst();
          local_148._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_148,"FDS_LoginService::RequestJoinGameServer",0x27,Yes);
          UDS_LogManager::PrintLog
                    (pUVar9,1,Warning,local_148.Ptr,0x97,L"[CCSAI] ccsAIMng is nullptr.");
          if ((void *)local_148._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_148._padding_);
          }
        }
        bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_7771091955961823080>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_LoginService.cpp"
                           ,0x98,"false");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else {
        pFVar20 = (pUVar15->AIServerLoginInfo).DeckCharID.AllocatorInstance.Data;
        iVar2 = (pUVar15->AIServerLoginInfo).DeckCharID.ArrayNum;
        pFVar3 = pFVar20 + (longlong)iVar2 * 4;
        while( true ) {
          if ((pUVar15->AIServerLoginInfo).DeckCharID.ArrayNum != iVar2) {
            local_328[0] = 0;
            `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_328);
          }
          if (pFVar20 == pFVar3) break;
          google::protobuf::RepeatedField<int>::Add
                    ((RepeatedField<int> *)&pMVar11[1].field_0x8,*(int *)pFVar20);
          pFVar20 = pFVar20 + 4;
        }
        pMVar11[6].field_0x8 = (pUVar15->AIServerLoginInfo).bIsLeader;
        *(uint *)(pMVar11 + 1) = *(uint *)(pMVar11 + 1) | 0x200;
      }
    }
    else {
      bVar7 = UDS_GameInstance::GetIsDungeonPlayBuild();
      if (bVar7) {
        google::protobuf::RepeatedField<int>::Add((RepeatedField<int> *)&pMVar11[1].field_0x8,1);
        google::protobuf::RepeatedField<int>::Add((RepeatedField<int> *)&pMVar11[1].field_0x8,2);
        google::protobuf::RepeatedField<int>::Add((RepeatedField<int> *)&pMVar11[1].field_0x8,3);
        pMVar11[6].field_0x8 = 0;
        *(uint *)(pMVar11 + 1) = *(uint *)(pMVar11 + 1) | 0x200;
        EVar8 = FDS_AuthData::GetAccountAuthority(this);
        *(uint *)(pMVar11 + 6) = (uint)EVar8;
        *(uint *)(pMVar11 + 1) = *(uint *)(pMVar11 + 1) | 0x80;
      }
    }
    if (local_320.Object == (FDS_ClientMessage_Twoway *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar6 = local_320.Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(local_320.Object)->SuccessDel,(FWriteAccessScope *)&local_300);
    local_2e8 = &(pFVar6->SuccessDel).field_0x8;
    puVar16 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_2e8);
    if (puVar16 != (undefined8 *)0x0) {
      *puVar16 = &
                 ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar18 = FDelegateHandle::GenerateNewID();
      puVar16[2] = uVar18;
      *puVar16 = &
                 ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar16[3] = ResponseJoinGameServer;
    }
    if (local_300.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_300.Accessor,&local_300);
    }
    if (local_320.Object == (FDS_ClientMessage_Twoway *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar6 = local_320.Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(local_320.Object)->FailDel,(FWriteAccessScope *)&local_2e0);
    local_2c8 = &(pFVar6->FailDel).field_0x8;
    puVar16 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_2c8);
    if (puVar16 != (undefined8 *)0x0) {
      *puVar16 = &
                 ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar18 = FDelegateHandle::GenerateNewID();
      puVar16[2] = uVar18;
      *puVar16 = &
                 ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar16[3] = ProcessJoinGameServerError;
    }
    if (local_2e0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2e0.Accessor,&local_2e0);
    }
    this_00 = UDS_NetworkManager::GetInst();
    UDS_NetworkManager::SendTwoWayPacket(this_00,&local_320);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_320.SharedReferenceCount.ReferenceController);
LAB_14bbdb9e7:
  if (local_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_310.Data.AllocatorInstance.Data);
  }
  return;
}

// ResponseJoinGameServer @ 14bbdd650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_LoginService::ResponseJoinGameServer(ServerMessagesTwoway *param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  JoinGameServerResponseDefaultTypeInternal *pJVar3;
  UDS_LoginEvent *pUVar4;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pUVar2 = UDS_LogManager::GetInst();
  if (pUVar2 != (UDS_LogManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_LoginService::ResponseJoinGameServer",0x28,Yes);
    UDS_LogManager::PrintLog(pUVar2,1,Display,local_138.Ptr,0xae,L"JoinGameServer Success");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  if ((param_1->_impl_)._oneof_case_[0] == 0x48) {
    pJVar3 = (JoinGameServerResponseDefaultTypeInternal *)
             (param_1->_impl_).ServerMessageTwoway_.pongres_;
  }
  else {
    pJVar3 = &server_msg_twoway::_JoinGameServerResponse_default_instance_;
  }
  UDS_TimeUtilManager::SetGMTOffset
            ((double)((float)*(int *)&((Message *)((longlong)pJVar3 + 0x50))->field_0x8 *
                     __real_45610000));
  pUVar4 = UDS_LoginEvent::GetEvent();
  if (pUVar4 != (UDS_LoginEvent *)0x0) {
    bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar4->OnRequestInGameLevelLoad);
    if (bVar1) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar4->OnRequestInGameLevelLoad).Delegate);
    }
  }
  SendJoinContinent();
  return;
}

// SendCreateCharacter @ 14bbde540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FDS_LoginService::SendCreateCharacter
          (FString *param_1,EDS_WeaponType param_2,EDS_GenderType param_3,int param_4,float param_5,
          FString *param_6,FString *param_7)

{
  uchar *puVar1;
  FScriptContainerElement *pFVar2;
  ClientMessageUnion CVar3;
  void *pvVar4;
  void *pvVar5;
  TStringConversion<TStringConvert<wchar_t,char8_t>,128> *pTVar6;
  UDS_NetworkManager *this;
  wchar_t *pwVar7;
  Arena *pAVar8;
  wchar_t *pwVar9;
  undefined1 auStack_208 [32];
  EDS_WeaponType local_1e8;
  EDS_GenderType local_1e7;
  uchar *local_1d8;
  size_t local_1d0;
  undefined4 local_1c8;
  int local_1b8;
  ClientMessages local_1b0;
  FDS_AuthData *local_190;
  FString *local_188;
  TStringConversion<TStringConvert<wchar_t,char8_t>,128> local_178;
  TStringConversion<TStringConvert<wchar_t,char8_t>,128> local_d8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_208;
  local_188 = param_7;
  local_1e8 = param_2;
  local_1e7 = param_3;
  local_1b8 = param_4;
  local_190 = TDS_Singleton<FDS_AuthData>::GetInst();
  pwVar9 = L"";
  if ((param_1->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  StringCast<char8_t,128,wchar_t>(&local_d8,pwVar7);
  client_msg::ClientMessages::ClientMessages(&local_1b0,(Arena *)0x0);
  local_1b0._padding_ = (longlong)&___7ClientMessages_client_msg__6B_;
  if (local_1b0._impl_._oneof_case_[0] != 0x141) {
    client_msg::ClientMessages::clear_ClientMessage(&local_1b0);
    local_1b0._impl_._oneof_case_[0] = 0x141;
    if (((byte)local_1b0._padding_ & 1) == 0) {
      local_1b0._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::CreateCharacterRequest>
                     ((Arena *)(CONCAT71(local_1b0._padding_._1_7_,(byte)local_1b0._padding_) &
                               0xfffffffffffffffe));
    }
    else {
      local_1b0._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::CreateCharacterRequest>
                     (*(Arena **)
                       (CONCAT71(local_1b0._padding_._1_7_,(byte)local_1b0._padding_) &
                       0xfffffffffffffffe));
    }
  }
  CVar3 = local_1b0._impl_.ClientMessage_;
  *(uint *)(local_1b0._impl_.ClientMessage_.joincontinentreq_ + 1) =
       *(uint *)(local_1b0._impl_.ClientMessage_.joincontinentreq_ + 1) | 1;
  pAVar8 = (Arena *)(*(ulonglong *)&(local_1b0._impl_.ClientMessage_.joincontinentreq_)->field_0x8 &
                    0xfffffffffffffffe);
  if (((local_1b0._impl_.ClientMessage_.joincontinentreq_)->field_0x8 & 1) != 0) {
    pAVar8 = (Arena *)(pAVar8->impl_).tag_and_id_;
  }
  local_1d0 = strlen((char *)local_d8.Ptr);
  local_1d8 = local_d8.Ptr;
  google::protobuf::internal::ArenaStringPtr::Set
            ((ArenaStringPtr *)&CVar3.joincontinentreq_[1].field_0x8,
             (basic_string_view<char,std::char_traits<char>_> *)&local_1d8,pAVar8);
  *(long64 *)&CVar3.joincontinentreq_[2].field_0x8 = local_190->PlayerUID;
  *(uint *)(CVar3.joincontinentreq_ + 3) = (uint)local_1e8;
  *(uint *)(CVar3.joincontinentreq_ + 1) = *(uint *)(CVar3.joincontinentreq_ + 1) | 0xe;
  pvVar4 = *(void **)(CVar3.joincontinentreq_ + 2);
  if (pvVar4 == (void *)0x0) {
    pAVar8 = (Arena *)(*(ulonglong *)&(CVar3.joincontinentreq_)->field_0x8 & 0xfffffffffffffffe);
    if (((CVar3.joincontinentreq_)->field_0x8 & 1) != 0) {
      pAVar8 = (Arena *)(pAVar8->impl_).tag_and_id_;
    }
    pvVar4 = google::protobuf::Arena::DefaultConstruct<client_msg::CharacterCustomInfo>(pAVar8);
    *(void **)(CVar3.joincontinentreq_ + 2) = pvVar4;
  }
  *(uint *)((longlong)pvVar4 + 0x28) = (uint)local_1e7;
  *(float *)((longlong)pvVar4 + 0x34) = param_5;
  *(int *)((longlong)pvVar4 + 0x2c) = local_1b8;
  *(uint *)((longlong)pvVar4 + 0x10) = *(uint *)((longlong)pvVar4 + 0x10) | 0x2d;
  pvVar5 = *(void **)((longlong)pvVar4 + 0x18);
  if (pvVar5 == (void *)0x0) {
    pAVar8 = (Arena *)(*(ulonglong *)((longlong)pvVar4 + 8) & 0xfffffffffffffffe);
    if ((*(byte *)((longlong)pvVar4 + 8) & 1) != 0) {
      pAVar8 = (Arena *)(pAVar8->impl_).tag_and_id_;
    }
    pvVar5 = google::protobuf::Arena::DefaultConstruct<client_msg::CharacterCustomHead>(pAVar8);
    *(void **)((longlong)pvVar4 + 0x18) = pvVar5;
  }
  if ((param_6->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_6->Data).AllocatorInstance.Data;
  }
  pTVar6 = StringCast<char8_t,128,wchar_t>(&local_178,pwVar7);
  puVar1 = pTVar6->Ptr;
  *(uint *)((longlong)pvVar5 + 0x10) = *(uint *)((longlong)pvVar5 + 0x10) | 2;
  pAVar8 = (Arena *)(*(ulonglong *)((longlong)pvVar5 + 8) & 0xfffffffffffffffe);
  if ((*(byte *)((longlong)pvVar5 + 8) & 1) != 0) {
    pAVar8 = (Arena *)(pAVar8->impl_).tag_and_id_;
  }
  local_1d0 = strlen((char *)puVar1);
  local_1d8 = puVar1;
  google::protobuf::internal::ArenaStringPtr::Set
            ((ArenaStringPtr *)((longlong)pvVar5 + 0x20),
             (basic_string_view<char,std::char_traits<char>_> *)&local_1d8,pAVar8);
  if ((void *)local_178._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_178._padding_);
  }
  if ((local_188->Data).ArrayNum != 0) {
    pwVar9 = (wchar_t *)(local_188->Data).AllocatorInstance.Data;
  }
  pTVar6 = StringCast<char8_t,128,wchar_t>(&local_178,pwVar9);
  puVar1 = pTVar6->Ptr;
  *(uint *)((longlong)pvVar5 + 0x10) = *(uint *)((longlong)pvVar5 + 0x10) | 1;
  pAVar8 = (Arena *)(*(ulonglong *)((longlong)pvVar5 + 8) & 0xfffffffffffffffe);
  if ((*(byte *)((longlong)pvVar5 + 8) & 1) != 0) {
    pAVar8 = (Arena *)(pAVar8->impl_).tag_and_id_;
  }
  local_1d0 = strlen((char *)puVar1);
  local_1d8 = puVar1;
  google::protobuf::internal::ArenaStringPtr::Set
            ((ArenaStringPtr *)((longlong)pvVar5 + 0x18),
             (basic_string_view<char,std::char_traits<char>_> *)&local_1d8,pAVar8);
  if ((void *)local_178._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_178._padding_);
  }
  *(undefined8 *)((longlong)pvVar5 + 0x28) = 0;
  *(uint *)((longlong)pvVar5 + 0x10) = *(uint *)((longlong)pvVar5 + 0x10) | 0xc;
  *(uint *)((longlong)pvVar4 + 0x10) = *(uint *)((longlong)pvVar4 + 0x10) | 2;
  pvVar5 = *(void **)((longlong)pvVar4 + 0x20);
  if (pvVar5 == (void *)0x0) {
    pAVar8 = (Arena *)(*(ulonglong *)((longlong)pvVar4 + 8) & 0xfffffffffffffffe);
    if ((*(byte *)((longlong)pvVar4 + 8) & 1) != 0) {
      pAVar8 = (Arena *)(pAVar8->impl_).tag_and_id_;
    }
    pvVar5 = google::protobuf::Arena::DefaultConstruct<client_msg::CharacterCustomBody>(pAVar8);
    *(void **)((longlong)pvVar4 + 0x20) = pvVar5;
  }
  *(undefined8 *)((longlong)pvVar5 + 0x20) = 0;
  *(undefined8 *)((longlong)pvVar5 + 0x28) = 0;
  *(uint *)((longlong)pvVar5 + 0x10) = *(uint *)((longlong)pvVar5 + 0x10) | 0x1e;
  this = UDS_NetworkManager::GetInst();
  if (this != (UDS_NetworkManager *)0x0) {
    UDS_NetworkManager::SendPacket(this,&local_1b0);
    local_1d8 = (uchar *)0x0;
    local_1d0 = 0;
    local_1c8 = 0;
    UDS_WindowManager::OpenCommonCenterLoading
              ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)&local_1d8);
  }
  client_msg::ClientMessages::~ClientMessages(&local_1b0);
  if ((void *)local_d8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_d8._padding_);
  }
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// SendJoinContinent @ 14bbdf2d0

void __cdecl FDS_LoginService::SendJoinContinent(void)

{
  ClientMessageUnion CVar1;
  bool bVar2;
  ADS_AI_GYM_GameMode *this;
  UDS_NetworkManager *this_00;
  FWeakObjectPtr local_res8 [4];
  FString local_38;
  ClientMessages local_28;
  
  client_msg::ClientMessages::ClientMessages(&local_28,(Arena *)0x0);
  local_28._padding_ = (longlong)&___7ClientMessages_client_msg__6B_;
  if (local_28._impl_._oneof_case_[0] != 2) {
    client_msg::ClientMessages::clear_ClientMessage(&local_28);
    local_28._impl_._oneof_case_[0] = 2;
    if (((byte)local_28._padding_ & 1) == 0) {
      local_28._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::JoinContinentRequest>
                     ((Arena *)(CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                               0xfffffffffffffffe));
    }
    else {
      local_28._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::JoinContinentRequest>
                     (*(Arena **)
                       (CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                       0xfffffffffffffffe));
    }
  }
  CVar1 = local_28._impl_.ClientMessage_;
  if (local_28._impl_.ClientMessage_.joincontinentreq_ != (Message *)0x0) {
    bVar2 = UDS_GameInstance::GetIsAIGymMode();
    if (bVar2) {
      *(undefined4 *)&CVar1.joincontinentreq_[1].field_0x8 = 5;
      *(uint *)(CVar1.joincontinentreq_ + 1) = *(uint *)(CVar1.joincontinentreq_ + 1) | 1;
      ADS_AI_GYM_GameMode::GetInst();
      bVar2 = TWeakObjectPtr<ADS_AI_GYM_GameMode,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<ADS_AI_GYM_GameMode,FWeakObjectPtr> *)local_res8,
                         (void *)0x0);
      if (!bVar2) {
        this = (ADS_AI_GYM_GameMode *)FWeakObjectPtr::Get(local_res8);
        ::FString::PrintfImpl(&local_38,L"LoginService::SendJoinContinent() [IslandID] 5");
        ADS_AI_GYM_GameMode::AppendDebugString(this,&local_38);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      bVar2 = UDS_GameInstance::GetIsCCSAIMode();
      if (bVar2) {
        *(undefined4 *)&CVar1.joincontinentreq_[1].field_0x8 = 6;
      }
      else {
        bVar2 = UDS_GameInstance::GetIsDungeonPlayBuild();
        if (bVar2) {
          *(undefined4 *)&CVar1.joincontinentreq_[1].field_0x8 = 6;
        }
        else {
          *(undefined4 *)&CVar1.joincontinentreq_[1].field_0x8 = 1;
        }
      }
      *(uint *)(CVar1.joincontinentreq_ + 1) = *(uint *)(CVar1.joincontinentreq_ + 1) | 1;
    }
    this_00 = UDS_NetworkManager::GetInst();
    if (this_00 != (UDS_NetworkManager *)0x0) {
      UDS_NetworkManager::SendPacket(this_00,&local_28);
    }
  }
  client_msg::ClientMessages::~ClientMessages(&local_28);
  return;
}

// UpdateDbWorkItem @ 14bbe3c10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_LoginService::UpdateDbWorkItem(DbWorkItem *param_1)

{
  int iVar1;
  SqlPlayerSkillTable *pSVar2;
  ulonglong uVar3;
  Message *pMVar4;
  longlong lVar5;
  longlong *plVar6;
  SqlPlayerDungeonRecordTable *pSVar7;
  SqlRingCommandTable *pSVar8;
  SqlShopBuyLimitTable *pSVar9;
  SqlAchievementGroupTable *pSVar10;
  SqlNpcRelationTable *pSVar11;
  SqlMountInvenInfoTable *pSVar12;
  SqlMountListTable *pSVar13;
  code *pcVar14;
  DailyQuestInfo DVar15;
  bool bVar16;
  bool bVar17;
  char cVar18;
  uint uVar19;
  UDS_DataBase *this;
  UDS_PlayerSkillData *this_00;
  UDS_CustomizeData *this_01;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar20;
  UDS_PlayerData *pUVar21;
  UDS_PKDataSet *this_02;
  UDS_ItemDataSet *this_03;
  UDS_QuickSlotDeckDataSet *this_04;
  UDS_MoneyDataSet *this_05;
  UDS_DailyQuestManager *this_06;
  Message *pMVar22;
  undefined1 *puVar23;
  UDS_QuestManager *pUVar24;
  UDS_ActivateWarpDeviceData *this_07;
  UDS_WaitCompleteDataSet *this_08;
  UObject *pUVar25;
  UDS_SkillDataSet *pUVar26;
  UDS_CharInfoData *this_09;
  UDS_NormalAttackAbilityData *this_10;
  ulong64 uVar27;
  UDS_TicketDataSet *this_11;
  FDateTime FVar28;
  UDS_DungeonRecordDataSet *this_12;
  UDS_RingCommandDeckDataSet *pUVar29;
  UDS_ShopManager *this_13;
  UDS_LogManager *pUVar30;
  UDS_AchievementDataSet *this_14;
  UDS_NpcRelationData *this_15;
  UDS_MountDataSet *pUVar31;
  FWeakObjectPtr *this_16;
  uint uVar32;
  longlong lVar33;
  undefined1 auStackY_1048 [32];
  FWeakObjectPtr local_1000;
  int local_ff8;
  int local_ff4 [3];
  FWeakObjectPtr local_fe8;
  FWeakObjectPtr local_fe0;
  FWeakObjectPtr local_fd8;
  FWeakObjectPtr local_fd0;
  FWeakObjectPtr local_fc8;
  FWeakObjectPtr local_fc0;
  FWeakObjectPtr local_fb8;
  FWeakObjectPtr local_fb0;
  FWeakObjectPtr local_fa8;
  FWeakObjectPtr local_fa0;
  FWeakObjectPtr local_f98;
  FWeakObjectPtr local_f90;
  FWeakObjectPtr local_f88;
  FWeakObjectPtr local_f80;
  FWeakObjectPtr local_f78;
  FWeakObjectPtr local_f70;
  FWeakObjectPtr local_f68;
  FWeakObjectPtr local_f60;
  FWeakObjectPtr local_f58;
  FWeakObjectPtr local_f50;
  FWeakObjectPtr local_f48;
  FWeakObjectPtr local_f40;
  ulong64 local_f38 [2];
  SqlWeaponSkillSlotTable local_f28;
  FDestructionSentinel local_ee8;
  undefined1 local_ed0 [8];
  undefined1 local_ec8 [52];
  int local_e94;
  int local_e90;
  SqlPvpTable local_e88;
  SqlCombatPowerTable local_e60;
  SqlCharacterSkinTable local_e38;
  SqlCharacterLevelTable local_e10;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_dd8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_db8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_c98;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_b78;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_a58;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_938;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_818;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_6f8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_5d8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  uVar27 = UDS_PlayerData::MainPlayerEntityID;
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1048;
  switch((param_1->_impl_)._oneof_case_[0]) {
  case 3:
    ds_game::SqlCharacterLevelTable::SqlCharacterLevelTable
              (&local_e10,(Arena *)0x0,
               (SqlCharacterLevelTable *)(param_1->_impl_).Item_.characterlevel_);
    local_e10._padding_ = (longlong)&___7SqlCharacterLevelTable_ds_game__6B_;
    UpdateMainCharData(param_1,1);
    ds_game::SqlCharacterLevelTable::~SqlCharacterLevelTable(&local_e10);
    break;
  case 4:
  case 7:
  case 0x59:
  case 0x5a:
  case 0x6a:
  case 0x6e:
    UDS_PlayerData::GetData((ulong64)&local_fb8,UDS_PlayerData::MainPlayerEntityID,false);
    bVar16 = FWeakObjectPtr::IsValid(&local_fb8);
    if (bVar16) {
      this_16 = &local_fb8;
LAB_14bbe3ee2:
      pUVar21 = (UDS_PlayerData *)FWeakObjectPtr::Get(this_16);
      UDS_PlayerData::UpdateData(pUVar21,param_1);
    }
    break;
  case 5:
  case 8:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x37:
  case 0x39:
  case 0x3b:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x5d:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
    break;
  case 6:
    uVar3 = *(ulonglong *)((param_1->_impl_).Item_.characterlevel_ + 3);
    UDS_CustomizeData::GetData((ulong64)&local_fd0,UDS_PlayerData::MainPlayerEntityID,false);
    bVar16 = TWeakObjectPtr<UDS_CustomizeData,FWeakObjectPtr>::UEOpEquals
                       ((TWeakObjectPtr<UDS_CustomizeData,FWeakObjectPtr> *)&local_fd0,(void *)0x0);
    if (!bVar16) {
      this_01 = (UDS_CustomizeData *)FWeakObjectPtr::Get(&local_fd0);
      pbVar20 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                basic_string<char,std::char_traits<char>,std::allocator<char>_>
                          (&local_dd8,
                           (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           (uVar3 & 0xfffffffffffffffc));
      UDS_CustomizeData::SetCustomInfo(this_01,pbVar20);
    }
    UDS_PlayerData::GetData((ulong64)&local_fc8,UDS_PlayerData::MainPlayerEntityID,false);
    bVar16 = FWeakObjectPtr::IsValid(&local_fc8);
    if (bVar16) {
      this_16 = &local_fc8;
      goto LAB_14bbe3ee2;
    }
    break;
  case 9:
    TDS_DataSetGetter<UDS_MoneyDataSet>::Get((ulong64)&local_1000);
    bVar16 = TWeakObjectPtr<UDS_MoneyDataSet,FWeakObjectPtr>::UEOpEquals
                       ((TWeakObjectPtr<UDS_MoneyDataSet,FWeakObjectPtr> *)&local_1000,(void *)0x0);
    if (bVar16) {
      pUVar30 = UDS_LogManager::GetInst();
      if (pUVar30 != (UDS_LogManager *)0x0) {
        pUVar30 = UDS_LogManager::GetInst();
        local_b78._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_b78,"FDS_LoginService::UpdateDbWorkItem",0x22,Yes);
        UDS_LogManager::PrintLog(pUVar30,1,Warning,local_b78.Ptr,0x2cd,L"moneyDataSet is invalid");
        if ((void *)local_b78._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_b78._padding_);
        }
      }
    }
    else {
      this_05 = (UDS_MoneyDataSet *)FWeakObjectPtr::Get(&local_1000);
      UDS_MoneyDataSet::UpdateData(this_05,param_1);
    }
    break;
  case 10:
  case 0xb:
  case 0xc:
  case 0x52:
    TDS_DataSetGetter<UDS_ItemDataSet>::Get((ulong64)&local_fa8);
    bVar16 = TWeakObjectPtr<UDS_ItemDataSet,FWeakObjectPtr>::UEOpEquals
                       ((TWeakObjectPtr<UDS_ItemDataSet,FWeakObjectPtr> *)&local_fa8,(void *)0x0);
    if (bVar16) {
      pUVar30 = UDS_LogManager::GetInst();
      if (pUVar30 != (UDS_LogManager *)0x0) {
        pUVar30 = UDS_LogManager::GetInst();
        local_db8._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_db8,"FDS_LoginService::UpdateDbWorkItem",0x22,Yes);
        UDS_LogManager::PrintLog(pUVar30,1,Warning,local_db8.Ptr,0x2b3,L"itemDataSet is invalid");
        if ((void *)local_db8._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_db8._padding_);
        }
      }
    }
    else {
      this_03 = (UDS_ItemDataSet *)FWeakObjectPtr::Get(&local_fa8);
      UDS_ItemDataSet::UpdateData(this_03,param_1);
    }
    break;
  case 0x10:
    pSVar2 = (SqlPlayerSkillTable *)(param_1->_impl_).Item_.characterlevel_;
    UDS_PlayerSkillData::GetMainPlayerData((char)&stack0x00000050 - 0x38);
    bVar16 = FWeakObjectPtr::IsValid(&local_fe8);
    if (bVar16) {
      if ((param_1->_impl_).dirty_flag_ == 5) {
        this = (UDS_DataBase *)FWeakObjectPtr::Get(&local_fe8);
        *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
        UDS_DataBase::SetIsDirty(this,true);
      }
      else {
        this_00 = (UDS_PlayerSkillData *)FWeakObjectPtr::Get(&local_fe8);
        UDS_PlayerSkillData::SetPlayerSkillTable(this_00,pSVar2);
      }
    }
    else {
      bVar16 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_7771091955961822680>,false,
                          "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_LoginService.cpp"
                          ,0x228,"false");
      if (bVar16) {
code_r0x00014bbe4428:
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
    }
    break;
  case 0x11:
    ds_game::SqlWeaponSkillSlotTable::SqlWeaponSkillSlotTable
              (&local_f28,(Arena *)0x0,
               (SqlWeaponSkillSlotTable *)(param_1->_impl_).Item_.characterlevel_);
    local_f28._padding_ = (longlong)&___7SqlWeaponSkillSlotTable_ds_game__6B_;
    UDS_PlayerData::GetMainPlayerCurrentEntityID();
    TDS_DataSetGetter<UDS_SkillDataSet>::Get((ulong64)&local_fd8);
    bVar16 = FWeakObjectPtr::IsValid(&local_fd8);
    if (bVar16) {
      UDS_PlayerData::GetMainPlayerCurrentEntityID();
      UDS_CharInfoData::GetData((ulong64)&local_fe0);
      bVar16 = FWeakObjectPtr::IsValid(&local_fe0);
      if (bVar16) {
        pUVar25 = FWeakObjectPtr::Get(&local_fe0);
        if (pUVar25[0x17].field_0x10 != (EDS_WeaponType)local_f28._impl_.weapon_base_id_) {
          pUVar26 = (UDS_SkillDataSet *)FWeakObjectPtr::Get(&local_fd8);
          UDS_SkillDataSet::InitSkillDataByWeaponType
                    (pUVar26,(EDS_WeaponType)local_f28._impl_.weapon_base_id_);
          this_09 = (UDS_CharInfoData *)FWeakObjectPtr::Get(&local_fe0);
          UDS_CharInfoData::SetWeaponType(this_09,(EDS_WeaponType)local_f28._impl_.weapon_base_id_);
          local_f38[0] = UDS_PlayerData::GetMainPlayerCurrentEntityID();
          UDS_AbilityDataSet::GetAbilityData<UDS_NormalAttackAbilityData>
                    ((ulong64 *)&local_f88,(EDS_AbilityTagType *)local_f38);
          bVar16 = FWeakObjectPtr::IsValid(&local_f88);
          if (bVar16) {
            this_10 = (UDS_NormalAttackAbilityData *)FWeakObjectPtr::Get(&local_f88);
            UDS_NormalAttackAbilityData::InitNormalAttackData(this_10);
          }
        }
        pUVar26 = (UDS_SkillDataSet *)FWeakObjectPtr::Get(&local_fd8);
        UDS_SkillDataSet::UpdateSkillDeckInfo
                  (pUVar26,local_f28._impl_.slot_index_ + 1,local_f28._impl_.selected_skill_id_,
                   local_f28._impl_.skill_level_);
        uVar27 = UDS_PlayerData::GetMainPlayerCurrentEntityID();
        UDS_SkillData::GetData
                  ((ulong64)&local_f80,uVar27,SUB41(local_f28._impl_.selected_skill_id_,0));
        bVar16 = FWeakObjectPtr::IsValid(&local_f80);
        if (bVar16) {
          pUVar25 = FWeakObjectPtr::Get(&local_f80);
          *(long64 *)(pUVar25 + 4) = local_f28._impl_.ascend_wait_complete_id_;
          ds_game::SqlWeaponSkillSlotTable::~SqlWeaponSkillSlotTable(&local_f28);
        }
        else {
          pUVar30 = UDS_LogManager::GetInst();
          if (pUVar30 != (UDS_LogManager *)0x0) {
            pUVar30 = UDS_LogManager::GetInst();
            UDS_PlayerData::GetMainPlayerCurrentEntityID();
            local_818._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_818,"FDS_LoginService::UpdateDbWorkItem",0x22,Yes);
            UDS_LogManager::PrintLog
                      (pUVar30,1,Warning,local_818.Ptr,0x366,
                       L"skillData is Invalid. EntityID : %llu, SkillID : %d");
            if ((void *)local_818._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_818._padding_);
            }
          }
          bVar16 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_7771091955961822361>,false,
                              "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_LoginService.cpp"
                              ,0x367,"false");
          if (bVar16) goto code_r0x00014bbe47f5;
          ds_game::SqlWeaponSkillSlotTable::~SqlWeaponSkillSlotTable(&local_f28);
        }
      }
      else {
        pUVar30 = UDS_LogManager::GetInst();
        if (pUVar30 != (UDS_LogManager *)0x0) {
          pUVar30 = UDS_LogManager::GetInst();
          UDS_PlayerData::GetMainPlayerCurrentEntityID();
          local_938._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_938,"FDS_LoginService::UpdateDbWorkItem",0x22,Yes);
          UDS_LogManager::PrintLog
                    (pUVar30,1,Warning,local_938.Ptr,0x34c,
                     L"charInfoData is Invalid. EntityID : %llu");
          if ((void *)local_938._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_938._padding_);
          }
        }
        bVar16 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_7771091955961822387>,false,
                            "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_LoginService.cpp"
                            ,0x34d,"false");
        if (bVar16) goto code_r0x00014bbe47f5;
        ds_game::SqlWeaponSkillSlotTable::~SqlWeaponSkillSlotTable(&local_f28);
      }
    }
    else {
      pUVar30 = UDS_LogManager::GetInst();
      if (pUVar30 != (UDS_LogManager *)0x0) {
        pUVar30 = UDS_LogManager::GetInst();
        UDS_PlayerData::GetMainPlayerCurrentEntityID();
        local_a58._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_a58,"FDS_LoginService::UpdateDbWorkItem",0x22,Yes);
        UDS_LogManager::PrintLog
                  (pUVar30,1,Warning,local_a58.Ptr,0x344,L"skillDataSet is Invalid. EntityID : %llu"
                  );
        if ((void *)local_a58._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_a58._padding_);
        }
      }
      bVar16 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_7771091955961822395>,false,
                          "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_LoginService.cpp"
                          ,0x345,"false");
      if (bVar16) {
code_r0x00014bbe47f5:
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      ds_game::SqlWeaponSkillSlotTable::~SqlWeaponSkillSlotTable(&local_f28);
    }
    break;
  case 0x22:
    ds_game::SqlCharacterSkinTable::SqlCharacterSkinTable
              (&local_e38,(Arena *)0x0,
               (SqlCharacterSkinTable *)(param_1->_impl_).Item_.characterlevel_);
    local_e38._padding_ = (longlong)&___7SqlCharacterSkinTable_ds_game__6B_;
    UpdateMainCharData(param_1,1);
    ds_game::SqlCharacterSkinTable::~SqlCharacterSkinTable(&local_e38);
    break;
  case 0x29:
  case 0x69:
    pUVar24 = UDS_QuestManager::GetInst();
    if (pUVar24 != (UDS_QuestManager *)0x0) {
      UDS_QuestManager::UpdateQuestsCompleted(pUVar24,param_1);
    }
    break;
  case 0x35:
    TDS_DataSetGetter<UDS_ActivateWarpDeviceDataSet>::Get((ulong64)local_ed0);
    UDS_ActivateWarpDeviceData::GetData((ulong64)&local_f98,uVar27,false);
    bVar16 = FWeakObjectPtr::IsValid(&local_f98);
    if (bVar16) {
      this_07 = (UDS_ActivateWarpDeviceData *)FWeakObjectPtr::Get(&local_f98);
      UDS_ActivateWarpDeviceData::UpdateData(this_07,param_1);
    }
    else {
      bVar16 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_7771091955961822425>,false,
                          "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_LoginService.cpp"
                          ,0x327,"warpDeviceData.IsValid()");
      if (bVar16) goto code_r0x00014bbe4428;
    }
    break;
  case 0x36:
    UDS_TimeCoolDownManager::ReceiveSqlCoolTimeTable
              ((SqlCoolTimeTable *)(param_1->_impl_).Item_.characterlevel_);
    break;
  case 0x38:
    ds_game::SqlPvpTable::SqlPvpTable
              (&local_e88,(Arena *)0x0,(SqlPvpTable *)(param_1->_impl_).Item_.characterlevel_);
    local_e88._padding_ = (longlong)&___7SqlPvpTable_ds_game__6B_;
    TDS_DataSetGetter<UDS_PKDataSet>::Get((ulong64)&local_fb0);
    bVar16 = FWeakObjectPtr::IsValid(&local_fb0);
    if (bVar16) {
      this_02 = (UDS_PKDataSet *)FWeakObjectPtr::Get(&local_fb0);
      UDS_PKDataSet::SetSqlPvpTable(this_02,&local_e88);
    }
    ds_game::SqlPvpTable::~SqlPvpTable(&local_e88);
    break;
  case 0x3a:
    ds_game::SqlCombatPowerTable::SqlCombatPowerTable
              (&local_e60,(Arena *)0x0,
               (SqlCombatPowerTable *)(param_1->_impl_).Item_.characterlevel_);
    local_e60._padding_ = (longlong)&___7SqlCombatPowerTable_ds_game__6B_;
    UpdateMainCharData(param_1,1);
    ds_game::SqlCombatPowerTable::~SqlCombatPowerTable(&local_e60);
    break;
  case 0x3c:
    TDS_DataSetGetter<UDS_WaitCompleteDataSet>::Get((ulong64)&local_f90);
    bVar16 = FWeakObjectPtr::IsValid(&local_f90);
    if (bVar16) {
      this_08 = (UDS_WaitCompleteDataSet *)FWeakObjectPtr::Get(&local_f90);
      UDS_WaitCompleteDataSet::UpdateWaitComplete(this_08,param_1);
    }
    break;
  case 0x3d:
    pSVar9 = (SqlShopBuyLimitTable *)(param_1->_impl_).Item_.characterlevel_;
    this_13 = UDS_ShopManager::GetInst();
    if (this_13 == (UDS_ShopManager *)0x0) {
      pUVar30 = UDS_LogManager::GetInst();
      if (pUVar30 != (UDS_LogManager *)0x0) {
        pUVar30 = UDS_LogManager::GetInst();
        local_278._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_278,"FDS_LoginService::UpdateDbWorkItem",0x22,Yes);
        UDS_LogManager::PrintLog(pUVar30,1,Warning,local_278.Ptr,0x3b5,L"shopManager is nullptr.");
        if ((void *)local_278._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_278._padding_);
        }
      }
    }
    else {
      UDS_ShopManager::UpdateNpcShopBuyLimitTable(this_13,pSVar9);
    }
    break;
  case 0x47:
    TDS_DataSetGetter<UDS_QuickSlotDeckDataSet>::Get((ulong64)&local_fa0);
    bVar16 = TWeakObjectPtr<UDS_QuickSlotDeckDataSet,FWeakObjectPtr>::UEOpEquals
                       ((TWeakObjectPtr<UDS_QuickSlotDeckDataSet,FWeakObjectPtr> *)&local_fa0,
                        (void *)0x0);
    if (bVar16) {
      pUVar30 = UDS_LogManager::GetInst();
      if (pUVar30 != (UDS_LogManager *)0x0) {
        pUVar30 = UDS_LogManager::GetInst();
        local_c98._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_c98,"FDS_LoginService::UpdateDbWorkItem",0x22,Yes);
        UDS_LogManager::PrintLog
                  (pUVar30,1,Warning,local_c98.Ptr,0x2c0,L"UDS_QuickSlotDeckDataSet is invalid");
        if ((void *)local_c98._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_c98._padding_);
        }
      }
    }
    else {
      this_04 = (UDS_QuickSlotDeckDataSet *)FWeakObjectPtr::Get(&local_fa0);
      if ((param_1->_impl_)._oneof_case_[0] == 0x47) {
        UDS_QuickSlotDeckDataSet::UpdateQuickSlotData
                  (this_04,(SqlQuickSlotTable *)(param_1->_impl_).Item_.characterlevel_);
      }
      else {
        UDS_QuickSlotDeckDataSet::UpdateQuickSlotData
                  (this_04,&ds_game::_SqlQuickSlotTable_default_instance_._instance);
      }
    }
    break;
  case 0x51:
    ds_game::SqlPlayerActionPointTable::SqlPlayerActionPointTable
              ((SqlPlayerActionPointTable *)(local_ec8 + 8),(Arena *)0x0,
               (SqlPlayerActionPointTable *)(param_1->_impl_).Item_.characterlevel_);
    local_ec8._8_8_ = &___7SqlPlayerActionPointTable_ds_game__6B_;
    TDS_DataSetGetter<UDS_TicketDataSet>::Get((ulong64)&local_f78);
    bVar16 = TWeakObjectPtr<UDS_TicketDataSet,FWeakObjectPtr>::UEOpEquals
                       ((TWeakObjectPtr<UDS_TicketDataSet,FWeakObjectPtr> *)&local_f78,(void *)0x0);
    if (bVar16) {
      pUVar30 = UDS_LogManager::GetInst();
      if (pUVar30 != (UDS_LogManager *)0x0) {
        pUVar30 = UDS_LogManager::GetInst();
        local_6f8._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_6f8,"FDS_LoginService::UpdateDbWorkItem",0x22,Yes);
        UDS_LogManager::PrintLog(pUVar30,1,Warning,local_6f8.Ptr,0x376,L"ticketDataSet is nullptr.")
        ;
        if ((void *)local_6f8._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_6f8._padding_);
        }
      }
      ds_game::SqlPlayerActionPointTable::~SqlPlayerActionPointTable
                ((SqlPlayerActionPointTable *)(local_ec8 + 8));
    }
    else {
      this_11 = (UDS_TicketDataSet *)FWeakObjectPtr::Get(&local_f78);
      FVar28 = DS_Util::ConvertTimestampToDateTime((Timestamp *)local_ec8);
      local_ff8 = local_e90;
      local_ff4[0] = local_e94;
      local_ff4[1] = 1;
      UDS_TicketDataSet::UpdateData
                (this_11,local_ff4 + 1,local_ff4,&local_ff8,(FDateTime *)FVar28.Ticks);
      ds_game::SqlPlayerActionPointTable::~SqlPlayerActionPointTable
                ((SqlPlayerActionPointTable *)(local_ec8 + 8));
    }
    break;
  case 0x53:
    pUVar24 = UDS_QuestManager::GetInst();
    if (pUVar24 != (UDS_QuestManager *)0x0) {
      UDS_QuestManager::UpdateQuestTracking(pUVar24,param_1);
    }
    break;
  case 0x54:
    pSVar7 = (SqlPlayerDungeonRecordTable *)(param_1->_impl_).Item_.characterlevel_;
    TDS_DataSetGetter<UDS_DungeonRecordDataSet>::Get((ulong64)&local_f70);
    bVar16 = TWeakObjectPtr<UDS_DungeonRecordDataSet,FWeakObjectPtr>::UEOpEquals
                       ((TWeakObjectPtr<UDS_DungeonRecordDataSet,FWeakObjectPtr> *)&local_f70,
                        (void *)0x0);
    if (bVar16) {
      pUVar30 = UDS_LogManager::GetInst();
      if (pUVar30 != (UDS_LogManager *)0x0) {
        pUVar30 = UDS_LogManager::GetInst();
        local_5d8._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_5d8,"FDS_LoginService::UpdateDbWorkItem",0x22,Yes);
        UDS_LogManager::PrintLog
                  (pUVar30,1,Warning,local_5d8.Ptr,0x386,L"dungeonRecordDataSet is nullptr.");
        if ((void *)local_5d8._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_5d8._padding_);
        }
      }
    }
    else {
      this_12 = (UDS_DungeonRecordDataSet *)FWeakObjectPtr::Get(&local_f70);
      UDS_DungeonRecordDataSet::SetData(this_12,pSVar7);
    }
    break;
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x60:
  case 0x61:
  case 0x62:
  case 0x68:
    pUVar24 = UDS_QuestManager::GetInst();
    if (pUVar24 != (UDS_QuestManager *)0x0) {
      UDS_QuestManager::UpdateQuestsInProgress(pUVar24,param_1);
    }
    break;
  case 0x58:
    pMVar4 = (param_1->_impl_).Item_.characterlevel_;
    if ((*(ulonglong *)&pMVar4[1].field_0x8 & 4) == 0) {
      uVar32 = (uint)*(ulonglong *)&pMVar4[1].field_0x8 & 3;
    }
    else {
      uVar32 = *(uint *)(pMVar4 + 2);
    }
    this_06 = UDS_DailyQuestManager::GetInst();
    if (((uVar32 != 0) && (*(int *)&pMVar4[4].field_0xc != 0)) &&
       (this_06 != (UDS_DailyQuestManager *)0x0)) {
      (**(code **)(this_06->_padding_ + 0x2d0))(this_06);
      if (0 < (int)uVar32) {
        lVar33 = 0;
        do {
          if ((*(ulonglong *)&pMVar4[1].field_0x8 & 4) == 0) {
            pMVar22 = pMVar4 + 2;
          }
          else {
            pMVar22 = (Message *)(*(ulonglong *)&pMVar4[1].field_0x8 & 0xfffffffffffffff8);
          }
          local_1000.ObjectIndex = *(int *)(&pMVar22->field_0x0 + lVar33 * 4);
          if ((*(ulonglong *)(pMVar4 + 3) & 4) == 0) {
            puVar23 = &pMVar4[3].field_0x8;
          }
          else {
            puVar23 = (undefined1 *)(*(ulonglong *)(pMVar4 + 3) & 0xfffffffffffffff8);
          }
          local_1000.ObjectSerialNumber =
               CONCAT31(local_1000.ObjectSerialNumber._1_3_,puVar23[lVar33]);
          DVar15._4_4_ = local_1000.ObjectSerialNumber;
          DVar15.QuestID = local_1000.ObjectIndex;
          UDS_DailyQuestManager::AddSuggestDailyQuestMap
                    (this_06,*(int *)&pMVar4[4].field_0xc,DVar15);
          lVar33 = lVar33 + 1;
        } while (lVar33 < (int)uVar32);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this_06->OnUpdateDailyQuestDataDelegate,(FWriteAccessScope *)&local_ee8);
      puVar23 = &(this_06->OnUpdateDailyQuestDataDelegate).field_0x1c;
      *(int *)puVar23 = *(int *)puVar23 + 1;
      bVar16 = false;
      uVar32 = *(int *)&(this_06->OnUpdateDailyQuestDataDelegate).field_0x10 - 1;
      if (-1 < (int)uVar32) {
        lVar33 = (longlong)(int)uVar32 << 4;
        bVar16 = false;
        do {
          uVar19 = 0;
          if ((int)uVar32 < *(int *)&(this_06->OnUpdateDailyQuestDataDelegate).field_0x10) {
            uVar19 = ~uVar32 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          lVar5 = *(longlong *)&(this_06->OnUpdateDailyQuestDataDelegate).field_0x8;
          if (((*(int *)(lVar5 + 8 + lVar33) == 0) ||
              (plVar6 = *(longlong **)(lVar5 + lVar33), plVar6 == (longlong *)0x0)) ||
             (cVar18 = (**(code **)(*plVar6 + 0x68))(), cVar18 == '\0')) {
            bVar16 = true;
          }
          lVar33 = lVar33 + -0x10;
          uVar32 = uVar32 - 1;
        } while (-1 < (int)uVar32);
      }
      puVar23 = &(this_06->OnUpdateDailyQuestDataDelegate).field_0x1c;
      *(int *)puVar23 = *(int *)puVar23 + -1;
      if (bVar16) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &this_06->OnUpdateDailyQuestDataDelegate,false);
      }
      if (local_ee8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_ee8.Accessor,&local_ee8);
      }
    }
    break;
  case 0x5b:
    pMVar4 = (param_1->_impl_).Item_.characterlevel_;
    TDS_DataSetGetter<UDS_RingCommandDeckDataSet>::Get((ulong64)&local_f60);
    bVar16 = TWeakObjectPtr<UDS_RingCommandDeckDataSet,FWeakObjectPtr>::UEOpEquals
                       ((TWeakObjectPtr<UDS_RingCommandDeckDataSet,FWeakObjectPtr> *)&local_f60,
                        (void *)0x0);
    if (bVar16) {
      pUVar30 = UDS_LogManager::GetInst();
      if (pUVar30 != (UDS_LogManager *)0x0) {
        pUVar30 = UDS_LogManager::GetInst();
        local_398._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_398,"FDS_LoginService::UpdateDbWorkItem",0x22,Yes);
        UDS_LogManager::PrintLog
                  (pUVar30,1,Warning,local_398.Ptr,0x3a6,L"ringCommandDeckDataSet is nullptr.");
        if ((void *)local_398._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_398._padding_);
        }
      }
    }
    else {
      pUVar29 = (UDS_RingCommandDeckDataSet *)FWeakObjectPtr::Get(&local_f60);
      UDS_RingCommandDeckDataSet::AddActionBase(pUVar29,*(int *)(pMVar4 + 2));
    }
    break;
  case 0x5c:
    pSVar8 = (SqlRingCommandTable *)(param_1->_impl_).Item_.characterlevel_;
    TDS_DataSetGetter<UDS_RingCommandDeckDataSet>::Get((ulong64)&local_f68);
    bVar16 = TWeakObjectPtr<UDS_RingCommandDeckDataSet,FWeakObjectPtr>::UEOpEquals
                       ((TWeakObjectPtr<UDS_RingCommandDeckDataSet,FWeakObjectPtr> *)&local_f68,
                        (void *)0x0);
    if (bVar16) {
      pUVar30 = UDS_LogManager::GetInst();
      if (pUVar30 != (UDS_LogManager *)0x0) {
        pUVar30 = UDS_LogManager::GetInst();
        local_4b8._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_4b8,"FDS_LoginService::UpdateDbWorkItem",0x22,Yes);
        UDS_LogManager::PrintLog
                  (pUVar30,1,Warning,local_4b8.Ptr,0x395,L"ringCommandDeckDataSet is nullptr.");
        if ((void *)local_4b8._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_4b8._padding_);
        }
      }
    }
    else {
      pUVar29 = (UDS_RingCommandDeckDataSet *)FWeakObjectPtr::Get(&local_f68);
      UDS_RingCommandDeckDataSet::SetData(pUVar29,pSVar8);
    }
    break;
  case 0x5e:
    pSVar10 = (SqlAchievementGroupTable *)(param_1->_impl_).Item_.characterlevel_;
    TDS_DataSetGetter<UDS_AchievementDataSet>::Get((ulong64)&local_f58);
    bVar16 = TWeakObjectPtr<UDS_AchievementDataSet,FWeakObjectPtr>::UEOpEquals
                       ((TWeakObjectPtr<UDS_AchievementDataSet,FWeakObjectPtr> *)&local_f58,
                        (void *)0x0);
    if (bVar16) {
      bVar16 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_7771091955961822261>,false,
                          "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_LoginService.cpp"
                          ,0x3cb,"false");
      if (bVar16) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      pUVar30 = UDS_LogManager::GetInst();
      if (pUVar30 != (UDS_LogManager *)0x0) {
        pUVar30 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"FDS_LoginService::UpdateDbWorkItem",0x22,Yes);
        UDS_LogManager::PrintLog
                  (pUVar30,1,Warning,local_158.Ptr,0x3cc,L"achievementDataSet is nullptr.");
        if ((void *)local_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_158._padding_);
        }
      }
    }
    else {
      this_14 = (UDS_AchievementDataSet *)FWeakObjectPtr::Get(&local_f58);
      UDS_AchievementDataSet::SetData(this_14,pSVar10);
    }
    break;
  case 0x5f:
    pSVar11 = (SqlNpcRelationTable *)(param_1->_impl_).Item_.characterlevel_;
    UDS_NpcRelationData::GetData
              ((ulong64)&local_f50,UDS_PlayerData::MainPlayerEntityID,
               SUB41((pSVar11->_impl_).npc_id_,0));
    bVar16 = FWeakObjectPtr::IsValid(&local_f50);
    if (bVar16) {
      this_15 = (UDS_NpcRelationData *)FWeakObjectPtr::Get(&local_f50);
      UDS_NpcRelationData::UpdateData(this_15,pSVar11);
    }
    break;
  case 0x6b:
    pMVar4 = (param_1->_impl_).Item_.characterlevel_;
    UDS_PlayerData::GetMainPlayerData();
    bVar16 = FWeakObjectPtr::IsValid(&local_fc0);
    if (bVar16) {
      iVar1 = *(int *)(pMVar4 + 2);
      pUVar21 = (UDS_PlayerData *)FWeakObjectPtr::Get(&local_fc0);
      UDS_PlayerData::SetHaloPoint(pUVar21,iVar1,true);
    }
    else {
      bVar16 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_7771091955961822639>,false,
                          "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_LoginService.cpp"
                          ,0x251,"false");
      if (bVar16) goto code_r0x00014bbe4428;
    }
    break;
  case 0x6c:
    pSVar12 = (SqlMountInvenInfoTable *)(param_1->_impl_).Item_.characterlevel_;
    TDS_DataSetGetter<UDS_MountDataSet>::Get((ulong64)&local_f48);
    bVar16 = TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr>::UEOpEquals
                       ((TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr> *)&local_f48,(void *)0x0);
    if (!bVar16) {
      pUVar31 = (UDS_MountDataSet *)FWeakObjectPtr::Get(&local_f48);
      UDS_MountDataSet::UpdateData(pUVar31,pSVar12);
    }
    break;
  case 0x6d:
    pSVar13 = (SqlMountListTable *)(param_1->_impl_).Item_.characterlevel_;
    TDS_DataSetGetter<UDS_MountDataSet>::Get((ulong64)&local_f40);
    bVar16 = TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr>::UEOpEquals
                       ((TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr> *)&local_f40,(void *)0x0);
    if (!bVar16) {
      pUVar31 = (UDS_MountDataSet *)FWeakObjectPtr::Get(&local_f40);
      local_ff4[2] = (param_1->_impl_).dirty_flag_;
      UDS_MountDataSet::UpdateData(pUVar31,pSVar13,(DirtyFlag *)(local_ff4 + 2));
    }
    break;
  default:
    goto switchD_14bbe3c76_default;
  }
switchD_14bbe3c76_default:
  return;
}

// UpdateMainCharData @ 14bbe53b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_LoginService::UpdateMainCharData(DbWorkItem *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UDS_PlayerData *this;
  UDS_DataManager *this_00;
  UDS_CharInfoData *this_01;
  undefined1 auStackY_3d8 [32];
  FWeakObjectPtr local_398;
  FWeakObjectPtr local_390;
  FWeakObjectPtr local_388 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_378;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_3d8;
  UDS_PlayerData::GetData((ulong64)&local_398,UDS_PlayerData::MainPlayerEntityID,false);
  bVar2 = FWeakObjectPtr::IsValid(&local_398);
  if (!bVar2) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_378._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_378,"FDS_LoginService::UpdateMainCharData",0x24,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_378.Ptr,0x408,L"playerData is Invalid");
      if ((void *)local_378._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_378._padding_);
      }
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7771091955961822199>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_LoginService.cpp"
                       ,0x409,"false");
    if (!bVar2) {
      return;
    }
    goto code_r0x00014bbe56d2;
  }
  this = (UDS_PlayerData *)FWeakObjectPtr::Get(&local_398);
  bVar2 = UDS_PlayerData::IsHaveChar(this,param_2);
  if (!bVar2) {
    this_00 = UDS_DataManager::GetInst();
    if (this_00 == (UDS_DataManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_258._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_258,"FDS_LoginService::UpdateMainCharData",0x24,Yes);
        UDS_LogManager::PrintLog(pUVar3,1,Warning,local_258.Ptr,0x414,L"dataMgr is nullptr.");
        if ((void *)local_258._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_258._padding_);
        }
      }
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_7771091955961822187>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_LoginService.cpp"
                         ,0x415,"false");
      if (!bVar2) {
        return;
      }
      goto code_r0x00014bbe56d2;
    }
    UDS_DataManager::CreateDataSetContainer(this_00,0,MainCharacter,param_2,false);
    UDS_CharData::GetData((ulong64)local_388);
    bVar2 = FWeakObjectPtr::IsValid(local_388);
    if (!bVar2) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_7771091955961822176>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_LoginService.cpp"
                         ,0x420,"false");
      if (!bVar2) {
        return;
      }
      goto code_r0x00014bbe56d2;
    }
  }
  UDS_PlayerData::GetMainPlayerCurrentEntityID();
  UDS_CharInfoData::GetData((ulong64)&local_390);
  bVar2 = FWeakObjectPtr::IsValid(&local_390);
  if (bVar2) {
    this_01 = (UDS_CharInfoData *)FWeakObjectPtr::Get(&local_390);
    UDS_CharInfoData::UpdateData(this_01,param_1);
  }
  else {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      UDS_PlayerData::GetMainPlayerCurrentEntityID();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_LoginService::UpdateMainCharData",0x24,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0x42a,
                 L"charInfoData is Invalid. CharEntityID : %llu");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7771091955961822165>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_LoginService.cpp"
                       ,0x42b,"false");
    if (bVar2) {
code_r0x00014bbe56d2:
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

