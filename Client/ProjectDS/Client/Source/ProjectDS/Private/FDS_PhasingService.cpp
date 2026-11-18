// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 20

// ProcessError @ 14bc025c0

bool __cdecl FDS_PhasingService::ProcessError(FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  return false;
}

// ReceivePhasingEnd @ 14bc058c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_PhasingService::ReceivePhasingEnd(ServerMessages *param_1)

{
  UDS_PhasingManager *this;
  UDS_LogManager *pUVar1;
  PhasingEndResponseDefaultTypeInternal *pPVar2;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this = UDS_PhasingManager::GetInst();
  if (this == (UDS_PhasingManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_PhasingService::ReceivePhasingEnd",0x25,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x7f,L"phasingMng is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    if ((param_1->_impl_)._oneof_case_[0] == 0x9c73) {
      pPVar2 = *(PhasingEndResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
    }
    else {
      pPVar2 = &server_msg::_PhasingEndResponse_default_instance_;
    }
    UDS_PhasingManager::ReceivePhasingEnd(this,&pPVar2->_instance);
  }
  return;
}

// ReceivePhasingResultNotify @ 14bc059b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_PhasingService::ReceivePhasingResultNotify(ServerMessages *param_1)

{
  UDS_PhasingManager *this;
  UDS_LogManager *pUVar1;
  PhasingResultNotifyDefaultTypeInternal *pPVar2;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this = UDS_PhasingManager::GetInst();
  if (this == (UDS_PhasingManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_PhasingService::ReceivePhasingResultNotify",0x2e,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0xc0,L"phasingMng is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    if ((param_1->_impl_)._oneof_case_[0] == 0x9c74) {
      pPVar2 = *(PhasingResultNotifyDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
    }
    else {
      pPVar2 = &server_msg::_PhasingResultNotify_default_instance_;
    }
    UDS_PhasingManager::ReceivePhasingResultNotify(this,&pPVar2->_instance);
  }
  return;
}

// ReceivePhasingStart @ 14bc05aa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_PhasingService::ReceivePhasingStart(ServerMessages *param_1)

{
  UDS_PhasingManager *this;
  UDS_LogManager *pUVar1;
  PhasingStartResponseDefaultTypeInternal *pPVar2;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this = UDS_PhasingManager::GetInst();
  if (this == (UDS_PhasingManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_PhasingService::ReceivePhasingStart",0x27,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x72,L"phasingMng is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    if ((param_1->_impl_)._oneof_case_[0] == 0x9c72) {
      pPVar2 = *(PhasingStartResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
    }
    else {
      pPVar2 = &server_msg::_PhasingStartResponse_default_instance_;
    }
    UDS_PhasingManager::ReceivePhasingStart(this,&pPVar2->_instance);
  }
  return;
}

// ReceiveScriptBlockingWallStateInfo @ 14bc08de0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_PhasingService::ReceiveScriptBlockingWallStateInfo(ServerMessages *param_1)

{
  UDS_PhasingManager *this;
  UDS_LogManager *pUVar1;
  ScriptBlockingWallStateResponseDefaultTypeInternal *pSVar2;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this = UDS_PhasingManager::GetInst();
  if (this == (UDS_PhasingManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_PhasingService::ReceiveScriptBlockingWallStateInfo",0x36,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0xcd,L"phasingMng is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    if ((param_1->_impl_)._oneof_case_[0] == 0x9f) {
      pSVar2 = *(ScriptBlockingWallStateResponseDefaultTypeInternal **)
                &(param_1->_impl_).ServerMessage_;
    }
    else {
      pSVar2 = &server_msg::_ScriptBlockingWallStateResponse_default_instance_;
    }
    UDS_PhasingManager::ReceiveScriptBlockingWallStateInfo(this,&pSVar2->_instance);
  }
  return;
}

// ReceiveScriptMissionTrackerStart @ 14bc08ed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_PhasingService::ReceiveScriptMissionTrackerStart(ServerMessages *param_1)

{
  UDS_PhasingManager *this;
  UDS_LogManager *pUVar1;
  ScriptMissionTrackerStartResponseDefaultTypeInternal *pSVar2;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this = UDS_PhasingManager::GetInst();
  if (this == (UDS_PhasingManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_PhasingService::ReceiveScriptMissionTrackerStart",0x34,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x99,L"phasingMng is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    if ((param_1->_impl_)._oneof_case_[0] == 0x9b) {
      pSVar2 = *(ScriptMissionTrackerStartResponseDefaultTypeInternal **)
                &(param_1->_impl_).ServerMessage_;
    }
    else {
      pSVar2 = &server_msg::_ScriptMissionTrackerStartResponse_default_instance_;
    }
    UDS_PhasingManager::ReceiveScriptMissionTrackerStart(this,&pSVar2->_instance);
  }
  return;
}

// ReceiveScriptMissionTrackerUpdate @ 14bc08fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_PhasingService::ReceiveScriptMissionTrackerUpdate(ServerMessages *param_1)

{
  UDS_PhasingManager *this;
  UDS_LogManager *pUVar1;
  ScriptMissionTrackerUpdateResponseDefaultTypeInternal *pSVar2;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this = UDS_PhasingManager::GetInst();
  if (this == (UDS_PhasingManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_PhasingService::ReceiveScriptMissionTrackerUpdate",0x35,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0xa6,L"phasingMng is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    if ((param_1->_impl_)._oneof_case_[0] == 0x9c) {
      pSVar2 = *(ScriptMissionTrackerUpdateResponseDefaultTypeInternal **)
                &(param_1->_impl_).ServerMessage_;
    }
    else {
      pSVar2 = &server_msg::_ScriptMissionTrackerUpdateResponse_default_instance_;
    }
    UDS_PhasingManager::ReceiveScriptMissionTrackerUpdate(this,&pSVar2->_instance);
  }
  return;
}

// ReceiveScriptPhasingContinuousCallStartResponse @ 14bc090b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FDS_PhasingService::ReceiveScriptPhasingContinuousCallStartResponse(ServerMessages *param_1)

{
  UDS_PhasingManager *this;
  UDS_LogManager *pUVar1;
  ScriptPhasingContinuousCallStartResponseDefaultTypeInternal *pSVar2;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this = UDS_PhasingManager::GetInst();
  if (this == (UDS_PhasingManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_PhasingService::ReceiveScriptPhasingContinuousCallStartResponse",
                 0x43,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x8c,L"phasingMng is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    if ((param_1->_impl_)._oneof_case_[0] == 0x9e) {
      pSVar2 = *(ScriptPhasingContinuousCallStartResponseDefaultTypeInternal **)
                &(param_1->_impl_).ServerMessage_;
    }
    else {
      pSVar2 = &server_msg::_ScriptPhasingContinuousCallStartResponse_default_instance_;
    }
    UDS_PhasingManager::ReceiveScriptPhasingContinuousCallStartResponse(this,&pSVar2->_instance);
  }
  return;
}

// ReceiveZoneEventNotifyResponse @ 14bc0c900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_PhasingService::ReceiveZoneEventNotifyResponse(ServerMessages *param_1)

{
  UDS_PhasingManager *this;
  UDS_LogManager *pUVar1;
  ZoneEventNotifyResponseDefaultTypeInternal *pZVar2;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this = UDS_PhasingManager::GetInst();
  if (this == (UDS_PhasingManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_PhasingService::ReceiveZoneEventNotifyResponse",0x32,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0xb3,L"phasingMng is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    if ((param_1->_impl_)._oneof_case_[0] == 0x96) {
      pZVar2 = *(ZoneEventNotifyResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
    }
    else {
      pZVar2 = &server_msg::_ZoneEventNotifyResponse_default_instance_;
    }
    UDS_PhasingManager::ReceiveZoneEventNotifyResponse(this,&pZVar2->_instance);
  }
  return;
}

// RequestBreachDetailInfo @ 14bc0d940

bool __cdecl FDS_PhasingService::RequestBreachDetailInfo(ulong64 *param_1)

{
  code *pcVar1;
  FDS_ClientMessage_Twoway *pFVar2;
  bool bVar3;
  undefined1 uVar4;
  TSharedRef<FDS_ClientMessage_Twoway,1> *pTVar5;
  Message *pMVar6;
  UDS_NetworkManager *this;
  undefined8 *puVar7;
  ulong64 uVar8;
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
  if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  pFVar2 = local_68.Object;
  if (((local_68.Object)->clientMsg)._impl_._oneof_case_[0] != 22000) {
    client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
              (&(local_68.Object)->clientMsg);
    (pFVar2->clientMsg)._impl_._oneof_case_[0] = 22000;
    pAVar9 = (Arena *)((pFVar2->clientMsg)._padding_ & 0xfffffffffffffffe);
    if (((pFVar2->clientMsg)._padding_ & 1) != 0) {
      pAVar9 = (Arena *)(pAVar9->impl_).tag_and_id_;
    }
    pMVar6 = google::protobuf::Arena::DefaultConstruct<client_msg_twoway::BreachDetailInfoRequest>
                       (pAVar9);
    (pFVar2->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar6;
  }
  pMVar6 = (pFVar2->clientMsg)._impl_.ClientMessageTwoway_.pingreq_;
  if (pMVar6 != (Message *)0x0) {
    *(ulong64 *)&pMVar6[1].field_0x8 = *param_1;
    *(uint *)(pMVar6 + 1) = *(uint *)(pMVar6 + 1) | 1;
    this = UDS_NetworkManager::GetInst();
    if (this != (UDS_NetworkManager *)0x0) {
      if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
      }
      pFVar2 = local_68.Object;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &(local_68.Object)->SuccessDel,(FWriteAccessScope *)&local_48);
      local_30 = &(pFVar2->SuccessDel).field_0x8;
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
        puVar7[3] = ResponseBreachDetailInfo_Success;
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
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
      }
      pFVar2 = local_68.Object;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &(local_68.Object)->FailDel,(FWriteAccessScope *)&local_28);
      local_10 = &(pFVar2->FailDel).field_0x8;
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
        puVar7[3] = ResponseBreachDetailInfo_Failure;
      }
      if (local_28.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
      }
      bVar3 = UDS_NetworkManager::SendTwoWayPacket(this,&local_68);
      goto LAB_14bc0db55;
    }
  }
  bVar3 = false;
LAB_14bc0db55:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  return bVar3;
}

// RequestBreachEnter @ 14bc0db80

bool __cdecl FDS_PhasingService::RequestBreachEnter(ulong64 *param_1,int param_2)

{
  code *pcVar1;
  FDS_ClientMessage_Twoway *pFVar2;
  bool bVar3;
  undefined1 uVar4;
  TSharedRef<FDS_ClientMessage_Twoway,1> *pTVar5;
  Message *pMVar6;
  UDS_NetworkManager *this;
  undefined8 *puVar7;
  ulong64 uVar8;
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
  if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  pFVar2 = local_68.Object;
  if (((local_68.Object)->clientMsg)._impl_._oneof_case_[0] != 0x55f1) {
    client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
              (&(local_68.Object)->clientMsg);
    (pFVar2->clientMsg)._impl_._oneof_case_[0] = 0x55f1;
    pAVar9 = (Arena *)((pFVar2->clientMsg)._padding_ & 0xfffffffffffffffe);
    if (((pFVar2->clientMsg)._padding_ & 1) != 0) {
      pAVar9 = (Arena *)(pAVar9->impl_).tag_and_id_;
    }
    pMVar6 = google::protobuf::Arena::DefaultConstruct<client_msg_twoway::BreachEnterRequest>
                       (pAVar9);
    (pFVar2->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar6;
  }
  pMVar6 = (pFVar2->clientMsg)._impl_.ClientMessageTwoway_.pingreq_;
  if (pMVar6 != (Message *)0x0) {
    *(ulong64 *)&pMVar6[1].field_0x8 = *param_1;
    *(int *)(pMVar6 + 2) = param_2;
    *(uint *)(pMVar6 + 1) = *(uint *)(pMVar6 + 1) | 3;
    this = UDS_NetworkManager::GetInst();
    if (this != (UDS_NetworkManager *)0x0) {
      if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
      }
      pFVar2 = local_68.Object;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &(local_68.Object)->SuccessDel,(FWriteAccessScope *)&local_48);
      local_30 = &(pFVar2->SuccessDel).field_0x8;
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
        puVar7[3] = ResponseBreachEnter;
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
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
      }
      pFVar2 = local_68.Object;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &(local_68.Object)->FailDel,(FWriteAccessScope *)&local_28);
      local_10 = &(pFVar2->FailDel).field_0x8;
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
      bVar3 = UDS_NetworkManager::SendTwoWayPacket(this,&local_68);
      goto LAB_14bc0dda8;
    }
  }
  bVar3 = false;
LAB_14bc0dda8:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  return bVar3;
}

// RequestInnEnter @ 14bc0e5c0

bool __cdecl FDS_PhasingService::RequestInnEnter(ulong64 *param_1,int param_2)

{
  code *pcVar1;
  FDS_ClientMessage_Twoway *pFVar2;
  bool bVar3;
  undefined1 uVar4;
  TSharedRef<FDS_ClientMessage_Twoway,1> *pTVar5;
  Message *pMVar6;
  UDS_NetworkManager *this;
  undefined8 *puVar7;
  ulong64 uVar8;
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
  if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  pFVar2 = local_68.Object;
  if (((local_68.Object)->clientMsg)._impl_._oneof_case_[0] != 0x55f2) {
    client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
              (&(local_68.Object)->clientMsg);
    (pFVar2->clientMsg)._impl_._oneof_case_[0] = 0x55f2;
    pAVar9 = (Arena *)((pFVar2->clientMsg)._padding_ & 0xfffffffffffffffe);
    if (((pFVar2->clientMsg)._padding_ & 1) != 0) {
      pAVar9 = (Arena *)(pAVar9->impl_).tag_and_id_;
    }
    pMVar6 = google::protobuf::Arena::DefaultConstruct<client_msg_twoway::InnEnterRequest>(pAVar9);
    (pFVar2->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar6;
  }
  pMVar6 = (pFVar2->clientMsg)._impl_.ClientMessageTwoway_.pingreq_;
  if (pMVar6 != (Message *)0x0) {
    *(ulong64 *)&pMVar6[1].field_0x8 = *param_1;
    *(int *)(pMVar6 + 2) = param_2;
    *(uint *)(pMVar6 + 1) = *(uint *)(pMVar6 + 1) | 3;
    this = UDS_NetworkManager::GetInst();
    if (this != (UDS_NetworkManager *)0x0) {
      if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
      }
      pFVar2 = local_68.Object;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &(local_68.Object)->SuccessDel,(FWriteAccessScope *)&local_48);
      local_30 = &(pFVar2->SuccessDel).field_0x8;
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
        puVar7[3] = ResponseInnEnter;
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
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
      }
      pFVar2 = local_68.Object;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &(local_68.Object)->FailDel,(FWriteAccessScope *)&local_28);
      local_10 = &(pFVar2->FailDel).field_0x8;
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
      bVar3 = UDS_NetworkManager::SendTwoWayPacket(this,&local_68);
      goto LAB_14bc0e7e8;
    }
  }
  bVar3 = false;
LAB_14bc0e7e8:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  return bVar3;
}

// RequestPhasingPosition @ 14bc12940

bool __cdecl FDS_PhasingService::RequestPhasingPosition(PhasingType *param_1,int *param_2)

{
  code *pcVar1;
  FDS_ClientMessage_Twoway *pFVar2;
  bool bVar3;
  undefined1 uVar4;
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
  if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  pFVar2 = local_68.Object;
  if (((local_68.Object)->clientMsg)._impl_._oneof_case_[0] != 0x5140) {
    client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
              (&(local_68.Object)->clientMsg);
    (pFVar2->clientMsg)._impl_._oneof_case_[0] = 0x5140;
    pAVar9 = (Arena *)((pFVar2->clientMsg)._padding_ & 0xfffffffffffffffe);
    if (((pFVar2->clientMsg)._padding_ & 1) != 0) {
      pAVar9 = (Arena *)(pAVar9->impl_).tag_and_id_;
    }
    pMVar6 = google::protobuf::Arena::DefaultConstruct<client_msg_twoway::PhasingPositionRequest>
                       (pAVar9);
    (pFVar2->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar6;
  }
  pMVar6 = (pFVar2->clientMsg)._impl_.ClientMessageTwoway_.pingreq_;
  if (pMVar6 != (Message *)0x0) {
    *(PhasingType *)(pMVar6 + 2) = *param_1;
    *(uint *)(pMVar6 + 1) = *(uint *)(pMVar6 + 1) | 2;
    *(longlong *)&pMVar6[1].field_0x8 = (longlong)*param_2;
    *(uint *)(pMVar6 + 1) = *(uint *)(pMVar6 + 1) | 1;
    if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    pFVar2 = local_68.Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(local_68.Object)->SuccessDel,(FWriteAccessScope *)&local_48);
    local_30 = &(pFVar2->SuccessDel).field_0x8;
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
      puVar7[3] = ResponsePhasingPosition_Success;
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
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    pFVar2 = local_68.Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(local_68.Object)->FailDel
               ,(FWriteAccessScope *)&local_28);
    local_10 = &(pFVar2->FailDel).field_0x8;
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
      puVar7[3] = ResponsePhasingPosition_Failure;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    this = UDS_NetworkManager::GetInst();
    if (this != (UDS_NetworkManager *)0x0) {
      bVar3 = UDS_NetworkManager::SendTwoWayPacket(this,&local_68);
      goto LAB_14bc12b60;
    }
  }
  bVar3 = false;
LAB_14bc12b60:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  return bVar3;
}

