// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// ExecuteRingCommand @ 14bbf15f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FDS_RingCommandService::ExecuteRingCommand
          (TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr> param_1,int param_2)

{
  EDS_RingCmdType EVar1;
  code *pcVar2;
  bool bVar3;
  UDS_RingCommandDeckData *this;
  UDS_LogManager *pUVar4;
  UDS_ContentManager *this_00;
  UDS_EventManager *this_01;
  UDS_RingCommandUIEvent *pUVar5;
  FWeakObjectPtr local_res8 [2];
  undefined1 auStackY_3f8 [32];
  EDS_RingCmdType local_3c8 [8];
  int local_3c0 [2];
  TSharedPtr<FDS_RingCommandSlotData,1> local_3b8;
  int local_3a8 [2];
  FWeakObjectPtr local_3a0;
  FWeakObjectPtr local_398;
  UDS_ContentManager *local_390;
  TSharedPtr<FDS_RingCommandSlotData,1> local_388;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_378;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_3f8;
  local_res8[0] = param_1.WeakPtr;
  local_3c0[0] = param_2;
  bVar3 = TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr> *)local_res8,
                     (void *)0x0);
  if (bVar3) {
    return;
  }
  this = (UDS_RingCommandDeckData *)FWeakObjectPtr::Get(local_res8);
  UDS_RingCommandDeckData::GetRingCommandData(this,&local_3b8,local_3c0);
  if (local_3b8.Object == (FDS_RingCommandSlotData *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_378._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_378,"FDS_RingCommandService::ExecuteRingCommand",0x2a,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_378.Ptr,0xc3,L"ringSlotData is nullptr");
      if ((void *)local_378._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_378._padding_);
      }
    }
  }
  else {
    local_3c8[0] = (local_3b8.Object)->SlotType;
    bVar3 = IsContentLockCheck(local_3c8,(int)(local_3b8.Object)->SlotData);
    if (!bVar3) {
      if ((local_3b8.Object == (FDS_RingCommandSlotData *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      EVar1 = (local_3b8.Object)->SlotType;
      if (EVar1 == Item) {
        DS_ItemDataUtil::GetItemDataByUID((long64)&local_398);
        bVar3 = FWeakObjectPtr::IsValid(&local_398);
        if (!bVar3) {
          pUVar4 = UDS_LogManager::GetInst();
          if (pUVar4 != (UDS_LogManager *)0x0) {
            pUVar4 = UDS_LogManager::GetInst();
            local_258._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_258,"FDS_RingCommandService::ExecuteRingCommand",0x2a,Yes);
            UDS_LogManager::PrintLog(pUVar4,1,Warning,local_258.Ptr,0xd3,L"itemData is nullptr");
            if ((void *)local_258._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_258._padding_);
            }
          }
          goto LAB_14bbf1997;
        }
        DS_ItemDataUtil::Use((TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)local_398,0,0,0);
      }
      else if (EVar1 == Menu) {
        local_390 = UDS_ContentManager::GetInst();
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_390 != (UDS_ContentManager *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_390);
        }
        local_3a0.ObjectIndex = 0;
        local_3a0.ObjectSerialNumber = 0;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_390 != (UDS_ContentManager *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_390);
        }
        FWeakObjectPtr::operator=(&local_3a0,(FObjectPtr)&local_390);
        this_00 = (UDS_ContentManager *)FWeakObjectPtr::Get(&local_3a0);
        if ((local_3b8.Object == (FDS_RingCommandSlotData *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_3a8[0] = (int)(local_3b8.Object)->SlotData;
        UDS_ContentManager::OpenContent(this_00,local_3a8);
      }
      else if (EVar1 == Action) {
        local_388.Object = local_3b8.Object;
        local_388.SharedReferenceCount.ReferenceController =
             local_3b8.SharedReferenceCount.ReferenceController;
        if (local_3b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_3b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_3b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        ExecuteRingCommand_Action(&local_388);
      }
      this_01 = UDS_EventManager::GetInst();
      if (this_01 != (UDS_EventManager *)0x0) {
        if ((char)this_01->_padding_ == '\x01') {
          pUVar4 = UDS_LogManager::GetInst();
          if (pUVar4 != (UDS_LogManager *)0x0) {
            pUVar4 = UDS_LogManager::GetInst();
            local_138._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_138,"UDS_EventManager::GetEvent",0x1a,Yes);
            UDS_LogManager::PrintLog
                      (pUVar4,1,Warning,local_138.Ptr,0x31,
                       L"Cannot access event during UDS_EventManager destruction.");
            if ((void *)local_138._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_138._padding_);
            }
          }
        }
        else {
          pUVar5 = UDS_EventManager::GetEventInternal<UDS_RingCommandUIEvent>(this_01);
          if (pUVar5 != (UDS_RingCommandUIEvent *)0x0) {
            FDS_FilteredEventDelegate<int_const_>::Broadcast(&pUVar5->OnRingCmdExecuted,local_3c0);
          }
        }
      }
    }
  }
LAB_14bbf1997:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3b8.SharedReferenceCount.ReferenceController);
  return;
}

