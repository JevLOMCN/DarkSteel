// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 84

// Construct @ 14ee84b50

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FExternalAuthToken>::Construct
          (void *param_1,void *param_2)

{
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)((longlong)param_2 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = *(undefined4 *)((longlong)param_2 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  return;
}

// Construct @ 14ee84b80

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FAddSessionMember::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ee84b90

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FAuthBeginVerifiedAuthSession::Result>::
Construct(void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  return;
}

// Construct @ 14ee84ba0

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FAuthCancelVerifiedAuthTicket::Result>::
Construct(void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ee84bb0

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FAuthCreateAccount::Result>::Construct
          (void *param_1,void *param_2)

{
  longlong lVar1;
  
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  lVar1 = *(longlong *)((longlong)param_2 + 8);
  *(longlong *)((longlong)param_1 + 8) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return;
}

// Construct @ 14ee84bd0

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FAuthEndVerifiedAuthSession::Result>::
Construct(void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ee84be0

void __cdecl
UE::Core::Private::
TMoveConstructorCaller<UE::Online::FAuthGetLocalOnlineUserByOnlineAccountId::Result>::Construct
          (void *param_1,void *param_2)

{
  longlong lVar1;
  
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  lVar1 = *(longlong *)((longlong)param_2 + 8);
  *(longlong *)((longlong)param_1 + 8) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return;
}

// Construct @ 14ee84c00

void __cdecl
UE::Core::Private::
TMoveConstructorCaller<UE::Online::FAuthGetLocalOnlineUserByPlatformUserId::Result>::Construct
          (void *param_1,void *param_2)

{
  longlong lVar1;
  
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  lVar1 = *(longlong *)((longlong)param_2 + 8);
  *(longlong *)((longlong)param_1 + 8) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return;
}

// Construct @ 14ee84c20

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FAuthLinkAccount::Result>::Construct
          (void *param_1,void *param_2)

{
  longlong lVar1;
  
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  lVar1 = *(longlong *)((longlong)param_2 + 8);
  *(longlong *)((longlong)param_1 + 8) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return;
}

// Construct @ 14ee84c40

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FAuthLogin::Result>::Construct
          (void *param_1,void *param_2)

{
  longlong lVar1;
  
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  lVar1 = *(longlong *)((longlong)param_2 + 8);
  *(longlong *)((longlong)param_1 + 8) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return;
}

// Construct @ 14ee84c60

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FAuthLogout::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ee84c70

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FAuthModifyAccountAttributes::Result>::
Construct(void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ee84c80

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FAuthQueryExternalAuthToken::Result>::
Construct(void *param_1,void *param_2)

{
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)((longlong)param_2 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = *(undefined4 *)((longlong)param_2 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  return;
}

// Construct @ 14ee84cb0

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FAuthQueryExternalServerAuthTicket::Result>::
Construct(void *param_1,void *param_2)

{
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)((longlong)param_2 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = *(undefined4 *)((longlong)param_2 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  return;
}

// Construct @ 14ee84ce0

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FAuthQueryVerifiedAuthTicket::Result>::
Construct(void *param_1,void *param_2)

{
  *(undefined4 *)param_1 = *(undefined4 *)param_2;
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = *(undefined4 *)((longlong)param_2 + 0x18);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  return;
}

// Construct @ 14ee84d20

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FBatchQueryPresence::Result>::Construct
          (void *param_1,void *param_2)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)param_2 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined8 *)((longlong)param_2 + 8) = 0;
  return;
}

// Construct @ 14ee84d50

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FCommerceCheckout::Result>::Construct
          (void *param_1,void *param_2)

{
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != -1) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(undefined8 *)param_2 = 0;
    *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_2 + 8);
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    *(undefined8 *)((longlong)param_2 + 8) = 0;
  }
  return;
}

// Construct @ 14ee84d90

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FCommerceQueryEntitlements::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ee84da0

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FCommerceQueryOffers::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ee84db0

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FCommerceQueryOffersById::Result>::Construct
          (void *param_1,void *param_2)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)param_2 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined8 *)((longlong)param_2 + 8) = 0;
  return;
}