// ResponseBreachDetailInfo_Failure @ 14bc19580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FDS_PhasingService::ResponseBreachDetailInfo_Failure(FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  bool bVar1;
  UDS_PhasingManager *pUVar2;
  UDS_LogManager *pUVar3;
  UDS_PlayerData *this;
  BreachDetailInfoResponseDefaultTypeInternal *pBVar4;
  undefined1 auStackY_178 [32];
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pUVar2 = UDS_PhasingManager::GetInst();
  if (pUVar2 == (UDS_PhasingManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_PhasingService::ResponseBreachDetailInfo_Failure",0x34,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x12a,L"phasingMng is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    if (*(int *)&param_2[2].field_0x8 == 22000) {
      pBVar4 = *(BreachDetailInfoResponseDefaultTypeInternal **)(param_2 + 2);
    }
    else {
      pBVar4 = &server_msg_twoway::_BreachDetailInfoResponse_default_instance_;
    }
    UDS_PlayerData::GetMainPlayerData();
    bVar1 = FWeakObjectPtr::IsValid(local_148);
    if (bVar1) {
      this = (UDS_PlayerData *)FWeakObjectPtr::Get(local_148);
      UDS_PlayerData::OnBreachDetailInfoFailure(this,param_1->ErrorCode,&pBVar4->_instance);
    }
  }
  return false;
}