// ExecuteRingCommand_Action @ 14bbf19d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FDS_RingCommandService::ExecuteRingCommand_Action(TSharedPtr<FDS_RingCommandSlotData,1> *param_1)

{
  EDS_ActionFunctionType EVar1;
  code *pcVar2;
  bool bVar3;
  EDS_CoolDownType EVar4;
  UDS_LogManager *pUVar5;
  UDS_NetworkManager *this;
  UDS_ContentManager *this_00;
  undefined1 auStackY_2c8 [32];
  EDS_ContentsTabFrameType local_298 [2];
  ClientMessages local_290;
  ulong64 local_270;
  undefined8 local_268;
  ulong64 local_260;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  if (param_1->Object == (FDS_RingCommandSlotData *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_258._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_258,"FDS_RingCommandService::ExecuteRingCommand_Action",0x31,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,local_258.Ptr,0xf7,L"InRingSlotData.IsValid() == false");
      if ((void *)local_258._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_258._padding_);
      }
    }
  }
  else if (param_1->Object->SlotType == Action) {
    local_270 = FDS_EntityBase::GetMainPlayerEntityID(false);
    if ((param_1->Object == (FDS_RingCommandSlotData *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    EVar1 = (EDS_ActionFunctionType)param_1->Object->SlotData;
    EVar4 = GetActionCoolDownType(EVar1);
    bVar3 = UDS_TimeCoolDownManager::HasCoolDown(EVar4,0);
    if (!bVar3) {
      if (EVar1 == ReturnHome) {
        local_260 = FDS_EntityBase::GetMainPlayerEntityID(true);
        UDS_WarpRequestAbility::TryActivate_ReturnHomeWarp(&local_260);
      }
      else if (EVar1 == PartyCreate) {
        FDS_PartyService::OpenPartyCreatePopup();
      }
      else if (EVar1 == OpenMap) {
        this_00 = UDS_ContentManager::GetInst();
        if (this_00 != (UDS_ContentManager *)0x0) {
          local_268 = 0;
          local_298[0] = Map;
          UDS_ContentManager::OpenContent
                    (this_00,local_298,(TObjectPtr<UDS_ContentArguments>)&local_268);
        }
      }
      else if (EVar1 == Detection) {
        UDS_PlayerSkillAbility_Detection::TryActivate(&local_270);
      }
      else if ((EVar1 == Mount) && (bVar3 = UDS_MountManager::IsMountAble(), bVar3)) {
        client_msg::ClientMessages::ClientMessages(&local_290,(Arena *)0x0);
        local_290._padding_ = (longlong)&___7ClientMessages_client_msg__6B_;
        if (local_290._impl_._oneof_case_[0] != 0x1ea) {
          client_msg::ClientMessages::clear_ClientMessage(&local_290);
          local_290._impl_._oneof_case_[0] = 0x1ea;
          if (((byte)local_290._padding_ & 1) == 0) {
            local_290._impl_.ClientMessage_.joincontinentreq_ =
                 google::protobuf::Arena::DefaultConstruct<client_msg::MountRequest>
                           ((Arena *)(CONCAT71(local_290._padding_._1_7_,(byte)local_290._padding_)
                                     & 0xfffffffffffffffe));
          }
          else {
            local_290._impl_.ClientMessage_.joincontinentreq_ =
                 google::protobuf::Arena::DefaultConstruct<client_msg::MountRequest>
                           (*(Arena **)
                             (CONCAT71(local_290._padding_._1_7_,(byte)local_290._padding_) &
                             0xfffffffffffffffe));
          }
        }
        *(undefined4 *)&local_290._impl_.ClientMessage_.joincontinentreq_[1].field_0x8 = 0;
        *(uint *)(local_290._impl_.ClientMessage_.joincontinentreq_ + 1) =
             *(uint *)(local_290._impl_.ClientMessage_.joincontinentreq_ + 1) | 1;
        this = UDS_NetworkManager::GetInst();
        UDS_NetworkManager::SendPacket(this,&local_290);
        client_msg::ClientMessages::~ClientMessages(&local_290);
      }
    }
  }
  else {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_RingCommandService::ExecuteRingCommand_Action",0x31,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,local_138.Ptr,0xfd,
                 L"InRingSlotData->GetSlotType() != EDS_RingCmdType::Action");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// GetActionCoolDownType @ 14bbf79b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

EDS_CoolDownType __cdecl
FDS_RingCommandService::GetActionCoolDownType(EDS_ActionFunctionType param_1)

{
  FDS_ActionBaseTableRow *pFVar1;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pFVar1 = FDS_ActionBaseTableRow::Get((ulonglong)param_1,true);
  if (pFVar1 == (FDS_ActionBaseTableRow *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_RingCommandService::GetActionCoolDownType",0x2d,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0xb2,L"actionBaseTable is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    return None;
  }
  return pFVar1->ID_TimeCoolDown;
}

// GetActionFunctionCooltime @ 14bbf7ab0

float __cdecl FDS_RingCommandService::GetActionFunctionCooltime(EDS_ActionFunctionType param_1)

{
  bool bVar1;
  EDS_CoolDownType EVar2;
  FDS_TimeCoolDownTableRow *this;
  
  EVar2 = GetActionCoolDownType(param_1);
  this = FDS_TimeCoolDownTableRow::GetRef((longlong)(int)EVar2,true);
  bVar1 = FDS_TimeCoolDownTableRow::IsValid(this);
  if (!bVar1) {
    return 0.0;
  }
  return this->CoolTime;
}

// IsContentLockCheck @ 14bbf95b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FDS_RingCommandService::IsContentLockCheck(EDS_RingCmdType *param_1,int param_2)

{
  int *piVar1;
  EDS_RingCmdType EVar2;
  bool bVar3;
  int iVar4;
  UObject *pUVar5;
  FDS_ActionBaseTableRow *this;
  UDS_QuestManager *this_00;
  FDS_ContentsTotalMenuTableRow *this_01;
  UDS_LogManager *pUVar6;
  int *piVar7;
  undefined1 auStackY_188 [32];
  EDS_PlayerSkillType local_158 [8];
  FWeakObjectPtr local_150;
  FWeakObjectPtr local_148;
  FWeakObjectPtr local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  EVar2 = *param_1;
  if (EVar2 == Item) {
    return false;
  }
  if (EVar2 == Menu) {
    this_01 = FDS_ContentsTotalMenuTableRow::GetRef((longlong)param_2,true);
    bVar3 = FDS_ContentsTotalMenuTableRow::IsValid(this_01);
    if ((bVar3) && (this_01->IsActivate != false)) {
      UDS_PlayerData::GetMainPlayerData();
      bVar3 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)&local_150,(void *)0x0);
      if (!bVar3) {
        return false;
      }
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 != (UDS_LogManager *)0x0) {
        pUVar6 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"FDS_RingCommandService::IsContentLockCheck",0x2a,Yes);
        UDS_LogManager::PrintLog(pUVar6,1,Warning,local_138.Ptr,0x40,L"playerData is nullptr.");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
  }
  else if (EVar2 == Action) {
    TDS_DataSetGetter<UDS_RingCommandDeckDataSet>::Get((ulong64)&local_148);
    bVar3 = TWeakObjectPtr<UDS_RingCommandDeckDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_RingCommandDeckDataSet,FWeakObjectPtr> *)&local_148,
                       (void *)0x0);
    if (!bVar3) {
      pUVar5 = FWeakObjectPtr::Get(&local_148);
      piVar7 = *(int **)&pUVar5[4].field_0x10;
      piVar1 = piVar7 + *(int *)&pUVar5[4].field_0x18;
      if (piVar7 != piVar1) {
        while (*piVar7 != param_2) {
          piVar7 = piVar7 + 1;
          if (piVar7 == piVar1) {
            return true;
          }
        }
        this = FDS_ActionBaseTableRow::GetRef((longlong)param_2,true);
        bVar3 = FDS_ActionBaseTableRow::IsValid(this);
        if (((bVar3) && (this_00 = UDS_QuestManager::GetInst(), this_00 != (UDS_QuestManager *)0x0))
           && ((this->ID_RequestQuest == 0 ||
               (bVar3 = UDS_QuestManager::IsQuestCompleted(this_00,this->ID_RequestQuest), bVar3))))
        {
          UDS_PlayerData::GetMainPlayerData();
          bVar3 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)&local_140,(void *)0x0
                            );
          if ((!bVar3) &&
             (pUVar5 = FWeakObjectPtr::Get(&local_140),
             this->RequestPlayerLevel <= *(int *)&pUVar5[6].field_0x10)) {
            if (this->ID == Detection) {
              local_158[0] = Detection;
              local_150 = (FWeakObjectPtr)UDS_PlayerData::GetMainPlayerCurrentEntityID();
              iVar4 = DS_AbilityUtil_PlayerSkill::GetPlayerSkillLevel_SourceEntity
                                ((ulong64 *)&local_150,local_158);
              if (iVar4 < 1) {
                return true;
              }
            }
            return false;
          }
        }
      }
    }
  }
  return true;
}

