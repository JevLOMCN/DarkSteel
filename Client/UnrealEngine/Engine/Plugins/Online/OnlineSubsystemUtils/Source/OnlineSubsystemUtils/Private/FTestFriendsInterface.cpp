// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 11

// FinishTest @ 14ecb8ce0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTestFriendsInterface::FinishTest(FTestFriendsInterface *this)

{
  IOnlineSubsystem *pIVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  longlong *plVar6;
  FString local_58;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  undefined1 local_38 [8];
  TReferenceControllerBase<1> *local_30;
  undefined1 local_28 [8];
  TReferenceControllerBase<1> *local_20;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  bVar5 = false;
  if (4 < (byte)LogOnlineFriend._0_1_) {
    ::FString::PrintfImpl(&local_58,L"All tests finished");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineFriend);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  pIVar1 = this->OnlineSub;
  if (pIVar1 != (IOnlineSubsystem *)0x0) {
    plVar6 = (longlong *)(**(code **)(pIVar1->_padding_ + 0x28))(pIVar1,local_48);
    bVar5 = true;
    if (*plVar6 != 0) {
      bVar4 = true;
      goto LAB_14ecb8d76;
    }
  }
  bVar4 = false;
LAB_14ecb8d76:
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
  }
  if (bVar4) {
    plVar6 = (longlong *)(**(code **)(this->OnlineSub->_padding_ + 0x28))(this->OnlineSub,local_38);
    if ((*plVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (**(code **)(*(longlong *)*plVar6 + 0x150))
              ((longlong *)*plVar6,0,&this->OnDeleteFriendCompleteDelegateHandle);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
    plVar6 = (longlong *)(**(code **)(this->OnlineSub->_padding_ + 0x28))(this->OnlineSub,local_28);
    if ((*plVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (**(code **)(*(longlong *)*plVar6 + 0x1f8))
              ((longlong *)*plVar6,&this->OnQueryRecentPlayersCompleteDelegateHandle);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
    plVar6 = (longlong *)(**(code **)(this->OnlineSub->_padding_ + 0x28))(this->OnlineSub,local_18);
    if ((*plVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (**(code **)(*(longlong *)*plVar6 + 0x218))
              ((longlong *)*plVar6,&this->OnQueryBlockedPlayersCompleteDelegateHandle);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  }
  pFVar2 = (this->RecentPlayersNamespace).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TSharedPtr<FUniqueNetId_const_,1>,int>
            ((TSharedPtr<FUniqueNetId_const_,1> *)(this->FriendsToDelete).AllocatorInstance.Data,
             (this->FriendsToDelete).ArrayNum);
  pFVar2 = (this->FriendsToDelete).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TSharedPtr<FUniqueNetId_const_,1>,int>
            ((TSharedPtr<FUniqueNetId_const_,1> *)(this->InvitesToSend).AllocatorInstance.Data,
             (this->InvitesToSend).ArrayNum);
  pFVar2 = (this->InvitesToSend).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TSharedPtr<FUniqueNetId_const_,1>,int>
            ((TSharedPtr<FUniqueNetId_const_,1> *)(this->InvitesToAccept).AllocatorInstance.Data,
             (this->InvitesToAccept).ArrayNum);
  pFVar2 = (this->InvitesToAccept).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->FriendsListName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &this->OnQueryBlockedPlayersCompleteDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &this->OnQueryRecentPlayersCompleteDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDeleteFriendCompleteDelegate);
  pFVar2 = (this->SubsystemName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  ::operator_delete(this,0xd8);
  return;
}

// OnAcceptInviteComplete @ 14ecbe3c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FTestFriendsInterface::OnAcceptInviteComplete
          (FTestFriendsInterface *this,int param_1,bool param_2,FUniqueNetId *param_3,
          FString *param_4,FString *param_5)

{
  FString local_28;
  void *local_18 [2];
  
  if (4 < (byte)LogOnlineFriend._0_1_) {
    (**(code **)(*(longlong *)param_3 + 0x38))(param_3,local_18);
    ::FString::PrintfImpl
              (&local_28,L"AcceptInvite() for player (%d) from friend (%s) was success=%d. %s");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineFriend);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
  }
  if (0 < (this->InvitesToAccept).ArrayNum) {
    TArray<TSharedPtr<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_>::RemoveAt
              (&this->InvitesToAccept,0,Default);
  }
  if ((this->InvitesToAccept).ArrayNum == 0) {
    this->bReadFriendsList = true;
    this->bAcceptInvites = false;
  }
  StartNextTest(this);
  return;
}

// OnDeleteFriendComplete @ 14ecbee70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FTestFriendsInterface::OnDeleteFriendComplete
          (FTestFriendsInterface *this,int param_1,bool param_2,FUniqueNetId *param_3,
          FString *param_4,FString *param_5)

{
  FString local_28;
  void *local_18 [2];
  
  if (4 < (byte)LogOnlineFriend._0_1_) {
    (**(code **)(*(longlong *)param_3 + 0x38))(param_3,local_18);
    ::FString::PrintfImpl
              (&local_28,L"DeleteFriend() for player (%d) to friend (%s) was success=%d. %s");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineFriend);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
  }
  if (0 < (this->FriendsToDelete).ArrayNum) {
    TArray<TSharedPtr<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_>::RemoveAt
              (&this->FriendsToDelete,0,Default);
  }
  if ((this->FriendsToDelete).ArrayNum == 0) {
    this->bDeleteFriends = false;
    this->bReadFriendsList = param_2;
  }
  StartNextTest(this);
  return;
}

// OnDeleteFriendsListComplete @ 14ecbefa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTestFriendsInterface::OnDeleteFriendsListComplete
          (FTestFriendsInterface *this,int param_1,bool param_2,FString *param_3,FString *param_4)

{
  FString local_18;
  
  if (4 < (byte)LogOnlineFriend._0_1_) {
    ::FString::PrintfImpl(&local_18,L"DeleteFriendsList() for player (%d) was success=%d");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineFriend);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  this->bDeleteFriendsList = false;
  this->bQueryBlockedPlayers = true;
  StartNextTest(this);
  return;
}

// OnQueryBlockedPlayersComplete @ 14ecc06b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTestFriendsInterface::OnQueryBlockedPlayersComplete
          (FTestFriendsInterface *this,FUniqueNetId *param_1,bool param_2,FString *param_3)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  uint uVar7;
  longlong lVar8;
  TSharedRef<FOnlineBlockedPlayer,1> *local_d8;
  undefined8 local_d0;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  void *local_88 [2];
  undefined1 local_78 [8];
  TReferenceControllerBase<1> *local_70;
  void *local_68 [2];
  void *local_58 [2];
  void *local_48 [2];
  undefined1 local_38 [8];
  TReferenceControllerBase<1> *local_30;
  void *local_28 [2];
  
  if (4 < (byte)LogOnlineFriend._0_1_) {
    (**(code **)(*(longlong *)param_1 + 0x38))(param_1,local_88);
    ::FString::PrintfImpl
              (&local_c8,L"QueryBlockedPlayers() for player (%s) was success=%d error=%s");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineFriend);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    if (local_88[0] != (void *)0x0) {
      FMemory::Free(local_88[0]);
    }
  }
  this->bQueryBlockedPlayers = false;
  if (param_2) {
    local_d8 = (TSharedRef<FOnlineBlockedPlayer,1> *)0x0;
    local_d0 = 0;
    plVar5 = (longlong *)(**(code **)(this->OnlineSub->_padding_ + 0x28))(this->OnlineSub,local_78);
    if ((*plVar5 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    cVar3 = (**(code **)(*(longlong *)*plVar5 + 0x278))((longlong *)*plVar5,param_1,&local_d8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
    if (cVar3 == '\0') {
      if (4 < (byte)LogOnlineFriend._0_1_) {
        (**(code **)(*(longlong *)param_1 + 0x38))(param_1,local_28);
        ::FString::PrintfImpl(&local_98,L"GetBlockedPlayers() for player %s failed");
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineFriend);
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
        if (local_28[0] != (void *)0x0) {
          FMemory::Free(local_28[0]);
        }
      }
    }
    else {
      if (4 < (byte)LogOnlineFriend._0_1_) {
        (**(code **)(*(longlong *)param_1 + 0x38))(param_1,local_68);
        ::FString::PrintfImpl(&local_b8,L"GetBlockedPlayers() (%s) returned %d blocked users");
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineFriend);
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
        if (local_68[0] != (void *)0x0) {
          FMemory::Free(local_68[0]);
        }
      }
      uVar7 = 0;
      if (0 < (int)local_d0) {
        lVar8 = 0;
        do {
          uVar4 = 0;
          if ((int)uVar7 < (int)local_d0) {
            uVar4 = ~uVar7 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          plVar5 = *(longlong **)((longlong)&local_d8->Object + lVar8);
          if (4 < (byte)LogOnlineFriend._0_1_) {
            puVar6 = (undefined8 *)(**(code **)(*plVar5 + 8))(plVar5,local_38);
            (**(code **)(*(longlong *)*puVar6 + 0x38))((longlong *)*puVar6,local_48);
            (**(code **)(*plVar5 + 0x10))(plVar5,local_58);
            ::FString::PrintfImpl(&local_a8,L"\t%s (%s) is blocked");
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineFriend);
            if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a8.Data.AllocatorInstance.Data);
            }
            if (local_58[0] != (void *)0x0) {
              FMemory::Free(local_58[0]);
            }
            if (local_48[0] != (void *)0x0) {
              FMemory::Free(local_48[0]);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_30);
          }
          uVar7 = uVar7 + 1;
          lVar8 = lVar8 + 0x10;
        } while ((int)uVar7 < (int)local_d0);
      }
    }
    DestructItems<TSharedRef<FOnlineBlockedPlayer,1>,int>(local_d8,(int)local_d0);
    if (local_d8 != (TSharedRef<FOnlineBlockedPlayer,1> *)0x0) {
      FMemory::Free(local_d8);
    }
  }
  StartNextTest(this);
  return;
}