// ResponseBreachDetailInfo_Success @ 14bc196b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl FDS_PhasingService::ResponseBreachDetailInfo_Success(ServerMessagesTwoway *param_1)

{
  int iVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UDS_PlayerData *this;
  FDS_EntityBase *this_00;
  FWeakObjectPtr *this_01;
  UObject *pUVar4;
  UClass *pUVar5;
  ADS_StuffPortal *this_02;
  BreachDetailInfoResponseDefaultTypeInternal *pBVar6;
  undefined1 auStackY_198 [32];
  uint uVar7;
  wchar_t *pwVar8;
  FWeakObjectPtr local_168;
  UObject *local_160;
  FWeakObjectPtr local_158;
  ulong64 local_150;
  undefined1 local_148 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if ((param_1->_impl_)._oneof_case_[0] == 22000) {
    pBVar6 = (BreachDetailInfoResponseDefaultTypeInternal *)
             (param_1->_impl_).ServerMessageTwoway_.pongres_;
  }
  else {
    pBVar6 = &server_msg_twoway::_BreachDetailInfoResponse_default_instance_;
  }
  UDS_PlayerData::GetMainPlayerData();
  bVar2 = FWeakObjectPtr::IsValid(&local_158);
  if (!bVar2) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_PhasingService::ResponseBreachDetailInfo_Success",0x34,Yes);
    pwVar8 = L"playerData is nullptr.";
    uVar7 = 0x10e;
    goto LAB_14bc19750;
  }
  this = (UDS_PlayerData *)FWeakObjectPtr::Get(&local_158);
  UDS_PlayerData::SetBreachDetailInfoResponse(this,&pBVar6->_instance);
  local_150 = (pBVar6->_instance)._impl_.stuffportal_entity_id_;
  this_00 = FDS_EntityBase::GetEntityBase(&local_150);
  if (this_00 == (FDS_EntityBase *)0x0) {
    return;
  }
  bVar2 = FDS_EntityBase::IsBreach(this_00);
  if ((!bVar2) && (bVar2 = FDS_EntityBase::IsGate(this_00), !bVar2)) {
    return;
  }
  local_160 = (UObject *)0x80;
  (**(code **)(this_00->_padding_ + 0x60))(this_00,&local_160,0);
  this_01 = (FWeakObjectPtr *)(**(code **)(this_00->_padding_ + 0x150))(this_00,local_148);
  pUVar4 = FWeakObjectPtr::Get(this_01);
  if (pUVar4 == (UObject *)0x0) {
LAB_14bc19834:
    pUVar4 = (UObject *)0x0;
  }
  else {
    pUVar5 = Z_Construct_UClass_ADS_StuffPortal_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) goto LAB_14bc19834;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_168.ObjectIndex = 0;
  local_168.ObjectSerialNumber = 0;
  local_160 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_168,(FObjectPtr)&local_160);
  bVar2 = TWeakObjectPtr<ADS_StuffPortal,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_StuffPortal,FWeakObjectPtr> *)&local_168,(void *)0x0);
  if (!bVar2) {
    this_02 = (ADS_StuffPortal *)FWeakObjectPtr::Get(&local_168);
    ADS_StuffPortal::UpdateIsLocked(this_02);
    return;
  }
  pUVar3 = UDS_LogManager::GetInst();
  if (pUVar3 == (UDS_LogManager *)0x0) {
    return;
  }
  pUVar3 = UDS_LogManager::GetInst();
  local_138._padding_ = 0;
  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
            (&local_138,"FDS_PhasingService::ResponseBreachDetailInfo_Success",0x34,Yes);
  pwVar8 = L"stuffPortalActor is nullptr.";
  uVar7 = 0x11d;
