// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 19

// OnCloseConfirmPopup @ 14b9fe330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl
UDS_ChatUIPopupHelper::OnCloseConfirmPopup(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_WindowManager *this;
  FWeakObjectPtr local_res8 [4];
  undefined1 auStackY_178 [32];
  uint uVar3;
  wchar_t *pwVar4;
  float local_148;
  uint local_144 [3];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_res8[0] = param_1.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar1) {
    this = UDS_WindowManager::GetInst();
    if (this != (UDS_WindowManager *)0x0) {
      local_148 = 0.0;
      local_144[0] = 0;
      UDS_WindowManager::CloseWindow(this,PopupCommon,local_144,&local_148);
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_ChatUIPopupHelper::OnCloseConfirmPopup",0x2a,Yes);
    pwVar4 = L"windowManager == nullptr";
    uVar3 = 0x1e6;
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_ChatUIPopupHelper::OnCloseConfirmPopup",0x2a,Yes);
    pwVar4 = L"InOwner(UDS_M_CommonPopup) is Invalid";
    uVar3 = 0x1df;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar3,pwVar4);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// OnGroupChangeOwnerConfirm @ 14b9ff870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_ChatUIPopupHelper::OnGroupChangeOwnerConfirm
          (TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1,FString *param_2,long64 param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  UDS_ChattingManager *pUVar4;
  UDS_LogManager *pUVar5;
  UDS_TencentCloudChatManager *this;
  undefined1 auStackY_4d8 [32];
  TSharedPtr<FDS_V2TIMRequestTransferGroupOwner,1> local_4a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_498;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_378;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_4d8;
  OnCloseConfirmPopup(param_1);
  pUVar4 = UDS_ChattingManager::GetInst();
  if (pUVar4 == (UDS_ChattingManager *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_498._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_498,"UDS_ChatUIPopupHelper::OnGroupChangeOwnerConfirm",0x30,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_498.Ptr,0x177,L"chattingManager == nullptr");
      if ((void *)local_498._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_498._padding_);
      }
    }
  }
  else if ((char)pUVar4->_padding_ == '\x01') {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_378._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_378,"UDS_ChatUIPopupHelper::OnGroupChangeOwnerConfirm",0x30,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,local_378.Ptr,0x17d,L"chattingManager->IsBeingDestroyed() == true"
                );
      if ((void *)local_378._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_378._padding_);
      }
    }
  }
  else {
    this = UDS_TencentCloudChatManager::GetInst();
    if (this == (UDS_TencentCloudChatManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 != (UDS_LogManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        local_258._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_258,"UDS_ChattingManager::RequestChangeGroupChatRoomOwner",0x34,Yes);
        UDS_LogManager::PrintLog
                  (pUVar5,1,Warning,local_258.Ptr,0x480,L"tencentChatManager == nullptr");
        if ((void *)local_258._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_258._padding_);
        }
      }
    }
    else if (this->ChatState == LoggedIn) {
      UDS_TencentCloudChatManager::MakeRequest<FDS_V2TIMRequestTransferGroupOwner>(this,&local_4a8);
      if (local_4a8.Object == (FDS_V2TIMRequestTransferGroupOwner *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      ::FString::operator=(&(local_4a8.Object)->GroupID,param_2);
      if (local_4a8.Object == (FDS_V2TIMRequestTransferGroupOwner *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      (local_4a8.Object)->PlayerUID = param_3;
      (local_4a8.Object)->bLeaveAfter = false;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_4a8.SharedReferenceCount.ReferenceController);
    }
    else {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 != (UDS_LogManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_TencentCloudChatManager::Request_ChangeGroupOwner",0x35,Yes);
        UDS_LogManager::PrintLog
                  (pUVar5,1,Warning,local_138.Ptr,0x392,L"[TCC] IsLoggedIn() == false");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
  }
  pFVar1 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// OnGroupChangeOwnerForLeaveConfirm @ 14b9ffbd0

void __cdecl
UDS_ChatUIPopupHelper::OnGroupChangeOwnerForLeaveConfirm
          (TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1,FString *param_2)

{
  FScriptContainerElement *pFVar1;
  
  OnCloseConfirmPopup(param_1);
  OpenGroupMembersPopup(param_2,true);
  pFVar1 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// OnGroupJoinConfirm @ 14ba00940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_ChatUIPopupHelper::OnGroupJoinConfirm
          (TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1,FString *param_2)

{
  FScriptContainerElement *pFVar1;
  UDS_ChattingManager *this;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_168 [32];
  uint uVar3;
  wchar_t *pwVar4;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  OnCloseConfirmPopup(param_1);
  this = UDS_ChattingManager::GetInst();
  if (this == (UDS_ChattingManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) goto LAB_14ba00a5c;
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_ChatUIPopupHelper::OnGroupJoinConfirm",0x29,Yes);
    pwVar4 = L"chattingManager == nullptr";
    uVar3 = 0x14f;
  }
  else {
    if ((char)this->_padding_ != '\x01') {
      UDS_ChattingManager::RequestJoinGroupChatRoom(this,param_2);
      goto LAB_14ba00a5c;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) goto LAB_14ba00a5c;
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_ChatUIPopupHelper::OnGroupJoinConfirm",0x29,Yes);
    pwVar4 = L"chattingManager->IsBeingDestroyed() == true";
    uVar3 = 0x155;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar3,pwVar4);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
LAB_14ba00a5c:
  pFVar1 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// OnGroupLeaveConfirm @ 14ba00a90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_ChatUIPopupHelper::OnGroupLeaveConfirm
          (TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1,FString *param_2)

{
  FScriptContainerElement *pFVar1;
  UDS_ChattingManager *this;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_168 [32];
  uint uVar3;
  wchar_t *pwVar4;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  OnCloseConfirmPopup(param_1);
  this = UDS_ChattingManager::GetInst();
  if (this == (UDS_ChattingManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) goto LAB_14ba00bac;
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_ChatUIPopupHelper::OnGroupLeaveConfirm",0x2a,Yes);
    pwVar4 = L"chattingManager == nullptr";
    uVar3 = 0x163;
  }
  else {
    if ((char)this->_padding_ != '\x01') {
      UDS_ChattingManager::RequestLeaveGroupChatRoom(this,param_2);
      goto LAB_14ba00bac;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) goto LAB_14ba00bac;
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_ChatUIPopupHelper::OnGroupLeaveConfirm",0x2a,Yes);
    pwVar4 = L"chattingManager->IsBeingDestroyed() == true";
    uVar3 = 0x169;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar3,pwVar4);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
LAB_14ba00bac:
  pFVar1 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// OnGroupMemberKickConfirm @ 14ba00be0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_ChatUIPopupHelper::OnGroupMemberKickConfirm
          (TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1,FString *param_2,long64 param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  UDS_ChattingManager *pUVar4;
  UDS_LogManager *pUVar5;
  UDS_TencentCloudChatManager *this;
  undefined1 auStackY_4d8 [32];
  TSharedPtr<FDS_V2TIMRequestKickGroupMember,1> local_4a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_498;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_378;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_4d8;
  OnCloseConfirmPopup(param_1);
  pUVar4 = UDS_ChattingManager::GetInst();
  if (pUVar4 == (UDS_ChattingManager *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_498._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_498,"UDS_ChatUIPopupHelper::OnGroupMemberKickConfirm",0x2f,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_498.Ptr,0x191,L"chattingManager == nullptr");
      if ((void *)local_498._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_498._padding_);
      }
    }
  }
  else if ((char)pUVar4->_padding_ == '\x01') {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_378._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_378,"UDS_ChatUIPopupHelper::OnGroupMemberKickConfirm",0x2f,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,local_378.Ptr,0x197,L"chattingManager->IsBeingDestroyed() == true"
                );
      if ((void *)local_378._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_378._padding_);
      }
    }
  }
  else {
    this = UDS_TencentCloudChatManager::GetInst();
    if (this == (UDS_TencentCloudChatManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 != (UDS_LogManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        local_258._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_258,"UDS_ChattingManager::RequestKickGroupMember",0x2b,Yes);
        UDS_LogManager::PrintLog
                  (pUVar5,1,Warning,local_258.Ptr,0x474,L"tencentChatManager == nullptr");
        if ((void *)local_258._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_258._padding_);
        }
      }
    }
    else if (this->ChatState == LoggedIn) {
      UDS_TencentCloudChatManager::MakeRequest<FDS_V2TIMRequestKickGroupMember>(this,&local_4a8);
      if (local_4a8.Object == (FDS_V2TIMRequestKickGroupMember *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      ::FString::operator=(&(local_4a8.Object)->GroupID,param_2);
      if (local_4a8.Object == (FDS_V2TIMRequestKickGroupMember *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      (local_4a8.Object)->PlayerUID = param_3;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_4a8.SharedReferenceCount.ReferenceController);
    }
    else {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 != (UDS_LogManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_TencentCloudChatManager::Request_KickGroupMember",0x34,Yes);
        UDS_LogManager::PrintLog(pUVar5,1,Warning,local_138.Ptr,899,L"[TCC] IsLoggedIn() == false");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
  }
  pFVar1 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// OnOpenCustomSettingPopup @ 14ba01d70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_ChatUIPopupHelper::OnOpenCustomSettingPopup(UDS_UserWidget *param_1,int param_2)

{
  FDS_ChatCustomTabManager *pFVar1;
  FDS_ChatCustomFilter *this;
  ulong64 uVar2;
  code *pcVar3;
  bool bVar4;
  UDS_LogManager *pUVar5;
  UDS_ChattingManager *pUVar6;
  FDS_ViewModelContext *pFVar7;
  UScriptStruct *pUVar8;
  UDS_ViewModelContextManager *this_00;
  void *pvVar9;
  FDS_ViewModelContext *pFVar10;
  FDS_ViewModelContext *pFVar11;
  FDS_ViewModelContext *pFVar12;
  undefined1 auStackY_7a8 [32];
  FWeakObjectPtr local_760;
  UDS_UserWidget *local_758;
  TSharedPtr<FDS_ViewModelContext,1> local_750;
  TSharedPtr<FDS_ViewModelContext,1> local_740;
  TSharedPtr<FDS_ChatCustomData,1> local_730;
  undefined8 local_720;
  TReferenceControllerBase<1> *pTStack_718;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_708;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_5e8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_7a8;
  if (param_1 == (UDS_UserWidget *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    local_708._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_708,"UDS_ChatUIPopupHelper::OnOpenCustomSettingPopup",0x2f,Yes);
    UDS_LogManager::PrintLog(pUVar5,1,Warning,local_708.Ptr,0x1a2,L"InContentsWidget == nullptr");
    pvVar9 = (void *)local_708._padding_;
    goto LAB_14ba0230e;
  }
  pUVar6 = UDS_ChattingManager::GetInst();
  if (pUVar6 == (UDS_ChattingManager *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    local_5e8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_5e8,"UDS_ChatUIPopupHelper::OnOpenCustomSettingPopup",0x2f,Yes);
    UDS_LogManager::PrintLog(pUVar5,1,Warning,local_5e8.Ptr,0x1a9,L"chattingManager == nullptr");
    pvVar9 = (void *)local_5e8._padding_;
    goto LAB_14ba0230e;
  }
  if ((char)pUVar6->_padding_ == '\x01') {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    local_4c8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_4c8,"UDS_ChatUIPopupHelper::OnOpenCustomSettingPopup",0x2f,Yes);
    UDS_LogManager::PrintLog
              (pUVar5,1,Warning,local_4c8.Ptr,0x1af,L"chattingManager->IsBeingDestroyed() == true");
    pvVar9 = (void *)local_4c8._padding_;
    goto LAB_14ba0230e;
  }
  pFVar1 = (pUVar6->ChatCustomTabManager).Object;
  if (pFVar1 != (FDS_ChatCustomTabManager *)0x0) {
    if ((param_2 < 0) || (pFVar1->MaxCustomTabCount <= param_2)) {
      bVar4 = false;
    }
    else {
      bVar4 = param_2 < (pFVar1->CustomDatas).ArrayNum;
    }
    if (bVar4) {
      FDS_ChatCustomTabManager::GetCustomData(pFVar1,&local_730,param_2);
      if (local_730.Object == (FDS_ChatCustomData *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        if (pUVar5 != (UDS_LogManager *)0x0) {
          pUVar5 = UDS_LogManager::GetInst();
          local_3a8._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_3a8,"UDS_ChatUIPopupHelper::OnOpenCustomSettingPopup",0x2f,Yes);
          UDS_LogManager::PrintLog
                    (pUVar5,1,Warning,local_3a8.Ptr,0x1bc,
                     L"chatCustomData.IsValid() == false (InCustomIndex : %d)");
          if ((void *)local_3a8._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_3a8._padding_);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_730.SharedReferenceCount.ReferenceController);
            return;
          }
        }
        goto LAB_14ba0228f;
      }
      pFVar11 = (FDS_ViewModelContext *)0x0;
      pFVar1 = (pUVar6->ChatCustomTabManager).Object;
      pFVar12 = pFVar11;
      if (pFVar1 == (FDS_ChatCustomTabManager *)0x0) {
LAB_14ba02200:
        pUVar5 = UDS_LogManager::GetInst();
        if (pUVar5 != (UDS_LogManager *)0x0) {
          pUVar5 = UDS_LogManager::GetInst();
          local_288._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_288,"UDS_ChatUIPopupHelper::OnOpenCustomSettingPopup",0x2f,Yes);
          UDS_LogManager::PrintLog
                    (pUVar5,1,Warning,local_288.Ptr,0x1c3,L"chatCustomFilter.IsValid() == false");
          if ((void *)local_288._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_288._padding_);
          }
        }
      }
      else {
        this = (pFVar1->CustomFilter).Object;
        pFVar12 = (FDS_ViewModelContext *)
                  (pFVar1->CustomFilter).SharedReferenceCount.ReferenceController;
        if (pFVar12 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar12->DerivedStaticStruct =
               (atomic<int>)((int)*(atomic<int> *)&pFVar12->DerivedStaticStruct + 1);
          UNLOCK();
        }
        if (this == (FDS_ChatCustomFilter *)0x0) goto LAB_14ba02200;
        uVar2 = (local_730.Object)->ChatFilterFlags;
        if (uVar2 == 0) {
          FDS_ChatCustomFilter::SetAllChecked(this);
        }
        else {
          this->ChatTypeFlags = uVar2;
        }
        pFVar7 = ::operator_new(0x40);
        pFVar10 = pFVar11;
        if (pFVar7 != (FDS_ViewModelContext *)0x0) {
          *(undefined8 *)&pFVar7->ViewModelTemplateKey = 0;
          *(undefined4 *)((longlong)&pFVar7[1]._padding_ + 4) = 0;
          *(undefined4 *)((longlong)&pFVar7[1].ViewModelTemplateKey + 1) = 0;
          *(undefined2 *)&pFVar7[1].field_0x1d = 0;
          pFVar7[1].field_0x1f = 0;
          *(undefined8 *)&pFVar7->DerivedStaticStruct = 0;
          (pFVar7->ViewModelName).ComparisonIndex = 0;
          (pFVar7->ViewModelName).Number = 0;
          pFVar7->_padding_ = (longlong)&___7FDS_ViewModelContext_ChatCustom__6B_;
          *(undefined4 *)&pFVar7[1]._padding_ = 0xffffffff;
          *(undefined8 *)&pFVar7[1].DerivedStaticStruct = 0;
          pFVar7[1].ViewModelName.ComparisonIndex = 0;
          pFVar7[1].ViewModelName.Number = 0;
          *(undefined1 *)&pFVar7[1].ViewModelTemplateKey = None;
          pFVar10 = pFVar7;
        }
        pFVar7 = ::operator_new(0x20);
        if (pFVar7 != (FDS_ViewModelContext *)0x0) {
          *(atomic<int> *)&pFVar7->DerivedStaticStruct = (atomic<int>)0x1;
          *(code **)&(pFVar7->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
          pFVar7->_padding_ =
               (longlong)
               &
               ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_ChatCustom__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
          ;
          ((atomic<int> *)&pFVar7->DerivedStaticStruct)[1] = (atomic<int>)0x1;
          *(FDS_ViewModelContext **)&pFVar7->ViewModelTemplateKey = pFVar10;
          pFVar11 = pFVar7;
        }
        if ((pFVar10 == (FDS_ViewModelContext *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pUVar8 = FDS_ViewModelContext_ChatCustom::StaticStruct();
        *(UScriptStruct **)&pFVar10->DerivedStaticStruct = pUVar8;
        this_00 = UDS_ViewModelContextManager::GetInst();
        if (this_00 != (UDS_ViewModelContextManager *)0x0) {
          if (pFVar11 != (FDS_ViewModelContext *)0x0) {
            LOCK();
            *(atomic<int> *)&pFVar11->DerivedStaticStruct =
                 (atomic<int>)((int)*(atomic<int> *)&pFVar11->DerivedStaticStruct + 1);
            UNLOCK();
          }
          local_750.Object = pFVar10;
          local_750.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)pFVar11;
          UDS_ViewModelContextManager::RegisterContext(this_00,&local_750);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_750.SharedReferenceCount.ReferenceController);
        }
        pFVar10->ViewModelTemplateKey = Chat_CustomSetting;
        *(int *)&pFVar10[1]._padding_ = param_2;
        if (pFVar12 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar12->DerivedStaticStruct =
               (atomic<int>)((int)*(atomic<int> *)&pFVar12->DerivedStaticStruct + 1);
          UNLOCK();
        }
        local_720 = *(undefined8 *)&pFVar10[1].DerivedStaticStruct;
        pTStack_718 = *(TReferenceControllerBase<1> **)&pFVar10[1].ViewModelName.ComparisonIndex;
        *(FDS_ChatCustomFilter **)&pFVar10[1].DerivedStaticStruct = this;
        *(FDS_ViewModelContext **)&pFVar10[1].ViewModelName.ComparisonIndex = pFVar12;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_718);
        *(bool *)&pFVar10[1].ViewModelTemplateKey = uVar2 == 0;
        if (pFVar11 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar11->DerivedStaticStruct =
               (atomic<int>)((int)*(atomic<int> *)&pFVar11->DerivedStaticStruct + 1);
          UNLOCK();
        }
        local_740.Object = pFVar10;
        local_740.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar11;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        local_760.ObjectIndex = 0;
        local_760.ObjectSerialNumber = 0;
        local_758 = param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        FWeakObjectPtr::operator=(&local_760,(FObjectPtr)&local_758);
        DS_ViewModelTemplateUtil::BindViewModel
                  ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_760,&local_740,false);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar11);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar12);
LAB_14ba0228f:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_730.SharedReferenceCount.ReferenceController);
      return;
    }
  }
  pUVar5 = UDS_LogManager::GetInst();
  if (pUVar5 == (UDS_LogManager *)0x0) {
    return;
  }
  pUVar5 = UDS_LogManager::GetInst();
  local_168._padding_ = 0;
  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
            (&local_168,"UDS_ChatUIPopupHelper::OnOpenCustomSettingPopup",0x2f,Yes);
  UDS_LogManager::PrintLog
            (pUVar5,1,Warning,local_168.Ptr,0x1b5,
             L"chattingManager->IsValidCustomIndex(%d) == false");
  pvVar9 = (void *)local_168._padding_;
LAB_14ba0230e:
  if (pvVar9 != (void *)0x0) {
    FMemory::Free(pvVar9);
  }
  return;
}

