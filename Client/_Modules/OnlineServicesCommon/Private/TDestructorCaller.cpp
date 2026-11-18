// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 120

// Destruct @ 14eeb0820

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FAddSessionMember::Result>::Destruct(void *param_1)

{
  return;
}

// Destruct @ 14eeb0830

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FAuthBeginVerifiedAuthSession::Result>::Destruct
          (void *param_1)

{
  return;
}

// Destruct @ 14eeb0840

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FAuthCancelVerifiedAuthTicket::Result>::Destruct
          (void *param_1)

{
  return;
}

// Destruct @ 14eeb0850

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FAuthCreateAccount::Result>::Destruct
          (void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 8));
  return;
}

// Destruct @ 14eeb0860

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FAuthEndVerifiedAuthSession::Result>::Destruct
          (void *param_1)

{
  return;
}

// Destruct @ 14eeb0870

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FAuthGetAllLocalOnlineUsers::Result>::Destruct
          (void *param_1)

{
  DestructItems<TSharedRef<UE::Online::FAccountInfo,1>,int>
            (*(TSharedRef<UE::Online::FAccountInfo,1> **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Destruct @ 14eeb08b0

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FAuthGetLinkAccountContinuationId::Result>::
Destruct(void *param_1)

{
  return;
}

// Destruct @ 14eeb08c0

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FAuthGetRelyingParty::Result>::Destruct
          (void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Destruct @ 14eeb08e0

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FAuthLinkAccount::Result>::Destruct(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 8));
  return;
}

// Destruct @ 14eeb08f0

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FAuthLogin::Result>::Destruct(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 8));
  return;
}

// Destruct @ 14eeb0900

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FAuthLogout::Result>::Destruct(void *param_1)

{
  return;
}

// Destruct @ 14eeb0910

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FAuthModifyAccountAttributes::Result>::Destruct
          (void *param_1)

{
  return;
}

