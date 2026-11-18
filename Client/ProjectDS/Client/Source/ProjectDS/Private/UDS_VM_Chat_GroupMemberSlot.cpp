// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 45

// SetPlayerNickname_WrapperImpl @ 14b611ff0

void __cdecl UDS_VM_Chat_GroupMemberSlot::SetPlayerNickname_WrapperImpl(void *param_1,void *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStackX_8 [8];
  FName FStack_28;
  int iStack_20;
  
  iVar4 = FFieldNotificationClassDescriptor::PlayerNickname.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::PlayerNickname.FieldName;
  bVar5 = FText::IdenticalTo((FText *)((longlong)param_1 + 0xa0),param_2,None);
  if (!bVar5) {
    plVar1 = *(longlong **)param_2;
    plVar2 = *(longlong **)((longlong)param_1 + 0xa0);
    if (plVar2 != plVar1) {
      *(longlong **)((longlong)param_1 + 0xa0) = plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1,auStackX_8);
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    *(undefined4 *)((longlong)param_1 + 0xa8) = *(undefined4 *)((longlong)param_2 + 8);
    FStack_28 = FVar3;
    iStack_20 = iVar4;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_28);
  }
  return;
}

// SetCharacterName_WrapperImpl @ 14b612000

void __cdecl UDS_VM_Chat_GroupMemberSlot::SetCharacterName_WrapperImpl(void *param_1,void *param_2)

{
  FName FVar1;
  int iVar2;
  FName FStack_18;
  int iStack_10;
  
  iVar2 = FFieldNotificationClassDescriptor::CharacterName.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::CharacterName.FieldName;
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 0xb0),param_2);
  FStack_18 = FVar1;
  iStack_10 = iVar2;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetCharacterLevel_WrapperImpl @ 14b612010

void __cdecl UDS_VM_Chat_GroupMemberSlot::SetCharacterLevel_WrapperImpl(void *param_1,void *param_2)

{
  SetCharacterLevel(param_1,*(int *)param_2);
  return;
}

// SetCharacterIcon_WrapperImpl @ 14b612020

void __cdecl UDS_VM_Chat_GroupMemberSlot::SetCharacterIcon_WrapperImpl(void *param_1,void *param_2)

{
  SetCharacterIcon(param_1,*(int *)param_2);
  return;
}

// SetbIsGroupOwner_WrapperImpl @ 14b612030

void __cdecl UDS_VM_Chat_GroupMemberSlot::SetbIsGroupOwner_WrapperImpl(void *param_1,void *param_2)

{
  SetIsGroupOwner(param_1,*(bool *)param_2);
  return;
}

// SetbIsSelectedMemberSlot_WrapperImpl @ 14b612040

void __cdecl
UDS_VM_Chat_GroupMemberSlot::SetbIsSelectedMemberSlot_WrapperImpl(void *param_1,void *param_2)

{
  SetSelectedMemberSlot(param_1,*(bool *)param_2);
  return;
}

// SetWhisperVisibility_WrapperImpl @ 14b612050

void __cdecl
UDS_VM_Chat_GroupMemberSlot::SetWhisperVisibility_WrapperImpl(void *param_1,void *param_2)

{
  SetWhisperVisibility(param_1,*(ESlateVisibility *)param_2);
  return;
}

// SetInviteVisibility_WrapperImpl @ 14b612060

void __cdecl
UDS_VM_Chat_GroupMemberSlot::SetInviteVisibility_WrapperImpl(void *param_1,void *param_2)

{
  SetInviteVisibility(param_1,*(ESlateVisibility *)param_2);
  return;
}

// SetChangeOwnerVisibility_WrapperImpl @ 14b612070

void __cdecl
UDS_VM_Chat_GroupMemberSlot::SetChangeOwnerVisibility_WrapperImpl(void *param_1,void *param_2)

{
  SetChangeOwnerVisibility(param_1,*(ESlateVisibility *)param_2);
  return;
}

// SetKickVisibility_WrapperImpl @ 14b612080

void __cdecl UDS_VM_Chat_GroupMemberSlot::SetKickVisibility_WrapperImpl(void *param_1,void *param_2)

{
  SetKickVisibility(param_1,*(ESlateVisibility *)param_2);
  return;
}

// SetMemberSlotVisibility_WrapperImpl @ 14b612090

void __cdecl
UDS_VM_Chat_GroupMemberSlot::SetMemberSlotVisibility_WrapperImpl(void *param_1,void *param_2)

{
  SetMemberSlotVisibility(param_1,*(ESlateVisibility *)param_2);
  return;
}

// SetClickWhisper_WrapperImpl @ 14b6120a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_Chat_GroupMemberSlot::SetClickWhisper_WrapperImpl(void *param_1,void *param_2)

{
  undefined1 *puVar1;
  FDS_EventDelegate<FString_const_&> *this;
  int iVar2;
  FScriptContainerElement *_Src;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  UDS_ChattingManager *this_00;
  UDS_LogManager *pUVar10;
  FDS_ChatUserInfo *pFVar11;
  FString *pFVar12;
  UDS_ChatEvent *pUVar13;
  ForAnyElementType FVar14;
  uint uVar15;
  longlong lVar16;
  undefined1 auStackY_208 [32];
  FDS_ChatUserInfo FStack_1c8;
  FDestructionSentinel FStack_198;
  FString FStack_180;
  TSharedPtr<FDS_ChatUserInfo,1> TStack_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_158;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_208;
  this_00 = UDS_ChattingManager::GetInst();
  if (this_00 == (UDS_ChattingManager *)0x0) {
    pUVar10 = UDS_LogManager::GetInst();
    if (pUVar10 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar10 = UDS_LogManager::GetInst();
    TStack_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_158,"UDS_VM_Chat_GroupMemberSlot::OnClickWhisper",0x2b,Yes);
    UDS_LogManager::PrintLog(pUVar10,1,Warning,TStack_158.Ptr,0x7e,L"chattingManager == nullptr");
    FVar14.Data = (FScriptContainerElement *)TStack_158._padding_;
  }
  else {
    FStack_1c8.UserID.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_1c8.Nickname.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_1c8.UserID.Data.ArrayNum = 0;
    FStack_1c8.UserID.Data.ArrayMax = 0;
    FStack_1c8.Nickname.Data.ArrayNum = 0;
    FStack_1c8.Nickname.Data.ArrayMax = 0;
    FStack_1c8.CharID = 0;
    FStack_1c8.CharLevel = 0;
    FStack_1c8.PlayerUID = 0;
    pFVar11 = (FDS_ChatUserInfo *)
              DS_Util::FromInt64(&FStack_180,*(long64 *)((longlong)param_1 + 0x210));
    if (&FStack_1c8 != pFVar11) {
      if (FStack_1c8.UserID.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_1c8.UserID.Data.AllocatorInstance.Data);
      }
      FStack_1c8.UserID.Data.AllocatorInstance.Data = (pFVar11->UserID).Data.AllocatorInstance.Data;
      (pFVar11->UserID).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FStack_1c8.UserID.Data.ArrayNum = (pFVar11->UserID).Data.ArrayNum;
      FStack_1c8.UserID.Data.ArrayMax = (pFVar11->UserID).Data.ArrayMax;
      (pFVar11->UserID).Data.ArrayNum = 0;
      (pFVar11->UserID).Data.ArrayMax = 0;
    }
    if (FStack_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_180.Data.AllocatorInstance.Data);
    }
    FStack_1c8.PlayerUID = *(long64 *)((longlong)param_1 + 0x210);
    pFVar12 = FText::ToString((FText *)((longlong)param_1 + 0xa0));
    if (&FStack_1c8.Nickname != pFVar12) {
      iVar2 = (pFVar12->Data).ArrayNum;
      _Src = (pFVar12->Data).AllocatorInstance.Data;
      FStack_1c8.Nickname.Data.ArrayNum = iVar2;
      if ((iVar2 == 0) && (FStack_1c8.Nickname.Data.ArrayMax == 0)) {
        FStack_1c8.Nickname.Data.ArrayNum = 0;
        FStack_1c8.Nickname.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar2,FStack_1c8.Nickname.Data.ArrayMax,
                   (ForAnyElementType *)&FStack_1c8.Nickname,iVar2,
                   &FStack_1c8.Nickname.Data.ArrayMax);
        if (iVar2 != 0) {
          memcpy(FStack_1c8.Nickname.Data.AllocatorInstance.Data,_Src,(longlong)iVar2 * 2);
        }
      }
    }
    FStack_1c8.CharLevel = *(int *)((longlong)param_1 + 0x100);
    FStack_1c8.CharID = *(int *)((longlong)param_1 + 0x218);
    UDS_ChattingManager::AddOrUpdateChatUserInfo(this_00,&TStack_170,&FStack_1c8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (TStack_170.SharedReferenceCount.ReferenceController);
    UDS_ChattingManager::SetInputChattingType(this_00,Whisper);
    pUVar13 = UDS_ChatEvent::GetEvent();
    if (pUVar13 != (UDS_ChatEvent *)0x0) {
      this = &pUVar13->OnSelectedWhisper;
      FText::ToString((FText *)((longlong)param_1 + 0xa0));
      bVar6 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this);
      if (bVar6) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
                   (FWriteAccessScope *)&FStack_198);
        puVar1 = &(pUVar13->OnSelectedWhisper).Delegate.field_0x1c;
        *(int *)puVar1 = *(int *)puVar1 + 1;
        bVar6 = false;
        uVar15 = *(int *)&(pUVar13->OnSelectedWhisper).Delegate.field_0x10 - 1;
        if (-1 < (int)uVar15) {
          lVar16 = (longlong)(int)uVar15 << 4;
          bVar6 = false;
          do {
            uVar9 = 0;
            if ((int)uVar15 < *(int *)&(pUVar13->OnSelectedWhisper).Delegate.field_0x10) {
              uVar9 = ~uVar15 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar3 = *(longlong *)&(pUVar13->OnSelectedWhisper).Delegate.field_0x8;
            if (((*(int *)(lVar16 + 8 + lVar3) == 0) ||
                (plVar4 = *(longlong **)(lVar16 + lVar3), plVar4 == (longlong *)0x0)) ||
               (cVar8 = (**(code **)(*plVar4 + 0x68))(), cVar8 == '\0')) {
              bVar6 = true;
            }
            lVar16 = lVar16 + -0x10;
            uVar15 = uVar15 - 1;
          } while (-1 < (int)uVar15);
        }
        puVar1 = &(pUVar13->OnSelectedWhisper).Delegate.field_0x1c;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        if (bVar6) {
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,false);
        }
        if (FStack_198.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_198.Accessor,&FStack_198);
        }
      }
    }
    FVar14.Data = FStack_1c8.UserID.Data.AllocatorInstance.Data;
    if (FStack_1c8.Nickname.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_1c8.Nickname.Data.AllocatorInstance.Data);
      FVar14.Data = FStack_1c8.UserID.Data.AllocatorInstance.Data;
    }
  }
  if (FVar14.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar14.Data);
  }
  return;
}