// OnOpenGroupInvitePopup @ 14ba02340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_ChatUIPopupHelper::OnOpenGroupInvitePopup(UDS_UserWidget *param_1,FString *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  FDS_ViewModelContext_ChatGroup *pFVar3;
  bool bVar4;
  UDS_LogManager *pUVar5;
  undefined1 auStackY_198 [32];
  FWeakObjectPtr local_168;
  UDS_UserWidget *local_160;
  TSharedPtr<FDS_ViewModelContext_ChatGroup,1> local_158;
  TSharedPtr<FDS_ViewModelContext,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if (param_1 == (UDS_UserWidget *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_ChatUIPopupHelper::OnOpenGroupInvitePopup",0x2d,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_138.Ptr,0x12d,L"InContentsWidget == nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    MakeContext<FDS_ViewModelContext_ChatGroup>(&local_158);
    pFVar3 = local_158.Object;
    if (local_158.Object == (FDS_ViewModelContext_ChatGroup *)0x0) {
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
    *(undefined4 *)&pFVar3->_padding_ = 299;
    ::FString::operator=(&pFVar3->GroupID,param_2);
    local_148.Object = (FDS_ViewModelContext *)local_158.Object;
    local_148.SharedReferenceCount.ReferenceController =
         local_158.SharedReferenceCount.ReferenceController;
    if (local_158.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_168.ObjectIndex = 0;
    local_168.ObjectSerialNumber = 0;
    local_160 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_168,(FObjectPtr)&local_160);
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_168,&local_148,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
  }
  pFVar1 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// OnOpenGroupMembersPopup @ 14ba02510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_ChatUIPopupHelper::OnOpenGroupMembersPopup
          (UDS_UserWidget *param_1,FString *param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  FDS_ViewModelContext_ChatGroup *pFVar3;
  bool bVar4;
  UDS_LogManager *pUVar5;
  undefined1 auStackY_1a8 [32];
  FWeakObjectPtr local_178;
  UDS_UserWidget *local_170;
  TSharedPtr<FDS_ViewModelContext_ChatGroup,1> local_168;
  TSharedPtr<FDS_ViewModelContext,1> local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if (param_1 == (UDS_UserWidget *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_ChatUIPopupHelper::OnOpenGroupMembersPopup",0x2e,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_148.Ptr,0x13c,L"InContentsWidget == nullptr");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    MakeContext<FDS_ViewModelContext_ChatGroup>(&local_168);
    pFVar3 = local_168.Object;
    if (local_168.Object == (FDS_ViewModelContext_ChatGroup *)0x0) {
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
    *(undefined4 *)&pFVar3->_padding_ = 300;
    ::FString::operator=(&pFVar3->GroupID,param_2);
    local_158.Object = (FDS_ViewModelContext *)local_168.Object;
    local_158.SharedReferenceCount.ReferenceController =
         local_168.SharedReferenceCount.ReferenceController;
    pFVar3->ChangeGroupOwner = param_3;
    if (local_168.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_178.ObjectIndex = 0;
    local_178.ObjectSerialNumber = 0;
    local_170 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_178,(FObjectPtr)&local_170);
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_178,&local_158,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_168.SharedReferenceCount.ReferenceController);
  }
  pFVar1 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// OnOpenGroupSettingPopup @ 14ba026d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_ChatUIPopupHelper::OnOpenGroupSettingPopup(UDS_UserWidget *param_1,FString *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  FDS_ViewModelContext_ChatGroup *pFVar3;
  bool bVar4;
  UDS_LogManager *pUVar5;
  undefined1 auStackY_198 [32];
  FWeakObjectPtr local_168;
  UDS_UserWidget *local_160;
  TSharedPtr<FDS_ViewModelContext_ChatGroup,1> local_158;
  TSharedPtr<FDS_ViewModelContext,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if (param_1 == (UDS_UserWidget *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_ChatUIPopupHelper::OnOpenGroupSettingPopup",0x2e,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_138.Ptr,0x11e,L"InContentsWidget == nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    MakeContext<FDS_ViewModelContext_ChatGroup>(&local_158);
    pFVar3 = local_158.Object;
    if (local_158.Object == (FDS_ViewModelContext_ChatGroup *)0x0) {
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
    *(undefined4 *)&pFVar3->_padding_ = 0x12a;
    ::FString::operator=(&pFVar3->GroupID,param_2);
    local_148.Object = (FDS_ViewModelContext *)local_158.Object;
    local_148.SharedReferenceCount.ReferenceController =
         local_158.SharedReferenceCount.ReferenceController;
    if (local_158.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_168.ObjectIndex = 0;
    local_168.ObjectSerialNumber = 0;
    local_160 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_168,(FObjectPtr)&local_160);
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_168,&local_148,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
  }
  pFVar1 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// OpenCustomSettingPopup @ 14ba08d10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl UDS_ChatUIPopupHelper::OpenCustomSettingPopup(int param_1)

{
  FDS_ChatCustomTabManager *pFVar1;
  bool bVar2;
  UDS_ChattingManager *pUVar3;
  UDS_LogManager *pUVar4;
  UDS_WindowManager *this;
  undefined8 *puVar5;
  ulong64 uVar6;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar7;
  undefined1 auStackY_1c8 [32];
  uint uVar8;
  wchar_t *pwVar9;
  undefined1 local_188 [8];
  FDelegateAllocation local_180;
  FDestructionSentinel local_170;
  FDelegateAllocation *local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  pUVar3 = UDS_ChattingManager::GetInst();
  if (pUVar3 == (UDS_ChattingManager *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_ChatUIPopupHelper::OpenCustomSettingPopup",0x2d,Yes);
    pwVar9 = L"chattingManager == nullptr";
    uVar8 = 0xfe;
  }
  else {
    if ((char)pUVar3->_padding_ != '\x01') {
      pFVar1 = (pUVar3->ChatCustomTabManager).Object;
      if (pFVar1 != (FDS_ChatCustomTabManager *)0x0) {
        if ((param_1 < 0) || (pFVar1->MaxCustomTabCount <= param_1)) {
          bVar2 = false;
        }
        else {
          bVar2 = param_1 < (pFVar1->CustomDatas).ArrayNum;
        }
        if (bVar2) {
          this = UDS_WindowManager::GetInst();
          if (this != (UDS_WindowManager *)0x0) {
            local_188 = (undefined1  [8])0x0;
            local_180.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
            local_180.DelegateSize = 0;
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_188,
                       (FWriteAccessScope *)&local_170);
            local_158 = &local_180;
            puVar5 = UE::Core::Private::DelegateAllocate(0x20,&local_180);
            if (puVar5 != (undefined8 *)0x0) {
              *puVar5 = &
                        ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__H__6B_
              ;
              *(int *)(puVar5 + 1) = param_1;
              uVar6 = FDelegateHandle::GenerateNewID();
              puVar5[2] = uVar6;
              *puVar5 = &
                        ___7__TBaseStaticDelegateInstance___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__H__6B_
              ;
              puVar5[3] = OnOpenCustomSettingPopup;
            }
            if (local_170.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_170.Accessor,&local_170);
            }
            pTVar7 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
                     TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                               ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                                 *)&local_170,
                                (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                                 *)local_188);
            UDS_WindowManager::OpenWindow(this,ChattingCustomSettingPopup,pTVar7);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_188,
                       (FWriteAccessScope *)&local_170);
            if ((local_180.DelegateSize != 0) &&
               (local_180.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
              (*(code *)**(undefined8 **)local_180.DelegateAllocator)();
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        ((ForAnyElementType *)&local_180,0,0,0x10);
              local_180.DelegateSize = 0;
            }
            if (local_170.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_170.Accessor,&local_170);
            }
            if (local_180.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
              FMemory::Free((void *)local_180.DelegateAllocator);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                      ((FMRSWRecursiveAccessDetector *)local_188);
            return;
          }
          pUVar4 = UDS_LogManager::GetInst();
          if (pUVar4 == (UDS_LogManager *)0x0) {
            return;
          }
          pUVar4 = UDS_LogManager::GetInst();
          local_148._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_148,"UDS_ChatUIPopupHelper::OpenCustomSettingPopup",0x2d,Yes);
          UDS_LogManager::PrintLog(pUVar4,1,Warning,local_148.Ptr,0x111,L"windowManager == nullptr")
          ;
          if ((void *)local_148._padding_ == (void *)0x0) {
            return;
          }
          FMemory::Free((void *)local_148._padding_);
          return;
        }
      }
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_ChatUIPopupHelper::OpenCustomSettingPopup",0x2d,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_148.Ptr,0x10a,
                 L"chattingManager->IsValidCustomIndex(%d) == false");
      goto LAB_14ba08db1;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_ChatUIPopupHelper::OpenCustomSettingPopup",0x2d,Yes);
    pwVar9 = L"chattingManager->IsBeingDestroyed() == true";
    uVar8 = 0x104;
  }
  UDS_LogManager::PrintLog(pUVar4,1,Warning,local_148.Ptr,uVar8,pwVar9);
LAB_14ba08db1:
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  return;
}

// OpenGroupChangeOwnerPopup @ 14ba090a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_ChatUIPopupHelper::OpenGroupChangeOwnerPopup(FString *param_1,long64 param_2,FString *param_3)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  int iVar3;
  UDS_CommonPopupManager *this;
  UDS_LogManager *pUVar4;
  UDS_M_CommonPopup *pUVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  undefined1 auStackY_218 [32];
  uint uVar8;
  wchar_t *pwVar9;
  FWeakObjectPtr local_1e8;
  undefined1 local_1e0 [8];
  FDelegateAllocation local_1d8;
  FDS_Text local_1c8;
  FDestructionSentinel local_178;
  FDelegateAllocation *local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_218;
  this = UDS_CommonPopupManager::GetInst();
  if (this == (UDS_CommonPopupManager *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) goto LAB_14ba0948d;
    pUVar4 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_ChatUIPopupHelper::OpenGroupChangeOwnerPopup",0x30,Yes);
    pwVar9 = L"commonPopupManager == nullptr";
    uVar8 = 0xb3;
  }
  else {
    UDS_CommonPopupManager::CreateCommonPopup(this);
    bVar2 = TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> *)&local_1e8,(void *)0x0);
    if (!bVar2) {
      pUVar5 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1e8);
      local_1c8.StringTableType = None;
      local_1c8.StringTableID = 0;
      local_1c8.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_1c8.StringEnumTableNameID.Number = 0;
      local_1c8.TimeExpressionType = None;
      local_1c8.IsExpression = false;
      local_1c8.DateTime.Ticks = 0;
      local_1c8.TimeSpan.Ticks = 0;
      local_1c8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1c8.UniqueString.Data.ArrayNum = 0;
      local_1c8.UniqueString.Data.ArrayMax = 0;
      local_1c8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1c8.FormatArgs.ArrayNum = 0;
      local_1c8.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringTable(&local_1c8,StringUi,0xc394);
      UDS_M_CommonPopup::SetTitle(pUVar5,&local_1c8);
      pUVar5 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1e8);
      UDS_M_CommonPopup::SetButton(pUVar5,ButtonCancel,StringUi,0x66,false);
      pUVar5 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1e8);
      UDS_M_CommonPopup::SetButton(pUVar5,ButtonConfirm,StringUi,0x67,false);
      pUVar5 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1e8);
      local_1c8.StringTableType = None;
      local_1c8.StringTableID = 0;
      local_1c8.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_1c8.StringEnumTableNameID.Number = 0;
      local_1c8.TimeExpressionType = None;
      local_1c8.DateTime.Ticks = 0;
      local_1c8.TimeSpan.Ticks = 0;
      local_1c8.IsExpression = false;
      local_1c8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1c8.UniqueString.Data.ArrayNum = 0;
      local_1c8.UniqueString.Data.ArrayMax = 0;
      local_1c8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1c8.FormatArgs.ArrayNum = 0;
      local_1c8.FormatArgs.ArrayMax = 0;
      local_1e0 = (undefined1  [8])0x0;
      local_1d8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x828,(ForAnyElementType *)local_1e0,
                         (int *)&local_1d8.DelegateAllocator.field_0x4);
      local_1d8.DelegateAllocator._0_4_ = iVar3 + 1;
      FDS_TextFormatArg::FDS_TextFormatArg<FString_const_&>
                ((FDS_TextFormatArg *)((longlong)local_1e0 + (longlong)iVar3 * 0x28),param_3);
      FDS_Text::SetTextFormatFromStringTable
                (&local_1c8,StringUi,0xc395,
                 (TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> *)local_1e0);
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_1e0,local_1d8.DelegateAllocator._0_4_);
      if ((atomic<unsigned___int64>)local_1e0 != (atomic<unsigned___int64>)0x0) {
        FMemory::Free((void *)local_1e0);
      }
      UDS_M_CommonPopup::SetMainContent(pUVar5,&local_1c8);
      pUVar5 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1e8);
      local_1e0 = (undefined1  [8])0x0;
      local_1d8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_1d8.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1e0,
                 (FWriteAccessScope *)&local_178);
      local_160 = &local_1d8;
      puVar6 = UE::Core::Private::DelegateAllocate(0x20,&local_1d8);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = &
                  ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar7 = FDelegateHandle::GenerateNewID();
        puVar6[2] = uVar7;
        *puVar6 = &
                  ___7__TBaseStaticDelegateInstance___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        puVar6[3] = OnCloseConfirmPopup;
      }
      if (local_178.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_178.Accessor,&local_178);
      }
      UDS_M_CommonPopup::SetDelegate
                (pUVar5,ButtonCancel,
                 (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                  *)local_1e0);
      pUVar5 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1e8);
      local_1e0 = (undefined1  [8])0x0;
      local_1d8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_1d8.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1e0,
                 (FWriteAccessScope *)&local_178);
      local_160 = &local_1d8;
      puVar6 = UE::Core::Private::DelegateAllocate(0x30,&local_1d8);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = &
                  ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy__VFString___J__6B_
        ;
        ::FString::FString((FString *)(puVar6 + 1),param_1);
        puVar6[3] = param_2;
        uVar7 = FDelegateHandle::GenerateNewID();
        puVar6[4] = uVar7;
        *puVar6 = &
                  ___7__TBaseStaticDelegateInstance___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy__VFString___J__6B_
        ;
        puVar6[5] = OnGroupChangeOwnerConfirm;
      }
      if (local_178.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_178.Accessor,&local_178);
      }
      UDS_M_CommonPopup::SetDelegate
                (pUVar5,ButtonConfirm,
                 (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                  *)local_1e0);
      pUVar5 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1e8);
      UDS_M_CommonPopup::OpenCommonPopup(pUVar5);
      goto LAB_14ba0948d;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) goto LAB_14ba0948d;
    pUVar4 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_ChatUIPopupHelper::OpenGroupChangeOwnerPopup",0x30,Yes);
    pwVar9 = L"CommonPopupModel == nullptr";
    uVar8 = 0xba;
  }
  UDS_LogManager::PrintLog(pUVar4,1,Warning,local_158.Ptr,uVar8,pwVar9);
  if ((void *)local_158._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
LAB_14ba0948d:
  pFVar1 = (param_3->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// OpenGroupChangeOwnerPopupForLeave @ 14ba094d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_ChatUIPopupHelper::OpenGroupChangeOwnerPopupForLeave(FString *param_1)

{
  bool bVar1;
  UDS_CommonPopupManager *this;
  UDS_LogManager *pUVar2;
  UDS_M_CommonPopup *pUVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  undefined1 auStackY_208 [32];
  uint uVar6;
  wchar_t *pwVar7;
  FWeakObjectPtr local_1d8;
  undefined1 local_1d0 [8];
  FDelegateAllocation local_1c8;
  FDS_Text local_1b8;
  FDestructionSentinel local_168;
  FDelegateAllocation *local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_208;
  this = UDS_CommonPopupManager::GetInst();
  if (this == (UDS_CommonPopupManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_ChatUIPopupHelper::OpenGroupChangeOwnerPopupForLeave",0x38,Yes);
    pwVar7 = L"commonPopupManager == nullptr";
    uVar6 = 0xcc;
  }
  else {
    UDS_CommonPopupManager::CreateCommonPopup(this);
    bVar1 = TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> *)&local_1d8,(void *)0x0);
    if (!bVar1) {
      pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1d8);
      local_1b8.StringTableType = None;
      local_1b8.StringTableID = 0;
      local_1b8.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_1b8.StringEnumTableNameID.Number = 0;
      local_1b8.TimeExpressionType = None;
      local_1b8.IsExpression = false;
      local_1b8.DateTime.Ticks = 0;
      local_1b8.TimeSpan.Ticks = 0;
      local_1b8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1b8.UniqueString.Data.ArrayNum = 0;
      local_1b8.UniqueString.Data.ArrayMax = 0;
      local_1b8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1b8.FormatArgs.ArrayNum = 0;
      local_1b8.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringTable(&local_1b8,StringUi,0xc394);
      UDS_M_CommonPopup::SetTitle(pUVar3,&local_1b8);
      pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1d8);
      UDS_M_CommonPopup::SetButton(pUVar3,ButtonCancel,StringUi,0x66,false);
      pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1d8);
      UDS_M_CommonPopup::SetButton(pUVar3,ButtonConfirm,StringUi,0x67,false);
      pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1d8);
      local_1b8.StringTableType = None;
      local_1b8.StringTableID = 0;
      local_1b8.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_1b8.StringEnumTableNameID.Number = 0;
      local_1b8.TimeExpressionType = None;
      local_1b8.DateTime.Ticks = 0;
      local_1b8.TimeSpan.Ticks = 0;
      local_1b8.IsExpression = false;
      local_1b8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1b8.UniqueString.Data.ArrayNum = 0;
      local_1b8.UniqueString.Data.ArrayMax = 0;
      local_1b8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1b8.FormatArgs.ArrayNum = 0;
      local_1b8.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringTable(&local_1b8,StringUi,0xc398);
      UDS_M_CommonPopup::SetMainContent(pUVar3,&local_1b8);
      pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1d8);
      local_1d0 = (undefined1  [8])0x0;
      local_1c8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_1c8.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1d0,
                 (FWriteAccessScope *)&local_168);
      local_150 = &local_1c8;
      puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_1c8);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = &
                  ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar5 = FDelegateHandle::GenerateNewID();
        puVar4[2] = uVar5;
        *puVar4 = &
                  ___7__TBaseStaticDelegateInstance___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        puVar4[3] = OnCloseConfirmPopup;
      }
      if (local_168.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_168.Accessor,&local_168);
      }
      UDS_M_CommonPopup::SetDelegate
                (pUVar3,ButtonCancel,
                 (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                  *)local_1d0);
      pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1d8);
      local_1d0 = (undefined1  [8])0x0;
      local_1c8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_1c8.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1d0,
                 (FWriteAccessScope *)&local_168);
      local_150 = &local_1c8;
      puVar4 = UE::Core::Private::DelegateAllocate(0x28,&local_1c8);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = &
                  ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy__VFString____6B_
        ;
        ::FString::FString((FString *)(puVar4 + 1),param_1);
        uVar5 = FDelegateHandle::GenerateNewID();
        puVar4[3] = uVar5;
        *puVar4 = &
                  ___7__TBaseStaticDelegateInstance___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy__VFString____6B_
        ;
        puVar4[4] = OnGroupChangeOwnerForLeaveConfirm;
      }
      if (local_168.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_168.Accessor,&local_168);
      }
      UDS_M_CommonPopup::SetDelegate
                (pUVar3,ButtonConfirm,
                 (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                  *)local_1d0);
      pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1d8);
      UDS_M_CommonPopup::OpenCommonPopup(pUVar3);
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_ChatUIPopupHelper::OpenGroupChangeOwnerPopupForLeave",0x38,Yes);
    pwVar7 = L"CommonPopupModel == nullptr";
    uVar6 = 0xd3;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_148.Ptr,uVar6,pwVar7);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  return;
}

