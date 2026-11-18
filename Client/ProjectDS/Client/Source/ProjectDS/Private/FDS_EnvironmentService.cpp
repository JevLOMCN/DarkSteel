// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 4

// ProcessError @ 14bbce7f0

bool __cdecl FDS_EnvironmentService::ProcessError(FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  return false;
}

// RequestWeather @ 14bbdc1a0

void __cdecl
FDS_EnvironmentService::RequestWeather(int param_1,int param_2,EDS_EnvironmentUpdate param_3)

{
  uint uVar1;
  code *pcVar2;
  FDS_ClientMessage_Twoway *pFVar3;
  bool bVar4;
  UDS_NetworkManager *this;
  TSharedRef<FDS_ClientMessage_Twoway,1> *pTVar5;
  Message *pMVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  Arena *pAVar9;
  TSharedPtr<FDS_ClientMessage_Twoway,1> local_68;
  TSharedRef<FDS_ClientMessage_Twoway,1> local_58;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this = UDS_NetworkManager::GetInst();
  if (this != (UDS_NetworkManager *)0x0) {
    bVar4 = UDS_NetworkManager::GetIsConnected(this);
    if (bVar4) {
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
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pFVar3 = local_68.Object;
      if (((local_68.Object)->clientMsg)._impl_._oneof_case_[0] != 0x56b8) {
        client_msg_twoway::ClientMessagesTwoway::clear_ClientMessageTwoway
                  (&(local_68.Object)->clientMsg);
        (pFVar3->clientMsg)._impl_._oneof_case_[0] = 0x56b8;
        pAVar9 = (Arena *)((pFVar3->clientMsg)._padding_ & 0xfffffffffffffffe);
        if (((pFVar3->clientMsg)._padding_ & 1) != 0) {
          pAVar9 = (Arena *)(pAVar9->impl_).tag_and_id_;
        }
        pMVar6 = google::protobuf::Arena::DefaultConstruct<client_msg_twoway::WeatherRequest>
                           (pAVar9);
        (pFVar3->clientMsg)._impl_.ClientMessageTwoway_.pingreq_ = pMVar6;
      }
      pMVar6 = (pFVar3->clientMsg)._impl_.ClientMessageTwoway_.pingreq_;
      if (pMVar6 != (Message *)0x0) {
        *(int *)&pMVar6[1].field_0x8 = param_1;
        uVar1 = *(uint *)(pMVar6 + 1);
        *(int *)&pMVar6[1].field_0xc = param_2;
        *(uint *)(pMVar6 + 1) = uVar1 | 3;
        if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        pFVar3 = local_68.Object;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &(local_68.Object)->SuccessDel,(FWriteAccessScope *)&local_48);
        local_30 = &(pFVar3->SuccessDel).field_0x8;
        puVar7 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_30);
        if (puVar7 != (undefined8 *)0x0) {
          *puVar7 = &
                    ___7__TCommonDelegateInstanceState___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy__W4EDS_EnvironmentUpdate____6B_
          ;
          *(EDS_EnvironmentUpdate *)(puVar7 + 1) = param_3;
          uVar8 = FDelegateHandle::GenerateNewID();
          puVar7[2] = uVar8;
          *puVar7 = &
                    ___7__TBaseStaticDelegateInstance___A6AXAEBVServerMessagesTwoway_server_msg_twoway___ZUFDefaultDelegateUserPolicy__W4EDS_EnvironmentUpdate____6B_
          ;
          puVar7[3] = ResponseWeather;
        }
        if (local_48.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
        }
        if (local_68.Object == (FDS_ClientMessage_Twoway *)0x0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
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
        UDS_NetworkManager::SendTwoWayPacket(this,&local_68);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
    }
  }
  return;
}

// ResponseWeather @ 14bbddc10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FDS_EnvironmentService::ResponseWeather(ServerMessagesTwoway *param_1,EDS_EnvironmentUpdate param_2)

{
  UDS_EnvironmentManager *this;
  UDS_LogManager *pUVar1;
  WeatherResponseDefaultTypeInternal *pWVar2;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this = UDS_EnvironmentManager::GetInst();
  if (this == (UDS_EnvironmentManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_EnvironmentService::ResponseWeather",0x27,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x2e,L"environmentManager == nullptr")
      ;
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    if ((param_1->_impl_)._oneof_case_[0] == 0x56b8) {
      pWVar2 = (WeatherResponseDefaultTypeInternal *)(param_1->_impl_).ServerMessageTwoway_.pongres_
      ;
    }
    else {
      pWVar2 = &server_msg_twoway::_WeatherResponse_default_instance_;
    }
    UDS_EnvironmentManager::OnReceiveWeather(this,&pWVar2->_instance,param_2);
  }
  return;
}

// ResponseWeatherCheat @ 14bbddd10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_EnvironmentService::ResponseWeatherCheat(ServerMessages *param_1)

{
  UDS_EnvironmentManager *this;
  UDS_LogManager *pUVar1;
  WeatherCheatResponseDefaultTypeInternal *pWVar2;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this = UDS_EnvironmentManager::GetInst();
  if (this == (UDS_EnvironmentManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_EnvironmentService::ResponseWeatherCheat",0x2c,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x3c,L"environmentManager == nullptr")
      ;
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    if ((param_1->_impl_)._oneof_case_[0] == 22000) {
      pWVar2 = *(WeatherCheatResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
    }
    else {
      pWVar2 = &server_msg::_WeatherCheatResponse_default_instance_;
    }
    UDS_EnvironmentManager::OnReceiveWeatherCheat(this,&pWVar2->_instance);
  }
  return;
}