// OnQueryRecentPlayersComplete @ 14ecc0d00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTestFriendsInterface::OnQueryRecentPlayersComplete
          (FTestFriendsInterface *this,FUniqueNetId *param_1,FString *param_2,bool param_3,
          FString *param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  FOnlineRecentPlayer *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  FDateTime *this_00;
  TSharedRef<FOnlineRecentPlayer,1> *pTVar9;
  TSharedRef<FOnlineRecentPlayer,1> *pTVar10;
  undefined1 local_res8 [8];
  undefined1 local_res20 [8];
  TSharedRef<FOnlineRecentPlayer,1> *local_f8;
  undefined8 local_f0;
  void *local_e8;
  undefined8 local_e0;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  void *local_98 [2];
  undefined1 local_88 [8];
  TReferenceControllerBase<1> *local_80;
  void *local_78 [2];
  void *local_68 [2];
  undefined1 local_58 [8];
  TReferenceControllerBase<1> *local_50;
  FString local_48;
  
  if (4 < (byte)LogOnlineFriend._0_1_) {
    (**(code **)(*(longlong *)param_1 + 0x38))(param_1,local_98);
    ::FString::PrintfImpl(&local_d8,L"QueryRecentPlayers() for player (%s) was success=%d error=%s")
    ;
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineFriend);
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    if (local_98[0] != (void *)0x0) {
      FMemory::Free(local_98[0]);
    }
  }
  if (param_3) {
    local_f8 = (TSharedRef<FOnlineRecentPlayer,1> *)0x0;
    local_f0 = 0;
    plVar7 = (longlong *)(**(code **)(this->OnlineSub->_padding_ + 0x28))(this->OnlineSub,local_88);
    if ((*plVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    cVar6 = (**(code **)(*(longlong *)*plVar7 + 0x230))
                      ((longlong *)*plVar7,param_1,param_2,&local_f8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_80);
    if (cVar6 != '\0') {
      if (4 < (byte)LogOnlineFriend._0_1_) {
        ::FString::PrintfImpl(&local_c8,L"GetRecentPlayers returned %d players");
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineFriend);
        if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
      }
      iVar4 = (int)local_f0;
      pTVar10 = local_f8 + (int)local_f0;
      pTVar9 = local_f8;
      while( true ) {
        if ((int)local_f0 != iVar4) {
          `TCheckedPointerIterator<TSharedRef<FOnlineRecentPlayer,1>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res20);
        }
        if (pTVar9 == pTVar10) break;
        pTVar1 = (pTVar9->SharedReferenceCount).ReferenceController;
        pFVar2 = pTVar9->Object;
        if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (4 < (byte)LogOnlineFriend._0_1_) {
          puVar8 = (undefined8 *)(**(code **)((longlong)*pFVar2 + 8))(pFVar2,local_58);
          (**(code **)(*(longlong *)*puVar8 + 0x38))((longlong *)*puVar8,local_68);
          local_e8 = (void *)0x0;
          local_e0 = 0;
          (**(code **)((longlong)*pFVar2 + 0x18))(pFVar2,local_78,&local_e8);
          ::FString::PrintfImpl(&local_b8,L"\t%s has unique id (%s)");
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineFriend);
          if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b8.Data.AllocatorInstance.Data);
          }
          if (local_78[0] != (void *)0x0) {
            FMemory::Free(local_78[0]);
          }
          if (local_e8 != (void *)0x0) {
            FMemory::Free(local_e8);
          }
          if (local_68[0] != (void *)0x0) {
            FMemory::Free(local_68[0]);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_50);
          if (4 < (byte)LogOnlineFriend._0_1_) {
            this_00 = (FDateTime *)(**(code **)((longlong)*pFVar2 + 0x30))(pFVar2,local_res8);
            FDateTime::ToString(this_00,&local_48);
            ::FString::PrintfImpl(&local_a8,L"\t LastSeen (%s)");
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineFriend);
            if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a8.Data.AllocatorInstance.Data);
            }
            if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_48.Data.AllocatorInstance.Data);
            }
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        pTVar9 = pTVar9 + 1;
      }
    }
    DestructItems<TSharedRef<FOnlineRecentPlayer,1>,int>(local_f8,(int)local_f0);
    if (local_f8 != (TSharedRef<FOnlineRecentPlayer,1> *)0x0) {
      FMemory::Free(local_f8);
    }
  }
  this->bQueryRecentPlayers = false;
  StartNextTest(this);
  return;
}

// OnReadFriendsComplete @ 14ecc1540

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTestFriendsInterface::OnReadFriendsComplete
          (FTestFriendsInterface *this,int param_1,bool param_2,FString *param_3,FString *param_4)

{
  TArray<TSharedPtr<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_> *this_00;
  TArray<TSharedPtr<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_> *this_01;
  code *pcVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  Type TVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  uint uVar11;
  TSharedRef<FOnlineFriend,1> *local_1a8;
  undefined8 local_1a0;
  longlong local_198;
  void *local_190;
  undefined8 local_188;
  FString local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  TSharedPtr<FUniqueNetId_const_,1> local_d0;
  TSharedPtr<FUniqueNetId_const_,1> local_c0;
  FString local_b0;
  undefined1 local_a0 [8];
  TReferenceControllerBase<1> *local_98;
  void *local_90 [2];
  void *local_80 [2];
  undefined1 local_70 [8];
  TReferenceControllerBase<1> *local_68;
  undefined1 local_60 [8];
  TReferenceControllerBase<1> *local_58;
  undefined1 local_50 [8];
  TReferenceControllerBase<1> *local_48;
  
  if (4 < (byte)LogOnlineFriend._0_1_) {
    ::FString::PrintfImpl(&local_180,L"ReadFriendsList() for player (%d) was success=%d error=%s");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineFriend);
    if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_180.Data.AllocatorInstance.Data);
    }
  }
  if (param_2) {
    local_1a8 = (TSharedRef<FOnlineFriend,1> *)0x0;
    local_1a0 = 0;
    plVar7 = (longlong *)(**(code **)(this->OnlineSub->_padding_ + 0x28))(this->OnlineSub,local_a0);
    if ((*plVar7 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    cVar3 = (**(code **)(*(longlong *)*plVar7 + 0x1c8))
                      ((longlong *)*plVar7,param_1,param_3,&local_1a8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_98);
    if (cVar3 == '\0') {
      if (4 < (byte)LogOnlineFriend._0_1_) {
        ::FString::PrintfImpl(&local_b0,L"GetFriendsList(%d) failed");
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineFriend);
        if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      if (4 < (byte)LogOnlineFriend._0_1_) {
        ::FString::PrintfImpl(&local_170,L"GetFriendsList(%d) returned %d friends");
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineFriend);
        if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_170.Data.AllocatorInstance.Data);
        }
      }
      this_00 = &this->InvitesToAccept;
      DestructItems<TSharedPtr<FUniqueNetId_const_,1>,int>
                ((TSharedPtr<FUniqueNetId_const_,1> *)(this_00->AllocatorInstance).Data,
                 (this->InvitesToAccept).ArrayNum);
      (this->InvitesToAccept).ArrayNum = 0;
      if ((this->InvitesToAccept).ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&this_00->AllocatorInstance,0,&(this->InvitesToAccept).ArrayMax);
      }
      this_01 = &this->FriendsToDelete;
      DestructItems<TSharedPtr<FUniqueNetId_const_,1>,int>
                ((TSharedPtr<FUniqueNetId_const_,1> *)(this_01->AllocatorInstance).Data,
                 (this->FriendsToDelete).ArrayNum);
      (this->FriendsToDelete).ArrayNum = 0;
      if ((this->FriendsToDelete).ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&this_01->AllocatorInstance,0,&(this->FriendsToDelete).ArrayMax);
      }
      uVar11 = 0;
      if (0 < (int)local_1a0) {
        local_198 = 0;
        do {
          lVar10 = local_198;
          uVar4 = 0;
          if ((int)uVar11 < (int)local_1a0) {
            uVar4 = ~uVar11 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          plVar7 = *(longlong **)((longlong)&local_1a8->Object + lVar10);
          lVar8 = (**(code **)(*plVar7 + 0x38))(plVar7);
          if (4 < (byte)LogOnlineFriend._0_1_) {
            puVar9 = (undefined8 *)(**(code **)(*plVar7 + 8))(plVar7,local_70);
            (**(code **)(*(longlong *)*puVar9 + 0x38))((longlong *)*puVar9,local_80);
            local_190 = (void *)0x0;
            local_188 = 0;
            (**(code **)(*plVar7 + 0x18))(plVar7,local_90,&local_190);
            ::FString::PrintfImpl(&local_160,L"\t%s has unique id (%s)");
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineFriend);
            if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_160.Data.AllocatorInstance.Data);
            }
            if (local_90[0] != (void *)0x0) {
              FMemory::Free(local_90[0]);
            }
            if (local_190 != (void *)0x0) {
              FMemory::Free(local_190);
            }
            if (local_80[0] != (void *)0x0) {
              FMemory::Free(local_80[0]);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_68);
            lVar10 = local_198;
            if (4 < (byte)LogOnlineFriend._0_1_) {
              TVar5 = (**(code **)(*plVar7 + 0x30))(plVar7);
              EInviteStatus::ToString(TVar5);
              ::FString::PrintfImpl(&local_150,L"\t\t Invite status (%s)");
              UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineFriend);
              if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_150.Data.AllocatorInstance.Data);
              }
              if (4 < (byte)LogOnlineFriend._0_1_) {
                ::FString::PrintfImpl(&local_140,L"\t\t Presence: %s");
                UE::Logging::Private::BasicLog<5>
                          (&::LOG_Static,(FLogCategoryBase *)&LogOnlineFriend);
                if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_140.Data.AllocatorInstance.Data);
                }
                if (4 < (byte)LogOnlineFriend._0_1_) {
                  EOnlinePresenceState::ToString(*(Type *)(lVar8 + 0x30));
                  ::FString::PrintfImpl(&local_130,L"\t\t State: %s");
                  UE::Logging::Private::BasicLog<5>
                            (&::LOG_Static,(FLogCategoryBase *)&LogOnlineFriend);
                  if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_130.Data.AllocatorInstance.Data);
                  }
                  if (4 < (byte)LogOnlineFriend._0_1_) {
                    ::FString::PrintfImpl(&local_120,L"\t\t bIsOnline (%s)");
                    UE::Logging::Private::BasicLog<5>
                              (&::LOG_Static,(FLogCategoryBase *)&LogOnlineFriend);
                    if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_120.Data.AllocatorInstance.Data);
                    }
                    if (4 < (byte)LogOnlineFriend._0_1_) {
                      ::FString::PrintfImpl(&local_110,L"\t\t bIsPlaying (%s)");
                      UE::Logging::Private::BasicLog<5>
                                (&::LOG_Static,(FLogCategoryBase *)&LogOnlineFriend);
                      if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_110.Data.AllocatorInstance.Data);
                      }
                      if (4 < (byte)LogOnlineFriend._0_1_) {
                        ::FString::PrintfImpl(&local_100,L"\t\t bIsPlayingThisGame (%s)");
                        UE::Logging::Private::BasicLog<5>
                                  (&::LOG_Static,(FLogCategoryBase *)&LogOnlineFriend);
                        if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_100.Data.AllocatorInstance.Data);
                        }
                        if (4 < (byte)LogOnlineFriend._0_1_) {
                          ::FString::PrintfImpl(&local_f0,L"\t\t bIsJoinable (%s)");
                          UE::Logging::Private::BasicLog<5>
                                    (&::LOG_Static,(FLogCategoryBase *)&LogOnlineFriend);
                          if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
                             ) {
                            FMemory::Free(local_f0.Data.AllocatorInstance.Data);
                          }
                          if (4 < (byte)LogOnlineFriend._0_1_) {
                            ::FString::PrintfImpl(&local_e0,L"\t\t bHasVoiceSupport (%s)");
                            UE::Logging::Private::BasicLog<5>
                                      (&::LOG_Static,(FLogCategoryBase *)&LogOnlineFriend);
                            if (local_e0.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_e0.Data.AllocatorInstance.Data);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          iVar6 = (**(code **)(*plVar7 + 0x30))(plVar7);
          if (iVar6 == 2) {
            puVar9 = (undefined8 *)(**(code **)(*plVar7 + 8))(plVar7,local_60);
            local_d0.Object = (FUniqueNetId *)*puVar9;
            local_d0.SharedReferenceCount.ReferenceController =
                 (TReferenceControllerBase<1> *)puVar9[1];
            if (local_d0.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                   1);
              UNLOCK();
            }
            TArray<TSharedPtr<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_>::
            AddUniqueImpl<TSharedPtr<FUniqueNetId_const_,1>_>(this_00,&local_d0);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_d0.SharedReferenceCount.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_58);
          }
          puVar9 = (undefined8 *)(**(code **)(*plVar7 + 8))(plVar7,local_50);
          local_c0.Object = (FUniqueNetId *)*puVar9;
          local_c0.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)puVar9[1];
          if (local_c0.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          TArray<TSharedPtr<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_>::
          AddUniqueImpl<TSharedPtr<FUniqueNetId_const_,1>_>(this_01,&local_c0);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_c0.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_48);
          local_198 = lVar10 + 0x10;
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (int)local_1a0);
      }
    }
    DestructItems<TSharedRef<FOnlineFriend,1>,int>(local_1a8,(int)local_1a0);
    if (local_1a8 != (TSharedRef<FOnlineFriend,1> *)0x0) {
      FMemory::Free(local_1a8);
    }
  }
  this->bReadFriendsList = false;
  StartNextTest(this);
  return;
}

// OnRequestNewPermissionsComplete @ 14ecc1d40

void __thiscall
FTestFriendsInterface::OnRequestNewPermissionsComplete
          (FTestFriendsInterface *this,int param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  longlong *plVar5;
  undefined7 in_register_00000081;
  longlong *local_78;
  TReferenceControllerBase<1> *local_70;
  undefined1 local_68 [8];
  TReferenceControllerBase<1> *local_60;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  (**(code **)(this->OnlineSub->_padding_ + 0xb0))
            (this->OnlineSub,&local_78,CONCAT71(in_register_00000081,param_2));
  if (local_78 != (longlong *)0x0) {
    if ((local_78 == (longlong *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (**(code **)(*local_78 + 0x20))(local_78,0,&this->OnRequestNewReadPermissionsDelegateHandle);
  }
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_28);
  local_10 = &local_50;
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXH_NAEBVFString__1_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFTestFriendsInterface____A6AXH_NAEBVFString__1_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[4] = OnReadFriendsComplete;
    puVar3[3] = this;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  plVar5 = (longlong *)(**(code **)(this->OnlineSub->_padding_ + 0x28))(this->OnlineSub,local_68);
  if ((*plVar5 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (**(code **)(*(longlong *)*plVar5 + 0xe8))
            ((longlong *)*plVar5,param_1,&this->FriendsListName,&local_58);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
  return;
}

// OnSendInviteComplete @ 14ecc1f30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FTestFriendsInterface::OnSendInviteComplete
          (FTestFriendsInterface *this,int param_1,bool param_2,FUniqueNetId *param_3,
          FString *param_4,FString *param_5)

{
  FString local_28;
  void *local_18 [2];
  
  if (4 < (byte)LogOnlineFriend._0_1_) {
    (**(code **)(*(longlong *)param_3 + 0x38))(param_3,local_18);
    ::FString::PrintfImpl
              (&local_28,L"SendInvite() for player (%d) to friend (%s) was success=%d. %s");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineFriend);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
  }
  if (0 < (this->InvitesToSend).ArrayNum) {
    TArray<TSharedPtr<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_>::RemoveAt
              (&this->InvitesToSend,0,Default);
  }
  if ((this->InvitesToSend).ArrayNum == 0) {
    this->bSendInvites = false;
    this->bReadFriendsList = true;
  }
  StartNextTest(this);
  return;
}

// StartNextTest @ 14ecc95c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTestFriendsInterface::StartNextTest(FTestFriendsInterface *this)

{
  char cVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  TSharedPtr<IOnlineIdentity,1> *pTVar8;
  IOnlineIdentity *pIVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  ulong64 *puVar13;
  TSharedPtr<IOnlineFriends,1> *pTVar14;
  IOnlineFriends *pIVar15;
  TSharedPtr<FUniqueNetId_const_,1> *pTVar16;
  FUniqueNetId *pFVar17;
  undefined4 local_res8 [2];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2f8;
  FDelegateAllocation local_2f0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2e0;
  FDelegateAllocation local_2d8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2c8;
  FDelegateAllocation local_2c0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2b0;
  FDelegateAllocation local_2a8;
  longlong *local_298;
  TReferenceControllerBase<1> *local_290;
  FString local_288;
  FString local_278;
  FString local_268;
  FString local_258;
  FString local_248;
  FString local_238;
  FString local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FDestructionSentinel local_1e8;
  FDestructionSentinel local_1d0;
  FDestructionSentinel local_1b8;
  FDestructionSentinel local_1a0;
  FDestructionSentinel local_188;
  FDelegateAllocation *local_170;
  FDestructionSentinel local_168;
  FDelegateAllocation *local_150;
  FDestructionSentinel local_148;
  FDelegateAllocation *local_130;
  FDestructionSentinel local_128;
  FDelegateAllocation *local_110;
  undefined1 local_108 [8];
  TReferenceControllerBase<1> *local_100;
  undefined1 local_f8 [8];
  TReferenceControllerBase<1> *local_f0;
  undefined1 local_e8 [8];
  TReferenceControllerBase<1> *local_e0;
  undefined1 local_d8 [8];
  TReferenceControllerBase<1> *local_d0;
  undefined1 local_c8 [8];
  TReferenceControllerBase<1> *local_c0;
  undefined1 local_b8 [8];
  TReferenceControllerBase<1> *local_b0;
  undefined1 local_a8 [8];
  TReferenceControllerBase<1> *local_a0;
  undefined1 local_98 [8];
  TReferenceControllerBase<1> *local_90;
  undefined1 local_88 [8];
  TReferenceControllerBase<1> *local_80;
  undefined1 local_78 [8];
  TReferenceControllerBase<1> *local_70;
  undefined1 local_68 [8];
  TReferenceControllerBase<1> *local_60;
  undefined1 local_58 [8];
  TReferenceControllerBase<1> *local_50;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  undefined1 local_38 [8];
  TReferenceControllerBase<1> *local_30;
  undefined1 local_28 [8];
  TReferenceControllerBase<1> *local_20;
  
  cVar1 = this->bReadFriendsList;
  do {
    if (cVar1 != '\0') {
      local_res8[0] = 0;
      if (4 < (byte)LogOnlineFriend._0_1_) {
        ::FString::PrintfImpl(&local_218,L"Reading friends list");
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineFriend);
        if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_218.Data.AllocatorInstance.Data);
        }
      }
      (**(code **)(this->OnlineSub->_padding_ + 0xb0))();
      if (local_298 == (longlong *)0x0) {
        if (4 < (byte)LogOnlineFriend._0_1_) {
          ::FString::PrintfImpl
                    (&local_1f8,L"Sharing interface invalid. Skipping permission request");
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineFriend);
          if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
          }
        }
        OnRequestNewPermissionsComplete(this,0,true);
        local_d0 = local_290;
      }
      else {
        if (4 < (byte)LogOnlineFriend._0_1_) {
          ::FString::PrintfImpl(&local_208,L"Sharing interface valid. Requesting permissions");
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineFriend);
          if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_208.Data.AllocatorInstance.Data);
          }
        }
        local_2f8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0
        ;
        local_2f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_2f0.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_2f8,(FWriteAccessScope *)&local_188);
        local_170 = &local_2f0;
        puVar11 = UE::Core::Private::DelegateAllocate(0x28,&local_2f0);
        if (puVar11 != (undefined8 *)0x0) {
          *puVar11 = &
                     ___7__TCommonDelegateInstanceState___A6AXH_N_ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar12 = FDelegateHandle::GenerateNewID();
          puVar11[2] = uVar12;
          *puVar11 = &
                     ___7__TBaseRawMethodDelegateInstance__0A_VFTestFriendsInterface____A6AXH_N_ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          puVar11[4] = OnRequestNewPermissionsComplete;
          puVar11[3] = this;
        }
        if (local_188.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_188.Accessor,&local_188);
        }
        if ((local_298 == (longlong *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        puVar13 = (ulong64 *)(**(code **)(*local_298 + 0x18))(local_298,local_res8,0,&local_2f8);
        (this->OnRequestNewReadPermissionsDelegateHandle).ID = *puVar13;
        if ((local_298 == (longlong *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        (**(code **)(*local_298 + 0x38))(local_298,0);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_2f8,(FWriteAccessScope *)&local_1e8);
        if ((local_2f0.DelegateSize != 0) &&
           (local_2f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_2f0.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_2f0,0,0,0x10);
          local_2f0.DelegateSize = 0;
        }
        if (local_1e8.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1e8.Accessor,&local_1e8);
        }
        if (local_2f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_2f0.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2f8.AccessDetector);
        local_d0 = local_290;
      }
LAB_14ecca268:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_d0);
      return;
    }
    local_res8[0] = 0;
    if (this->bQueryRecentPlayers != false) {
      if (4 < (byte)LogOnlineFriend._0_1_) {
        ::FString::PrintfImpl(&local_228,L"Querying recent players");
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineFriend);
        if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_228.Data.AllocatorInstance.Data);
        }
      }
      bVar4 = false;
      bVar7 = false;
      plVar10 = (longlong *)
                (**(code **)(this->OnlineSub->_padding_ + 0x80))(this->OnlineSub,local_38);
      if (*plVar10 == 0) {
LAB_14ecca138:
        bVar5 = false;
        bVar6 = false;
        if (bVar7) goto LAB_14ecca140;
      }
      else {
        pTVar8 = (TSharedPtr<IOnlineIdentity,1> *)
                 (**(code **)(this->OnlineSub->_padding_ + 0x80))(this->OnlineSub,local_48);
        pIVar9 = TSharedPtr<IOnlineIdentity,1>::operator->(pTVar8);
        bVar4 = true;
        bVar7 = true;
        plVar10 = (longlong *)(**(code **)(pIVar9->_padding_ + 0x110))(pIVar9,local_58,0);
        if (*plVar10 == 0) goto LAB_14ecca138;
        bVar6 = true;
LAB_14ecca140:
        bVar5 = bVar6;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_50);
      }
      if (bVar4) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_40);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
      if (!bVar5) {
        return;
      }
      pTVar14 = (TSharedPtr<IOnlineFriends,1> *)
                (**(code **)(this->OnlineSub->_padding_ + 0x28))(this->OnlineSub,local_e8);
      pIVar15 = TSharedPtr<IOnlineFriends,1>::operator->(pTVar14);
      pcVar3 = *(code **)(pIVar15->_padding_ + 0x1e8);
      pTVar8 = (TSharedPtr<IOnlineIdentity,1> *)
               (**(code **)(this->OnlineSub->_padding_ + 0x80))(this->OnlineSub,local_f8);
      pIVar9 = TSharedPtr<IOnlineIdentity,1>::operator->(pTVar8);
      pTVar16 = (TSharedPtr<FUniqueNetId_const_,1> *)
                (**(code **)(pIVar9->_padding_ + 0x110))(pIVar9,local_108,0);
      pFVar17 = TSharedPtr<FUniqueNetId_const_,1>::operator*<FUniqueNetId_const_>(pTVar16);
      (*pcVar3)(pIVar15,pFVar17,&this->RecentPlayersNamespace);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_100)
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_f0);
      local_d0 = local_e0;
      goto LAB_14ecca268;
    }
    if ((this->bAcceptInvites != false) && (0 < (this->InvitesToAccept).ArrayNum)) {
      if (4 < (byte)LogOnlineFriend._0_1_) {
        ::FString::PrintfImpl(&local_268,L"Accepting invites");
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineFriend);
        if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_268.Data.AllocatorInstance.Data);
        }
      }
      local_2b0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_2a8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_2a8.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_2b0,(FWriteAccessScope *)&local_168);
      local_150 = &local_2a8;
      puVar11 = UE::Core::Private::DelegateAllocate(0x28,&local_2a8);
      if (puVar11 != (undefined8 *)0x0) {
        *puVar11 = &
                   ___7__TCommonDelegateInstanceState___A6AXH_NAEBVFUniqueNetId__AEBVFString__2_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar12 = FDelegateHandle::GenerateNewID();
        puVar11[2] = uVar12;
        *puVar11 = &
                   ___7__TBaseRawMethodDelegateInstance__0A_VFTestFriendsInterface____A6AXH_NAEBVFUniqueNetId__AEBVFString__2_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        puVar11[4] = OnAcceptInviteComplete;
        puVar11[3] = this;
      }
      if (local_168.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_168.Accessor,&local_168);
      }
      pTVar14 = (TSharedPtr<IOnlineFriends,1> *)
                (**(code **)(this->OnlineSub->_padding_ + 0x28))(this->OnlineSub,local_88);
      pIVar15 = TSharedPtr<IOnlineFriends,1>::operator->(pTVar14);
      pcVar3 = *(code **)(pIVar15->_padding_ + 0x100);
      if (((this->InvitesToAccept).ArrayNum < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar17 = TSharedPtr<FUniqueNetId_const_,1>::operator*<FUniqueNetId_const_>
                          ((TSharedPtr<FUniqueNetId_const_,1> *)
                           (this->InvitesToAccept).AllocatorInstance.Data);
      (*pcVar3)(pIVar15,0,pFVar17,&this->FriendsListName,&local_2b0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_80);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_2b0,(FWriteAccessScope *)&local_1a0);
      if ((local_2a8.DelegateSize != 0) &&
         (local_2a8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_2a8.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_2a8,0,0,0x10);
        local_2a8.DelegateSize = 0;
      }
      if (local_1a0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a0.Accessor,&local_1a0);
      }
      if (local_2a8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_2a8.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2b0.AccessDetector);
      return;
    }
    if ((this->bSendInvites != false) && (0 < (this->InvitesToSend).ArrayNum)) {
      if (4 < (byte)LogOnlineFriend._0_1_) {
        ::FString::PrintfImpl(&local_258,L"Sending invites");
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineFriend);
        if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_258.Data.AllocatorInstance.Data);
        }
      }
      local_2c8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_2c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_2c0.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_2c8,(FWriteAccessScope *)&local_148);
      local_130 = &local_2c0;
      puVar11 = UE::Core::Private::DelegateAllocate(0x28,&local_2c0);
      if (puVar11 != (undefined8 *)0x0) {
        *puVar11 = &
                   ___7__TCommonDelegateInstanceState___A6AXH_NAEBVFUniqueNetId__AEBVFString__2_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar12 = FDelegateHandle::GenerateNewID();
        puVar11[2] = uVar12;
        *puVar11 = &
                   ___7__TBaseRawMethodDelegateInstance__0A_VFTestFriendsInterface____A6AXH_NAEBVFUniqueNetId__AEBVFString__2_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        puVar11[4] = OnSendInviteComplete;
        puVar11[3] = this;
      }
      if (local_148.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_148.Accessor,&local_148);
      }
      pTVar14 = (TSharedPtr<IOnlineFriends,1> *)
                (**(code **)(this->OnlineSub->_padding_ + 0x28))(this->OnlineSub,local_98);
      pIVar15 = TSharedPtr<IOnlineFriends,1>::operator->(pTVar14);
      pcVar3 = *(code **)(pIVar15->_padding_ + 0xf8);
      if (((this->InvitesToSend).ArrayNum < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar17 = TSharedPtr<FUniqueNetId_const_,1>::operator*<FUniqueNetId_const_>
                          ((TSharedPtr<FUniqueNetId_const_,1> *)
                           (this->InvitesToSend).AllocatorInstance.Data);
      (*pcVar3)(pIVar15,0,pFVar17,&this->FriendsListName,&local_2c8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_2c8,(FWriteAccessScope *)&local_1b8);
      if ((local_2c0.DelegateSize != 0) &&
         (local_2c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_2c0.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_2c0,0,0,0x10);
        local_2c0.DelegateSize = 0;
      }
      if (local_1b8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1b8.Accessor,&local_1b8);
      }
      if (local_2c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_2c0.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2c8.AccessDetector);
      return;
    }
    if ((this->bDeleteFriends != false) && (0 < (this->FriendsToDelete).ArrayNum)) {
      if (4 < (byte)LogOnlineFriend._0_1_) {
        ::FString::PrintfImpl(&local_248,L"Deleting friends");
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineFriend);
        if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_248.Data.AllocatorInstance.Data);
        }
      }
      pTVar14 = (TSharedPtr<IOnlineFriends,1> *)
                (**(code **)(this->OnlineSub->_padding_ + 0x28))(this->OnlineSub,local_a8);
      pIVar15 = TSharedPtr<IOnlineFriends,1>::operator->(pTVar14);
      pcVar3 = *(code **)(pIVar15->_padding_ + 0x140);
      if (((this->FriendsToDelete).ArrayNum < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar17 = TSharedPtr<FUniqueNetId_const_,1>::operator*<FUniqueNetId_const_>
                          ((TSharedPtr<FUniqueNetId_const_,1> *)
                           (this->FriendsToDelete).AllocatorInstance.Data);
      (*pcVar3)(pIVar15,0,pFVar17,&this->FriendsListName);
      local_d0 = local_a0;
      goto LAB_14ecca268;
    }
    if (this->bDeleteFriendsList != false) {
      if (4 < (byte)LogOnlineFriend._0_1_) {
        ::FString::PrintfImpl(&local_238,L"Deleting friends list");
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineFriend);
        if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_238.Data.AllocatorInstance.Data);
        }
      }
      local_2e0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_2d8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_2d8.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_2e0,(FWriteAccessScope *)&local_128);
      local_110 = &local_2d8;
      puVar11 = UE::Core::Private::DelegateAllocate(0x28,&local_2d8);
      if (puVar11 != (undefined8 *)0x0) {
        *puVar11 = &
                   ___7__TCommonDelegateInstanceState___A6AXH_NAEBVFString__1_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar12 = FDelegateHandle::GenerateNewID();
        puVar11[2] = uVar12;
        *puVar11 = &
                   ___7__TBaseRawMethodDelegateInstance__0A_VFTestFriendsInterface____A6AXH_NAEBVFString__1_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        puVar11[4] = OnDeleteFriendsListComplete;
        puVar11[3] = this;
      }
      if (local_128.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_128.Accessor,&local_128);
      }
      pTVar14 = (TSharedPtr<IOnlineFriends,1> *)
                (**(code **)(this->OnlineSub->_padding_ + 0x28))(this->OnlineSub,local_28);
      pIVar15 = TSharedPtr<IOnlineFriends,1>::operator->(pTVar14);
      (**(code **)(pIVar15->_padding_ + 0xf0))(pIVar15,0,&this->FriendsListName,&local_2e0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_2e0,(FWriteAccessScope *)&local_1d0);
      if ((local_2d8.DelegateSize != 0) &&
         (local_2d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_2d8.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_2d8,0,0,0x10);
        local_2d8.DelegateSize = 0;
      }
      if (local_1d0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1d0.Accessor,&local_1d0);
      }
      if (local_2d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_2d8.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2e0.AccessDetector);
      return;
    }
    if (this->bQueryBlockedPlayers == false) {
      FinishTest(this);
      return;
    }
    if (4 < (byte)LogOnlineFriend._0_1_) {
      ::FString::PrintfImpl(&local_288,L"Querying blocked players");
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineFriend);
      if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_288.Data.AllocatorInstance.Data);
      }
    }
    pTVar8 = (TSharedPtr<IOnlineIdentity,1> *)
             (**(code **)(this->OnlineSub->_padding_ + 0x80))(this->OnlineSub,local_78);
    pIVar9 = TSharedPtr<IOnlineIdentity,1>::operator->(pTVar8);
    plVar10 = (longlong *)(**(code **)(pIVar9->_padding_ + 0x110))(pIVar9,local_68);
    lVar2 = *plVar10;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
    if (lVar2 != 0) {
      pTVar14 = (TSharedPtr<IOnlineFriends,1> *)
                (**(code **)(this->OnlineSub->_padding_ + 0x28))(this->OnlineSub,local_d8);
      pIVar15 = TSharedPtr<IOnlineFriends,1>::operator->(pTVar14);
      pcVar3 = *(code **)(pIVar15->_padding_ + 0x270);
      pTVar8 = (TSharedPtr<IOnlineIdentity,1> *)
               (**(code **)(this->OnlineSub->_padding_ + 0x80))(this->OnlineSub,local_c8);
      pIVar9 = TSharedPtr<IOnlineIdentity,1>::operator->(pTVar8);
      pTVar16 = (TSharedPtr<FUniqueNetId_const_,1> *)
                (**(code **)(pIVar9->_padding_ + 0x110))(pIVar9,local_b8,0);
      pFVar17 = TSharedPtr<FUniqueNetId_const_,1>::operator*<FUniqueNetId_const_>(pTVar16);
      (*pcVar3)(pIVar15,pFVar17);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_c0);
      goto LAB_14ecca268;
    }
    if (4 < (byte)LogOnlineFriend._0_1_) {
      ::FString::PrintfImpl(&local_278,L"Player unique id invalid. Skipping Test");
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineFriend);
      if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_278.Data.AllocatorInstance.Data);
      }
    }
    this->bQueryBlockedPlayers = false;
    cVar1 = this->bReadFriendsList;
  } while( true );
}

// Test @ 14eccb760

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FTestFriendsInterface::Test
          (FTestFriendsInterface *this,UWorld *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<TSharedPtr<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  FName *pFVar9;
  IOnlineSubsystem *pIVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  ulong64 uVar13;
  ulong64 *puVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  bool bVar17;
  FName local_res8;
  FName local_res20;
  undefined1 local_1e8 [8];
  FDelegateAllocation local_1e0;
  undefined1 local_1d0 [8];
  FDelegateAllocation local_1c8;
  undefined1 local_1b8 [8];
  FDelegateAllocation local_1b0;
  longlong local_1a0;
  TReferenceControllerBase<1> *local_198;
  FString local_190;
  FString local_180;
  FString local_170;
  FDestructionSentinel local_160;
  FDestructionSentinel local_148;
  FDestructionSentinel local_130;
  FDestructionSentinel local_118;
  FDelegateAllocation *local_100;
  FDestructionSentinel local_f8;
  FDelegateAllocation *local_e0;
  FDestructionSentinel local_d8;
  FDelegateAllocation *local_c0;
  undefined1 local_b8 [8];
  undefined1 local_b0 [8];
  undefined1 local_a8 [8];
  undefined1 local_a0 [8];
  TReferenceControllerBase<1> *local_98;
  undefined1 local_90 [8];
  TReferenceControllerBase<1> *local_88;
  undefined1 local_80 [8];
  TReferenceControllerBase<1> *local_78;
  undefined1 local_70 [8];
  TReferenceControllerBase<1> *local_68;
  undefined1 local_60 [8];
  TReferenceControllerBase<1> *local_58;
  undefined1 local_50 [8];
  TReferenceControllerBase<1> *local_48;
  
  bVar4 = false;
  bVar17 = false;
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  iVar8 = (this->SubsystemName).Data.ArrayNum;
  iVar6 = iVar8 + -1;
  if (iVar8 == 0) {
    iVar6 = 0;
  }
  if (iVar6 == 0) {
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    pFVar9 = &local_res8;
  }
  else if (iVar8 == 0) {
    pFVar9 = ::FName::FName(&local_res20,L"",FNAME_Find);
  }
  else {
    pFVar9 = ::FName::FName(&local_res20,
                            (wchar_t *)(this->SubsystemName).Data.AllocatorInstance.Data,FNAME_Find)
    ;
  }
  pIVar10 = IOnlineSubsystem::Get(pFVar9);
  this->OnlineSub = pIVar10;
  if (pIVar10 == (IOnlineSubsystem *)0x0) {
LAB_14eccb830:
    bVar5 = false;
  }
  else {
    bVar4 = true;
    bVar17 = false;
    plVar11 = (longlong *)(**(code **)(pIVar10->_padding_ + 0x80))(pIVar10,local_90);
    if (*plVar11 == 0) goto LAB_14eccb830;
    bVar4 = true;
    bVar17 = true;
    plVar11 = (longlong *)(**(code **)(this->OnlineSub->_padding_ + 0x28))(this->OnlineSub,local_a0)
    ;
    if (*plVar11 == 0) goto LAB_14eccb830;
    bVar5 = true;
  }
  if (bVar17) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_98);
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_88);
  }
  if (!bVar5) {
    if (2 < (byte)LogOnlineFriend._0_1_) {
      ::FString::PrintfImpl(&local_170,L"Failed to get friends interface for %s");
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineFriend);
      if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_170.Data.AllocatorInstance.Data);
      }
    }
    FinishTest(this);
    return;
  }
  local_190.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_190.Data.ArrayNum = 0;
  local_190.Data.ArrayMax = 0;
  ::FName::ToString(&MCP_SUBSYSTEM,&local_190);
  iVar8 = (this->SubsystemName).Data.ArrayNum;
  if (iVar8 == local_190.Data.ArrayNum) {
    if (1 < iVar8) {
      iVar8 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(this->SubsystemName).Data.AllocatorInstance.Data,
                         (wchar_t *)local_190.Data.AllocatorInstance.Data);
      bVar17 = iVar8 == 0;
      goto LAB_14eccb8a7;
    }
  }
  else {
    bVar17 = iVar8 + local_190.Data.ArrayNum == 1;
LAB_14eccb8a7:
    if (!bVar17) goto LAB_14eccb8c1;
  }
  ::FString::operator=(&this->FriendsListName,L"TestFriends");
LAB_14eccb8c1:
  local_1e8 = (undefined1  [8])0x0;
  local_1e0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_1e0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1e8,
             (FWriteAccessScope *)&local_118);
  local_100 = &local_1e0;
  puVar12 = UE::Core::Private::DelegateAllocate(0x28,&local_1e0);
  if (puVar12 != (undefined8 *)0x0) {
    *puVar12 = &
               ___7__TCommonDelegateInstanceState___A6AXH_NAEBVFUniqueNetId__AEBVFString__2_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar13 = FDelegateHandle::GenerateNewID();
    puVar12[2] = uVar13;
    *puVar12 = &
               ___7__TBaseRawMethodDelegateInstance__0A_VFTestFriendsInterface____A6AXH_NAEBVFUniqueNetId__AEBVFString__2_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar12[4] = OnDeleteFriendComplete;
    puVar12[3] = this;
  }
  if (local_118.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_118.Accessor,&local_118);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDeleteFriendCompleteDelegate,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1e8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1e8,
             (FWriteAccessScope *)&local_160);
  if ((local_1e0.DelegateSize != 0) &&
     (local_1e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_1e0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_1e0,0,0,0x10);
    local_1e0.DelegateSize = 0;
  }
  if (local_160.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_160.Accessor,&local_160);
  }
  if (local_1e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_1e0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1e8);
  local_1d0 = (undefined1  [8])0x0;
  local_1c8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_1c8.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1d0,
             (FWriteAccessScope *)&local_f8);
  local_e0 = &local_1c8;
  puVar12 = UE::Core::Private::DelegateAllocate(0x28,&local_1c8);
  if (puVar12 != (undefined8 *)0x0) {
    *puVar12 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBVFUniqueNetId__AEBVFString___N1_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar13 = FDelegateHandle::GenerateNewID();
    puVar12[2] = uVar13;
    *puVar12 = &
               ___7__TBaseRawMethodDelegateInstance__0A_VFTestFriendsInterface____A6AXAEBVFUniqueNetId__AEBVFString___N1_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar12[4] = OnQueryRecentPlayersComplete;
    puVar12[3] = this;
  }
  if (local_f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f8.Accessor,&local_f8);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &this->OnQueryRecentPlayersCompleteDelegate,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1d0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1d0,
             (FWriteAccessScope *)&local_148);
  if ((local_1c8.DelegateSize != 0) &&
     (local_1c8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_1c8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_1c8,0,0,0x10);
    local_1c8.DelegateSize = 0;
  }
  if (local_148.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_148.Accessor,&local_148);
  }
  if (local_1c8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_1c8.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1d0);
  local_1b8 = (undefined1  [8])0x0;
  local_1b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_1b0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1b8,
             (FWriteAccessScope *)&local_d8);
  local_c0 = &local_1b0;
  puVar12 = UE::Core::Private::DelegateAllocate(0x28,&local_1b0);
  if (puVar12 != (undefined8 *)0x0) {
    *puVar12 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBVFUniqueNetId___NAEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar13 = FDelegateHandle::GenerateNewID();
    puVar12[2] = uVar13;
    *puVar12 = &
               ___7__TBaseRawMethodDelegateInstance__0A_VFTestFriendsInterface____A6AXAEBVFUniqueNetId___NAEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar12[4] = OnQueryBlockedPlayersComplete;
    puVar12[3] = this;
  }
  if (local_d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d8.Accessor,&local_d8);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &this->OnQueryBlockedPlayersCompleteDelegate,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1b8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1b8,
             (FWriteAccessScope *)&local_130);
  if ((local_1b0.DelegateSize != 0) &&
     (local_1b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_1b0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_1b0,0,0,0x10);
    local_1b0.DelegateSize = 0;
  }
  if (local_130.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_130.Accessor,&local_130);
  }
  if (local_1b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_1b0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1b8);
  plVar11 = (longlong *)(**(code **)(this->OnlineSub->_padding_ + 0x28))(this->OnlineSub,local_80);
  if ((*plVar11 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  puVar14 = (ulong64 *)
            (**(code **)(*(longlong *)*plVar11 + 0x148))
                      ((longlong *)*plVar11,local_b8,0,&this->OnDeleteFriendCompleteDelegate);
  (this->OnDeleteFriendCompleteDelegateHandle).ID = *puVar14;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_78);
  plVar11 = (longlong *)(**(code **)(this->OnlineSub->_padding_ + 0x28))(this->OnlineSub,local_70);
  if ((*plVar11 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  puVar14 = (ulong64 *)
            (**(code **)(*(longlong *)*plVar11 + 0x1f0))
                      ((longlong *)*plVar11,local_b0,&this->OnQueryRecentPlayersCompleteDelegate);
  (this->OnQueryRecentPlayersCompleteDelegateHandle).ID = *puVar14;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_68);
  plVar11 = (longlong *)(**(code **)(this->OnlineSub->_padding_ + 0x28))(this->OnlineSub,local_60);
  if ((*plVar11 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  puVar14 = (ulong64 *)
            (**(code **)(*(longlong *)*plVar11 + 0x210))
                      ((longlong *)*plVar11,local_a8,&this->OnQueryBlockedPlayersCompleteDelegate);
  (this->OnQueryBlockedPlayersCompleteDelegateHandle).ID = *puVar14;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_58);
  uVar16 = 0;
  if (0 < param_2->ArrayNum) {
    do {
      plVar11 = (longlong *)
                (**(code **)(this->OnlineSub->_padding_ + 0x80))(this->OnlineSub,local_50);
      if ((*plVar11 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar17)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      plVar11 = (longlong *)*plVar11;
      pcVar3 = *(code **)(*plVar11 + 0x120);
      uVar7 = 0;
      if ((int)uVar16 < param_2->ArrayNum) {
        uVar7 = ~uVar16 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (*pcVar3)(plVar11,&local_1a0,(param_2->AllocatorInstance).Data + (longlong)(int)uVar16 * 0x10)
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_48);
      if (local_1a0 != 0) {
        pTVar2 = &this->InvitesToSend;
        pFVar15 = (pTVar2->AllocatorInstance).Data;
        if (((pFVar15 <= (FScriptContainerElement *)&local_1a0) &&
            ((FScriptContainerElement *)&local_1a0 <
             pFVar15 + (longlong)(this->InvitesToSend).ArrayMax * 0x10)) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar17)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar8 = (this->InvitesToSend).ArrayNum;
        piVar1 = &(this->InvitesToSend).ArrayMax;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&pTVar2->AllocatorInstance,piVar1);
        }
        (this->InvitesToSend).ArrayNum = iVar8 + 1;
        pFVar15 = (pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
        *(longlong *)pFVar15 = local_1a0;
        *(TReferenceControllerBase<1> **)(pFVar15 + 8) = local_198;
        if (local_198 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_198->SharedReferenceCount = (atomic<int>)((int)local_198->SharedReferenceCount + 1);
          UNLOCK();
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_198)
      ;
      uVar16 = uVar16 + 1;
    } while ((int)uVar16 < param_2->ArrayNum);
  }
  if (4 < (byte)LogOnlineFriend._0_1_) {
    ::FString::PrintfImpl(&local_180,L"Starting friends interface tests for %s");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineFriend);
    if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_180.Data.AllocatorInstance.Data);
    }
  }
  StartNextTest(this);
  if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_190.Data.AllocatorInstance.Data);
  }
  return;
}