// OpenGroupInvitePopup @ 14ba09880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_ChatUIPopupHelper::OpenGroupInvitePopup(FString *param_1)

{
  UDS_WindowManager *this;
  UDS_LogManager *pUVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar4;
  undefined1 auStackY_1b8 [32];
  undefined1 local_188 [8];
  FDelegateAllocation local_180;
  FDestructionSentinel local_170;
  FDelegateAllocation *local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  this = UDS_WindowManager::GetInst();
  if (this == (UDS_WindowManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_ChatUIPopupHelper::OpenGroupInvitePopup",0x2b,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_148.Ptr,0x38,L"windowManager == nullptr");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    local_188 = (undefined1  [8])0x0;
    local_180.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_180.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_188,
               (FWriteAccessScope *)&local_170);
    local_158 = &local_180;
    puVar2 = UE::Core::Private::DelegateAllocate(0x28,&local_180);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__VFString____6B_
      ;
      ::FString::FString((FString *)(puVar2 + 1),param_1);
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[3] = uVar3;
      *puVar2 = &
                ___7__TBaseStaticDelegateInstance___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__VFString____6B_
      ;
      puVar2[4] = OnOpenGroupInvitePopup;
    }
    if (local_170.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_170.Accessor,&local_170);
    }
    pTVar4 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
             TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                       ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        &local_170,
                        (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        local_188);
    UDS_WindowManager::OpenWindow(this,ChattingGroupInvitationPopup,pTVar4);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_188,
               (FWriteAccessScope *)&local_170);
    if ((local_180.DelegateSize != 0) &&
       (local_180.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_180.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_180,0,0,0x10);
      local_180.DelegateSize = 0;
    }
    if (local_170.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_170.Accessor,&local_170);
    }
    if (local_180.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_180.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_188);
  }
  return;
}