// Construct @ 14ee84de0

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FCommerceQueryTransactionEntitlements::Result>
::Construct(void *param_1,void *param_2)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)param_2 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined8 *)((longlong)param_2 + 8) = 0;
  return;
}

// Construct @ 14ee84e10

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FCommerceRedeemEntitlement::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ee84e20

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FCommerceRetrieveS2SToken::Result>::Construct
          (void *param_1,void *param_2)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)param_2 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined8 *)((longlong)param_2 + 8) = 0;
  return;
}

// Construct @ 14ee84e50

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FCommerceShowStoreUI::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ee84e60

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FCreateLobby::Result>::Construct
          (void *param_1,void *param_2)

{
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)((longlong)param_2 + 8) = 0;
  *(undefined8 *)param_2 = 0;
  return;
}

// Construct @ 14ee84e80

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FCreateSession::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ee84e90

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FDeclineLobbyInvitation::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ee84ea0

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FExternalUIShowFriendsUI::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ee84eb0

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FExternalUIShowLoginUI::Result>::Construct
          (void *param_1,void *param_2)

{
  longlong lVar1;
  
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  lVar1 = *(longlong *)((longlong)param_2 + 8);
  *(longlong *)((longlong)param_1 + 8) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return;
}

// Construct @ 14ee84ed0

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FFindLobbies::Result>::Construct
          (void *param_1,void *param_2)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)param_2 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined8 *)((longlong)param_2 + 8) = 0;
  return;
}

// Construct @ 14ee84f00

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FFindSessions::Result>::Construct
          (void *param_1,void *param_2)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)param_2 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined8 *)((longlong)param_2 + 8) = 0;
  return;
}

// Construct @ 14ee84f30

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FFunctionalTestLobbies::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ee84f40

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FInviteLobbyMember::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ee84f50

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FJoinLobby::Result>::Construct
          (void *param_1,void *param_2)

{
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)((longlong)param_2 + 8) = 0;
  *(undefined8 *)param_2 = 0;
  return;
}

// Construct @ 14ee84f70

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FJoinSession::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ee84f80

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FKickLobbyMember::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ee84f90

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FLeaveLobby::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ee84fa0

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FLeaveSession::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ee84fb0

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FModifyLobbyAttributes::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ee84fc0

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FModifyLobbyJoinPolicy::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ee84fd0

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FModifyLobbyMemberAttributes::Result>::
Construct(void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ee84fe0

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FModifyLobbySchema::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ee84ff0

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FPartialUpdatePresence::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ee85000

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FPromoteLobbyMember::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ee85010

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FQueryAchievementDefinitions::Result>::
Construct(void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ee85020

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FQueryAchievementStates::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ee85030

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FQueryPresence::Result>::Construct
          (void *param_1,void *param_2)

{
  longlong lVar1;
  
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  lVar1 = *(longlong *)((longlong)param_2 + 8);
  *(longlong *)((longlong)param_1 + 8) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return;
}

// Construct @ 14ee85050

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FQueryUserPrivilege::Result>::Construct
          (void *param_1,void *param_2)

{
  *(undefined4 *)param_1 = *(undefined4 *)param_2;
  return;
}

// Construct @ 14ee85060

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FReadEntriesAroundRank::Result>::Construct
          (void *param_1,void *param_2)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)param_2 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined8 *)((longlong)param_2 + 8) = 0;
  return;
}

// Construct @ 14ee85090

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FReadEntriesAroundUser::Result>::Construct
          (void *param_1,void *param_2)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)param_2 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined8 *)((longlong)param_2 + 8) = 0;
  return;
}

// Construct @ 14ee850c0

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FReadEntriesForUsers::Result>::Construct
          (void *param_1,void *param_2)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)param_2 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined8 *)((longlong)param_2 + 8) = 0;
  return;
}

// Construct @ 14ee850f0

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FRejectSessionInvite::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ee85100

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FRemoveSessionMember::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ee85110

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FRestoreLobbies::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ee85120

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FSendSessionInvite::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ee85130

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FStartMatchmaking::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ee85140

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FUnlockAchievements::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ee85150

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FUpdatePresence::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ee85160

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FUpdateSessionSettings::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ee85170

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FWriteLeaderboardScores::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ee85180

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FOnlineError>::Construct
          (void *param_1,void *param_2)