// SetClickInvite_WrapperImpl @ 14b6120b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_Chat_GroupMemberSlot::SetClickInvite_WrapperImpl(void *param_1,void *param_2)

{
  undefined1 *puVar1;
  FDS_EventDelegate<__int64_const_,FString_const_&> *this;
  int iVar2;
  FScriptContainerElement *_Src;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  UDS_ChattingManager *this_00;
  UDS_LogManager *pUVar10;
  FDS_ChatUserInfo *pFVar11;
  FString *pFVar12;
  UDS_ChatEvent *pUVar13;
  ForAnyElementType FVar14;
  uint uVar15;
  longlong lVar16;
  undefined1 auStackY_208 [32];
  FDS_ChatUserInfo FStack_1c8;
  undefined8 uStack_198;
  FDestructionSentinel FStack_190;
  FString FStack_178;
  TSharedPtr<FDS_ChatUserInfo,1> TStack_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_158;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_208;
  this_00 = UDS_ChattingManager::GetInst();
  if (this_00 == (UDS_ChattingManager *)0x0) {
    pUVar10 = UDS_LogManager::GetInst();
    if (pUVar10 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar10 = UDS_LogManager::GetInst();
    TStack_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_158,"UDS_VM_Chat_GroupMemberSlot::OnClickInvite",0x2a,Yes);
    UDS_LogManager::PrintLog(pUVar10,1,Warning,TStack_158.Ptr,0x97,L"chattingManager == nullptr");
    FVar14.Data = (FScriptContainerElement *)TStack_158._padding_;
  }
  else {
    FStack_1c8.UserID.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_1c8.Nickname.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_1c8.UserID.Data.ArrayNum = 0;
    FStack_1c8.UserID.Data.ArrayMax = 0;
    FStack_1c8.Nickname.Data.ArrayNum = 0;
    FStack_1c8.Nickname.Data.ArrayMax = 0;
    FStack_1c8.CharID = 0;
    FStack_1c8.CharLevel = 0;
    FStack_1c8.PlayerUID = 0;
    pFVar11 = (FDS_ChatUserInfo *)
              DS_Util::FromInt64(&FStack_178,*(long64 *)((longlong)param_1 + 0x210));
    if (&FStack_1c8 != pFVar11) {
      if (FStack_1c8.UserID.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_1c8.UserID.Data.AllocatorInstance.Data);
      }
      FStack_1c8.UserID.Data.AllocatorInstance.Data = (pFVar11->UserID).Data.AllocatorInstance.Data;
      (pFVar11->UserID).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FStack_1c8.UserID.Data.ArrayNum = (pFVar11->UserID).Data.ArrayNum;
      FStack_1c8.UserID.Data.ArrayMax = (pFVar11->UserID).Data.ArrayMax;
      (pFVar11->UserID).Data.ArrayNum = 0;
      (pFVar11->UserID).Data.ArrayMax = 0;
    }
    if (FStack_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_178.Data.AllocatorInstance.Data);
    }
    FStack_1c8.PlayerUID = *(long64 *)((longlong)param_1 + 0x210);
    pFVar12 = FText::ToString((FText *)((longlong)param_1 + 0xa0));
    if (&FStack_1c8.Nickname != pFVar12) {
      iVar2 = (pFVar12->Data).ArrayNum;
      _Src = (pFVar12->Data).AllocatorInstance.Data;
      FStack_1c8.Nickname.Data.ArrayNum = iVar2;
      if ((iVar2 == 0) && (FStack_1c8.Nickname.Data.ArrayMax == 0)) {
        FStack_1c8.Nickname.Data.ArrayNum = 0;
        FStack_1c8.Nickname.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar2,FStack_1c8.Nickname.Data.ArrayMax,
                   (ForAnyElementType *)&FStack_1c8.Nickname,iVar2,
                   &FStack_1c8.Nickname.Data.ArrayMax);
        if (iVar2 != 0) {
          memcpy(FStack_1c8.Nickname.Data.AllocatorInstance.Data,_Src,(longlong)iVar2 * 2);
        }
      }
    }
    FStack_1c8.CharLevel = *(int *)((longlong)param_1 + 0x100);
    FStack_1c8.CharID = *(int *)((longlong)param_1 + 0x218);
    UDS_ChattingManager::AddOrUpdateChatUserInfo(this_00,&TStack_168,&FStack_1c8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (TStack_168.SharedReferenceCount.ReferenceController);
    pUVar13 = UDS_ChatEvent::GetEvent();
    if (pUVar13 != (UDS_ChatEvent *)0x0) {
      this = &pUVar13->OnInviteGroup;
      pFVar12 = FText::ToString((FText *)((longlong)param_1 + 0xa0));
      uStack_198 = *(undefined8 *)((longlong)param_1 + 0x210);
      bVar6 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this);
      if (bVar6) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
                   (FWriteAccessScope *)&FStack_190);
        puVar1 = &(pUVar13->OnInviteGroup).Delegate.field_0x1c;
        *(int *)puVar1 = *(int *)puVar1 + 1;
        bVar6 = false;
        uVar15 = *(int *)&(pUVar13->OnInviteGroup).Delegate.field_0x10 - 1;
        if (-1 < (int)uVar15) {
          lVar16 = (longlong)(int)uVar15 << 4;
          bVar6 = false;
          do {
            uVar9 = 0;
            if ((int)uVar15 < *(int *)&(pUVar13->OnInviteGroup).Delegate.field_0x10) {
              uVar9 = ~uVar15 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar3 = *(longlong *)&(pUVar13->OnInviteGroup).Delegate.field_0x8;
            if (((*(int *)(lVar16 + 8 + lVar3) == 0) ||
                (plVar4 = *(longlong **)(lVar16 + lVar3), plVar4 == (longlong *)0x0)) ||
               (cVar8 = (**(code **)(*plVar4 + 0x68))(plVar4,uStack_198,pFVar12), cVar8 == '\0')) {
              bVar6 = true;
            }
            lVar16 = lVar16 + -0x10;
            uVar15 = uVar15 - 1;
          } while (-1 < (int)uVar15);
        }
        puVar1 = &(pUVar13->OnInviteGroup).Delegate.field_0x1c;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        if (bVar6) {
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,false);
        }
        if (FStack_190.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_190.Accessor,&FStack_190);
        }
      }
    }
    FVar14.Data = FStack_1c8.UserID.Data.AllocatorInstance.Data;
    if (FStack_1c8.Nickname.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_1c8.Nickname.Data.AllocatorInstance.Data);
      FVar14.Data = FStack_1c8.UserID.Data.AllocatorInstance.Data;
    }
  }
  if (FVar14.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar14.Data);
  }
  return;
}