// ProcessError @ 14bc026a0

bool __cdecl FDS_RingCommandService::ProcessError(FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  return false;
}

// ReciveRingCommandSetting @ 14bc0cbd0

void __cdecl FDS_RingCommandService::ReciveRingCommandSetting(ServerMessagesTwoway *param_1)

{
  return;
}

// RequestRingCommandSetting @ 14bc17ba0

void __cdecl
FDS_RingCommandService::RequestRingCommandSetting
          (TArray<FDS_RingCommandSlotData,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  FDS_ClientMessage_Twoway *pFVar4;
  bool bVar5;
  TSharedRef<FDS_ClientMessage_Twoway,1> *pTVar6;
  Message *pMVar7;
  void *pvVar8;
  void *pvVar9;
  undefined8 *puVar10;
  ulong64 uVar11;
  UDS_NetworkManager *this;
  Arena *pAVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  TSharedPtr<FDS_ClientMessage_Twoway,1> local_88;
  TSharedRef<FDS_ClientMessage_Twoway,1> local_78;
  FDestructionSentinel local_68;
  undefined1 *local_50;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  
  if (param_1->ArrayNum == 0) {
    return;
  }
  pTVar6 = MakeShared<FDS_ClientMessage_Twoway,1>(&local_78);
  local_88.Object = pTVar6->Object;
  local_88.SharedReferenceCount.ReferenceController =
       (pTVar6->SharedReferenceCount).ReferenceController;
  if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  if ((local_88.Object == (FDS_ClientMessage_Twoway *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar4 = local_88.Object;
  if (((local_88.Object)->clientMsg)._impl_._oneof_case_[0] != 0x5334) {
    client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
              (&(local_88.Object)->clientMsg);
    (pFVar4->clientMsg)._impl_._oneof_case_[0] = 0x5334;
    pAVar12 = (Arena *)((pFVar4->clientMsg)._padding_ & 0xfffffffffffffffe);
    if (((pFVar4->clientMsg)._padding_ & 1) != 0) {
      pAVar12 = (Arena *)(pAVar12->impl_).tag_and_id_;
    }
    pMVar7 = google::protobuf::Arena::DefaultConstruct<client_msg_twoway::RingCommandSettingRequest>
                       (pAVar12);
    (pFVar4->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar7;
  }
  pMVar7 = (pFVar4->clientMsg)._impl_.ClientMessageTwoway_.pingreq_;
  if (pMVar7 != (Message *)0x0) {
    pFVar13 = (param_1->AllocatorInstance).Data;
    iVar2 = param_1->ArrayNum;
    pFVar1 = pFVar13 + (longlong)iVar2 * 0x18;
    while( true ) {
      if (param_1->ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FDS_RingCommandSlotData_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar13 == pFVar1) break;
      if (*pFVar13 == (FScriptContainerElement)0x0) {
        pvVar8 = google::protobuf::internal::RepeatedPtrFieldBase::AddMessageLite
                           ((RepeatedPtrFieldBase *)&pMVar7[2].field_0x8,
                            google::protobuf::Arena::DefaultConstruct<messages::SlotDeck>);
        if (pvVar8 != (void *)0x0) {
          *(undefined4 *)((longlong)pvVar8 + 0x1c) = *(undefined4 *)(pFVar13 + 8);
          *(uint *)((longlong)pvVar8 + 0x10) = *(uint *)((longlong)pvVar8 + 0x10) | 2;
          *(undefined4 *)((longlong)pvVar8 + 0x18) = *(undefined4 *)(pFVar13 + 4);
          *(uint *)((longlong)pvVar8 + 0x10) = *(uint *)((longlong)pvVar8 + 0x10) | 1;
        }
LAB_14bc17d4b:
        pFVar13 = pFVar13 + 0x18;
      }
      else {
        pvVar8 = google::protobuf::internal::RepeatedPtrFieldBase::AddMessageLite
                           ((RepeatedPtrFieldBase *)(pMVar7 + 1),
                            google::protobuf::Arena::DefaultConstruct<RingCommandSet>);
        if (pvVar8 == (void *)0x0) goto LAB_14bc17d4b;
        *(uint *)((longlong)pvVar8 + 0x10) = *(uint *)((longlong)pvVar8 + 0x10) | 1;
        pvVar9 = *(void **)((longlong)pvVar8 + 0x18);
        if (pvVar9 == (void *)0x0) {
          pAVar12 = (Arena *)(*(ulonglong *)((longlong)pvVar8 + 8) & 0xfffffffffffffffe);
          if ((*(byte *)((longlong)pvVar8 + 8) & 1) != 0) {
            pAVar12 = (Arena *)(pAVar12->impl_).tag_and_id_;
          }
          pvVar9 = google::protobuf::Arena::DefaultConstruct<messages::SlotDeck>(pAVar12);
          *(void **)((longlong)pvVar8 + 0x18) = pvVar9;
          if (pvVar9 == (void *)0x0) goto LAB_14bc17d4b;
        }
        *(undefined4 *)((longlong)pvVar9 + 0x1c) = *(undefined4 *)(pFVar13 + 8);
        *(uint *)((longlong)pvVar9 + 0x10) = *(uint *)((longlong)pvVar9 + 0x10) | 2;
        *(undefined4 *)((longlong)pvVar9 + 0x18) = *(undefined4 *)(pFVar13 + 4);
        *(uint *)((longlong)pvVar9 + 0x10) = *(uint *)((longlong)pvVar9 + 0x10) | 1;
        *(uint *)((longlong)pvVar8 + 0x20) = (uint)(byte)*pFVar13;
        *(uint *)((longlong)pvVar8 + 0x10) = *(uint *)((longlong)pvVar8 + 0x10) | 2;
        *(undefined4 *)((longlong)pvVar8 + 0x24) = *(undefined4 *)(pFVar13 + 0x10);
        *(uint *)((longlong)pvVar8 + 0x10) = *(uint *)((longlong)pvVar8 + 0x10) | 4;
        pFVar13 = pFVar13 + 0x18;
      }
    }
    if ((local_88.Object == (FDS_ClientMessage_Twoway *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar4 = local_88.Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(local_88.Object)->SuccessDel,(FWriteAccessScope *)&local_68);
    local_50 = &(pFVar4->SuccessDel).field_0x8;
    puVar10 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_50);
    if (puVar10 != (undefined8 *)0x0) {
      *puVar10 = &
                 ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar11 = FDelegateHandle::GenerateNewID();
      puVar10[2] = uVar11;
      *puVar10 = &
                 ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar10[3] = ReciveRingCommandSetting;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    if ((local_88.Object == (FDS_ClientMessage_Twoway *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar4 = local_88.Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(local_88.Object)->FailDel
               ,(FWriteAccessScope *)&local_48);
    local_30 = &(pFVar4->FailDel).field_0x8;
    puVar10 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_30);
    if (puVar10 != (undefined8 *)0x0) {
      *puVar10 = &
                 ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar11 = FDelegateHandle::GenerateNewID();
      puVar10[2] = uVar11;
      *puVar10 = &
                 ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar10[3] = ProcessError;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    this = UDS_NetworkManager::GetInst();
    UDS_NetworkManager::SendTwoWayPacket(this,&local_88);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  return;
}