// Destruct @ 14eeb0920

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FAuthQueryExternalAuthToken::Result>::Destruct
          (void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Destruct @ 14eeb0940

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FAuthQueryExternalServerAuthTicket::Result>::
Destruct(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Destruct @ 14eeb0960

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FAuthQueryVerifiedAuthTicket::Result>::Destruct
          (void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x10);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Destruct @ 14eeb0980

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FBatchQueryPresence::Result>::Destruct
          (void *param_1)

{
  DestructItems<TSharedRef<UE::Online::FUserPresence_const_,1>,int>
            (*(TSharedRef<UE::Online::FUserPresence_const_,1> **)param_1,
             *(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Destruct @ 14eeb09c0

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FClearPresenceSession::Result>::Destruct
          (void *param_1)

{
  return;
}

// Destruct @ 14eeb09d0

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FCommerceCheckout::Result>::Destruct(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  if ((*(int *)((longlong)param_1 + 0xc) != -1) &&
     (pvVar1 = *(void **)param_1, pvVar1 != (void *)0x0)) {
    if (pvVar1 != (void *)0x0) {
      if (FLowLevelMemTracker::EnabledState != Disabled) {
        this = FLowLevelMemTracker::TrackerInstance;
        if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
          this = FLowLevelMemTracker::Construct();
        }
        FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
      }
      if (UE::Private::GMalloc == (FMalloc *)0x0) {
        FMemory::GCreateMalloc();
      }
      else {
        DoGamethreadHook(2);
      }
      (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
    }
    return;
  }
  return;
}

// Destruct @ 14eeb09f0

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FCommerceGetEntitlements::Result>::Destruct
          (void *param_1)

{
  DestructItems<UE::Online::FEntitlement,int>
            (*(FEntitlement **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Destruct @ 14eeb0a30

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FCommerceGetOffers::Result>::Destruct
          (void *param_1)

{
  DestructItems<UE::Online::FOffer,int>(*(FOffer **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Destruct @ 14eeb0a70

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FCommerceGetOffersById::Result>::Destruct
          (void *param_1)

{
  DestructItems<UE::Online::FOffer,int>(*(FOffer **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Destruct @ 14eeb0ab0

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FCommerceQueryEntitlements::Result>::Destruct
          (void *param_1)

{
  return;
}

// Destruct @ 14eeb0ac0

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FCommerceQueryOffers::Result>::Destruct
          (void *param_1)

{
  return;
}

// Destruct @ 14eeb0ad0

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FCommerceQueryOffersById::Result>::Destruct
          (void *param_1)

{
  DestructItems<FString,int>(*(FString **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Destruct @ 14eeb0b10

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FCommerceQueryTransactionEntitlements::Result>::
Destruct(void *param_1)

{
  DestructItems<UE::Online::FEntitlement,int>
            (*(FEntitlement **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Destruct @ 14eeb0b50

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FCommerceRedeemEntitlement::Result>::Destruct
          (void *param_1)

{
  return;
}

// Destruct @ 14eeb0b60

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FCommerceRetrieveS2SToken::Result>::Destruct
          (void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Destruct @ 14eeb0b80

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FCommerceShowStoreUI::Result>::Destruct
          (void *param_1)

{
  return;
}

// Destruct @ 14eeb0b90

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FCreateLobby::Result>::Destruct(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 8));
  return;
}

// Destruct @ 14eeb0ba0

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FCreateSession::Result>::Destruct(void *param_1)

{
  return;
}

// Destruct @ 14eeb0bb0

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FDeclineLobbyInvitation::Result>::Destruct
          (void *param_1)

{
  return;
}

// Destruct @ 14eeb0bc0

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FDisplayAchievementUI::Result>::Destruct
          (void *param_1)

{
  return;
}

// Destruct @ 14eeb0bd0

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FExternalUIShowFriendsUI::Result>::Destruct
          (void *param_1)

{
  return;
}

// Destruct @ 14eeb0be0

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FExternalUIShowLoginUI::Result>::Destruct
          (void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 8));
  return;
}

// Destruct @ 14eeb0bf0

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FFindLobbies::Result>::Destruct(void *param_1)

{
  DestructItems<TSharedRef<UE::Online::FLobby_const_,1>,int>
            (*(TSharedRef<UE::Online::FLobby_const_,1> **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Destruct @ 14eeb0c30

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FFindSessions::Result>::Destruct(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Destruct @ 14eeb0c50

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FFunctionalTestLobbies::Result>::Destruct
          (void *param_1)

{
  return;
}

// Destruct @ 14eeb0c60

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FGetAchievementDefinition::Result>::Destruct
          (void *param_1)

{
  DestructItems<UE::Online::FAchievementStatDefinition,int>
            (*(FAchievementStatDefinition **)((longlong)param_1 + 0x88),
             *(int *)((longlong)param_1 + 0x90));
  if (*(void **)((longlong)param_1 + 0x88) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x88));
  }
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  if (*(void **)((longlong)param_1 + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x60));
  }
  if (*(longlong **)((longlong)param_1 + 0x50) != (longlong *)0x0) {
    (**(code **)(**(longlong **)((longlong)param_1 + 0x50) + 0x10))();
  }
  if (*(longlong **)((longlong)param_1 + 0x40) != (longlong *)0x0) {
    (**(code **)(**(longlong **)((longlong)param_1 + 0x40) + 0x10))();
  }
  if (*(longlong **)((longlong)param_1 + 0x30) != (longlong *)0x0) {
    (**(code **)(**(longlong **)((longlong)param_1 + 0x30) + 0x10))();
  }
  if (*(longlong **)((longlong)param_1 + 0x20) != (longlong *)0x0) {
    (**(code **)(**(longlong **)((longlong)param_1 + 0x20) + 0x10))();
  }
  if (*(longlong **)((longlong)param_1 + 0x10) != (longlong *)0x0) {
    (**(code **)(**(longlong **)((longlong)param_1 + 0x10) + 0x10))();
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Destruct @ 14eeb0c70

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FGetAchievementIds::Result>::Destruct
          (void *param_1)

{
  DestructItems<FString,int>(*(FString **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Destruct @ 14eeb0cb0

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FGetAchievementState::Result>::Destruct
          (void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Destruct @ 14eeb0cd0

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FGetAllSessionInvites::Result>::Destruct
          (void *param_1)

{
  DestructItems<TSharedRef<UE::Online::ISessionInvite_const_,1>,int>
            (*(TSharedRef<UE::Online::ISessionInvite_const_,1> **)param_1,
             *(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Destruct @ 14eeb0d10

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FGetAllSessions::Result>::Destruct(void *param_1)

{
  DestructItems<TSharedRef<UE::Online::ISession_const_,1>,int>
            (*(TSharedRef<UE::Online::ISession_const_,1> **)param_1,*(int *)((longlong)param_1 + 8))
  ;
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Destruct @ 14eeb0d50

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FGetCachedPresence::Result>::Destruct
          (void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 8));
  return;
}

// Destruct @ 14eeb0d60

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FGetCachedStats::Result>::Destruct(void *param_1)

{
  DestructItems<UE::Online::FUserStats,int>(*(FUserStats **)param_1,*(int *)((longlong)param_1 + 8))
  ;
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Destruct @ 14eeb0da0

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FGetConnectionStatus::Result>::Destruct
          (void *param_1)

{
  return;
}

// Destruct @ 14eeb0db0

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FGetJoinedLobbies::Result>::Destruct(void *param_1)

{
  DestructItems<TSharedRef<UE::Online::FLobby_const_,1>,int>
            (*(TSharedRef<UE::Online::FLobby_const_,1> **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Destruct @ 14eeb0df0

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FGetMutableSessionById::Result>::Destruct
          (void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 8));
  return;
}

// Destruct @ 14eeb0e00

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FGetMutableSessionByName::Result>::Destruct
          (void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 8));
  return;
}

// Destruct @ 14eeb0e10

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FGetPresenceLobby::Result>::Destruct(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 8));
  return;
}

// Destruct @ 14eeb0e20

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FGetPresenceSession::Result>::Destruct
          (void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 8));
  return;
}

// Destruct @ 14eeb0e30

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FGetReceivedInvitations::Result>::Destruct
          (void *param_1)

{
  return;
}

// Destruct @ 14eeb0e40

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FGetResolvedConnectString::Result>::Destruct
          (void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Destruct @ 14eeb0e60

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FGetSessionById::Result>::Destruct(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 8));
  return;
}

// Destruct @ 14eeb0e70

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FGetSessionByName::Result>::Destruct(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 8));
  return;
}

// Destruct @ 14eeb0e80

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FGetSessionInviteById::Result>::Destruct
          (void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 8));
  return;
}

// Destruct @ 14eeb0e90

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FGetSessionName::Result>::Destruct(void *param_1)

{
  return;
}

// Destruct @ 14eeb0ea0

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FInviteLobbyMember::Result>::Destruct
          (void *param_1)

{
  return;
}

// Destruct @ 14eeb0eb0

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FIsPresenceLobby::Result>::Destruct(void *param_1)

{
  return;
}

// Destruct @ 14eeb0ec0

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FIsPresenceSession::Result>::Destruct
          (void *param_1)

{
  return;
}

// Destruct @ 14eeb0ed0

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FJoinLobby::Result>::Destruct(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 8));
  return;
}

// Destruct @ 14eeb0ee0

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FJoinSession::Result>::Destruct(void *param_1)

{
  return;
}

// Destruct @ 14eeb0ef0

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FKickLobbyMember::Result>::Destruct(void *param_1)

{
  return;
}

// Destruct @ 14eeb0f00

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FLeaveLobby::Result>::Destruct(void *param_1)

{
  return;
}

// Destruct @ 14eeb0f10

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FLeaveSession::Result>::Destruct(void *param_1)

{
  return;
}

// Destruct @ 14eeb0f20

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FLobbyClientDataPrepareClientChanges::Result>::
Destruct(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x150) = 0;
  if (*(void **)((longlong)param_1 + 0x148) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x148));
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x108));
  *(undefined4 *)((longlong)param_1 + 0x100) = 0;
  if (*(void **)((longlong)param_1 + 0xf8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xf8));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaServiceAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaServiceAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaServiceAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0xb8));
  *(undefined4 *)((longlong)param_1 + 0xb0) = 0;
  if (*(void **)((longlong)param_1 + 0xa8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xa8));
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x68));
  *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaServiceAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaServiceAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaServiceAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x18));
  return;
}

// Destruct @ 14eeb0f30

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FLobbyClientDataPrepareServiceSnapshot::Result>::
Destruct(void *param_1)

{
  return;
}

// Destruct @ 14eeb0f40

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FModifyLobbyAttributes::Result>::Destruct
          (void *param_1)

{
  return;
}

// Destruct @ 14eeb0f50

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FModifyLobbyJoinPolicy::Result>::Destruct
          (void *param_1)

{
  return;
}

// Destruct @ 14eeb0f60

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FModifyLobbyMemberAttributes::Result>::Destruct
          (void *param_1)

{
  return;
}

// Destruct @ 14eeb0f70

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FModifyLobbySchema::Result>::Destruct
          (void *param_1)

{
  return;
}

// Destruct @ 14eeb0f80

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FPartialUpdatePresence::Result>::Destruct
          (void *param_1)

{
  return;
}

// Destruct @ 14eeb0f90

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FPromoteLobbyMember::Result>::Destruct
          (void *param_1)

{
  return;
}

// Destruct @ 14eeb0fa0

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FQueryAchievementDefinitions::Result>::Destruct
          (void *param_1)

{
  return;
}

// Destruct @ 14eeb0fb0

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FQueryAchievementStates::Result>::Destruct
          (void *param_1)

{
  return;
}

// Destruct @ 14eeb0fc0

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FQueryPresence::Result>::Destruct(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 8));
  return;
}

// Destruct @ 14eeb0fd0

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FQueryUserPrivilege::Result>::Destruct
          (void *param_1)

{
  return;
}

// Destruct @ 14eeb0fe0

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FReadEntriesAroundRank::Result>::Destruct
          (void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Destruct @ 14eeb1000

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FReadEntriesAroundUser::Result>::Destruct
          (void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Destruct @ 14eeb1020

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FReadEntriesForUsers::Result>::Destruct
          (void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Destruct @ 14eeb1040

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FRejectSessionInvite::Result>::Destruct
          (void *param_1)

{
  return;
}

// Destruct @ 14eeb1050

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FRemoveSessionMember::Result>::Destruct
          (void *param_1)

{
  return;
}

// Destruct @ 14eeb1060

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FRestoreLobbies::Result>::Destruct(void *param_1)

{
  return;
}

// Destruct @ 14eeb1070

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FSendSessionInvite::Result>::Destruct
          (void *param_1)

{
  return;
}

// Destruct @ 14eeb1080

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FSetPresenceSession::Result>::Destruct
          (void *param_1)

{
  return;
}

// Destruct @ 14eeb1090

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FStartMatchmaking::Result>::Destruct(void *param_1)

{
  return;
}

// Destruct @ 14eeb10a0

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FUnlockAchievements::Result>::Destruct
          (void *param_1)

{
  return;
}

// Destruct @ 14eeb10b0

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FUpdatePresence::Result>::Destruct(void *param_1)

{
  return;
}

// Destruct @ 14eeb10c0

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FUpdateSessionSettings::Result>::Destruct
          (void *param_1)

{
  return;
}

// Destruct @ 14eeb10d0

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FWriteLeaderboardScores::Result>::Destruct
          (void *param_1)

{
  return;
}

// Destruct @ 14ef9e770

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FAcceptFriendInvite::Result>::Destruct
          (void *param_1)

{
  return;
}

// Destruct @ 14ef9e780

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FBatchQueryStats::Result>::Destruct(void *param_1)

{
  DestructItems<UE::Online::FUserStats,int>(*(FUserStats **)param_1,*(int *)((longlong)param_1 + 8))
  ;
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Destruct @ 14ef9e7c0

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FBlockUser::Result>::Destruct(void *param_1)

{
  return;
}

// Destruct @ 14ef9e7d0

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FGetBlockedUsers::Result>::Destruct(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Destruct @ 14ef9e7f0

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FGetFriends::Result>::Destruct(void *param_1)

{
  DestructItems<TSharedRef<UE::Online::FFriend,1>,int>
            (*(TSharedRef<UE::Online::FFriend,1> **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Destruct @ 14ef9e830

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FGetUserAvatar::Result>::Destruct(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Destruct @ 14ef9e850

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FGetUserInfo::Result>::Destruct(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 8));
  return;
}

// Destruct @ 14ef9e860

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FQueryBlockedUsers::Result>::Destruct
          (void *param_1)

{
  return;
}

// Destruct @ 14ef9e870

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FQueryFriends::Result>::Destruct(void *param_1)

{
  return;
}

// Destruct @ 14ef9e880

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FQueryStats::Result>::Destruct(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  TSparseArray<TSparseSetElement<TTuple<FString,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1);
  return;
}

// Destruct @ 14ef9e8c0

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FQueryUserAvatar::Result>::Destruct(void *param_1)

{
  return;
}

// Destruct @ 14ef9e8d0

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FQueryUserInfo::Result>::Destruct(void *param_1)

{
  return;
}

// Destruct @ 14ef9e8e0

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FRejectFriendInvite::Result>::Destruct
          (void *param_1)

{
  return;
}

// Destruct @ 14ef9e8f0

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FResetStats::Result>::Destruct(void *param_1)

{
  return;
}

// Destruct @ 14ef9e900

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FSendFriendInvite::Result>::Destruct(void *param_1)

{
  return;
}

// Destruct @ 14ef9e910

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FShowUserProfile::Result>::Destruct(void *param_1)

{
  return;
}

// Destruct @ 14ef9e920

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FTitleFileEnumerateFiles::Result>::Destruct
          (void *param_1)

{
  return;
}

// Destruct @ 14ef9e930

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FTitleFileGetEnumeratedFiles::Result>::Destruct
          (void *param_1)

{
  DestructItems<FString,int>(*(FString **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Destruct @ 14ef9e970

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FTitleFileReadFile::Result>::Destruct
          (void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 8));
  return;
}

// Destruct @ 14ef9e980

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FTriggerEvent::Result>::Destruct(void *param_1)

{
  return;
}

// Destruct @ 14ef9e990

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FUpdateStats::Result>::Destruct(void *param_1)

{
  return;
}

// Destruct @ 14ef9e9a0

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FUserFileCopyFile::Result>::Destruct(void *param_1)

{
  return;
}

// Destruct @ 14ef9e9b0

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FUserFileDeleteFile::Result>::Destruct
          (void *param_1)

{
  return;
}

// Destruct @ 14ef9e9c0

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FUserFileEnumerateFiles::Result>::Destruct
          (void *param_1)

{
  return;
}

// Destruct @ 14ef9e9d0

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FUserFileGetEnumeratedFiles::Result>::Destruct
          (void *param_1)

{
  DestructItems<FString,int>(*(FString **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Destruct @ 14ef9ea10

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FUserFileReadFile::Result>::Destruct(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 8));
  return;
}

// Destruct @ 14ef9ea20

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::FUserFileWriteFile::Result>::Destruct
          (void *param_1)

{
  return;
}

// Destruct @ 14effbb60

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::Private::FFunctionalTestLoginUser::Result>::
Destruct(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 8));
  return;
}

// Destruct @ 14effbb70

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::Private::FFunctionalTestLogoutAllUsers::Result>::
Destruct(void *param_1)

{
  return;
}

// Destruct @ 14effbb80

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::Private::FFunctionalTestLogoutUser::Result>::
Destruct(void *param_1)

{
  return;
}

// Destruct @ 14effbb90

void __cdecl
UE::Core::Private::TDestructorCaller<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>
::Destruct(void *param_1)

{
  return;
}