// SetClickChangeOwner_WrapperImpl @ 14b612100

void __cdecl
UDS_VM_Chat_GroupMemberSlot::SetClickChangeOwner_WrapperImpl(void *param_1,void *param_2)

{
  FString *pFVar1;
  FString FStack_18;
  
  pFVar1 = FText::ToString((FText *)((longlong)param_1 + 0xa0));
  pFVar1 = ::FString::FString(&FStack_18,pFVar1);
  UDS_ChatUIPopupHelper::OpenGroupChangeOwnerPopup
            ((FString *)((longlong)param_1 + 0x200),*(long64 *)((longlong)param_1 + 0x210),pFVar1);
  return;
}

// SetClickKick_WrapperImpl @ 14b612110

void __cdecl UDS_VM_Chat_GroupMemberSlot::SetClickKick_WrapperImpl(void *param_1,void *param_2)

{
  UDS_ChatUIPopupHelper::OpenGroupMemberKickPopup
            ((FString *)((longlong)param_1 + 0x200),*(long64 *)((longlong)param_1 + 0x210));
  return;
}

// SetClickMemberSlot_WrapperImpl @ 14b612120

void __cdecl
UDS_VM_Chat_GroupMemberSlot::SetClickMemberSlot_WrapperImpl(void *param_1,void *param_2)

{
  UDS_ChatEvent *pUVar1;
  
  if (*(char *)((longlong)param_1 + 0x21c) == '\x01') {
    pUVar1 = UDS_ChatEvent::GetEvent();
    if (pUVar1 != (UDS_ChatEvent *)0x0) {
      FDS_EventDelegate<__int64_const_>::Broadcast
                (&pUVar1->OnSelectedGroupMember,*(long64 *)((longlong)param_1 + 0x210));
      return;
    }
  }
  return;
}

// StaticClass @ 14b612130

UClass * __cdecl UDS_VM_Chat_GroupMemberSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Chat_GroupMemberSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Chat_GroupMemberSlot",
               &Z_Registration_Info_UClass_UDS_VM_Chat_GroupMemberSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_Chat_GroupMemberSlot,0x220,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_Chat_GroupMemberSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_Chat_GroupMemberSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Chat_GroupMemberSlot.InnerSingleton;
}

// UDS_VM_Chat_GroupMemberSlot @ 14b614ec0

UDS_VM_Chat_GroupMemberSlot * __thiscall
UDS_VM_Chat_GroupMemberSlot::UDS_VM_Chat_GroupMemberSlot
          (UDS_VM_Chat_GroupMemberSlot *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_GroupMemberSlot__6B_;
  FText::FText(&this->PlayerNickname);
  (this->CharacterName).StringTableType = None;
  (this->CharacterName).StringTableID = 0;
  (this->CharacterName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->CharacterName).StringEnumTableNameID.Number = 0;
  (this->CharacterName).DateTime.Ticks = 0;
  (this->CharacterName).TimeSpan.Ticks = 0;
  (this->CharacterName).TimeExpressionType = None;
  (this->CharacterName).IsExpression = false;
  (this->CharacterName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CharacterName).UniqueString.Data.ArrayNum = 0;
  (this->CharacterName).UniqueString.Data.ArrayMax = 0;
  (this->CharacterName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CharacterName).FormatArgs.ArrayNum = 0;
  (this->CharacterName).FormatArgs.ArrayMax = 0;
  (this->ClickWhisper)._padding_ = '\0';
  (this->ClickWhisper).bIsCustomSelected = false;
  (this->ClickWhisper).bIsLacked = false;
  (this->ClickWhisper).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickWhisper).Delegate = 0;
  *(undefined8 *)&(this->ClickWhisper).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickWhisper).Delegate.field_0x10 = 0;
  (this->ClickInvite)._padding_ = '\0';
  (this->ClickInvite).bIsCustomSelected = false;
  (this->ClickInvite).bIsLacked = false;
  (this->ClickInvite).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickInvite).Delegate = 0;
  *(undefined8 *)&(this->ClickInvite).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickInvite).Delegate.field_0x10 = 0;
  (this->ClickChangeOwner)._padding_ = '\0';
  (this->ClickChangeOwner).bIsCustomSelected = false;
  (this->ClickChangeOwner).bIsLacked = false;
  (this->ClickChangeOwner).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickChangeOwner).Delegate = 0;
  *(undefined8 *)&(this->ClickChangeOwner).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickChangeOwner).Delegate.field_0x10 = 0;
  (this->ClickKick)._padding_ = '\0';
  (this->ClickKick).bIsCustomSelected = false;
  (this->ClickKick).bIsLacked = false;
  (this->ClickKick).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickKick).Delegate = 0;
  *(undefined8 *)&(this->ClickKick).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickKick).Delegate.field_0x10 = 0;
  (this->ClickMemberSlot)._padding_ = '\0';
  (this->ClickMemberSlot).bIsCustomSelected = false;
  (this->ClickMemberSlot).bIsLacked = false;
  (this->ClickMemberSlot).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickMemberSlot).Delegate = 0;
  *(undefined8 *)&(this->ClickMemberSlot).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickMemberSlot).Delegate.field_0x10 = 0;
  (this->FixedText_Lv).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Lv).StringEnumTableNameID.Number = 0;
  (this->FixedText_Lv).DateTime.Ticks = 0;
  (this->FixedText_Lv).TimeSpan.Ticks = 0;
  (this->FixedText_Lv).TimeExpressionType = None;
  (this->FixedText_Lv).IsExpression = false;
  (this->FixedText_Lv).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Lv).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Lv).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Lv).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Lv).FormatArgs.ArrayNum = 0;
  (this->FixedText_Lv).FormatArgs.ArrayMax = 0;
  (this->GroupID).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GroupID).Data.ArrayNum = 0;
  (this->GroupID).Data.ArrayMax = 0;
  this->PlayerUID = 0;
  this->CharacterID = 0;
  this->ChangeGroupOwner = false;
  (this->FixedText_Lv).StringTableType = StringUi;
  (this->FixedText_Lv).StringTableID = 0x27d9;
  return this;
}

// UDS_VM_Chat_GroupMemberSlot @ 14b615050

