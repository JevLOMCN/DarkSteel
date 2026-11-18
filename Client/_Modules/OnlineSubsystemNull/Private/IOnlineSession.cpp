// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemNull
// Functions: 95

// IOnlineSession @ 14ed11b80

IOnlineSession * __thiscall IOnlineSession::IOnlineSession(IOnlineSession *this)

{
  *(undefined8 *)&(this->OnCreateSessionCompleteDelegates).field_0x18 = 2;
  this->_padding_ = (longlong)&___7IOnlineSession__6B_;
  *(undefined8 *)&this->OnCreateSessionCompleteDelegates = 0;
  *(undefined8 *)&(this->OnCreateSessionCompleteDelegates).field_0x8 = 0;
  *(undefined8 *)&(this->OnCreateSessionCompleteDelegates).field_0x10 = 0;
  *(undefined8 *)&this->OnStartSessionCompleteDelegates = 0;
  *(undefined8 *)&(this->OnStartSessionCompleteDelegates).field_0x8 = 0;
  *(undefined8 *)&(this->OnStartSessionCompleteDelegates).field_0x10 = 0;
  *(undefined8 *)&this->OnUpdateSessionCompleteDelegates = 0;
  *(undefined8 *)&(this->OnUpdateSessionCompleteDelegates).field_0x8 = 0;
  *(undefined8 *)&(this->OnUpdateSessionCompleteDelegates).field_0x10 = 0;
  *(undefined8 *)&this->OnEndSessionCompleteDelegates = 0;
  *(undefined8 *)&(this->OnEndSessionCompleteDelegates).field_0x8 = 0;
  *(undefined8 *)&(this->OnEndSessionCompleteDelegates).field_0x10 = 0;
  *(undefined8 *)&this->OnDestroySessionCompleteDelegates = 0;
  *(undefined8 *)&(this->OnDestroySessionCompleteDelegates).field_0x8 = 0;
  *(undefined8 *)&(this->OnDestroySessionCompleteDelegates).field_0x10 = 0;
  *(undefined8 *)&this->OnMatchmakingCompleteDelegates = 0;
  *(undefined8 *)&(this->OnMatchmakingCompleteDelegates).field_0x8 = 0;
  *(undefined8 *)&(this->OnMatchmakingCompleteDelegates).field_0x10 = 0;
  *(undefined8 *)&this->OnCancelMatchmakingCompleteDelegates = 0;
  *(undefined8 *)&(this->OnCancelMatchmakingCompleteDelegates).field_0x8 = 0;
  *(undefined8 *)&(this->OnCancelMatchmakingCompleteDelegates).field_0x10 = 0;
  *(undefined8 *)&this->OnFindSessionsCompleteDelegates = 0;
  *(undefined8 *)&(this->OnFindSessionsCompleteDelegates).field_0x8 = 0;
  *(undefined8 *)&(this->OnFindSessionsCompleteDelegates).field_0x10 = 0;
  *(undefined8 *)&this->OnCancelFindSessionsCompleteDelegates = 0;
  *(undefined8 *)&(this->OnCancelFindSessionsCompleteDelegates).field_0x8 = 0;
  *(undefined8 *)&(this->OnCancelFindSessionsCompleteDelegates).field_0x10 = 0;
  *(undefined8 *)&this->OnPingSearchResultsCompleteDelegates = 0;
  *(undefined8 *)&(this->OnPingSearchResultsCompleteDelegates).field_0x8 = 0;
  *(undefined8 *)&(this->OnPingSearchResultsCompleteDelegates).field_0x10 = 0;
  *(undefined8 *)&this->OnJoinSessionCompleteDelegates = 0;
  *(undefined8 *)&(this->OnJoinSessionCompleteDelegates).field_0x8 = 0;
  *(undefined8 *)&(this->OnJoinSessionCompleteDelegates).field_0x10 = 0;
  *(undefined8 *)&this->OnSessionParticipantJoinedDelegates = 0;
  *(undefined8 *)&(this->OnSessionParticipantJoinedDelegates).field_0x8 = 0;
  *(undefined8 *)&(this->OnSessionParticipantJoinedDelegates).field_0x10 = 0;
  *(undefined8 *)&this->OnSessionParticipantLeftDelegates = 0;
  *(undefined8 *)&(this->OnSessionParticipantLeftDelegates).field_0x8 = 0;
  *(undefined8 *)&(this->OnSessionParticipantLeftDelegates).field_0x10 = 0;
  *(undefined8 *)&this->OnQosDataRequestedDelegates = 0;
  *(undefined8 *)&(this->OnQosDataRequestedDelegates).field_0x8 = 0;
  *(undefined8 *)&(this->OnQosDataRequestedDelegates).field_0x10 = 0;
  *(undefined8 *)&this->OnSessionSettingsUpdatedDelegates = 0;
  *(undefined8 *)&(this->OnSessionSettingsUpdatedDelegates).field_0x8 = 0;
  *(undefined8 *)&(this->OnSessionSettingsUpdatedDelegates).field_0x10 = 0;
  *(undefined8 *)&this->OnSessionParticipantSettingsUpdatedDelegates = 0;
  *(undefined8 *)&(this->OnSessionParticipantSettingsUpdatedDelegates).field_0x8 = 0;
  *(undefined8 *)&(this->OnSessionParticipantSettingsUpdatedDelegates).field_0x10 = 0;
  *(undefined8 *)&(this->OnStartSessionCompleteDelegates).field_0x18 = 2;
  *(undefined8 *)&(this->OnUpdateSessionCompleteDelegates).field_0x18 = 2;
  *(undefined8 *)&(this->OnEndSessionCompleteDelegates).field_0x18 = 2;
  *(undefined8 *)&(this->OnDestroySessionCompleteDelegates).field_0x18 = 2;
  *(undefined8 *)&(this->OnMatchmakingCompleteDelegates).field_0x18 = 2;
  *(undefined8 *)&(this->OnCancelMatchmakingCompleteDelegates).field_0x18 = 2;
  *(undefined8 *)&(this->OnFindSessionsCompleteDelegates).field_0x18 = 2;
  *(undefined8 *)&(this->OnCancelFindSessionsCompleteDelegates).field_0x18 = 2;
  *(undefined8 *)&(this->OnPingSearchResultsCompleteDelegates).field_0x18 = 2;
  *(undefined8 *)&(this->OnJoinSessionCompleteDelegates).field_0x18 = 2;
  *(undefined8 *)&(this->OnSessionParticipantJoinedDelegates).field_0x18 = 2;
  *(undefined8 *)&(this->OnSessionParticipantLeftDelegates).field_0x18 = 2;
  *(undefined8 *)&(this->OnQosDataRequestedDelegates).field_0x18 = 2;
  *(undefined8 *)&(this->OnSessionSettingsUpdatedDelegates).field_0x18 = 2;
  *(undefined8 *)&(this->OnSessionParticipantSettingsUpdatedDelegates).field_0x18 = 2;
  *(undefined8 *)this->OnFindFriendSessionCompleteDelegates = 0;
  *(undefined8 *)&this->OnFindFriendSessionCompleteDelegates[0].field_0x8 = 0;
  *(undefined8 *)&this->OnFindFriendSessionCompleteDelegates[0].field_0x10 = 0;
  *(undefined8 *)&this->OnFindFriendSessionCompleteDelegates[0].field_0x18 = 2;
  *(undefined8 *)(this->OnFindFriendSessionCompleteDelegates + 1) = 0;
  *(undefined8 *)&this->OnFindFriendSessionCompleteDelegates[1].field_0x8 = 0;
  *(undefined8 *)&this->OnFindFriendSessionCompleteDelegates[1].field_0x10 = 0;
  *(undefined8 *)&this->OnFindFriendSessionCompleteDelegates[1].field_0x18 = 2;
  *(undefined8 *)(this->OnFindFriendSessionCompleteDelegates + 2) = 0;
  *(undefined8 *)&this->OnFindFriendSessionCompleteDelegates[2].field_0x8 = 0;
  *(undefined8 *)&this->OnFindFriendSessionCompleteDelegates[2].field_0x10 = 0;
  *(undefined8 *)&this->OnFindFriendSessionCompleteDelegates[2].field_0x18 = 2;
  *(undefined8 *)(this->OnFindFriendSessionCompleteDelegates + 3) = 0;
  *(undefined8 *)&this->OnFindFriendSessionCompleteDelegates[3].field_0x8 = 0;
  *(undefined8 *)&this->OnFindFriendSessionCompleteDelegates[3].field_0x10 = 0;
  *(undefined8 *)&this->OnFindFriendSessionCompleteDelegates[3].field_0x18 = 2;
  *(undefined8 *)&this->OnSessionUserInviteAcceptedDelegates = 0;
  *(undefined8 *)&(this->OnSessionUserInviteAcceptedDelegates).field_0x8 = 0;
  *(undefined8 *)&(this->OnSessionUserInviteAcceptedDelegates).field_0x10 = 0;
  *(undefined8 *)&this->OnSessionInviteReceivedDelegates = 0;
  *(undefined8 *)&(this->OnSessionInviteReceivedDelegates).field_0x8 = 0;
  *(undefined8 *)&(this->OnSessionInviteReceivedDelegates).field_0x10 = 0;
  *(undefined8 *)&this->OnRegisterPlayersCompleteDelegates = 0;
  *(undefined8 *)&(this->OnRegisterPlayersCompleteDelegates).field_0x8 = 0;
  *(undefined8 *)&(this->OnRegisterPlayersCompleteDelegates).field_0x10 = 0;
  *(undefined8 *)&this->OnUnregisterPlayersCompleteDelegates = 0;
  *(undefined8 *)&(this->OnUnregisterPlayersCompleteDelegates).field_0x8 = 0;
  *(undefined8 *)&(this->OnUnregisterPlayersCompleteDelegates).field_0x10 = 0;
  *(undefined8 *)&this->OnSessionFailureDelegates = 0;
  *(undefined8 *)&(this->OnSessionFailureDelegates).field_0x8 = 0;
  *(undefined8 *)&(this->OnSessionFailureDelegates).field_0x10 = 0;
  *(undefined8 *)&this->OnDestroySessionRequestedDelegates = 0;
  *(undefined8 *)&(this->OnDestroySessionRequestedDelegates).field_0x8 = 0;
  *(undefined8 *)&(this->OnDestroySessionRequestedDelegates).field_0x10 = 0;
  *(undefined8 *)&(this->OnSessionUserInviteAcceptedDelegates).field_0x18 = 2;
  *(undefined8 *)&(this->OnSessionInviteReceivedDelegates).field_0x18 = 2;
  *(undefined8 *)&(this->OnRegisterPlayersCompleteDelegates).field_0x18 = 2;
  *(undefined8 *)&(this->OnUnregisterPlayersCompleteDelegates).field_0x18 = 2;
  *(undefined8 *)&(this->OnSessionFailureDelegates).field_0x18 = 2;
  *(undefined8 *)&(this->OnDestroySessionRequestedDelegates).field_0x18 = 2;
  return this;
}