LAB_14bc19750:
  UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,uVar7,pwVar8);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// ResponseBreachEnter @ 14bc19920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_PhasingService::ResponseBreachEnter(ServerMessagesTwoway *param_1)

{
  UDS_PhasingManager *this;
  UDS_LogManager *pUVar1;
  UDS_WorldMapManager *this_00;
  BreachEnterResponseDefaultTypeInternal *pBVar2;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this = UDS_PhasingManager::GetInst();
  if (this == (UDS_PhasingManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = (longlong)this;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_PhasingService::ResponseBreachEnter",0x27,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x13f,L"phasingMng is nullptr.");
      if ((UDS_PhasingManager *)local_138._padding_ != (UDS_PhasingManager *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    this_00 = UDS_WorldMapManager::GetInst();
    if (this_00 == (UDS_WorldMapManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      if (pUVar1 != (UDS_LogManager *)0x0) {
        pUVar1 = UDS_LogManager::GetInst();
        local_138._padding_ = (longlong)this_00;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"FDS_PhasingService::ResponseBreachEnter",0x27,Yes);
        UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x146,L"worldMapMng is nullptr.");
        if ((UDS_WorldMapManager *)local_138._padding_ != (UDS_WorldMapManager *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    else {
      if ((param_1->_impl_)._oneof_case_[0] == 0x55f1) {
        pBVar2 = (BreachEnterResponseDefaultTypeInternal *)
                 (param_1->_impl_).ServerMessageTwoway_.pongres_;
      }
      else {
        pBVar2 = &server_msg_twoway::_BreachEnterResponse_default_instance_;
      }
      UDS_PhasingManager::ResponseBreachEnter(this,&pBVar2->_instance);
      UDS_WorldMapManager::LoadBreachData(this_00,false);
    }
  }
  return;
}

// ResponseInnEnter @ 14bc19ae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_PhasingService::ResponseInnEnter(ServerMessagesTwoway *param_1)

{
  UDS_PhasingManager *this;
  UDS_LogManager *pUVar1;
  InnEnterResponseDefaultTypeInternal *pIVar2;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this = UDS_PhasingManager::GetInst();
  if (this == (UDS_PhasingManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_PhasingService::ResponseInnEnter",0x24,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x16c,L"phasingMng is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    if ((param_1->_impl_)._oneof_case_[0] == 0x55f2) {
      pIVar2 = (InnEnterResponseDefaultTypeInternal *)
               (param_1->_impl_).ServerMessageTwoway_.pongres_;
    }
    else {
      pIVar2 = &server_msg_twoway::_InnEnterResponse_default_instance_;
    }
    UDS_PhasingManager::ResponseInnEnter(this,&pIVar2->_instance);
  }
  return;
}

// ResponsePhasingPosition_Failure @ 14bc1a820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FDS_PhasingService::ResponsePhasingPosition_Failure(FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  UDS_PhasingManager *this;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this = UDS_PhasingManager::GetInst();
  if (this == (UDS_PhasingManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_PhasingService::ResponsePhasingPosition_Failure",0x33,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,100,L"phasingMng is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    UDS_PhasingManager::ResponsePhasingPosition_Failure(this,param_1->ErrorCode,param_2);
  }
  return false;
}

// ResponsePhasingPosition_Success @ 14bc1a910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_PhasingService::ResponsePhasingPosition_Success(ServerMessagesTwoway *param_1)

{
  UDS_PhasingManager *this;
  UDS_LogManager *pUVar1;
  PhasingPositionResponseDefaultTypeInternal *pPVar2;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this = UDS_PhasingManager::GetInst();
  if (this == (UDS_PhasingManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_PhasingService::ResponsePhasingPosition_Success",0x33,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x57,L"phasingMng is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    if ((param_1->_impl_)._oneof_case_[0] == 0x5140) {
      pPVar2 = (PhasingPositionResponseDefaultTypeInternal *)
               (param_1->_impl_).ServerMessageTwoway_.pongres_;
    }
    else {
      pPVar2 = &server_msg_twoway::_PhasingPositionResponse_default_instance_;
    }
    UDS_PhasingManager::ResponsePhasingPosition_Success(this,&pPVar2->_instance);
  }
  return;
}

// SendPhasingLeave @ 14bc1d290

bool __cdecl FDS_PhasingService::SendPhasingLeave(void)

{
  TReferenceControllerBase<1> *pTVar1;
  ClientMessages *this;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  TSharedRef<client_msg::ClientMessages,1> *pTVar5;
  Message *pMVar6;
  UDS_NetworkManager *this_00;
  Arena *pAVar7;
  TSharedRef<client_msg::ClientMessages,1> local_18;
  
  pTVar5 = MakeShared<client_msg::ClientMessages,1>(&local_18);
  pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
  this = pTVar5->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  if (this == (ClientMessages *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if ((this->_impl_)._oneof_case_[0] != 0x65) {
    client_msg::ClientMessages::clear_ClientMessage(this);
    (this->_impl_)._oneof_case_[0] = 0x65;
    pAVar7 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
    }
    pMVar6 = google::protobuf::Arena::DefaultConstruct<client_msg::PhasingLeaveRequest>(pAVar7);
    (this->_impl_).ClientMessage_.joincontinentreq_ = pMVar6;
  }
  if ((this->_impl_).ClientMessage_.joincontinentreq_ != (Message *)0x0) {
    this_00 = UDS_NetworkManager::GetInst();
    if (this_00 != (UDS_NetworkManager *)0x0) {
      bVar3 = UDS_NetworkManager::SendPacket(this_00,this);
      goto LAB_14bc1d33b;
    }
  }
  bVar3 = false;
LAB_14bc1d33b:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return bVar3;
}

