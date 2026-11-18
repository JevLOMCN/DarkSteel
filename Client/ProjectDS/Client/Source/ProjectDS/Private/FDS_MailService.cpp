// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// ProcessError @ 14bc024e0

bool __cdecl FDS_MailService::ProcessError(FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_28;
  
  if (param_1->ErrorCode == InventorySlotShortage) {
    local_28._0_8_ = 0;
    local_28._8_8_ = 0;
    local_28._16_4_ = 0;
    UDS_UIMessageManager::OpenMsgByStringUi(0x4e25,Alert_None_01,&local_28);
    return true;
  }
  if (param_1->ErrorCode == MoneyMaximumHolding) {
    local_28._0_8_ = 0;
    local_28._8_8_ = 0;
    local_28._16_4_ = 0;
    UDS_UIMessageManager::OpenMsgByStringUi(0x9c73,Alert_None_01,&local_28);
    return true;
  }
  return false;
}

// RequestMailDelete @ 14bc10ca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl FDS_MailService::RequestMailDelete(FString *param_1,EDS_MailCategoryType param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  void *pvVar3;
  FDS_ClientMessage_Twoway *pFVar4;
  bool bVar5;
  undefined1 uVar6;
  TSharedRef<FDS_ClientMessage_Twoway,1> *pTVar7;
  Message *pMVar8;
  void *pvVar9;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar10;
  undefined8 *puVar11;
  UDS_NetworkManager *this_00;
  Arena *pAVar12;
  ulong64 uVar13;
  undefined1 auStackY_d8 [32];
  TSharedPtr<FDS_ClientMessage_Twoway,1> local_a8;
  FDestructionSentinel local_98;
  undefined1 *local_80;
  FDestructionSentinel local_78;
  undefined1 *local_60;
  TSharedRef<FDS_ClientMessage_Twoway,1> local_58;
  _Bxty local_48;
  undefined8 local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  pTVar7 = MakeShared<FDS_ClientMessage_Twoway,1>(&local_58);
  local_a8.Object = pTVar7->Object;
  local_a8.SharedReferenceCount.ReferenceController =
       (pTVar7->SharedReferenceCount).ReferenceController;
  if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  if ((local_a8.Object == (FDS_ClientMessage_Twoway *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  pFVar4 = local_a8.Object;
  if (((local_a8.Object)->clientMsg)._impl_._oneof_case_[0] != 0x558e) {
    client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
              (&(local_a8.Object)->clientMsg);
    (pFVar4->clientMsg)._impl_._oneof_case_[0] = 0x558e;
    pAVar12 = (Arena *)((pFVar4->clientMsg)._padding_ & 0xfffffffffffffffe);
    if (((pFVar4->clientMsg)._padding_ & 1) != 0) {
      pAVar12 = (Arena *)(pAVar12->impl_).tag_and_id_;
    }
    pMVar8 = google::protobuf::Arena::DefaultConstruct<client_msg_twoway::MailDeleteRequest>
                       (pAVar12);
    (pFVar4->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar8;
  }
  pMVar8 = (pFVar4->clientMsg)._impl_.ClientMessageTwoway_.pingreq_;
  if (pMVar8 != (Message *)0x0) {
    if (1 < (param_1->Data).ArrayNum) {
      *(uint *)(pMVar8 + 1) = *(uint *)(pMVar8 + 1) | 1;
      pvVar9 = *(void **)&pMVar8[1].field_0x8;
      if (pvVar9 == (void *)0x0) {
        pAVar12 = (Arena *)(*(ulonglong *)&pMVar8->field_0x8 & 0xfffffffffffffffe);
        if ((pMVar8->field_0x8 & 1) != 0) {
          pAVar12 = (Arena *)(pAVar12->impl_).tag_and_id_;
        }
        pvVar9 = google::protobuf::Arena::DefaultConstruct<UniqueId>(pAVar12);
        *(void **)&pMVar8[1].field_0x8 = pvVar9;
      }
      *(uint *)((longlong)pvVar9 + 0x10) = *(uint *)((longlong)pvVar9 + 0x10) | 1;
      pAVar12 = (Arena *)(*(ulonglong *)((longlong)pvVar9 + 8) & 0xfffffffffffffffe);
      if ((*(byte *)((longlong)pvVar9 + 8) & 1) != 0) {
        pAVar12 = (Arena *)(pAVar12->impl_).tag_and_id_;
      }
      this = google::protobuf::internal::ArenaStringPtr::Mutable
                       ((ArenaStringPtr *)((longlong)pvVar9 + 0x18),pAVar12);
      pbVar10 = DS_Util::ConvertFStringToBytes
                          ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           &local_48,param_1);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=(this,pbVar10);
      if (0xf < uStack_30) {
        pvVar3 = (void *)CONCAT71(local_48._1_7_,local_48._Buf[0]);
        uVar13 = uStack_30 + 1;
        pvVar9 = pvVar3;
        if (0xfff < uVar13) {
          pvVar9 = *(void **)((longlong)pvVar3 + -8);
          uVar13 = uStack_30 + 0x28;
          if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar9))) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete(pvVar9,uVar13);
      }
      local_38 = ___xmm_000000000000000f0000000000000000;
      uStack_30 = _UNK_15076add8;
      local_48._Buf[0] = '\0';
    }
    *(uint *)(pMVar8 + 2) = (uint)param_2;
    *(uint *)(pMVar8 + 1) = *(uint *)(pMVar8 + 1) | 2;
    if ((local_a8.Object == (FDS_ClientMessage_Twoway *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
    pFVar4 = local_a8.Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(local_a8.Object)->SuccessDel,(FWriteAccessScope *)&local_98);
    local_80 = &(pFVar4->SuccessDel).field_0x8;
    puVar11 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_80);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &
                 ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar13 = FDelegateHandle::GenerateNewID();
      puVar11[2] = uVar13;
      *puVar11 = &
                 ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar11[3] = ResponseMailDelete;
    }
    if (local_98.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
    }
    if ((local_a8.Object == (FDS_ClientMessage_Twoway *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
    pFVar4 = local_a8.Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(local_a8.Object)->FailDel
               ,(FWriteAccessScope *)&local_78);
    local_60 = &(pFVar4->FailDel).field_0x8;
    puVar11 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_60);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &
                 ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar13 = FDelegateHandle::GenerateNewID();
      puVar11[2] = uVar13;
      *puVar11 = &
                 ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar11[3] = ProcessError;
    }
    if (local_78.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
    }
    this_00 = UDS_NetworkManager::GetInst();
    if (this_00 != (UDS_NetworkManager *)0x0) {
      bVar5 = UDS_NetworkManager::SendTwoWayPacket(this_00,&local_a8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_a8.SharedReferenceCount.ReferenceController);
      pFVar1 = (param_1->Data).AllocatorInstance.Data;
      if (pFVar1 == (FScriptContainerElement *)0x0) {
        return bVar5;
      }
      FMemory::Free(pFVar1);
      return bVar5;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a8.SharedReferenceCount.ReferenceController);
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return false;
}

// RequestMailItemReceive @ 14bc10fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl FDS_MailService::RequestMailItemReceive(FString *param_1,EDS_MailCategoryType param_2)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  void *pvVar4;
  FDS_ClientMessage_Twoway *pFVar5;
  bool bVar6;
  undefined1 uVar7;
  TSharedRef<FDS_ClientMessage_Twoway,1> *pTVar8;
  Message *pMVar9;
  void *pvVar10;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar11;
  FDS_AuthData *pFVar12;
  undefined8 *puVar13;
  UDS_NetworkManager *this_00;
  Arena *pAVar14;
  ulong64 uVar15;
  undefined1 auStackY_d8 [32];
  TSharedPtr<FDS_ClientMessage_Twoway,1> local_a8;
  FDestructionSentinel local_98;
  undefined1 *local_80;
  FDestructionSentinel local_78;
  undefined1 *local_60;
  TSharedRef<FDS_ClientMessage_Twoway,1> local_58;
  _Bxty local_48;
  undefined8 local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  pTVar8 = MakeShared<FDS_ClientMessage_Twoway,1>(&local_58);
  local_a8.Object = pTVar8->Object;
  local_a8.SharedReferenceCount.ReferenceController =
       (pTVar8->SharedReferenceCount).ReferenceController;
  if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  if ((local_a8.Object == (FDS_ClientMessage_Twoway *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  pFVar5 = local_a8.Object;
  if (((local_a8.Object)->clientMsg)._impl_._oneof_case_[0] != 0x558d) {
    client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
              (&(local_a8.Object)->clientMsg);
    (pFVar5->clientMsg)._impl_._oneof_case_[0] = 0x558d;
    pAVar14 = (Arena *)((pFVar5->clientMsg)._padding_ & 0xfffffffffffffffe);
    if (((pFVar5->clientMsg)._padding_ & 1) != 0) {
      pAVar14 = (Arena *)(pAVar14->impl_).tag_and_id_;
    }
    pMVar9 = google::protobuf::Arena::DefaultConstruct<client_msg_twoway::MailItemReceiveRequest>
                       (pAVar14);
    (pFVar5->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar9;
  }
  pMVar9 = (pFVar5->clientMsg)._impl_.ClientMessageTwoway_.pingreq_;
  if (pMVar9 != (Message *)0x0) {
    if (1 < (param_1->Data).ArrayNum) {
      *(uint *)(pMVar9 + 1) = *(uint *)(pMVar9 + 1) | 1;
      pvVar10 = *(void **)&pMVar9[1].field_0x8;
      if (pvVar10 == (void *)0x0) {
        pAVar14 = (Arena *)(*(ulonglong *)&pMVar9->field_0x8 & 0xfffffffffffffffe);
        if ((pMVar9->field_0x8 & 1) != 0) {
          pAVar14 = (Arena *)(pAVar14->impl_).tag_and_id_;
        }
        pvVar10 = google::protobuf::Arena::DefaultConstruct<UniqueId>(pAVar14);
        *(void **)&pMVar9[1].field_0x8 = pvVar10;
      }
      *(uint *)((longlong)pvVar10 + 0x10) = *(uint *)((longlong)pvVar10 + 0x10) | 1;
      pAVar14 = (Arena *)(*(ulonglong *)((longlong)pvVar10 + 8) & 0xfffffffffffffffe);
      if ((*(byte *)((longlong)pvVar10 + 8) & 1) != 0) {
        pAVar14 = (Arena *)(pAVar14->impl_).tag_and_id_;
      }
      this = google::protobuf::internal::ArenaStringPtr::Mutable
                       ((ArenaStringPtr *)((longlong)pvVar10 + 0x18),pAVar14);
      pbVar11 = DS_Util::ConvertFStringToBytes
                          ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           &local_48,param_1);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=(this,pbVar11);
      if (0xf < uStack_30) {
        pvVar4 = (void *)CONCAT71(local_48._1_7_,local_48._Buf[0]);
        uVar15 = uStack_30 + 1;
        pvVar10 = pvVar4;
        if (0xfff < uVar15) {
          pvVar10 = *(void **)((longlong)pvVar4 + -8);
          uVar15 = uStack_30 + 0x28;
          if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar10))) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete(pvVar10,uVar15);
      }
      local_38 = ___xmm_000000000000000f0000000000000000;
      uStack_30 = _UNK_15076add8;
      local_48._Buf[0] = '\0';
    }
    pFVar12 = TDS_Singleton<FDS_AuthData>::GetInst();
    *(long64 *)(pMVar9 + 2) = pFVar12->PlayerUID;
    uVar1 = *(uint *)(pMVar9 + 1);
    *(uint *)&pMVar9[2].field_0x8 = (uint)param_2;
    *(uint *)(pMVar9 + 1) = uVar1 | 6;
    if ((local_a8.Object == (FDS_ClientMessage_Twoway *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
    pFVar5 = local_a8.Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(local_a8.Object)->SuccessDel,(FWriteAccessScope *)&local_98);
    local_80 = &(pFVar5->SuccessDel).field_0x8;
    puVar13 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_80);
    if (puVar13 != (undefined8 *)0x0) {
      *puVar13 = &
                 ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar15 = FDelegateHandle::GenerateNewID();
      puVar13[2] = uVar15;
      *puVar13 = &
                 ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar13[3] = ResponseMailItemReceive;
    }
    if (local_98.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
    }
    if ((local_a8.Object == (FDS_ClientMessage_Twoway *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
    pFVar5 = local_a8.Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(local_a8.Object)->FailDel
               ,(FWriteAccessScope *)&local_78);
    local_60 = &(pFVar5->FailDel).field_0x8;
    puVar13 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_60);
    if (puVar13 != (undefined8 *)0x0) {
      *puVar13 = &
                 ___7__TCommonDelegateInstanceState___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar15 = FDelegateHandle::GenerateNewID();
      puVar13[2] = uVar15;
      *puVar13 = &
                 ___7__TBaseStaticDelegateInstance___A6A_NAEBUFDS_ErrorMessageInfo__AEBVMessage_protobuf_google___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar13[3] = ResponseMailItemReceive_Failure;
    }
    if (local_78.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
    }
    this_00 = UDS_NetworkManager::GetInst();
    if (this_00 != (UDS_NetworkManager *)0x0) {
      bVar6 = UDS_NetworkManager::SendTwoWayPacket(this_00,&local_a8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_a8.SharedReferenceCount.ReferenceController);
      pFVar2 = (param_1->Data).AllocatorInstance.Data;
      if (pFVar2 == (FScriptContainerElement *)0x0) {
        return bVar6;
      }
      FMemory::Free(pFVar2);
      return bVar6;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a8.SharedReferenceCount.ReferenceController);
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return false;
}

// ResponseMailAlert @ 14bc19f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_MailService::ResponseMailAlert(ServerMessages *param_1)

{
  bool bVar1;
  UDS_EventManager *this;
  UDS_LogManager *pUVar2;
  UDS_MailEvent *pUVar3;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  MailAlertResponseDefaultTypeInternal *pMVar4;
  undefined1 auStackY_188 [32];
  MailAlertResponse local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if ((param_1->_impl_)._oneof_case_[0] == 0x5460) {
    pMVar4 = *(MailAlertResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pMVar4 = &server_msg::_MailAlertResponse_default_instance_;
  }
  server_msg::MailAlertResponse::MailAlertResponse(&local_158,(Arena *)0x0,&pMVar4->_instance);
  local_158._padding_ = (longlong)&___7MailAlertResponse_server_msg__6B_;
  this = UDS_EventManager::GetInst();
  if (this != (UDS_EventManager *)0x0) {
    if ((char)this->_padding_ == '\x01') {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 != (UDS_LogManager *)0x0) {
        pUVar2 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_EventManager::GetEvent",0x1a,Yes);
        UDS_LogManager::PrintLog
                  (pUVar2,1,Warning,local_138.Ptr,0x31,
                   L"Cannot access event during UDS_EventManager destruction.");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    else {
      pUVar3 = UDS_EventManager::GetEventInternal<UDS_MailEvent>(this);
      if (pUVar3 != (UDS_MailEvent *)0x0) {
        if (local_158._impl_.is_reward_ == false) {
          this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                    &pUVar3->OnMailUnreadNotification;
        }
        else {
          this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                    &pUVar3->OnMailRewardNotification;
        }
        bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound(this_00);
        if (bVar1) {
          TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                    ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)this_00);
        }
        goto LAB_14bc1a08f;
      }
    }
  }
  pUVar2 = UDS_LogManager::GetInst();
  if (pUVar2 != (UDS_LogManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_MailService::ResponseMailAlert",0x22,Yes);
    UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x9d,L"mailEvent is nullptr.");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
LAB_14bc1a08f:
  server_msg::MailAlertResponse::~MailAlertResponse(&local_158);
  return;
}

// ResponseMailDelete @ 14bc1a100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_MailService::ResponseMailDelete(ServerMessagesTwoway *param_1)

{
  UDS_MailManager *this;
  UDS_LogManager *pUVar1;
  UniqueId *pUVar2;
  MailDeleteResponseDefaultTypeInternal *pMVar3;
  undefined1 auStackY_1a8 [32];
  FString local_178;
  MailDeleteResponse local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((param_1->_impl_)._oneof_case_[0] == 0x558e) {
    pMVar3 = (MailDeleteResponseDefaultTypeInternal *)
             (param_1->_impl_).ServerMessageTwoway_.pongres_;
  }
  else {
    pMVar3 = &server_msg_twoway::_MailDeleteResponse_default_instance_;
  }
  server_msg_twoway::MailDeleteResponse::MailDeleteResponse
            (&local_168,(Arena *)0x0,&pMVar3->_instance);
  local_168._padding_ = (longlong)&___7MailDeleteResponse_server_msg_twoway__6B_;
  this = UDS_MailManager::GetInst();
  if (this == (UDS_MailManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 == (UDS_LogManager *)0x0) goto LAB_14bc1a218;
    pUVar1 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_MailService::ResponseMailDelete",0x23,Yes);
    UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x90,L"mailManager is nullptr");
    local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_138._padding_;
  }
  else {
    pUVar2 = &_UniqueId_default_instance_._instance;
    if (local_168._impl_.mail_uid_ != (UniqueId *)0x0) {
      pUVar2 = local_168._impl_.mail_uid_;
    }
    DS_Util::ConvertBytesToFString
              (&local_178,
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               ((ulonglong)(pUVar2->_impl_).value_.tagged_ptr_.ptr_ & 0xfffffffffffffffc));
    UDS_MailManager::DeleteMail
              (this,&local_178,(EDS_MailCategoryType)local_168._impl_.mail_category_type_,true);
  }
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
LAB_14bc1a218:
  server_msg_twoway::MailDeleteResponse::~MailDeleteResponse(&local_168);
  return;
}

// ResponseMailItemReceive @ 14bc1a250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_MailService::ResponseMailItemReceive(ServerMessagesTwoway *param_1)

{
  UDS_MailManager *this;
  UDS_LogManager *pUVar1;
  UniqueId *pUVar2;
  MailItemReceiveResponseDefaultTypeInternal *pMVar3;
  undefined1 auStackY_1a8 [32];
  FString local_178;
  MailItemReceiveResponse local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((param_1->_impl_)._oneof_case_[0] == 0x558d) {
    pMVar3 = (MailItemReceiveResponseDefaultTypeInternal *)
             (param_1->_impl_).ServerMessageTwoway_.pongres_;
  }
  else {
    pMVar3 = &server_msg_twoway::_MailItemReceiveResponse_default_instance_;
  }
  server_msg_twoway::MailItemReceiveResponse::MailItemReceiveResponse
            (&local_168,(Arena *)0x0,&pMVar3->_instance);
  local_168._padding_ = (longlong)&___7MailItemReceiveResponse_server_msg_twoway__6B_;
  this = UDS_MailManager::GetInst();
  if (this == (UDS_MailManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 == (UDS_LogManager *)0x0) goto LAB_14bc1a368;
    pUVar1 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_MailService::ResponseMailItemReceive",0x28,Yes);
    UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x67,L"mailManager is nullptr");
    local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_138._padding_;
  }
  else {
    pUVar2 = &_UniqueId_default_instance_._instance;
    if (local_168._impl_.mail_uid_ != (UniqueId *)0x0) {
      pUVar2 = local_168._impl_.mail_uid_;
    }
    DS_Util::ConvertBytesToFString
              (&local_178,
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               ((ulonglong)(pUVar2->_impl_).value_.tagged_ptr_.ptr_ & 0xfffffffffffffffc));
    UDS_MailManager::MailItemReceived
              (this,&local_178,(EDS_MailCategoryType)local_168._impl_.mail_category_type_,true);
  }
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
LAB_14bc1a368:
  server_msg_twoway::MailItemReceiveResponse::~MailItemReceiveResponse(&local_168);
  return;
}

// ResponseMailItemReceive_Failure @ 14bc1a3a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FDS_MailService::ResponseMailItemReceive_Failure(FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  bool bVar1;
  UDS_MailManager *this;
  UDS_LogManager *pUVar2;
  long64 lVar3;
  UniqueId *pUVar4;
  MailItemReceiveResponseDefaultTypeInternal *pMVar5;
  undefined1 auStackY_1b8 [32];
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_188;
  FString local_170;
  MailItemReceiveResponse local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  if (*(int *)&param_2[2].field_0x8 == 0x558d) {
    pMVar5 = *(MailItemReceiveResponseDefaultTypeInternal **)(param_2 + 2);
  }
  else {
    pMVar5 = &server_msg_twoway::_MailItemReceiveResponse_default_instance_;
  }
  server_msg_twoway::MailItemReceiveResponse::MailItemReceiveResponse
            (&local_160,(Arena *)0x0,&pMVar5->_instance);
  local_160._padding_ = (longlong)&___7MailItemReceiveResponse_server_msg_twoway__6B_;
  this = UDS_MailManager::GetInst();
  if (this == (UDS_MailManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_MailService::ResponseMailItemReceive_Failure",0x30,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x77,L"mailManager is nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar1 = false;
    goto LAB_14bc1a524;
  }
  pUVar4 = &_UniqueId_default_instance_._instance;
  if (local_160._impl_.mail_uid_ != (UniqueId *)0x0) {
    pUVar4 = local_160._impl_.mail_uid_;
  }
  DS_Util::ConvertBytesToFString
            (&local_170,
             (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             ((ulonglong)(pUVar4->_impl_).value_.tagged_ptr_.ptr_ & 0xfffffffffffffffc));
  UDS_MailManager::MailItemReceived
            (this,&local_170,(EDS_MailCategoryType)local_160._impl_.mail_category_type_,false);
  if (param_1->ErrorCode == InventorySlotShortage) {
    lVar3 = 0x4e25;
LAB_14bc1a4e4:
    local_188._0_8_ = 0;
    local_188._8_8_ = 0;
    local_188._16_4_ = 0;
    UDS_UIMessageManager::OpenMsgByStringUi(lVar3,Alert_None_01,&local_188);
    bVar1 = true;
  }
  else {
    if (param_1->ErrorCode == MoneyMaximumHolding) {
      lVar3 = 0x9c73;
      goto LAB_14bc1a4e4;
    }
    bVar1 = ProcessError(param_1,param_2);
  }
  if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.Data.AllocatorInstance.Data);
  }
LAB_14bc1a524:
  server_msg_twoway::MailItemReceiveResponse::~MailItemReceiveResponse(&local_160);
  return bVar1;
}