// ~IOnlineSession @ 14ed13610

void __thiscall IOnlineSession::~IOnlineSession(IOnlineSession *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7IOnlineSession__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnDestroySessionRequestedDelegates).field_0x8,
             *(int *)&(this->OnDestroySessionRequestedDelegates).field_0x10);
  pvVar1 = *(void **)&(this->OnDestroySessionRequestedDelegates).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDestroySessionRequestedDelegates);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnSessionFailureDelegates).field_0x8,
             *(int *)&(this->OnSessionFailureDelegates).field_0x10);
  pvVar1 = *(void **)&(this->OnSessionFailureDelegates).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSessionFailureDelegates);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnUnregisterPlayersCompleteDelegates).field_0x8,
             *(int *)&(this->OnUnregisterPlayersCompleteDelegates).field_0x10);
  pvVar1 = *(void **)&(this->OnUnregisterPlayersCompleteDelegates).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnUnregisterPlayersCompleteDelegates);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnRegisterPlayersCompleteDelegates).field_0x8,
             *(int *)&(this->OnRegisterPlayersCompleteDelegates).field_0x10);
  pvVar1 = *(void **)&(this->OnRegisterPlayersCompleteDelegates).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnRegisterPlayersCompleteDelegates);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnSessionInviteReceivedDelegates).field_0x8,
             *(int *)&(this->OnSessionInviteReceivedDelegates).field_0x10);
  pvVar1 = *(void **)&(this->OnSessionInviteReceivedDelegates).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSessionInviteReceivedDelegates);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnSessionUserInviteAcceptedDelegates).field_0x8,
             *(int *)&(this->OnSessionUserInviteAcceptedDelegates).field_0x10);
  pvVar1 = *(void **)&(this->OnSessionUserInviteAcceptedDelegates).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSessionUserInviteAcceptedDelegates);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &this->OnFindFriendSessionCompleteDelegates[3].field_0x8,
             *(int *)&this->OnFindFriendSessionCompleteDelegates[3].field_0x10);
  pvVar1 = *(void **)&this->OnFindFriendSessionCompleteDelegates[3].field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(this->OnFindFriendSessionCompleteDelegates + 3));
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &this->OnFindFriendSessionCompleteDelegates[2].field_0x8,
             *(int *)&this->OnFindFriendSessionCompleteDelegates[2].field_0x10);
  pvVar1 = *(void **)&this->OnFindFriendSessionCompleteDelegates[2].field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(this->OnFindFriendSessionCompleteDelegates + 2));
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &this->OnFindFriendSessionCompleteDelegates[1].field_0x8,
             *(int *)&this->OnFindFriendSessionCompleteDelegates[1].field_0x10);
  pvVar1 = *(void **)&this->OnFindFriendSessionCompleteDelegates[1].field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(this->OnFindFriendSessionCompleteDelegates + 1));
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &this->OnFindFriendSessionCompleteDelegates[0].field_0x8,
             *(int *)&this->OnFindFriendSessionCompleteDelegates[0].field_0x10);
  pvVar1 = *(void **)&this->OnFindFriendSessionCompleteDelegates[0].field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this->OnFindFriendSessionCompleteDelegates);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnSessionParticipantSettingsUpdatedDelegates).field_0x8,
             *(int *)&(this->OnSessionParticipantSettingsUpdatedDelegates).field_0x10);
  pvVar1 = *(void **)&(this->OnSessionParticipantSettingsUpdatedDelegates).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSessionParticipantSettingsUpdatedDelegates);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnSessionSettingsUpdatedDelegates).field_0x8,
             *(int *)&(this->OnSessionSettingsUpdatedDelegates).field_0x10);
  pvVar1 = *(void **)&(this->OnSessionSettingsUpdatedDelegates).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSessionSettingsUpdatedDelegates);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnQosDataRequestedDelegates).field_0x8,
             *(int *)&(this->OnQosDataRequestedDelegates).field_0x10);
  pvVar1 = *(void **)&(this->OnQosDataRequestedDelegates).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnQosDataRequestedDelegates);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnSessionParticipantLeftDelegates).field_0x8,
             *(int *)&(this->OnSessionParticipantLeftDelegates).field_0x10);
  pvVar1 = *(void **)&(this->OnSessionParticipantLeftDelegates).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSessionParticipantLeftDelegates);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnSessionParticipantJoinedDelegates).field_0x8,
             *(int *)&(this->OnSessionParticipantJoinedDelegates).field_0x10);
  pvVar1 = *(void **)&(this->OnSessionParticipantJoinedDelegates).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSessionParticipantJoinedDelegates);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnJoinSessionCompleteDelegates).field_0x8,
             *(int *)&(this->OnJoinSessionCompleteDelegates).field_0x10);
  pvVar1 = *(void **)&(this->OnJoinSessionCompleteDelegates).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnJoinSessionCompleteDelegates);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnPingSearchResultsCompleteDelegates).field_0x8,
             *(int *)&(this->OnPingSearchResultsCompleteDelegates).field_0x10);
  pvVar1 = *(void **)&(this->OnPingSearchResultsCompleteDelegates).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPingSearchResultsCompleteDelegates);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnCancelFindSessionsCompleteDelegates).field_0x8,
             *(int *)&(this->OnCancelFindSessionsCompleteDelegates).field_0x10);
  pvVar1 = *(void **)&(this->OnCancelFindSessionsCompleteDelegates).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnCancelFindSessionsCompleteDelegates);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnFindSessionsCompleteDelegates).field_0x8,
             *(int *)&(this->OnFindSessionsCompleteDelegates).field_0x10);
  pvVar1 = *(void **)&(this->OnFindSessionsCompleteDelegates).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnFindSessionsCompleteDelegates);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnCancelMatchmakingCompleteDelegates).field_0x8,
             *(int *)&(this->OnCancelMatchmakingCompleteDelegates).field_0x10);
  pvVar1 = *(void **)&(this->OnCancelMatchmakingCompleteDelegates).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnCancelMatchmakingCompleteDelegates);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnMatchmakingCompleteDelegates).field_0x8,
             *(int *)&(this->OnMatchmakingCompleteDelegates).field_0x10);
  pvVar1 = *(void **)&(this->OnMatchmakingCompleteDelegates).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMatchmakingCompleteDelegates);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnDestroySessionCompleteDelegates).field_0x8,
             *(int *)&(this->OnDestroySessionCompleteDelegates).field_0x10);
  pvVar1 = *(void **)&(this->OnDestroySessionCompleteDelegates).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDestroySessionCompleteDelegates);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnEndSessionCompleteDelegates).field_0x8,
             *(int *)&(this->OnEndSessionCompleteDelegates).field_0x10);
  pvVar1 = *(void **)&(this->OnEndSessionCompleteDelegates).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnEndSessionCompleteDelegates);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnUpdateSessionCompleteDelegates).field_0x8,
             *(int *)&(this->OnUpdateSessionCompleteDelegates).field_0x10);
  pvVar1 = *(void **)&(this->OnUpdateSessionCompleteDelegates).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnUpdateSessionCompleteDelegates);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnStartSessionCompleteDelegates).field_0x8,
             *(int *)&(this->OnStartSessionCompleteDelegates).field_0x10);
  pvVar1 = *(void **)&(this->OnStartSessionCompleteDelegates).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnStartSessionCompleteDelegates);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnCreateSessionCompleteDelegates).field_0x8,
             *(int *)&(this->OnCreateSessionCompleteDelegates).field_0x10);
  pvVar1 = *(void **)&(this->OnCreateSessionCompleteDelegates).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnCreateSessionCompleteDelegates);
  return;
}

// AddOnCancelFindSessionsCompleteDelegate_Handle @ 14ed1a620

FDelegateHandle __thiscall
IOnlineSession::AddOnCancelFindSessionsCompleteDelegate_Handle
          (IOnlineSession *this,TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *param_1)