// OpenGroupJoinPopup @ 14ba09a90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_ChatUIPopupHelper::OpenGroupJoinPopup(FString *param_1)

{
  bool bVar1;
  UDS_CommonPopupManager *this;
  UDS_LogManager *pUVar2;
  UDS_M_CommonPopup *pUVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  undefined1 auStackY_208 [32];
  uint uVar6;
  wchar_t *pwVar7;
  FWeakObjectPtr local_1d8;
  undefined1 local_1d0 [8];
  FDelegateAllocation local_1c8;
  FDS_Text local_1b8;
  FDestructionSentinel local_168;
  FDelegateAllocation *local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_208;
  this = UDS_CommonPopupManager::GetInst();
  if (this == (UDS_CommonPopupManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_ChatUIPopupHelper::OpenGroupJoinPopup",0x29,Yes);
    pwVar7 = L"commonPopupManager == nullptr";
    uVar6 = 0x59;
  }
  else {
    UDS_CommonPopupManager::CreateCommonPopup(this);
    bVar1 = TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> *)&local_1d8,(void *)0x0);
    if (!bVar1) {
      pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1d8);
      local_1b8.StringTableType = None;
      local_1b8.StringTableID = 0;
      local_1b8.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_1b8.StringEnumTableNameID.Number = 0;
      local_1b8.TimeExpressionType = None;
      local_1b8.IsExpression = false;
      local_1b8.DateTime.Ticks = 0;
      local_1b8.TimeSpan.Ticks = 0;
      local_1b8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1b8.UniqueString.Data.ArrayNum = 0;
      local_1b8.UniqueString.Data.ArrayMax = 0;
      local_1b8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1b8.FormatArgs.ArrayNum = 0;
      local_1b8.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringTable(&local_1b8,StringUi,0xc390);
      UDS_M_CommonPopup::SetTitle(pUVar3,&local_1b8);
      pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1d8);
      UDS_M_CommonPopup::SetButton(pUVar3,ButtonCancel,StringUi,0x66,false);
      pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1d8);
      UDS_M_CommonPopup::SetButton(pUVar3,ButtonConfirm,StringUi,0x67,false);
      pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1d8);
      local_1b8.StringTableType = None;
      local_1b8.StringTableID = 0;
      local_1b8.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_1b8.StringEnumTableNameID.Number = 0;
      local_1b8.TimeExpressionType = None;
      local_1b8.DateTime.Ticks = 0;
      local_1b8.TimeSpan.Ticks = 0;
      local_1b8.IsExpression = false;
      local_1b8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1b8.UniqueString.Data.ArrayNum = 0;
      local_1b8.UniqueString.Data.ArrayMax = 0;
      local_1b8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1b8.FormatArgs.ArrayNum = 0;
      local_1b8.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringTable(&local_1b8,StringUi,0xc391);
      UDS_M_CommonPopup::SetMainContent(pUVar3,&local_1b8);
      pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1d8);
      local_1d0 = (undefined1  [8])0x0;
      local_1c8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_1c8.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1d0,
                 (FWriteAccessScope *)&local_168);
      local_150 = &local_1c8;
      puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_1c8);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = &
                  ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar5 = FDelegateHandle::GenerateNewID();
        puVar4[2] = uVar5;
        *puVar4 = &
                  ___7__TBaseStaticDelegateInstance___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        puVar4[3] = OnCloseConfirmPopup;
      }
      if (local_168.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_168.Accessor,&local_168);
      }
      UDS_M_CommonPopup::SetDelegate
                (pUVar3,ButtonCancel,
                 (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                  *)local_1d0);
      pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1d8);
      local_1d0 = (undefined1  [8])0x0;
      local_1c8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_1c8.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1d0,
                 (FWriteAccessScope *)&local_168);
      local_150 = &local_1c8;
      puVar4 = UE::Core::Private::DelegateAllocate(0x28,&local_1c8);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = &
                  ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy__VFString____6B_
        ;
        ::FString::FString((FString *)(puVar4 + 1),param_1);
        uVar5 = FDelegateHandle::GenerateNewID();
        puVar4[3] = uVar5;
        *puVar4 = &
                  ___7__TBaseStaticDelegateInstance___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy__VFString____6B_
        ;
        puVar4[4] = OnGroupJoinConfirm;
      }
      if (local_168.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_168.Accessor,&local_168);
      }
      UDS_M_CommonPopup::SetDelegate
                (pUVar3,ButtonConfirm,
                 (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                  *)local_1d0);
      pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1d8);
      UDS_M_CommonPopup::OpenCommonPopup(pUVar3);
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_ChatUIPopupHelper::OpenGroupJoinPopup",0x29,Yes);
    pwVar7 = L"CommonPopupModel == nullptr";
    uVar6 = 0x60;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_148.Ptr,uVar6,pwVar7);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  return;
}