UDS_VM_Chat_GroupMemberSlot * __thiscall
UDS_VM_Chat_GroupMemberSlot::UDS_VM_Chat_GroupMemberSlot
          (UDS_VM_Chat_GroupMemberSlot *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_GroupMemberSlot__6B_;
  FText::FText(&this->PlayerNickname);
  (this->CharacterName).StringTableType = None;
  (this->CharacterName).StringTableID = 0;
  (this->CharacterName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->CharacterName).StringEnumTableNameID.Number = 0;
  (this->CharacterName).DateTime.Ticks = 0;
  (this->CharacterName).TimeSpan.Ticks = 0;
  (this->CharacterName).TimeExpressionType = None;
  (this->CharacterName).IsExpression = false;
  (this->CharacterName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CharacterName).UniqueString.Data.ArrayNum = 0;
  (this->CharacterName).UniqueString.Data.ArrayMax = 0;
  (this->CharacterName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CharacterName).FormatArgs.ArrayNum = 0;
  (this->CharacterName).FormatArgs.ArrayMax = 0;
  (this->ClickWhisper)._padding_ = '\0';
  (this->ClickWhisper).bIsCustomSelected = false;
  (this->ClickWhisper).bIsLacked = false;
  (this->ClickWhisper).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickWhisper).Delegate = 0;
  *(undefined8 *)&(this->ClickWhisper).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickWhisper).Delegate.field_0x10 = 0;
  (this->ClickInvite)._padding_ = '\0';
  (this->ClickInvite).bIsCustomSelected = false;
  (this->ClickInvite).bIsLacked = false;
  (this->ClickInvite).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickInvite).Delegate = 0;
  *(undefined8 *)&(this->ClickInvite).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickInvite).Delegate.field_0x10 = 0;
  (this->ClickChangeOwner)._padding_ = '\0';
  (this->ClickChangeOwner).bIsCustomSelected = false;
  (this->ClickChangeOwner).bIsLacked = false;
  (this->ClickChangeOwner).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickChangeOwner).Delegate = 0;
  *(undefined8 *)&(this->ClickChangeOwner).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickChangeOwner).Delegate.field_0x10 = 0;
  (this->ClickKick)._padding_ = '\0';
  (this->ClickKick).bIsCustomSelected = false;
  (this->ClickKick).bIsLacked = false;
  (this->ClickKick).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickKick).Delegate = 0;
  *(undefined8 *)&(this->ClickKick).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickKick).Delegate.field_0x10 = 0;
  (this->ClickMemberSlot)._padding_ = '\0';
  (this->ClickMemberSlot).bIsCustomSelected = false;
  (this->ClickMemberSlot).bIsLacked = false;
  (this->ClickMemberSlot).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickMemberSlot).Delegate = 0;
  *(undefined8 *)&(this->ClickMemberSlot).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickMemberSlot).Delegate.field_0x10 = 0;
  (this->FixedText_Lv).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Lv).StringEnumTableNameID.Number = 0;
  (this->FixedText_Lv).DateTime.Ticks = 0;
  (this->FixedText_Lv).TimeSpan.Ticks = 0;
  (this->FixedText_Lv).TimeExpressionType = None;
  (this->FixedText_Lv).IsExpression = false;
  (this->FixedText_Lv).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Lv).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Lv).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Lv).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Lv).FormatArgs.ArrayNum = 0;
  (this->FixedText_Lv).FormatArgs.ArrayMax = 0;
  (this->GroupID).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GroupID).Data.ArrayNum = 0;
  (this->GroupID).Data.ArrayMax = 0;
  this->PlayerUID = 0;
  this->CharacterID = 0;
  this->ChangeGroupOwner = false;
  (this->FixedText_Lv).StringTableType = StringUi;
  (this->FixedText_Lv).StringTableID = 0x27d9;
  return this;
}

// ~UDS_VM_Chat_GroupMemberSlot @ 14b616f40

void __thiscall
UDS_VM_Chat_GroupMemberSlot::~UDS_VM_Chat_GroupMemberSlot(UDS_VM_Chat_GroupMemberSlot *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  ITextData *pIVar3;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_GroupMemberSlot__6B_;
  pFVar1 = (this->GroupID).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Lv).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Lv).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Lv).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Lv).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickMemberSlot).Delegate);
  pvVar2 = *(void **)&(this->ClickMemberSlot).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickMemberSlot).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickKick).Delegate);
  pvVar2 = *(void **)&(this->ClickKick).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickKick).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickChangeOwner).Delegate);
  pvVar2 = *(void **)&(this->ClickChangeOwner).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickChangeOwner).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickInvite).Delegate);
  pvVar2 = *(void **)&(this->ClickInvite).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickInvite).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickWhisper).Delegate);
  pvVar2 = *(void **)&(this->ClickWhisper).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickWhisper).Delegate);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->CharacterName).FormatArgs.AllocatorInstance.Data,
             (this->CharacterName).FormatArgs.ArrayNum);
  pFVar1 = (this->CharacterName).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CharacterName).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar3 = (this->PlayerNickname).TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b619010

IClassDescriptor * __thiscall
UDS_VM_Chat_GroupMemberSlot::GetFieldNotificationDescriptor(UDS_VM_Chat_GroupMemberSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Chat_GroupMemberSlot::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b619800

UClass * __cdecl UDS_VM_Chat_GroupMemberSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Chat_GroupMemberSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Chat_GroupMemberSlot",
               &Z_Registration_Info_UClass_UDS_VM_Chat_GroupMemberSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_Chat_GroupMemberSlot,0x220,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_Chat_GroupMemberSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_Chat_GroupMemberSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Chat_GroupMemberSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Chat_GroupMemberSlot @ 14b61a1f0

void __cdecl UDS_VM_Chat_GroupMemberSlot::StaticRegisterNativesUDS_VM_Chat_GroupMemberSlot(void)

{
  return;
}

// BindModel @ 14bd47fa0

void __thiscall UDS_VM_Chat_GroupMemberSlot::BindModel(UDS_VM_Chat_GroupMemberSlot *this)

{
  UDS_ChatEvent *pUVar1;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_ChatEvent::GetEvent();
  if (pUVar1 != (UDS_ChatEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnSelectedGroupMember,
               this);
    TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Chat_GroupMemberSlot>
              ((TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnSelectedGroupMember,(UDS_VM_Chat_GroupMemberSlot *)&stack0x00000010,
               (pmf_518f90dc *)this);
  }
  return;
}

// OnClickChangeOwner @ 14bd72560

void __thiscall
UDS_VM_Chat_GroupMemberSlot::OnClickChangeOwner
          (UDS_VM_Chat_GroupMemberSlot *this,FDS_ButtonEventField *param_1)

{
  FString *pFVar1;
  FString local_18;
  
  pFVar1 = FText::ToString(&this->PlayerNickname);
  pFVar1 = ::FString::FString(&local_18,pFVar1);
  UDS_ChatUIPopupHelper::OpenGroupChangeOwnerPopup(&this->GroupID,this->PlayerUID,pFVar1);
  return;
}

// OnClickInvite @ 14bd731f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Chat_GroupMemberSlot::OnClickInvite
          (UDS_VM_Chat_GroupMemberSlot *this,FDS_ButtonEventField *param_1)

{
  undefined1 *puVar1;
  FDS_EventDelegate<__int64_const_,FString_const_&> *this_00;
  int iVar2;
  FScriptContainerElement *_Src;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  UDS_ChattingManager *this_01;
  UDS_LogManager *pUVar10;
  FDS_ChatUserInfo *pFVar11;
  FString *pFVar12;
  UDS_ChatEvent *pUVar13;
  ForAnyElementType FVar14;
  uint uVar15;
  longlong lVar16;
  undefined1 auStackY_208 [32];
  FDS_ChatUserInfo local_1c8;
  long64 local_198;
  FDestructionSentinel local_190;
  FString local_178;
  TSharedPtr<FDS_ChatUserInfo,1> local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_208;
  this_01 = UDS_ChattingManager::GetInst();
  if (this_01 == (UDS_ChattingManager *)0x0) {
    pUVar10 = UDS_LogManager::GetInst();
    if (pUVar10 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar10 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_VM_Chat_GroupMemberSlot::OnClickInvite",0x2a,Yes);
    UDS_LogManager::PrintLog(pUVar10,1,Warning,local_158.Ptr,0x97,L"chattingManager == nullptr");
    FVar14.Data = (FScriptContainerElement *)local_158._padding_;
  }
  else {
    local_1c8.UserID.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1c8.Nickname.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1c8.UserID.Data.ArrayNum = 0;
    local_1c8.UserID.Data.ArrayMax = 0;
    local_1c8.Nickname.Data.ArrayNum = 0;
    local_1c8.Nickname.Data.ArrayMax = 0;
    local_1c8.CharID = 0;
    local_1c8.CharLevel = 0;
    local_1c8.PlayerUID = 0;
    pFVar11 = (FDS_ChatUserInfo *)DS_Util::FromInt64(&local_178,this->PlayerUID);
    if (&local_1c8 != pFVar11) {
      if (local_1c8.UserID.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.UserID.Data.AllocatorInstance.Data);
      }
      local_1c8.UserID.Data.AllocatorInstance.Data = (pFVar11->UserID).Data.AllocatorInstance.Data;
      (pFVar11->UserID).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1c8.UserID.Data.ArrayNum = (pFVar11->UserID).Data.ArrayNum;
      local_1c8.UserID.Data.ArrayMax = (pFVar11->UserID).Data.ArrayMax;
      (pFVar11->UserID).Data.ArrayNum = 0;
      (pFVar11->UserID).Data.ArrayMax = 0;
    }
    if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data.AllocatorInstance.Data);
    }
    local_1c8.PlayerUID = this->PlayerUID;
    pFVar12 = FText::ToString(&this->PlayerNickname);
    if (&local_1c8.Nickname != pFVar12) {
      iVar2 = (pFVar12->Data).ArrayNum;
      _Src = (pFVar12->Data).AllocatorInstance.Data;
      local_1c8.Nickname.Data.ArrayNum = iVar2;
      if ((iVar2 == 0) && (local_1c8.Nickname.Data.ArrayMax == 0)) {
        local_1c8.Nickname.Data.ArrayNum = 0;
        local_1c8.Nickname.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar2,local_1c8.Nickname.Data.ArrayMax,
                   (ForAnyElementType *)&local_1c8.Nickname,iVar2,&local_1c8.Nickname.Data.ArrayMax)
        ;
        if (iVar2 != 0) {
          memcpy(local_1c8.Nickname.Data.AllocatorInstance.Data,_Src,(longlong)iVar2 * 2);
        }
      }
    }
    local_1c8.CharLevel = this->CharacterLevel;
    local_1c8.CharID = this->CharacterID;
    UDS_ChattingManager::AddOrUpdateChatUserInfo(this_01,&local_168,&local_1c8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_168.SharedReferenceCount.ReferenceController);
    pUVar13 = UDS_ChatEvent::GetEvent();
    if (pUVar13 != (UDS_ChatEvent *)0x0) {
      this_00 = &pUVar13->OnInviteGroup;
      pFVar12 = FText::ToString(&this->PlayerNickname);
      local_198 = this->PlayerUID;
      bVar6 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00);
      if (bVar6) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                   (FWriteAccessScope *)&local_190);
        puVar1 = &(pUVar13->OnInviteGroup).Delegate.field_0x1c;
        *(int *)puVar1 = *(int *)puVar1 + 1;
        bVar6 = false;
        uVar15 = *(int *)&(pUVar13->OnInviteGroup).Delegate.field_0x10 - 1;
        if (-1 < (int)uVar15) {
          lVar16 = (longlong)(int)uVar15 << 4;
          bVar6 = false;
          do {
            uVar9 = 0;
            if ((int)uVar15 < *(int *)&(pUVar13->OnInviteGroup).Delegate.field_0x10) {
              uVar9 = ~uVar15 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar3 = *(longlong *)&(pUVar13->OnInviteGroup).Delegate.field_0x8;
            if (((*(int *)(lVar16 + 8 + lVar3) == 0) ||
                (plVar4 = *(longlong **)(lVar16 + lVar3), plVar4 == (longlong *)0x0)) ||
               (cVar8 = (**(code **)(*plVar4 + 0x68))(plVar4,local_198,pFVar12), cVar8 == '\0')) {
              bVar6 = true;
            }
            lVar16 = lVar16 + -0x10;
            uVar15 = uVar15 - 1;
          } while (-1 < (int)uVar15);
        }
        puVar1 = &(pUVar13->OnInviteGroup).Delegate.field_0x1c;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        if (bVar6) {
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
        }
        if (local_190.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_190.Accessor,&local_190);
        }
      }
    }
    FVar14.Data = local_1c8.UserID.Data.AllocatorInstance.Data;
    if (local_1c8.Nickname.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Nickname.Data.AllocatorInstance.Data);
      FVar14.Data = local_1c8.UserID.Data.AllocatorInstance.Data;
    }
  }
  if (FVar14.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar14.Data);
  }
  return;
}