{
  atomic<unsigned___int64> aVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *in_R8;
  undefined1 local_res8 [8];
  FReadAccessScope local_28;
  
  TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy>::Add
            ((TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy> *)
             &this->OnCancelFindSessionsCompleteDelegates,
             (TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *)local_res8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(in_R8,&local_28);
  if ((*(int *)&in_R8[2].AccessDetector.State == 0) ||
     (aVar1 = in_R8[1].AccessDetector.State, aVar1 == (atomic<unsigned___int64>)0x0)) {
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined8 *)(**(code **)(*(longlong *)aVar1 + 0x40))(aVar1,local_res8);
    uVar3 = *puVar2;
  }
  *(undefined8 *)param_1 = uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddOnCancelMatchmakingCompleteDelegate_Handle @ 14ed1a690

FDelegateHandle __thiscall
IOnlineSession::AddOnCancelMatchmakingCompleteDelegate_Handle
          (IOnlineSession *this,
          TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *param_1)

{
  atomic<unsigned___int64> aVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *in_R8;
  undefined1 local_res8 [8];
  FReadAccessScope local_28;
  
  TMulticastDelegateRegistration<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>::Add
            ((TMulticastDelegateRegistration<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *)
             &this->OnCancelMatchmakingCompleteDelegates,
             (TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *)local_res8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(in_R8,&local_28);
  if ((*(int *)&in_R8[2].AccessDetector.State == 0) ||
     (aVar1 = in_R8[1].AccessDetector.State, aVar1 == (atomic<unsigned___int64>)0x0)) {
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined8 *)(**(code **)(*(longlong *)aVar1 + 0x40))(aVar1,local_res8);
    uVar3 = *puVar2;
  }
  *(undefined8 *)param_1 = uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddOnCreateSessionCompleteDelegate_Handle @ 14ed1a7e0

FDelegateHandle __thiscall
IOnlineSession::AddOnCreateSessionCompleteDelegate_Handle
          (IOnlineSession *this,
          TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *param_1)

{
  atomic<unsigned___int64> aVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *in_R8;
  undefined1 local_res8 [8];
  FReadAccessScope local_28;
  
  TMulticastDelegateRegistration<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>::Add
            ((TMulticastDelegateRegistration<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *)
             &this->OnCreateSessionCompleteDelegates,
             (TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *)local_res8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(in_R8,&local_28);
  if ((*(int *)&in_R8[2].AccessDetector.State == 0) ||
     (aVar1 = in_R8[1].AccessDetector.State, aVar1 == (atomic<unsigned___int64>)0x0)) {
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined8 *)(**(code **)(*(longlong *)aVar1 + 0x40))(aVar1,local_res8);
    uVar3 = *puVar2;
  }
  *(undefined8 *)param_1 = uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddOnDestroySessionCompleteDelegate_Handle @ 14ed1a850

FDelegateHandle __thiscall
IOnlineSession::AddOnDestroySessionCompleteDelegate_Handle
          (IOnlineSession *this,
          TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *param_1)

{
  atomic<unsigned___int64> aVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *in_R8;
  undefined1 local_res8 [8];
  FReadAccessScope local_28;
  
  TMulticastDelegateRegistration<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>::Add
            ((TMulticastDelegateRegistration<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *)
             &this->OnDestroySessionCompleteDelegates,
             (TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *)local_res8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(in_R8,&local_28);
  if ((*(int *)&in_R8[2].AccessDetector.State == 0) ||
     (aVar1 = in_R8[1].AccessDetector.State, aVar1 == (atomic<unsigned___int64>)0x0)) {
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined8 *)(**(code **)(*(longlong *)aVar1 + 0x40))(aVar1,local_res8);
    uVar3 = *puVar2;
  }
  *(undefined8 *)param_1 = uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddOnDestroySessionRequestedDelegate_Handle @ 14ed1a8c0

FDelegateHandle __thiscall
IOnlineSession::AddOnDestroySessionRequestedDelegate_Handle
          (IOnlineSession *this,
          TDelegate<void___cdecl(int,FName),FDefaultDelegateUserPolicy> *param_1)

{
  atomic<unsigned___int64> aVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *in_R8;
  undefined1 local_res8 [8];
  FReadAccessScope local_28;
  
  TMulticastDelegateRegistration<void___cdecl(int,FName),FDefaultDelegateUserPolicy>::Add
            ((TMulticastDelegateRegistration<void___cdecl(int,FName),FDefaultDelegateUserPolicy> *)
             &this->OnDestroySessionRequestedDelegates,
             (TDelegate<void___cdecl(int,FName),FDefaultDelegateUserPolicy> *)local_res8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(in_R8,&local_28);
  if ((*(int *)&in_R8[2].AccessDetector.State == 0) ||
     (aVar1 = in_R8[1].AccessDetector.State, aVar1 == (atomic<unsigned___int64>)0x0)) {
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined8 *)(**(code **)(*(longlong *)aVar1 + 0x40))(aVar1,local_res8);
    uVar3 = *puVar2;
  }
  *(undefined8 *)param_1 = uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddOnEndSessionCompleteDelegate_Handle @ 14ed1a930

FDelegateHandle __thiscall
IOnlineSession::AddOnEndSessionCompleteDelegate_Handle
          (IOnlineSession *this,
          TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *param_1)

{
  atomic<unsigned___int64> aVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *in_R8;
  undefined1 local_res8 [8];
  FReadAccessScope local_28;
  
  TMulticastDelegateRegistration<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>::Add
            ((TMulticastDelegateRegistration<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *)
             &this->OnEndSessionCompleteDelegates,
             (TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *)local_res8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(in_R8,&local_28);
  if ((*(int *)&in_R8[2].AccessDetector.State == 0) ||
     (aVar1 = in_R8[1].AccessDetector.State, aVar1 == (atomic<unsigned___int64>)0x0)) {
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined8 *)(**(code **)(*(longlong *)aVar1 + 0x40))(aVar1,local_res8);
    uVar3 = *puVar2;
  }
  *(undefined8 *)param_1 = uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddOnFindFriendSessionCompleteDelegate_Handle @ 14ed1aa10

FDelegateHandle __thiscall
IOnlineSession::AddOnFindFriendSessionCompleteDelegate_Handle
          (IOnlineSession *this,int param_1,
          TDelegate<void___cdecl(int,bool,TArray<FOnlineSessionSearchResult,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
          *param_2)

{
  FDelegateHandle FVar1;
  undefined4 in_register_00000014;
  undefined8 *puVar2;
  TDelegate<void___cdecl(int,bool,TArray<FOnlineSessionSearchResult,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
  local_res10;
  
  puVar2 = (undefined8 *)CONCAT44(in_register_00000014,param_1);
  *puVar2 = 0;
  if ((uint)param_2 < 4) {
    FVar1 = TMulticastDelegateRegistration<void___cdecl(int,bool,TArray<FOnlineSessionSearchResult,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
            ::Add((TMulticastDelegateRegistration<void___cdecl(int,bool,TArray<FOnlineSessionSearchResult,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
                   *)(this->OnFindFriendSessionCompleteDelegates + (int)(uint)param_2),&local_res10)
    ;
    *puVar2 = *(undefined8 *)FVar1.ID;
  }
  return (FDelegateHandle)(ulong64)puVar2;
}

// AddOnFindSessionsCompleteDelegate_Handle @ 14ed1aa60

FDelegateHandle __thiscall
IOnlineSession::AddOnFindSessionsCompleteDelegate_Handle
          (IOnlineSession *this,TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *param_1)

{
  atomic<unsigned___int64> aVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *in_R8;
  undefined1 local_res8 [8];
  FReadAccessScope local_28;
  
  TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy>::Add
            ((TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy> *)
             &this->OnFindSessionsCompleteDelegates,
             (TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *)local_res8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(in_R8,&local_28);
  if ((*(int *)&in_R8[2].AccessDetector.State == 0) ||
     (aVar1 = in_R8[1].AccessDetector.State, aVar1 == (atomic<unsigned___int64>)0x0)) {
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined8 *)(**(code **)(*(longlong *)aVar1 + 0x40))(aVar1,local_res8);
    uVar3 = *puVar2;
  }
  *(undefined8 *)param_1 = uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddOnJoinSessionCompleteDelegate_Handle @ 14ed1aad0

FDelegateHandle __thiscall
IOnlineSession::AddOnJoinSessionCompleteDelegate_Handle
          (IOnlineSession *this,
          TDelegate<void___cdecl(FName,EOnJoinSessionCompleteResult::Type),FDefaultDelegateUserPolicy>
          *param_1)

{
  atomic<unsigned___int64> aVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *in_R8;
  undefined1 local_res8 [8];
  FReadAccessScope local_28;
  
  TMulticastDelegateRegistration<void___cdecl(FName,enum_EOnJoinSessionCompleteResult::Type),FDefaultDelegateUserPolicy>
  ::Add(&this->OnJoinSessionCompleteDelegates,
        (TDelegate<void___cdecl(FName,EOnJoinSessionCompleteResult::Type),FDefaultDelegateUserPolicy>
         *)local_res8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(in_R8,&local_28);
  if ((*(int *)&in_R8[2].AccessDetector.State == 0) ||
     (aVar1 = in_R8[1].AccessDetector.State, aVar1 == (atomic<unsigned___int64>)0x0)) {
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined8 *)(**(code **)(*(longlong *)aVar1 + 0x40))(aVar1,local_res8);
    uVar3 = *puVar2;
  }
  *(undefined8 *)param_1 = uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddOnMatchmakingCompleteDelegate_Handle @ 14ed1ae60

FDelegateHandle __thiscall
IOnlineSession::AddOnMatchmakingCompleteDelegate_Handle
          (IOnlineSession *this,
          TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *param_1)

{
  atomic<unsigned___int64> aVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *in_R8;
  undefined1 local_res8 [8];
  FReadAccessScope local_28;
  
  TMulticastDelegateRegistration<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>::Add
            ((TMulticastDelegateRegistration<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *)
             &this->OnMatchmakingCompleteDelegates,
             (TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *)local_res8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(in_R8,&local_28);
  if ((*(int *)&in_R8[2].AccessDetector.State == 0) ||
     (aVar1 = in_R8[1].AccessDetector.State, aVar1 == (atomic<unsigned___int64>)0x0)) {
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined8 *)(**(code **)(*(longlong *)aVar1 + 0x40))(aVar1,local_res8);
    uVar3 = *puVar2;
  }
  *(undefined8 *)param_1 = uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddOnPingSearchResultsCompleteDelegate_Handle @ 14ed1aed0

FDelegateHandle __thiscall
IOnlineSession::AddOnPingSearchResultsCompleteDelegate_Handle
          (IOnlineSession *this,TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *param_1)

{
  atomic<unsigned___int64> aVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *in_R8;
  undefined1 local_res8 [8];
  FReadAccessScope local_28;
  
  TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy>::Add
            ((TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy> *)
             &this->OnPingSearchResultsCompleteDelegates,
             (TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *)local_res8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(in_R8,&local_28);
  if ((*(int *)&in_R8[2].AccessDetector.State == 0) ||
     (aVar1 = in_R8[1].AccessDetector.State, aVar1 == (atomic<unsigned___int64>)0x0)) {
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined8 *)(**(code **)(*(longlong *)aVar1 + 0x40))(aVar1,local_res8);
    uVar3 = *puVar2;
  }
  *(undefined8 *)param_1 = uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddOnQosDataRequestedDelegate_Handle @ 14ed1af40

FDelegateHandle __thiscall
IOnlineSession::AddOnQosDataRequestedDelegate_Handle
          (IOnlineSession *this,TDelegate<void___cdecl(FName),FDefaultDelegateUserPolicy> *param_1)

{
  atomic<unsigned___int64> aVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *in_R8;
  undefined1 local_res8 [8];
  FReadAccessScope local_28;
  
  TMulticastDelegateRegistration<void___cdecl(FName),FDefaultDelegateUserPolicy>::Add
            ((TMulticastDelegateRegistration<void___cdecl(FName),FDefaultDelegateUserPolicy> *)
             &this->OnQosDataRequestedDelegates,
             (TDelegate<void___cdecl(FName),FDefaultDelegateUserPolicy> *)local_res8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(in_R8,&local_28);
  if ((*(int *)&in_R8[2].AccessDetector.State == 0) ||
     (aVar1 = in_R8[1].AccessDetector.State, aVar1 == (atomic<unsigned___int64>)0x0)) {
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined8 *)(**(code **)(*(longlong *)aVar1 + 0x40))(aVar1,local_res8);
    uVar3 = *puVar2;
  }
  *(undefined8 *)param_1 = uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddOnRegisterPlayersCompleteDelegate_Handle @ 14ed1b020

FDelegateHandle __thiscall
IOnlineSession::AddOnRegisterPlayersCompleteDelegate_Handle
          (IOnlineSession *this,
          TDelegate<void___cdecl(FName,TArray<TSharedRef<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_>_const_&,bool),FDefaultDelegateUserPolicy>
          *param_1)

{
  atomic<unsigned___int64> aVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *in_R8;
  undefined1 local_res8 [8];
  FReadAccessScope local_28;
  
  TMulticastDelegateRegistration<void___cdecl(FName,TArray<TSharedRef<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_>_const_&,bool),FDefaultDelegateUserPolicy>
  ::Add((TMulticastDelegateRegistration<void___cdecl(FName,TArray<TSharedRef<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_>_const_&,bool),FDefaultDelegateUserPolicy>
         *)&this->OnRegisterPlayersCompleteDelegates,
        (TDelegate<void___cdecl(FName,TArray<TSharedRef<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_>_const_&,bool),FDefaultDelegateUserPolicy>
         *)local_res8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(in_R8,&local_28);
  if ((*(int *)&in_R8[2].AccessDetector.State == 0) ||
     (aVar1 = in_R8[1].AccessDetector.State, aVar1 == (atomic<unsigned___int64>)0x0)) {
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined8 *)(**(code **)(*(longlong *)aVar1 + 0x40))(aVar1,local_res8);
    uVar3 = *puVar2;
  }
  *(undefined8 *)param_1 = uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddOnSessionFailureDelegate_Handle @ 14ed1b090

FDelegateHandle __thiscall
IOnlineSession::AddOnSessionFailureDelegate_Handle
          (IOnlineSession *this,
          TDelegate<void___cdecl(FUniqueNetId_const_&,ESessionFailure::Type),FDefaultDelegateUserPolicy>
          *param_1)

{
  atomic<unsigned___int64> aVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *in_R8;
  undefined1 local_res8 [8];
  FReadAccessScope local_28;
  
  TMulticastDelegateRegistration<void___cdecl(FUniqueNetId_const_&,enum_ESessionFailure::Type),FDefaultDelegateUserPolicy>
  ::Add(&this->OnSessionFailureDelegates,
        (TDelegate<void___cdecl(FUniqueNetId_const_&,ESessionFailure::Type),FDefaultDelegateUserPolicy>
         *)local_res8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(in_R8,&local_28);
  if ((*(int *)&in_R8[2].AccessDetector.State == 0) ||
     (aVar1 = in_R8[1].AccessDetector.State, aVar1 == (atomic<unsigned___int64>)0x0)) {
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined8 *)(**(code **)(*(longlong *)aVar1 + 0x40))(aVar1,local_res8);
    uVar3 = *puVar2;
  }
  *(undefined8 *)param_1 = uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddOnSessionInviteReceivedDelegate_Handle @ 14ed1b100

FDelegateHandle __thiscall
IOnlineSession::AddOnSessionInviteReceivedDelegate_Handle
          (IOnlineSession *this,
          TDelegate<void___cdecl(FUniqueNetId_const_&,FUniqueNetId_const_&,FString_const_&,FOnlineSessionSearchResult_const_&),FDefaultDelegateUserPolicy>
          *param_1)

{
  atomic<unsigned___int64> aVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *in_R8;
  undefined1 local_res8 [8];
  FReadAccessScope local_28;
  
  TMulticastDelegateRegistration<void___cdecl(FUniqueNetId_const_&,FUniqueNetId_const_&,FString_const_&,FOnlineSessionSearchResult_const_&),FDefaultDelegateUserPolicy>
  ::Add((TMulticastDelegateRegistration<void___cdecl(FUniqueNetId_const_&,FUniqueNetId_const_&,FString_const_&,FOnlineSessionSearchResult_const_&),FDefaultDelegateUserPolicy>
         *)&this->OnSessionInviteReceivedDelegates,
        (TDelegate<void___cdecl(FUniqueNetId_const_&,FUniqueNetId_const_&,FString_const_&,FOnlineSessionSearchResult_const_&),FDefaultDelegateUserPolicy>
         *)local_res8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(in_R8,&local_28);
  if ((*(int *)&in_R8[2].AccessDetector.State == 0) ||
     (aVar1 = in_R8[1].AccessDetector.State, aVar1 == (atomic<unsigned___int64>)0x0)) {
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined8 *)(**(code **)(*(longlong *)aVar1 + 0x40))(aVar1,local_res8);
    uVar3 = *puVar2;
  }
  *(undefined8 *)param_1 = uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddOnSessionParticipantJoinedDelegate_Handle @ 14ed1b170

FDelegateHandle __thiscall
IOnlineSession::AddOnSessionParticipantJoinedDelegate_Handle
          (IOnlineSession *this,
          TDelegate<void___cdecl(FName,FUniqueNetId_const_&),FDefaultDelegateUserPolicy> *param_1)

{
  atomic<unsigned___int64> aVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *in_R8;
  undefined1 local_res8 [8];
  FReadAccessScope local_28;
  
  TMulticastDelegateRegistration<void___cdecl(FName,FUniqueNetId_const_&),FDefaultDelegateUserPolicy>
  ::Add((TMulticastDelegateRegistration<void___cdecl(FName,FUniqueNetId_const_&),FDefaultDelegateUserPolicy>
         *)&this->OnSessionParticipantJoinedDelegates,
        (TDelegate<void___cdecl(FName,FUniqueNetId_const_&),FDefaultDelegateUserPolicy> *)local_res8
       );
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(in_R8,&local_28);
  if ((*(int *)&in_R8[2].AccessDetector.State == 0) ||
     (aVar1 = in_R8[1].AccessDetector.State, aVar1 == (atomic<unsigned___int64>)0x0)) {
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined8 *)(**(code **)(*(longlong *)aVar1 + 0x40))(aVar1,local_res8);
    uVar3 = *puVar2;
  }
  *(undefined8 *)param_1 = uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddOnSessionParticipantLeftDelegate_Handle @ 14ed1b1e0

FDelegateHandle __thiscall
IOnlineSession::AddOnSessionParticipantLeftDelegate_Handle
          (IOnlineSession *this,
          TDelegate<void___cdecl(FName,FUniqueNetId_const_&,EOnSessionParticipantLeftReason),FDefaultDelegateUserPolicy>
          *param_1)

{
  atomic<unsigned___int64> aVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *in_R8;
  undefined1 local_res8 [8];
  FReadAccessScope local_28;
  
  TMulticastDelegateRegistration<void___cdecl(FName,FUniqueNetId_const_&,enum_EOnSessionParticipantLeftReason),FDefaultDelegateUserPolicy>
  ::Add(&this->OnSessionParticipantLeftDelegates,
        (TDelegate<void___cdecl(FName,FUniqueNetId_const_&,EOnSessionParticipantLeftReason),FDefaultDelegateUserPolicy>
         *)local_res8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(in_R8,&local_28);
  if ((*(int *)&in_R8[2].AccessDetector.State == 0) ||
     (aVar1 = in_R8[1].AccessDetector.State, aVar1 == (atomic<unsigned___int64>)0x0)) {
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined8 *)(**(code **)(*(longlong *)aVar1 + 0x40))(aVar1,local_res8);
    uVar3 = *puVar2;
  }
  *(undefined8 *)param_1 = uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddOnSessionParticipantSettingsUpdatedDelegate_Handle @ 14ed1b250

FDelegateHandle __thiscall
IOnlineSession::AddOnSessionParticipantSettingsUpdatedDelegate_Handle
          (IOnlineSession *this,
          TDelegate<void___cdecl(FName,FUniqueNetId_const_&,FOnlineSessionSettings_const_&),FDefaultDelegateUserPolicy>
          *param_1)

{
  atomic<unsigned___int64> aVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *in_R8;
  undefined1 local_res8 [8];
  FReadAccessScope local_28;
  
  TMulticastDelegateRegistration<void___cdecl(FName,FUniqueNetId_const_&,FOnlineSessionSettings_const_&),FDefaultDelegateUserPolicy>
  ::Add((TMulticastDelegateRegistration<void___cdecl(FName,FUniqueNetId_const_&,FOnlineSessionSettings_const_&),FDefaultDelegateUserPolicy>
         *)&this->OnSessionParticipantSettingsUpdatedDelegates,
        (TDelegate<void___cdecl(FName,FUniqueNetId_const_&,FOnlineSessionSettings_const_&),FDefaultDelegateUserPolicy>
         *)local_res8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(in_R8,&local_28);
  if ((*(int *)&in_R8[2].AccessDetector.State == 0) ||
     (aVar1 = in_R8[1].AccessDetector.State, aVar1 == (atomic<unsigned___int64>)0x0)) {
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined8 *)(**(code **)(*(longlong *)aVar1 + 0x40))(aVar1,local_res8);
    uVar3 = *puVar2;
  }
  *(undefined8 *)param_1 = uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddOnSessionSettingsUpdatedDelegate_Handle @ 14ed1b2c0

FDelegateHandle __thiscall
IOnlineSession::AddOnSessionSettingsUpdatedDelegate_Handle
          (IOnlineSession *this,
          TDelegate<void___cdecl(FName,FOnlineSessionSettings_const_&),FDefaultDelegateUserPolicy>
          *param_1)

{
  atomic<unsigned___int64> aVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *in_R8;
  undefined1 local_res8 [8];
  FReadAccessScope local_28;
  
  TMulticastDelegateRegistration<void___cdecl(FName,FOnlineSessionSettings_const_&),FDefaultDelegateUserPolicy>
  ::Add((TMulticastDelegateRegistration<void___cdecl(FName,FOnlineSessionSettings_const_&),FDefaultDelegateUserPolicy>
         *)&this->OnSessionSettingsUpdatedDelegates,
        (TDelegate<void___cdecl(FName,FOnlineSessionSettings_const_&),FDefaultDelegateUserPolicy> *)
        local_res8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(in_R8,&local_28);
  if ((*(int *)&in_R8[2].AccessDetector.State == 0) ||
     (aVar1 = in_R8[1].AccessDetector.State, aVar1 == (atomic<unsigned___int64>)0x0)) {
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined8 *)(**(code **)(*(longlong *)aVar1 + 0x40))(aVar1,local_res8);
    uVar3 = *puVar2;
  }
  *(undefined8 *)param_1 = uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddOnSessionUserInviteAcceptedDelegate_Handle @ 14ed1b330

FDelegateHandle __thiscall
IOnlineSession::AddOnSessionUserInviteAcceptedDelegate_Handle
          (IOnlineSession *this,
          TDelegate<void___cdecl(bool,int,TSharedPtr<FUniqueNetId_const_,1>,FOnlineSessionSearchResult_const_&),FDefaultDelegateUserPolicy>
          *param_1)

{
  atomic<unsigned___int64> aVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *in_R8;
  undefined1 local_res8 [8];
  FReadAccessScope local_28;
  
  TMulticastDelegateRegistration<void___cdecl(bool,int,TSharedPtr<FUniqueNetId_const_,1>,FOnlineSessionSearchResult_const_&),FDefaultDelegateUserPolicy>
  ::Add((TMulticastDelegateRegistration<void___cdecl(bool,int,TSharedPtr<FUniqueNetId_const_,1>,FOnlineSessionSearchResult_const_&),FDefaultDelegateUserPolicy>
         *)&this->OnSessionUserInviteAcceptedDelegates,
        (TDelegate<void___cdecl(bool,int,TSharedPtr<FUniqueNetId_const_,1>,FOnlineSessionSearchResult_const_&),FDefaultDelegateUserPolicy>
         *)local_res8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(in_R8,&local_28);
  if ((*(int *)&in_R8[2].AccessDetector.State == 0) ||
     (aVar1 = in_R8[1].AccessDetector.State, aVar1 == (atomic<unsigned___int64>)0x0)) {
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined8 *)(**(code **)(*(longlong *)aVar1 + 0x40))(aVar1,local_res8);
    uVar3 = *puVar2;
  }
  *(undefined8 *)param_1 = uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddOnStartSessionCompleteDelegate_Handle @ 14ed1b3a0

FDelegateHandle __thiscall
IOnlineSession::AddOnStartSessionCompleteDelegate_Handle
          (IOnlineSession *this,
          TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *param_1)

{
  atomic<unsigned___int64> aVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *in_R8;
  undefined1 local_res8 [8];
  FReadAccessScope local_28;
  
  TMulticastDelegateRegistration<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>::Add
            ((TMulticastDelegateRegistration<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *)
             &this->OnStartSessionCompleteDelegates,
             (TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *)local_res8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(in_R8,&local_28);
  if ((*(int *)&in_R8[2].AccessDetector.State == 0) ||
     (aVar1 = in_R8[1].AccessDetector.State, aVar1 == (atomic<unsigned___int64>)0x0)) {
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined8 *)(**(code **)(*(longlong *)aVar1 + 0x40))(aVar1,local_res8);
    uVar3 = *puVar2;
  }
  *(undefined8 *)param_1 = uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddOnUnregisterPlayersCompleteDelegate_Handle @ 14ed1b480

FDelegateHandle __thiscall
IOnlineSession::AddOnUnregisterPlayersCompleteDelegate_Handle
          (IOnlineSession *this,
          TDelegate<void___cdecl(FName,TArray<TSharedRef<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_>_const_&,bool),FDefaultDelegateUserPolicy>
          *param_1)

{
  atomic<unsigned___int64> aVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *in_R8;
  undefined1 local_res8 [8];
  FReadAccessScope local_28;
  
  TMulticastDelegateRegistration<void___cdecl(FName,TArray<TSharedRef<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_>_const_&,bool),FDefaultDelegateUserPolicy>
  ::Add((TMulticastDelegateRegistration<void___cdecl(FName,TArray<TSharedRef<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_>_const_&,bool),FDefaultDelegateUserPolicy>
         *)&this->OnUnregisterPlayersCompleteDelegates,
        (TDelegate<void___cdecl(FName,TArray<TSharedRef<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_>_const_&,bool),FDefaultDelegateUserPolicy>
         *)local_res8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(in_R8,&local_28);
  if ((*(int *)&in_R8[2].AccessDetector.State == 0) ||
     (aVar1 = in_R8[1].AccessDetector.State, aVar1 == (atomic<unsigned___int64>)0x0)) {
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined8 *)(**(code **)(*(longlong *)aVar1 + 0x40))(aVar1,local_res8);
    uVar3 = *puVar2;
  }
  *(undefined8 *)param_1 = uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddOnUpdateSessionCompleteDelegate_Handle @ 14ed1b4f0

FDelegateHandle __thiscall
IOnlineSession::AddOnUpdateSessionCompleteDelegate_Handle
          (IOnlineSession *this,
          TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *param_1)

{
  atomic<unsigned___int64> aVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *in_R8;
  undefined1 local_res8 [8];
  FReadAccessScope local_28;
  
  TMulticastDelegateRegistration<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>::Add
            ((TMulticastDelegateRegistration<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *)
             &this->OnUpdateSessionCompleteDelegates,
             (TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *)local_res8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(in_R8,&local_28);
  if ((*(int *)&in_R8[2].AccessDetector.State == 0) ||
     (aVar1 = in_R8[1].AccessDetector.State, aVar1 == (atomic<unsigned___int64>)0x0)) {
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined8 *)(**(code **)(*(longlong *)aVar1 + 0x40))(aVar1,local_res8);
    uVar3 = *puVar2;
  }
  *(undefined8 *)param_1 = uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (FDelegateHandle)(ulong64)param_1;
}

// ClearOnCancelFindSessionsCompleteDelegate_Handle @ 14ed1deb0

void __thiscall
IOnlineSession::ClearOnCancelFindSessionsCompleteDelegate_Handle
          (IOnlineSession *this,FDelegateHandle *param_1)

{
  if (param_1->ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnCancelFindSessionsCompleteDelegates,(FDelegateHandle)param_1->ID);
  }
  param_1->ID = 0;
  return;
}

// ClearOnCancelFindSessionsCompleteDelegates @ 14ed1dee0

void __thiscall
IOnlineSession::ClearOnCancelFindSessionsCompleteDelegates(IOnlineSession *this,void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &this->OnCancelFindSessionsCompleteDelegates,param_1);
  return;
}

// ClearOnCancelMatchmakingCompleteDelegate_Handle @ 14ed1df00

void __thiscall
IOnlineSession::ClearOnCancelMatchmakingCompleteDelegate_Handle
          (IOnlineSession *this,FDelegateHandle *param_1)

{
  if (param_1->ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnCancelMatchmakingCompleteDelegates,(FDelegateHandle)param_1->ID);
  }
  param_1->ID = 0;
  return;
}

// ClearOnCancelMatchmakingCompleteDelegates @ 14ed1df30

void __thiscall
IOnlineSession::ClearOnCancelMatchmakingCompleteDelegates(IOnlineSession *this,void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &this->OnCancelMatchmakingCompleteDelegates,param_1);
  return;
}

// ClearOnCreateSessionCompleteDelegate_Handle @ 14ed1dfe0

void __thiscall
IOnlineSession::ClearOnCreateSessionCompleteDelegate_Handle
          (IOnlineSession *this,FDelegateHandle *param_1)

{
  if (param_1->ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnCreateSessionCompleteDelegates,(FDelegateHandle)param_1->ID);
  }
  param_1->ID = 0;
  return;
}

// ClearOnCreateSessionCompleteDelegates @ 14ed1e010

void __thiscall
IOnlineSession::ClearOnCreateSessionCompleteDelegates(IOnlineSession *this,void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &this->OnCreateSessionCompleteDelegates,param_1);
  return;
}

// ClearOnDestroySessionCompleteDelegate_Handle @ 14ed1e020

void __thiscall
IOnlineSession::ClearOnDestroySessionCompleteDelegate_Handle
          (IOnlineSession *this,FDelegateHandle *param_1)

{
  if (param_1->ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnDestroySessionCompleteDelegates,(FDelegateHandle)param_1->ID);
  }
  param_1->ID = 0;
  return;
}

// ClearOnDestroySessionCompleteDelegates @ 14ed1e050

void __thiscall
IOnlineSession::ClearOnDestroySessionCompleteDelegates(IOnlineSession *this,void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &this->OnDestroySessionCompleteDelegates,param_1);
  return;
}

// ClearOnDestroySessionRequestedDelegate_Handle @ 14ed1e070

void __thiscall
IOnlineSession::ClearOnDestroySessionRequestedDelegate_Handle
          (IOnlineSession *this,FDelegateHandle *param_1)

{
  if (param_1->ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnDestroySessionRequestedDelegates,(FDelegateHandle)param_1->ID);
  }
  param_1->ID = 0;
  return;
}

// ClearOnDestroySessionRequestedDelegates @ 14ed1e0a0

void __thiscall
IOnlineSession::ClearOnDestroySessionRequestedDelegates(IOnlineSession *this,void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &this->OnDestroySessionRequestedDelegates,param_1);
  return;
}

// ClearOnEndSessionCompleteDelegate_Handle @ 14ed1e0c0

void __thiscall
IOnlineSession::ClearOnEndSessionCompleteDelegate_Handle
          (IOnlineSession *this,FDelegateHandle *param_1)

{
  if (param_1->ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnEndSessionCompleteDelegates,(FDelegateHandle)param_1->ID);
  }
  param_1->ID = 0;
  return;
}

// ClearOnEndSessionCompleteDelegates @ 14ed1e0f0

void __thiscall
IOnlineSession::ClearOnEndSessionCompleteDelegates(IOnlineSession *this,void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &this->OnEndSessionCompleteDelegates,param_1);
  return;
}

// ClearOnFindFriendSessionCompleteDelegate_Handle @ 14ed1e140

void __thiscall
IOnlineSession::ClearOnFindFriendSessionCompleteDelegate_Handle
          (IOnlineSession *this,int param_1,FDelegateHandle *param_2)

{
  if ((uint)param_1 < 4) {
    if (param_2->ID != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 (this->OnFindFriendSessionCompleteDelegates + param_1),(FDelegateHandle)param_2->ID
                );
    }
    param_2->ID = 0;
  }
  return;
}

// ClearOnFindFriendSessionCompleteDelegates @ 14ed1e180

void __thiscall
IOnlineSession::ClearOnFindFriendSessionCompleteDelegates
          (IOnlineSession *this,int param_1,void *param_2)

{
  if ((uint)param_1 < 4) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               (this->OnFindFriendSessionCompleteDelegates + param_1),param_2);
    return;
  }
  return;
}

// ClearOnFindSessionsCompleteDelegate_Handle @ 14ed1e1b0

void __thiscall
IOnlineSession::ClearOnFindSessionsCompleteDelegate_Handle
          (IOnlineSession *this,FDelegateHandle *param_1)

{
  if (param_1->ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnFindSessionsCompleteDelegates,(FDelegateHandle)param_1->ID);
  }
  param_1->ID = 0;
  return;
}

// ClearOnFindSessionsCompleteDelegates @ 14ed1e1e0

void __thiscall
IOnlineSession::ClearOnFindSessionsCompleteDelegates(IOnlineSession *this,void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &this->OnFindSessionsCompleteDelegates,param_1);
  return;
}

// ClearOnJoinSessionCompleteDelegate_Handle @ 14ed1e200

void __thiscall
IOnlineSession::ClearOnJoinSessionCompleteDelegate_Handle
          (IOnlineSession *this,FDelegateHandle *param_1)

{
  if (param_1->ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnJoinSessionCompleteDelegates,(FDelegateHandle)param_1->ID);
  }
  param_1->ID = 0;
  return;
}

// ClearOnJoinSessionCompleteDelegates @ 14ed1e230

void __thiscall
IOnlineSession::ClearOnJoinSessionCompleteDelegates(IOnlineSession *this,void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &this->OnJoinSessionCompleteDelegates,param_1);
  return;
}

// ClearOnMatchmakingCompleteDelegate_Handle @ 14ed1e4f0

void __thiscall
IOnlineSession::ClearOnMatchmakingCompleteDelegate_Handle
          (IOnlineSession *this,FDelegateHandle *param_1)

{
  if (param_1->ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnMatchmakingCompleteDelegates,(FDelegateHandle)param_1->ID);
  }
  param_1->ID = 0;
  return;
}

// ClearOnMatchmakingCompleteDelegates @ 14ed1e520

void __thiscall
IOnlineSession::ClearOnMatchmakingCompleteDelegates(IOnlineSession *this,void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &this->OnMatchmakingCompleteDelegates,param_1);
  return;
}

// ClearOnPingSearchResultsCompleteDelegate_Handle @ 14ed1e540

void __thiscall
IOnlineSession::ClearOnPingSearchResultsCompleteDelegate_Handle
          (IOnlineSession *this,FDelegateHandle *param_1)

{
  if (param_1->ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnPingSearchResultsCompleteDelegates,(FDelegateHandle)param_1->ID);
  }
  param_1->ID = 0;
  return;
}

// ClearOnPingSearchResultsCompleteDelegates @ 14ed1e570

void __thiscall
IOnlineSession::ClearOnPingSearchResultsCompleteDelegates(IOnlineSession *this,void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &this->OnPingSearchResultsCompleteDelegates,param_1);
  return;
}

// ClearOnQosDataRequestedDelegate_Handle @ 14ed1e590

void __thiscall
IOnlineSession::ClearOnQosDataRequestedDelegate_Handle
          (IOnlineSession *this,FDelegateHandle *param_1)

{
  if (param_1->ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnQosDataRequestedDelegates,(FDelegateHandle)param_1->ID);
  }
  param_1->ID = 0;
  return;
}

