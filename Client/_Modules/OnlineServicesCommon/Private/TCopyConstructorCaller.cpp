// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 80

// Construct @ 14ee84320

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FAddSessionMember::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ee84330

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FAuthBeginVerifiedAuthSession::Result>::
Construct(void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  return;
}

// Construct @ 14ee84340

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FAuthCancelVerifiedAuthTicket::Result>::
Construct(void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ee84350

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FAuthCreateAccount::Result>::Construct
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

// Construct @ 14ee84370

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FAuthEndVerifiedAuthSession::Result>::
Construct(void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ee84380

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FAuthLinkAccount::Result>::Construct
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

// Construct @ 14ee843a0

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FAuthLogin::Result>::Construct
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

// Construct @ 14ee843c0

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FAuthLogout::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ee843d0

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FAuthModifyAccountAttributes::Result>::
Construct(void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ee843e0

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FAuthQueryExternalAuthToken::Result>::
Construct(void *param_1,void *param_2)

{
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  ::FString::FString((FString *)((longlong)param_1 + 8),(FString *)((longlong)param_2 + 8));
  return;
}

// Construct @ 14ee84400

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FAuthQueryExternalServerAuthTicket::Result>::
Construct(void *param_1,void *param_2)

{
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  ::FString::FString((FString *)((longlong)param_1 + 8),(FString *)((longlong)param_2 + 8));
  return;
}

// Construct @ 14ee84420

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FAuthQueryVerifiedAuthTicket::Result>::
Construct(void *param_1,void *param_2)

{
  *(undefined4 *)param_1 = *(undefined4 *)param_2;
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
  ::FString::FString((FString *)((longlong)param_1 + 0x10),(FString *)((longlong)param_2 + 0x10));
  return;
}

// Construct @ 14ee84440

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FBatchQueryPresence::Result>::Construct
          (void *param_1,void *param_2)

{
  int iVar1;
  TSharedRef<UE::Online::FUserPresence_const_,1> *pTVar2;
  
  *(undefined8 *)param_1 = 0;
  iVar1 = *(int *)((longlong)param_2 + 8);
  pTVar2 = *(TSharedRef<UE::Online::FUserPresence_const_,1> **)param_2;
  *(int *)((longlong)param_1 + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar1,0,param_1,iVar1,(int *)((longlong)param_1 + 0xc));
  ConstructItems<TSharedRef<UE::Online::FUserPresence_const_,1>,TSharedRef<UE::Online::FUserPresence_const_,1>,int>
            (*(void **)param_1,pTVar2,iVar1);
  return;
}

// Construct @ 14ee844c0

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FCommerceCheckout::Result>::Construct
          (void *param_1,void *param_2)

{
  int iVar1;
  void *_Src;
  
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  if (*(int *)((longlong)param_2 + 0xc) == -1) {
    return;
  }
  *(undefined8 *)param_1 = 0;
  iVar1 = *(int *)((longlong)param_2 + 8);
  _Src = *(void **)param_2;
  *(int *)((longlong)param_1 + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,iVar1,0,param_1,iVar1,(int *)((longlong)param_1 + 0xc));
  memcpy(*(void **)param_1,_Src,(longlong)iVar1 * 2);
  return;
}

// Construct @ 14ee844e0

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FCommerceQueryEntitlements::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ee844f0

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FCommerceQueryOffers::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ee84500

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FCommerceQueryOffersById::Result>::Construct
          (void *param_1,void *param_2)

{
  int iVar1;
  FString *pFVar2;
  
  *(undefined8 *)param_1 = 0;
  iVar1 = *(int *)((longlong)param_2 + 8);
  pFVar2 = *(FString **)param_2;
  *(int *)((longlong)param_1 + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar1,0,param_1,iVar1,(int *)((longlong)param_1 + 0xc));
  ConstructItems<FString,FString,int>(*(void **)param_1,pFVar2,iVar1);
  return;
}

// Construct @ 14ee84580

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FCommerceQueryTransactionEntitlements::Result>
::Construct(void *param_1,void *param_2)

{
  int iVar1;
  FEntitlement *pFVar2;
  
  *(undefined8 *)param_1 = 0;
  iVar1 = *(int *)((longlong)param_2 + 8);
  pFVar2 = *(FEntitlement **)param_2;
  *(int *)((longlong)param_1 + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x50,8,iVar1,0,param_1,iVar1,(int *)((longlong)param_1 + 0xc));
  ConstructItems<UE::Online::FEntitlement,UE::Online::FEntitlement,int>
            (*(void **)param_1,pFVar2,iVar1);
  return;
}

// Construct @ 14ee84600

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FCommerceRedeemEntitlement::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ee84610

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FCommerceRetrieveS2SToken::Result>::Construct
          (void *param_1,void *param_2)

{
  int iVar1;
  void *_Src;
  
  *(undefined8 *)param_1 = 0;
  iVar1 = *(int *)((longlong)param_2 + 8);
  _Src = *(void **)param_2;
  *(int *)((longlong)param_1 + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,iVar1,0,param_1,iVar1,(int *)((longlong)param_1 + 0xc));
  memcpy(*(void **)param_1,_Src,(longlong)iVar1);
  return;
}

// Construct @ 14ee84690

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FCommerceShowStoreUI::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ee846a0

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FCreateLobby::Result>::Construct
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

// Construct @ 14ee846c0

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FCreateSession::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ee846d0

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FDeclineLobbyInvitation::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ee846e0

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FExternalUIShowFriendsUI::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ee846f0

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FExternalUIShowLoginUI::Result>::Construct
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

// Construct @ 14ee84710

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FFindLobbies::Result>::Construct
          (void *param_1,void *param_2)

{
  int iVar1;
  TSharedRef<UE::Online::FLobby_const_,1> *pTVar2;
  
  *(undefined8 *)param_1 = 0;
  iVar1 = *(int *)((longlong)param_2 + 8);
  pTVar2 = *(TSharedRef<UE::Online::FLobby_const_,1> **)param_2;
  *(int *)((longlong)param_1 + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar1,0,param_1,iVar1,(int *)((longlong)param_1 + 0xc));
  ConstructItems<TSharedRef<UE::Online::FLobby_const_,1>,TSharedRef<UE::Online::FLobby_const_,1>,int>
            (*(void **)param_1,pTVar2,iVar1);
  return;
}

// Construct @ 14ee84790

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FFindSessions::Result>::Construct
          (void *param_1,void *param_2)

{
  int iVar1;
  void *_Src;
  
  *(undefined8 *)param_1 = 0;
  iVar1 = *(int *)((longlong)param_2 + 8);
  _Src = *(void **)param_2;
  *(int *)((longlong)param_1 + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,iVar1,0,param_1,iVar1,(int *)((longlong)param_1 + 0xc));
  memcpy(*(void **)param_1,_Src,(longlong)iVar1 << 2);
  return;
}

// Construct @ 14ee847a0

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FFunctionalTestLobbies::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ee847b0

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FInviteLobbyMember::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ee847c0

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FJoinLobby::Result>::Construct
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

// Construct @ 14ee847e0

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FJoinSession::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ee847f0

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FKickLobbyMember::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ee84800

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FLeaveLobby::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ee84810

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FLeaveSession::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ee84820

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FModifyLobbyAttributes::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ee84830

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FModifyLobbyJoinPolicy::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ee84840

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FModifyLobbyMemberAttributes::Result>::
Construct(void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ee84850

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FModifyLobbySchema::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ee84860

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FPartialUpdatePresence::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ee84870

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FPromoteLobbyMember::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ee84880

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FQueryAchievementDefinitions::Result>::
Construct(void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ee84890

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FQueryAchievementStates::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ee848a0

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FQueryPresence::Result>::Construct
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

// Construct @ 14ee848c0

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FQueryUserPrivilege::Result>::Construct
          (void *param_1,void *param_2)

{
  *(undefined4 *)param_1 = *(undefined4 *)param_2;
  return;
}

// Construct @ 14ee848d0

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FReadEntriesAroundRank::Result>::Construct
          (void *param_1,void *param_2)

{
  int iVar1;
  void *_Src;
  
  *(undefined8 *)param_1 = 0;
  iVar1 = *(int *)((longlong)param_2 + 8);
  _Src = *(void **)param_2;
  *(int *)((longlong)param_1 + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar1,0,param_1,iVar1,(int *)((longlong)param_1 + 0xc));
  memcpy(*(void **)param_1,_Src,(longlong)iVar1 << 4);
  return;
}

// Construct @ 14ee84960

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FReadEntriesAroundUser::Result>::Construct
          (void *param_1,void *param_2)

{
  int iVar1;
  void *_Src;
  
  *(undefined8 *)param_1 = 0;
  iVar1 = *(int *)((longlong)param_2 + 8);
  _Src = *(void **)param_2;
  *(int *)((longlong)param_1 + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar1,0,param_1,iVar1,(int *)((longlong)param_1 + 0xc));
  memcpy(*(void **)param_1,_Src,(longlong)iVar1 << 4);
  return;
}

// Construct @ 14ee849f0

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FReadEntriesForUsers::Result>::Construct
          (void *param_1,void *param_2)

{
  int iVar1;
  void *_Src;
  
  *(undefined8 *)param_1 = 0;
  iVar1 = *(int *)((longlong)param_2 + 8);
  _Src = *(void **)param_2;
  *(int *)((longlong)param_1 + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar1,0,param_1,iVar1,(int *)((longlong)param_1 + 0xc));
  memcpy(*(void **)param_1,_Src,(longlong)iVar1 << 4);
  return;
}

// Construct @ 14ee84a80

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FRejectSessionInvite::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ee84a90

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FRemoveSessionMember::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ee84aa0

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FRestoreLobbies::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ee84ab0

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FSendSessionInvite::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ee84ac0

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FStartMatchmaking::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ee84ad0

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FUnlockAchievements::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ee84ae0

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FUpdatePresence::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ee84af0

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FUpdateSessionSettings::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ee84b00

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FWriteLeaderboardScores::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ee84b10

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FOnlineError>::Construct
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
  *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
  lVar1 = *(longlong *)((longlong)param_2 + 0x18);
  *(longlong *)((longlong)param_1 + 0x18) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_2 + 0x20);
  return;
}

// Construct @ 14ef90460

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FAcceptFriendInvite::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ef90470

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FBatchQueryStats::Result>::Construct
          (void *param_1,void *param_2)

{
  int iVar1;
  FUserStats *pFVar2;
  
  *(undefined8 *)param_1 = 0;
  iVar1 = *(int *)((longlong)param_2 + 8);
  pFVar2 = *(FUserStats **)param_2;
  *(int *)((longlong)param_1 + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x58,8,iVar1,0,param_1,iVar1,(int *)((longlong)param_1 + 0xc));
  ConstructItems<UE::Online::FUserStats,UE::Online::FUserStats,int>(*(void **)param_1,pFVar2,iVar1);
  return;
}

// Construct @ 14ef904f0

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FBlockUser::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ef90500

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FQueryBlockedUsers::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ef90510

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FQueryFriends::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ef90520

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FQueryStats::Result>::Construct
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
  TSet<TTuple<FString,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FString,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
  ::operator=(param_1,param_2);
  return;
}

// Construct @ 14ef90560

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FQueryUserAvatar::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ef90570

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FQueryUserInfo::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ef90580

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FRejectFriendInvite::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ef90590

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FResetStats::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ef905a0

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FSendFriendInvite::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ef905b0

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FShowUserProfile::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ef905c0

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FTitleFileEnumerateFiles::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ef905d0

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FTitleFileReadFile::Result>::Construct
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

// Construct @ 14ef905f0

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FTriggerEvent::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ef90600

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FUpdateStats::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ef90610

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FUserFileCopyFile::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ef90620

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FUserFileDeleteFile::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ef90630

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FUserFileEnumerateFiles::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14ef90640

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FUserFileReadFile::Result>::Construct
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

// Construct @ 14ef90660

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::FUserFileWriteFile::Result>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 14eff8410

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Online::Private::FFunctionalTestLogoutUser::Result>::
Construct(void *param_1,void *param_2)

{
  return;
}