// OpenGroupLeavePopup @ 14ba09e40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_ChatUIPopupHelper::OpenGroupLeavePopup(FString *param_1)

{
  FScriptContainerElement *pFVar1;
  FDS_ChatRoomManager *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FDS_ChatUserInfo *pFVar4;
  atomic<int> aVar5;
  bool bVar6;
  atomic<int> aVar7;
  UDS_ChattingManager *pUVar8;
  UDS_LogManager *pUVar9;
  TWeakPtr<FDS_ChatRoomData,1> *pTVar10;
  UObject *pUVar11;
  UDS_CommonPopupManager *this;
  UDS_M_CommonPopup *pUVar12;
  FDS_Text *pFVar13;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  *pTVar14;
  FDS_ChatRoomData *pFVar15;
  TReferenceControllerBase<1> *pTVar16;
  undefined1 auStackY_208 [32];
  uint uVar17;
  wchar_t *pwVar18;
  FWeakObjectPtr local_1c8;
  FWeakObjectPtr local_1c0;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_1b8;
  FDS_Text local_1a0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_208;
  pUVar8 = UDS_ChattingManager::GetInst();
  if (pUVar8 == (UDS_ChattingManager *)0x0) {
    pUVar9 = UDS_LogManager::GetInst();
    if (pUVar9 == (UDS_LogManager *)0x0) goto LAB_14ba09ef1;
    pUVar9 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_ChatUIPopupHelper::OpenGroupLeavePopup",0x2a,Yes);
    pwVar18 = L"chattingManager == nullptr";
    uVar17 = 0x72;
  }
  else if ((char)pUVar8->_padding_ == '\x01') {
    pUVar9 = UDS_LogManager::GetInst();
    if (pUVar9 == (UDS_LogManager *)0x0) goto LAB_14ba09ef1;
    pUVar9 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_ChatUIPopupHelper::OpenGroupLeavePopup",0x2a,Yes);
    pwVar18 = L"chattingManager->IsBeingDestroyed() == true";
    uVar17 = 0x78;
  }
  else {
    UDS_PlayerData::GetMainPlayerData();
    bVar6 = FWeakObjectPtr::IsValid(&local_1c0);
    if (bVar6) {
      pFVar2 = (pUVar8->ChatRoomManager).Object;
      if ((pFVar2 == (FDS_ChatRoomManager *)0x0) ||
         (pTVar10 = TMapBase<FString,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>_>
                    ::Find((TMapBase<FString,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>_>
                            *)&pFVar2->IndexByGroupID,param_1),
         pTVar10 == (TWeakPtr<FDS_ChatRoomData,1> *)0x0)) {
        pTVar16 = (TReferenceControllerBase<1> *)0x0;
LAB_14ba0a371:
        pUVar9 = UDS_LogManager::GetInst();
        if (pUVar9 != (UDS_LogManager *)0x0) {
          pUVar9 = UDS_LogManager::GetInst();
          local_148._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_148,"UDS_ChatUIPopupHelper::OpenGroupLeavePopup",0x2a,Yes);
          UDS_LogManager::PrintLog
                    (pUVar9,1,Warning,local_148.Ptr,0x86,
                     L"groupChatRoomData.IsValid() == false  (GroupID : %s)");
          if ((void *)local_148._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_148._padding_);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16)
        ;
        pFVar1 = (param_1->Data).AllocatorInstance.Data;
        if (pFVar1 == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(pFVar1);
        return;
      }
      pTVar16 = (pTVar10->WeakReferenceCount).ReferenceController;
      pFVar15 = (FDS_ChatRoomData *)0x0;
      if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
        aVar5 = pTVar16->SharedReferenceCount;
        do {
          if (aVar5 == (atomic<int>)0x0) {
            pTVar16 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_14ba0a030;
          }
          LOCK();
          aVar7 = pTVar16->SharedReferenceCount;
          bVar6 = aVar5 == aVar7;
          if (bVar6) {
            pTVar16->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
            aVar7 = aVar5;
          }
          UNLOCK();
          aVar5 = aVar7;
        } while (!bVar6);
        pFVar15 = pTVar10->Object;
      }
LAB_14ba0a030:
      if (pFVar15 == (FDS_ChatRoomData *)0x0) goto LAB_14ba0a371;
      pTVar3 = (pFVar15->GroupOwner).SharedReferenceCount.ReferenceController;
      pFVar4 = (pFVar15->GroupOwner).Object;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pFVar4 == (FDS_ChatUserInfo *)0x0) {
        pUVar9 = UDS_LogManager::GetInst();
        if (pUVar9 == (UDS_LogManager *)0x0) goto LAB_14ba0a31f;
        pUVar9 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_ChatUIPopupHelper::OpenGroupLeavePopup",0x2a,Yes);
        UDS_LogManager::PrintLog
                  (pUVar9,1,Warning,local_148.Ptr,0x8d,
                   L"groupOwner.IsValid() == false  (GroupID : %s)");
      }
      else {
        pUVar11 = FWeakObjectPtr::Get(&local_1c0);
        if ((pFVar4->PlayerUID == *(longlong *)&pUVar11[6].field_0x8) &&
           (1 < *(int *)&(pFVar15->GroupMembers).field_0x8 -
                *(int *)&(pFVar15->GroupMembers).field_0x34)) {
          OpenGroupChangeOwnerPopupForLeave(param_1);
          goto LAB_14ba0a31f;
        }
        this = UDS_CommonPopupManager::GetInst();
        if (this == (UDS_CommonPopupManager *)0x0) {
          pUVar9 = UDS_LogManager::GetInst();
          if (pUVar9 == (UDS_LogManager *)0x0) goto LAB_14ba0a31f;
          pUVar9 = UDS_LogManager::GetInst();
          local_148._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_148,"UDS_ChatUIPopupHelper::OpenGroupLeavePopup",0x2a,Yes);
          pwVar18 = L"commonPopupManager == nullptr";
          uVar17 = 0x9a;
        }
        else {
          UDS_CommonPopupManager::CreateCommonPopup(this);
          bVar6 = TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> *)&local_1c8,
                             (void *)0x0);
          if (!bVar6) {
            pUVar12 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1c8);
            pFVar13 = FDS_Text::FromStringTable(&local_1a0,StringUi,0xc396);
            UDS_M_CommonPopup::SetTitle(pUVar12,pFVar13);
            pUVar12 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1c8);
            UDS_M_CommonPopup::SetButton(pUVar12,ButtonCancel,StringUi,0x66,false);
            pUVar12 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1c8);
            UDS_M_CommonPopup::SetButton(pUVar12,ButtonConfirm,StringUi,0x67,false);
            pUVar12 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1c8);
            pFVar13 = FDS_Text::FromStringTable(&local_1a0,StringUi,0xc397);
            UDS_M_CommonPopup::SetMainContent(pUVar12,pFVar13);
            pUVar12 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1c8);
            pTVar14 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                      ::CreateStatic<>(&local_1b8,OnCloseConfirmPopup);
            UDS_M_CommonPopup::SetDelegate(pUVar12,ButtonCancel,pTVar14);
            pUVar12 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1c8);
            pTVar14 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                      ::CreateStatic<FString_const_&>(&local_1b8,OnGroupLeaveConfirm,param_1);
            UDS_M_CommonPopup::SetDelegate(pUVar12,ButtonConfirm,pTVar14);
            pUVar12 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1c8);
            UDS_M_CommonPopup::OpenCommonPopup(pUVar12);
            goto LAB_14ba0a31f;
          }
          pUVar9 = UDS_LogManager::GetInst();
          if (pUVar9 == (UDS_LogManager *)0x0) goto LAB_14ba0a31f;
          pUVar9 = UDS_LogManager::GetInst();
          local_148._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_148,"UDS_ChatUIPopupHelper::OpenGroupLeavePopup",0x2a,Yes);
          pwVar18 = L"CommonPopupModel == nullptr";
          uVar17 = 0xa1;
        }
        UDS_LogManager::PrintLog(pUVar9,1,Warning,local_148.Ptr,uVar17,pwVar18);
      }
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
LAB_14ba0a31f:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
      pFVar1 = (param_1->Data).AllocatorInstance.Data;
      if (pFVar1 == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(pFVar1);
      return;
    }
    pUVar9 = UDS_LogManager::GetInst();
    if (pUVar9 == (UDS_LogManager *)0x0) goto LAB_14ba09ef1;
    pUVar9 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_ChatUIPopupHelper::OpenGroupLeavePopup",0x2a,Yes);
    pwVar18 = L"myPlayerData.IsValid() == false";
    uVar17 = 0x7f;
  }
  UDS_LogManager::PrintLog(pUVar9,1,Warning,local_148.Ptr,uVar17,pwVar18);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