// ClearOnQosDataRequestedDelegates @ 14ed1e5c0

void __thiscall IOnlineSession::ClearOnQosDataRequestedDelegates(IOnlineSession *this,void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &this->OnQosDataRequestedDelegates,param_1);
  return;
}

// ClearOnRegisterPlayersCompleteDelegate_Handle @ 14ed1e620

void __thiscall
IOnlineSession::ClearOnRegisterPlayersCompleteDelegate_Handle
          (IOnlineSession *this,FDelegateHandle *param_1)

{
  if (param_1->ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnRegisterPlayersCompleteDelegates,(FDelegateHandle)param_1->ID);
  }
  param_1->ID = 0;
  return;
}

// ClearOnRegisterPlayersCompleteDelegates @ 14ed1e650

void __thiscall
IOnlineSession::ClearOnRegisterPlayersCompleteDelegates(IOnlineSession *this,void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &this->OnRegisterPlayersCompleteDelegates,param_1);
  return;
}

// ClearOnSessionFailureDelegate_Handle @ 14ed1e670

void __thiscall
IOnlineSession::ClearOnSessionFailureDelegate_Handle(IOnlineSession *this,FDelegateHandle *param_1)

{
  if (param_1->ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnSessionFailureDelegates,(FDelegateHandle)param_1->ID);
  }
  param_1->ID = 0;
  return;
}