// OnClickKick @ 14bd73550

void __thiscall
UDS_VM_Chat_GroupMemberSlot::OnClickKick
          (UDS_VM_Chat_GroupMemberSlot *this,FDS_ButtonEventField *param_1)

{
  UDS_ChatUIPopupHelper::OpenGroupMemberKickPopup(&this->GroupID,this->PlayerUID);
  return;
}

// OnClickMemberSlot @ 14bd73820

void __thiscall
UDS_VM_Chat_GroupMemberSlot::OnClickMemberSlot
          (UDS_VM_Chat_GroupMemberSlot *this,FDS_ButtonEventField *param_1)

{
  UDS_ChatEvent *pUVar1;
  
  if (this->ChangeGroupOwner == true) {
    pUVar1 = UDS_ChatEvent::GetEvent();
    if (pUVar1 != (UDS_ChatEvent *)0x0) {
      FDS_EventDelegate<__int64_const_>::Broadcast(&pUVar1->OnSelectedGroupMember,this->PlayerUID);
      return;
    }
  }
  return;
}

// OnClickWhisper @ 14bd746c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Chat_GroupMemberSlot::OnClickWhisper
          (UDS_VM_Chat_GroupMemberSlot *this,FDS_ButtonEventField *param_1)

{
  undefined1 *puVar1;
  FDS_EventDelegate<FString_const_&> *this_00;
  int iVar2;
  FScriptContainerElement *_Src;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  UDS_ChattingManager *this_01;
  UDS_LogManager *pUVar10;
  FDS_ChatUserInfo *pFVar11;
  FString *pFVar12;
  UDS_ChatEvent *pUVar13;
  ForAnyElementType FVar14;
  uint uVar15;
  longlong lVar16;
  undefined1 auStackY_208 [32];
  FDS_ChatUserInfo local_1c8;
  FDestructionSentinel local_198;
  FString local_180;
  TSharedPtr<FDS_ChatUserInfo,1> local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_208;
  this_01 = UDS_ChattingManager::GetInst();
  if (this_01 == (UDS_ChattingManager *)0x0) {
    pUVar10 = UDS_LogManager::GetInst();
    if (pUVar10 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar10 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_VM_Chat_GroupMemberSlot::OnClickWhisper",0x2b,Yes);
    UDS_LogManager::PrintLog(pUVar10,1,Warning,local_158.Ptr,0x7e,L"chattingManager == nullptr");
    FVar14.Data = (FScriptContainerElement *)local_158._padding_;
  }
  else {
    local_1c8.UserID.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1c8.Nickname.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1c8.UserID.Data.ArrayNum = 0;
    local_1c8.UserID.Data.ArrayMax = 0;
    local_1c8.Nickname.Data.ArrayNum = 0;
    local_1c8.Nickname.Data.ArrayMax = 0;
    local_1c8.CharID = 0;
    local_1c8.CharLevel = 0;
    local_1c8.PlayerUID = 0;
    pFVar11 = (FDS_ChatUserInfo *)DS_Util::FromInt64(&local_180,this->PlayerUID);
    if (&local_1c8 != pFVar11) {
      if (local_1c8.UserID.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.UserID.Data.AllocatorInstance.Data);
      }
      local_1c8.UserID.Data.AllocatorInstance.Data = (pFVar11->UserID).Data.AllocatorInstance.Data;
      (pFVar11->UserID).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1c8.UserID.Data.ArrayNum = (pFVar11->UserID).Data.ArrayNum;
      local_1c8.UserID.Data.ArrayMax = (pFVar11->UserID).Data.ArrayMax;
      (pFVar11->UserID).Data.ArrayNum = 0;
      (pFVar11->UserID).Data.ArrayMax = 0;
    }
    if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_180.Data.AllocatorInstance.Data);
    }
    local_1c8.PlayerUID = this->PlayerUID;
    pFVar12 = FText::ToString(&this->PlayerNickname);
    if (&local_1c8.Nickname != pFVar12) {
      iVar2 = (pFVar12->Data).ArrayNum;
      _Src = (pFVar12->Data).AllocatorInstance.Data;
      local_1c8.Nickname.Data.ArrayNum = iVar2;
      if ((iVar2 == 0) && (local_1c8.Nickname.Data.ArrayMax == 0)) {
        local_1c8.Nickname.Data.ArrayNum = 0;
        local_1c8.Nickname.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar2,local_1c8.Nickname.Data.ArrayMax,
                   (ForAnyElementType *)&local_1c8.Nickname,iVar2,&local_1c8.Nickname.Data.ArrayMax)
        ;
        if (iVar2 != 0) {
          memcpy(local_1c8.Nickname.Data.AllocatorInstance.Data,_Src,(longlong)iVar2 * 2);
        }
      }
    }
    local_1c8.CharLevel = this->CharacterLevel;
    local_1c8.CharID = this->CharacterID;
    UDS_ChattingManager::AddOrUpdateChatUserInfo(this_01,&local_170,&local_1c8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_170.SharedReferenceCount.ReferenceController);
    UDS_ChattingManager::SetInputChattingType(this_01,Whisper);
    pUVar13 = UDS_ChatEvent::GetEvent();
    if (pUVar13 != (UDS_ChatEvent *)0x0) {
      this_00 = &pUVar13->OnSelectedWhisper;
      FText::ToString(&this->PlayerNickname);
      bVar6 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00);
      if (bVar6) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                   (FWriteAccessScope *)&local_198);
        puVar1 = &(pUVar13->OnSelectedWhisper).Delegate.field_0x1c;
        *(int *)puVar1 = *(int *)puVar1 + 1;
        bVar6 = false;
        uVar15 = *(int *)&(pUVar13->OnSelectedWhisper).Delegate.field_0x10 - 1;
        if (-1 < (int)uVar15) {
          lVar16 = (longlong)(int)uVar15 << 4;
          bVar6 = false;
          do {
            uVar9 = 0;
            if ((int)uVar15 < *(int *)&(pUVar13->OnSelectedWhisper).Delegate.field_0x10) {
              uVar9 = ~uVar15 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar3 = *(longlong *)&(pUVar13->OnSelectedWhisper).Delegate.field_0x8;
            if (((*(int *)(lVar16 + 8 + lVar3) == 0) ||
                (plVar4 = *(longlong **)(lVar16 + lVar3), plVar4 == (longlong *)0x0)) ||
               (cVar8 = (**(code **)(*plVar4 + 0x68))(), cVar8 == '\0')) {
              bVar6 = true;
            }
            lVar16 = lVar16 + -0x10;
            uVar15 = uVar15 - 1;
          } while (-1 < (int)uVar15);
        }
        puVar1 = &(pUVar13->OnSelectedWhisper).Delegate.field_0x1c;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        if (bVar6) {
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
        }
        if (local_198.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_198.Accessor,&local_198);
        }
      }
    }
    FVar14.Data = local_1c8.UserID.Data.AllocatorInstance.Data;
    if (local_1c8.Nickname.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Nickname.Data.AllocatorInstance.Data);
      FVar14.Data = local_1c8.UserID.Data.AllocatorInstance.Data;
    }
  }
  if (FVar14.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar14.Data);
  }
  return;
}