LAB_14ba09ef1:
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// OpenGroupMemberKickPopup @ 14ba0a430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_ChatUIPopupHelper::OpenGroupMemberKickPopup(FString *param_1,long64 param_2)

{
  bool bVar1;
  UDS_CommonPopupManager *this;
  UDS_LogManager *pUVar2;
  UDS_M_CommonPopup *pUVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  undefined1 auStackY_208 [32];
  uint uVar6;
  wchar_t *pwVar7;
  FWeakObjectPtr local_1d8;
  undefined1 local_1d0 [8];
  FDelegateAllocation local_1c8;
  FDS_Text local_1b8;
  FDestructionSentinel local_168;
  FDelegateAllocation *local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_208;
  this = UDS_CommonPopupManager::GetInst();
  if (this == (UDS_CommonPopupManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_ChatUIPopupHelper::OpenGroupMemberKickPopup",0x2f,Yes);
    pwVar7 = L"commonPopupManager == nullptr";
    uVar6 = 0xe5;
  }
  else {
    UDS_CommonPopupManager::CreateCommonPopup(this);
    bVar1 = TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> *)&local_1d8,(void *)0x0);
    if (!bVar1) {
      pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1d8);
      local_1b8.StringTableType = None;
      local_1b8.StringTableID = 0;
      local_1b8.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_1b8.StringEnumTableNameID.Number = 0;
      local_1b8.TimeExpressionType = None;
      local_1b8.IsExpression = false;
      local_1b8.DateTime.Ticks = 0;
      local_1b8.TimeSpan.Ticks = 0;
      local_1b8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1b8.UniqueString.Data.ArrayNum = 0;
      local_1b8.UniqueString.Data.ArrayMax = 0;
      local_1b8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1b8.FormatArgs.ArrayNum = 0;
      local_1b8.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringTable(&local_1b8,StringUi,0xc392);
      UDS_M_CommonPopup::SetTitle(pUVar3,&local_1b8);
      pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1d8);
      UDS_M_CommonPopup::SetButton(pUVar3,ButtonCancel,StringUi,0x66,false);
      pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1d8);
      UDS_M_CommonPopup::SetButton(pUVar3,ButtonConfirm,StringUi,0x67,false);
      pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1d8);
      local_1b8.StringTableType = None;
      local_1b8.StringTableID = 0;
      local_1b8.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_1b8.StringEnumTableNameID.Number = 0;
      local_1b8.TimeExpressionType = None;
      local_1b8.DateTime.Ticks = 0;
      local_1b8.TimeSpan.Ticks = 0;
      local_1b8.IsExpression = false;
      local_1b8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1b8.UniqueString.Data.ArrayNum = 0;
      local_1b8.UniqueString.Data.ArrayMax = 0;
      local_1b8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1b8.FormatArgs.ArrayNum = 0;
      local_1b8.FormatArgs.ArrayMax = 0;
      FDS_Text::SetTextFromStringTable(&local_1b8,StringUi,0xc393);
      UDS_M_CommonPopup::SetMainContent(pUVar3,&local_1b8);
      pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1d8);
      local_1d0 = (undefined1  [8])0x0;
      local_1c8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_1c8.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1d0,
                 (FWriteAccessScope *)&local_168);
      local_150 = &local_1c8;
      puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_1c8);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = &
                  ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar5 = FDelegateHandle::GenerateNewID();
        puVar4[2] = uVar5;
        *puVar4 = &
                  ___7__TBaseStaticDelegateInstance___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        puVar4[3] = OnCloseConfirmPopup;
      }
      if (local_168.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_168.Accessor,&local_168);
      }
      UDS_M_CommonPopup::SetDelegate
                (pUVar3,ButtonCancel,
                 (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                  *)local_1d0);
      pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1d8);
      local_1d0 = (undefined1  [8])0x0;
      local_1c8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_1c8.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1d0,
                 (FWriteAccessScope *)&local_168);
      local_150 = &local_1c8;
      puVar4 = UE::Core::Private::DelegateAllocate(0x30,&local_1c8);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = &
                  ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy__VFString___J__6B_
        ;
        ::FString::FString((FString *)(puVar4 + 1),param_1);
        puVar4[3] = param_2;
        uVar5 = FDelegateHandle::GenerateNewID();
        puVar4[4] = uVar5;
        *puVar4 = &
                  ___7__TBaseStaticDelegateInstance___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy__VFString___J__6B_
        ;
        puVar4[5] = OnGroupMemberKickConfirm;
      }
      if (local_168.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_168.Accessor,&local_168);
      }
      UDS_M_CommonPopup::SetDelegate
                (pUVar3,ButtonConfirm,
                 (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                  *)local_1d0);
      pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1d8);
      UDS_M_CommonPopup::OpenCommonPopup(pUVar3);
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_ChatUIPopupHelper::OpenGroupMemberKickPopup",0x2f,Yes);
    pwVar7 = L"CommonPopupModel == nullptr";
    uVar6 = 0xec;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_148.Ptr,uVar6,pwVar7);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  return;
}