// ClearOnSessionFailureDelegates @ 14ed1e6a0

void __thiscall IOnlineSession::ClearOnSessionFailureDelegates(IOnlineSession *this,void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnSessionFailureDelegates,
             param_1);
  return;
}

// ClearOnSessionInviteReceivedDelegate_Handle @ 14ed1e6c0

void __thiscall
IOnlineSession::ClearOnSessionInviteReceivedDelegate_Handle
          (IOnlineSession *this,FDelegateHandle *param_1)

{
  if (param_1->ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnSessionInviteReceivedDelegates,(FDelegateHandle)param_1->ID);
  }
  param_1->ID = 0;
  return;
}

// ClearOnSessionInviteReceivedDelegates @ 14ed1e6f0

void __thiscall
IOnlineSession::ClearOnSessionInviteReceivedDelegates(IOnlineSession *this,void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &this->OnSessionInviteReceivedDelegates,param_1);
  return;
}

// ClearOnSessionParticipantJoinedDelegate_Handle @ 14ed1e710

void __thiscall
IOnlineSession::ClearOnSessionParticipantJoinedDelegate_Handle
          (IOnlineSession *this,FDelegateHandle *param_1)

{
  if (param_1->ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnSessionParticipantJoinedDelegates,(FDelegateHandle)param_1->ID);
  }
  param_1->ID = 0;
  return;
}

