// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 61

// SetClickBookmark_WrapperImpl @ 14b605ca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_Chat_ChatRoomInfo::SetClickBookmark_WrapperImpl(void *param_1,void *param_2)

{
  char cVar1;
  TReferenceControllerBase<1> *pTVar2;
  FDS_ChatConversation *pFVar3;
  code *pcVar4;
  FName FVar5;
  int iVar6;
  bool bVar7;
  UDS_ChattingManager *pUVar8;
  UDS_LogManager *pUVar9;
  bool bVar10;
  TSharedPtr<FDS_ChatCustomData,1> TStack_298;
  FName FStack_288;
  int iStack_280;
  FDS_ChatCustomData FStack_278;
  FDS_ChatCustomData aFStack_258 [8];
  undefined8 uStack_190;
  undefined1 auStack_188 [32];
  TSharedPtr<FDS_ChatRoomData,1> TStack_158;
  undefined1 auStack_148 [256];
  UDS_ChattingManager *pUStack_48;
  wchar_t *pwStack_40;
  void *pvStack_38;
  wchar_t *pwStack_30;
  ulonglong uStack_28;
  
  cVar1 = *(char *)((longlong)param_1 + 0x3d8);
  if (cVar1 != '\x02') {
    if (cVar1 != '\x06') {
      if (cVar1 != '\t') {
        return;
      }
      uStack_28 = __security_cookie.value ^ (ulonglong)auStack_188;
      uStack_190 = 0x14bd6e646;
      pUVar8 = UDS_ChattingManager::GetInst();
      if (pUVar8 == (UDS_ChattingManager *)0x0) {
        uStack_190 = 0x14bd6e657;
        pUVar9 = UDS_LogManager::GetInst();
        if (pUVar9 != (UDS_LogManager *)0x0) {
          uStack_190 = 0x14bd6e665;
          pUVar9 = UDS_LogManager::GetInst();
          uStack_190 = 0x14bd6e68d;
          pUStack_48 = pUVar8;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    ((TStringConversion<TStringConvert<char,wchar_t>,128> *)auStack_148,
                     "UDS_VM_Chat_ChatRoomInfo::OnBookmark_Group",0x2a,Yes);
          uStack_190 = 0x14bd6e6bc;
          UDS_LogManager::PrintLog(pUVar9,1,Warning,pwStack_40,0x1d5,L"chattingManager == nullptr");
          if (pUStack_48 != (UDS_ChattingManager *)0x0) {
            uStack_190 = 0x14bd6e6d2;
            FMemory::Free(pUStack_48);
          }
        }
      }
      else {
        uStack_190 = 0x14bd6e6ee;
        UDS_ChattingManager::GetChatRoomData
                  (pUVar8,&TStack_158,Group,*(int *)((longlong)param_1 + 0x3dc));
        if (TStack_158.Object != (FDS_ChatRoomData *)0x0) {
          if (TStack_158.Object == (FDS_ChatRoomData *)0x0) {
            uStack_190 = 0x14bd6e726;
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
          uStack_190 = 0x14bd6e736;
          bVar7 = FDS_ChatRoomData::IsValidData(TStack_158.Object);
          if (bVar7) {
            if (TStack_158.Object == (FDS_ChatRoomData *)0x0) {
              uStack_190 = 0x14bd6e776;
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
            pTVar2 = ((TStack_158.Object)->ChatConversation).SharedReferenceCount.
                     ReferenceController;
            pFVar3 = ((TStack_158.Object)->ChatConversation).Object;
            if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
              UNLOCK();
            }
            if (pFVar3 == (FDS_ChatConversation *)0x0) {
              uStack_190 = 0x14bd6e7b7;
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
            bVar10 = pFVar3->bIsBookmark == false;
            uStack_190 = 0x14bd6e7da;
            bVar7 = UDS_ChattingManager::UpdateBookmark
                              (pUVar8,Group,*(int *)((longlong)param_1 + 0x3dc),bVar10);
            if (bVar7) {
              pFVar3->bIsBookmark = bVar10;
              uStack_190 = 0x14bd6e7f1;
              UDS_ChattingManager::RequestBookmarkConversation
                        (pUVar8,&pFVar3->ConversationID,bVar10);
              uStack_190 = 0x14bd6e7fd;
              SetBookmark(param_1,pFVar3->bIsBookmark);
            }
            uStack_190 = 0x14bd6e805;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar2);
          }
        }
        uStack_190 = 0x14bd6e81f;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (TStack_158.SharedReferenceCount.ReferenceController);
      }
      return;
    }
    uStack_28 = __security_cookie.value ^ (ulonglong)auStack_188;
    uStack_190 = 0x14bd6e876;
    pUVar8 = UDS_ChattingManager::GetInst();
    if (pUVar8 == (UDS_ChattingManager *)0x0) {
      uStack_190 = 0x14bd6e887;
      pUVar9 = UDS_LogManager::GetInst();
      if (pUVar9 != (UDS_LogManager *)0x0) {
        uStack_190 = 0x14bd6e895;
        pUVar9 = UDS_LogManager::GetInst();
        uStack_190 = 0x14bd6e8bd;
        pUStack_48 = pUVar8;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  ((TStringConversion<TStringConvert<char,wchar_t>,128> *)auStack_148,
                   "UDS_VM_Chat_ChatRoomInfo::OnBookmark_Whisper",0x2c,Yes);
        uStack_190 = 0x14bd6e8ec;
        UDS_LogManager::PrintLog(pUVar9,1,Warning,pwStack_40,0x1b9,L"chattingManager == nullptr");
        if (pUStack_48 != (UDS_ChattingManager *)0x0) {
          uStack_190 = 0x14bd6e902;
          FMemory::Free(pUStack_48);
        }
      }
    }
    else {
      uStack_190 = 0x14bd6e91e;
      UDS_ChattingManager::GetChatRoomData
                (pUVar8,&TStack_158,Whisper,*(int *)((longlong)param_1 + 0x3dc));
      if (TStack_158.Object != (FDS_ChatRoomData *)0x0) {
        if (TStack_158.Object == (FDS_ChatRoomData *)0x0) {
          uStack_190 = 0x14bd6e956;
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
        uStack_190 = 0x14bd6e966;
        bVar7 = FDS_ChatRoomData::IsValidData(TStack_158.Object);
        if (bVar7) {
          if (TStack_158.Object == (FDS_ChatRoomData *)0x0) {
            uStack_190 = 0x14bd6e9a6;
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
          pTVar2 = ((TStack_158.Object)->ChatConversation).SharedReferenceCount.ReferenceController;
          pFVar3 = ((TStack_158.Object)->ChatConversation).Object;
          if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
            UNLOCK();
          }
          if (pFVar3 == (FDS_ChatConversation *)0x0) {
            uStack_190 = 0x14bd6e9e7;
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
          bVar10 = pFVar3->bIsBookmark == false;
          uStack_190 = 0x14bd6ea0a;
          bVar7 = UDS_ChattingManager::UpdateBookmark
                            (pUVar8,Whisper,*(int *)((longlong)param_1 + 0x3dc),bVar10);
          if (bVar7) {
            pFVar3->bIsBookmark = bVar10;
            uStack_190 = 0x14bd6ea21;
            UDS_ChattingManager::RequestBookmarkConversation(pUVar8,&pFVar3->ConversationID,bVar10);
            uStack_190 = 0x14bd6ea2d;
            SetBookmark(param_1,pFVar3->bIsBookmark);
          }
          uStack_190 = 0x14bd6ea35;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar2);
        }
      }
      uStack_190 = 0x14bd6ea4f;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (TStack_158.SharedReferenceCount.ReferenceController);
    }
    return;
  }
  pUVar8 = UDS_ChattingManager::GetInst();
  if (pUVar8 == (UDS_ChattingManager *)0x0) {
    pUVar9 = UDS_LogManager::GetInst();
    if (pUVar9 != (UDS_LogManager *)0x0) {
      pUVar9 = UDS_LogManager::GetInst();
      TStack_158.Object = (FDS_ChatRoomData *)pUVar8;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)aFStack_258,
                 "UDS_VM_Chat_ChatRoomInfo::OnBookmark_Custom",0x2b,Yes);
      UDS_LogManager::PrintLog
                (pUVar9,1,Warning,(wchar_t *)TStack_158.SharedReferenceCount.ReferenceController,
                 0x19b,L"chattingManager == nullptr");
      if ((UDS_ChattingManager *)TStack_158.Object != (UDS_ChattingManager *)0x0) {
        FMemory::Free(TStack_158.Object);
      }
    }
  }
  else {
    UDS_ChattingManager::GetCustomData(pUVar8,&TStack_298,*(int *)((longlong)param_1 + 0x3dc));
    if (TStack_298.Object == (FDS_ChatCustomData *)0x0) {
      pUVar9 = UDS_LogManager::GetInst();
      if (pUVar9 != (UDS_LogManager *)0x0) {
        pUVar9 = UDS_LogManager::GetInst();
        pvStack_38 = (void *)0x0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(auStack_148 + 0x10),
                   "UDS_VM_Chat_ChatRoomInfo::OnBookmark_Custom",0x2b,Yes);
        UDS_LogManager::PrintLog
                  (pUVar9,1,Warning,pwStack_30,0x1a2,
                   L"chatCustomData.IsValid() == false  (SubTabIndex : %d)");
        if (pvStack_38 != (void *)0x0) {
          FMemory::Free(pvStack_38);
        }
      }
    }
    else {
      if ((TStack_298.Object == (FDS_ChatCustomData *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      bVar10 = (TStack_298.Object)->bIsBookmark == false;
      bVar7 = UDS_ChattingManager::UpdateBookmark
                        (pUVar8,Custom,*(int *)((longlong)param_1 + 0x3dc),bVar10);
      if (bVar7) {
        if ((TStack_298.Object == (FDS_ChatCustomData *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        (TStack_298.Object)->bIsBookmark = bVar10;
        if ((TStack_298.Object == (FDS_ChatCustomData *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x44d,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FStack_278.ChatFilterIndex = (TStack_298.Object)->ChatFilterIndex;
        FStack_278._4_4_ = *(undefined4 *)&(TStack_298.Object)->field_0x4;
        FStack_278.ChatFilterFlags = (TStack_298.Object)->ChatFilterFlags;
        FStack_278.bIsBookmark = (TStack_298.Object)->bIsBookmark;
        FStack_278._17_7_ = *(undefined7 *)&(TStack_298.Object)->field_0x11;
        UDS_ChattingManager::RequestSetCustomInfo
                  (pUVar8,*(int *)((longlong)param_1 + 0x3dc),&FStack_278);
        iVar6 = FFieldNotificationClassDescriptor::bIsBookmark.BitNumber;
        FVar5 = FFieldNotificationClassDescriptor::bIsBookmark.FieldName;
        if ((bool)*(char *)((longlong)param_1 + 0x3c0) != bVar10) {
          *(bool *)((longlong)param_1 + 0x3c0) = bVar10;
          iStack_280 = iVar6;
          FStack_288 = FVar5;
          (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
                    ((longlong *)((longlong)param_1 + 0x28),&FStack_288);
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (TStack_298.SharedReferenceCount.ReferenceController);
  }
  return;
}

// SetClickManageCustom_WrapperImpl @ 14b605cb0

void __cdecl UDS_VM_Chat_ChatRoomInfo::SetClickManageCustom_WrapperImpl(void *param_1,void *param_2)

{
  UDS_ChatUIPopupHelper::OpenCustomSettingPopup(*(int *)((longlong)param_1 + 0x3dc));
  return;
}

// SetClickManageGroup_WrapperImpl @ 14b605cc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_Chat_ChatRoomInfo::SetClickManageGroup_WrapperImpl(void *param_1,void *param_2)

{
  UDS_ChattingManager *this;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_178 [32];
  TSharedPtr<FDS_ChatRoomData,1> TStack_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this = UDS_ChattingManager::GetInst();
  if (this == (UDS_ChattingManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_VM_Chat_ChatRoomInfo::OnClickManageGroup",0x2c,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,TStack_138.Ptr,0x6c,L"chattingManager == nullptr");
      if ((void *)TStack_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
      }
    }
  }
  else {
    UDS_ChattingManager::GetChatRoomData(this,&TStack_148,Group,*(int *)((longlong)param_1 + 0x3dc))
    ;
    if (TStack_148.Object == (FDS_ChatRoomData *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      if (pUVar1 != (UDS_LogManager *)0x0) {
        pUVar1 = UDS_LogManager::GetInst();
        TStack_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&TStack_138,"UDS_VM_Chat_ChatRoomInfo::OnClickManageGroup",0x2c,Yes);
        UDS_LogManager::PrintLog
                  (pUVar1,1,Warning,TStack_138.Ptr,0x73,L"groupChatRoomData.IsValid() == false");
        if ((void *)TStack_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)TStack_138._padding_);
        }
      }
    }
    else {
      OpenGroupMenuPopup(param_1,(EDS_ChattingTabType *)((longlong)param_1 + 0x3d8),
                         *(int *)((longlong)param_1 + 0x3dc));
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (TStack_148.SharedReferenceCount.ReferenceController);
  }
  return;
}

// SetClickChatCollapsed_WrapperImpl @ 14b605cd0

void __cdecl
UDS_VM_Chat_ChatRoomInfo::SetClickChatCollapsed_WrapperImpl(void *param_1,void *param_2)

{
  EDS_ChatMode EVar1;
  UDS_ChatEvent *pUVar2;
  
  pUVar2 = UDS_ChatEvent::GetEvent();
  if (pUVar2 != (UDS_ChatEvent *)0x0) {
    EVar1 = FDS_QueryDelegate<enum_EDS_ChatMode_const_>::Query(&pUVar2->OnQueryChatMode);
    if (EVar1 == Normal) {
      FDS_EventDelegate<enum_EDS_ChatMode_const_>::Broadcast(&pUVar2->OnChangedChatMode,Simple);
      return;
    }
    if (EVar1 == Extended) {
      FDS_EventDelegate<enum_EDS_ChatMode_const_>::Broadcast(&pUVar2->OnChangedChatMode,Normal);
      return;
    }
  }
  return;
}

// SetClickChatExtended_WrapperImpl @ 14b605ce0

void __cdecl UDS_VM_Chat_ChatRoomInfo::SetClickChatExtended_WrapperImpl(void *param_1,void *param_2)

{
  UDS_ChatEvent *pUVar1;
  
  pUVar1 = UDS_ChatEvent::GetEvent();
  if (pUVar1 != (UDS_ChatEvent *)0x0) {
    FDS_EventDelegate<enum_EDS_ChatMode_const_>::Broadcast(&pUVar1->OnChangedChatMode,Extended);
    return;
  }
  return;
}

// SetClickExit_WrapperImpl @ 14b605cf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_Chat_ChatRoomInfo::SetClickExit_WrapperImpl(void *param_1,void *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FDS_ChatConversation *pFVar2;
  code *pcVar3;
  bool bVar4;
  UDS_ChattingManager *this;
  UDS_LogManager *pUVar5;
  undefined1 auStackY_3d8 [32];
  TSharedPtr<FDS_ChatRoomData,1> TStack_3a8;
  FDS_ChatCustomData FStack_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_378;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_3d8;
  this = UDS_ChattingManager::GetInst();
  if (this == (UDS_ChattingManager *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      TStack_378._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_378,"UDS_VM_Chat_ChatRoomInfo::OnClickExit",0x25,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,TStack_378.Ptr,0x97,L"chattingManager == nullptr");
      if ((void *)TStack_378._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_378._padding_);
      }
    }
  }
  else if (*(char *)((longlong)param_1 + 0x3d8) == '\x02') {
    FStack_398.ChatFilterIndex = *(int *)((longlong)param_1 + 0x3dc);
    FStack_398.ChatFilterFlags = 0;
    FStack_398.bIsBookmark = false;
    UDS_ChattingManager::RequestSetCustomInfo(this,FStack_398.ChatFilterIndex,&FStack_398);
    UDS_ChattingManager::SetChattingTabType(this,Total,-1);
  }
  else if (*(char *)((longlong)param_1 + 0x3d8) == '\x06') {
    UDS_ChattingManager::GetChatRoomData
              (this,&TStack_3a8,Whisper,*(int *)((longlong)param_1 + 0x3dc));
    if (TStack_3a8.Object == (FDS_ChatRoomData *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 != (UDS_LogManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        TStack_258._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&TStack_258,"UDS_VM_Chat_ChatRoomInfo::OnClickExit",0x25,Yes);
        UDS_LogManager::PrintLog
                  (pUVar5,1,Warning,TStack_258.Ptr,0xa7,L"chatRoomData.IsValid() == false");
        if ((void *)TStack_258._padding_ != (void *)0x0) {
          FMemory::Free((void *)TStack_258._padding_);
        }
      }
    }
    else {
      if ((TStack_3a8.Object == (FDS_ChatRoomData *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar1 = ((TStack_3a8.Object)->ChatConversation).SharedReferenceCount.ReferenceController;
      pFVar2 = ((TStack_3a8.Object)->ChatConversation).Object;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pFVar2 == (FDS_ChatConversation *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        if (pUVar5 != (UDS_LogManager *)0x0) {
          pUVar5 = UDS_LogManager::GetInst();
          TStack_138._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&TStack_138,"UDS_VM_Chat_ChatRoomInfo::OnClickExit",0x25,Yes);
          UDS_LogManager::PrintLog
                    (pUVar5,1,Warning,TStack_138.Ptr,0xae,L"chatRoomData.IsValid() == false");
          if ((void *)TStack_138._padding_ != (void *)0x0) {
            FMemory::Free((void *)TStack_138._padding_);
          }
        }
      }
      else {
        UDS_ChattingManager::RequestDeleteConversation(this,&pFVar2->ConversationID);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (TStack_3a8.SharedReferenceCount.ReferenceController);
  }
  return;
}

// SetMouseEnterButton_WrapperImpl @ 14b605d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_Chat_ChatRoomInfo::SetMouseEnterButton_WrapperImpl(void *param_1,void *param_2)

{
  UDS_LogManager *pUVar1;
  undefined1 auStackY_178 [32];
  UObject *apUStack_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  apUStack_148[0] = *(UObject **)param_2;
  if (apUStack_148[0] == (UObject *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_VM_Chat_ChatRoomInfo::OnMouseEnterButton",0x2c,Yes);
      UDS_LogManager::PrintLog
                (pUVar1,1,Warning,TStack_138.Ptr,0xba,L"InEvent.TargetWidget == nullptr");
      if ((void *)TStack_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
      }
    }
    *(undefined8 *)((longlong)param_1 + 0x3e0) = 0;
  }
  else {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable(apUStack_148[0]);
    }
    FWeakObjectPtr::operator=
              ((FWeakObjectPtr *)((longlong)param_1 + 0x3e0),(FObjectPtr)apUStack_148);
  }
  return;
}

// SetMouseLeaveButton_WrapperImpl @ 14b605d10

void __cdecl UDS_VM_Chat_ChatRoomInfo::SetMouseLeaveButton_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined8 *)((longlong)param_1 + 0x3e0) = 0;
  return;
}

// SetChatRoomName_WrapperImpl @ 14b605d20

void __cdecl UDS_VM_Chat_ChatRoomInfo::SetChatRoomName_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 0x370),param_2);
  iStack_10 = FFieldNotificationClassDescriptor::ChatRoomName.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::ChatRoomName.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetbIsBookmark_WrapperImpl @ 14b605d30

void __cdecl UDS_VM_Chat_ChatRoomInfo::SetbIsBookmark_WrapperImpl(void *param_1,void *param_2)

{
  SetBookmark(param_1,*(bool *)param_2);
  return;
}

// SetBookmarkVisibility_WrapperImpl @ 14b605d40

void __cdecl
UDS_VM_Chat_ChatRoomInfo::SetBookmarkVisibility_WrapperImpl(void *param_1,void *param_2)

{
  SetBookmarkVisibility(param_1,*(ESlateVisibility *)param_2);
  return;
}

// SetCustomVisibility_WrapperImpl @ 14b605d50

void __cdecl UDS_VM_Chat_ChatRoomInfo::SetCustomVisibility_WrapperImpl(void *param_1,void *param_2)

{
  SetCustomVisibility(param_1,*(ESlateVisibility *)param_2);
  return;
}

// SetGroupVisibility_WrapperImpl @ 14b605d60

void __cdecl UDS_VM_Chat_ChatRoomInfo::SetGroupVisibility_WrapperImpl(void *param_1,void *param_2)

{
  SetGroupVisibility(param_1,*(ESlateVisibility *)param_2);
  return;
}

// SetChatCollapsedVisibility_WrapperImpl @ 14b605d70

void __cdecl
UDS_VM_Chat_ChatRoomInfo::SetChatCollapsedVisibility_WrapperImpl(void *param_1,void *param_2)

{
  SetChatCollapsedVisibility(param_1,*(ESlateVisibility *)param_2);
  return;
}

// SetChatExtendedVisibility_WrapperImpl @ 14b605d80

void __cdecl
UDS_VM_Chat_ChatRoomInfo::SetChatExtendedVisibility_WrapperImpl(void *param_1,void *param_2)

{
  SetChatExtendedVisibility(param_1,*(ESlateVisibility *)param_2);
  return;
}

// SetExitVisibility_WrapperImpl @ 14b605d90

void __cdecl UDS_VM_Chat_ChatRoomInfo::SetExitVisibility_WrapperImpl(void *param_1,void *param_2)

{
  SetExitVisibility(param_1,*(ESlateVisibility *)param_2);
  return;
}

// SetChatTabColor_WrapperImpl @ 14b605da0

void __cdecl UDS_VM_Chat_ChatRoomInfo::SetChatTabColor_WrapperImpl(void *param_1,void *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  FName FStack_18;
  int iStack_10;
  
  if ((((*(float *)param_2 != *(float *)((longlong)param_1 + 0x3c8)) ||
       (*(float *)((longlong)param_2 + 4) != *(float *)((longlong)param_1 + 0x3cc))) ||
      (*(float *)((longlong)param_2 + 8) != *(float *)((longlong)param_1 + 0x3d0))) ||
     (*(float *)((longlong)param_2 + 0xc) != *(float *)((longlong)param_1 + 0x3d4))) {
    uVar1 = *(undefined4 *)((longlong)param_2 + 4);
    uVar2 = *(undefined4 *)((longlong)param_2 + 8);
    uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
    iStack_10 = FFieldNotificationClassDescriptor::ChatTabColor.BitNumber;
    FStack_18 = FFieldNotificationClassDescriptor::ChatTabColor.FieldName;
    *(undefined4 *)((longlong)param_1 + 0x3c8) = *(undefined4 *)param_2;
    *(undefined4 *)((longlong)param_1 + 0x3cc) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x3d0) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x3d4) = uVar3;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// StaticClass @ 14b605df0

UClass * __cdecl UDS_VM_Chat_ChatRoomInfo::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Chat_ChatRoomInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Chat_ChatRoomInfo",
               &Z_Registration_Info_UClass_UDS_VM_Chat_ChatRoomInfo.InnerSingleton,
               StaticRegisterNativesUDS_VM_Chat_ChatRoomInfo,1000,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Chat_ChatRoomInfo>,
               InternalVTableHelperCtorCaller<UDS_VM_Chat_ChatRoomInfo>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Chat_ChatRoomInfo.InnerSingleton;
}

// UDS_VM_Chat_ChatRoomInfo @ 14b60aa00

UDS_VM_Chat_ChatRoomInfo * __thiscall
UDS_VM_Chat_ChatRoomInfo::UDS_VM_Chat_ChatRoomInfo
          (UDS_VM_Chat_ChatRoomInfo *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->ClickBookmark)._padding_ = '\0';
  (this->ClickBookmark).bIsCustomSelected = false;
  (this->ClickBookmark).bIsLacked = false;
  (this->ClickBookmark).bIsCustomDisabled = false;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_ChatRoomInfo__6B_;
  *(undefined8 *)&(this->ClickBookmark).Delegate = 0;
  *(undefined8 *)&(this->ClickBookmark).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickBookmark).Delegate.field_0x10 = 0;
  (this->ClickManageCustom)._padding_ = '\0';
  (this->ClickManageCustom).bIsCustomSelected = false;
  (this->ClickManageCustom).bIsLacked = false;
  (this->ClickManageCustom).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickManageCustom).Delegate = 0;
  *(undefined8 *)&(this->ClickManageCustom).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickManageCustom).Delegate.field_0x10 = 0;
  (this->ClickManageGroup)._padding_ = '\0';
  (this->ClickManageGroup).bIsCustomSelected = false;
  (this->ClickManageGroup).bIsLacked = false;
  (this->ClickManageGroup).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickManageGroup).Delegate = 0;
  *(undefined8 *)&(this->ClickManageGroup).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickManageGroup).Delegate.field_0x10 = 0;
  (this->ClickChatCollapsed)._padding_ = '\0';
  (this->ClickChatCollapsed).bIsCustomSelected = false;
  (this->ClickChatCollapsed).bIsLacked = false;
  (this->ClickChatCollapsed).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickChatCollapsed).Delegate = 0;
  *(undefined8 *)&(this->ClickChatCollapsed).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickChatCollapsed).Delegate.field_0x10 = 0;
  (this->ClickChatExtended)._padding_ = '\0';
  (this->ClickChatExtended).bIsCustomSelected = false;
  (this->ClickChatExtended).bIsLacked = false;
  (this->ClickChatExtended).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickChatExtended).Delegate = 0;
  *(undefined8 *)&(this->ClickChatExtended).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickChatExtended).Delegate.field_0x10 = 0;
  (this->ClickExit)._padding_ = '\0';
  (this->ClickExit).bIsCustomSelected = false;
  (this->ClickExit).bIsLacked = false;
  (this->ClickExit).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickExit).Delegate = 0;
  *(undefined8 *)&(this->ClickExit).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickExit).Delegate.field_0x10 = 0;
  FDS_WidgetPointerEventField::FDS_WidgetPointerEventField(&this->MouseEnterButton);
  FDS_WidgetPointerEventField::FDS_WidgetPointerEventField(&this->MouseLeaveButton);
  (this->ChatRoomName).StringTableType = None;
  (this->ChatRoomName).StringTableID = 0;
  (this->ChatRoomName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ChatRoomName).StringEnumTableNameID.Number = 0;
  (this->ChatRoomName).DateTime.Ticks = 0;
  (this->ChatRoomName).TimeSpan.Ticks = 0;
  (this->ChatRoomName).TimeExpressionType = None;
  (this->ChatRoomName).IsExpression = false;
  (this->ChatRoomName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChatRoomName).UniqueString.Data.ArrayNum = 0;
  (this->ChatRoomName).UniqueString.Data.ArrayMax = 0;
  (this->ChatRoomName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChatRoomName).FormatArgs.ArrayNum = 0;
  (this->ChatRoomName).FormatArgs.ArrayMax = 0;
  this->bIsBookmark = false;
  this->ChattingTabType = None;
  this->SubTabIndex = -1;
  (this->HoverWidget).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UDS_VM_Chat_ChatRoomInfo @ 14b60ab70