// OpenGroupMembersPopup @ 14ba0a7f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl UDS_ChatUIPopupHelper::OpenGroupMembersPopup(FString *param_1,bool param_2)

{
  UDS_TencentCloudChatManager *pUVar1;
  UDS_LogManager *pUVar2;
  UDS_WindowManager *this;
  undefined8 *puVar3;
  ulong64 uVar4;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar5;
  undefined1 auStackY_1c8 [32];
  undefined1 local_198 [8];
  FDelegateAllocation local_190;
  FDestructionSentinel local_180;
  FDelegateAllocation *local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  pUVar1 = UDS_TencentCloudChatManager::GetInst();
  if (pUVar1 == (UDS_TencentCloudChatManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_ChatUIPopupHelper::OpenGroupMembersPopup",0x2c,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_158.Ptr,0x45,L"tencentChatManager == nullptr")
      ;
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
  else {
    this = UDS_WindowManager::GetInst();
    if (this == (UDS_WindowManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 != (UDS_LogManager *)0x0) {
        pUVar2 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_ChatUIPopupHelper::OpenGroupMembersPopup",0x2c,Yes);
        UDS_LogManager::PrintLog(pUVar2,1,Warning,local_158.Ptr,0x4c,L"windowManager == nullptr");
        if ((void *)local_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_158._padding_);
        }
      }
    }
    else {
      local_198 = (undefined1  [8])0x0;
      local_190.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_190.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_198,
                 (FWriteAccessScope *)&local_180);
      local_168 = &local_190;
      puVar3 = UE::Core::Private::DelegateAllocate(0x30,&local_190);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &
                  ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__VFString___N__6B_
        ;
        ::FString::FString((FString *)(puVar3 + 1),param_1);
        *(bool *)(puVar3 + 3) = param_2;
        uVar4 = FDelegateHandle::GenerateNewID();
        puVar3[4] = uVar4;
        *puVar3 = &
                  ___7__TBaseStaticDelegateInstance___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__VFString___N__6B_
        ;
        puVar3[5] = OnOpenGroupMembersPopup;
      }
      if (local_180.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_180.Accessor,&local_180);
      }
      pTVar5 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
               TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                         ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                          &local_180,
                          (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                          local_198);
      UDS_WindowManager::OpenWindow(this,ChattingGroupParticipantsPopup,pTVar5);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_198,
                 (FWriteAccessScope *)&local_180);
      if ((local_190.DelegateSize != 0) &&
         (local_190.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_190.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_190,0,0,0x10);
        local_190.DelegateSize = 0;
      }
      if (local_180.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_180.Accessor,&local_180);
      }
      if (local_190.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_190.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_198);
    }
  }
  return;
}