// ClearOnSessionParticipantJoinedDelegates @ 14ed1e740

void __thiscall
IOnlineSession::ClearOnSessionParticipantJoinedDelegates(IOnlineSession *this,void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &this->OnSessionParticipantJoinedDelegates,param_1);
  return;
}

// ClearOnSessionParticipantLeftDelegate_Handle @ 14ed1e760

void __thiscall
IOnlineSession::ClearOnSessionParticipantLeftDelegate_Handle
          (IOnlineSession *this,FDelegateHandle *param_1)

{
  if (param_1->ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnSessionParticipantLeftDelegates,(FDelegateHandle)param_1->ID);
  }
  param_1->ID = 0;
  return;
}

// ClearOnSessionParticipantLeftDelegates @ 14ed1e790

void __thiscall
IOnlineSession::ClearOnSessionParticipantLeftDelegates(IOnlineSession *this,void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &this->OnSessionParticipantLeftDelegates,param_1);
  return;
}

// ClearOnSessionParticipantSettingsUpdatedDelegate_Handle @ 14ed1e7b0

void __thiscall
IOnlineSession::ClearOnSessionParticipantSettingsUpdatedDelegate_Handle
          (IOnlineSession *this,FDelegateHandle *param_1)

{
  if (param_1->ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnSessionParticipantSettingsUpdatedDelegates,(FDelegateHandle)param_1->ID);
  }
  param_1->ID = 0;
  return;
}

// ClearOnSessionParticipantSettingsUpdatedDelegates @ 14ed1e7e0

void __thiscall
IOnlineSession::ClearOnSessionParticipantSettingsUpdatedDelegates
          (IOnlineSession *this,void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &this->OnSessionParticipantSettingsUpdatedDelegates,param_1);
  return;
}

// ClearOnSessionSettingsUpdatedDelegate_Handle @ 14ed1e800

void __thiscall
IOnlineSession::ClearOnSessionSettingsUpdatedDelegate_Handle
          (IOnlineSession *this,FDelegateHandle *param_1)

{
  if (param_1->ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnSessionSettingsUpdatedDelegates,(FDelegateHandle)param_1->ID);
  }
  param_1->ID = 0;
  return;
}

// ClearOnSessionSettingsUpdatedDelegates @ 14ed1e830

void __thiscall
IOnlineSession::ClearOnSessionSettingsUpdatedDelegates(IOnlineSession *this,void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &this->OnSessionSettingsUpdatedDelegates,param_1);
  return;
}

// ClearOnSessionUserInviteAcceptedDelegate_Handle @ 14ed1e850

void __thiscall
IOnlineSession::ClearOnSessionUserInviteAcceptedDelegate_Handle
          (IOnlineSession *this,FDelegateHandle *param_1)

{
  if (param_1->ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnSessionUserInviteAcceptedDelegates,(FDelegateHandle)param_1->ID);
  }
  param_1->ID = 0;
  return;
}

// ClearOnSessionUserInviteAcceptedDelegates @ 14ed1e880

void __thiscall
IOnlineSession::ClearOnSessionUserInviteAcceptedDelegates(IOnlineSession *this,void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &this->OnSessionUserInviteAcceptedDelegates,param_1);
  return;
}

// ClearOnStartSessionCompleteDelegate_Handle @ 14ed1e8a0

void __thiscall
IOnlineSession::ClearOnStartSessionCompleteDelegate_Handle
          (IOnlineSession *this,FDelegateHandle *param_1)

{
  if (param_1->ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnStartSessionCompleteDelegates,(FDelegateHandle)param_1->ID);
  }
  param_1->ID = 0;
  return;
}

// ClearOnStartSessionCompleteDelegates @ 14ed1e8d0

void __thiscall
IOnlineSession::ClearOnStartSessionCompleteDelegates(IOnlineSession *this,void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &this->OnStartSessionCompleteDelegates,param_1);
  return;
}

// ClearOnUnregisterPlayersCompleteDelegate_Handle @ 14ed1e920

void __thiscall
IOnlineSession::ClearOnUnregisterPlayersCompleteDelegate_Handle
          (IOnlineSession *this,FDelegateHandle *param_1)

{
  if (param_1->ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnUnregisterPlayersCompleteDelegates,(FDelegateHandle)param_1->ID);
  }
  param_1->ID = 0;
  return;
}

// ClearOnUnregisterPlayersCompleteDelegates @ 14ed1e950

void __thiscall
IOnlineSession::ClearOnUnregisterPlayersCompleteDelegates(IOnlineSession *this,void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &this->OnUnregisterPlayersCompleteDelegates,param_1);
  return;
}

// ClearOnUpdateSessionCompleteDelegate_Handle @ 14ed1e970

void __thiscall
IOnlineSession::ClearOnUpdateSessionCompleteDelegate_Handle
          (IOnlineSession *this,FDelegateHandle *param_1)

{
  if (param_1->ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnUpdateSessionCompleteDelegates,(FDelegateHandle)param_1->ID);
  }
  param_1->ID = 0;
  return;
}

// ClearOnUpdateSessionCompleteDelegates @ 14ed1e9a0

void __thiscall
IOnlineSession::ClearOnUpdateSessionCompleteDelegates(IOnlineSession *this,void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &this->OnUpdateSessionCompleteDelegates,param_1);
  return;
}