UDS_VM_Chat_ChatRoomInfo * __thiscall
UDS_VM_Chat_ChatRoomInfo::UDS_VM_Chat_ChatRoomInfo
          (UDS_VM_Chat_ChatRoomInfo *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->ClickBookmark)._padding_ = '\0';
  (this->ClickBookmark).bIsCustomSelected = false;
  (this->ClickBookmark).bIsLacked = false;
  (this->ClickBookmark).bIsCustomDisabled = false;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_ChatRoomInfo__6B_;
  *(undefined8 *)&(this->ClickBookmark).Delegate = 0;
  *(undefined8 *)&(this->ClickBookmark).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickBookmark).Delegate.field_0x10 = 0;
  (this->ClickManageCustom)._padding_ = '\0';
  (this->ClickManageCustom).bIsCustomSelected = false;
  (this->ClickManageCustom).bIsLacked = false;
  (this->ClickManageCustom).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickManageCustom).Delegate = 0;
  *(undefined8 *)&(this->ClickManageCustom).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickManageCustom).Delegate.field_0x10 = 0;
  (this->ClickManageGroup)._padding_ = '\0';
  (this->ClickManageGroup).bIsCustomSelected = false;
  (this->ClickManageGroup).bIsLacked = false;
  (this->ClickManageGroup).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickManageGroup).Delegate = 0;
  *(undefined8 *)&(this->ClickManageGroup).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickManageGroup).Delegate.field_0x10 = 0;
  (this->ClickChatCollapsed)._padding_ = '\0';
  (this->ClickChatCollapsed).bIsCustomSelected = false;
  (this->ClickChatCollapsed).bIsLacked = false;
  (this->ClickChatCollapsed).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickChatCollapsed).Delegate = 0;
  *(undefined8 *)&(this->ClickChatCollapsed).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickChatCollapsed).Delegate.field_0x10 = 0;
  (this->ClickChatExtended)._padding_ = '\0';
  (this->ClickChatExtended).bIsCustomSelected = false;
  (this->ClickChatExtended).bIsLacked = false;
  (this->ClickChatExtended).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickChatExtended).Delegate = 0;
  *(undefined8 *)&(this->ClickChatExtended).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickChatExtended).Delegate.field_0x10 = 0;
  (this->ClickExit)._padding_ = '\0';
  (this->ClickExit).bIsCustomSelected = false;
  (this->ClickExit).bIsLacked = false;
  (this->ClickExit).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickExit).Delegate = 0;
  *(undefined8 *)&(this->ClickExit).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickExit).Delegate.field_0x10 = 0;
  FDS_WidgetPointerEventField::FDS_WidgetPointerEventField(&this->MouseEnterButton);
  FDS_WidgetPointerEventField::FDS_WidgetPointerEventField(&this->MouseLeaveButton);
  (this->ChatRoomName).StringTableType = None;
  (this->ChatRoomName).StringTableID = 0;
  (this->ChatRoomName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ChatRoomName).StringEnumTableNameID.Number = 0;
  (this->ChatRoomName).DateTime.Ticks = 0;
  (this->ChatRoomName).TimeSpan.Ticks = 0;
  (this->ChatRoomName).TimeExpressionType = None;
  (this->ChatRoomName).IsExpression = false;
  (this->ChatRoomName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChatRoomName).UniqueString.Data.ArrayNum = 0;
  (this->ChatRoomName).UniqueString.Data.ArrayMax = 0;
  (this->ChatRoomName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChatRoomName).FormatArgs.ArrayNum = 0;
  (this->ChatRoomName).FormatArgs.ArrayMax = 0;
  this->bIsBookmark = false;
  this->ChattingTabType = None;
  this->SubTabIndex = -1;
  (this->HoverWidget).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UDS_VM_Chat_ChatRoomInfo @ 14b60c000

void __thiscall UDS_VM_Chat_ChatRoomInfo::~UDS_VM_Chat_ChatRoomInfo(UDS_VM_Chat_ChatRoomInfo *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_ChatRoomInfo__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->ChatRoomName).FormatArgs.AllocatorInstance.Data,
             (this->ChatRoomName).FormatArgs.ArrayNum);
  pFVar1 = (this->ChatRoomName).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ChatRoomName).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FKeyEvent::~FKeyEvent(&(this->MouseLeaveButton).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->MouseLeaveButton).PointerEvent);
  FKeyEvent::~FKeyEvent(&(this->MouseEnterButton).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->MouseEnterButton).PointerEvent);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickExit).Delegate);
  pvVar2 = *(void **)&(this->ClickExit).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickExit).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickChatExtended).Delegate);
  pvVar2 = *(void **)&(this->ClickChatExtended).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickChatExtended).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickChatCollapsed).Delegate);
  pvVar2 = *(void **)&(this->ClickChatCollapsed).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickChatCollapsed).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickManageGroup).Delegate);
  pvVar2 = *(void **)&(this->ClickManageGroup).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickManageGroup).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickManageCustom).Delegate);
  pvVar2 = *(void **)&(this->ClickManageCustom).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickManageCustom).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickBookmark).Delegate);
  pvVar2 = *(void **)&(this->ClickBookmark).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickBookmark).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b60db30

IClassDescriptor * __thiscall
UDS_VM_Chat_ChatRoomInfo::GetFieldNotificationDescriptor(UDS_VM_Chat_ChatRoomInfo *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Chat_ChatRoomInfo::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b60e2c0

UClass * __cdecl UDS_VM_Chat_ChatRoomInfo::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Chat_ChatRoomInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Chat_ChatRoomInfo",
               &Z_Registration_Info_UClass_UDS_VM_Chat_ChatRoomInfo.InnerSingleton,
               StaticRegisterNativesUDS_VM_Chat_ChatRoomInfo,1000,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Chat_ChatRoomInfo>,
               InternalVTableHelperCtorCaller<UDS_VM_Chat_ChatRoomInfo>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Chat_ChatRoomInfo.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Chat_ChatRoomInfo @ 14b60e8f0

void __cdecl UDS_VM_Chat_ChatRoomInfo::StaticRegisterNativesUDS_VM_Chat_ChatRoomInfo(void)

{
  return;
}

// __VTableCtorCaller @ 14b60f0e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UDS_VM_Chat_ChatRoomInfo::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDS_ViewModelBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  this = (UDS_ViewModelBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDS_ViewModelBase *)0x0) {
    UDS_ViewModelBase::UDS_ViewModelBase(this,param_1);
    this->_padding_ = (longlong)&_vftable__for__UObject__;
    *(undefined4 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
    this->_padding_ = (longlong)&___7UDS_VM_Chat_ChatRoomInfo__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].ViewModelContext.Object = (FDS_ViewModelContext *)0x0;
    *(undefined4 *)&this[1].ViewModelContext.SharedReferenceCount.ReferenceController = 0;
    *(undefined4 *)&this[1].Visibility = 0;
    *(undefined8 *)&this[1].VMName.Number = 0;
    this[1].TextPropertyIDList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].TextPropertyIDList.ArrayNum = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    FDS_WidgetPointerEventField::FDS_WidgetPointerEventField
              ((FDS_WidgetPointerEventField *)&this[2]._padding_);
    FDS_WidgetPointerEventField::FDS_WidgetPointerEventField
              ((FDS_WidgetPointerEventField *)&this[3].VMName.Number);
    *(undefined1 *)&this[5]._padding_ = 0;
    this[5]._padding_ = 0;
    this[5]._padding_ = 0;
    this[5]._padding_ = 0;
    this[5].ViewModelContext.Object = (FDS_ViewModelContext *)0x0;
    *(undefined4 *)&this[5].ViewModelContext.SharedReferenceCount.ReferenceController = 0;
    *(undefined1 *)
     ((longlong)&this[5].ViewModelContext.SharedReferenceCount.ReferenceController + 4) = 0;
    this[5].Visibility = Visible;
    *(undefined3 *)&this[5].field_0x81 = 0;
    this[5].VMName.ComparisonIndex = 0;
    *(undefined8 *)&this[5].VMName.Number = 0;
    this[5].TextPropertyIDList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[5].TextPropertyIDList.ArrayNum = 0;
    this[5].TextPropertyIDList.ArrayMax = 0;
    *(undefined1 *)&this[6]._padding_ = 0;
    *(undefined1 *)&this[6]._padding_ = 0;
    *(undefined4 *)((longlong)&this[6]._padding_ + 4) = 0xffffffff;
    this[6]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// BindModel @ 14bd46f00