// OnSelectedGroupMember @ 14bd7d320

void __thiscall
UDS_VM_Chat_GroupMemberSlot::OnSelectedGroupMember(UDS_VM_Chat_GroupMemberSlot *this,long64 param_1)

{
  bool bVar1;
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::bIsSelectedMemberSlot.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bIsSelectedMemberSlot.FieldName;
  bVar1 = this->PlayerUID == param_1;
  if (this->ChangeGroupOwner == true) {
    if (this->bIsSelectedMemberSlot == bVar1) {
      return;
    }
    this->bIsSelectedMemberSlot = bVar1;
  }
  else {
    if (this->bIsSelectedMemberSlot == false) {
      return;
    }
    this->bIsSelectedMemberSlot = false;
  }
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnSetViewModel @ 14bd80e40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Chat_GroupMemberSlot::OnSetViewModel
          (UDS_VM_Chat_GroupMemberSlot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  UDS_LogManager *pUVar6;
  FName *pFVar7;
  int iVar8;
  undefined1 auStackY_1b8 [32];
  TSharedPtr<FDS_ViewModelContext_ChatGroupMember,1> local_188;
  FName local_178;
  int local_170;
  FName local_168;
  int local_160;
  TSharedPtr<FDS_ViewModelContext,1> local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  local_158.Object = param_1->Object;
  local_158.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_158.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_ChatGroupMember>(&local_188,&local_158);
  if (local_188.Object == (FDS_ViewModelContext_ChatGroupMember *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_Chat_GroupMemberSlot::OnSetViewModel",0x2b,Yes);
      UDS_LogManager::PrintLog
                (pUVar6,1,Warning,local_148.Ptr,0x18,L"chatGroupMemberContext.IsValid() == false");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    goto LAB_14bd81043;
  }
  UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,SelfHitTestInvisible);
  if (local_188.Object == (FDS_ViewModelContext_ChatGroupMember *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar1 = ((local_188.Object)->GroupID).Data.ArrayNum;
  iVar8 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar8 = 0;
  }
  ::FString::AssignRange
            (&this->GroupID,(wchar_t *)((local_188.Object)->GroupID).Data.AllocatorInstance.Data,
             iVar8);
  if (local_188.Object == (FDS_ViewModelContext_ChatGroupMember *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this->PlayerUID = (local_188.Object)->PlayerUID;
  bVar5 = (local_188.Object)->ChangeGroupOwner;
  this->ChangeGroupOwner = bVar5;
  iVar8 = FFieldNotificationClassDescriptor::bIsSelectedMemberSlot.BitNumber;
  FVar4 = FFieldNotificationClassDescriptor::bIsSelectedMemberSlot.FieldName;
  if (bVar5 == true) {
    if (this->bIsSelectedMemberSlot != (local_188.Object)->IsSelected) {
      this->bIsSelectedMemberSlot = (local_188.Object)->IsSelected;
      pFVar7 = &local_178;
      local_178 = FVar4;
      local_170 = iVar8;
LAB_14bd81030:
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,pFVar7);
    }
  }
  else if (this->bIsSelectedMemberSlot != false) {
    this->bIsSelectedMemberSlot = false;
    pFVar7 = &local_168;
    local_168 = FVar4;
    local_160 = iVar8;
    goto LAB_14bd81030;
  }
  UpdateGroupMemberSlot(this);
LAB_14bd81043:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_188.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetChangeOwnerVisibility @ 14bd86ee0

void __thiscall
UDS_VM_Chat_GroupMemberSlot::SetChangeOwnerVisibility
          (UDS_VM_Chat_GroupMemberSlot *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::ChangeOwnerVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ChangeOwnerVisibility.FieldName;
  if (this->ChangeOwnerVisibility != param_1) {
    this->ChangeOwnerVisibility = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetCharacterIcon @ 14bd86f30

void __thiscall
UDS_VM_Chat_GroupMemberSlot::SetCharacterIcon(UDS_VM_Chat_GroupMemberSlot *this,int param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::CharacterIcon.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::CharacterIcon.FieldName;
  if (this->CharacterIcon != param_1) {
    this->CharacterIcon = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetCharacterLevel @ 14bd86f80

void __thiscall
UDS_VM_Chat_GroupMemberSlot::SetCharacterLevel(UDS_VM_Chat_GroupMemberSlot *this,int param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::CharacterLevel.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::CharacterLevel.FieldName;
  if (this->CharacterLevel != param_1) {
    this->CharacterLevel = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetCharacterName @ 14bd86fd0

void __thiscall
UDS_VM_Chat_GroupMemberSlot::SetCharacterName(UDS_VM_Chat_GroupMemberSlot *this,FDS_Text *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::CharacterName.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::CharacterName.FieldName;
  FDS_Text::operator=(&this->CharacterName,param_1);
  local_18 = FVar1;
  local_10 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetInviteVisibility @ 14bd899d0

void __thiscall
UDS_VM_Chat_GroupMemberSlot::SetInviteVisibility
          (UDS_VM_Chat_GroupMemberSlot *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::InviteVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::InviteVisibility.FieldName;
  if (this->InviteVisibility != param_1) {
    this->InviteVisibility = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetIsGroupOwner @ 14bd89b00

void __thiscall
UDS_VM_Chat_GroupMemberSlot::SetIsGroupOwner(UDS_VM_Chat_GroupMemberSlot *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::bIsGroupOwner.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bIsGroupOwner.FieldName;
  if (this->bIsGroupOwner != param_1) {
    this->bIsGroupOwner = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetKickVisibility @ 14bd8a180

void __thiscall
UDS_VM_Chat_GroupMemberSlot::SetKickVisibility
          (UDS_VM_Chat_GroupMemberSlot *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::KickVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::KickVisibility.FieldName;
  if (this->KickVisibility != param_1) {
    this->KickVisibility = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetMemberSlotVisibility @ 14bd8a3a0

void __thiscall
UDS_VM_Chat_GroupMemberSlot::SetMemberSlotVisibility
          (UDS_VM_Chat_GroupMemberSlot *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::MemberSlotVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::MemberSlotVisibility.FieldName;
  if (this->MemberSlotVisibility != param_1) {
    this->MemberSlotVisibility = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetPlayerNickname @ 14bd8a510

void __thiscall
UDS_VM_Chat_GroupMemberSlot::SetPlayerNickname(UDS_VM_Chat_GroupMemberSlot *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  FName local_28;
  int local_20;
  
  iVar4 = FFieldNotificationClassDescriptor::PlayerNickname.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::PlayerNickname.FieldName;
  bVar5 = FText::IdenticalTo(&this->PlayerNickname,param_1,None);
  if (!bVar5) {
    pIVar1 = (param_1->TextData).Reference;
    pIVar2 = (this->PlayerNickname).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->PlayerNickname).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->PlayerNickname).Flags = param_1->Flags;
    local_28 = FVar3;
    local_20 = iVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  return;
}

// SetSelectedMemberSlot @ 14bd8a7c0

void __thiscall
UDS_VM_Chat_GroupMemberSlot::SetSelectedMemberSlot(UDS_VM_Chat_GroupMemberSlot *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::bIsSelectedMemberSlot.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bIsSelectedMemberSlot.FieldName;
  if (this->ChangeGroupOwner == true) {
    if (this->bIsSelectedMemberSlot == param_1) {
      return;
    }
    this->bIsSelectedMemberSlot = param_1;
  }
  else {
    if (this->bIsSelectedMemberSlot == false) {
      return;
    }
    this->bIsSelectedMemberSlot = false;
  }
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetWhisperVisibility @ 14bd8aec0

void __thiscall
UDS_VM_Chat_GroupMemberSlot::SetWhisperVisibility
          (UDS_VM_Chat_GroupMemberSlot *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::WhisperVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::WhisperVisibility.FieldName;
  if (this->WhisperVisibility != param_1) {
    this->WhisperVisibility = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// UnbindModel @ 14bd8c120

void __thiscall UDS_VM_Chat_GroupMemberSlot::UnbindModel(UDS_VM_Chat_GroupMemberSlot *this)

{
  UDS_ChatEvent *pUVar1;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_ChatEvent::GetEvent();
  if (pUVar1 != (UDS_ChatEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnSelectedGroupMember,
               this);
    return;
  }
  return;
}

// UpdateGroupMemberSlot @ 14bd906c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Chat_GroupMemberSlot::UpdateGroupMemberSlot(UDS_VM_Chat_GroupMemberSlot *this)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FDS_ChatUserInfo *pFVar3;
  longlong lVar4;
  code *pcVar5;
  FName FVar6;
  bool bVar7;
  UDS_ChattingManager *this_00;
  UDS_LogManager *pUVar8;
  UObject *pUVar9;
  FText *pFVar10;
  FDS_CharacterBaseTableRow *pFVar11;
  FDS_CharacterSkinTableRow *pFVar12;
  longlong lVar13;
  ESlateVisibility EVar14;
  longlong lVar15;
  undefined1 auStackY_368 [32];
  TSharedPtr<FDS_ChatUserInfo,1> local_338;
  TSharedPtr<FDS_ChatRoomData,1> local_328;
  FWeakObjectPtr local_318 [2];
  FName local_308;
  int local_300;
  FName local_2f8;
  int local_2f0;
  FName local_2e8;
  int local_2e0;
  FDS_Text local_2d8;
  FText local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_368;
  this_00 = UDS_ChattingManager::GetInst();
  if (this_00 == (UDS_ChattingManager *)0x0) {
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 != (UDS_LogManager *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      local_278._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_278,"UDS_VM_Chat_GroupMemberSlot::UpdateGroupMemberSlot",0x32,Yes);
      UDS_LogManager::PrintLog(pUVar8,1,Warning,local_278.Ptr,0xc3,L"chattingManager == nullptr");
      if ((void *)local_278._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_278._padding_);
      }
    }
  }
  else {
    UDS_ChattingManager::GetChatRoomDataByGroupID(this_00,&local_328,&this->GroupID);
    if (local_328.Object == (FDS_ChatRoomData *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      if (pUVar8 != (UDS_LogManager *)0x0) {
        pUVar8 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_VM_Chat_GroupMemberSlot::UpdateGroupMemberSlot",0x32,Yes);
        UDS_LogManager::PrintLog
                  (pUVar8,1,Warning,local_158.Ptr,0xca,L"groupChatRoomData.IsValid() == false");
        if ((void *)local_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_158._padding_);
        }
      }
    }
    else {
      if ((local_328.Object == (FDS_ChatRoomData *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FDS_ChatRoomData::GetGroupMember(local_328.Object,&local_338,this->PlayerUID);
      if (local_338.Object == (FDS_ChatUserInfo *)0x0) {
        UpdateSearchPlayerInfo(this);
      }
      else {
        lVar15 = 0;
        UDS_PlayerData::GetMainPlayerData();
        bVar7 = FWeakObjectPtr::IsValid(local_318);
        lVar13 = lVar15;
        if (bVar7) {
          pUVar9 = FWeakObjectPtr::Get(local_318);
          lVar13 = *(longlong *)&pUVar9[6].field_0x8;
        }
        if ((local_328.Object == (FDS_ChatRoomData *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pTVar2 = ((local_328.Object)->GroupOwner).SharedReferenceCount.ReferenceController;
        pFVar3 = ((local_328.Object)->GroupOwner).Object;
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        FVar6 = FFieldNotificationClassDescriptor::bIsGroupOwner.FieldName;
        if (pFVar3 != (FDS_ChatUserInfo *)0x0) {
          lVar15 = pFVar3->PlayerUID;
        }
        lVar4 = this->PlayerUID;
        if (this->bIsGroupOwner != (lVar15 == lVar4)) {
          local_300 = FFieldNotificationClassDescriptor::bIsGroupOwner.BitNumber;
          this->bIsGroupOwner = lVar15 == lVar4;
          local_308 = FVar6;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_308);
        }
        if ((local_338.Object == (FDS_ChatUserInfo *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar10 = FText::FromString(&local_288,&(local_338.Object)->Nickname);
        SetPlayerNickname(this,pFVar10);
        if (local_288.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_288.TextData.Reference + 0x10))();
        }
        if ((local_338.Object == (FDS_ChatUserInfo *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar1 = FFieldNotificationClassDescriptor::CharacterLevel.BitNumber;
        FVar6 = FFieldNotificationClassDescriptor::CharacterLevel.FieldName;
        if (this->CharacterLevel != (local_338.Object)->CharLevel) {
          this->CharacterLevel = (local_338.Object)->CharLevel;
          local_2f0 = iVar1;
          local_2f8 = FVar6;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_2f8);
        }
        if ((local_338.Object == (FDS_ChatUserInfo *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar1 = (local_338.Object)->CharID;
        this->CharacterID = iVar1;
        pFVar11 = FDS_CharacterBaseTableRow::GetRef((longlong)iVar1,true);
        local_2d8.StringTableType = None;
        local_2d8.StringTableID = 0;
        local_2d8.StringEnumTableNameID.ComparisonIndex.Value = 0;
        local_2d8.StringEnumTableNameID.Number = 0;
        local_2d8.TimeExpressionType = None;
        local_2d8.DateTime.Ticks = 0;
        local_2d8.TimeSpan.Ticks = 0;
        local_2d8.IsExpression = false;
        local_2d8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_2d8.UniqueString.Data.ArrayNum = 0;
        local_2d8.UniqueString.Data.ArrayMax = 0;
        local_2d8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_2d8.FormatArgs.ArrayNum = 0;
        local_2d8.FormatArgs.ArrayMax = 0;
        FDS_Text::SetTextFromStringID(&local_2d8,&pFVar11->ID_Name);
        SetCharacterName(this,&local_2d8);
        DestructItems<FDS_TextFormatArg,int>
                  ((FDS_TextFormatArg *)local_2d8.FormatArgs.AllocatorInstance.Data,
                   local_2d8.FormatArgs.ArrayNum);
        if ((FDS_TextFormatArg *)local_2d8.FormatArgs.AllocatorInstance.Data !=
            (FDS_TextFormatArg *)0x0) {
          FMemory::Free(local_2d8.FormatArgs.AllocatorInstance.Data);
        }
        if (local_2d8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2d8.UniqueString.Data.AllocatorInstance.Data);
        }
        pFVar12 = FDS_CharacterSkinTableRow::GetRef((longlong)pFVar11->ID_DefaultSkin,true);
        iVar1 = FFieldNotificationClassDescriptor::CharacterIcon.BitNumber;
        FVar6 = FFieldNotificationClassDescriptor::CharacterIcon.FieldName;
        if (this->CharacterIcon != pFVar12->ID_CardImg) {
          this->CharacterIcon = pFVar12->ID_CardImg;
          local_2e0 = iVar1;
          local_2e8 = FVar6;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_2e8);
        }
        if (this->ChangeGroupOwner == true) {
          SetWhisperVisibility(this,Collapsed);
          SetInviteVisibility(this,Collapsed);
          SetChangeOwnerVisibility(this,Collapsed);
          SetKickVisibility(this,Collapsed);
          SetMemberSlotVisibility(this,SelfHitTestInvisible);
          if (lVar13 == lVar4) {
            UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,Collapsed);
          }
        }
        else {
          EVar14 = SelfHitTestInvisible;
          if (lVar13 == lVar4) {
            EVar14 = Collapsed;
          }
          SetWhisperVisibility(this,EVar14);
          EVar14 = Collapsed;
          SetInviteVisibility(this,Collapsed);
          if ((lVar13 == lVar15) && (lVar13 != lVar4)) {
            SetChangeOwnerVisibility(this,SelfHitTestInvisible);
            EVar14 = SelfHitTestInvisible;
          }
          else {
            SetChangeOwnerVisibility(this,Collapsed);
            if ((lVar13 == lVar15) && (lVar13 != lVar4)) {
              EVar14 = SelfHitTestInvisible;
            }
          }
          SetKickVisibility(this,EVar14);
          SetMemberSlotVisibility(this,Collapsed);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_338.SharedReferenceCount.ReferenceController);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_328.SharedReferenceCount.ReferenceController);
  }
  return;
}

// UpdateSearchPlayerInfo @ 14bd92ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Chat_GroupMemberSlot::UpdateSearchPlayerInfo(UDS_VM_Chat_GroupMemberSlot *this)

{
  int iVar1;
  FName FVar2;
  FDS_PlayerRepo *this_00;
  Player *pPVar3;
  UDS_LogManager *pUVar4;
  UDS_ChattingManager *pUVar5;
  FString *pFVar6;
  FText *pFVar7;
  FDS_CharacterBaseTableRow *pFVar8;
  FDS_CharacterSkinTableRow *pFVar9;
  char *pcVar10;
  undefined1 auStackY_1e8 [32];
  uint uVar11;
  wchar_t *pwVar12;
  FText local_1b8;
  FDS_Text local_1a8;
  FString local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  this_00 = TDS_Singleton<FDS_PlayerRepo>::GetInst();
  pPVar3 = FDS_PlayerRepo::FindCharTableByPlayerUID(this_00,this->PlayerUID);
  if ((pPVar3->_impl_).player_uid_ < 1) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_VM_Chat_GroupMemberSlot::UpdateSearchPlayerInfo",0x33,Yes);
    pwVar12 = L"playerInfo.player_uid() <= 0ll";
    uVar11 = 0x10d;
  }
  else {
    pUVar5 = UDS_ChattingManager::GetInst();
    iVar1 = FFieldNotificationClassDescriptor::bIsGroupOwner.BitNumber;
    FVar2 = FFieldNotificationClassDescriptor::bIsGroupOwner.FieldName;
    if (pUVar5 != (UDS_ChattingManager *)0x0) {
      if (this->bIsGroupOwner != false) {
        this->bIsGroupOwner = false;
        local_1b8.Flags = iVar1;
        local_1b8.TextData.Reference = (ITextData *)FVar2;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1b8);
      }
      pcVar10 = (char *)((ulonglong)(pPVar3->_impl_).nickname_.tagged_ptr_.ptr_ & 0xfffffffffffffffc
                        );
      if (0xf < *(ulonglong *)(pcVar10 + 0x18)) {
        pcVar10 = *(char **)pcVar10;
      }
      pFVar6 = DS_Util::ConvertUTF8ToFString(&local_158,pcVar10);
      pFVar7 = FText::FromString(&local_1b8,pFVar6);
      SetPlayerNickname(this,pFVar7);
      if ((FName)local_1b8.TextData.Reference != (FName)0x0) {
        (**(code **)(*(longlong *)local_1b8.TextData.Reference + 0x10))();
      }
      if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data.AllocatorInstance.Data);
      }
      FVar2 = FFieldNotificationClassDescriptor::CharacterLevel.FieldName;
      iVar1 = (pPVar3->_impl_).main_char_level_;
      if (this->CharacterLevel != iVar1) {
        local_1b8.Flags = FFieldNotificationClassDescriptor::CharacterLevel.BitNumber;
        this->CharacterLevel = iVar1;
        local_1b8.TextData.Reference = (ITextData *)FVar2;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1b8);
      }
      iVar1 = (pPVar3->_impl_).main_char_id_;
      this->CharacterID = iVar1;
      pFVar8 = FDS_CharacterBaseTableRow::GetRef((longlong)iVar1,true);
      local_1a8.StringTableType = None;
      local_1a8.StringTableID = 0;
      local_1a8.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_1a8.StringEnumTableNameID.Number = 0;
      local_1a8.TimeExpressionType = None;
      local_1a8.IsExpression = false;
      local_1a8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1a8.UniqueString.Data.ArrayNum = 0;
      local_1a8.UniqueString.Data.ArrayMax = 0;
      local_1a8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1a8.FormatArgs.ArrayNum = 0;
      local_1a8.FormatArgs.ArrayMax = 0;
      local_1a8.DateTime.Ticks = 0;
      local_1a8.TimeSpan.Ticks = 0;
      FDS_Text::SetTextFromStringID(&local_1a8,&pFVar8->ID_Name);
      iVar1 = FFieldNotificationClassDescriptor::CharacterName.BitNumber;
      FVar2 = FFieldNotificationClassDescriptor::CharacterName.FieldName;
      FDS_Text::operator=(&this->CharacterName,&local_1a8);
      local_1b8.TextData.Reference = (ITextData *)FVar2;
      local_1b8.Flags = iVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1b8);
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_1a8.FormatArgs.AllocatorInstance.Data,
                 local_1a8.FormatArgs.ArrayNum);
      if ((FDS_TextFormatArg *)local_1a8.FormatArgs.AllocatorInstance.Data !=
          (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_1a8.FormatArgs.AllocatorInstance.Data);
      }
      if (local_1a8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.UniqueString.Data.AllocatorInstance.Data);
      }
      pFVar9 = FDS_CharacterSkinTableRow::GetRef((longlong)(pPVar3->_impl_).main_char_skin_,true);
      local_1b8.Flags = FFieldNotificationClassDescriptor::CharacterIcon.BitNumber;
      local_1b8.TextData.Reference =
           (ITextData *)FFieldNotificationClassDescriptor::CharacterIcon.FieldName;
      if (this->CharacterIcon != pFVar9->ID_CardImg) {
        this->CharacterIcon = pFVar9->ID_CardImg;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1b8);
      }
      local_1b8.Flags = FFieldNotificationClassDescriptor::WhisperVisibility.BitNumber;
      local_1b8.TextData.Reference =
           (ITextData *)FFieldNotificationClassDescriptor::WhisperVisibility.FieldName;
      if (this->WhisperVisibility != SelfHitTestInvisible) {
        this->WhisperVisibility = SelfHitTestInvisible;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1b8);
      }
      local_1b8.Flags = FFieldNotificationClassDescriptor::InviteVisibility.BitNumber;
      local_1b8.TextData.Reference =
           (ITextData *)FFieldNotificationClassDescriptor::InviteVisibility.FieldName;
      if (this->InviteVisibility != SelfHitTestInvisible) {
        this->InviteVisibility = SelfHitTestInvisible;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1b8);
      }
      local_1b8.Flags = FFieldNotificationClassDescriptor::ChangeOwnerVisibility.BitNumber;
      local_1b8.TextData.Reference =
           (ITextData *)FFieldNotificationClassDescriptor::ChangeOwnerVisibility.FieldName;
      if (this->ChangeOwnerVisibility != Collapsed) {
        this->ChangeOwnerVisibility = Collapsed;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1b8);
      }
      local_1b8.Flags = FFieldNotificationClassDescriptor::KickVisibility.BitNumber;
      local_1b8.TextData.Reference =
           (ITextData *)FFieldNotificationClassDescriptor::KickVisibility.FieldName;
      if (this->KickVisibility != Collapsed) {
        this->KickVisibility = Collapsed;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1b8);
      }
      local_1b8.Flags = FFieldNotificationClassDescriptor::MemberSlotVisibility.BitNumber;
      local_1b8.TextData.Reference =
           (ITextData *)FFieldNotificationClassDescriptor::MemberSlotVisibility.FieldName;
      if (this->MemberSlotVisibility == Collapsed) {
        return;
      }
      this->MemberSlotVisibility = Collapsed;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1b8);
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_VM_Chat_GroupMemberSlot::UpdateSearchPlayerInfo",0x33,Yes);
    pwVar12 = L"chattingManager == nullptr";
    uVar11 = 0x114;
  }
  UDS_LogManager::PrintLog(pUVar4,1,Warning,local_148.Ptr,uVar11,pwVar12);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  return;
}