// FindSessionById @ 14ed241f0

bool __thiscall
IOnlineSession::FindSessionById
          (IOnlineSession *this,FUniqueNetId *param_1,FUniqueNetId *param_2,FUniqueNetId *param_3,
          FString *param_4,
          TDelegate<void___cdecl(int,bool,FOnlineSessionSearchResult_const_&),FDefaultDelegateUserPolicy>
          *param_5)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014ed24204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x1b0))();
  return (bool)uVar1;
}

// TriggerOnCancelFindSessionsCompleteDelegates @ 14ed303f0

void __thiscall
IOnlineSession::TriggerOnCancelFindSessionsCompleteDelegates(IOnlineSession *this,bool param_1)

{
  TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnCancelFindSessionsCompleteDelegates,param_1);
  return;
}

// TriggerOnCancelMatchmakingCompleteDelegates @ 14ed30410

void __thiscall
IOnlineSession::TriggerOnCancelMatchmakingCompleteDelegates
          (IOnlineSession *this,FName param_1,bool param_2)

{
  TMulticastDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnCancelMatchmakingCompleteDelegates,param_1,param_2);
  return;
}

// TriggerOnCreateSessionCompleteDelegates @ 14ed305c0

void __thiscall
IOnlineSession::TriggerOnCreateSessionCompleteDelegates
          (IOnlineSession *this,FName param_1,bool param_2)

{
  TMulticastDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnCreateSessionCompleteDelegates,param_1,param_2);
  return;
}

// TriggerOnDestroySessionCompleteDelegates @ 14ed305d0

void __thiscall
IOnlineSession::TriggerOnDestroySessionCompleteDelegates
          (IOnlineSession *this,FName param_1,bool param_2)

{
  TMulticastDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnDestroySessionCompleteDelegates,param_1,param_2);
  return;
}

// TriggerOnDestroySessionRequestedDelegates @ 14ed305f0

void __thiscall
IOnlineSession::TriggerOnDestroySessionRequestedDelegates
          (IOnlineSession *this,int param_1,FName param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  FDestructionSentinel local_38;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnDestroySessionRequestedDelegates,(FWriteAccessScope *)&local_38);
  puVar1 = &(this->OnDestroySessionRequestedDelegates).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar5 = false;
  uVar10 = *(int *)&(this->OnDestroySessionRequestedDelegates).field_0x10 - 1;
  if (-1 < (int)uVar10) {
    lVar9 = (longlong)(int)uVar10 << 4;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar10 < *(int *)&(this->OnDestroySessionRequestedDelegates).field_0x10) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)&(this->OnDestroySessionRequestedDelegates).field_0x8;
      if (((*(int *)(lVar2 + 8 + lVar9) == 0) ||
          (plVar3 = *(longlong **)(lVar2 + lVar9), plVar3 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar3 + 0x68))(plVar3,param_1,param_2), cVar7 == '\0')) {
        bVar5 = true;
      }
      lVar9 = lVar9 + -0x10;
      uVar10 = uVar10 - 1;
    } while (-1 < (int)uVar10);
  }
  puVar1 = &(this->OnDestroySessionRequestedDelegates).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnDestroySessionRequestedDelegates,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// TriggerOnEndSessionCompleteDelegates @ 14ed30730

void __thiscall
IOnlineSession::TriggerOnEndSessionCompleteDelegates
          (IOnlineSession *this,FName param_1,bool param_2)

{
  TMulticastDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnEndSessionCompleteDelegates,param_1,param_2);
  return;
}

// TriggerOnFindFriendSessionCompleteDelegates @ 14ed30750

void __thiscall
IOnlineSession::TriggerOnFindFriendSessionCompleteDelegates
          (IOnlineSession *this,int param_1,bool param_2,
          TArray<FOnlineSessionSearchResult,TSizedDefaultAllocator<32>_> *param_3)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  FDestructionSentinel local_48;
  
  if ((uint)param_1 < 4) {
    this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
              (this->OnFindFriendSessionCompleteDelegates + param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
               (FWriteAccessScope *)&local_48);
    this_00->InvocationListLockCount = this_00->InvocationListLockCount + 1;
    bVar4 = false;
    uVar8 = (this_00->InvocationList).ArrayNum - 1;
    if (-1 < (int)uVar8) {
      lVar9 = (longlong)(int)uVar8 << 4;
      bVar4 = false;
      do {
        uVar7 = 0;
        if ((int)uVar8 < (this_00->InvocationList).ArrayNum) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar1 = (this_00->InvocationList).AllocatorInstance.Data;
        if (((*(int *)(pFVar1 + lVar9 + 8) == 0) ||
            (plVar2 = *(longlong **)(pFVar1 + lVar9), plVar2 == (longlong *)0x0)) ||
           (cVar6 = (**(code **)(*plVar2 + 0x68))(plVar2,param_1,param_2,param_3), cVar6 == '\0')) {
          bVar4 = true;
        }
        lVar9 = lVar9 + -0x10;
        uVar8 = uVar8 - 1;
      } while (-1 < (int)uVar8);
    }
    this_00->InvocationListLockCount = this_00->InvocationListLockCount + -1;
    if (bVar4) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this_00,false);
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
  }
  return;
}

// TriggerOnFindSessionsCompleteDelegates @ 14ed308b0

void __thiscall
IOnlineSession::TriggerOnFindSessionsCompleteDelegates(IOnlineSession *this,bool param_1)

{
  TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnFindSessionsCompleteDelegates,param_1);
  return;
}

// TriggerOnJoinSessionCompleteDelegates @ 14ed308d0

void __thiscall
IOnlineSession::TriggerOnJoinSessionCompleteDelegates
          (IOnlineSession *this,FName param_1,Type param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  FDestructionSentinel local_38;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnJoinSessionCompleteDelegates,(FWriteAccessScope *)&local_38);
  puVar1 = &(this->OnJoinSessionCompleteDelegates).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar5 = false;
  uVar10 = *(int *)&(this->OnJoinSessionCompleteDelegates).field_0x10 - 1;
  if (-1 < (int)uVar10) {
    lVar9 = (longlong)(int)uVar10 << 4;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar10 < *(int *)&(this->OnJoinSessionCompleteDelegates).field_0x10) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)&(this->OnJoinSessionCompleteDelegates).field_0x8;
      if (((*(int *)(lVar2 + 8 + lVar9) == 0) ||
          (plVar3 = *(longlong **)(lVar2 + lVar9), plVar3 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar3 + 0x68))(plVar3,param_1,param_2), cVar7 == '\0')) {
        bVar5 = true;
      }
      lVar9 = lVar9 + -0x10;
      uVar10 = uVar10 - 1;
    } while (-1 < (int)uVar10);
  }
  puVar1 = &(this->OnJoinSessionCompleteDelegates).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnJoinSessionCompleteDelegates,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// TriggerOnMatchmakingCompleteDelegates @ 14ed30e60

void __thiscall
IOnlineSession::TriggerOnMatchmakingCompleteDelegates
          (IOnlineSession *this,FName param_1,bool param_2)

{
  TMulticastDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnMatchmakingCompleteDelegates,param_1,param_2);
  return;
}

// TriggerOnPingSearchResultsCompleteDelegates @ 14ed30e80

void __thiscall
IOnlineSession::TriggerOnPingSearchResultsCompleteDelegates(IOnlineSession *this,bool param_1)

{
  TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnPingSearchResultsCompleteDelegates,param_1);
  return;
}

// TriggerOnQosDataRequestedDelegates @ 14ed30ea0

void __thiscall
IOnlineSession::TriggerOnQosDataRequestedDelegates(IOnlineSession *this,FName param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FDestructionSentinel local_38;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnQosDataRequestedDelegates,(FWriteAccessScope *)&local_38);
  puVar1 = &(this->OnQosDataRequestedDelegates).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar5 = false;
  uVar9 = *(int *)&(this->OnQosDataRequestedDelegates).field_0x10 - 1;
  if (-1 < (int)uVar9) {
    lVar10 = (longlong)(int)uVar9 << 4;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar9 < *(int *)&(this->OnQosDataRequestedDelegates).field_0x10) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)&(this->OnQosDataRequestedDelegates).field_0x8;
      if (((*(int *)(lVar10 + 8 + lVar2) == 0) ||
          (plVar3 = *(longlong **)(lVar10 + lVar2), plVar3 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
        bVar5 = true;
      }
      lVar10 = lVar10 + -0x10;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  puVar1 = &(this->OnQosDataRequestedDelegates).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnQosDataRequestedDelegates,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// TriggerOnRegisterPlayersCompleteDelegates @ 14ed30fd0

void __thiscall
IOnlineSession::TriggerOnRegisterPlayersCompleteDelegates
          (IOnlineSession *this,FName param_1,
          TArray<TSharedRef<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_> *param_2,
          bool param_3)

{
  TMulticastDelegate<void___cdecl(FName,TArray<TSharedRef<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_>_const_&,bool),FDefaultDelegateUserPolicy>
  ::Broadcast(&this->OnRegisterPlayersCompleteDelegates,param_1,param_2,param_3);
  return;
}

// TriggerOnSessionFailureDelegates @ 14ed30ff0

void __thiscall
IOnlineSession::TriggerOnSessionFailureDelegates
          (IOnlineSession *this,FUniqueNetId *param_1,Type param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FDestructionSentinel local_38;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnSessionFailureDelegates,(FWriteAccessScope *)&local_38);
  puVar1 = &(this->OnSessionFailureDelegates).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar5 = false;
  uVar9 = *(int *)&(this->OnSessionFailureDelegates).field_0x10 - 1;
  if (-1 < (int)uVar9) {
    lVar10 = (longlong)(int)uVar9 << 4;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar9 < *(int *)&(this->OnSessionFailureDelegates).field_0x10) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)&(this->OnSessionFailureDelegates).field_0x8;
      if (((*(int *)(lVar2 + 8 + lVar10) == 0) ||
          (plVar3 = *(longlong **)(lVar2 + lVar10), plVar3 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar3 + 0x68))(plVar3,param_1,param_2), cVar7 == '\0')) {
        bVar5 = true;
      }
      lVar10 = lVar10 + -0x10;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  puVar1 = &(this->OnSessionFailureDelegates).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnSessionFailureDelegates,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// TriggerOnSessionInviteReceivedDelegates @ 14ed31130