void __thiscall UDS_VM_Chat_ChatRoomInfo::BindModel(UDS_VM_Chat_ChatRoomInfo *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FDS_ChatUserInfo *pFVar2;
  code *pcVar3;
  bool bVar4;
  UDS_ChatEvent *pUVar5;
  UDS_ChattingManager *this_00;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_01;
  longlong local_res10;
  TSharedPtr<FDS_ChatRoomData,1> local_a8;
  undefined1 local_98 [24];
  FDS_ChatRoomData *local_78;
  longlong lStack_70;
  FDS_ChatRoomData *local_68;
  longlong lStack_60;
  FDS_ChatRoomData *local_58;
  longlong lStack_50;
  FDS_ChatRoomData *local_48;
  longlong lStack_40;
  code *local_38;
  longlong lStack_30;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar5 = UDS_ChatEvent::GetEvent();
  if (pUVar5 != (UDS_ChatEvent *)0x0) {
    local_a8.Object = (FDS_ChatRoomData *)OnChangeChattingTabType;
    local_a8.SharedReferenceCount.ReferenceController._0_4_ = 0;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar5->OnChangeChattingTabType,this);
    lStack_70 = CONCAT44(local_a8.SharedReferenceCount.ReferenceController._4_4_,
                         local_a8.SharedReferenceCount.ReferenceController._0_4_);
    local_78 = local_a8.Object;
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_ChattingTabType,int),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_Chat_ChatRoomInfo>
              (&pUVar5->OnChangeChattingTabType,(UDS_VM_Chat_ChatRoomInfo *)&stack0x00000018,
               (pmf_a00f7b59 *)this);
    local_a8.SharedReferenceCount.ReferenceController._0_4_ = 0;
    local_a8.Object = (FDS_ChatRoomData *)OnChangedChatMode;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar5->OnChangedChatMode,this
              );
    lStack_60 = CONCAT44(local_a8.SharedReferenceCount.ReferenceController._4_4_,
                         local_a8.SharedReferenceCount.ReferenceController._0_4_);
    local_68 = local_a8.Object;
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_ChatMode),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Chat_ChatRoomInfo>
              (&pUVar5->OnChangedChatMode,(UDS_VM_Chat_ChatRoomInfo *)&stack0x00000020,
               (pmf_ab15c3fe *)this);
    local_a8.SharedReferenceCount.ReferenceController._0_4_ = 0;
    local_a8.Object = (FDS_ChatRoomData *)OnRefreshChatRoom;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar5->OnRefreshChatRoom,this
              );
    lStack_50 = CONCAT44(local_a8.SharedReferenceCount.ReferenceController._4_4_,
                         local_a8.SharedReferenceCount.ReferenceController._0_4_);
    local_58 = local_a8.Object;
    TMulticastDelegateRegistration<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Chat_ChatRoomInfo>
              ((TMulticastDelegateRegistration<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
                *)&pUVar5->OnRefreshChatRoom,(UDS_VM_Chat_ChatRoomInfo *)(local_98 + 0x10),
               (pmf_543ab79d *)this);
    local_a8.SharedReferenceCount.ReferenceController._0_4_ = 0;
    local_a8.Object = (FDS_ChatRoomData *)OnChangedChatOption;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar5->OnChangedChatOption,
               this);
    lStack_40 = CONCAT44(local_a8.SharedReferenceCount.ReferenceController._4_4_,
                         local_a8.SharedReferenceCount.ReferenceController._0_4_);
    local_48 = local_a8.Object;
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Chat_ChatRoomInfo>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar5->OnChangedChatOption,(UDS_VM_Chat_ChatRoomInfo *)local_98,
               (pmf_e0156841 *)this);
    if ((this->ChattingTabType == Whisper) &&
       (this_00 = UDS_ChattingManager::GetInst(), this_00 != (UDS_ChattingManager *)0x0)) {
      UDS_ChattingManager::GetChatRoomData(this_00,&local_a8,Whisper,this->SubTabIndex);
      if (local_a8.Object != (FDS_ChatRoomData *)0x0) {
        if ((local_a8.Object == (FDS_ChatRoomData *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        bVar4 = FDS_ChatRoomData::IsValidData(local_a8.Object);
        if (bVar4) {
          if ((local_a8.Object == (FDS_ChatRoomData *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pTVar1 = ((local_a8.Object)->Whisper).SharedReferenceCount.ReferenceController;
          pFVar2 = ((local_a8.Object)->Whisper).Object;
          if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((pFVar2 != (FDS_ChatUserInfo *)0x0) &&
             (local_res10 = pFVar2->PlayerUID, 0 < local_res10)) {
            local_98._8_4_ = 0;
            local_98._0_8_ = OnRefreshUserInfo;
            this_01 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
                      TMapBase<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>_>
                      ::FindOrAddImpl<__int64_const_&>
                                ((TMapBase<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>_>
                                  *)&(pUVar5->OnRefreshUserInfo).Subscriptions,
                                 (int)((ulonglong)local_res10 >> 0x20) * 0x17 + (int)local_res10,
                                 &stack0x00000010);
            TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(this_01,this);
            lStack_30 = CONCAT44(local_98._12_4_,local_98._8_4_);
            local_38 = (code *)local_98._0_8_;
            TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy>::
            AddUObject<UDS_VM_Chat_ChatRoomInfo>
                      ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy>
                        *)this_01,(UDS_VM_Chat_ChatRoomInfo *)&stack0xffffffffffffff80,
                       (pmf_e0156841 *)this);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar1);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)
                 CONCAT44(local_a8.SharedReferenceCount.ReferenceController._4_4_,
                          local_a8.SharedReferenceCount.ReferenceController._0_4_));
    }
  }
  return;
}

// OnBookmark_Custom @ 14bd6e340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Chat_ChatRoomInfo::OnBookmark_Custom(UDS_VM_Chat_ChatRoomInfo *this)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  UDS_ChattingManager *this_00;
  UDS_LogManager *pUVar5;
  bool bVar6;
  undefined1 auStackY_2d8 [32];
  TSharedPtr<FDS_ChatCustomData,1> local_298;
  FName local_288;
  int local_280;
  FDS_ChatCustomData local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  this_00 = UDS_ChattingManager::GetInst();
  if (this_00 == (UDS_ChattingManager *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_258._padding_ = (longlong)this_00;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_258,"UDS_VM_Chat_ChatRoomInfo::OnBookmark_Custom",0x2b,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_258.Ptr,0x19b,L"chattingManager == nullptr");
      if ((UDS_ChattingManager *)local_258._padding_ != (UDS_ChattingManager *)0x0) {
        FMemory::Free((void *)local_258._padding_);
      }
    }
  }
  else {
    UDS_ChattingManager::GetCustomData(this_00,&local_298,this->SubTabIndex);
    if (local_298.Object == (FDS_ChatCustomData *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 != (UDS_LogManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_VM_Chat_ChatRoomInfo::OnBookmark_Custom",0x2b,Yes);
        UDS_LogManager::PrintLog
                  (pUVar5,1,Warning,local_138.Ptr,0x1a2,
                   L"chatCustomData.IsValid() == false  (SubTabIndex : %d)");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    else {
      if ((local_298.Object == (FDS_ChatCustomData *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      bVar6 = (local_298.Object)->bIsBookmark == false;
      bVar4 = UDS_ChattingManager::UpdateBookmark(this_00,Custom,this->SubTabIndex,bVar6);
      if (bVar4) {
        if ((local_298.Object == (FDS_ChatCustomData *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        (local_298.Object)->bIsBookmark = bVar6;
        if ((local_298.Object == (FDS_ChatCustomData *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x44d,L""), bVar4)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_278.ChatFilterIndex = (local_298.Object)->ChatFilterIndex;
        local_278._4_4_ = *(undefined4 *)&(local_298.Object)->field_0x4;
        local_278.ChatFilterFlags = (local_298.Object)->ChatFilterFlags;
        local_278.bIsBookmark = (local_298.Object)->bIsBookmark;
        local_278._17_7_ = *(undefined7 *)&(local_298.Object)->field_0x11;
        UDS_ChattingManager::RequestSetCustomInfo(this_00,this->SubTabIndex,&local_278);
        iVar3 = FFieldNotificationClassDescriptor::bIsBookmark.BitNumber;
        FVar2 = FFieldNotificationClassDescriptor::bIsBookmark.FieldName;
        if (this->bIsBookmark != bVar6) {
          this->bIsBookmark = bVar6;
          local_280 = iVar3;
          local_288 = FVar2;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_288);
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_298.SharedReferenceCount.ReferenceController);
  }
  return;
}

// OnBookmark_Group @ 14bd6e620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Chat_ChatRoomInfo::OnBookmark_Group(UDS_VM_Chat_ChatRoomInfo *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FDS_ChatConversation *pFVar2;
  code *pcVar3;
  bool bVar4;
  UDS_ChattingManager *this_00;
  UDS_LogManager *pUVar5;
  bool bVar6;
  undefined1 auStackY_188 [32];
  TSharedPtr<FDS_ChatRoomData,1> local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  this_00 = UDS_ChattingManager::GetInst();
  if (this_00 == (UDS_ChattingManager *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_148._padding_ = (longlong)this_00;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_Chat_ChatRoomInfo::OnBookmark_Group",0x2a,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_148.Ptr,0x1d5,L"chattingManager == nullptr");
      if ((UDS_ChattingManager *)local_148._padding_ != (UDS_ChattingManager *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    UDS_ChattingManager::GetChatRoomData(this_00,&local_158,Group,this->SubTabIndex);
    if (local_158.Object != (FDS_ChatRoomData *)0x0) {
      if ((local_158.Object == (FDS_ChatRoomData *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      bVar4 = FDS_ChatRoomData::IsValidData(local_158.Object);
      if (bVar4) {
        if ((local_158.Object == (FDS_ChatRoomData *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pTVar1 = ((local_158.Object)->ChatConversation).SharedReferenceCount.ReferenceController;
        pFVar2 = ((local_158.Object)->ChatConversation).Object;
        if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((pFVar2 == (FDS_ChatConversation *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        bVar6 = pFVar2->bIsBookmark == false;
        bVar4 = UDS_ChattingManager::UpdateBookmark(this_00,Group,this->SubTabIndex,bVar6);
        if (bVar4) {
          pFVar2->bIsBookmark = bVar6;
          UDS_ChattingManager::RequestBookmarkConversation(this_00,&pFVar2->ConversationID,bVar6);
          SetBookmark(this,pFVar2->bIsBookmark);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
  }
  return;
}

// OnBookmark_Whisper @ 14bd6e850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Chat_ChatRoomInfo::OnBookmark_Whisper(UDS_VM_Chat_ChatRoomInfo *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FDS_ChatConversation *pFVar2;
  code *pcVar3;
  bool bVar4;
  UDS_ChattingManager *this_00;
  UDS_LogManager *pUVar5;
  bool bVar6;
  undefined1 auStackY_188 [32];
  TSharedPtr<FDS_ChatRoomData,1> local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  this_00 = UDS_ChattingManager::GetInst();
  if (this_00 == (UDS_ChattingManager *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_148._padding_ = (longlong)this_00;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_Chat_ChatRoomInfo::OnBookmark_Whisper",0x2c,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_148.Ptr,0x1b9,L"chattingManager == nullptr");
      if ((UDS_ChattingManager *)local_148._padding_ != (UDS_ChattingManager *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    UDS_ChattingManager::GetChatRoomData(this_00,&local_158,Whisper,this->SubTabIndex);
    if (local_158.Object != (FDS_ChatRoomData *)0x0) {
      if ((local_158.Object == (FDS_ChatRoomData *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      bVar4 = FDS_ChatRoomData::IsValidData(local_158.Object);
      if (bVar4) {
        if ((local_158.Object == (FDS_ChatRoomData *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pTVar1 = ((local_158.Object)->ChatConversation).SharedReferenceCount.ReferenceController;
        pFVar2 = ((local_158.Object)->ChatConversation).Object;
        if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((pFVar2 == (FDS_ChatConversation *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        bVar6 = pFVar2->bIsBookmark == false;
        bVar4 = UDS_ChattingManager::UpdateBookmark(this_00,Whisper,this->SubTabIndex,bVar6);
        if (bVar4) {
          pFVar2->bIsBookmark = bVar6;
          UDS_ChattingManager::RequestBookmarkConversation(this_00,&pFVar2->ConversationID,bVar6);
          SetBookmark(this,pFVar2->bIsBookmark);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
  }
  return;
}

// OnChangeChattingTabType @ 14bd6ea80

void __thiscall
UDS_VM_Chat_ChatRoomInfo::OnChangeChattingTabType
          (UDS_VM_Chat_ChatRoomInfo *this,EDS_ChattingTabType param_1,int param_2)

{
  EDS_ChatMode EVar1;
  UDS_ChatEvent *pUVar2;
  
  this->ChattingTabType = param_1;
  this->SubTabIndex = param_2;
  pUVar2 = UDS_ChatEvent::GetEvent();
  if (pUVar2 != (UDS_ChatEvent *)0x0) {
    EVar1 = FDS_QueryDelegate<enum_EDS_ChatMode_const_>::Query(&pUVar2->OnQueryChatMode);
    if (EVar1 < Normal) {
      return;
    }
  }
  UpdateChatRoomInfo(this);
  return;
}

// OnChangedChatMode @ 14bd6f920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Chat_ChatRoomInfo::OnChangedChatMode(UDS_VM_Chat_ChatRoomInfo *this,EDS_ChatMode param_1)

{
  EDS_ChattingTabType EVar1;
  code *pcVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  EDS_ChatMode EVar6;
  UDS_ChattingManager *this_00;
  UDS_LogManager *pUVar7;
  UDS_ChatEvent *pUVar8;
  FName *pFVar9;
  longlong *plVar10;
  undefined1 auStackY_378 [32];
  TSharedPtr<FDS_ChattingTabData,1> TStack_348;
  FLinearColor_u_0 FStack_338;
  FName FStack_328;
  int iStack_320;
  FName FStack_318;
  int iStack_310;
  FName FStack_308;
  int iStack_300;
  FName FStack_2f8;
  int iStack_2f0;
  FName FStack_2e8;
  int iStack_2e0;
  FDS_Text FStack_2d8;
  TSharedPtr<FDS_ChattingTabData,1> TStack_288;
  TSharedPtr<FDS_ChattingTabData,1> TStack_278;
  TSharedPtr<FDS_ChattingTabData,1> TStack_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  if (param_1 < Normal) {
    return;
  }
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_378;
  this_00 = UDS_ChattingManager::GetInst();
  if (this_00 == (UDS_ChattingManager *)0x0) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar7 = UDS_LogManager::GetInst();
    TStack_258._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_258,"UDS_VM_Chat_ChatRoomInfo::UpdateChatRoomInfo",0x2c,Yes);
    UDS_LogManager::PrintLog(pUVar7,1,Warning,TStack_258.Ptr,0xfa,L"chattingManager == nullptr");
    if ((void *)TStack_258._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)TStack_258._padding_);
    return;
  }
  UDS_ChattingManager::GetChattingTabData(this_00,&TStack_348,this->ChattingTabType);
  if (TStack_348.Object == (FDS_ChattingTabData *)0x0) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_VM_Chat_ChatRoomInfo::UpdateChatRoomInfo",0x2c,Yes);
      UDS_LogManager::PrintLog
                (pUVar7,1,Warning,TStack_138.Ptr,0x101,L"chattingTabData.IsValid() == false");
      if ((void *)TStack_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
      }
    }
    goto LAB_14bd8ddc1;
  }
  EVar6 = Normal;
  pUVar8 = UDS_ChatEvent::GetEvent();
  if (pUVar8 != (UDS_ChatEvent *)0x0) {
    EVar6 = FDS_QueryDelegate<enum_EDS_ChatMode_const_>::Query(&pUVar8->OnQueryChatMode);
  }
  UDS_ChattingManager::GetChattingTabColor
            (this_00,(FLinearColor *)&FStack_338._s_0,this->ChattingTabType,this->SubTabIndex);
  if ((((FStack_338._s_0.R != (this->ChatTabColor).field0_0x0._s_0.R) ||
       (FStack_338._s_0.G != (this->ChatTabColor).field0_0x0._s_0.G)) ||
      (FStack_338._s_0.B != (this->ChatTabColor).field0_0x0._s_0.B)) ||
     (FStack_338._s_0.A != (this->ChatTabColor).field0_0x0._s_0.A)) {
    iStack_320 = FFieldNotificationClassDescriptor::ChatTabColor.BitNumber;
    FStack_328 = FFieldNotificationClassDescriptor::ChatTabColor.FieldName;
    *(ulonglong *)&(this->ChatTabColor).field0_0x0 = CONCAT44(FStack_338._s_0.G,FStack_338._s_0.R);
    *(ulonglong *)((longlong)&(this->ChatTabColor).field0_0x0 + 8) =
         CONCAT44(FStack_338._s_0.A,FStack_338._s_0.B);
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_328);
  }
  iVar4 = FFieldNotificationClassDescriptor::ChatCollapsedVisibility.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::ChatCollapsedVisibility.FieldName;
  plVar10 = &this->_padding_;
  if (this->ChatCollapsedVisibility != SelfHitTestInvisible) {
    this->ChatCollapsedVisibility = SelfHitTestInvisible;
    iStack_310 = iVar4;
    FStack_318 = FVar3;
    (**(code **)(*plVar10 + 0x38))(plVar10,&FStack_318);
  }
  iVar4 = FFieldNotificationClassDescriptor::ChatExtendedVisibility.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::ChatExtendedVisibility.FieldName;
  if (EVar6 == Normal) {
    if (this->ChatExtendedVisibility != SelfHitTestInvisible) {
      this->ChatExtendedVisibility = SelfHitTestInvisible;
      pFVar9 = &FStack_308;
      FStack_308 = FVar3;
      iStack_300 = iVar4;
LAB_14bd8dc18:
      (**(code **)(*plVar10 + 0x38))(plVar10,pFVar9);
    }
  }
  else if (this->ChatExtendedVisibility != Collapsed) {
    this->ChatExtendedVisibility = Collapsed;
    pFVar9 = &FStack_2f8;
    FStack_2f8 = FVar3;
    iStack_2f0 = iVar4;
    goto LAB_14bd8dc18;
  }
  EVar1 = this->ChattingTabType;
  if (EVar1 == Custom) {
    TStack_268.Object = TStack_348.Object;
    TStack_268.SharedReferenceCount.ReferenceController =
         TStack_348.SharedReferenceCount.ReferenceController;
    if (TStack_348.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (TStack_348.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(TStack_348.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UpdateChatRoomInfo_Custom(this,EVar6,&TStack_268);
  }
  else if (EVar1 == Whisper) {
    TStack_278.Object = TStack_348.Object;
    TStack_278.SharedReferenceCount.ReferenceController =
         TStack_348.SharedReferenceCount.ReferenceController;
    if (TStack_348.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (TStack_348.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(TStack_348.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UpdateChatRoomInfo_Whisper(this,EVar6,&TStack_278);
  }
  else if (EVar1 == Group) {
    TStack_288.Object = TStack_348.Object;
    TStack_288.SharedReferenceCount.ReferenceController =
         TStack_348.SharedReferenceCount.ReferenceController;
    if (TStack_348.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (TStack_348.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(TStack_348.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UpdateChatRoomInfo_Group(this,EVar6,&TStack_288);
  }
  else {
    if ((TStack_348.Object == (FDS_ChattingTabData *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FStack_2d8.StringTableType = None;
    FStack_2d8.StringTableID = 0;
    FStack_2d8.StringEnumTableNameID.ComparisonIndex.Value = 0;
    FStack_2d8.StringEnumTableNameID.Number = 0;
    FStack_2d8.DateTime.Ticks = 0;
    FStack_2d8.TimeSpan.Ticks = 0;
    FStack_2d8.TimeExpressionType = None;
    FStack_2d8.IsExpression = false;
    FStack_2d8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_2d8.UniqueString.Data.ArrayNum = 0;
    FStack_2d8.UniqueString.Data.ArrayMax = 0;
    FStack_2d8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_2d8.FormatArgs.ArrayNum = 0;
    FStack_2d8.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromStringID(&FStack_2d8,&(TStack_348.Object)->TabStringID);
    FDS_Text::operator=(&this->ChatRoomName,&FStack_2d8);
    iStack_2e0 = FFieldNotificationClassDescriptor::ChatRoomName.BitNumber;
    FStack_2e8 = FFieldNotificationClassDescriptor::ChatRoomName.FieldName;
    (**(code **)(*plVar10 + 0x38))(plVar10,&FStack_2e8);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)FStack_2d8.FormatArgs.AllocatorInstance.Data,
               FStack_2d8.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)FStack_2d8.FormatArgs.AllocatorInstance.Data !=
        (FDS_TextFormatArg *)0x0) {
      FMemory::Free(FStack_2d8.FormatArgs.AllocatorInstance.Data);
    }
    if (FStack_2d8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_2d8.UniqueString.Data.AllocatorInstance.Data);
    }
    SetBookmarkVisibility(this,Collapsed);
    SetCustomVisibility(this,Collapsed);
    SetGroupVisibility(this,Collapsed);
    SetExitVisibility(this,Collapsed);
  }
LAB_14bd8ddc1:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_348.SharedReferenceCount.ReferenceController);
  return;
}

// OnChangedChatOption @ 14bd6ff00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Chat_ChatRoomInfo::OnChangedChatOption(UDS_VM_Chat_ChatRoomInfo *this)

{
  EDS_ChattingTabType EVar1;
  code *pcVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  EDS_ChatMode EVar6;
  UDS_ChattingManager *this_00;
  UDS_LogManager *pUVar7;
  UDS_ChatEvent *pUVar8;
  FName *pFVar9;
  longlong *plVar10;
  undefined1 auStackY_378 [32];
  TSharedPtr<FDS_ChattingTabData,1> TStack_348;
  FLinearColor_u_0 FStack_338;
  FName FStack_328;
  int iStack_320;
  FName FStack_318;
  int iStack_310;
  FName FStack_308;
  int iStack_300;
  FName FStack_2f8;
  int iStack_2f0;
  FName FStack_2e8;
  int iStack_2e0;
  FDS_Text FStack_2d8;
  TSharedPtr<FDS_ChattingTabData,1> TStack_288;
  TSharedPtr<FDS_ChattingTabData,1> TStack_278;
  TSharedPtr<FDS_ChattingTabData,1> TStack_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_378;
  this_00 = UDS_ChattingManager::GetInst();
  if (this_00 == (UDS_ChattingManager *)0x0) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar7 = UDS_LogManager::GetInst();
    TStack_258._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_258,"UDS_VM_Chat_ChatRoomInfo::UpdateChatRoomInfo",0x2c,Yes);
    UDS_LogManager::PrintLog(pUVar7,1,Warning,TStack_258.Ptr,0xfa,L"chattingManager == nullptr");
    if ((void *)TStack_258._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)TStack_258._padding_);
    return;
  }
  UDS_ChattingManager::GetChattingTabData(this_00,&TStack_348,this->ChattingTabType);
  if (TStack_348.Object == (FDS_ChattingTabData *)0x0) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_VM_Chat_ChatRoomInfo::UpdateChatRoomInfo",0x2c,Yes);
      UDS_LogManager::PrintLog
                (pUVar7,1,Warning,TStack_138.Ptr,0x101,L"chattingTabData.IsValid() == false");
      if ((void *)TStack_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
      }
    }
    goto LAB_14bd8ddc1;
  }
  EVar6 = Normal;
  pUVar8 = UDS_ChatEvent::GetEvent();
  if (pUVar8 != (UDS_ChatEvent *)0x0) {
    EVar6 = FDS_QueryDelegate<enum_EDS_ChatMode_const_>::Query(&pUVar8->OnQueryChatMode);
  }
  UDS_ChattingManager::GetChattingTabColor
            (this_00,(FLinearColor *)&FStack_338._s_0,this->ChattingTabType,this->SubTabIndex);
  if ((((FStack_338._s_0.R != (this->ChatTabColor).field0_0x0._s_0.R) ||
       (FStack_338._s_0.G != (this->ChatTabColor).field0_0x0._s_0.G)) ||
      (FStack_338._s_0.B != (this->ChatTabColor).field0_0x0._s_0.B)) ||
     (FStack_338._s_0.A != (this->ChatTabColor).field0_0x0._s_0.A)) {
    iStack_320 = FFieldNotificationClassDescriptor::ChatTabColor.BitNumber;
    FStack_328 = FFieldNotificationClassDescriptor::ChatTabColor.FieldName;
    *(ulonglong *)&(this->ChatTabColor).field0_0x0 = CONCAT44(FStack_338._s_0.G,FStack_338._s_0.R);
    *(ulonglong *)((longlong)&(this->ChatTabColor).field0_0x0 + 8) =
         CONCAT44(FStack_338._s_0.A,FStack_338._s_0.B);
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_328);
  }
  iVar4 = FFieldNotificationClassDescriptor::ChatCollapsedVisibility.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::ChatCollapsedVisibility.FieldName;
  plVar10 = &this->_padding_;
  if (this->ChatCollapsedVisibility != SelfHitTestInvisible) {
    this->ChatCollapsedVisibility = SelfHitTestInvisible;
    iStack_310 = iVar4;
    FStack_318 = FVar3;
    (**(code **)(*plVar10 + 0x38))(plVar10,&FStack_318);
  }
  iVar4 = FFieldNotificationClassDescriptor::ChatExtendedVisibility.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::ChatExtendedVisibility.FieldName;
  if (EVar6 == Normal) {
    if (this->ChatExtendedVisibility != SelfHitTestInvisible) {
      this->ChatExtendedVisibility = SelfHitTestInvisible;
      pFVar9 = &FStack_308;
      FStack_308 = FVar3;
      iStack_300 = iVar4;
LAB_14bd8dc18:
      (**(code **)(*plVar10 + 0x38))(plVar10,pFVar9);
    }
  }
  else if (this->ChatExtendedVisibility != Collapsed) {
    this->ChatExtendedVisibility = Collapsed;
    pFVar9 = &FStack_2f8;
    FStack_2f8 = FVar3;
    iStack_2f0 = iVar4;
    goto LAB_14bd8dc18;
  }
  EVar1 = this->ChattingTabType;
  if (EVar1 == Custom) {
    TStack_268.Object = TStack_348.Object;
    TStack_268.SharedReferenceCount.ReferenceController =
         TStack_348.SharedReferenceCount.ReferenceController;
    if (TStack_348.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (TStack_348.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(TStack_348.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UpdateChatRoomInfo_Custom(this,EVar6,&TStack_268);
  }
  else if (EVar1 == Whisper) {
    TStack_278.Object = TStack_348.Object;
    TStack_278.SharedReferenceCount.ReferenceController =
         TStack_348.SharedReferenceCount.ReferenceController;
    if (TStack_348.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (TStack_348.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(TStack_348.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UpdateChatRoomInfo_Whisper(this,EVar6,&TStack_278);
  }
  else if (EVar1 == Group) {
    TStack_288.Object = TStack_348.Object;
    TStack_288.SharedReferenceCount.ReferenceController =
         TStack_348.SharedReferenceCount.ReferenceController;
    if (TStack_348.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (TStack_348.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(TStack_348.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UpdateChatRoomInfo_Group(this,EVar6,&TStack_288);
  }
  else {
    if ((TStack_348.Object == (FDS_ChattingTabData *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FStack_2d8.StringTableType = None;
    FStack_2d8.StringTableID = 0;
    FStack_2d8.StringEnumTableNameID.ComparisonIndex.Value = 0;
    FStack_2d8.StringEnumTableNameID.Number = 0;
    FStack_2d8.DateTime.Ticks = 0;
    FStack_2d8.TimeSpan.Ticks = 0;
    FStack_2d8.TimeExpressionType = None;
    FStack_2d8.IsExpression = false;
    FStack_2d8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_2d8.UniqueString.Data.ArrayNum = 0;
    FStack_2d8.UniqueString.Data.ArrayMax = 0;
    FStack_2d8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_2d8.FormatArgs.ArrayNum = 0;
    FStack_2d8.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromStringID(&FStack_2d8,&(TStack_348.Object)->TabStringID);
    FDS_Text::operator=(&this->ChatRoomName,&FStack_2d8);
    iStack_2e0 = FFieldNotificationClassDescriptor::ChatRoomName.BitNumber;
    FStack_2e8 = FFieldNotificationClassDescriptor::ChatRoomName.FieldName;
    (**(code **)(*plVar10 + 0x38))(plVar10,&FStack_2e8);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)FStack_2d8.FormatArgs.AllocatorInstance.Data,
               FStack_2d8.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)FStack_2d8.FormatArgs.AllocatorInstance.Data !=
        (FDS_TextFormatArg *)0x0) {
      FMemory::Free(FStack_2d8.FormatArgs.AllocatorInstance.Data);
    }
    if (FStack_2d8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_2d8.UniqueString.Data.AllocatorInstance.Data);
    }
    SetBookmarkVisibility(this,Collapsed);
    SetCustomVisibility(this,Collapsed);
    SetGroupVisibility(this,Collapsed);
    SetExitVisibility(this,Collapsed);
  }
LAB_14bd8ddc1:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_348.SharedReferenceCount.ReferenceController);
  return;
}

// OnClickBookmark @ 14bd72470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Chat_ChatRoomInfo::OnClickBookmark
          (UDS_VM_Chat_ChatRoomInfo *this,FDS_ButtonEventField *param_1)

{
  EDS_ChattingTabType EVar1;
  TReferenceControllerBase<1> *pTVar2;
  FDS_ChatConversation *pFVar3;
  code *pcVar4;
  FName FVar5;
  int iVar6;
  bool bVar7;
  UDS_ChattingManager *pUVar8;
  UDS_LogManager *pUVar9;
  bool bVar10;
  TSharedPtr<FDS_ChatCustomData,1> TStack_298;
  FName FStack_288;
  int iStack_280;
  FDS_ChatCustomData FStack_278;
  FDS_ChatCustomData aFStack_258 [8];
  undefined8 uStack_190;
  undefined1 auStack_188 [32];
  TSharedPtr<FDS_ChatRoomData,1> TStack_158;
  undefined1 auStack_148 [256];
  UDS_ChattingManager *pUStack_48;
  wchar_t *pwStack_40;
  void *pvStack_38;
  wchar_t *pwStack_30;
  ulonglong uStack_28;
  
  EVar1 = this->ChattingTabType;
  if (EVar1 != Custom) {
    if (EVar1 != Whisper) {
      if (EVar1 != Group) {
        return;
      }
      uStack_28 = __security_cookie.value ^ (ulonglong)auStack_188;
      uStack_190 = 0x14bd6e646;
      pUVar8 = UDS_ChattingManager::GetInst();
      if (pUVar8 == (UDS_ChattingManager *)0x0) {
        uStack_190 = 0x14bd6e657;
        pUVar9 = UDS_LogManager::GetInst();
        if (pUVar9 != (UDS_LogManager *)0x0) {
          uStack_190 = 0x14bd6e665;
          pUVar9 = UDS_LogManager::GetInst();
          uStack_190 = 0x14bd6e68d;
          pUStack_48 = pUVar8;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    ((TStringConversion<TStringConvert<char,wchar_t>,128> *)auStack_148,
                     "UDS_VM_Chat_ChatRoomInfo::OnBookmark_Group",0x2a,Yes);
          uStack_190 = 0x14bd6e6bc;
          UDS_LogManager::PrintLog(pUVar9,1,Warning,pwStack_40,0x1d5,L"chattingManager == nullptr");
          if (pUStack_48 != (UDS_ChattingManager *)0x0) {
            uStack_190 = 0x14bd6e6d2;
            FMemory::Free(pUStack_48);
          }
        }
      }
      else {
        uStack_190 = 0x14bd6e6ee;
        UDS_ChattingManager::GetChatRoomData(pUVar8,&TStack_158,Group,this->SubTabIndex);
        if (TStack_158.Object != (FDS_ChatRoomData *)0x0) {
          if (TStack_158.Object == (FDS_ChatRoomData *)0x0) {
            uStack_190 = 0x14bd6e726;
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
          uStack_190 = 0x14bd6e736;
          bVar7 = FDS_ChatRoomData::IsValidData(TStack_158.Object);
          if (bVar7) {
            if (TStack_158.Object == (FDS_ChatRoomData *)0x0) {
              uStack_190 = 0x14bd6e776;
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
            pTVar2 = ((TStack_158.Object)->ChatConversation).SharedReferenceCount.
                     ReferenceController;
            pFVar3 = ((TStack_158.Object)->ChatConversation).Object;
            if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
              UNLOCK();
            }
            if (pFVar3 == (FDS_ChatConversation *)0x0) {
              uStack_190 = 0x14bd6e7b7;
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
            bVar10 = pFVar3->bIsBookmark == false;
            uStack_190 = 0x14bd6e7da;
            bVar7 = UDS_ChattingManager::UpdateBookmark(pUVar8,Group,this->SubTabIndex,bVar10);
            if (bVar7) {
              pFVar3->bIsBookmark = bVar10;
              uStack_190 = 0x14bd6e7f1;
              UDS_ChattingManager::RequestBookmarkConversation
                        (pUVar8,&pFVar3->ConversationID,bVar10);
              uStack_190 = 0x14bd6e7fd;
              SetBookmark(this,pFVar3->bIsBookmark);
            }
            uStack_190 = 0x14bd6e805;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar2);
          }
        }
        uStack_190 = 0x14bd6e81f;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (TStack_158.SharedReferenceCount.ReferenceController);
      }
      return;
    }
    uStack_28 = __security_cookie.value ^ (ulonglong)auStack_188;
    uStack_190 = 0x14bd6e876;
    pUVar8 = UDS_ChattingManager::GetInst();
    if (pUVar8 == (UDS_ChattingManager *)0x0) {
      uStack_190 = 0x14bd6e887;
      pUVar9 = UDS_LogManager::GetInst();
      if (pUVar9 != (UDS_LogManager *)0x0) {
        uStack_190 = 0x14bd6e895;
        pUVar9 = UDS_LogManager::GetInst();
        uStack_190 = 0x14bd6e8bd;
        pUStack_48 = pUVar8;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  ((TStringConversion<TStringConvert<char,wchar_t>,128> *)auStack_148,
                   "UDS_VM_Chat_ChatRoomInfo::OnBookmark_Whisper",0x2c,Yes);
        uStack_190 = 0x14bd6e8ec;
        UDS_LogManager::PrintLog(pUVar9,1,Warning,pwStack_40,0x1b9,L"chattingManager == nullptr");
        if (pUStack_48 != (UDS_ChattingManager *)0x0) {
          uStack_190 = 0x14bd6e902;
          FMemory::Free(pUStack_48);
        }
      }
    }
    else {
      uStack_190 = 0x14bd6e91e;
      UDS_ChattingManager::GetChatRoomData(pUVar8,&TStack_158,Whisper,this->SubTabIndex);
      if (TStack_158.Object != (FDS_ChatRoomData *)0x0) {
        if (TStack_158.Object == (FDS_ChatRoomData *)0x0) {
          uStack_190 = 0x14bd6e956;
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
        uStack_190 = 0x14bd6e966;
        bVar7 = FDS_ChatRoomData::IsValidData(TStack_158.Object);
        if (bVar7) {
          if (TStack_158.Object == (FDS_ChatRoomData *)0x0) {
            uStack_190 = 0x14bd6e9a6;
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
          pTVar2 = ((TStack_158.Object)->ChatConversation).SharedReferenceCount.ReferenceController;
          pFVar3 = ((TStack_158.Object)->ChatConversation).Object;
          if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
            UNLOCK();
          }
          if (pFVar3 == (FDS_ChatConversation *)0x0) {
            uStack_190 = 0x14bd6e9e7;
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
          bVar10 = pFVar3->bIsBookmark == false;
          uStack_190 = 0x14bd6ea0a;
          bVar7 = UDS_ChattingManager::UpdateBookmark(pUVar8,Whisper,this->SubTabIndex,bVar10);
          if (bVar7) {
            pFVar3->bIsBookmark = bVar10;
            uStack_190 = 0x14bd6ea21;
            UDS_ChattingManager::RequestBookmarkConversation(pUVar8,&pFVar3->ConversationID,bVar10);
            uStack_190 = 0x14bd6ea2d;
            SetBookmark(this,pFVar3->bIsBookmark);
          }
          uStack_190 = 0x14bd6ea35;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar2);
        }
      }
      uStack_190 = 0x14bd6ea4f;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (TStack_158.SharedReferenceCount.ReferenceController);
    }
    return;
  }
  pUVar8 = UDS_ChattingManager::GetInst();
  if (pUVar8 == (UDS_ChattingManager *)0x0) {
    pUVar9 = UDS_LogManager::GetInst();
    if (pUVar9 != (UDS_LogManager *)0x0) {
      pUVar9 = UDS_LogManager::GetInst();
      TStack_158.Object = (FDS_ChatRoomData *)pUVar8;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)aFStack_258,
                 "UDS_VM_Chat_ChatRoomInfo::OnBookmark_Custom",0x2b,Yes);
      UDS_LogManager::PrintLog
                (pUVar9,1,Warning,(wchar_t *)TStack_158.SharedReferenceCount.ReferenceController,
                 0x19b,L"chattingManager == nullptr");
      if ((UDS_ChattingManager *)TStack_158.Object != (UDS_ChattingManager *)0x0) {
        FMemory::Free(TStack_158.Object);
      }
    }
  }
  else {
    UDS_ChattingManager::GetCustomData(pUVar8,&TStack_298,this->SubTabIndex);
    if (TStack_298.Object == (FDS_ChatCustomData *)0x0) {
      pUVar9 = UDS_LogManager::GetInst();
      if (pUVar9 != (UDS_LogManager *)0x0) {
        pUVar9 = UDS_LogManager::GetInst();
        pvStack_38 = (void *)0x0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(auStack_148 + 0x10),
                   "UDS_VM_Chat_ChatRoomInfo::OnBookmark_Custom",0x2b,Yes);
        UDS_LogManager::PrintLog
                  (pUVar9,1,Warning,pwStack_30,0x1a2,
                   L"chatCustomData.IsValid() == false  (SubTabIndex : %d)");
        if (pvStack_38 != (void *)0x0) {
          FMemory::Free(pvStack_38);
        }
      }
    }
    else {
      if ((TStack_298.Object == (FDS_ChatCustomData *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      bVar10 = (TStack_298.Object)->bIsBookmark == false;
      bVar7 = UDS_ChattingManager::UpdateBookmark(pUVar8,Custom,this->SubTabIndex,bVar10);
      if (bVar7) {
        if ((TStack_298.Object == (FDS_ChatCustomData *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        (TStack_298.Object)->bIsBookmark = bVar10;
        if ((TStack_298.Object == (FDS_ChatCustomData *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x44d,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FStack_278.ChatFilterIndex = (TStack_298.Object)->ChatFilterIndex;
        FStack_278._4_4_ = *(undefined4 *)&(TStack_298.Object)->field_0x4;
        FStack_278.ChatFilterFlags = (TStack_298.Object)->ChatFilterFlags;
        FStack_278.bIsBookmark = (TStack_298.Object)->bIsBookmark;
        FStack_278._17_7_ = *(undefined7 *)&(TStack_298.Object)->field_0x11;
        UDS_ChattingManager::RequestSetCustomInfo(pUVar8,this->SubTabIndex,&FStack_278);
        iVar6 = FFieldNotificationClassDescriptor::bIsBookmark.BitNumber;
        FVar5 = FFieldNotificationClassDescriptor::bIsBookmark.FieldName;
        if (this->bIsBookmark != bVar10) {
          this->bIsBookmark = bVar10;
          iStack_280 = iVar6;
          FStack_288 = FVar5;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_288);
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (TStack_298.SharedReferenceCount.ReferenceController);
  }
  return;
}

// OnClickChatCollapsed @ 14bd725b0

void __thiscall
UDS_VM_Chat_ChatRoomInfo::OnClickChatCollapsed
          (UDS_VM_Chat_ChatRoomInfo *this,FDS_ButtonEventField *param_1)

{
  EDS_ChatMode EVar1;
  UDS_ChatEvent *pUVar2;
  
  pUVar2 = UDS_ChatEvent::GetEvent();
  if (pUVar2 != (UDS_ChatEvent *)0x0) {
    EVar1 = FDS_QueryDelegate<enum_EDS_ChatMode_const_>::Query(&pUVar2->OnQueryChatMode);
    if (EVar1 == Normal) {
      FDS_EventDelegate<enum_EDS_ChatMode_const_>::Broadcast(&pUVar2->OnChangedChatMode,Simple);
      return;
    }
    if (EVar1 == Extended) {
      FDS_EventDelegate<enum_EDS_ChatMode_const_>::Broadcast(&pUVar2->OnChangedChatMode,Normal);
      return;
    }
  }
  return;
}

// OnClickChatExtended @ 14bd72680

void __thiscall
UDS_VM_Chat_ChatRoomInfo::OnClickChatExtended
          (UDS_VM_Chat_ChatRoomInfo *this,FDS_ButtonEventField *param_1)

{
  UDS_ChatEvent *pUVar1;
  
  pUVar1 = UDS_ChatEvent::GetEvent();
  if (pUVar1 != (UDS_ChatEvent *)0x0) {
    FDS_EventDelegate<enum_EDS_ChatMode_const_>::Broadcast(&pUVar1->OnChangedChatMode,Extended);
    return;
  }
  return;
}

// OnClickExit @ 14bd72da0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Chat_ChatRoomInfo::OnClickExit(UDS_VM_Chat_ChatRoomInfo *this,FDS_ButtonEventField *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FDS_ChatConversation *pFVar2;
  code *pcVar3;
  bool bVar4;
  UDS_ChattingManager *this_00;
  UDS_LogManager *pUVar5;
  undefined1 auStackY_3d8 [32];
  TSharedPtr<FDS_ChatRoomData,1> local_3a8;
  FDS_ChatCustomData local_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_378;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_3d8;
  this_00 = UDS_ChattingManager::GetInst();
  if (this_00 == (UDS_ChattingManager *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_378._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_378,"UDS_VM_Chat_ChatRoomInfo::OnClickExit",0x25,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_378.Ptr,0x97,L"chattingManager == nullptr");
      if ((void *)local_378._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_378._padding_);
      }
    }
  }
  else if (this->ChattingTabType == Custom) {
    local_398.ChatFilterIndex = this->SubTabIndex;
    local_398.ChatFilterFlags = 0;
    local_398.bIsBookmark = false;
    UDS_ChattingManager::RequestSetCustomInfo(this_00,local_398.ChatFilterIndex,&local_398);
    UDS_ChattingManager::SetChattingTabType(this_00,Total,-1);
  }
  else if (this->ChattingTabType == Whisper) {
    UDS_ChattingManager::GetChatRoomData(this_00,&local_3a8,Whisper,this->SubTabIndex);
    if (local_3a8.Object == (FDS_ChatRoomData *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 != (UDS_LogManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        local_258._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_258,"UDS_VM_Chat_ChatRoomInfo::OnClickExit",0x25,Yes);
        UDS_LogManager::PrintLog
                  (pUVar5,1,Warning,local_258.Ptr,0xa7,L"chatRoomData.IsValid() == false");
        if ((void *)local_258._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_258._padding_);
        }
      }
    }
    else {
      if ((local_3a8.Object == (FDS_ChatRoomData *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar1 = ((local_3a8.Object)->ChatConversation).SharedReferenceCount.ReferenceController;
      pFVar2 = ((local_3a8.Object)->ChatConversation).Object;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pFVar2 == (FDS_ChatConversation *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        if (pUVar5 != (UDS_LogManager *)0x0) {
          pUVar5 = UDS_LogManager::GetInst();
          local_138._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_138,"UDS_VM_Chat_ChatRoomInfo::OnClickExit",0x25,Yes);
          UDS_LogManager::PrintLog
                    (pUVar5,1,Warning,local_138.Ptr,0xae,L"chatRoomData.IsValid() == false");
          if ((void *)local_138._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_138._padding_);
          }
        }
      }
      else {
        UDS_ChattingManager::RequestDeleteConversation(this_00,&pFVar2->ConversationID);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3a8.SharedReferenceCount.ReferenceController);
  }
  return;
}

// OnClickManageCustom @ 14bd73660

void __thiscall
UDS_VM_Chat_ChatRoomInfo::OnClickManageCustom
          (UDS_VM_Chat_ChatRoomInfo *this,FDS_ButtonEventField *param_1)

{
  UDS_ChatUIPopupHelper::OpenCustomSettingPopup(this->SubTabIndex);
  return;
}

// OnClickManageGroup @ 14bd73680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Chat_ChatRoomInfo::OnClickManageGroup
          (UDS_VM_Chat_ChatRoomInfo *this,FDS_ButtonEventField *param_1)

{
  UDS_ChattingManager *this_00;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_178 [32];
  TSharedPtr<FDS_ChatRoomData,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this_00 = UDS_ChattingManager::GetInst();
  if (this_00 == (UDS_ChattingManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_Chat_ChatRoomInfo::OnClickManageGroup",0x2c,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x6c,L"chattingManager == nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    UDS_ChattingManager::GetChatRoomData(this_00,&local_148,Group,this->SubTabIndex);
    if (local_148.Object == (FDS_ChatRoomData *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      if (pUVar1 != (UDS_LogManager *)0x0) {
        pUVar1 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_VM_Chat_ChatRoomInfo::OnClickManageGroup",0x2c,Yes);
        UDS_LogManager::PrintLog
                  (pUVar1,1,Warning,local_138.Ptr,0x73,L"groupChatRoomData.IsValid() == false");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    else {
      OpenGroupMenuPopup(this,&this->ChattingTabType,this->SubTabIndex);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
  }
  return;
}

// OnMouseEnterButton @ 14bd7ace0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Chat_ChatRoomInfo::OnMouseEnterButton
          (UDS_VM_Chat_ChatRoomInfo *this,FDS_WidgetPointerEventField *param_1)

{
  UDS_LogManager *pUVar1;
  undefined1 auStackY_178 [32];
  UDS_UserWidget *local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_148[0] = param_1->TargetWidget;
  if (local_148[0] == (UDS_UserWidget *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_Chat_ChatRoomInfo::OnMouseEnterButton",0x2c,Yes);
      UDS_LogManager::PrintLog
                (pUVar1,1,Warning,local_138.Ptr,0xba,L"InEvent.TargetWidget == nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    (this->HoverWidget).WeakPtr = (FWeakObjectPtr)0x0;
  }
  else {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)local_148[0]);
    }
    FWeakObjectPtr::operator=(&(this->HoverWidget).WeakPtr,(FObjectPtr)local_148);
  }
  return;
}

// OnMouseLeaveButton @ 14bd7adf0

void __thiscall
UDS_VM_Chat_ChatRoomInfo::OnMouseLeaveButton
          (UDS_VM_Chat_ChatRoomInfo *this,FDS_WidgetPointerEventField *param_1)

{
  (this->HoverWidget).WeakPtr = (FWeakObjectPtr)0x0;
  return;
}

// OnOpenGroupMenuPopup @ 14bd7ae00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Chat_ChatRoomInfo::OnOpenGroupMenuPopup
          (UDS_VM_Chat_ChatRoomInfo *this,UDS_UserWidget *param_1,
          TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr> param_2,EDS_ChattingTabType param_3,
          int param_4)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  FDS_ViewModelContext *pFVar4;
  UScriptStruct *pUVar5;
  UDS_ViewModelContextManager *this_00;
  undefined8 *puVar6;
  ulong64 uVar7;
  FDS_ViewModelContext *pFVar8;
  FDS_ViewModelContext *pFVar9;
  undefined1 auStackY_218 [32];
  FWeakObjectPtr local_1e8;
  FWeakObjectPtr local_1e0;
  TSharedPtr<FDS_ViewModelContext,1> local_1d8;
  undefined1 local_1c8 [8];
  FDelegateAllocation local_1c0;
  UDS_UserWidget *local_1b0;
  UDS_UserWidget *local_1a8;
  UDS_VM_Chat_ChatRoomInfo *local_1a0;
  TSharedPtr<FDS_ViewModelContext,1> local_198;
  FDestructionSentinel local_188;
  FDelegateAllocation *local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_218;
  if (param_1 == (UDS_UserWidget *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_VM_Chat_ChatRoomInfo::OnOpenGroupMenuPopup",0x2e,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_168.Ptr,0x25c,L"InContentsWidget == nullptr");
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
    }
  }
  else {
    pFVar4 = ::operator_new(0x30);
    pFVar8 = (FDS_ViewModelContext *)0x0;
    pFVar9 = pFVar8;
    if (pFVar4 != (FDS_ViewModelContext *)0x0) {
      pFVar4->_padding_ = 0;
      *(undefined8 *)&pFVar4->DerivedStaticStruct = 0;
      (pFVar4->ViewModelName).ComparisonIndex = 0;
      (pFVar4->ViewModelName).Number = 0;
      *(undefined8 *)&pFVar4->ViewModelTemplateKey = 0;
      pFVar4[1]._padding_ = 0;
      *(undefined8 *)&pFVar4[1].DerivedStaticStruct = 0;
      *(undefined4 *)((longlong)&pFVar4[1]._padding_ + 4) = 0xffffffff;
      pFVar4->_padding_ = (longlong)&___7FDS_ViewModelContext_ChatTab__6B_;
      pFVar9 = pFVar4;
    }
    pFVar4 = ::operator_new(0x20);
    if (pFVar4 != (FDS_ViewModelContext *)0x0) {
      *(atomic<int> *)&pFVar4->DerivedStaticStruct = (atomic<int>)0x1;
      *(code **)&(pFVar4->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
      pFVar4->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_ChatTab__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      ((atomic<int> *)&pFVar4->DerivedStaticStruct)[1] = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pFVar4->ViewModelTemplateKey = pFVar9;
      pFVar8 = pFVar4;
    }
    if ((pFVar9 == (FDS_ViewModelContext *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pUVar5 = FDS_ViewModelContext_ChatTab::StaticStruct();
    *(UScriptStruct **)&pFVar9->DerivedStaticStruct = pUVar5;
    this_00 = UDS_ViewModelContextManager::GetInst();
    if (this_00 != (UDS_ViewModelContextManager *)0x0) {
      if (pFVar8 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar8->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar8->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_1d8.Object = pFVar9;
      local_1d8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar8;
      UDS_ViewModelContextManager::RegisterContext(this_00,&local_1d8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1d8.SharedReferenceCount.ReferenceController);
    }
    pFVar9->ViewModelTemplateKey = Chat_GroupMenu;
    *(EDS_ChattingTabType *)&pFVar9[1]._padding_ = param_3;
    *(int *)((longlong)&pFVar9[1]._padding_ + 4) = param_4;
    if (pFVar8 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar8->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar8->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_198.Object = pFVar9;
    local_198.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar8;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_1e8.ObjectIndex = 0;
    local_1e8.ObjectSerialNumber = 0;
    local_1b0 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_1e8,(FObjectPtr)&local_1b0);
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_1e8,&local_198,false);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_1e0.ObjectIndex = 0;
    local_1e0.ObjectSerialNumber = 0;
    local_1a8 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_1e0,(FObjectPtr)&local_1a8);
    local_1d8.Object = (FDS_ViewModelContext *)OnWidgetResize;
    local_1d8.SharedReferenceCount.ReferenceController =
         local_198.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
    local_1c8 = (undefined1  [8])0x0;
    local_1c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_1c0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1c8,
               (FWriteAccessScope *)&local_188);
    local_170 = &local_1c0;
    puVar6 = UE::Core::Private::DelegateAllocate(0x38,&local_1c0);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUDS_UserWidget__UFWeakObjectPtr____U2___6B_
      ;
      *(FWeakObjectPtr *)(puVar6 + 1) = local_1e0;
      *(FWeakObjectPtr *)(puVar6 + 2) = param_2.WeakPtr;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[3] = uVar7;
      *puVar6 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_Chat_ChatRoomInfo____A6AXXZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUDS_UserWidget__UFWeakObjectPtr____U3___6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_VM_Chat_ChatRoomInfo *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar6[4] = 0;
      local_1a0 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_VM_Chat_ChatRoomInfo *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 4),(FObjectPtr)&local_1a0);
      puVar6[5] = local_1d8.Object;
      puVar6[6] = local_1d8.SharedReferenceCount.ReferenceController;
    }
    if (local_188.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_188.Accessor,&local_188);
    }
    UDS_UserWidget::SetDelegateResize
              (param_1,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_1c8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar8);
  }
  return;
}

// OnRefreshChatRoom @ 14bd7c290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Chat_ChatRoomInfo::OnRefreshChatRoom(UDS_VM_Chat_ChatRoomInfo *this,FString *param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FDS_ChatConversation *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  EDS_ChatMode EVar7;
  UDS_ChattingManager *this_00;
  UDS_LogManager *pUVar8;
  UDS_ChatEvent *pUVar9;
  undefined1 auStackY_3b8 [32];
  TSharedPtr<FDS_ChatRoomData,1> local_388;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_378;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  this_00 = UDS_ChattingManager::GetInst();
  if (this_00 == (UDS_ChattingManager *)0x0) {
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar8 = UDS_LogManager::GetInst();
    local_378._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_378,"UDS_VM_Chat_ChatRoomInfo::OnRefreshChatRoom",0x2b,Yes);
    UDS_LogManager::PrintLog(pUVar8,1,Warning,local_378.Ptr,0x213,L"chattingManager == nullptr");
    if ((void *)local_378._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_378._padding_);
    return;
  }
  UDS_ChattingManager::GetChatRoomData(this_00,&local_388,this->ChattingTabType,this->SubTabIndex);
  if (local_388.Object == (FDS_ChatRoomData *)0x0) {
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 != (UDS_LogManager *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      local_258._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_258,"UDS_VM_Chat_ChatRoomInfo::OnRefreshChatRoom",0x2b,Yes);
      UDS_LogManager::PrintLog
                (pUVar8,1,Warning,local_258.Ptr,0x21f,L"chatRoomData.IsValid() == false");
      if ((void *)local_258._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_258._padding_);
      }
    }
    goto LAB_14bd7c53b;
  }
  if ((local_388.Object == (FDS_ChatRoomData *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar2 = ((local_388.Object)->ChatConversation).SharedReferenceCount.ReferenceController;
  pFVar3 = ((local_388.Object)->ChatConversation).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar3 == (FDS_ChatConversation *)0x0) {
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 != (UDS_LogManager *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_Chat_ChatRoomInfo::OnRefreshChatRoom",0x2b,Yes);
      UDS_LogManager::PrintLog
                (pUVar8,1,Warning,local_138.Ptr,0x226,L"chatConversation.IsValid() == false");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    iVar6 = (pFVar3->ConversationID).Data.ArrayNum;
    iVar1 = (param_1->Data).ArrayNum;
    if (iVar6 == iVar1) {
      if (1 < iVar6) {
        iVar6 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(pFVar3->ConversationID).Data.AllocatorInstance.Data,
                           (wchar_t *)(param_1->Data).AllocatorInstance.Data);
        bVar5 = iVar6 == 0;
        goto LAB_14bd7c501;
      }
    }
    else {
      bVar5 = iVar6 + iVar1 == 1;
LAB_14bd7c501:
      if (!bVar5) goto LAB_14bd7c52b;
    }
    pUVar9 = UDS_ChatEvent::GetEvent();
    if ((pUVar9 == (UDS_ChatEvent *)0x0) ||
       (EVar7 = FDS_QueryDelegate<enum_EDS_ChatMode_const_>::Query(&pUVar9->OnQueryChatMode),
       Simple < EVar7)) {
      UpdateChatRoomInfo(this);
    }
  }
LAB_14bd7c52b:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
LAB_14bd7c53b:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_388.SharedReferenceCount.ReferenceController);
  return;
}

// OnRefreshCustomInfo @ 14bd7c770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Chat_ChatRoomInfo::OnRefreshCustomInfo(UDS_VM_Chat_ChatRoomInfo *this)

{
  EDS_ChattingTabType EVar1;
  code *pcVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  EDS_ChatMode EVar6;
  UDS_ChattingManager *this_00;
  UDS_LogManager *pUVar7;
  UDS_ChatEvent *pUVar8;
  FName *pFVar9;
  longlong *plVar10;
  undefined1 auStackY_378 [32];
  TSharedPtr<FDS_ChattingTabData,1> TStack_348;
  FLinearColor_u_0 FStack_338;
  FName FStack_328;
  int iStack_320;
  FName FStack_318;
  int iStack_310;
  FName FStack_308;
  int iStack_300;
  FName FStack_2f8;
  int iStack_2f0;
  FName FStack_2e8;
  int iStack_2e0;
  FDS_Text FStack_2d8;
  TSharedPtr<FDS_ChattingTabData,1> TStack_288;
  TSharedPtr<FDS_ChattingTabData,1> TStack_278;
  TSharedPtr<FDS_ChattingTabData,1> TStack_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_378;
  this_00 = UDS_ChattingManager::GetInst();
  if (this_00 == (UDS_ChattingManager *)0x0) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar7 = UDS_LogManager::GetInst();
    TStack_258._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_258,"UDS_VM_Chat_ChatRoomInfo::UpdateChatRoomInfo",0x2c,Yes);
    UDS_LogManager::PrintLog(pUVar7,1,Warning,TStack_258.Ptr,0xfa,L"chattingManager == nullptr");
    if ((void *)TStack_258._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)TStack_258._padding_);
    return;
  }
  UDS_ChattingManager::GetChattingTabData(this_00,&TStack_348,this->ChattingTabType);
  if (TStack_348.Object == (FDS_ChattingTabData *)0x0) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_VM_Chat_ChatRoomInfo::UpdateChatRoomInfo",0x2c,Yes);
      UDS_LogManager::PrintLog
                (pUVar7,1,Warning,TStack_138.Ptr,0x101,L"chattingTabData.IsValid() == false");
      if ((void *)TStack_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
      }
    }
    goto LAB_14bd8ddc1;
  }
  EVar6 = Normal;
  pUVar8 = UDS_ChatEvent::GetEvent();
  if (pUVar8 != (UDS_ChatEvent *)0x0) {
    EVar6 = FDS_QueryDelegate<enum_EDS_ChatMode_const_>::Query(&pUVar8->OnQueryChatMode);
  }
  UDS_ChattingManager::GetChattingTabColor
            (this_00,(FLinearColor *)&FStack_338._s_0,this->ChattingTabType,this->SubTabIndex);
  if ((((FStack_338._s_0.R != (this->ChatTabColor).field0_0x0._s_0.R) ||
       (FStack_338._s_0.G != (this->ChatTabColor).field0_0x0._s_0.G)) ||
      (FStack_338._s_0.B != (this->ChatTabColor).field0_0x0._s_0.B)) ||
     (FStack_338._s_0.A != (this->ChatTabColor).field0_0x0._s_0.A)) {
    iStack_320 = FFieldNotificationClassDescriptor::ChatTabColor.BitNumber;
    FStack_328 = FFieldNotificationClassDescriptor::ChatTabColor.FieldName;
    *(ulonglong *)&(this->ChatTabColor).field0_0x0 = CONCAT44(FStack_338._s_0.G,FStack_338._s_0.R);
    *(ulonglong *)((longlong)&(this->ChatTabColor).field0_0x0 + 8) =
         CONCAT44(FStack_338._s_0.A,FStack_338._s_0.B);
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_328);
  }
  iVar4 = FFieldNotificationClassDescriptor::ChatCollapsedVisibility.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::ChatCollapsedVisibility.FieldName;
  plVar10 = &this->_padding_;
  if (this->ChatCollapsedVisibility != SelfHitTestInvisible) {
    this->ChatCollapsedVisibility = SelfHitTestInvisible;
    iStack_310 = iVar4;
    FStack_318 = FVar3;
    (**(code **)(*plVar10 + 0x38))(plVar10,&FStack_318);
  }
  iVar4 = FFieldNotificationClassDescriptor::ChatExtendedVisibility.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::ChatExtendedVisibility.FieldName;
  if (EVar6 == Normal) {
    if (this->ChatExtendedVisibility != SelfHitTestInvisible) {
      this->ChatExtendedVisibility = SelfHitTestInvisible;
      pFVar9 = &FStack_308;
      FStack_308 = FVar3;
      iStack_300 = iVar4;
LAB_14bd8dc18:
      (**(code **)(*plVar10 + 0x38))(plVar10,pFVar9);
    }
  }
  else if (this->ChatExtendedVisibility != Collapsed) {
    this->ChatExtendedVisibility = Collapsed;
    pFVar9 = &FStack_2f8;
    FStack_2f8 = FVar3;
    iStack_2f0 = iVar4;
    goto LAB_14bd8dc18;
  }
  EVar1 = this->ChattingTabType;
  if (EVar1 == Custom) {
    TStack_268.Object = TStack_348.Object;
    TStack_268.SharedReferenceCount.ReferenceController =
         TStack_348.SharedReferenceCount.ReferenceController;
    if (TStack_348.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (TStack_348.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(TStack_348.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UpdateChatRoomInfo_Custom(this,EVar6,&TStack_268);
  }
  else if (EVar1 == Whisper) {
    TStack_278.Object = TStack_348.Object;
    TStack_278.SharedReferenceCount.ReferenceController =
         TStack_348.SharedReferenceCount.ReferenceController;
    if (TStack_348.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (TStack_348.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(TStack_348.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UpdateChatRoomInfo_Whisper(this,EVar6,&TStack_278);
  }
  else if (EVar1 == Group) {
    TStack_288.Object = TStack_348.Object;
    TStack_288.SharedReferenceCount.ReferenceController =
         TStack_348.SharedReferenceCount.ReferenceController;
    if (TStack_348.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (TStack_348.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(TStack_348.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UpdateChatRoomInfo_Group(this,EVar6,&TStack_288);
  }
  else {
    if ((TStack_348.Object == (FDS_ChattingTabData *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FStack_2d8.StringTableType = None;
    FStack_2d8.StringTableID = 0;
    FStack_2d8.StringEnumTableNameID.ComparisonIndex.Value = 0;
    FStack_2d8.StringEnumTableNameID.Number = 0;
    FStack_2d8.DateTime.Ticks = 0;
    FStack_2d8.TimeSpan.Ticks = 0;
    FStack_2d8.TimeExpressionType = None;
    FStack_2d8.IsExpression = false;
    FStack_2d8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_2d8.UniqueString.Data.ArrayNum = 0;
    FStack_2d8.UniqueString.Data.ArrayMax = 0;
    FStack_2d8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_2d8.FormatArgs.ArrayNum = 0;
    FStack_2d8.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromStringID(&FStack_2d8,&(TStack_348.Object)->TabStringID);
    FDS_Text::operator=(&this->ChatRoomName,&FStack_2d8);
    iStack_2e0 = FFieldNotificationClassDescriptor::ChatRoomName.BitNumber;
    FStack_2e8 = FFieldNotificationClassDescriptor::ChatRoomName.FieldName;
    (**(code **)(*plVar10 + 0x38))(plVar10,&FStack_2e8);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)FStack_2d8.FormatArgs.AllocatorInstance.Data,
               FStack_2d8.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)FStack_2d8.FormatArgs.AllocatorInstance.Data !=
        (FDS_TextFormatArg *)0x0) {
      FMemory::Free(FStack_2d8.FormatArgs.AllocatorInstance.Data);
    }
    if (FStack_2d8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_2d8.UniqueString.Data.AllocatorInstance.Data);
    }
    SetBookmarkVisibility(this,Collapsed);
    SetCustomVisibility(this,Collapsed);
    SetGroupVisibility(this,Collapsed);
    SetExitVisibility(this,Collapsed);
  }
LAB_14bd8ddc1:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_348.SharedReferenceCount.ReferenceController);
  return;
}

// OnRefreshUserInfo @ 14bd7c780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Chat_ChatRoomInfo::OnRefreshUserInfo(UDS_VM_Chat_ChatRoomInfo *this)

{
  EDS_ChattingTabType EVar1;
  code *pcVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  EDS_ChatMode EVar6;
  UDS_ChattingManager *this_00;
  UDS_LogManager *pUVar7;
  UDS_ChatEvent *pUVar8;
  FName *pFVar9;
  longlong *plVar10;
  undefined1 auStackY_378 [32];
  TSharedPtr<FDS_ChattingTabData,1> TStack_348;
  FLinearColor_u_0 FStack_338;
  FName FStack_328;
  int iStack_320;
  FName FStack_318;
  int iStack_310;
  FName FStack_308;
  int iStack_300;
  FName FStack_2f8;
  int iStack_2f0;
  FName FStack_2e8;
  int iStack_2e0;
  FDS_Text FStack_2d8;
  TSharedPtr<FDS_ChattingTabData,1> TStack_288;
  TSharedPtr<FDS_ChattingTabData,1> TStack_278;
  TSharedPtr<FDS_ChattingTabData,1> TStack_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_378;
  this_00 = UDS_ChattingManager::GetInst();
  if (this_00 == (UDS_ChattingManager *)0x0) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar7 = UDS_LogManager::GetInst();
    TStack_258._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_258,"UDS_VM_Chat_ChatRoomInfo::UpdateChatRoomInfo",0x2c,Yes);
    UDS_LogManager::PrintLog(pUVar7,1,Warning,TStack_258.Ptr,0xfa,L"chattingManager == nullptr");
    if ((void *)TStack_258._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)TStack_258._padding_);
    return;
  }
  UDS_ChattingManager::GetChattingTabData(this_00,&TStack_348,this->ChattingTabType);
  if (TStack_348.Object == (FDS_ChattingTabData *)0x0) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_VM_Chat_ChatRoomInfo::UpdateChatRoomInfo",0x2c,Yes);
      UDS_LogManager::PrintLog
                (pUVar7,1,Warning,TStack_138.Ptr,0x101,L"chattingTabData.IsValid() == false");
      if ((void *)TStack_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
      }
    }
    goto LAB_14bd8ddc1;
  }
  EVar6 = Normal;
  pUVar8 = UDS_ChatEvent::GetEvent();
  if (pUVar8 != (UDS_ChatEvent *)0x0) {
    EVar6 = FDS_QueryDelegate<enum_EDS_ChatMode_const_>::Query(&pUVar8->OnQueryChatMode);
  }
  UDS_ChattingManager::GetChattingTabColor
            (this_00,(FLinearColor *)&FStack_338._s_0,this->ChattingTabType,this->SubTabIndex);
  if ((((FStack_338._s_0.R != (this->ChatTabColor).field0_0x0._s_0.R) ||
       (FStack_338._s_0.G != (this->ChatTabColor).field0_0x0._s_0.G)) ||
      (FStack_338._s_0.B != (this->ChatTabColor).field0_0x0._s_0.B)) ||
     (FStack_338._s_0.A != (this->ChatTabColor).field0_0x0._s_0.A)) {
    iStack_320 = FFieldNotificationClassDescriptor::ChatTabColor.BitNumber;
    FStack_328 = FFieldNotificationClassDescriptor::ChatTabColor.FieldName;
    *(ulonglong *)&(this->ChatTabColor).field0_0x0 = CONCAT44(FStack_338._s_0.G,FStack_338._s_0.R);
    *(ulonglong *)((longlong)&(this->ChatTabColor).field0_0x0 + 8) =
         CONCAT44(FStack_338._s_0.A,FStack_338._s_0.B);
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_328);
  }
  iVar4 = FFieldNotificationClassDescriptor::ChatCollapsedVisibility.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::ChatCollapsedVisibility.FieldName;
  plVar10 = &this->_padding_;
  if (this->ChatCollapsedVisibility != SelfHitTestInvisible) {
    this->ChatCollapsedVisibility = SelfHitTestInvisible;
    iStack_310 = iVar4;
    FStack_318 = FVar3;
    (**(code **)(*plVar10 + 0x38))(plVar10,&FStack_318);
  }
  iVar4 = FFieldNotificationClassDescriptor::ChatExtendedVisibility.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::ChatExtendedVisibility.FieldName;
  if (EVar6 == Normal) {
    if (this->ChatExtendedVisibility != SelfHitTestInvisible) {
      this->ChatExtendedVisibility = SelfHitTestInvisible;
      pFVar9 = &FStack_308;
      FStack_308 = FVar3;
      iStack_300 = iVar4;
LAB_14bd8dc18:
      (**(code **)(*plVar10 + 0x38))(plVar10,pFVar9);
    }
  }
  else if (this->ChatExtendedVisibility != Collapsed) {
    this->ChatExtendedVisibility = Collapsed;
    pFVar9 = &FStack_2f8;
    FStack_2f8 = FVar3;
    iStack_2f0 = iVar4;
    goto LAB_14bd8dc18;
  }
  EVar1 = this->ChattingTabType;
  if (EVar1 == Custom) {
    TStack_268.Object = TStack_348.Object;
    TStack_268.SharedReferenceCount.ReferenceController =
         TStack_348.SharedReferenceCount.ReferenceController;
    if (TStack_348.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (TStack_348.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(TStack_348.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UpdateChatRoomInfo_Custom(this,EVar6,&TStack_268);
  }
  else if (EVar1 == Whisper) {
    TStack_278.Object = TStack_348.Object;
    TStack_278.SharedReferenceCount.ReferenceController =
         TStack_348.SharedReferenceCount.ReferenceController;
    if (TStack_348.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (TStack_348.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(TStack_348.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UpdateChatRoomInfo_Whisper(this,EVar6,&TStack_278);
  }
  else if (EVar1 == Group) {
    TStack_288.Object = TStack_348.Object;
    TStack_288.SharedReferenceCount.ReferenceController =
         TStack_348.SharedReferenceCount.ReferenceController;
    if (TStack_348.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (TStack_348.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(TStack_348.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UpdateChatRoomInfo_Group(this,EVar6,&TStack_288);
  }
  else {
    if ((TStack_348.Object == (FDS_ChattingTabData *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FStack_2d8.StringTableType = None;
    FStack_2d8.StringTableID = 0;
    FStack_2d8.StringEnumTableNameID.ComparisonIndex.Value = 0;
    FStack_2d8.StringEnumTableNameID.Number = 0;
    FStack_2d8.DateTime.Ticks = 0;
    FStack_2d8.TimeSpan.Ticks = 0;
    FStack_2d8.TimeExpressionType = None;
    FStack_2d8.IsExpression = false;
    FStack_2d8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_2d8.UniqueString.Data.ArrayNum = 0;
    FStack_2d8.UniqueString.Data.ArrayMax = 0;
    FStack_2d8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_2d8.FormatArgs.ArrayNum = 0;
    FStack_2d8.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromStringID(&FStack_2d8,&(TStack_348.Object)->TabStringID);
    FDS_Text::operator=(&this->ChatRoomName,&FStack_2d8);
    iStack_2e0 = FFieldNotificationClassDescriptor::ChatRoomName.BitNumber;
    FStack_2e8 = FFieldNotificationClassDescriptor::ChatRoomName.FieldName;
    (**(code **)(*plVar10 + 0x38))(plVar10,&FStack_2e8);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)FStack_2d8.FormatArgs.AllocatorInstance.Data,
               FStack_2d8.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)FStack_2d8.FormatArgs.AllocatorInstance.Data !=
        (FDS_TextFormatArg *)0x0) {
      FMemory::Free(FStack_2d8.FormatArgs.AllocatorInstance.Data);
    }
    if (FStack_2d8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_2d8.UniqueString.Data.AllocatorInstance.Data);
    }
    SetBookmarkVisibility(this,Collapsed);
    SetCustomVisibility(this,Collapsed);
    SetGroupVisibility(this,Collapsed);
    SetExitVisibility(this,Collapsed);
  }
LAB_14bd8ddc1:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_348.SharedReferenceCount.ReferenceController);
  return;
}

// OnSetViewModel @ 14bd7f670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Chat_ChatRoomInfo::OnSetViewModel
          (UDS_VM_Chat_ChatRoomInfo *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_188 [32];
  TSharedPtr<FDS_ViewModelContext_Chat,1> local_158;
  TSharedPtr<FDS_ViewModelContext,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_148.Object = param_1->Object;
  local_148.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_148.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_Chat>(&local_158,&local_148);
  if (local_158.Object == (FDS_ViewModelContext_Chat *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_Chat_ChatRoomInfo::OnSetViewModel",0x28,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_138.Ptr,0x16,L"chatContext.IsValid() == false");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    (this->HoverWidget).WeakPtr = (FWeakObjectPtr)0x0;
    if (local_158.Object == (FDS_ViewModelContext_Chat *)0x0) {
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
    this->ChattingTabType = (local_158.Object)->ChattingTabType;
    this->SubTabIndex = (local_158.Object)->SubTabIndex;
    UpdateChatRoomInfo(this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_158.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnWidgetResize @ 14bd83e70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_VM_Chat_ChatRoomInfo::OnWidgetResize
          (UDS_VM_Chat_ChatRoomInfo *this,TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr> param_1,
          TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr> param_2)

{
  bool bVar1;
  EDS_ChatMode EVar2;
  UDS_LogManager *pUVar3;
  UDS_ChatEvent *pUVar4;
  UWidget *pUVar5;
  double dVar6;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18 [2];
  undefined1 auStackY_198 [32];
  uint uVar7;
  wchar_t *pwVar8;
  TVector2<double>_u_0 local_168;
  TVector2<double>_u_0 local_158;
  TVector2<double> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_res10 = param_1.WeakPtr;
  local_res18[0] = param_2.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(&local_res10);
  if (!bVar1) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_Chat_ChatRoomInfo::OnWidgetResize",0x28,Yes);
    pwVar8 = L"InContentsWidget.IsValid() == false";
    uVar7 = 0x26d;
LAB_14bd83eff:
    UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,uVar7,pwVar8);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
    return;
  }
  bVar1 = FWeakObjectPtr::IsValid(local_res18);
  if (!bVar1) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_Chat_ChatRoomInfo::OnWidgetResize",0x28,Yes);
    pwVar8 = L"InTargetWidget.IsValid() == false";
    uVar7 = 0x273;
    goto LAB_14bd83eff;
  }
  pUVar4 = UDS_ChatEvent::GetEvent();
  if (pUVar4 == (UDS_ChatEvent *)0x0) {
    return;
  }
  EVar2 = FDS_QueryDelegate<enum_EDS_ChatMode_const_>::Query(&pUVar4->OnQueryChatMode);
  pUVar5 = (UWidget *)FWeakObjectPtr::Get(local_res18);
  UWidget::GetDesiredSize(pUVar5,(TVector2<double> *)&local_168._s_0);
  pUVar5 = (UWidget *)FWeakObjectPtr::Get(&local_res10);
  UWidget::GetDesiredSize(pUVar5,&local_148);
  local_158._s_0.X = 0.0;
  if (EVar2 == Normal) {
    dVar6 = __real_c024000000000000 -
            (local_168._s_0.Y * __real_3fe0000000000000 + local_148.field0_0x0._s_0.Y);
  }
  else {
    dVar6 = __real_403a000000000000;
    local_158._s_0.Y = 0.0;
    if (EVar2 != Extended) goto LAB_14bd84027;
  }
  local_158._s_0.X = local_168._s_0.X * __real_bfe0000000000000;
  local_158._s_0.Y = dVar6;
LAB_14bd84027:
  DS_Util::TransformTooltipPosition
            ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res18[0],
             (TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res10,
             (TVector2<double> *)&local_158._s_0,None);
  return;
}

// OpenGroupMenuPopup @ 14bd84080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_VM_Chat_ChatRoomInfo::OpenGroupMenuPopup
          (UDS_VM_Chat_ChatRoomInfo *this,EDS_ChattingTabType *param_1,int param_2)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_WindowManager *this_00;
  undefined8 *puVar3;
  ulong64 uVar4;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar5;
  undefined1 auStackY_1f8 [32];
  undefined1 local_1c8 [8];
  FDelegateAllocation local_1c0;
  code *local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  bool local_198;
  UDS_VM_Chat_ChatRoomInfo *local_188;
  FDestructionSentinel local_180;
  FDelegateAllocation *local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  bVar1 = FWeakObjectPtr::IsValid(&(this->HoverWidget).WeakPtr);
  if (bVar1) {
    this_00 = UDS_WindowManager::GetInst();
    if (this_00 == (UDS_WindowManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 != (UDS_LogManager *)0x0) {
        pUVar2 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_VM_Chat_ChatRoomInfo::OpenGroupMenuPopup",0x2c,Yes);
        UDS_LogManager::PrintLog(pUVar2,1,Warning,local_158.Ptr,0x250,L"windowManager == nullptr");
        if ((void *)local_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_158._padding_);
        }
      }
    }
    else {
      local_1a8 = OnOpenGroupMenuPopup;
      uStack_1a0 = 0;
      local_1c8 = (undefined1  [8])0x0;
      local_1c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_1c0.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1c8,
                 (FWriteAccessScope *)&local_180);
      local_168 = &local_1c0;
      puVar3 = UE::Core::Private::DelegateAllocate(0x38,&local_1c0);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &
                  ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUDS_UserWidget__UFWeakObjectPtr____W4EDS_ChattingTabType__H__6B_
        ;
        *(FWeakObjectPtr *)(puVar3 + 1) = (this->HoverWidget).WeakPtr;
        *(EDS_ChattingTabType *)(puVar3 + 2) = *param_1;
        *(int *)((longlong)puVar3 + 0x14) = param_2;
        uVar4 = FDelegateHandle::GenerateNewID();
        puVar3[3] = uVar4;
        *puVar3 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_Chat_ChatRoomInfo____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUDS_UserWidget__UFWeakObjectPtr____W4EDS_ChattingTabType__H__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar3[4] = 0;
        local_188 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 4),(FObjectPtr)&local_188);
        puVar3[5] = local_1a8;
        puVar3[6] = CONCAT44(uStack_19c,uStack_1a0);
      }
      if (local_180.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_180.Accessor,&local_180);
      }
      pTVar5 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
               TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                         ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                          &local_1a8,
                          (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                          local_1c8);
      UDS_WindowManager::OpenWindow(this_00,ChattingSubTabList,pTVar5);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1c8,
                 (FWriteAccessScope *)&local_1a8);
      if ((local_1c0.DelegateSize != 0) &&
         (local_1c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_1c0.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_1c0,0,0,0x10);
        local_1c0.DelegateSize = 0;
      }
      if (local_198 == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_19c,uStack_1a0),
                   (FDestructionSentinel *)&local_1a8);
      }
      if (local_1c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_1c0.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_1c8);
    }
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_VM_Chat_ChatRoomInfo::OpenGroupMenuPopup",0x2c,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_158.Ptr,0x249,L"HoverWidget.IsValid() == false");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
  return;
}

// SetBookmark @ 14bd86da0

void __thiscall UDS_VM_Chat_ChatRoomInfo::SetBookmark(UDS_VM_Chat_ChatRoomInfo *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::bIsBookmark.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bIsBookmark.FieldName;
  if (this->bIsBookmark != param_1) {
    this->bIsBookmark = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetBookmarkVisibility @ 14bd86df0

void __thiscall
UDS_VM_Chat_ChatRoomInfo::SetBookmarkVisibility
          (UDS_VM_Chat_ChatRoomInfo *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::BookmarkVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::BookmarkVisibility.FieldName;
  if (this->BookmarkVisibility != param_1) {
    this->BookmarkVisibility = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetChatCollapsedVisibility @ 14bd87030

void __thiscall
UDS_VM_Chat_ChatRoomInfo::SetChatCollapsedVisibility
          (UDS_VM_Chat_ChatRoomInfo *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::ChatCollapsedVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ChatCollapsedVisibility.FieldName;
  if (this->ChatCollapsedVisibility != param_1) {
    this->ChatCollapsedVisibility = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetChatExtendedVisibility @ 14bd87820

void __thiscall
UDS_VM_Chat_ChatRoomInfo::SetChatExtendedVisibility
          (UDS_VM_Chat_ChatRoomInfo *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::ChatExtendedVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ChatExtendedVisibility.FieldName;
  if (this->ChatExtendedVisibility != param_1) {
    this->ChatExtendedVisibility = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetChatRoomName @ 14bd879f0

void __thiscall
UDS_VM_Chat_ChatRoomInfo::SetChatRoomName(UDS_VM_Chat_ChatRoomInfo *this,FDS_Text *param_1)

{
  FName local_18;
  int local_10;
  
  FDS_Text::operator=(&this->ChatRoomName,param_1);
  local_10 = FFieldNotificationClassDescriptor::ChatRoomName.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ChatRoomName.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetChatTabColor @ 14bd87a40

void __thiscall
UDS_VM_Chat_ChatRoomInfo::SetChatTabColor(UDS_VM_Chat_ChatRoomInfo *this,FLinearColor *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FName local_18;
  int local_10;
  
  if (((((param_1->field0_0x0)._s_0.R != (this->ChatTabColor).field0_0x0._s_0.R) ||
       ((param_1->field0_0x0)._s_0.G != (this->ChatTabColor).field0_0x0._s_0.G)) ||
      ((param_1->field0_0x0)._s_0.B != (this->ChatTabColor).field0_0x0._s_0.B)) ||
     ((param_1->field0_0x0)._s_0.A != (this->ChatTabColor).field0_0x0._s_0.A)) {
    fVar1 = (param_1->field0_0x0)._s_0.G;
    fVar2 = (param_1->field0_0x0)._s_0.B;
    fVar3 = (param_1->field0_0x0)._s_0.A;
    local_10 = FFieldNotificationClassDescriptor::ChatTabColor.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::ChatTabColor.FieldName;
    (this->ChatTabColor).field0_0x0._s_0.R = (param_1->field0_0x0)._s_0.R;
    (this->ChatTabColor).field0_0x0._s_0.G = fVar1;
    (this->ChatTabColor).field0_0x0._s_0.B = fVar2;
    (this->ChatTabColor).field0_0x0._s_0.A = fVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetCustomVisibility @ 14bd880d0

void __thiscall
UDS_VM_Chat_ChatRoomInfo::SetCustomVisibility
          (UDS_VM_Chat_ChatRoomInfo *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::CustomVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::CustomVisibility.FieldName;
  if (this->CustomVisibility != param_1) {
    this->CustomVisibility = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetExitVisibility @ 14bd88300

void __thiscall
UDS_VM_Chat_ChatRoomInfo::SetExitVisibility(UDS_VM_Chat_ChatRoomInfo *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::ExitVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ExitVisibility.FieldName;
  if (this->ExitVisibility != param_1) {
    this->ExitVisibility = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetGroupVisibility @ 14bd89450

void __thiscall
UDS_VM_Chat_ChatRoomInfo::SetGroupVisibility
          (UDS_VM_Chat_ChatRoomInfo *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::GroupVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::GroupVisibility.FieldName;
  if (this->GroupVisibility != param_1) {
    this->GroupVisibility = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// UnbindModel @ 14bd8bbe0

void __thiscall UDS_VM_Chat_ChatRoomInfo::UnbindModel(UDS_VM_Chat_ChatRoomInfo *this)

{
  UDS_ChatEvent *pUVar1;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_ChatEvent::GetEvent();
  if (pUVar1 != (UDS_ChatEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnChangeChattingTabType,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnChangedChatMode,this
              );
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnRefreshChatRoom,this
              );
    FDS_FilteredEventDelegate<__int64_const_>::Remove<UDS_VM_Chat_ChatRoomInfo>
              (&pUVar1->OnRefreshUserInfo,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnChangedChatOption,
               this);
  }
  return;
}

// UpdateChatRoomInfo @ 14bd8d970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Chat_ChatRoomInfo::UpdateChatRoomInfo(UDS_VM_Chat_ChatRoomInfo *this)

{
  EDS_ChattingTabType EVar1;
  code *pcVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  EDS_ChatMode EVar6;
  UDS_ChattingManager *this_00;
  UDS_LogManager *pUVar7;
  UDS_ChatEvent *pUVar8;
  FName *pFVar9;
  longlong *plVar10;
  undefined1 auStackY_378 [32];
  TSharedPtr<FDS_ChattingTabData,1> local_348;
  FLinearColor_u_0 local_338;
  FName local_328;
  int local_320;
  FName local_318;
  int local_310;
  FName local_308;
  int local_300;
  FName local_2f8;
  int local_2f0;
  FName local_2e8;
  int local_2e0;
  FDS_Text local_2d8;
  TSharedPtr<FDS_ChattingTabData,1> local_288;
  TSharedPtr<FDS_ChattingTabData,1> local_278;
  TSharedPtr<FDS_ChattingTabData,1> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_378;
  this_00 = UDS_ChattingManager::GetInst();
  if (this_00 == (UDS_ChattingManager *)0x0) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar7 = UDS_LogManager::GetInst();
    local_258._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_258,"UDS_VM_Chat_ChatRoomInfo::UpdateChatRoomInfo",0x2c,Yes);
    UDS_LogManager::PrintLog(pUVar7,1,Warning,local_258.Ptr,0xfa,L"chattingManager == nullptr");
    if ((void *)local_258._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_258._padding_);
    return;
  }
  UDS_ChattingManager::GetChattingTabData(this_00,&local_348,this->ChattingTabType);
  if (local_348.Object == (FDS_ChattingTabData *)0x0) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_Chat_ChatRoomInfo::UpdateChatRoomInfo",0x2c,Yes);
      UDS_LogManager::PrintLog
                (pUVar7,1,Warning,local_138.Ptr,0x101,L"chattingTabData.IsValid() == false");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    goto LAB_14bd8ddc1;
  }
  EVar6 = Normal;
  pUVar8 = UDS_ChatEvent::GetEvent();
  if (pUVar8 != (UDS_ChatEvent *)0x0) {
    EVar6 = FDS_QueryDelegate<enum_EDS_ChatMode_const_>::Query(&pUVar8->OnQueryChatMode);
  }
  UDS_ChattingManager::GetChattingTabColor
            (this_00,(FLinearColor *)&local_338._s_0,this->ChattingTabType,this->SubTabIndex);
  if ((((local_338._s_0.R != (this->ChatTabColor).field0_0x0._s_0.R) ||
       (local_338._s_0.G != (this->ChatTabColor).field0_0x0._s_0.G)) ||
      (local_338._s_0.B != (this->ChatTabColor).field0_0x0._s_0.B)) ||
     (local_338._s_0.A != (this->ChatTabColor).field0_0x0._s_0.A)) {
    local_320 = FFieldNotificationClassDescriptor::ChatTabColor.BitNumber;
    local_328 = FFieldNotificationClassDescriptor::ChatTabColor.FieldName;
    *(ulonglong *)&(this->ChatTabColor).field0_0x0 = CONCAT44(local_338._s_0.G,local_338._s_0.R);
    *(ulonglong *)((longlong)&(this->ChatTabColor).field0_0x0 + 8) =
         CONCAT44(local_338._s_0.A,local_338._s_0.B);
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_328);
  }
  iVar4 = FFieldNotificationClassDescriptor::ChatCollapsedVisibility.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::ChatCollapsedVisibility.FieldName;
  plVar10 = &this->_padding_;
  if (this->ChatCollapsedVisibility != SelfHitTestInvisible) {
    this->ChatCollapsedVisibility = SelfHitTestInvisible;
    local_310 = iVar4;
    local_318 = FVar3;
    (**(code **)(*plVar10 + 0x38))(plVar10,&local_318);
  }
  iVar4 = FFieldNotificationClassDescriptor::ChatExtendedVisibility.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::ChatExtendedVisibility.FieldName;
  if (EVar6 == Normal) {
    if (this->ChatExtendedVisibility != SelfHitTestInvisible) {
      this->ChatExtendedVisibility = SelfHitTestInvisible;
      pFVar9 = &local_308;
      local_308 = FVar3;
      local_300 = iVar4;
LAB_14bd8dc18:
      (**(code **)(*plVar10 + 0x38))(plVar10,pFVar9);
    }
  }
  else if (this->ChatExtendedVisibility != Collapsed) {
    this->ChatExtendedVisibility = Collapsed;
    pFVar9 = &local_2f8;
    local_2f8 = FVar3;
    local_2f0 = iVar4;
    goto LAB_14bd8dc18;
  }
  EVar1 = this->ChattingTabType;
  if (EVar1 == Custom) {
    local_268.Object = local_348.Object;
    local_268.SharedReferenceCount.ReferenceController =
         local_348.SharedReferenceCount.ReferenceController;
    if (local_348.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_348.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_348.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UpdateChatRoomInfo_Custom(this,EVar6,&local_268);
  }
  else if (EVar1 == Whisper) {
    local_278.Object = local_348.Object;
    local_278.SharedReferenceCount.ReferenceController =
         local_348.SharedReferenceCount.ReferenceController;
    if (local_348.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_348.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_348.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UpdateChatRoomInfo_Whisper(this,EVar6,&local_278);
  }
  else if (EVar1 == Group) {
    local_288.Object = local_348.Object;
    local_288.SharedReferenceCount.ReferenceController =
         local_348.SharedReferenceCount.ReferenceController;
    if (local_348.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_348.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_348.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UpdateChatRoomInfo_Group(this,EVar6,&local_288);
  }
  else {
    if ((local_348.Object == (FDS_ChattingTabData *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_2d8.StringTableType = None;
    local_2d8.StringTableID = 0;
    local_2d8.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_2d8.StringEnumTableNameID.Number = 0;
    local_2d8.DateTime.Ticks = 0;
    local_2d8.TimeSpan.Ticks = 0;
    local_2d8.TimeExpressionType = None;
    local_2d8.IsExpression = false;
    local_2d8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2d8.UniqueString.Data.ArrayNum = 0;
    local_2d8.UniqueString.Data.ArrayMax = 0;
    local_2d8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2d8.FormatArgs.ArrayNum = 0;
    local_2d8.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromStringID(&local_2d8,&(local_348.Object)->TabStringID);
    FDS_Text::operator=(&this->ChatRoomName,&local_2d8);
    local_2e0 = FFieldNotificationClassDescriptor::ChatRoomName.BitNumber;
    local_2e8 = FFieldNotificationClassDescriptor::ChatRoomName.FieldName;
    (**(code **)(*plVar10 + 0x38))(plVar10,&local_2e8);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_2d8.FormatArgs.AllocatorInstance.Data,
               local_2d8.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_2d8.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0
       ) {
      FMemory::Free(local_2d8.FormatArgs.AllocatorInstance.Data);
    }
    if (local_2d8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2d8.UniqueString.Data.AllocatorInstance.Data);
    }
    SetBookmarkVisibility(this,Collapsed);
    SetCustomVisibility(this,Collapsed);
    SetGroupVisibility(this,Collapsed);
    SetExitVisibility(this,Collapsed);
  }
LAB_14bd8ddc1:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_348.SharedReferenceCount.ReferenceController);
  return;
}

// UpdateChatRoomInfo_Custom @ 14bd8de00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Chat_ChatRoomInfo::UpdateChatRoomInfo_Custom
          (UDS_VM_Chat_ChatRoomInfo *this,EDS_ChatMode param_1,
          TSharedPtr<FDS_ChattingTabData,1> *param_2)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  UDS_LogManager *pUVar5;
  UDS_ChattingManager *this_00;
  FDS_Text *pFVar6;
  undefined1 auStackY_3a8 [32];
  TSharedPtr<FDS_ChatCustomData,1> local_378;
  FName local_368;
  int local_360;
  FName local_358;
  int local_350;
  FName local_348;
  int local_340;
  FName local_338;
  int local_330;
  FName local_328;
  int local_320;
  FName local_318;
  int local_310;
  FDS_Text local_308;
  FDS_StringBaseID local_2b8;
  FDS_Text local_2a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_3a8;
  if (param_2->Object == (FDS_ChattingTabData *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_258._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_258,"UDS_VM_Chat_ChatRoomInfo::UpdateChatRoomInfo_Custom",0x33,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,local_258.Ptr,0x13b,L"chattingTabData.IsValid() == false");
      if ((void *)local_258._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_258._padding_);
      }
    }
  }
  else {
    this_00 = UDS_ChattingManager::GetInst();
    if (this_00 == (UDS_ChattingManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 != (UDS_LogManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_VM_Chat_ChatRoomInfo::UpdateChatRoomInfo_Custom",0x33,Yes);
        UDS_LogManager::PrintLog(pUVar5,1,Warning,local_138.Ptr,0x142,L"chattingManager == nullptr")
        ;
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    else {
      UDS_ChattingManager::GetCustomData(this_00,&local_378,this->SubTabIndex);
      if (local_378.Object == (FDS_ChatCustomData *)0x0) {
        local_308.StringTableType = None;
        local_2b8._padding_ = (longlong)&___7FDS_StringBaseID__6B_;
        local_2b8.ID = 0x449bf;
        local_308.StringTableID = 0;
        local_308.StringEnumTableNameID.ComparisonIndex.Value = 0;
        local_308.StringEnumTableNameID.Number = 0;
        local_308.TimeExpressionType = None;
        local_308.IsExpression = false;
        local_308.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_308.UniqueString.Data.ArrayNum = 0;
        local_308.UniqueString.Data.ArrayMax = 0;
        local_308.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_308.FormatArgs.ArrayNum = 0;
        local_308.FormatArgs.ArrayMax = 0;
        local_308.DateTime.Ticks = 0;
        local_308.TimeSpan.Ticks = 0;
        FDS_Text::SetTextFromStringID(&local_308,&local_2b8);
        FDS_Text::operator=(&this->ChatRoomName,&local_308);
        local_360 = FFieldNotificationClassDescriptor::ChatRoomName.BitNumber;
        local_368 = FFieldNotificationClassDescriptor::ChatRoomName.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_368);
        DestructItems<FDS_TextFormatArg,int>
                  ((FDS_TextFormatArg *)local_308.FormatArgs.AllocatorInstance.Data,
                   local_308.FormatArgs.ArrayNum);
        if ((FDS_TextFormatArg *)local_308.FormatArgs.AllocatorInstance.Data !=
            (FDS_TextFormatArg *)0x0) {
          FMemory::Free(local_308.FormatArgs.AllocatorInstance.Data);
        }
        if (local_308.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_308.UniqueString.Data.AllocatorInstance.Data);
        }
      }
      else {
        if ((local_378.Object == (FDS_ChatCustomData *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar6 = FDS_ChatCustomData::GetCustomTabName(local_378.Object,&local_2a8);
        SetChatRoomName(this,pFVar6);
        DestructItems<FDS_TextFormatArg,int>
                  ((FDS_TextFormatArg *)local_2a8.FormatArgs.AllocatorInstance.Data,
                   local_2a8.FormatArgs.ArrayNum);
        if ((FDS_TextFormatArg *)local_2a8.FormatArgs.AllocatorInstance.Data !=
            (FDS_TextFormatArg *)0x0) {
          FMemory::Free(local_2a8.FormatArgs.AllocatorInstance.Data);
        }
        if (local_2a8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2a8.UniqueString.Data.AllocatorInstance.Data);
        }
        if ((local_378.Object == (FDS_ChatCustomData *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar3 = FFieldNotificationClassDescriptor::bIsBookmark.BitNumber;
        FVar2 = FFieldNotificationClassDescriptor::bIsBookmark.FieldName;
        if (this->bIsBookmark != (local_378.Object)->bIsBookmark) {
          this->bIsBookmark = (local_378.Object)->bIsBookmark;
          local_350 = iVar3;
          local_358 = FVar2;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_358);
        }
        iVar3 = FFieldNotificationClassDescriptor::BookmarkVisibility.BitNumber;
        FVar2 = FFieldNotificationClassDescriptor::BookmarkVisibility.FieldName;
        if (this->BookmarkVisibility != SelfHitTestInvisible) {
          this->BookmarkVisibility = SelfHitTestInvisible;
          local_340 = iVar3;
          local_348 = FVar2;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_348);
        }
        iVar3 = FFieldNotificationClassDescriptor::CustomVisibility.BitNumber;
        FVar2 = FFieldNotificationClassDescriptor::CustomVisibility.FieldName;
        if (this->CustomVisibility != SelfHitTestInvisible) {
          this->CustomVisibility = SelfHitTestInvisible;
          local_330 = iVar3;
          local_338 = FVar2;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_338);
        }
        iVar3 = FFieldNotificationClassDescriptor::GroupVisibility.BitNumber;
        FVar2 = FFieldNotificationClassDescriptor::GroupVisibility.FieldName;
        if (this->GroupVisibility != Collapsed) {
          this->GroupVisibility = Collapsed;
          local_320 = iVar3;
          local_328 = FVar2;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_328);
        }
        iVar3 = FFieldNotificationClassDescriptor::ExitVisibility.BitNumber;
        FVar2 = FFieldNotificationClassDescriptor::ExitVisibility.FieldName;
        if (this->ExitVisibility != SelfHitTestInvisible) {
          this->ExitVisibility = SelfHitTestInvisible;
          local_310 = iVar3;
          local_318 = FVar2;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_318);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_378.SharedReferenceCount.ReferenceController);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// UpdateChatRoomInfo_Group @ 14bd8e220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Chat_ChatRoomInfo::UpdateChatRoomInfo_Group
          (UDS_VM_Chat_ChatRoomInfo *this,EDS_ChatMode param_1,
          TSharedPtr<FDS_ChattingTabData,1> *param_2)

{
  FDS_ChatConversation *pFVar1;
  code *pcVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  UDS_LogManager *pUVar6;
  UDS_ChattingManager *this_00;
  FString *pFVar7;
  undefined1 auStackY_3c8 [32];
  TSharedPtr<FDS_ChatRoomData,1> local_398;
  FName local_388;
  int local_380;
  FName local_378;
  int local_370;
  FName local_368;
  int local_360;
  FName local_358;
  int local_350;
  FName local_348;
  int local_340;
  FName local_338;
  int local_330;
  FDS_Text local_328;
  FDS_Text local_2d8;
  FDS_StringBaseID local_288;
  FString local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_3c8;
  if (param_2->Object == (FDS_ChattingTabData *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_268._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_268,"UDS_VM_Chat_ChatRoomInfo::UpdateChatRoomInfo_Group",0x32,Yes);
      UDS_LogManager::PrintLog
                (pUVar6,1,Warning,local_268.Ptr,0x17a,L"chattingTabData.IsValid() == false");
      if ((void *)local_268._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_268._padding_);
      }
    }
    goto LAB_14bd8e6ab;
  }
  this_00 = UDS_ChattingManager::GetInst();
  iVar4 = FFieldNotificationClassDescriptor::BookmarkVisibility.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::BookmarkVisibility.FieldName;
  if (this_00 == (UDS_ChattingManager *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_Chat_ChatRoomInfo::UpdateChatRoomInfo_Group",0x32,Yes);
      UDS_LogManager::PrintLog(pUVar6,1,Warning,local_148.Ptr,0x181,L"chattingManager == nullptr");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    goto LAB_14bd8e6ab;
  }
  if (this->BookmarkVisibility != SelfHitTestInvisible) {
    this->BookmarkVisibility = SelfHitTestInvisible;
    local_380 = iVar4;
    local_388 = FVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_388);
  }
  iVar4 = FFieldNotificationClassDescriptor::CustomVisibility.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::CustomVisibility.FieldName;
  if (this->CustomVisibility != Collapsed) {
    this->CustomVisibility = Collapsed;
    local_370 = iVar4;
    local_378 = FVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_378);
  }
  iVar4 = FFieldNotificationClassDescriptor::GroupVisibility.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::GroupVisibility.FieldName;
  if (this->GroupVisibility != SelfHitTestInvisible) {
    this->GroupVisibility = SelfHitTestInvisible;
    local_360 = iVar4;
    local_368 = FVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_368);
  }
  iVar4 = FFieldNotificationClassDescriptor::ExitVisibility.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::ExitVisibility.FieldName;
  if (this->ExitVisibility != Collapsed) {
    this->ExitVisibility = Collapsed;
    local_350 = iVar4;
    local_358 = FVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_358);
  }
  UDS_ChattingManager::GetChatRoomData(this_00,&local_398,Group,this->SubTabIndex);
  if (local_398.Object == (FDS_ChatRoomData *)0x0) {
LAB_14bd8e5f1:
    local_288.ID = 0x449b1;
    local_2d8.StringTableID = 0;
    local_2d8.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_2d8.StringEnumTableNameID.Number = 0;
    local_2d8.TimeExpressionType = None;
    local_2d8.IsExpression = false;
    local_2d8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2d8.UniqueString.Data.ArrayNum = 0;
    local_2d8.UniqueString.Data.ArrayMax = 0;
    local_2d8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2d8.FormatArgs.ArrayNum = 0;
    local_2d8.FormatArgs.ArrayMax = 0;
    local_288._padding_ = (longlong)&___7FDS_StringBaseID__6B_;
    local_2d8.StringTableType = None;
    local_2d8.DateTime.Ticks = 0;
    local_2d8.TimeSpan.Ticks = 0;
    FDS_Text::SetTextFromStringID(&local_2d8,&local_288);
    FDS_Text::operator=(&this->ChatRoomName,&local_2d8);
    local_330 = FFieldNotificationClassDescriptor::ChatRoomName.BitNumber;
    local_338 = FFieldNotificationClassDescriptor::ChatRoomName.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_338);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_2d8.FormatArgs.AllocatorInstance.Data,
               local_2d8.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_2d8.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0
       ) {
      FMemory::Free(local_2d8.FormatArgs.AllocatorInstance.Data);
    }
    if (local_2d8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2d8.UniqueString.Data.AllocatorInstance.Data);
    }
  }
  else {
    if ((local_398.Object == (FDS_ChatRoomData *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar5 = FDS_ChatRoomData::IsValidData(local_398.Object);
    if (!bVar5) goto LAB_14bd8e5f1;
    if ((local_398.Object == (FDS_ChatRoomData *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar7 = FDS_ChatRoomData::GetShowName(local_398.Object,&local_278);
    local_328.StringTableType = None;
    local_328.StringTableID = 0;
    local_328.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_328.StringEnumTableNameID.Number = 0;
    local_328.TimeExpressionType = None;
    local_328.IsExpression = false;
    local_328.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_328.UniqueString.Data.ArrayNum = 0;
    local_328.UniqueString.Data.ArrayMax = 0;
    local_328.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_328.FormatArgs.ArrayNum = 0;
    local_328.FormatArgs.ArrayMax = 0;
    local_328.DateTime.Ticks = 0;
    local_328.TimeSpan.Ticks = 0;
    FDS_Text::SetTextFromUniqueString(&local_328,pFVar7);
    FDS_Text::operator=(&this->ChatRoomName,&local_328);
    local_340 = FFieldNotificationClassDescriptor::ChatRoomName.BitNumber;
    local_348 = FFieldNotificationClassDescriptor::ChatRoomName.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_348);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_328.FormatArgs.AllocatorInstance.Data,
               local_328.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_328.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0
       ) {
      FMemory::Free(local_328.FormatArgs.AllocatorInstance.Data);
    }
    if (local_328.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_328.UniqueString.Data.AllocatorInstance.Data);
    }
    if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_278.Data.AllocatorInstance.Data);
    }
    if ((local_398.Object == (FDS_ChatRoomData *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar1 = ((local_398.Object)->ChatConversation).Object;
    if (pFVar1 == (FDS_ChatConversation *)0x0) {
      SetBookmark(this,false);
    }
    else {
      SetBookmark(this,pFVar1->bIsBookmark);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_398.SharedReferenceCount.ReferenceController);
LAB_14bd8e6ab:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// UpdateChatRoomInfo_Whisper @ 14bd8e6e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Chat_ChatRoomInfo::UpdateChatRoomInfo_Whisper
          (UDS_VM_Chat_ChatRoomInfo *this,EDS_ChatMode param_1,
          TSharedPtr<FDS_ChattingTabData,1> *param_2)

{
  FDS_ChatConversation *pFVar1;
  code *pcVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  UDS_LogManager *pUVar6;
  UDS_ChattingManager *this_00;
  FString *pFVar7;
  undefined1 auStackY_3c8 [32];
  TSharedPtr<FDS_ChatRoomData,1> local_398;
  FName local_388;
  int local_380;
  FName local_378;
  int local_370;
  FName local_368;
  int local_360;
  FName local_358;
  int local_350;
  FName local_348;
  int local_340;
  FName local_338;
  int local_330;
  FDS_Text local_328;
  FDS_Text local_2d8;
  FDS_StringBaseID local_288;
  FString local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_3c8;
  if (param_2->Object == (FDS_ChattingTabData *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_268._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_268,"UDS_VM_Chat_ChatRoomInfo::UpdateChatRoomInfo_Whisper",0x34,Yes);
      UDS_LogManager::PrintLog
                (pUVar6,1,Warning,local_268.Ptr,0x15a,L"chattingTabData.IsValid() == false");
      if ((void *)local_268._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_268._padding_);
      }
    }
    goto LAB_14bd8eb6b;
  }
  this_00 = UDS_ChattingManager::GetInst();
  iVar4 = FFieldNotificationClassDescriptor::BookmarkVisibility.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::BookmarkVisibility.FieldName;
  if (this_00 == (UDS_ChattingManager *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_Chat_ChatRoomInfo::UpdateChatRoomInfo_Whisper",0x34,Yes);
      UDS_LogManager::PrintLog(pUVar6,1,Warning,local_148.Ptr,0x161,L"chattingManager == nullptr");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    goto LAB_14bd8eb6b;
  }
  if (this->BookmarkVisibility != SelfHitTestInvisible) {
    this->BookmarkVisibility = SelfHitTestInvisible;
    local_380 = iVar4;
    local_388 = FVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_388);
  }
  iVar4 = FFieldNotificationClassDescriptor::CustomVisibility.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::CustomVisibility.FieldName;
  if (this->CustomVisibility != Collapsed) {
    this->CustomVisibility = Collapsed;
    local_370 = iVar4;
    local_378 = FVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_378);
  }
  iVar4 = FFieldNotificationClassDescriptor::GroupVisibility.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::GroupVisibility.FieldName;
  if (this->GroupVisibility != Collapsed) {
    this->GroupVisibility = Collapsed;
    local_360 = iVar4;
    local_368 = FVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_368);
  }
  iVar4 = FFieldNotificationClassDescriptor::ExitVisibility.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::ExitVisibility.FieldName;
  if (this->ExitVisibility != SelfHitTestInvisible) {
    this->ExitVisibility = SelfHitTestInvisible;
    local_350 = iVar4;
    local_358 = FVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_358);
  }
  UDS_ChattingManager::GetChatRoomData(this_00,&local_398,Whisper,this->SubTabIndex);
  if (local_398.Object == (FDS_ChatRoomData *)0x0) {
LAB_14bd8eab1:
    local_288.ID = 0x449b0;
    local_2d8.StringTableID = 0;
    local_2d8.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_2d8.StringEnumTableNameID.Number = 0;
    local_2d8.TimeExpressionType = None;
    local_2d8.IsExpression = false;
    local_2d8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2d8.UniqueString.Data.ArrayNum = 0;
    local_2d8.UniqueString.Data.ArrayMax = 0;
    local_2d8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2d8.FormatArgs.ArrayNum = 0;
    local_2d8.FormatArgs.ArrayMax = 0;
    local_288._padding_ = (longlong)&___7FDS_StringBaseID__6B_;
    local_2d8.StringTableType = None;
    local_2d8.DateTime.Ticks = 0;
    local_2d8.TimeSpan.Ticks = 0;
    FDS_Text::SetTextFromStringID(&local_2d8,&local_288);
    FDS_Text::operator=(&this->ChatRoomName,&local_2d8);
    local_330 = FFieldNotificationClassDescriptor::ChatRoomName.BitNumber;
    local_338 = FFieldNotificationClassDescriptor::ChatRoomName.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_338);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_2d8.FormatArgs.AllocatorInstance.Data,
               local_2d8.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_2d8.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0
       ) {
      FMemory::Free(local_2d8.FormatArgs.AllocatorInstance.Data);
    }
    if (local_2d8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2d8.UniqueString.Data.AllocatorInstance.Data);
    }
  }
  else {
    if ((local_398.Object == (FDS_ChatRoomData *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar5 = FDS_ChatRoomData::IsValidData(local_398.Object);
    if (!bVar5) goto LAB_14bd8eab1;
    if ((local_398.Object == (FDS_ChatRoomData *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar7 = FDS_ChatRoomData::GetShowName(local_398.Object,&local_278);
    local_328.StringTableType = None;
    local_328.StringTableID = 0;
    local_328.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_328.StringEnumTableNameID.Number = 0;
    local_328.TimeExpressionType = None;
    local_328.IsExpression = false;
    local_328.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_328.UniqueString.Data.ArrayNum = 0;
    local_328.UniqueString.Data.ArrayMax = 0;
    local_328.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_328.FormatArgs.ArrayNum = 0;
    local_328.FormatArgs.ArrayMax = 0;
    local_328.DateTime.Ticks = 0;
    local_328.TimeSpan.Ticks = 0;
    FDS_Text::SetTextFromUniqueString(&local_328,pFVar7);
    FDS_Text::operator=(&this->ChatRoomName,&local_328);
    local_340 = FFieldNotificationClassDescriptor::ChatRoomName.BitNumber;
    local_348 = FFieldNotificationClassDescriptor::ChatRoomName.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_348);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_328.FormatArgs.AllocatorInstance.Data,
               local_328.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_328.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0
       ) {
      FMemory::Free(local_328.FormatArgs.AllocatorInstance.Data);
    }
    if (local_328.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_328.UniqueString.Data.AllocatorInstance.Data);
    }
    if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_278.Data.AllocatorInstance.Data);
    }
    if ((local_398.Object == (FDS_ChatRoomData *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar1 = ((local_398.Object)->ChatConversation).Object;
    if (pFVar1 == (FDS_ChatConversation *)0x0) {
      SetBookmark(this,false);
    }
    else {
      SetBookmark(this,pFVar1->bIsBookmark);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_398.SharedReferenceCount.ReferenceController);
LAB_14bd8eb6b:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

