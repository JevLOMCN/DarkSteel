// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 3

// GetDebugString @ 14b9ef7e0

FString * __thiscall
FDS_V2TIMRequestGetConversationList::GetDebugString
          (FDS_V2TIMRequestGetConversationList *this,FString *__return_storage_ptr__)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"RequestGetConversationList");
  return __return_storage_ptr__;
}

// OnSuccessInternal @ 14ba05a10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FDS_V2TIMRequestGetConversationList::OnSuccessInternal
          (FDS_V2TIMRequestGetConversationList *this,V2TIMConversationResult *param_1)

{
  TXV2TIMConversationVector *this_00;
  code *pcVar1;
  FDS_V2TIMRequestGetHistoryMessageList *pFVar2;
  long64 lVar3;
  bool bVar4;
  UDS_ChattingManager *this_01;
  UDS_LogManager *pUVar5;
  UDS_TencentCloudChatManager *this_02;
  __uint64 _Var6;
  V2TIMConversation *pVVar7;
  __uint64 _Var8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 auStackY_568 [32];
  TSharedPtr<FDS_V2TIMRequestGetHistoryMessageList,1> local_538;
  FDS_ChatConversation local_528;
  TSharedPtr<FDS_V2TIMRequestGetJoinedGroupList,1> local_4c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_568;
  this_01 = UDS_ChattingManager::GetInst();
  if (this_01 == (UDS_ChattingManager *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_4b8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_4b8,"FDS_V2TIMRequestGetConversationList::OnSuccessInternal",0x36,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_4b8.Ptr,0x16c,L"chattingManager == nullptr");
      if ((void *)local_4b8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_4b8._padding_);
      }
    }
  }
  else if ((char)this_01->_padding_ != '\x01') {
    this_02 = UDS_TencentCloudChatManager::GetInst();
    if (this_02 == (UDS_TencentCloudChatManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 != (UDS_LogManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        local_398._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_398,"FDS_V2TIMRequestGetConversationList::OnSuccessInternal",0x36,Yes);
        UDS_LogManager::PrintLog
                  (pUVar5,1,Warning,local_398.Ptr,0x178,L"tencentChatManager is nullptr.");
        if ((void *)local_398._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_398._padding_);
        }
      }
    }
    else {
      _Var8 = 0;
      this_00 = &param_1->conversationList;
      _Var6 = TXV2TIMConversationVector::Size(this_00);
      uVar10 = _Var8;
      if (_Var6 != 0) {
        do {
          pVVar7 = TXV2TIMConversationVector::operator[](this_00,_Var8);
          local_528.ConversationID.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_528.WhisperPlayerUID = 0;
          local_528.ShowName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_528.ConversationID.Data.ArrayNum = 0;
          local_528.ConversationID.Data.ArrayMax = 0;
          local_528.GroupID.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_528.GroupID.Data.ArrayNum = 0;
          local_528.GroupID.Data.ArrayMax = 0;
          local_528.WhisperUserID.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_528.WhisperUserID.Data.ArrayNum = 0;
          local_528.WhisperUserID.Data.ArrayMax = 0;
          local_528.ShowName.Data.ArrayNum = 0;
          local_528.ShowName.Data.ArrayMax = 0;
          local_528.OrderKey = 0;
          local_528.UnreadCount = 0;
          local_528.bIsBookmark = false;
          FDS_ChatConversation::SetChatConversation(&local_528,pVVar7);
          UDS_ChattingManager::OnRecvConversation(this_01,&local_528);
          lVar3 = local_528.WhisperPlayerUID;
          if (0 < local_528.WhisperPlayerUID) {
            if (this_02->ChatState == LoggedIn) {
              UDS_TencentCloudChatManager::MakeRequest<FDS_V2TIMRequestGetHistoryMessageList>
                        (this_02,&local_538);
              pFVar2 = local_538.Object;
              if ((local_538.Object == (FDS_V2TIMRequestGetHistoryMessageList *)0x0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar4)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              pFVar2->WhisperPlayerUID = lVar3;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_538.SharedReferenceCount.ReferenceController);
            }
            else {
              pUVar5 = UDS_LogManager::GetInst();
              if (pUVar5 != (UDS_LogManager *)0x0) {
                pUVar5 = UDS_LogManager::GetInst();
                local_278._padding_ = 0;
                TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                          (&local_278,"UDS_TencentCloudChatManager::Request_C2CHistoryMessageList",
                           0x3a,Yes);
                UDS_LogManager::PrintLog
                          (pUVar5,1,Warning,local_278.Ptr,0x299,L"[TCC] IsLoggedIn() == false");
                if ((void *)local_278._padding_ != (void *)0x0) {
                  FMemory::Free((void *)local_278._padding_);
                }
              }
            }
            UDS_TencentCloudChatManager::Request_UserInfoList(this_02,lVar3);
          }
          if (local_528.ShowName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_528.ShowName.Data.AllocatorInstance.Data);
          }
          if (local_528.WhisperUserID.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          {
            FMemory::Free(local_528.WhisperUserID.Data.AllocatorInstance.Data);
          }
          if (local_528.GroupID.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_528.GroupID.Data.AllocatorInstance.Data);
          }
          if (local_528.ConversationID.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
             ) {
            FMemory::Free(local_528.ConversationID.Data.AllocatorInstance.Data);
          }
          uVar9 = (int)uVar10 + 1;
          _Var8 = (__uint64)(int)uVar9;
          _Var6 = TXV2TIMConversationVector::Size(this_00);
          uVar10 = (ulonglong)uVar9;
        } while (_Var8 < _Var6);
      }
      if (this_02->ChatState == LoggedIn) {
        UDS_TencentCloudChatManager::MakeRequest<FDS_V2TIMRequestGetJoinedGroupList>
                  (this_02,&local_4c8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_4c8.SharedReferenceCount.ReferenceController);
      }
      else {
        pUVar5 = UDS_LogManager::GetInst();
        if (pUVar5 != (UDS_LogManager *)0x0) {
          pUVar5 = UDS_LogManager::GetInst();
          local_158._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_158,"UDS_TencentCloudChatManager::Request_JoinedGroupList",0x34,Yes);
          UDS_LogManager::PrintLog
                    (pUVar5,1,Warning,local_158.Ptr,0x303,L"[TCC] IsLoggedIn() == false");
          if ((void *)local_158._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_158._padding_);
          }
        }
      }
    }
  }
  return;
}

// Request @ 14ba10370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FDS_V2TIMRequestGetConversationList::Request(FDS_V2TIMRequestGetConversationList *this)

{
  V2TIMManager *pVVar1;
  UDS_LogManager *pUVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  undefined1 auStackY_168 [32];
  uint uVar5;
  wchar_t *pwVar6;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pVVar1 = V2TIMManager::GetInstance();
  if (pVVar1 == (V2TIMManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_V2TIMRequestGetConversationList::Request",0x2c,Yes);
    pwVar6 = L"v2TIMMng is nullptr.";
    uVar5 = 0x157;
  }
  else {
    plVar3 = (longlong *)(**(code **)((longlong)*pVVar1 + 0xf8))(pVVar1);
    if (plVar3 != (longlong *)0x0) {
      puVar4 = &this->field_0x30;
      if (this == (FDS_V2TIMRequestGetConversationList *)0x0) {
        puVar4 = (undefined1 *)0x0;
      }
      (**(code **)(*plVar3 + 0x20))(plVar3,0,100,puVar4);
      return true;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FDS_V2TIMRequestGetConversationList::Request",0x2c,Yes);
    pwVar6 = L"v2TIMConversationMng is nullptr.";
    uVar5 = 0x15e;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar5,pwVar6);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}