void __thiscall
IOnlineSession::TriggerOnSessionInviteReceivedDelegates
          (IOnlineSession *this,FUniqueNetId *param_1,FUniqueNetId *param_2,FString *param_3,
          FOnlineSessionSearchResult *param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FDestructionSentinel local_48;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnSessionInviteReceivedDelegates,(FWriteAccessScope *)&local_48);
  puVar1 = &(this->OnSessionInviteReceivedDelegates).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar5 = false;
  uVar9 = *(int *)&(this->OnSessionInviteReceivedDelegates).field_0x10 - 1;
  if (-1 < (int)uVar9) {
    lVar10 = (longlong)(int)uVar9 << 4;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar9 < *(int *)&(this->OnSessionInviteReceivedDelegates).field_0x10) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)&(this->OnSessionInviteReceivedDelegates).field_0x8;
      if (((*(int *)(lVar10 + 8 + lVar2) == 0) ||
          (plVar3 = *(longlong **)(lVar10 + lVar2), plVar3 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar3 + 0x68))(plVar3,param_1,param_2,param_3,param_4),
         cVar7 == '\0')) {
        bVar5 = true;
      }
      lVar10 = lVar10 + -0x10;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  puVar1 = &(this->OnSessionInviteReceivedDelegates).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnSessionInviteReceivedDelegates,false);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  return;
}

// TriggerOnSessionParticipantJoinedDelegates @ 14ed31290

void __thiscall
IOnlineSession::TriggerOnSessionParticipantJoinedDelegates
          (IOnlineSession *this,FName param_1,FUniqueNetId *param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  FDestructionSentinel local_38;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnSessionParticipantJoinedDelegates,(FWriteAccessScope *)&local_38);
  puVar1 = &(this->OnSessionParticipantJoinedDelegates).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar5 = false;
  uVar10 = *(int *)&(this->OnSessionParticipantJoinedDelegates).field_0x10 - 1;
  if (-1 < (int)uVar10) {
    lVar9 = (longlong)(int)uVar10 << 4;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar10 < *(int *)&(this->OnSessionParticipantJoinedDelegates).field_0x10) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)&(this->OnSessionParticipantJoinedDelegates).field_0x8;
      if (((*(int *)(lVar2 + 8 + lVar9) == 0) ||
          (plVar3 = *(longlong **)(lVar2 + lVar9), plVar3 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar3 + 0x68))(plVar3,param_1,param_2), cVar7 == '\0')) {
        bVar5 = true;
      }
      lVar9 = lVar9 + -0x10;
      uVar10 = uVar10 - 1;
    } while (-1 < (int)uVar10);
  }
  puVar1 = &(this->OnSessionParticipantJoinedDelegates).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnSessionParticipantJoinedDelegates,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// TriggerOnSessionParticipantLeftDelegates @ 14ed313d0

void __thiscall
IOnlineSession::TriggerOnSessionParticipantLeftDelegates
          (IOnlineSession *this,FName param_1,FUniqueNetId *param_2,
          EOnSessionParticipantLeftReason param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  FDestructionSentinel local_48;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnSessionParticipantLeftDelegates,(FWriteAccessScope *)&local_48);
  puVar1 = &(this->OnSessionParticipantLeftDelegates).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar5 = false;
  uVar10 = *(int *)&(this->OnSessionParticipantLeftDelegates).field_0x10 - 1;
  if (-1 < (int)uVar10) {
    lVar9 = (longlong)(int)uVar10 << 4;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar10 < *(int *)&(this->OnSessionParticipantLeftDelegates).field_0x10) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)&(this->OnSessionParticipantLeftDelegates).field_0x8;
      if (((*(int *)(lVar2 + 8 + lVar9) == 0) ||
          (plVar3 = *(longlong **)(lVar2 + lVar9), plVar3 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar3 + 0x68))(plVar3,param_1,param_2,param_3), cVar7 == '\0')) {
        bVar5 = true;
      }
      lVar9 = lVar9 + -0x10;
      uVar10 = uVar10 - 1;
    } while (-1 < (int)uVar10);
  }
  puVar1 = &(this->OnSessionParticipantLeftDelegates).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnSessionParticipantLeftDelegates,false);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  return;
}

// TriggerOnSessionParticipantSettingsUpdatedDelegates @ 14ed31530

void __thiscall
IOnlineSession::TriggerOnSessionParticipantSettingsUpdatedDelegates
          (IOnlineSession *this,FName param_1,FUniqueNetId *param_2,FOnlineSessionSettings *param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  FDestructionSentinel local_48;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnSessionParticipantSettingsUpdatedDelegates,(FWriteAccessScope *)&local_48);
  puVar1 = &(this->OnSessionParticipantSettingsUpdatedDelegates).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar5 = false;
  uVar10 = *(int *)&(this->OnSessionParticipantSettingsUpdatedDelegates).field_0x10 - 1;
  if (-1 < (int)uVar10) {
    lVar9 = (longlong)(int)uVar10 << 4;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar10 < *(int *)&(this->OnSessionParticipantSettingsUpdatedDelegates).field_0x10) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)&(this->OnSessionParticipantSettingsUpdatedDelegates).field_0x8;
      if (((*(int *)(lVar2 + 8 + lVar9) == 0) ||
          (plVar3 = *(longlong **)(lVar2 + lVar9), plVar3 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar3 + 0x68))(plVar3,param_1,param_2,param_3), cVar7 == '\0')) {
        bVar5 = true;
      }
      lVar9 = lVar9 + -0x10;
      uVar10 = uVar10 - 1;
    } while (-1 < (int)uVar10);
  }
  puVar1 = &(this->OnSessionParticipantSettingsUpdatedDelegates).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnSessionParticipantSettingsUpdatedDelegates,false);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  return;
}

// TriggerOnSessionSettingsUpdatedDelegates @ 14ed31680

void __thiscall
IOnlineSession::TriggerOnSessionSettingsUpdatedDelegates
          (IOnlineSession *this,FName param_1,FOnlineSessionSettings *param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  FDestructionSentinel local_38;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnSessionSettingsUpdatedDelegates,(FWriteAccessScope *)&local_38);
  puVar1 = &(this->OnSessionSettingsUpdatedDelegates).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar5 = false;
  uVar10 = *(int *)&(this->OnSessionSettingsUpdatedDelegates).field_0x10 - 1;
  if (-1 < (int)uVar10) {
    lVar9 = (longlong)(int)uVar10 << 4;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar10 < *(int *)&(this->OnSessionSettingsUpdatedDelegates).field_0x10) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)&(this->OnSessionSettingsUpdatedDelegates).field_0x8;
      if (((*(int *)(lVar2 + 8 + lVar9) == 0) ||
          (plVar3 = *(longlong **)(lVar2 + lVar9), plVar3 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar3 + 0x68))(plVar3,param_1,param_2), cVar7 == '\0')) {
        bVar5 = true;
      }
      lVar9 = lVar9 + -0x10;
      uVar10 = uVar10 - 1;
    } while (-1 < (int)uVar10);
  }
  puVar1 = &(this->OnSessionSettingsUpdatedDelegates).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnSessionSettingsUpdatedDelegates,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// TriggerOnSessionUserInviteAcceptedDelegates @ 14ed317c0

void __thiscall
IOnlineSession::TriggerOnSessionUserInviteAcceptedDelegates
          (IOnlineSession *this,bool param_1,int param_2,TSharedPtr<FUniqueNetId_const_,1> *param_3,
          FOnlineSessionSearchResult *param_4)

{
  undefined1 *puVar1;
  TReferenceControllerBase<1> *pTVar2;
  FUniqueNetId *pFVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  FUniqueNetId *local_78;
  TReferenceControllerBase<1> *local_70;
  FDestructionSentinel local_68;
  
  pTVar2 = (param_3->SharedReferenceCount).ReferenceController;
  pFVar3 = param_3->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnSessionUserInviteAcceptedDelegates,(FWriteAccessScope *)&local_68);
  puVar1 = &(this->OnSessionUserInviteAcceptedDelegates).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar7 = false;
  uVar11 = *(int *)&(this->OnSessionUserInviteAcceptedDelegates).field_0x10 - 1;
  if (-1 < (int)uVar11) {
    lVar12 = (longlong)(int)uVar11 << 4;
    bVar7 = false;
    do {
      uVar10 = 0;
      if ((int)uVar11 < *(int *)&(this->OnSessionUserInviteAcceptedDelegates).field_0x10) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar4 = *(longlong *)&(this->OnSessionUserInviteAcceptedDelegates).field_0x8;
      if ((*(int *)(lVar12 + 8 + lVar4) == 0) ||
         (plVar5 = *(longlong **)(lVar12 + lVar4), plVar5 == (longlong *)0x0)) {
LAB_14ed318e2:
        bVar7 = true;
      }
      else {
        lVar4 = *plVar5;
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_78 = pFVar3;
        local_70 = pTVar2;
        cVar9 = (**(code **)(lVar4 + 0x68))(plVar5,param_1,param_2,&local_78,param_4);
        if (cVar9 == '\0') goto LAB_14ed318e2;
      }
      lVar12 = lVar12 + -0x10;
      uVar11 = uVar11 - 1;
    } while (-1 < (int)uVar11);
  }
  puVar1 = &(this->OnSessionUserInviteAcceptedDelegates).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar7) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnSessionUserInviteAcceptedDelegates,false);
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return;
}

// TriggerOnStartSessionCompleteDelegates @ 14ed31980

void __thiscall
IOnlineSession::TriggerOnStartSessionCompleteDelegates
          (IOnlineSession *this,FName param_1,bool param_2)

{
  TMulticastDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnStartSessionCompleteDelegates,param_1,param_2);
  return;
}

// TriggerOnUnregisterPlayersCompleteDelegates @ 14ed31ac0

void __thiscall
IOnlineSession::TriggerOnUnregisterPlayersCompleteDelegates
          (IOnlineSession *this,FName param_1,
          TArray<TSharedRef<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_> *param_2,
          bool param_3)

{
  TMulticastDelegate<void___cdecl(FName,TArray<TSharedRef<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_>_const_&,bool),FDefaultDelegateUserPolicy>
  ::Broadcast(&this->OnUnregisterPlayersCompleteDelegates,param_1,param_2,param_3);
  return;
}

// TriggerOnUpdateSessionCompleteDelegates @ 14ed31ae0

void __thiscall
IOnlineSession::TriggerOnUpdateSessionCompleteDelegates
          (IOnlineSession *this,FName param_1,bool param_2)

{
  TMulticastDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnUpdateSessionCompleteDelegates,param_1,param_2);
  return;
}

