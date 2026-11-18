// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 23

// ProcessError @ 14bc02610

bool __cdecl FDS_QuestService::ProcessError(FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  return false;
}

// ReceiveQuestLeaveGraceResponse @ 14bc06d40

void __cdecl FDS_QuestService::ReceiveQuestLeaveGraceResponse(ServerMessages *param_1)

{
  bool bVar1;
  FDS_QuestBaseTableRow *this;
  FString *pFVar2;
  long64 lVar3;
  QuestLeaveGraceResponseDefaultTypeInternal *pQVar4;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_48;
  FString local_38;
  FStringFormatArg local_28;
  
  if ((param_1->_impl_)._oneof_case_[0] == 20000) {
    pQVar4 = *(QuestLeaveGraceResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pQVar4 = &server_msg::_QuestLeaveGraceResponse_default_instance_;
  }
  this = FDS_QuestBaseTableRow::GetRef
                   ((longlong)*(int *)&((Message *)((longlong)pQVar4 + 0x10))->field_0x8,true);
  bVar1 = FDS_QuestBaseTableRow::IsValid(this);
  if (bVar1) {
    if (*(int *)&((Message *)((longlong)pQVar4 + 0x10))->field_0xc == 1) {
      pFVar2 = FDS_QuestBaseTableRow::GetTitleString(this,&local_38);
      FStringFormatArg::FStringFormatArg(&local_28,pFVar2);
      local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,0,&local_48.AllocatorInstance,1,&local_48.ArrayMax);
      ConstructItems<FStringFormatArg,FStringFormatArg,int>
                (local_48.AllocatorInstance.Data,&local_28,1);
      lVar3 = 0x11120;
    }
    else {
      if (*(int *)&((Message *)((longlong)pQVar4 + 0x10))->field_0xc != 2) {
        return;
      }
      pFVar2 = FDS_QuestBaseTableRow::GetTitleString(this,&local_38);
      FStringFormatArg::FStringFormatArg(&local_28,pFVar2);
      local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,0,&local_48.AllocatorInstance,1,&local_48.ArrayMax);
      ConstructItems<FStringFormatArg,FStringFormatArg,int>
                (local_48.AllocatorInstance.Data,&local_28,1);
      lVar3 = 0x1111f;
    }
    UDS_UIMessageManager::OpenMsgByStringUi
              (lVar3,Complete_System_01,&local_48,
               (TMap<EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>_>
                *)0x0);
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
    if ((FStringFormatArg *)local_48.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
    if (local_28.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.StringValue.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// ReceiveQuestMonthlyResetResponse @ 14bc06ee0

void __cdecl FDS_QuestService::ReceiveQuestMonthlyResetResponse(ServerMessages *param_1)

{
  return;
}

// ReceiveQuestRepeatResetResponse @ 14bc06ef0

void __cdecl FDS_QuestService::ReceiveQuestRepeatResetResponse(ServerMessages *param_1)

{
  UDS_QuestManager *this;
  QuestRepeatResetResponseDefaultTypeInternal *pQVar1;
  
  if ((param_1->_impl_)._oneof_case_[0] == 0x4e2b) {
    pQVar1 = *(QuestRepeatResetResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pQVar1 = &server_msg::_QuestRepeatResetResponse_default_instance_;
  }
  this = UDS_QuestManager::GetInst();
  if (this != (UDS_QuestManager *)0x0) {
    UDS_QuestManager::QuestRepeatResetRespone(this,&pQVar1->_instance);
    return;
  }
  return;
}

// ReceiveQuestWeeklyResetResponse @ 14bc06f40

void __cdecl FDS_QuestService::ReceiveQuestWeeklyResetResponse(ServerMessages *param_1)

{
  return;
}

// ReqeustQuestAutoTracking @ 14bc0d7a0

void __cdecl FDS_QuestService::ReqeustQuestAutoTracking(int param_1,bool param_2)

{
  uint uVar1;
  bool bVar2;
  UDS_NetworkManager *this;
  ClientMessages local_28;
  
  client_msg::ClientMessages::ClientMessages(&local_28,(Arena *)0x0);
  local_28._padding_ = (longlong)&___7ClientMessages_client_msg__6B_;
  if (local_28._impl_._oneof_case_[0] != 0x4e24) {
    client_msg::ClientMessages::clear_ClientMessage(&local_28);
    local_28._impl_._oneof_case_[0] = 0x4e24;
    if (((byte)local_28._padding_ & 1) == 0) {
      local_28._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::QuestAutoTrackingRequest>
                     ((Arena *)(CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                               0xfffffffffffffffe));
    }
    else {
      local_28._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::QuestAutoTrackingRequest>
                     (*(Arena **)
                       (CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                       0xfffffffffffffffe));
    }
  }
  if (local_28._impl_.ClientMessage_.joincontinentreq_ != (Message *)0x0) {
    *(int *)&local_28._impl_.ClientMessage_.joincontinentreq_[1].field_0x8 = param_1;
    uVar1 = *(uint *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 1);
    local_28._impl_.ClientMessage_.joincontinentreq_[1].field_0xc = param_2;
    *(uint *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 1) = uVar1 | 3;
    this = UDS_NetworkManager::GetInst();
    if ((this != (UDS_NetworkManager *)0x0) &&
       (bVar2 = UDS_NetworkManager::GetIsConnected(this), bVar2)) {
      UDS_NetworkManager::SendPacket(this,&local_28);
    }
  }
  client_msg::ClientMessages::~ClientMessages(&local_28);
  return;
}

// ReqeustQuestTrace @ 14bc0d880

void __cdecl FDS_QuestService::ReqeustQuestTrace(int param_1)

{
  bool bVar1;
  UDS_NetworkManager *this;
  ClientMessages local_28;
  
  client_msg::ClientMessages::ClientMessages(&local_28,(Arena *)0x0);
  local_28._padding_ = (longlong)&___7ClientMessages_client_msg__6B_;
  if (local_28._impl_._oneof_case_[0] != 0x4e23) {
    client_msg::ClientMessages::clear_ClientMessage(&local_28);
    local_28._impl_._oneof_case_[0] = 0x4e23;
    if (((byte)local_28._padding_ & 1) == 0) {
      local_28._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::QuestTrackingRequest>
                     ((Arena *)(CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                               0xfffffffffffffffe));
    }
    else {
      local_28._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::QuestTrackingRequest>
                     (*(Arena **)
                       (CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                       0xfffffffffffffffe));
    }
  }
  if (local_28._impl_.ClientMessage_.joincontinentreq_ != (Message *)0x0) {
    *(int *)&local_28._impl_.ClientMessage_.joincontinentreq_[1].field_0x8 = param_1;
    *(uint *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 1) =
         *(uint *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 1) | 1;
    this = UDS_NetworkManager::GetInst();
    if ((this != (UDS_NetworkManager *)0x0) &&
       (bVar1 = UDS_NetworkManager::GetIsConnected(this), bVar1)) {
      UDS_NetworkManager::SendPacket(this,&local_28);
    }
  }
  client_msg::ClientMessages::~ClientMessages(&local_28);
  return;
}

// RequestQuestAccept @ 14bc134c0

void __cdecl FDS_QuestService::RequestQuestAccept(int param_1)

{
  bool bVar1;
  UDS_NetworkManager *this;
  ClientMessages local_28;
  
  client_msg::ClientMessages::ClientMessages(&local_28,(Arena *)0x0);
  local_28._padding_ = (longlong)&___7ClientMessages_client_msg__6B_;
  if (local_28._impl_._oneof_case_[0] != 0x4e21) {
    client_msg::ClientMessages::clear_ClientMessage(&local_28);
    local_28._impl_._oneof_case_[0] = 0x4e21;
    if (((byte)local_28._padding_ & 1) == 0) {
      local_28._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::QuestAcceptRequest>
                     ((Arena *)(CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                               0xfffffffffffffffe));
    }
    else {
      local_28._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::QuestAcceptRequest>
                     (*(Arena **)
                       (CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                       0xfffffffffffffffe));
    }
  }
  if (local_28._impl_.ClientMessage_.joincontinentreq_ != (Message *)0x0) {
    *(int *)&local_28._impl_.ClientMessage_.joincontinentreq_[1].field_0x8 = param_1;
    *(uint *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 1) =
         *(uint *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 1) | 1;
    this = UDS_NetworkManager::GetInst();
    if ((this != (UDS_NetworkManager *)0x0) &&
       (bVar1 = UDS_NetworkManager::GetIsConnected(this), bVar1)) {
      UDS_NetworkManager::SendPacket(this,&local_28);
    }
  }
  client_msg::ClientMessages::~ClientMessages(&local_28);
  return;
}

// RequestQuestCancel @ 14bc13580

void __cdecl FDS_QuestService::RequestQuestCancel(int param_1)

{
  bool bVar1;
  UDS_NetworkManager *this;
  ClientMessages local_28;
  
  client_msg::ClientMessages::ClientMessages(&local_28,(Arena *)0x0);
  local_28._padding_ = (longlong)&___7ClientMessages_client_msg__6B_;
  if (local_28._impl_._oneof_case_[0] != 20000) {
    client_msg::ClientMessages::clear_ClientMessage(&local_28);
    local_28._impl_._oneof_case_[0] = 20000;
    if (((byte)local_28._padding_ & 1) == 0) {
      local_28._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::QuestCancelRequest>
                     ((Arena *)(CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                               0xfffffffffffffffe));
    }
    else {
      local_28._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::QuestCancelRequest>
                     (*(Arena **)
                       (CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                       0xfffffffffffffffe));
    }
  }
  if (local_28._impl_.ClientMessage_.joincontinentreq_ != (Message *)0x0) {
    *(int *)&local_28._impl_.ClientMessage_.joincontinentreq_[1].field_0x8 = param_1;
    *(uint *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 1) =
         *(uint *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 1) | 1;
    this = UDS_NetworkManager::GetInst();
    if ((this != (UDS_NetworkManager *)0x0) &&
       (bVar1 = UDS_NetworkManager::GetIsConnected(this), bVar1)) {
      UDS_NetworkManager::SendPacket(this,&local_28);
    }
  }
  client_msg::ClientMessages::~ClientMessages(&local_28);
  return;
}

// RequestQuestClaimRewardAll @ 14bc13640

void __cdecl
FDS_QuestService::RequestQuestClaimRewardAll
          (EDS_QuestType param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  FDS_ClientMessage_Twoway *pFVar4;
  bool bVar5;
  TSharedRef<FDS_ClientMessage_Twoway,1> *pTVar6;
  Message *pMVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  UDS_NetworkManager *this;
  Arena *pAVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res18 [8];
  TSharedPtr<FDS_ClientMessage_Twoway,1> local_78;
  TSharedRef<FDS_ClientMessage_Twoway,1> local_68;
  FDestructionSentinel local_58;
  undefined1 *local_40;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  pTVar6 = MakeShared<FDS_ClientMessage_Twoway,1>(&local_68);
  local_78.Object = pTVar6->Object;
  local_78.SharedReferenceCount.ReferenceController =
       (pTVar6->SharedReferenceCount).ReferenceController;
  if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  if ((local_78.Object == (FDS_ClientMessage_Twoway *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar4 = local_78.Object;
  if (((local_78.Object)->clientMsg)._impl_._oneof_case_[0] != 0x4eeb) {
    client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
              (&(local_78.Object)->clientMsg);
    (pFVar4->clientMsg)._impl_._oneof_case_[0] = 0x4eeb;
    pAVar10 = (Arena *)((pFVar4->clientMsg)._padding_ & 0xfffffffffffffffe);
    if (((pFVar4->clientMsg)._padding_ & 1) != 0) {
      pAVar10 = (Arena *)(pAVar10->impl_).tag_and_id_;
    }
    pMVar7 = google::protobuf::Arena::DefaultConstruct<client_msg_twoway::QuestCompleteAllRequest>
                       (pAVar10);
    (pFVar4->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar7;
  }
  pMVar7 = (pFVar4->clientMsg)._impl_.ClientMessageTwoway_.pingreq_;
  if (pMVar7 != (Message *)0x0) {
    *(uint *)&pMVar7[2].field_0xc = (uint)param_1;
    *(uint *)(pMVar7 + 1) = *(uint *)(pMVar7 + 1) | 1;
    pFVar11 = (param_2->AllocatorInstance).Data;
    iVar2 = param_2->ArrayNum;
    pFVar1 = pFVar11 + (longlong)iVar2 * 4;
    while( true ) {
      if (param_2->ArrayNum != iVar2) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (pFVar11 == pFVar1) break;
      google::protobuf::RepeatedField<int>::Add
                ((RepeatedField<int> *)&pMVar7[1].field_0x8,*(int *)pFVar11);
      pFVar11 = pFVar11 + 4;
    }
    if (local_78.Object != (FDS_ClientMessage_Twoway *)0x0) {
      if ((local_78.Object == (FDS_ClientMessage_Twoway *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar4 = local_78.Object;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &(local_78.Object)->SuccessDel,(FWriteAccessScope *)&local_58);
      local_40 = &(pFVar4->SuccessDel).field_0x8;
      puVar8 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_40);
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = &
                  ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar9 = FDelegateHandle::GenerateNewID();
        puVar8[2] = uVar9;
        *puVar8 = &
                  ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        puVar8[3] = ResponseQuestClaimRewardAll;
      }
      if (local_58.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
      }
      if ((local_78.Object == (FDS_ClientMessage_Twoway *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar4 = local_78.Object;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &(local_78.Object)->FailDel,(FWriteAccessScope *)&local_38);
      local_20 = &(pFVar4->FailDel).field_0x8;
      puVar8 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_20);
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = &
                  ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar9 = FDelegateHandle::GenerateNewID();
        puVar8[2] = uVar9;
        *puVar8 = &
                  ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        puVar8[3] = ProcessError;
      }
      if (local_38.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
      }
      this = UDS_NetworkManager::GetInst();
      if ((this != (UDS_NetworkManager *)0x0) &&
         (bVar5 = UDS_NetworkManager::GetIsConnected(this), bVar5)) {
        UDS_NetworkManager::SendTwoWayPacket(this,&local_78);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  return;
}

// RequestQuestComplete @ 14bc138d0

void __cdecl FDS_QuestService::RequestQuestComplete(int param_1)

{
  bool bVar1;
  UDS_NetworkManager *this;
  ClientMessages local_28;
  
  client_msg::ClientMessages::ClientMessages(&local_28,(Arena *)0x0);
  local_28._padding_ = (longlong)&___7ClientMessages_client_msg__6B_;
  if (local_28._impl_._oneof_case_[0] != 0x4e22) {
    client_msg::ClientMessages::clear_ClientMessage(&local_28);
    local_28._impl_._oneof_case_[0] = 0x4e22;
    if (((byte)local_28._padding_ & 1) == 0) {
      local_28._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::QuestCompleteRequest>
                     ((Arena *)(CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                               0xfffffffffffffffe));
    }
    else {
      local_28._impl_.ClientMessage_.joincontinentreq_ =
           google::protobuf::Arena::DefaultConstruct<client_msg::QuestCompleteRequest>
                     (*(Arena **)
                       (CONCAT71(local_28._padding_._1_7_,(byte)local_28._padding_) &
                       0xfffffffffffffffe));
    }
  }
  if (local_28._impl_.ClientMessage_.joincontinentreq_ != (Message *)0x0) {
    *(int *)&local_28._impl_.ClientMessage_.joincontinentreq_[1].field_0x8 = param_1;
    *(uint *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 1) =
         *(uint *)(local_28._impl_.ClientMessage_.joincontinentreq_ + 1) | 1;
    this = UDS_NetworkManager::GetInst();
    if ((this != (UDS_NetworkManager *)0x0) &&
       (bVar1 = UDS_NetworkManager::GetIsConnected(this), bVar1)) {
      UDS_NetworkManager::SendPacket(this,&local_28);
    }
  }
  client_msg::ClientMessages::~ClientMessages(&local_28);
  return;
}

// RequestQuestMove @ 14bc13990

void __cdecl FDS_QuestService::RequestQuestMove(void)

{
  code *pcVar1;
  FDS_ClientMessage_Twoway *pFVar2;
  bool bVar3;
  TSharedRef<FDS_ClientMessage_Twoway,1> *pTVar4;
  Message *pMVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  UDS_NetworkManager *this;
  Arena *pAVar8;
  TSharedPtr<FDS_ClientMessage_Twoway,1> local_68;
  TSharedRef<FDS_ClientMessage_Twoway,1> local_58;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  pTVar4 = MakeShared<FDS_ClientMessage_Twoway,1>(&local_58);
  local_68.Object = pTVar4->Object;
  local_68.SharedReferenceCount.ReferenceController =
       (pTVar4->SharedReferenceCount).ReferenceController;
  if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar2 = local_68.Object;
  if (((local_68.Object)->clientMsg)._impl_._oneof_case_[0] != 0x4ee8) {
    client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
              (&(local_68.Object)->clientMsg);
    (pFVar2->clientMsg)._impl_._oneof_case_[0] = 0x4ee8;
    pAVar8 = (Arena *)((pFVar2->clientMsg)._padding_ & 0xfffffffffffffffe);
    if (((pFVar2->clientMsg)._padding_ & 1) != 0) {
      pAVar8 = (Arena *)(pAVar8->impl_).tag_and_id_;
    }
    pMVar5 = google::protobuf::Arena::DefaultConstruct<client_msg_twoway::QuestMoveRequest>(pAVar8);
    (pFVar2->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar5;
  }
  if (((pFVar2->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ != (Message *)0x0) &&
     (local_68.Object != (FDS_ClientMessage_Twoway *)0x0)) {
    if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar2 = local_68.Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(local_68.Object)->SuccessDel,(FWriteAccessScope *)&local_48);
    local_30 = &(pFVar2->SuccessDel).field_0x8;
    puVar6 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_30);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &
                ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar6[3] = ResponseQuestMove;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar2 = local_68.Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(local_68.Object)->FailDel
               ,(FWriteAccessScope *)&local_28);
    local_10 = &(pFVar2->FailDel).field_0x8;
    puVar6 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &
                ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar6[3] = ProcessError;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    this = UDS_NetworkManager::GetInst();
    if (this != (UDS_NetworkManager *)0x0) {
      bVar3 = UDS_NetworkManager::GetIsConnected(this);
      if (bVar3) {
        UDS_NetworkManager::SendTwoWayPacket(this,&local_68);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  return;
}

// RequestQuestNpcTalk @ 14bc13bc0

void __cdecl FDS_QuestService::RequestQuestNpcTalk(ulong64 param_1,int param_2,int param_3)

{
  uint uVar1;
  code *pcVar2;
  FDS_ClientMessage_Twoway *pFVar3;
  bool bVar4;
  TSharedRef<FDS_ClientMessage_Twoway,1> *pTVar5;
  Message *pMVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  UDS_NetworkManager *this;
  Arena *pAVar9;
  TSharedPtr<FDS_ClientMessage_Twoway,1> local_68;
  TSharedRef<FDS_ClientMessage_Twoway,1> local_58;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  pTVar5 = MakeShared<FDS_ClientMessage_Twoway,1>(&local_58);
  local_68.Object = pTVar5->Object;
  local_68.SharedReferenceCount.ReferenceController =
       (pTVar5->SharedReferenceCount).ReferenceController;
  if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  if ((local_68.Object == (FDS_ClientMessage_Twoway *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar3 = local_68.Object;
  if (((local_68.Object)->clientMsg)._impl_._oneof_case_[0] != 0x4ee9) {
    client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
              (&(local_68.Object)->clientMsg);
    (pFVar3->clientMsg)._impl_._oneof_case_[0] = 0x4ee9;
    pAVar9 = (Arena *)((pFVar3->clientMsg)._padding_ & 0xfffffffffffffffe);
    if (((pFVar3->clientMsg)._padding_ & 1) != 0) {
      pAVar9 = (Arena *)(pAVar9->impl_).tag_and_id_;
    }
    pMVar6 = google::protobuf::Arena::DefaultConstruct<client_msg_twoway::QuestNpcTalkRequest>
                       (pAVar9);
    (pFVar3->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar6;
  }
  pMVar6 = (pFVar3->clientMsg)._impl_.ClientMessageTwoway_.pingreq_;
  if (pMVar6 != (Message *)0x0) {
    *(int *)(pMVar6 + 2) = param_2;
    uVar1 = *(uint *)(pMVar6 + 1);
    *(ulong64 *)&pMVar6[1].field_0x8 = param_1;
    *(int *)&pMVar6[2].field_0x4 = param_3;
    *(uint *)(pMVar6 + 1) = uVar1 | 7;
    if (local_68.Object != (FDS_ClientMessage_Twoway *)0x0) {
      if ((local_68.Object == (FDS_ClientMessage_Twoway *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar3 = local_68.Object;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &(local_68.Object)->SuccessDel,(FWriteAccessScope *)&local_48);
      local_30 = &(pFVar3->SuccessDel).field_0x8;
      puVar7 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_30);
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = &
                  ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar8 = FDelegateHandle::GenerateNewID();
        puVar7[2] = uVar8;
        *puVar7 = &
                  ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        puVar7[3] = ResponseQuestNpcTalk;
      }
      if (local_48.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
      }
      if ((local_68.Object == (FDS_ClientMessage_Twoway *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar3 = local_68.Object;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &(local_68.Object)->FailDel,(FWriteAccessScope *)&local_28);
      local_10 = &(pFVar3->FailDel).field_0x8;
      puVar7 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = &
                  ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar8 = FDelegateHandle::GenerateNewID();
        puVar7[2] = uVar8;
        *puVar7 = &
                  ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        puVar7[3] = ProcessError;
      }
      if (local_28.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
      }
      this = UDS_NetworkManager::GetInst();
      if ((this != (UDS_NetworkManager *)0x0) &&
         (bVar4 = UDS_NetworkManager::GetIsConnected(this), bVar4)) {
        UDS_NetworkManager::SendTwoWayPacket(this,&local_68);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  return;
}

// ResponeQuestAccept @ 14bc18c70

void __cdecl FDS_QuestService::ResponeQuestAccept(ServerMessages *param_1)

{
  return;
}

// ResponeQuestAutoTracking @ 14bc18c80

void __cdecl FDS_QuestService::ResponeQuestAutoTracking(ServerMessages *param_1)

{
  UDS_QuestManager *this;
  QuestAutoTrackingResponseDefaultTypeInternal *pQVar1;
  
  if ((param_1->_impl_)._oneof_case_[0] == 0x30d48) {
    pQVar1 = *(QuestAutoTrackingResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pQVar1 = &server_msg::_QuestAutoTrackingResponse_default_instance_;
  }
  this = UDS_QuestManager::GetInst();
  if (this != (UDS_QuestManager *)0x0) {
    UDS_QuestManager::QuestAutoTrackingRespone(this,&pQVar1->_instance);
    return;
  }
  return;
}

// ResponeQuestCancel @ 14bc18cd0

void __cdecl FDS_QuestService::ResponeQuestCancel(ServerMessages *param_1)

{
  UDS_QuestManager *this;
  QuestCancelResponseDefaultTypeInternal *pQVar1;
  
  if ((param_1->_impl_)._oneof_case_[0] == 0x4e23) {
    pQVar1 = *(QuestCancelResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pQVar1 = &server_msg::_QuestCancelResponse_default_instance_;
  }
  this = UDS_QuestManager::GetInst();
  if (this != (UDS_QuestManager *)0x0) {
    UDS_QuestManager::QuestCancelRespone(this,&pQVar1->_instance);
    return;
  }
  return;
}

// ResponeQuestComplete @ 14bc18d20

void __cdecl FDS_QuestService::ResponeQuestComplete(ServerMessages *param_1)

{
  bool bVar1;
  FDS_QuestBaseTableRow *this;
  UDS_QuestManager *this_00;
  UDS_DailyQuestManager *this_01;
  QuestCompleteResponseDefaultTypeInternal *pQVar2;
  
  if ((param_1->_impl_)._oneof_case_[0] == 0x4e22) {
    pQVar2 = *(QuestCompleteResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pQVar2 = &server_msg::_QuestCompleteResponse_default_instance_;
  }
  this = FDS_QuestBaseTableRow::GetRef
                   ((longlong)*(int *)&((Message *)((longlong)pQVar2 + 0x10))->field_0xc,true);
  bVar1 = FDS_QuestBaseTableRow::IsValid(this);
  if (bVar1) {
    this_00 = UDS_QuestManager::GetInst();
    if (this_00 != (UDS_QuestManager *)0x0) {
      UDS_QuestManager::QuestCompleteRespone(this_00,&pQVar2->_instance);
    }
    this_01 = UDS_DailyQuestManager::GetInst();
    if ((this_01 != (UDS_DailyQuestManager *)0x0) && (this->QuestType == Daily)) {
      UDS_DailyQuestManager::DailyQuestCompleteCountRise(this_01);
    }
  }
  return;
}

// ResponeQuestTrace @ 14bc18da0

void __cdecl FDS_QuestService::ResponeQuestTrace(ServerMessages *param_1)

{
  return;
}

// ResponseQuestClaimRewardAll @ 14bc1ab80

void __cdecl FDS_QuestService::ResponseQuestClaimRewardAll(ServerMessagesTwoway *param_1)

{
  return;
}

// ResponseQuestMove @ 14bc1ab90

void __cdecl FDS_QuestService::ResponseQuestMove(ServerMessagesTwoway *param_1)

{
  return;
}

// ResponseQuestNpcTalk @ 14bc1aba0

void __cdecl FDS_QuestService::ResponseQuestNpcTalk(ServerMessagesTwoway *param_1)

{
  return;
}

// SendPacket @ 14bc1d1a0

bool __cdecl FDS_QuestService::SendPacket(ClientMessages *param_1)

{
  bool bVar1;
  UDS_NetworkManager *this;
  
  this = UDS_NetworkManager::GetInst();
  if (this != (UDS_NetworkManager *)0x0) {
    bVar1 = UDS_NetworkManager::GetIsConnected(this);
    if (bVar1) {
      bVar1 = UDS_NetworkManager::SendPacket(this,param_1);
      return bVar1;
    }
  }
  return false;
}

// SendTwoWayPacket @ 14bc1e320

void __cdecl FDS_QuestService::SendTwoWayPacket(TSharedPtr<FDS_ClientMessage_Twoway,1> *param_1)

{
  bool bVar1;
  UDS_NetworkManager *this;
  
  this = UDS_NetworkManager::GetInst();
  if (this != (UDS_NetworkManager *)0x0) {
    bVar1 = UDS_NetworkManager::GetIsConnected(this);
    if (bVar1) {
      UDS_NetworkManager::SendTwoWayPacket(this,param_1);
    }
  }
  return;
}