{
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)((longlong)param_2 + 8) = 0;
  *(undefined8 *)param_2 = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
  *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)param_2 + 0x18);
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_2 + 0x20);
  return;
}

// Construct @ 14ef90670

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FAcceptFriendInvite::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ef90680

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FBatchQueryStats::Result>::Construct
          (void *param_1,void *param_2)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)param_2 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined8 *)((longlong)param_2 + 8) = 0;
  return;
}

// Construct @ 14ef906b0

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FBlockUser::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ef906c0

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FQueryBlockedUsers::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ef906d0

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FQueryFriends::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ef906e0

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FQueryStats::Result>::Construct
          (void *param_1,void *param_2)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  if (param_1 != param_2) {
    TSparseArray<TSparseSetElement<TTuple<FString,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(param_1,0,0);
    if (*(void **)param_1 != (void *)0x0) {
      FMemory::Free(*(void **)param_1);
    }
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(undefined8 *)param_2 = 0;
    *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_2 + 8);
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    *(undefined8 *)((longlong)param_2 + 8) = 0;
    if ((void *)((longlong)param_1 + 0x10) != (void *)((longlong)param_2 + 0x10)) {
      if (*(longlong *)((longlong)param_2 + 0x20) == 0) {
        memmove((void *)((longlong)param_1 + 0x10),(void *)((longlong)param_2 + 0x10),0x10);
      }
      if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)param_1 + 0x20));
      }
      *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_2 + 0x20);
      *(undefined8 *)((longlong)param_2 + 0x20) = 0;
      *(undefined4 *)((longlong)param_1 + 0x28) = *(undefined4 *)((longlong)param_2 + 0x28);
      *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
      *(undefined8 *)((longlong)param_2 + 0x28) = 0;
    }
    *(undefined4 *)((longlong)param_1 + 0x30) = *(undefined4 *)((longlong)param_2 + 0x30);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    *(undefined4 *)((longlong)param_2 + 0x30) = 0xffffffff;
    *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  }
  if (*(longlong *)((longlong)param_2 + 0x40) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x38) = *(undefined4 *)((longlong)param_2 + 0x38);
  }
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  *(undefined8 *)((longlong)param_1 + 0x40) = *(undefined8 *)((longlong)param_2 + 0x40);
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = *(undefined4 *)((longlong)param_2 + 0x48);
  *(undefined4 *)((longlong)param_2 + 0x48) = 0;
  return;
}

// Construct @ 14ef906f0

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FQueryUserAvatar::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ef90700

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FQueryUserInfo::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ef90710

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FRejectFriendInvite::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ef90720

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FResetStats::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ef90730

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FSendFriendInvite::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ef90740

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FShowUserProfile::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ef90750

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FTitleFileEnumerateFiles::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ef90760

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FTitleFileReadFile::Result>::Construct
          (void *param_1,void *param_2)

{
  longlong lVar1;
  
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  lVar1 = *(longlong *)((longlong)param_2 + 8);
  *(longlong *)((longlong)param_1 + 8) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return;
}

// Construct @ 14ef90780

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FTriggerEvent::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ef90790

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FUpdateStats::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ef907a0

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FUserFileCopyFile::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ef907b0

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FUserFileDeleteFile::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ef907c0

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FUserFileEnumerateFiles::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ef907d0

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FUserFileReadFile::Result>::Construct
          (void *param_1,void *param_2)

{
  longlong lVar1;
  
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  lVar1 = *(longlong *)((longlong)param_2 + 8);
  *(longlong *)((longlong)param_1 + 8) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return;
}

// Construct @ 14ef907f0

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::FUserFileWriteFile::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14eff8420

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Online::Private::FFunctionalTestLoginUser::Result>::
Construct(void *param_1,void *param_2)

{
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)((longlong)param_2 + 8) = 0;
  *(undefined8 *)param_2 = 0;
  return;
}

// Construct @ 14eff8440

void __cdecl
UE::Core::Private::
TMoveConstructorCaller<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>::Construct
          (void *param_1,void *param_2)

{
  *(undefined4 *)param_1 = *(undefined4 *)param_2;
  return;
}