// OpenGroupSettingPopup @ 14ba0aa90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl UDS_ChatUIPopupHelper::OpenGroupSettingPopup(FString *param_1)

{
  int iVar1;
  int iVar2;
  UDS_ChattingManager *this;
  UDS_LogManager *pUVar3;
  UDS_WindowManager *this_00;
  undefined8 *puVar4;
  ulong64 uVar5;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar6;
  undefined1 auStackY_1b8 [32];
  uint uVar7;
  wchar_t *pwVar8;
  undefined1 local_188 [8];
  FDelegateAllocation local_180;
  FDestructionSentinel local_170;
  FDelegateAllocation *local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  this = UDS_ChattingManager::GetInst();
  if (this == (UDS_ChattingManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_ChatUIPopupHelper::OpenGroupSettingPopup",0x2c,Yes);
    pwVar8 = L"chattingManager == nullptr";
    uVar7 = 0x18;
  }
  else {
    if ((char)this->_padding_ != '\x01') {
      this_00 = UDS_WindowManager::GetInst();
      if (this_00 != (UDS_WindowManager *)0x0) {
        if ((param_1->Data).ArrayNum < 2) {
          iVar1 = UDS_ChattingManager::GetChatRoomDataCount(this,Group);
          iVar2 = DS_CommonDataHelper::ChattingMaxGroupJoinCount();
          if (iVar2 <= iVar1) {
            local_170.AccessType = Reader;
            local_170._4_4_ = 0;
            local_170.Accessor = (FMRSWRecursiveAccessDetector *)0x0;
            local_170.bDestroyed = false;
            local_170._17_3_ = 0;
            UDS_UIMessageManager::OpenMsgByStringUi
                      (0xc54c,Complete_None_01,
                       (TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy>
                        *)&local_170);
            return;
          }
        }
        local_188 = (undefined1  [8])0x0;
        local_180.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_180.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_188,
                   (FWriteAccessScope *)&local_170);
        local_158 = &local_180;
        puVar4 = UE::Core::Private::DelegateAllocate(0x28,&local_180);
        if (puVar4 != (undefined8 *)0x0) {
          *puVar4 = &
                    ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__VFString____6B_
          ;
          ::FString::FString((FString *)(puVar4 + 1),param_1);
          uVar5 = FDelegateHandle::GenerateNewID();
          puVar4[3] = uVar5;
          *puVar4 = &
                    ___7__TBaseStaticDelegateInstance___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__VFString____6B_
          ;
          puVar4[4] = OnOpenGroupSettingPopup;
        }
        if (local_170.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_170.Accessor,&local_170);
        }
        pTVar6 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
                 TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                           ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                            &local_170,
                            (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                            local_188);
        UDS_WindowManager::OpenWindow(this_00,ChattingGroupSettingPopup,pTVar6);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_188,
                   (FWriteAccessScope *)&local_170);
        if ((local_180.DelegateSize != 0) &&
           (local_180.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_180.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_180,0,0,0x10);
          local_180.DelegateSize = 0;
        }
        if (local_170.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_170.Accessor,&local_170);
        }
        if (local_180.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_180.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_188);
        return;
      }
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar3 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_ChatUIPopupHelper::OpenGroupSettingPopup",0x2c,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_148.Ptr,0x25,L"windowManager == nullptr");
      if ((void *)local_148._padding_ == (void *)0x0) {
        return;
      }
      FMemory::Free((void *)local_148._padding_);
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_ChatUIPopupHelper::OpenGroupSettingPopup",0x2c,Yes);
    pwVar8 = L"chattingManager->IsBeingDestroyed() == true";
    uVar7 = 0x1e;
  }
  UDS_LogManager::PrintLog(pUVar3,1,Warning,local_148.Ptr,uVar7,pwVar8);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  return;
}

