// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 28

// FTestSessionInterface @ 14ec52d60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FTestSessionInterface * __thiscall
FTestSessionInterface::FTestSessionInterface
          (FTestSessionInterface *this,FString *param_1,bool param_2)

{
  FTSTicker *pFVar1;
  
  pFVar1 = FTSTicker::GetCoreTicker();
  FTSTickerObjectBase::FTSTickerObjectBase((FTSTickerObjectBase *)this,0.0,pFVar1);
  FSelfRegisteringExec::FSelfRegisteringExec((FSelfRegisteringExec *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__FTSTickerObjectBase__;
  this->_padding_ = (longlong)&_vftable__for__FSelfRegisteringExec__;
  ::FString::FString(&this->Subsystem,param_1);
  this->bOverallSuccess = true;
  (this->UserId).Object = (FUniqueNetId *)0x0;
  (this->UserId).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->FriendsCache).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FriendsCache).ArrayNum = 0;
  (this->FriendsCache).ArrayMax = 0;
  (this->Identity).Object = (IOnlineIdentity *)0x0;
  (this->Identity).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->SessionInt).Object = (IOnlineSession *)0x0;
  (this->SessionInt).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->Friends).Object = (IOnlineFriends *)0x0;
  (this->Friends).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->OnSessionUserInviteAcceptedDelegate = 0;
  *(undefined8 *)&(this->OnSessionUserInviteAcceptedDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnSessionUserInviteAcceptedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnCreateSessionCompleteDelegate = 0;
  *(undefined8 *)&(this->OnCreateSessionCompleteDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnCreateSessionCompleteDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnStartSessionCompleteDelegate = 0;
  *(undefined8 *)&(this->OnStartSessionCompleteDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnStartSessionCompleteDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnEndSessionCompleteDelegate = 0;
  *(undefined8 *)&(this->OnEndSessionCompleteDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnEndSessionCompleteDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnDestroySessionCompleteDelegate = 0;
  *(undefined8 *)&(this->OnDestroySessionCompleteDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnDestroySessionCompleteDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnUpdateSessionCompleteDelegate = 0;
  *(undefined8 *)&(this->OnUpdateSessionCompleteDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnUpdateSessionCompleteDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnRegisterPlayersCompleteDelegate = 0;
  *(undefined8 *)&(this->OnRegisterPlayersCompleteDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnRegisterPlayersCompleteDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnUnregisterPlayersCompleteDelegate = 0;
  *(undefined8 *)&(this->OnUnregisterPlayersCompleteDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnUnregisterPlayersCompleteDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnFindSessionsCompleteDelegate = 0;
  *(undefined8 *)&(this->OnFindSessionsCompleteDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnFindSessionsCompleteDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnCancelFindSessionsCompleteDelegate = 0;
  *(undefined8 *)&(this->OnCancelFindSessionsCompleteDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnCancelFindSessionsCompleteDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnJoinSessionCompleteDelegate = 0;
  *(undefined8 *)&(this->OnJoinSessionCompleteDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnJoinSessionCompleteDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnEndForJoinSessionCompleteDelegate = 0;
  *(undefined8 *)&(this->OnEndForJoinSessionCompleteDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnEndForJoinSessionCompleteDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnDestroyForJoinSessionCompleteDelegate = 0;
  *(undefined8 *)&(this->OnDestroyForJoinSessionCompleteDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnDestroyForJoinSessionCompleteDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnMatchmakingCompleteDelegate = 0;
  *(undefined8 *)&(this->OnMatchmakingCompleteDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnMatchmakingCompleteDelegate).field_0x10 = 0;
  (this->OnReadFriendsListCompleteDelegateHandle).ID = 0;
  (this->OnSessionUserInviteAcceptedDelegateHandle).ID = 0;
  (this->OnCreateSessionCompleteDelegateHandle).ID = 0;
  (this->OnStartSessionCompleteDelegateHandle).ID = 0;
  (this->OnEndSessionCompleteDelegateHandle).ID = 0;
  (this->OnDestroySessionCompleteDelegateHandle).ID = 0;
  (this->OnUpdateSessionCompleteDelegateHandle).ID = 0;
  (this->OnRegisterPlayersCompleteDelegateHandle).ID = 0;
  (this->OnUnregisterPlayersCompleteDelegateHandle).ID = 0;
  this->bIsHost = param_2;
  (this->OnFindSessionsCompleteDelegateHandle).ID = 0;
  (this->OnCancelFindSessionsCompleteDelegateHandle).ID = 0;
  (this->OnJoinSessionCompleteDelegateHandle).ID = 0;
  (this->OnEndForJoinSessionCompleteDelegateHandle).ID = 0;
  (this->OnDestroyForJoinSessionCompleteDelegateHandle).ID = 0;
  (this->OnMatchmakingCompleteDelegateHandle).ID = 0;
  *(undefined8 *)&this->OnFindFriendSessionCompleteDelegate = 0;
  *(undefined8 *)&(this->OnFindFriendSessionCompleteDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnFindFriendSessionCompleteDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnFindFriendSessionForListFriendSessionsCompleteDelegate = 0;
  *(undefined8 *)&(this->OnFindFriendSessionForListFriendSessionsCompleteDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnFindFriendSessionForListFriendSessionsCompleteDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnFindFriendSessionCompleteDelegateHandles = 0;
  *(undefined8 *)&(this->OnFindFriendSessionCompleteDelegateHandles).field_0x8 = 0;
  *(undefined8 *)&(this->OnFindFriendSessionCompleteDelegateHandles).field_0x20 = 0;
  *(undefined4 *)&(this->OnFindFriendSessionCompleteDelegateHandles).field_0x28 = 0;
  *(undefined4 *)&(this->OnFindFriendSessionCompleteDelegateHandles).field_0x2c = 0x80;
  *(undefined4 *)&(this->OnFindFriendSessionCompleteDelegateHandles).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OnFindFriendSessionCompleteDelegateHandles).field_0x34 = 0;
  *(undefined8 *)&(this->OnFindFriendSessionCompleteDelegateHandles).field_0x40 = 0;
  *(undefined4 *)&(this->OnFindFriendSessionCompleteDelegateHandles).field_0x48 = 0;
  (this->HostSettings).Object = (TestOnlineGameSettings *)0x0;
  (this->HostSettings).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->SearchSettings).Object = (TestOnlineSearchSettings *)0x0;
  (this->SearchSettings).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CachedSessionResult).Session._padding_ = (longlong)&___7FOnlineSession__6B_;
  (this->CachedSessionResult).Session.OwningUserId.Object = (FUniqueNetId *)0x0;
  (this->CachedSessionResult).Session.OwningUserId.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CachedSessionResult).Session.OwningUserName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CachedSessionResult).Session.OwningUserName.Data.ArrayNum = 0;
  (this->CachedSessionResult).Session.OwningUserName.Data.ArrayMax = 0;
  FOnlineSessionSettings::FOnlineSessionSettings
            (&(this->CachedSessionResult).Session.SessionSettings);
  (this->CachedSessionResult).Session.SessionInfo.Object = (FOnlineSessionInfo *)0x0;
  (this->CachedSessionResult).Session.SessionInfo.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CachedSessionResult).Session.NumOpenPrivateConnections = 0;
  (this->CachedSessionResult).Session.NumOpenPublicConnections = 0;
  (this->CachedSessionResult).PingInMs = 9999;
  this->TestPhase = 0;
  this->LastTestPhase = -1;
  this->bWasLastCommandSuccessful = true;
  return this;
}

// ~FTestSessionInterface @ 14ec565e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FTestSessionInterface::~FTestSessionInterface(FTestSessionInterface *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  this->_padding_ = (longlong)&_vftable__for__FTSTickerObjectBase__;
  this->_padding_ = (longlong)&_vftable__for__FSelfRegisteringExec__;
  ClearDelegates(this);
  local_28 = 0;
  FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->SessionInt != (TSharedPtr<IOnlineSession,1> *)&local_28) {
    (this->SessionInt).Object = (IOnlineSession *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->SessionInt).SharedReferenceCount,&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->Friends != (TSharedPtr<IOnlineFriends,1> *)&local_18) {
    (this->Friends).Object = (IOnlineFriends *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Friends).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CachedSessionResult).Session.SessionInfo.SharedReferenceCount.
             ReferenceController);
  FOnlineSessionSettings::~FOnlineSessionSettings
            (&(this->CachedSessionResult).Session.SessionSettings);
  pFVar1 = (this->CachedSessionResult).Session.OwningUserName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CachedSessionResult).Session.OwningUserId.SharedReferenceCount.
             ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SearchSettings).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->HostSettings).SharedReferenceCount.ReferenceController);
  *(undefined4 *)&(this->OnFindFriendSessionCompleteDelegateHandles).field_0x48 = 0;
  pvVar2 = *(void **)&(this->OnFindFriendSessionCompleteDelegateHandles).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FDelegateHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FDelegateHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FDelegateHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->OnFindFriendSessionCompleteDelegateHandles);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &this->OnFindFriendSessionForListFriendSessionsCompleteDelegate);
  pvVar2 = *(void **)&(this->OnFindFriendSessionForListFriendSessionsCompleteDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &this->OnFindFriendSessionForListFriendSessionsCompleteDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnFindFriendSessionCompleteDelegate
            );
  pvVar2 = *(void **)&(this->OnFindFriendSessionCompleteDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnFindFriendSessionCompleteDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnMatchmakingCompleteDelegate);
  pvVar2 = *(void **)&(this->OnMatchmakingCompleteDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMatchmakingCompleteDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &this->OnDestroyForJoinSessionCompleteDelegate);
  pvVar2 = *(void **)&(this->OnDestroyForJoinSessionCompleteDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDestroyForJoinSessionCompleteDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnEndForJoinSessionCompleteDelegate
            );
  pvVar2 = *(void **)&(this->OnEndForJoinSessionCompleteDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnEndForJoinSessionCompleteDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnJoinSessionCompleteDelegate);
  pvVar2 = *(void **)&(this->OnJoinSessionCompleteDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnJoinSessionCompleteDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &this->OnCancelFindSessionsCompleteDelegate);
  pvVar2 = *(void **)&(this->OnCancelFindSessionsCompleteDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnCancelFindSessionsCompleteDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnFindSessionsCompleteDelegate);
  pvVar2 = *(void **)&(this->OnFindSessionsCompleteDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnFindSessionsCompleteDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnUnregisterPlayersCompleteDelegate
            );
  pvVar2 = *(void **)&(this->OnUnregisterPlayersCompleteDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnUnregisterPlayersCompleteDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnRegisterPlayersCompleteDelegate);
  pvVar2 = *(void **)&(this->OnRegisterPlayersCompleteDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnRegisterPlayersCompleteDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnUpdateSessionCompleteDelegate);
  pvVar2 = *(void **)&(this->OnUpdateSessionCompleteDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnUpdateSessionCompleteDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDestroySessionCompleteDelegate);
  pvVar2 = *(void **)&(this->OnDestroySessionCompleteDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDestroySessionCompleteDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnEndSessionCompleteDelegate);
  pvVar2 = *(void **)&(this->OnEndSessionCompleteDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnEndSessionCompleteDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnStartSessionCompleteDelegate);
  pvVar2 = *(void **)&(this->OnStartSessionCompleteDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnStartSessionCompleteDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnCreateSessionCompleteDelegate);
  pvVar2 = *(void **)&(this->OnCreateSessionCompleteDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnCreateSessionCompleteDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnSessionUserInviteAcceptedDelegate
            );
  pvVar2 = *(void **)&(this->OnSessionUserInviteAcceptedDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSessionUserInviteAcceptedDelegate);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Friends).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SessionInt).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Identity).SharedReferenceCount.ReferenceController);
  DestructItems<TSharedRef<FOnlineFriend,1>,int>
            ((TSharedRef<FOnlineFriend,1> *)(this->FriendsCache).AllocatorInstance.Data,
             (this->FriendsCache).ArrayNum);
  pFVar1 = (this->FriendsCache).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->UserId).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->Subsystem).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FSelfRegisteringExec::~FSelfRegisteringExec((FSelfRegisteringExec *)&this->_padding_);
  FTSTickerObjectBase::~FTSTickerObjectBase((FTSTickerObjectBase *)this);
  return;
}

// ClearDelegates @ 14ecde2c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FTestSessionInterface::ClearDelegates(FTestSessionInterface *this)

{
  IOnlineSession *pIVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->SessionInt).Object == (IOnlineSession *)0x0) {
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
  pIVar1 = (this->SessionInt).Object;
  (**(code **)(pIVar1->_padding_ + 0x338))(pIVar1,&this->OnSessionUserInviteAcceptedDelegateHandle);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&GEngine->WorldDestroyedEvent,
             this);
  return;
}

// DestroyExistingSession @ 14ece1f70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FDelegateHandle __thiscall
FTestSessionInterface::DestroyExistingSession
          (FTestSessionInterface *this,FName param_1,
          TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *param_2)

{
  IOnlineSession *pIVar1;
  code *pcVar2;
  bool bVar3;
  FDelegateHandle FVar4;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_38;
  ForAnyElementType local_30;
  ulonglong local_28;
  FDestructionSentinel local_20;
  
  if ((this->SessionInt).Object == (IOnlineSession *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar4.ID = (*pcVar2)();
      return (FDelegateHandle)FVar4.ID;
    }
  }
  pIVar1 = (this->SessionInt).Object;
  (**(code **)(pIVar1->_padding_ + 0xf0))(pIVar1,param_1);
  if ((this->SessionInt).Object == (IOnlineSession *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar4.ID = (*pcVar2)();
      return (FDelegateHandle)FVar4.ID;
    }
  }
  pIVar1 = (this->SessionInt).Object;
  local_28 = 0;
  local_38.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_30.Data = (FScriptContainerElement *)0x0;
  (**(code **)(pIVar1->_padding_ + 0xe8))(pIVar1,param_2);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_38,(FWriteAccessScope *)&local_20);
  if (((int)local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
    local_28 = local_28 & 0xffffffff00000000;
  }
  if (local_20.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
  }
  if (local_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_38.AccessDetector);
  return (FDelegateHandle)param_1;
}

// EndExistingSession @ 14ece2c90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FDelegateHandle __thiscall
FTestSessionInterface::EndExistingSession
          (FTestSessionInterface *this,FName param_1,
          TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *param_2)

{
  IOnlineSession *pIVar1;
  code *pcVar2;
  bool bVar3;
  FDelegateHandle FVar4;
  
  if ((this->SessionInt).Object == (IOnlineSession *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar4.ID = (*pcVar2)();
      return (FDelegateHandle)FVar4.ID;
    }
  }
  pIVar1 = (this->SessionInt).Object;
  (**(code **)(pIVar1->_padding_ + 200))(pIVar1,param_1);
  if ((this->SessionInt).Object == (IOnlineSession *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar4.ID = (*pcVar2)();
      return (FDelegateHandle)FVar4.ID;
    }
  }
  pIVar1 = (this->SessionInt).Object;
  (**(code **)(pIVar1->_padding_ + 0xc0))(pIVar1,param_2);
  return (FDelegateHandle)param_1;
}

// Exec_Runtime @ 14ece2d50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FTestSessionInterface::Exec_Runtime
          (FTestSessionInterface *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  int *piVar1;
  FName FVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  UWorld *pUVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 uVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  FNameEntryId FVar13;
  FName *pFVar14;
  undefined4 extraout_var;
  IOnlineSession *pIVar15;
  ulong64 *puVar16;
  undefined8 *puVar17;
  ulong64 uVar18;
  IOnlineIdentity *pIVar19;
  TestOnlineSearchSettings *pTVar20;
  size_t sVar21;
  longlong *plVar22;
  TSharedRef<FUniqueNetId_const_,1> *pTVar23;
  TSharedPtr<FUniqueNetId_const_,1> *this_00;
  TestOnlineGameSettings *pTVar24;
  FOnlineSessionSettings *pFVar25;
  TestOnlineGameSettings *pTVar26;
  FString *pFVar27;
  FDelegateHandle FVar28;
  FUniqueNetId *pFVar29;
  IOnlineSubsystem *pIVar30;
  undefined4 extraout_var_00;
  ulonglong uVar31;
  wchar_t *pwVar32;
  ForAnyElementType FVar33;
  uint uVar34;
  UWorld *pUVar35;
  undefined1 *this_01;
  undefined1 auStackY_a38 [32];
  int local_9e8 [2];
  wchar_t *local_9e0;
  undefined1 local_9d8 [4];
  uint local_9d4;
  ForAnyElementType local_9d0;
  undefined8 local_9c8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_9c0;
  FDelegateAllocation local_9b8;
  longlong local_9a8;
  FSharedReferencer<1> local_9a0;
  code *local_998;
  TestOnlineGameSettings *pTStack_990;
  FString local_988;
  TRawPtrProxy<TestOnlineGameSettings> local_978;
  UWorld *local_970;
  longlong local_968;
  TReferenceControllerBase<1> *local_960;
  FName local_958;
  undefined4 local_950;
  undefined4 uStack_94c;
  FString local_948;
  FString local_938;
  void *local_928;
  undefined8 local_920;
  void *local_918;
  undefined8 local_910;
  longlong local_908;
  TReferenceControllerBase<1> *local_900;
  longlong local_8f8;
  TReferenceControllerBase<1> *local_8f0;
  undefined1 local_8e8 [4];
  undefined1 local_8e4 [8];
  undefined1 local_8dc [12];
  FString local_8d0;
  int *local_8c0;
  undefined8 local_8b8;
  int *local_8b0;
  undefined8 local_8a8;
  int *local_8a0;
  undefined8 local_898;
  FString local_890;
  undefined1 local_880 [8];
  undefined4 local_878;
  uint uStack_874;
  FDestructionSentinel local_870;
  FDestructionSentinel local_858;
  FDelegateAllocation *local_840;
  undefined1 local_838 [8];
  undefined1 local_830 [8];
  undefined1 local_828 [8];
  undefined1 local_820 [8];
  undefined1 local_818 [8];
  FName local_810;
  FName local_808;
  undefined1 local_800 [8];
  undefined1 local_7f8 [8];
  FName local_7f0;
  FName local_7e8;
  void *local_7e0 [2];
  undefined1 local_7d0 [8];
  TReferenceControllerBase<1> *local_7c8;
  undefined1 local_7c0 [8];
  undefined1 local_7b8 [8];
  TReferenceControllerBase<1> *local_7b0;
  TSharedRef<FUniqueNetId_const_,1> local_7a8;
  undefined1 local_798 [8];
  TReferenceControllerBase<1> *local_790;
  FString local_788;
  undefined1 local_778 [8];
  TReferenceControllerBase<1> *local_770;
  void *local_768 [2];
  undefined1 local_758 [8];
  TReferenceControllerBase<1> *local_750;
  undefined1 local_748 [8];
  undefined1 local_740 [8];
  undefined1 local_738 [16];
  FOnlineSessionSettings local_728;
  wchar_t local_648 [256];
  wchar_t local_448 [256];
  wchar_t local_248 [256];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_a38;
  pTVar26 = (TestOnlineGameSettings *)0x0;
  uVar11 = 0;
  local_9d4 = 0;
  local_9e8[0] = 0;
  bVar9 = false;
  local_9e0 = param_2;
  local_970 = param_1;
  bVar7 = FParse::Command(&local_9e0,L"TESTSESSION",true);
  if (!bVar7) {
    return false;
  }
  local_988.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_988.Data.ArrayNum = 0;
  local_988.Data.ArrayMax = 0;
  bVar7 = FParse::Value(local_9e0,L"Name=",&local_988,true,(wchar_t **)0x0);
  if (bVar7) {
    FVar33.Data = (FScriptContainerElement *)L"";
    if (local_988.Data.ArrayNum != 0) {
      FVar33.Data = local_988.Data.AllocatorInstance.Data;
    }
    pFVar14 = ::FName::FName(&local_7e8,(wchar_t *)FVar33.Data);
  }
  else {
    FVar13 = FNameEntryId::FromValidEName((EName)local_8e8);
    local_958.Number = 0;
    pFVar14 = &local_958;
    local_958.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar13.Value);
  }
  FVar2 = *pFVar14;
  uVar10 = local_988.Data.ArrayNum - 1;
  if (local_988.Data.ArrayNum == 0) {
    uVar10 = uVar11;
  }
  if (0 < (int)uVar10) {
    iVar12 = local_988.Data.ArrayNum + 4;
    if (local_988.Data.ArrayNum == 0) {
      iVar12 = 5;
    }
    local_9e0 = local_9e0 + iVar12;
  }
  bVar7 = FParse::Command(&local_9e0,L"SEARCH",true);
  if (bVar7) {
    pcVar3 = *(code **)&(this->OnFindFriendSessionCompleteDelegateHandles).field_0x48;
    if (pcVar3 != (code *)0x0) {
      pTStack_990 = (this->HostSettings).Object;
      if (pTStack_990 != (TestOnlineGameSettings *)0x0) {
        LOCK();
        *(atomic<int> *)&pTStack_990->field_0x8 =
             (atomic<int>)((int)*(atomic<int> *)&pTStack_990->field_0x8 + 1);
        UNLOCK();
        LOCK();
        *(atomic<int> *)&pTStack_990->field_0x8 =
             (atomic<int>)((int)*(atomic<int> *)&pTStack_990->field_0x8 + 1);
        UNLOCK();
      }
      local_998 = pcVar3;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pTStack_990);
      pIVar15 = TSharedPtr<IOnlineSession,1>::operator->
                          ((TSharedPtr<IOnlineSession,1> *)&(this->FriendsCache).ArrayNum);
      puVar16 = (ulong64 *)
                (**(code **)(pIVar15->_padding_ + 0x188))
                          (pIVar15,local_7c0,&this->OnUnregisterPlayersCompleteDelegate);
      (this->OnUpdateSessionCompleteDelegateHandle).ID = *puVar16;
      pIVar15 = TSharedPtr<IOnlineSession,1>::operator->
                          ((TSharedPtr<IOnlineSession,1> *)&(this->FriendsCache).ArrayNum);
      (**(code **)(pIVar15->_padding_ + 0x180))(pIVar15,local_9e8[0],&local_998);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pTStack_990);
    }
    bVar9 = true;
    goto LAB_14ece40b2;
  }
  bVar7 = FParse::Command(&local_9e0,L"FINDBYID",true);
  if (bVar7) {
    local_938.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_938.Data.ArrayNum = 0;
    local_938.Data.ArrayMax = 0;
    bVar7 = FParse::Token(&local_9e0,&local_938,true,L'\0');
    if (bVar7) {
      pIVar15 = TSharedPtr<IOnlineSession,1>::operator->
                          ((TSharedPtr<IOnlineSession,1> *)&(this->FriendsCache).ArrayNum);
      (**(code **)(pIVar15->_padding_ + 0x18))(pIVar15,&local_8f8,&local_938);
      if (local_8f8 != 0) {
        local_9c0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0
        ;
        local_998 = OnFindSessionByIdComplete;
        piVar1 = &this[-1].CachedSessionResult.PingInMs;
        local_9b8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_9b8.DelegateSize = 0;
        pTStack_990 = (TestOnlineGameSettings *)((ulonglong)uStack_874 << 0x20);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_9c0,(FWriteAccessScope *)&local_858);
        local_840 = &local_9b8;
        puVar17 = UE::Core::Private::DelegateAllocate(0x30,&local_9b8);
        if (puVar17 != (undefined8 *)0x0) {
          *puVar17 = &
                     ___7__TCommonDelegateInstanceState___A6AXH_NAEBVFOnlineSessionSearchResult___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar18 = FDelegateHandle::GenerateNewID();
          puVar17[2] = uVar18;
          *puVar17 = &
                     ___7__TBaseRawMethodDelegateInstance__0A_VFTestSessionInterface____A6AXH_NAEBVFOnlineSessionSearchResult___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          puVar17[3] = piVar1;
          puVar17[4] = local_998;
          puVar17[5] = pTStack_990;
          if (((piVar1 == (int *)0x0) || (puVar17[4] == 0)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("InUserObject != nullptr && MethodPtr != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                                 ,0x1d8,L""), bVar7)) {
            pcVar3 = (code *)swi(3);
            uVar8 = (*pcVar3)();
            return (bool)uVar8;
          }
        }
        if (local_858.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_858.Accessor,&local_858);
        }
        pIVar19 = TSharedPtr<IOnlineIdentity,1>::operator->
                            ((TSharedPtr<IOnlineIdentity,1> *)&this->World);
        (**(code **)(pIVar19->_padding_ + 0x110))(pIVar19,&local_968,local_9e8[0]);
        if ((local_968 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("LocalUserId.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\Tests\\TestSessionInterface.cpp"
                               ,0x1eb,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          uVar8 = (*pcVar3)();
          return (bool)uVar8;
        }
        pIVar15 = TSharedPtr<IOnlineSession,1>::operator->
                            ((TSharedPtr<IOnlineSession,1> *)&(this->FriendsCache).ArrayNum);
        pcVar3 = *(code **)(pIVar15->_padding_ + 0x1b0);
        if ((local_968 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x44d,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          uVar8 = (*pcVar3)();
          return (bool)uVar8;
        }
        lVar6 = local_968;
        if ((local_8f8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x44d,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          uVar8 = (*pcVar3)();
          return (bool)uVar8;
        }
        if ((local_968 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x44d,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          uVar8 = (*pcVar3)();
          return (bool)uVar8;
        }
        (*pcVar3)(pIVar15,local_968,local_8f8,lVar6);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_960);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_9c0,(FWriteAccessScope *)&local_870);
        if ((local_9b8.DelegateSize != 0) &&
           (local_9b8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_9b8.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_9b8,0,0,0x10);
          local_9b8.DelegateSize = 0;
        }
        if (local_870.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_870.Accessor,&local_870);
        }
        if (local_9b8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_9b8.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_9c0.AccessDetector);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_8f0)
      ;
    }
    bVar9 = true;
    if (local_938.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_938.Data.AllocatorInstance.Data);
    }
    goto LAB_14ece40b2;
  }
  bVar7 = FParse::Command(&local_9e0,L"JOIN",true);
  uVar10 = 0;
  if (bVar7) {
    bVar7 = FParse::Token(&local_9e0,local_448,0x100,true,L'\0');
    if (bVar7) {
      uVar11 = _wtoi(local_448);
    }
    pTVar20 = TSharedPtr<TestOnlineSearchSettings,1>::operator->
                        ((TSharedPtr<TestOnlineSearchSettings,1> *)
                         &(this->OnFindFriendSessionCompleteDelegateHandles).field_0x48);
    if ((-1 < (int)uVar11) && ((int)uVar11 < *(int *)&pTVar20->field_0x10)) {
      pTVar20 = TSharedPtr<TestOnlineSearchSettings,1>::operator->
                          ((TSharedPtr<TestOnlineSearchSettings,1> *)
                           &(this->OnFindFriendSessionCompleteDelegateHandles).field_0x48);
      if ((int)uVar11 < *(int *)&pTVar20->field_0x10) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        uVar8 = (*pcVar3)();
        return (bool)uVar8;
      }
      JoinSession((FTestSessionInterface *)&this[-1].CachedSessionResult.PingInMs,local_9e8[0],FVar2
                  ,(FOnlineSessionSearchResult *)
                   ((longlong)(int)uVar11 * 0x120 + *(longlong *)&pTVar20->field_0x8));
    }
    bVar9 = true;
    goto LAB_14ece40b2;
  }
  bVar7 = FParse::Command(&local_9e0,L"JOINFRIEND",true);
  if (bVar7) {
    bVar7 = FParse::Command(&local_9e0,L"LOBBY",true);
    if (bVar7) {
      bVar7 = FParse::Token(&local_9e0,local_248,0x100,true,L'\0');
      if ((bVar7) &&
         (iVar12 = *(int *)&(this->UserId).SharedReferenceCount.ReferenceController,
         pTVar24 = pTVar26, 0 < iVar12)) {
        do {
          uVar34 = (uint)pTVar26;
          uVar11 = uVar10;
          if ((int)uVar34 < iVar12) {
            uVar11 = ~uVar34 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            uVar8 = (*pcVar3)();
            return (bool)uVar8;
          }
          local_918 = (void *)0x0;
          local_910 = 0;
          plVar22 = *(longlong **)((longlong)&pTVar24->field_0x0 + (longlong)(this->UserId).Object);
          puVar17 = (undefined8 *)(**(code **)(*plVar22 + 0x18))(plVar22,local_7e0,&local_918);
          if (*(int *)(puVar17 + 1) == 0) {
            pwVar32 = L"";
          }
          else {
            pwVar32 = (wchar_t *)*puVar17;
          }
          iVar12 = FGenericPlatformStricmp::Stricmp(pwVar32,local_248);
          if (local_7e0[0] != (void *)0x0) {
            FMemory::Free(local_7e0[0]);
          }
          if (local_918 != (void *)0x0) {
            FMemory::Free(local_918);
          }
          if (iVar12 == 0) {
            pIVar15 = TSharedPtr<IOnlineSession,1>::operator->
                                ((TSharedPtr<IOnlineSession,1> *)&(this->FriendsCache).ArrayNum);
            local_8a0 = local_9e8;
            local_898 = (**(code **)(pIVar15->_padding_ + 0x2f0))
                                  (pIVar15,local_740,local_9e8[0],
                                   &this->OnEndForJoinSessionCompleteDelegateHandle);
            TSet<TTuple<int,FDelegateHandle>,TDefaultMapHashableKeyFuncs<int,FDelegateHandle,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<int_const_&,FDelegateHandle_&&>_>
                      ((TSet<TTuple<int,FDelegateHandle>,TDefaultMapHashableKeyFuncs<int,FDelegateHandle,0>,FDefaultSetAllocator>
                        *)&this->OnFindFriendSessionForListFriendSessionsCompleteDelegate,
                       (TPairInitializer<int_const_&,FDelegateHandle_&&> *)local_8e4,
                       (bool *)&local_8a0);
            pIVar15 = TSharedPtr<IOnlineSession,1>::operator->
                                ((TSharedPtr<IOnlineSession,1> *)&(this->FriendsCache).ArrayNum);
            pcVar3 = *(code **)(pIVar15->_padding_ + 0x2e8);
            puVar17 = (undefined8 *)(**(code **)(*plVar22 + 8))(plVar22,local_7d0);
            (*pcVar3)(pIVar15,local_9e8[0],*puVar17);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_7c8);
            bVar9 = true;
            goto LAB_14ece40b2;
          }
          iVar12 = *(int *)&(this->UserId).SharedReferenceCount.ReferenceController;
          pTVar26 = (TestOnlineGameSettings *)(ulonglong)(uVar34 + 1);
          pTVar24 = (TestOnlineGameSettings *)&pTVar24->field_0x10;
        } while ((int)(uVar34 + 1) < iVar12);
        bVar9 = true;
        goto LAB_14ece40b2;
      }
    }
    else {
      bVar7 = FParse::Token(&local_9e0,local_648,0x100,true,L'\0');
      if (bVar7) {
        pIVar19 = TSharedPtr<IOnlineIdentity,1>::operator->
                            ((TSharedPtr<IOnlineIdentity,1> *)&this->World);
        sVar21 = wcslen(local_648);
        (**(code **)(pIVar19->_padding_ + 0x128))(pIVar19,&local_9a8,local_648,sVar21 & 0xffffffff);
        if (local_9a8 == 0) {
          pIVar19 = TSharedPtr<IOnlineIdentity,1>::operator->
                              ((TSharedPtr<IOnlineIdentity,1> *)&this->World);
          pcVar3 = *(code **)(pIVar19->_padding_ + 0x120);
          ::FString::FString(&local_890,local_648);
          plVar22 = (longlong *)(*pcVar3)(pIVar19,local_758,&local_890);
          if (&local_9a8 != plVar22) {
            local_9a8 = *plVar22;
            *plVar22 = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&local_9a0,(FSharedReferencer<1> *)(plVar22 + 1));
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_750);
          if (local_890.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_890.Data.AllocatorInstance.Data);
          }
          if (local_9a8 != 0) goto LAB_14ece3570;
        }
        else {
LAB_14ece3570:
          pIVar15 = TSharedPtr<IOnlineSession,1>::operator->
                              ((TSharedPtr<IOnlineSession,1> *)&(this->FriendsCache).ArrayNum);
          local_8b0 = local_9e8;
          local_8a8 = (**(code **)(pIVar15->_padding_ + 0x2f0))
                                (pIVar15,local_738,local_9e8[0],
                                 &this->OnEndForJoinSessionCompleteDelegateHandle);
          TSet<TTuple<int,FDelegateHandle>,TDefaultMapHashableKeyFuncs<int,FDelegateHandle,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<int_const_&,FDelegateHandle_&&>_>
                    ((TSet<TTuple<int,FDelegateHandle>,TDefaultMapHashableKeyFuncs<int,FDelegateHandle,0>,FDefaultSetAllocator>
                      *)&this->OnFindFriendSessionForListFriendSessionsCompleteDelegate,
                     (TPairInitializer<int_const_&,FDelegateHandle_&&> *)(local_8e4 + 4),
                     (bool *)&local_8b0);
          pIVar15 = TSharedPtr<IOnlineSession,1>::operator->
                              ((TSharedPtr<IOnlineSession,1> *)&(this->FriendsCache).ArrayNum);
          pcVar3 = *(code **)(pIVar15->_padding_ + 0x2e8);
          if ((local_9a8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x44d,L""), bVar7)) {
            pcVar3 = (code *)swi(3);
            uVar8 = (*pcVar3)();
            return (bool)uVar8;
          }
          (*pcVar3)(pIVar15,local_9e8[0],local_9a8);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_9a0.ReferenceController);
        bVar9 = true;
        goto LAB_14ece40b2;
      }
    }
  }
  else {
    bVar7 = FParse::Command(&local_9e0,L"LISTFRIENDSESSIONS",true);
    if (bVar7) {
      iVar12 = *(int *)&(this->UserId).SharedReferenceCount.ReferenceController;
      local_9d0.Data = (FScriptContainerElement *)0x0;
      local_9c8 = 0;
      pTVar24 = pTVar26;
      if (0 < iVar12) {
        do {
          uVar34 = (uint)pTVar26;
          uVar11 = uVar10;
          if ((int)uVar34 < iVar12) {
            uVar11 = ~uVar34 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            uVar8 = (*pcVar3)();
            return (bool)uVar8;
          }
          plVar22 = *(longlong **)((longlong)&pTVar24->field_0x0 + (longlong)(this->UserId).Object);
          pTVar23 = (TSharedRef<FUniqueNetId_const_,1> *)
                    (**(code **)(*plVar22 + 8))(plVar22,local_7b8);
          if (((local_9d0.Data <= pTVar23) &&
              (pTVar23 < (TSharedRef<FUniqueNetId_const_,1> *)
                         (local_9d0.Data + (longlong)local_9c8._4_4_ * 0x10))) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar3 = (code *)swi(3);
            uVar8 = (*pcVar3)();
            return (bool)uVar8;
          }
          iVar12 = (int)local_9c8;
          if ((int)local_9c8 == local_9c8._4_4_) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&local_9d0,(int *)((longlong)&local_9c8 + 4));
          }
          local_9c8 = CONCAT44(local_9c8._4_4_,iVar12 + 1);
          *(FUniqueNetId **)&local_9d0.Data[(longlong)iVar12 * 0x10].field_0x0 = pTVar23->Object;
          pTVar4 = (pTVar23->SharedReferenceCount).ReferenceController;
          *(TReferenceControllerBase<1> **)(local_9d0.Data + (longlong)iVar12 * 0x10 + 8) = pTVar4;
          if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_7b0);
          iVar12 = *(int *)&(this->UserId).SharedReferenceCount.ReferenceController;
          pTVar26 = (TestOnlineGameSettings *)(ulonglong)(uVar34 + 1);
          pTVar24 = (TestOnlineGameSettings *)&pTVar24->field_0x10;
        } while ((int)(uVar34 + 1) < iVar12);
      }
      pIVar15 = TSharedPtr<IOnlineSession,1>::operator->
                          ((TSharedPtr<IOnlineSession,1> *)&(this->FriendsCache).ArrayNum);
      pcVar3 = *(code **)(pIVar15->_padding_ + 0x2d8);
      pIVar19 = TSharedPtr<IOnlineIdentity,1>::operator->
                          ((TSharedPtr<IOnlineIdentity,1> *)&this->World);
      this_00 = (TSharedPtr<FUniqueNetId_const_,1> *)
                (**(code **)(pIVar19->_padding_ + 0x110))(pIVar19,local_798,local_9e8[0]);
      pTVar23 = TSharedPtr<FUniqueNetId_const_,1>::ToSharedRef(this_00,&local_7a8);
      (*pcVar3)(pIVar15,pTVar23->Object,&local_9d0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_7a8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_790)
      ;
      pIVar15 = TSharedPtr<IOnlineSession,1>::operator->
                          ((TSharedPtr<IOnlineSession,1> *)&(this->FriendsCache).ArrayNum);
      local_8c0 = local_9e8;
      local_8b8 = (**(code **)(pIVar15->_padding_ + 0x2f0))
                            (pIVar15,local_838,local_9e8[0],
                             &this->OnFindFriendSessionCompleteDelegate);
      TSet<TTuple<int,FDelegateHandle>,TDefaultMapHashableKeyFuncs<int,FDelegateHandle,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<int_const_&,FDelegateHandle_&&>_>
                ((TSet<TTuple<int,FDelegateHandle>,TDefaultMapHashableKeyFuncs<int,FDelegateHandle,0>,FDefaultSetAllocator>
                  *)&this->OnFindFriendSessionForListFriendSessionsCompleteDelegate,
                 (TPairInitializer<int_const_&,FDelegateHandle_&&> *)local_8dc,(bool *)&local_8c0);
      bVar9 = true;
      DestructItems<TSharedRef<FUniqueNetId_const_,1>,int>
                ((TSharedRef<FUniqueNetId_const_,1> *)local_9d0.Data,(int)local_9c8);
      if ((TSharedRef<FUniqueNetId_const_,1> *)local_9d0.Data !=
          (TSharedRef<FUniqueNetId_const_,1> *)0x0) {
        FMemory::Free(local_9d0.Data);
      }
      goto LAB_14ece40b2;
    }
    bVar7 = FParse::Command(&local_9e0,L"CREATE",true);
    if (bVar7) {
      bVar7 = FParse::Command(&local_9e0,L"LAN",true);
      bVar9 = FParse::Command(&local_9e0,L"PRESENCE",true);
      pTVar24 = ::operator_new(0xd8);
      if (pTVar24 != (TestOnlineGameSettings *)0x0) {
        pFVar25 = FOnlineSessionSettings::FOnlineSessionSettings(&local_728);
        pTVar26 = TestOnlineGameSettings::TestOnlineGameSettings(pTVar24,bVar7,pFVar25);
      }
      local_978.Object = pTVar26;
      TSharedPtr<TestOnlineGameSettings,1>::operator=<TestOnlineGameSettings>
                ((TSharedPtr<TestOnlineGameSettings,1> *)
                 &(this->OnFindFriendSessionCompleteDelegateHandles).field_0x38,&local_978);
      if (pTVar24 != (TestOnlineGameSettings *)0x0) {
        FOnlineSessionSettings::~FOnlineSessionSettings(&local_728);
      }
      if ((*(longlong *)&(this->OnFindFriendSessionCompleteDelegateHandles).field_0x38 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        uVar8 = (*pcVar3)();
        return (bool)uVar8;
      }
      *(bool *)(*(longlong *)&(this->OnFindFriendSessionCompleteDelegateHandles).field_0x38 + 0x16)
           = bVar9;
      if ((*(longlong *)&(this->OnFindFriendSessionCompleteDelegateHandles).field_0x38 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        uVar8 = (*pcVar3)();
        return (bool)uVar8;
      }
      TestOnlineGameSettings::AddWorldSettings
                (*(TestOnlineGameSettings **)
                  &(this->OnFindFriendSessionCompleteDelegateHandles).field_0x38,local_970);
      pIVar15 = TSharedPtr<IOnlineSession,1>::operator->
                          ((TSharedPtr<IOnlineSession,1> *)&(this->FriendsCache).ArrayNum);
      puVar17 = (undefined8 *)
                (**(code **)(pIVar15->_padding_ + 0x50))
                          (pIVar15,local_830,&this->OnSessionUserInviteAcceptedDelegate);
      *(undefined8 *)&(this->OnMatchmakingCompleteDelegate).field_0x10 = *puVar17;
      pIVar15 = TSharedPtr<IOnlineSession,1>::operator->
                          ((TSharedPtr<IOnlineSession,1> *)&(this->FriendsCache).ArrayNum);
      pcVar3 = *(code **)(pIVar15->_padding_ + 0x48);
      if ((*(longlong *)&(this->OnFindFriendSessionCompleteDelegateHandles).field_0x38 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        uVar8 = (*pcVar3)();
        return (bool)uVar8;
      }
      (*pcVar3)(pIVar15,0,FVar2,
                *(undefined8 *)&(this->OnFindFriendSessionCompleteDelegateHandles).field_0x38);
      bVar9 = true;
      goto LAB_14ece40b2;
    }
    bVar7 = FParse::Command(&local_9e0,L"START",true);
    if (bVar7) {
      pIVar15 = TSharedPtr<IOnlineSession,1>::operator->
                          ((TSharedPtr<IOnlineSession,1> *)&(this->FriendsCache).ArrayNum);
      puVar16 = (ulong64 *)
                (**(code **)(pIVar15->_padding_ + 0x78))
                          (pIVar15,local_748,&this->OnCreateSessionCompleteDelegate);
      (this->OnReadFriendsListCompleteDelegateHandle).ID = *puVar16;
      pIVar15 = TSharedPtr<IOnlineSession,1>::operator->
                          ((TSharedPtr<IOnlineSession,1> *)&(this->FriendsCache).ArrayNum);
      (**(code **)(pIVar15->_padding_ + 0x70))(pIVar15,FVar2);
      bVar9 = true;
      goto LAB_14ece40b2;
    }
    bVar7 = FParse::Command(&local_9e0,L"UPDATE",true);
    if (bVar7) {
      bVar7 = FParse::Command(&local_9e0,L"ONLINE",true);
      piVar1 = &(this->FriendsCache).ArrayNum;
      pIVar15 = TSharedPtr<IOnlineSession,1>::operator->((TSharedPtr<IOnlineSession,1> *)piVar1);
      puVar16 = (ulong64 *)
                (**(code **)(pIVar15->_padding_ + 0xa0))
                          (pIVar15,local_7f8,&this->OnDestroySessionCompleteDelegate);
      (this->OnStartSessionCompleteDelegateHandle).ID = *puVar16;
      this_01 = &(this->OnFindFriendSessionCompleteDelegateHandles).field_0x38;
      pFVar25 = (FOnlineSessionSettings *)
                TSharedPtr<TestOnlineGameSettings,1>::operator->
                          ((TSharedPtr<TestOnlineGameSettings,1> *)this_01);
      pFVar27 = ::FString::FString(&local_788,L"Test1");
      pFVar14 = ::FName::FName(&local_808,L"UPDATESETTING1");
      FOnlineSessionSettings::Set<FString>(pFVar25,*pFVar14,pFVar27,ViaOnlineService);
      if (local_788.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_788.Data.AllocatorInstance.Data);
      }
      pFVar25 = (FOnlineSessionSettings *)
                TSharedPtr<TestOnlineGameSettings,1>::operator->
                          ((TSharedPtr<TestOnlineGameSettings,1> *)this_01);
      local_9d4 = 99;
      pFVar14 = ::FName::FName(&local_810,L"UPDATESETTING2");
      FOnlineSessionSettings::Set<int>(pFVar25,*pFVar14,(int *)&local_9d4,ViaOnlineService);
      pIVar15 = TSharedPtr<IOnlineSession,1>::operator->((TSharedPtr<IOnlineSession,1> *)piVar1);
      pcVar3 = *(code **)(pIVar15->_padding_ + 0x98);
      pTVar26 = TSharedPtr<TestOnlineGameSettings,1>::operator*<TestOnlineGameSettings>
                          ((TSharedPtr<TestOnlineGameSettings,1> *)this_01);
      (*pcVar3)(pIVar15,FVar2,pTVar26,bVar7);
      bVar9 = true;
      goto LAB_14ece40b2;
    }
    bVar7 = FParse::Command(&local_9e0,L"END",true);
    if (bVar7) {
      FVar28 = EndExistingSession((FTestSessionInterface *)&this[-1].CachedSessionResult.PingInMs,
                                  (FName)local_800,
                                  (TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *)
                                  FVar2);
      bVar9 = true;
                    /* WARNING: Load size is inaccurate */
      (this->OnSessionUserInviteAcceptedDelegateHandle).ID = *FVar28.ID;
      goto LAB_14ece40b2;
    }
    bVar7 = FParse::Command(&local_9e0,L"DESTROY",true);
    if (bVar7) {
      FVar28 = DestroyExistingSession
                         ((FTestSessionInterface *)&this[-1].CachedSessionResult.PingInMs,
                          (FName)local_818,
                          (TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *)FVar2);
      bVar9 = true;
                    /* WARNING: Load size is inaccurate */
      (this->OnCreateSessionCompleteDelegateHandle).ID = *FVar28.ID;
      goto LAB_14ece40b2;
    }
    bVar7 = FParse::Command(&local_9e0,L"REGISTER",true);
    if (bVar7) {
      bVar7 = FParse::Command(&local_9e0,L"INVITED",true);
      pIVar15 = TSharedPtr<IOnlineSession,1>::operator->
                          ((TSharedPtr<IOnlineSession,1> *)&(this->FriendsCache).ArrayNum);
      puVar16 = (ulong64 *)
                (**(code **)(pIVar15->_padding_ + 0x3a0))
                          (pIVar15,local_820,&this->OnUpdateSessionCompleteDelegate);
      (this->OnEndSessionCompleteDelegateHandle).ID = *puVar16;
      pIVar15 = TSharedPtr<IOnlineSession,1>::operator->
                          ((TSharedPtr<IOnlineSession,1> *)&(this->FriendsCache).ArrayNum);
      pcVar3 = *(code **)(pIVar15->_padding_ + 0x390);
      pFVar29 = TSharedPtr<FUniqueNetId_const_,1>::operator*<FUniqueNetId_const_>
                          ((TSharedPtr<FUniqueNetId_const_,1> *)&this->Subsystem);
      (*pcVar3)(pIVar15,FVar2,pFVar29,bVar7);
      bVar9 = true;
      goto LAB_14ece40b2;
    }
    bVar7 = FParse::Command(&local_9e0,L"UNREGISTER",true);
    if (bVar7) {
      pIVar15 = TSharedPtr<IOnlineSession,1>::operator->
                          ((TSharedPtr<IOnlineSession,1> *)&(this->FriendsCache).ArrayNum);
      puVar16 = (ulong64 *)
                (**(code **)(pIVar15->_padding_ + 0x3d0))
                          (pIVar15,local_828,&this->OnRegisterPlayersCompleteDelegate);
      (this->OnDestroySessionCompleteDelegateHandle).ID = *puVar16;
      pIVar15 = TSharedPtr<IOnlineSession,1>::operator->
                          ((TSharedPtr<IOnlineSession,1> *)&(this->FriendsCache).ArrayNum);
      pcVar3 = *(code **)(pIVar15->_padding_ + 0x3c0);
      pFVar29 = TSharedPtr<FUniqueNetId_const_,1>::operator*<FUniqueNetId_const_>
                          ((TSharedPtr<FUniqueNetId_const_,1> *)&this->Subsystem);
      (*pcVar3)(pIVar15,FVar2,pFVar29);
      bVar9 = true;
      goto LAB_14ece40b2;
    }
    bVar7 = FParse::Command(&local_9e0,L"INVITE",true);
    if (!bVar7) {
      bVar7 = FParse::Command(&local_9e0,L"DUMPSESSIONS",true);
      if (bVar7) {
        pIVar15 = TSharedPtr<IOnlineSession,1>::operator->
                            ((TSharedPtr<IOnlineSession,1> *)&(this->FriendsCache).ArrayNum);
        (**(code **)(pIVar15->_padding_ + 0x450))(pIVar15);
        bVar9 = true;
      }
      else {
        bVar7 = FParse::Command(&local_9e0,L"QUIT",true);
        if (bVar7) {
          if (3 < (byte)LogOnlineSession._0_1_) {
            ::FString::PrintfImpl(&local_8d0,L"Destroying TestSession.");
            UE::Logging::Private::BasicLog<4>
                      ((FStaticBasicLogRecord *)&PTR_u__s_s_15308d2a0,
                       (FLogCategoryBase *)&LogOnlineSession);
            if (local_8d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_8d0.Data.AllocatorInstance.Data);
            }
          }
          pIVar15 = TSharedPtr<IOnlineSession,1>::operator->
                              ((TSharedPtr<IOnlineSession,1> *)&(this->FriendsCache).ArrayNum);
          (**(code **)(pIVar15->_padding_ + 0x1b8))(pIVar15);
          piVar1 = &this[-1].CachedSessionResult.PingInMs;
          bVar9 = true;
          if (piVar1 != (int *)0x0) {
            (*(code *)**(undefined8 **)piVar1)(piVar1,1);
          }
        }
      }
      goto LAB_14ece40b2;
    }
    bVar7 = FParse::Command(&local_9e0,L"UI",true);
    if (bVar7) {
      if ((int)this->_padding_ == 0) {
        pwVar32 = L"";
      }
      else {
        pwVar32 = (wchar_t *)this->_padding_;
      }
      pFVar14 = ::FName::FName(&local_7f0,pwVar32);
      pIVar30 = IOnlineSubsystem::Get(pFVar14);
      plVar22 = (longlong *)(**(code **)(pIVar30->_padding_ + 0x70))(pIVar30,local_778);
      if ((*plVar22 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        uVar8 = (*pcVar3)();
        return (bool)uVar8;
      }
      plVar22 = (longlong *)*plVar22;
      pcVar3 = *(code **)(*plVar22 + 0x20);
      FVar13 = FNameEntryId::FromValidEName((int)local_8dc + FloatProperty);
      uStack_94c = 0;
      local_950 = *(undefined4 *)CONCAT44(extraout_var_00,FVar13.Value);
      (*pcVar3)(plVar22,local_9e8[0],local_950);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_770)
      ;
      bVar9 = true;
      goto LAB_14ece40b2;
    }
    FParse::Token(&local_948,&local_9e0,true);
    if (1 < local_948.Data.ArrayNum) {
      local_9d4 = *(uint *)&(this->UserId).SharedReferenceCount.ReferenceController;
      uVar31 = (ulonglong)(int)local_9d4;
      pUVar35 = (UWorld *)(this->UserId).Object;
      local_970 = (UWorld *)(&pUVar35->_padding_ + uVar31 * 2);
      while( true ) {
        pUVar5 = local_970;
        if (*(int *)&(this->UserId).SharedReferenceCount.ReferenceController != (int)uVar31) {
          local_9d8[0] = 0;
          `TCheckedPointerIterator<TSharedRef<FOnlineFriend,1>,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_9d8);
        }
        if (pUVar35 == pUVar5) {
          pIVar19 = TSharedPtr<IOnlineIdentity,1>::operator->
                              ((TSharedPtr<IOnlineIdentity,1> *)&this->World);
          (**(code **)(pIVar19->_padding_ + 0x120))(pIVar19,&local_908,&local_948);
          if (local_908 != 0) {
            pIVar15 = TSharedPtr<IOnlineSession,1>::operator->
                                ((TSharedPtr<IOnlineSession,1> *)&(this->FriendsCache).ArrayNum);
            pcVar3 = *(code **)(pIVar15->_padding_ + 0x318);
            if ((local_908 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x44d,L""), bVar7)) {
              pcVar3 = (code *)swi(3);
              uVar8 = (*pcVar3)();
              return (bool)uVar8;
            }
            (*pcVar3)(pIVar15,local_9e8[0],FVar2,local_908);
          }
          goto LAB_14ece3fc1;
        }
        pTVar4 = (TReferenceControllerBase<1> *)pUVar35->_padding_;
        local_978.Object = (TestOnlineGameSettings *)pUVar35->_padding_;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_928 = (void *)0x0;
        local_920 = 0;
        puVar17 = (undefined8 *)
                  (**(code **)(*(longlong *)local_978.Object + 0x18))
                            (local_978.Object,local_768,&local_928);
        iVar12 = *(int *)(puVar17 + 1);
        if (iVar12 == local_948.Data.ArrayNum) {
          if (iVar12 < 2) {
            bVar7 = true;
          }
          else {
            iVar12 = FGenericPlatformStricmp::Stricmp
                               ((wchar_t *)*puVar17,(wchar_t *)local_948.Data.AllocatorInstance.Data
                               );
            bVar7 = iVar12 == 0;
          }
        }
        else {
          bVar7 = local_948.Data.ArrayNum + iVar12 == 1;
        }
        if (local_768[0] != (void *)0x0) {
          FMemory::Free(local_768[0]);
        }
        if (local_928 != (void *)0x0) {
          FMemory::Free(local_928);
        }
        if (bVar7) break;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        uVar31 = (ulonglong)local_9d4;
        pUVar35 = (UWorld *)&pUVar35->_padding_;
      }
      pIVar15 = TSharedPtr<IOnlineSession,1>::operator->
                          ((TSharedPtr<IOnlineSession,1> *)&(this->FriendsCache).ArrayNum);
      pcVar3 = *(code **)(pIVar15->_padding_ + 0x318);
      puVar17 = (undefined8 *)
                (**(code **)(*(longlong *)local_978.Object + 8))(local_978.Object,local_880);
      (*pcVar3)(pIVar15,local_9e8[0],FVar2,*puVar17);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)CONCAT44(uStack_874,local_878));
      local_900 = pTVar4;
LAB_14ece3fc1:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_900)
      ;
    }
    if (local_948.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_948.Data.AllocatorInstance.Data);
    }
  }
  bVar9 = true;
LAB_14ece40b2:
  if (local_988.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_988.Data.AllocatorInstance.Data);
  }
  return bVar9;
}

// JoinSession @ 14eceac60

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
FTestSessionInterface::JoinSession
          (FTestSessionInterface *this,int param_1,FName param_2,FOnlineSessionSearchResult *param_3
          )

{
  TMap<TSharedRef<FUniqueNetId_const_,1>,FOnlineKeyValuePairs<FName,FOnlineSessionSetting>,FDefaultSetAllocator,TUniqueNetIdMapKeyFuncs<FOnlineKeyValuePairs<FName,FOnlineSessionSetting>_>_>
  *pTVar1;
  TMap<TSharedRef<FUniqueNetId_const_,1>,FOnlineKeyValuePairs<FName,FOnlineSessionSetting>,FDefaultSetAllocator,TUniqueNetIdMapKeyFuncs<FOnlineKeyValuePairs<FName,FOnlineSessionSetting>_>_>
  *this_00;
  IOnlineSession *pIVar2;
  TReferenceControllerBase<1> *pTVar3;
  FUniqueNetId *pFVar4;
  FOnlineSessionInfo *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FDelegateHandle FVar9;
  ulong64 *puVar10;
  undefined1 local_res8 [8];
  undefined1 local_48 [8];
  FUniqueNetId *local_40;
  TReferenceControllerBase<1> *pTStack_38;
  FOnlineSessionInfo *local_30;
  TReferenceControllerBase<1> *pTStack_28;
  
  if ((this->SessionInt).Object == (IOnlineSession *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pIVar2 = (this->SessionInt).Object;
  iVar8 = (**(code **)(pIVar2->_padding_ + 0x38))(pIVar2,param_2);
  if (iVar8 != 0) {
    pTVar3 = (param_3->Session).OwningUserId.SharedReferenceCount.ReferenceController;
    pFVar4 = (param_3->Session).OwningUserId.Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_40 = (this->CachedSessionResult).Session.OwningUserId.Object;
    pTStack_38 = (this->CachedSessionResult).Session.OwningUserId.SharedReferenceCount.
                 ReferenceController;
    (this->CachedSessionResult).Session.OwningUserId.Object = pFVar4;
    (this->CachedSessionResult).Session.OwningUserId.SharedReferenceCount.ReferenceController =
         pTVar3;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_38);
    ::FString::operator=
              (&(this->CachedSessionResult).Session.OwningUserName,
               &(param_3->Session).OwningUserName);
    (this->CachedSessionResult).Session.SessionSettings.NumPublicConnections =
         (param_3->Session).SessionSettings.NumPublicConnections;
    (this->CachedSessionResult).Session.SessionSettings.NumPrivateConnections =
         (param_3->Session).SessionSettings.NumPrivateConnections;
    (this->CachedSessionResult).Session.SessionSettings.bShouldAdvertise =
         (param_3->Session).SessionSettings.bShouldAdvertise;
    (this->CachedSessionResult).Session.SessionSettings.bAllowJoinInProgress =
         (param_3->Session).SessionSettings.bAllowJoinInProgress;
    (this->CachedSessionResult).Session.SessionSettings.bIsLANMatch =
         (param_3->Session).SessionSettings.bIsLANMatch;
    (this->CachedSessionResult).Session.SessionSettings.bIsDedicated =
         (param_3->Session).SessionSettings.bIsDedicated;
    (this->CachedSessionResult).Session.SessionSettings.bUsesStats =
         (param_3->Session).SessionSettings.bUsesStats;
    (this->CachedSessionResult).Session.SessionSettings.bAllowInvites =
         (param_3->Session).SessionSettings.bAllowInvites;
    (this->CachedSessionResult).Session.SessionSettings.bUsesPresence =
         (param_3->Session).SessionSettings.bUsesPresence;
    (this->CachedSessionResult).Session.SessionSettings.bAllowJoinViaPresence =
         (param_3->Session).SessionSettings.bAllowJoinViaPresence;
    (this->CachedSessionResult).Session.SessionSettings.bAllowJoinViaPresenceFriendsOnly =
         (param_3->Session).SessionSettings.bAllowJoinViaPresenceFriendsOnly;
    (this->CachedSessionResult).Session.SessionSettings.bAntiCheatProtected =
         (param_3->Session).SessionSettings.bAntiCheatProtected;
    (this->CachedSessionResult).Session.SessionSettings.bUseLobbiesIfAvailable =
         (param_3->Session).SessionSettings.bUseLobbiesIfAvailable;
    (this->CachedSessionResult).Session.SessionSettings.bUseLobbiesVoiceChatIfAvailable =
         (param_3->Session).SessionSettings.bUseLobbiesVoiceChatIfAvailable;
    ::FString::operator=
              (&(this->CachedSessionResult).Session.SessionSettings.SessionIdOverride,
               &(param_3->Session).SessionSettings.SessionIdOverride);
    (this->CachedSessionResult).Session.SessionSettings.BuildUniqueId =
         (param_3->Session).SessionSettings.BuildUniqueId;
    TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
    ::operator=((TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
                 *)&(this->CachedSessionResult).Session.SessionSettings.Settings,
                (TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
                 *)&(param_3->Session).SessionSettings.Settings);
    pTVar1 = &(param_3->Session).SessionSettings.MemberSettings;
    this_00 = &(this->CachedSessionResult).Session.SessionSettings.MemberSettings;
    if (this_00 != pTVar1) {
      UE::Core::Private::
      CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                ((ForElementType<FSetElementId> *)
                 &(this->CachedSessionResult).Session.SessionSettings.MemberSettings.field_0x38,
                 (int *)&(this->CachedSessionResult).Session.SessionSettings.MemberSettings.
                         field_0x48,
                 (ForElementType<FSetElementId> *)
                 &(param_3->Session).SessionSettings.MemberSettings.field_0x38,
                 *(int *)&(param_3->Session).SessionSettings.MemberSettings.field_0x48);
      TSparseArray<TSparseSetElement<TTuple<TSharedRef<FUniqueNetId_const_,1>,FOnlineKeyValuePairs<FName,FOnlineSessionSetting>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::operator=((TSparseArray<TSparseSetElement<TTuple<TSharedRef<FUniqueNetId_const_,1>,FOnlineKeyValuePairs<FName,FOnlineSessionSetting>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this_00,
                  (TSparseArray<TSparseSetElement<TTuple<TSharedRef<FUniqueNetId_const_,1>,FOnlineKeyValuePairs<FName,FOnlineSessionSetting>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)pTVar1);
    }
    pTVar3 = (param_3->Session).SessionInfo.SharedReferenceCount.ReferenceController;
    pFVar5 = (param_3->Session).SessionInfo.Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_30 = (this->CachedSessionResult).Session.SessionInfo.Object;
    pTStack_28 = (this->CachedSessionResult).Session.SessionInfo.SharedReferenceCount.
                 ReferenceController;
    (this->CachedSessionResult).Session.SessionInfo.Object = pFVar5;
    (this->CachedSessionResult).Session.SessionInfo.SharedReferenceCount.ReferenceController =
         pTVar3;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_28);
    (this->CachedSessionResult).Session.NumOpenPrivateConnections =
         (param_3->Session).NumOpenPrivateConnections;
    (this->CachedSessionResult).Session.NumOpenPublicConnections =
         (param_3->Session).NumOpenPublicConnections;
    (this->CachedSessionResult).PingInMs = param_3->PingInMs;
    FVar9 = EndExistingSession(this,(FName)local_res8,
                               (TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *)
                               param_2);
                    /* WARNING: Load size is inaccurate */
    (this->OnEndForJoinSessionCompleteDelegateHandle).ID = *FVar9.ID;
    return;
  }
  if ((this->SessionInt).Object == (IOnlineSession *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pIVar2 = (this->SessionInt).Object;
  puVar10 = (ulong64 *)
            (**(code **)(pIVar2->_padding_ + 0x218))
                      (pIVar2,local_48,&this->OnJoinSessionCompleteDelegate);
  (this->OnJoinSessionCompleteDelegateHandle).ID = *puVar10;
  if ((this->SessionInt).Object == (IOnlineSession *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pIVar2 = (this->SessionInt).Object;
                    /* WARNING: Could not recover jumptable at 0x00014eceaf19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pIVar2->_padding_ + 0x210))(pIVar2,param_1,param_2,param_3);
  return;
}

// OnCancelFindSessionsComplete @ 14eceb500

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
FTestSessionInterface::OnCancelFindSessionsComplete(FTestSessionInterface *this,bool param_1)

{
  IOnlineSession *pIVar1;
  code *pcVar2;
  bool bVar3;
  FString local_18;
  
  if (5 < (byte)LogOnlineSession._0_1_) {
    ::FString::PrintfImpl(&local_18,L"OnCancelFindSessionsComplete bSuccess: %d");
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSession);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (((this->SessionInt).Object == (IOnlineSession *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pIVar1 = (this->SessionInt).Object;
                    /* WARNING: Could not recover jumptable at 0x00014eceb5a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pIVar1->_padding_ + 0x1c8))(pIVar1,&this->OnCancelFindSessionsCompleteDelegateHandle)
  ;
  return;
}

// OnCreateSessionComplete @ 14eceb980

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
FTestSessionInterface::OnCreateSessionComplete
          (FTestSessionInterface *this,FName param_1,bool param_2)

{
  IOnlineSession *pIVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res10 [3];
  FString local_28;
  FString local_18;
  
  local_res10[0] = param_1;
  if (5 < (byte)LogOnlineSession._0_1_) {
    ::FName::ToString(local_res10,&local_18);
    ::FString::PrintfImpl(&local_28,L"OnCreateSessionComplete %s bSuccess: %d");
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSession);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (((this->SessionInt).Object == (IOnlineSession *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pIVar1 = (this->SessionInt).Object;
  (**(code **)(pIVar1->_padding_ + 0x58))(pIVar1,&this->OnCreateSessionCompleteDelegateHandle);
  this->bWasLastCommandSuccessful = param_2;
  return;
}

// OnDestroyForJoinSessionComplete @ 14ecebb30

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
FTestSessionInterface::OnDestroyForJoinSessionComplete
          (FTestSessionInterface *this,FName param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  FName local_res10 [3];
  FString local_28;
  FString local_18;
  
  local_res10[0] = param_1;
  if (5 < (byte)LogOnlineSession._0_1_) {
    ::FName::ToString(local_res10,&local_18);
    ::FString::PrintfImpl(&local_28,L"OnDestroyForJoinSessionComplete %s bSuccess: %d");
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSession);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (((this->SessionInt).Object == (IOnlineSession *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (**(code **)(((this->SessionInt).Object)->_padding_ + 0xf8))();
  JoinSession(this,0,local_res10[0],&this->CachedSessionResult);
  return;
}

// OnDestroySessionComplete @ 14ecebc40

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
FTestSessionInterface::OnDestroySessionComplete
          (FTestSessionInterface *this,FName param_1,bool param_2)

{
  IOnlineSession *pIVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res10 [3];
  FString local_28;
  FString local_18;
  
  local_res10[0] = param_1;
  if (5 < (byte)LogOnlineSession._0_1_) {
    ::FName::ToString(local_res10,&local_18);
    ::FString::PrintfImpl(&local_28,L"OnDestroySessionComplete %s bSuccess: %d");
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSession);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (((this->SessionInt).Object == (IOnlineSession *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pIVar1 = (this->SessionInt).Object;
  (**(code **)(pIVar1->_padding_ + 0xf8))(pIVar1,&this->OnDestroySessionCompleteDelegateHandle);
  return;
}

// OnEndForJoinSessionComplete @ 14ecebd50

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
FTestSessionInterface::OnEndForJoinSessionComplete
          (FTestSessionInterface *this,FName param_1,bool param_2)

{
  IOnlineSession *pIVar1;
  code *pcVar2;
  bool bVar3;
  FDelegateHandle FVar4;
  undefined1 local_res8 [8];
  FName local_res10;
  FString local_28;
  FString local_18;
  
  local_res10 = param_1;
  if (5 < (byte)LogOnlineSession._0_1_) {
    ::FName::ToString(&local_res10,&local_18);
    ::FString::PrintfImpl(&local_28,L"OnEndForJoinSessionComplete %s bSuccess: %d");
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSession);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (((this->SessionInt).Object == (IOnlineSession *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pIVar1 = (this->SessionInt).Object;
  (**(code **)(pIVar1->_padding_ + 0xd0))(pIVar1,&this->OnEndForJoinSessionCompleteDelegateHandle);
  FVar4 = DestroyExistingSession
                    (this,(FName)local_res8,
                     (TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *)local_res10);
                    /* WARNING: Load size is inaccurate */
  (this->OnDestroyForJoinSessionCompleteDelegateHandle).ID = *FVar4.ID;
  return;
}

// OnEndSessionComplete @ 14ecebe70

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
FTestSessionInterface::OnEndSessionComplete(FTestSessionInterface *this,FName param_1,bool param_2)

{
  IOnlineSession *pIVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res10 [3];
  FString local_28;
  FString local_18;
  
  local_res10[0] = param_1;
  if (5 < (byte)LogOnlineSession._0_1_) {
    ::FName::ToString(local_res10,&local_18);
    ::FString::PrintfImpl(&local_28,L"OnEndSessionComplete %s bSuccess: %d");
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSession);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (((this->SessionInt).Object == (IOnlineSession *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pIVar1 = (this->SessionInt).Object;
  (**(code **)(pIVar1->_padding_ + 0xd0))(pIVar1,&this->OnEndSessionCompleteDelegateHandle);
  this->bWasLastCommandSuccessful = param_2;
  return;
}

// OnFindFriendSessionComplete @ 14ecec650

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
FTestSessionInterface::OnFindFriendSessionComplete
          (FTestSessionInterface *this,int param_1,bool param_2,
          TArray<FOnlineSessionSearchResult,TSizedDefaultAllocator<32>_> *param_3)

{
  longlong lVar1;
  longlong lVar2;
  IOnlineSession *pIVar3;
  FOnlineSessionSearchResult *pFVar4;
  code *pcVar5;
  FName FVar6;
  bool bVar7;
  int iVar8;
  FNameEntryId FVar9;
  undefined4 extraout_var;
  undefined1 *puVar10;
  undefined1 local_res10 [8];
  int local_res18 [2];
  undefined8 local_58;
  FString local_50;
  FString local_40;
  
  if (5 < (byte)LogOnlineSession._0_1_) {
    ::FString::PrintfImpl(&local_50,L"OnFindFriendSessionComplete LocalUserNum: %d bSuccess: %d");
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSession);
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
  }
  if (*(int *)&(this->OnFindFriendSessionCompleteDelegateHandles).field_0x8 !=
      *(int *)&(this->OnFindFriendSessionCompleteDelegateHandles).field_0x34) {
    puVar10 = *(undefined1 **)&(this->OnFindFriendSessionCompleteDelegateHandles).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->OnFindFriendSessionCompleteDelegateHandles).field_0x38;
    }
    iVar8 = *(int *)(puVar10 +
                    (ulonglong)
                    (*(int *)&(this->OnFindFriendSessionCompleteDelegateHandles).field_0x48 - 1U &
                    param_1) * 4);
    if (iVar8 != -1) {
      lVar2 = *(longlong *)&(this->OnFindFriendSessionCompleteDelegateHandles).field_0x0;
      do {
        lVar1 = lVar2 + (longlong)iVar8 * 0x18;
        if (*(int *)(lVar2 + (longlong)iVar8 * 0x18) == param_1) {
          if (lVar1 != 0) {
            local_58 = *(undefined8 *)(lVar1 + 8);
            goto LAB_14ecec71d;
          }
          break;
        }
        iVar8 = *(int *)(lVar1 + 0x10);
      } while (iVar8 != -1);
    }
  }
  local_58 = 0;
LAB_14ecec71d:
  if (((this->SessionInt).Object == (IOnlineSession *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pIVar3 = (this->SessionInt).Object;
  (**(code **)(pIVar3->_padding_ + 0x2f8))(pIVar3,param_1,&local_58);
  local_res18[0] = param_1;
  if (*(int *)&(this->OnFindFriendSessionCompleteDelegateHandles).field_0x8 !=
      *(int *)&(this->OnFindFriendSessionCompleteDelegateHandles).field_0x34) {
    TSet<TTuple<int,FDelegateHandle>,TDefaultMapHashableKeyFuncs<int,FDelegateHandle,0>,FDefaultSetAllocator>
    ::RemoveImpl<int>((TSet<TTuple<int,FDelegateHandle>,TDefaultMapHashableKeyFuncs<int,FDelegateHandle,0>,FDefaultSetAllocator>
                       *)&this->OnFindFriendSessionCompleteDelegateHandles,param_1,local_res18);
  }
  if (param_2) {
    if (((param_3->ArrayNum < 1) ||
        (pFVar4 = (FOnlineSessionSearchResult *)(param_3->AllocatorInstance).Data,
        (pFVar4->Session).OwningUserId.Object == (FUniqueNetId *)0x0)) ||
       ((pFVar4->Session).SessionInfo.Object == (FOnlineSessionInfo *)0x0)) {
      if (2 < (byte)LogOnlineSession._0_1_) {
        ::FString::PrintfImpl(&local_40,L"Join friend returned no search result.");
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSession);
        if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_40.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      FVar9 = FNameEntryId::FromValidEName((EName)local_res10);
      FVar6.Number = 0;
      FVar6.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar9.Value);
      JoinSession(this,param_1,FVar6,pFVar4);
    }
  }
  return;
}

// OnFindFriendSessionForListFriendSessionsComplete @ 14ecec860

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
FTestSessionInterface::OnFindFriendSessionForListFriendSessionsComplete
          (FTestSessionInterface *this,int param_1,bool param_2,
          TArray<FOnlineSessionSearchResult,TSizedDefaultAllocator<32>_> *param_3)

{
  longlong lVar1;
  longlong lVar2;
  IOnlineSession *pIVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined1 *puVar7;
  FOnlineSession *pFVar8;
  FOnlineSession *pFVar9;
  int local_res8 [2];
  undefined1 local_res10 [8];
  undefined8 local_res20;
  FString local_38;
  FString local_28;
  
  if (5 < (byte)LogOnlineSession._0_1_) {
    ::FString::PrintfImpl
              (&local_38,
               L"OnFindFriendSessionComplete LocalUserNum: %d bSuccess: %d Result Count: %d");
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSession);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (*(int *)&(this->OnFindFriendSessionCompleteDelegateHandles).field_0x8 !=
      *(int *)&(this->OnFindFriendSessionCompleteDelegateHandles).field_0x34) {
    puVar7 = *(undefined1 **)&(this->OnFindFriendSessionCompleteDelegateHandles).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->OnFindFriendSessionCompleteDelegateHandles).field_0x38;
    }
    iVar6 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->OnFindFriendSessionCompleteDelegateHandles).
                                        field_0x48 - 1U & param_1) * 4);
    if (iVar6 != -1) {
      lVar2 = *(longlong *)&(this->OnFindFriendSessionCompleteDelegateHandles).field_0x0;
      do {
        lVar1 = lVar2 + (longlong)iVar6 * 0x18;
        if (*(int *)(lVar2 + (longlong)iVar6 * 0x18) == param_1) {
          if (lVar1 != 0) {
            local_res20 = *(undefined8 *)(lVar1 + 8);
            goto LAB_14ecec92d;
          }
          break;
        }
        iVar6 = *(int *)(lVar1 + 0x10);
      } while (iVar6 != -1);
    }
  }
  local_res20 = 0;
LAB_14ecec92d:
  if (((this->SessionInt).Object == (IOnlineSession *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pIVar3 = (this->SessionInt).Object;
  (**(code **)(pIVar3->_padding_ + 0x2f8))(pIVar3,param_1,&local_res20);
  local_res8[0] = param_1;
  if (*(int *)&(this->OnFindFriendSessionCompleteDelegateHandles).field_0x8 !=
      *(int *)&(this->OnFindFriendSessionCompleteDelegateHandles).field_0x34) {
    TSet<TTuple<int,FDelegateHandle>,TDefaultMapHashableKeyFuncs<int,FDelegateHandle,0>,FDefaultSetAllocator>
    ::RemoveImpl<int>((TSet<TTuple<int,FDelegateHandle>,TDefaultMapHashableKeyFuncs<int,FDelegateHandle,0>,FDefaultSetAllocator>
                       *)&this->OnFindFriendSessionCompleteDelegateHandles,param_1,local_res8);
  }
  iVar6 = param_3->ArrayNum;
  pFVar8 = (FOnlineSession *)(param_3->AllocatorInstance).Data;
  pFVar9 = (FOnlineSession *)((longlong)pFVar8 + (longlong)iVar6 * 0x120);
  while( true ) {
    if (param_3->ArrayNum != iVar6) {
      `TCheckedPointerIterator<FOnlineSessionSearchResult_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar8 == pFVar9) break;
    if (5 < (byte)LogOnlineSession._0_1_) {
      ::FString::PrintfImpl(&local_28,L"\tSession:");
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSession);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    DumpSession(pFVar8);
    pFVar8 = (FOnlineSession *)&pFVar8[1].OwningUserId;
  }
  return;
}

// OnFindSessionByIdComplete @ 14ececa50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
FTestSessionInterface::OnFindSessionByIdComplete
          (FTestSessionInterface *this,int param_1,bool param_2,FOnlineSessionSearchResult *param_3)

{
  TSharedPtr<TestOnlineSearchSettings,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  FOnlineSessionSettings *pFVar6;
  TestOnlineSearchSettings *pTVar7;
  undefined1 auStack_158 [32];
  TestOnlineSearchSettings *local_138;
  FSharedReferencer<1> FStack_130;
  FString local_128;
  undefined1 local_118 [120];
  void *local_a0;
  undefined4 local_98;
  TSparseArray<TSparseSetElement<TTuple<TSharedRef<FUniqueNetId_const_,1>,FOnlineKeyValuePairs<FName,FOnlineSessionSetting>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_90;
  void *local_50;
  undefined4 local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_158;
  if (5 < (byte)LogOnlineSession._0_1_) {
    ::FString::PrintfImpl(&local_128,L"OnFindSessionByIdComplete bSuccess: %d");
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSession);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  DumpSession(&param_3->Session);
  pTVar5 = ::operator_new(0x98);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    local_138 = ___xmm_00000000000000000000000000000010;
    pTVar7 = (TestOnlineSearchSettings *)&DAT_00000010;
    FStack_130.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VTestOnlineSearchSettings___00_SharedPointerInternals__6B_
    ;
    pFVar6 = FOnlineSessionSettings::FOnlineSessionSettings((FOnlineSessionSettings *)local_118);
    TestOnlineSearchSettings::TestOnlineSearchSettings
              ((TestOnlineSearchSettings *)(pTVar5 + 1),false,pFVar6);
    local_118._0_8_ = &___7FOnlineSessionSettings__6B_;
    local_48 = 0;
    if (local_50 != (void *)0x0) {
      FMemory::Free(local_50);
    }
    TSparseArray<TSparseSetElement<TTuple<TSharedRef<FUniqueNetId_const_,1>,FOnlineKeyValuePairs<FName,FOnlineSessionSetting>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<TSharedRef<FUniqueNetId_const_,1>,FOnlineKeyValuePairs<FName,FOnlineSessionSetting>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_90);
    local_98 = 0;
    if (local_a0 != (void *)0x0) {
      FMemory::Free(local_a0);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,FOnlineSessionSetting>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,FOnlineSessionSetting>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,FOnlineSessionSetting>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(local_118 + 0x38));
    if ((FScriptContainerElement *)local_118._32_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_118._32_8_);
    }
    pTVar7 = (TestOnlineSearchSettings *)(pTVar5 + 1);
    if ((pTVar7 == (TestOnlineSearchSettings *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    FStack_130.ReferenceController = pTVar5;
    local_138 = pTVar7;
  }
  pTVar1 = &this->SearchSettings;
  if (pTVar1 != (TSharedPtr<TestOnlineSearchSettings,1> *)&local_138) {
    pTVar1->Object = pTVar7;
    local_138 = (TestOnlineSearchSettings *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->SearchSettings).SharedReferenceCount,&FStack_130);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_130.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  if ((pTVar1->Object == (TestOnlineSearchSettings *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pTVar7 = pTVar1->Object;
  iVar4 = *(int *)&pTVar7->field_0x10;
  if (iVar4 == *(int *)&pTVar7->field_0x14) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x120,8,(ForAnyElementType *)&pTVar7->field_0x8,(int *)&pTVar7->field_0x14);
  }
  *(int *)&pTVar7->field_0x10 = iVar4 + 1;
  FOnlineSessionSearchResult::FOnlineSessionSearchResult
            ((FOnlineSessionSearchResult *)
             ((longlong)iVar4 * 0x120 + *(longlong *)&pTVar7->field_0x8),param_3);
  return;
}

// OnFindSessionsComplete @ 14ececce0

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
FTestSessionInterface::OnFindSessionsComplete(FTestSessionInterface *this,bool param_1)

{
  IOnlineSession *pIVar1;
  TestOnlineSearchSettings *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  FString local_28;
  FString local_18;
  
  if (5 < (byte)LogOnlineSession._0_1_) {
    ::FString::PrintfImpl(&local_28,L"OnFindSessionsComplete bSuccess: %d");
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSession);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if (((this->SessionInt).Object == (IOnlineSession *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pIVar1 = (this->SessionInt).Object;
  (**(code **)(pIVar1->_padding_ + 400))(pIVar1,&this->OnFindSessionsCompleteDelegateHandle);
  if (5 < (byte)LogOnlineSession._0_1_) {
    if (((this->SearchSettings).Object == (TestOnlineSearchSettings *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    ::FString::PrintfImpl(&local_18,L"Num Search Results: %d");
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSession);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  uVar6 = 0;
  while( true ) {
    if (((this->SearchSettings).Object == (TestOnlineSearchSettings *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar2 = (this->SearchSettings).Object;
    if (*(int *)&pTVar2->field_0x10 <= (int)uVar6) {
      return;
    }
    if ((pTVar2 == (TestOnlineSearchSettings *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) break;
    pTVar2 = (this->SearchSettings).Object;
    uVar5 = 0;
    if ((int)uVar6 < *(int *)&pTVar2->field_0x10) {
      uVar5 = ~uVar6 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    DumpSession((FOnlineSession *)((longlong)(int)uVar6 * 0x120 + *(longlong *)&pTVar2->field_0x8));
    uVar6 = uVar6 + 1;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// OnJoinSessionComplete @ 14eced580

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
FTestSessionInterface::OnJoinSessionComplete(FTestSessionInterface *this,FName param_1,Type param_2)

{
  IOnlineSession *pIVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  APlayerController *this_00;
  FName local_res10;
  undefined1 local_res18 [8];
  FString local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  FString local_78;
  FString local_68;
  FString local_58;
  FGuid local_48;
  FString local_38;
  
  local_res10 = param_1;
  if (5 < (byte)LogOnlineSession._0_1_) {
    ::FName::ToString(&local_res10,&local_58);
    ::FString::PrintfImpl(&local_78,L"OnJoinSessionComplete %s bSuccess: %d");
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSession);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  if (((this->SessionInt).Object == (IOnlineSession *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pIVar1 = (this->SessionInt).Object;
  (**(code **)(pIVar1->_padding_ + 0x220))(pIVar1,&this->OnJoinSessionCompleteDelegateHandle);
  if (param_2 != Success) {
    return;
  }
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  if (this->World != (UWorld *)0x0) {
    if (((this->SessionInt).Object == (IOnlineSession *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pIVar1 = (this->SessionInt).Object;
    pcVar2 = *(code **)(pIVar1->_padding_ + 0x378);
    FNameEntryId::FromValidEName((EName)local_res18);
    cVar4 = (*pcVar2)(pIVar1);
    if (cVar4 != '\0') {
      this_00 = UGameplayStatics::GetPlayerController((UObject *)this->World,0);
      if (this_00 != (APlayerController *)0x0) {
        local_88 = 0;
        uStack_80 = 0;
        local_48.A = 0;
        local_48.B = 0;
        local_48.C = 0;
        local_48.D = 0;
        APlayerController::ClientTravel(this_00,&local_98,TRAVEL_Absolute,false,&local_48);
      }
      goto LAB_14eced7a8;
    }
  }
  if (2 < (byte)LogOnlineSession._0_1_) {
    ::FName::ToString(&local_res10,&local_38);
    ::FString::PrintfImpl(&local_68,L"Failed to join session %s");
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSession);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
LAB_14eced7a8:
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  return;
}

// OnMatchmakingComplete @ 14ecedbc0

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
FTestSessionInterface::OnMatchmakingComplete(FTestSessionInterface *this,FName param_1,bool param_2)

{
  IOnlineSession *pIVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res10 [3];
  FString local_28;
  FString local_18;
  
  local_res10[0] = param_1;
  if (((this->SessionInt).Object == (IOnlineSession *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pIVar1 = (this->SessionInt).Object;
  (**(code **)(pIVar1->_padding_ + 0x130))(pIVar1,&this->OnMatchmakingCompleteDelegateHandle);
  if (5 < (byte)LogOnlineSession._0_1_) {
    ::FName::ToString(local_res10,&local_18);
    ::FString::PrintfImpl(&local_28,L"OnMatchmakingComplete %s bSuccess: %d");
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSession);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (param_2) {
    if (((this->SessionInt).Object == (IOnlineSession *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (**(code **)(((this->SessionInt).Object)->_padding_ + 0x450))();
  }
  return;
}

// OnReadFriendsListComplete @ 14ecf2770

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
FTestSessionInterface::OnReadFriendsListComplete
          (FTestSessionInterface *this,int param_1,bool param_2,FString *param_3,FString *param_4)

{
  IOnlineFriends *pIVar1;
  code *pcVar2;
  bool bVar3;
  FString local_18;
  
  if (5 < (byte)LogOnlineSession._0_1_) {
    ::FString::PrintfImpl(&local_18,L"OnReadFriendsListComplete LocalUserNum: %d bSuccess: %d %s");
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSession);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (param_2) {
    if (((this->Friends).Object == (IOnlineFriends *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pIVar1 = (this->Friends).Object;
    (**(code **)(pIVar1->_padding_ + 0x1c8))(pIVar1,param_1,param_3,&this->FriendsCache);
  }
  return;
}

// OnRegisterPlayerComplete @ 14ecf2e00

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
FTestSessionInterface::OnRegisterPlayerComplete
          (FTestSessionInterface *this,FName param_1,
          TArray<TSharedRef<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_> *param_2,
          bool param_3)

{
  IOnlineSession *pIVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res10 [3];
  FString local_28;
  FString local_18;
  
  local_res10[0] = param_1;
  if (5 < (byte)LogOnlineSession._0_1_) {
    ::FName::ToString(local_res10,&local_18);
    ::FString::PrintfImpl(&local_28,L"OnRegisterPlayerComplete %s bSuccess: %d");
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSession);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (((this->SessionInt).Object == (IOnlineSession *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pIVar1 = (this->SessionInt).Object;
  (**(code **)(pIVar1->_padding_ + 0x3a8))(pIVar1,&this->OnRegisterPlayersCompleteDelegateHandle);
  return;
}

// OnSessionUserInviteAccepted @ 14ecf34e0

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
FTestSessionInterface::OnSessionUserInviteAccepted
          (FTestSessionInterface *this,bool param_1,int param_2,
          TSharedPtr<FUniqueNetId_const_,1> *param_3,FOnlineSessionSearchResult *param_4)

{
  FName FVar1;
  FNameEntryId FVar2;
  undefined4 extraout_var;
  undefined1 local_res10 [16];
  uint local_res20;
  undefined4 uStackX_24;
  FString local_28;
  
  if (5 < (byte)LogOnlineSession._0_1_) {
    ::FString::PrintfImpl(&local_28,L"OnSessionInviteAccepted ControllerId: %d bSuccess: %d");
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSession);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if (param_1) {
    FVar2 = FNameEntryId::FromValidEName((EName)local_res10);
    uStackX_24 = 0;
    local_res20 = *(uint *)CONCAT44(extraout_var,FVar2.Value);
    FVar1.Number = 0;
    FVar1.ComparisonIndex.Value = local_res20;
    JoinSession(this,param_2,FVar1,param_4);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return;
}

// OnStartSessionComplete @ 14ecf35a0

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
FTestSessionInterface::OnStartSessionComplete
          (FTestSessionInterface *this,FName param_1,bool param_2)

{
  IOnlineSession *pIVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res10 [3];
  FString local_28;
  FString local_18;
  
  local_res10[0] = param_1;
  if (5 < (byte)LogOnlineSession._0_1_) {
    ::FName::ToString(local_res10,&local_18);
    ::FString::PrintfImpl(&local_28,L"OnStartSessionComplete %s bSuccess: %d");
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSession);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (((this->SessionInt).Object == (IOnlineSession *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pIVar1 = (this->SessionInt).Object;
  (**(code **)(pIVar1->_padding_ + 0x80))(pIVar1,&this->OnStartSessionCompleteDelegateHandle);
  this->bWasLastCommandSuccessful = param_2;
  return;
}

// OnUnregisterPlayerComplete @ 14ecf3800

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
FTestSessionInterface::OnUnregisterPlayerComplete
          (FTestSessionInterface *this,FName param_1,
          TArray<TSharedRef<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_> *param_2,
          bool param_3)

{
  IOnlineSession *pIVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res10 [3];
  FString local_28;
  FString local_18;
  
  local_res10[0] = param_1;
  if (5 < (byte)LogOnlineSession._0_1_) {
    ::FName::ToString(local_res10,&local_18);
    ::FString::PrintfImpl(&local_28,L"OnUnregisterPlayerComplete %s bSuccess: %d");
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSession);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (((this->SessionInt).Object == (IOnlineSession *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pIVar1 = (this->SessionInt).Object;
  (**(code **)(pIVar1->_padding_ + 0x3d8))(pIVar1,&this->OnUnregisterPlayersCompleteDelegateHandle);
  return;
}

// OnUpdateSessionComplete @ 14ecf38f0

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
FTestSessionInterface::OnUpdateSessionComplete
          (FTestSessionInterface *this,FName param_1,bool param_2)

{
  IOnlineSession *pIVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res10 [3];
  FString local_28;
  FString local_18;
  
  local_res10[0] = param_1;
  if (5 < (byte)LogOnlineSession._0_1_) {
    ::FName::ToString(local_res10,&local_18);
    ::FString::PrintfImpl(&local_28,L"OnUpdateSessionComplete %s bSuccess: %d");
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSession);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (((this->SessionInt).Object == (IOnlineSession *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pIVar1 = (this->SessionInt).Object;
  (**(code **)(pIVar1->_padding_ + 0xa8))(pIVar1,&this->OnUpdateSessionCompleteDelegateHandle);
  return;
}

// Test @ 14ecfe530

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
FTestSessionInterface::Test
          (FTestSessionInterface *this,UWorld *param_1,bool param_2,bool param_3,
          FOnlineSessionSettings *param_4)

{
  TSharedPtr<IOnlineSession,1> *this_00;
  TSharedPtr<IOnlineFriends,1> *this_01;
  longlong lVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  FNameEntryId FVar6;
  FName *pFVar7;
  IOnlineSubsystem *pIVar8;
  longlong *plVar9;
  TSharedPtr<IOnlineIdentity,1> *this_02;
  IOnlineIdentity *pIVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *pTVar13;
  TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *pTVar14;
  IOnlineFriends *pIVar15;
  TestOnlineGameSettings *pTVar16;
  TestOnlineSearchSettings *pTVar17;
  TSharedRef<TestOnlineSearchSettings,1> *pTVar18;
  IOnlineSession *pIVar19;
  ulong64 *puVar20;
  TSharedRef<FUniqueNetId_const_,1> *pTVar21;
  undefined4 extraout_var;
  TestOnlineGameSettings *this_03;
  undefined4 extraout_var_00;
  TReferenceControllerBase<1> *pTVar22;
  wchar_t *pwVar23;
  undefined1 local_res8 [8];
  UWorld *local_res10;
  undefined1 local_res18;
  char local_res20;
  uint uStack_69c;
  ForAnyElementType local_698;
  undefined8 local_690;
  TSharedRef<TestOnlineSearchSettings,1> local_688;
  undefined1 local_678 [8];
  FDelegateAllocation local_670;
  undefined1 local_660 [8];
  FDelegateAllocation local_658;
  undefined1 local_648 [8];
  FDelegateAllocation local_640;
  undefined1 local_630 [8];
  FDelegateAllocation local_628;
  undefined1 local_618 [8];
  FDelegateAllocation local_610;
  undefined1 local_600 [8];
  FDelegateAllocation local_5f8;
  undefined1 local_5e8 [8];
  FDelegateAllocation local_5e0;
  undefined1 local_5d0 [8];
  FDelegateAllocation local_5c8;
  undefined1 local_5b8 [8];
  FDelegateAllocation local_5b0;
  undefined1 local_5a0 [8];
  FDelegateAllocation local_598;
  undefined1 local_588 [8];
  FDelegateAllocation local_580;
  undefined1 local_570 [8];
  FDelegateAllocation local_568;
  undefined1 local_558 [8];
  FDelegateAllocation local_550;
  undefined1 local_540 [8];
  FDelegateAllocation local_538;
  undefined1 local_528 [8];
  ForAnyElementType local_520;
  int local_518;
  undefined1 local_510 [8];
  ForAnyElementType local_508;
  int local_500;
  undefined4 local_4f8;
  undefined4 uStack_4f4;
  undefined4 local_4f0;
  undefined4 uStack_4ec;
  TestOnlineSearchSettings *local_4e8;
  TReferenceControllerBase<1> *local_4e0;
  TRawPtrProxy<TestOnlineGameSettings> local_4d8;
  undefined1 local_4d0 [8];
  TRawPtrProxy<TestOnlineGameSettings> local_4c8;
  TRawPtrProxy<TestOnlineSearchSettings> local_4c0;
  TRawPtrProxy<TestOnlineSearchSettings> local_4b8;
  TestOnlineSearchSettings *local_4b0;
  TReferenceControllerBase<1> *local_4a8;
  FString local_4a0;
  FDestructionSentinel local_490;
  FDestructionSentinel local_478;
  FDestructionSentinel local_460;
  FDestructionSentinel local_448;
  FDestructionSentinel local_430;
  FDestructionSentinel local_418;
  FDestructionSentinel local_400;
  FDestructionSentinel local_3e8;
  FDestructionSentinel local_3d0;
  FDestructionSentinel local_3b8;
  FDestructionSentinel local_3a0;
  FDestructionSentinel local_388;
  FDestructionSentinel local_370;
  FDestructionSentinel local_358;
  undefined1 local_340 [24];
  FDestructionSentinel local_328;
  FDestructionSentinel local_310;
  FDelegateAllocation *local_2f8;
  FDestructionSentinel local_2f0;
  FDelegateAllocation *local_2d8;
  FDestructionSentinel local_2d0;
  FDelegateAllocation *local_2b8;
  FDestructionSentinel local_2b0;
  FDelegateAllocation *local_298;
  FDestructionSentinel local_290;
  FDelegateAllocation *local_278;
  FDestructionSentinel local_270;
  FDelegateAllocation *local_258;
  FDestructionSentinel local_250;
  FDelegateAllocation *local_238;
  FDestructionSentinel local_230;
  FDelegateAllocation *local_218;
  FDestructionSentinel local_210;
  FDelegateAllocation *local_1f8;
  FDestructionSentinel local_1f0;
  FDelegateAllocation *local_1d8;
  FDestructionSentinel local_1d0;
  FDelegateAllocation *local_1b8;
  FDestructionSentinel local_1b0;
  FDelegateAllocation *local_198;
  FDestructionSentinel local_190;
  FDelegateAllocation *local_178;
  FDestructionSentinel local_170;
  FDelegateAllocation *local_158;
  code *local_148;
  longlong lStack_140;
  undefined1 local_138 [8];
  TReferenceControllerBase<1> *local_130;
  undefined1 local_128 [8];
  TReferenceControllerBase<1> *local_120;
  undefined1 local_118 [8];
  TReferenceControllerBase<1> *local_110;
  undefined1 local_108 [8];
  TReferenceControllerBase<1> *local_100;
  TSharedRef<FUniqueNetId_const_,1> local_f8;
  undefined1 local_e8 [8];
  TReferenceControllerBase<1> *local_e0;
  undefined1 local_d8 [8];
  TReferenceControllerBase<1> *local_d0;
  undefined1 local_c8 [16];
  code *local_b8;
  longlong lStack_b0;
  undefined1 local_a8 [8];
  undefined1 local_a0 [8];
  undefined1 local_98 [8];
  undefined1 local_90 [24];
  TReferenceControllerBase<1> *local_78;
  code *local_68;
  longlong lStack_60;
  code *local_58;
  FSharedReferencer<1> FStack_50;
  
  if ((this->Subsystem).Data.ArrayNum == 0) {
    pwVar23 = L"";
  }
  else {
    pwVar23 = (wchar_t *)(this->Subsystem).Data.AllocatorInstance.Data;
  }
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  pFVar7 = ::FName::FName((FName *)(local_90 + 8),pwVar23);
  pIVar8 = IOnlineSubsystem::Get(pFVar7);
  if ((pIVar8 == (IOnlineSubsystem *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("OnlineSub",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\Tests\\TestSessionInterface.cpp"
                         ,0x77,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this->World = param_1;
  pTVar16 = (TestOnlineGameSettings *)0x0;
  lStack_b0 = (ulonglong)uStack_69c << 0x20;
  local_b8 = WorldDestroyed;
  TMulticastDelegateRegistration<void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>::
  AddRaw<FTestSessionInterface>
            ((TMulticastDelegateRegistration<void___cdecl(UWorld_*),FDefaultDelegateUserPolicy> *)
             &GEngine->WorldDestroyedEvent,(FTestSessionInterface *)local_90,(pmf_9e7c26f6 *)this);
  plVar9 = (longlong *)(**(code **)(pIVar8->_padding_ + 0x80))(pIVar8,local_d8);
  lVar1 = *plVar9;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_d0);
  if (lVar1 != 0) {
    this_02 = (TSharedPtr<IOnlineIdentity,1> *)
              (**(code **)(pIVar8->_padding_ + 0x80))(pIVar8,local_108);
    pIVar10 = TSharedPtr<IOnlineIdentity,1>::operator->(this_02);
    puVar11 = (undefined8 *)(**(code **)(pIVar10->_padding_ + 0x110))(pIVar10,local_e8,0);
    if (&this->UserId != (TSharedPtr<FUniqueNetId_const_,1> *)puVar11) {
      (this->UserId).Object = (FUniqueNetId *)*puVar11;
      *puVar11 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->UserId).SharedReferenceCount,(FSharedReferencer<1> *)(puVar11 + 1));
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_e0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_100);
  }
  puVar11 = (undefined8 *)(**(code **)(pIVar8->_padding_ + 0x80))(pIVar8,local_118);
  if (&this->Identity != (TSharedPtr<IOnlineIdentity,1> *)puVar11) {
    (this->Identity).Object = (IOnlineIdentity *)*puVar11;
    *puVar11 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Identity).SharedReferenceCount,(FSharedReferencer<1> *)(puVar11 + 1));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_110);
  puVar11 = (undefined8 *)(**(code **)(pIVar8->_padding_ + 0x20))(pIVar8,local_128);
  this_00 = &this->SessionInt;
  if (this_00 != (TSharedPtr<IOnlineSession,1> *)puVar11) {
    this_00->Object = (IOnlineSession *)*puVar11;
    *puVar11 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->SessionInt).SharedReferenceCount,(FSharedReferencer<1> *)(puVar11 + 1));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_120);
  if ((this_00->Object == (IOnlineSession *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("SessionInt.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\Tests\\TestSessionInterface.cpp"
                         ,0x84,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  puVar11 = (undefined8 *)(**(code **)(pIVar8->_padding_ + 0x28))(pIVar8,local_138);
  this_01 = &this->Friends;
  if (this_01 != (TSharedPtr<IOnlineFriends,1> *)puVar11) {
    this_01->Object = (IOnlineFriends *)*puVar11;
    *puVar11 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Friends).SharedReferenceCount,(FSharedReferencer<1> *)(puVar11 + 1));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_130);
  uVar3 = local_688.SharedReferenceCount.ReferenceController._4_4_;
  local_618 = (undefined1  [8])0x0;
  local_610.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_610.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_618,
             (FWriteAccessScope *)&local_2f0);
  local_2d8 = &local_610;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,&local_610);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    puVar11[4] = OnCreateSessionComplete;
    puVar11[5] = (ulonglong)uVar3 << 0x20;
    *puVar11 = &
               ___7__TBaseRawMethodDelegateInstance__0A_VFTestSessionInterface____A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar11[3] = this;
    if ((puVar11[4] == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUserObject != nullptr && MethodPtr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x1d8,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (local_2f0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2f0.Accessor,&local_2f0);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnCreateSessionCompleteDelegate,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_618);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_618,
             (FWriteAccessScope *)&local_460);
  if ((local_610.DelegateSize != 0) &&
     (local_610.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_610.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_610,0,0,0x10);
    local_610.DelegateSize = 0;
  }
  if (local_460.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_460.Accessor,&local_460);
  }
  if (local_610.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_610.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_618);
  uVar3 = local_688.SharedReferenceCount.ReferenceController._4_4_;
  local_630 = (undefined1  [8])0x0;
  local_628.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_628.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_630,
             (FWriteAccessScope *)&local_2d0);
  local_2b8 = &local_628;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,&local_628);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    puVar11[4] = OnStartSessionComplete;
    puVar11[5] = (ulonglong)uVar3 << 0x20;
    *puVar11 = &
               ___7__TBaseRawMethodDelegateInstance__0A_VFTestSessionInterface____A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar11[3] = this;
    if ((puVar11[4] == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUserObject != nullptr && MethodPtr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x1d8,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (local_2d0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2d0.Accessor,&local_2d0);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnStartSessionCompleteDelegate,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_630);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_630,
             (FWriteAccessScope *)&local_418);
  if ((local_628.DelegateSize != 0) &&
     (local_628.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_628.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_628,0,0,0x10);
    local_628.DelegateSize = 0;
  }
  if (local_418.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_418.Accessor,&local_418);
  }
  if (local_628.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_628.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_630);
  uVar3 = local_688.SharedReferenceCount.ReferenceController._4_4_;
  local_5b8 = (undefined1  [8])0x0;
  local_5b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_5b0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_5b8,
             (FWriteAccessScope *)&local_2b0);
  local_298 = &local_5b0;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,&local_5b0);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    puVar11[4] = OnEndSessionComplete;
    puVar11[5] = (ulonglong)uVar3 << 0x20;
    *puVar11 = &
               ___7__TBaseRawMethodDelegateInstance__0A_VFTestSessionInterface____A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar11[3] = this;
    if ((puVar11[4] == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUserObject != nullptr && MethodPtr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x1d8,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (local_2b0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2b0.Accessor,&local_2b0);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnEndSessionCompleteDelegate,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_5b8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_5b8,
             (FWriteAccessScope *)&local_400);
  if ((local_5b0.DelegateSize != 0) &&
     (local_5b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_5b0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_5b0,0,0,0x10);
    local_5b0.DelegateSize = 0;
  }
  if (local_400.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_400.Accessor,&local_400);
  }
  if (local_5b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_5b0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_5b8);
  uVar3 = local_688.SharedReferenceCount.ReferenceController._4_4_;
  local_5a0 = (undefined1  [8])0x0;
  local_598.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_598.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_5a0,
             (FWriteAccessScope *)&local_290);
  local_278 = &local_598;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,&local_598);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    puVar11[4] = OnDestroySessionComplete;
    puVar11[5] = (ulonglong)uVar3 << 0x20;
    *puVar11 = &
               ___7__TBaseRawMethodDelegateInstance__0A_VFTestSessionInterface____A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar11[3] = this;
    if ((puVar11[4] == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUserObject != nullptr && MethodPtr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x1d8,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (local_290.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_290.Accessor,&local_290);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDestroySessionCompleteDelegate,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_5a0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_5a0,
             (FWriteAccessScope *)&local_3e8);
  if ((local_598.DelegateSize != 0) &&
     (local_598.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_598.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_598,0,0,0x10);
    local_598.DelegateSize = 0;
  }
  if (local_3e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3e8.Accessor,&local_3e8);
  }
  if (local_598.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_598.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_5a0);
  uVar3 = local_688.SharedReferenceCount.ReferenceController._4_4_;
  local_588 = (undefined1  [8])0x0;
  local_580.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_580.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_588,
             (FWriteAccessScope *)&local_310);
  local_2f8 = &local_580;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,&local_580);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    puVar11[4] = OnUpdateSessionComplete;
    puVar11[5] = (ulonglong)uVar3 << 0x20;
    *puVar11 = &
               ___7__TBaseRawMethodDelegateInstance__0A_VFTestSessionInterface____A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar11[3] = this;
    if ((puVar11[4] == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUserObject != nullptr && MethodPtr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x1d8,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (local_310.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_310.Accessor,&local_310);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnUpdateSessionCompleteDelegate,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_588);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_588,
             (FWriteAccessScope *)&local_3d0);
  if ((local_580.DelegateSize != 0) &&
     (local_580.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_580.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_580,0,0,0x10);
    local_580.DelegateSize = 0;
  }
  if (local_3d0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3d0.Accessor,&local_3d0);
  }
  if (local_580.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_580.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_588);
  uVar3 = local_688.SharedReferenceCount.ReferenceController._4_4_;
  local_570 = (undefined1  [8])0x0;
  local_568.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_568.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_570,
             (FWriteAccessScope *)&local_270);
  local_258 = &local_568;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,&local_568);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6AXVFName__W4Type_EOnJoinSessionCompleteResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    puVar11[4] = OnJoinSessionComplete;
    puVar11[5] = (ulonglong)uVar3 << 0x20;
    *puVar11 = &
               ___7__TBaseRawMethodDelegateInstance__0A_VFTestSessionInterface____A6AXVFName__W4Type_EOnJoinSessionCompleteResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar11[3] = this;
    if ((puVar11[4] == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUserObject != nullptr && MethodPtr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x1d8,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (local_270.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_270.Accessor,&local_270);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnJoinSessionCompleteDelegate,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_570);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_570,
             (FWriteAccessScope *)&local_490);
  if ((local_568.DelegateSize != 0) &&
     (local_568.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_568.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_568,0,0,0x10);
    local_568.DelegateSize = 0;
  }
  if (local_490.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_490.Accessor,&local_490);
  }
  if (local_568.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_568.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_570);
  uVar3 = local_688.SharedReferenceCount.ReferenceController._4_4_;
  local_558 = (undefined1  [8])0x0;
  local_550.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_550.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_558,
             (FWriteAccessScope *)&local_250);
  local_238 = &local_550;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,&local_550);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    puVar11[4] = OnEndForJoinSessionComplete;
    puVar11[5] = (ulonglong)uVar3 << 0x20;
    *puVar11 = &
               ___7__TBaseRawMethodDelegateInstance__0A_VFTestSessionInterface____A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar11[3] = this;
    if ((puVar11[4] == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUserObject != nullptr && MethodPtr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x1d8,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (local_250.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_250.Accessor,&local_250);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnEndForJoinSessionCompleteDelegate
             ,(TDelegateBase<FNotThreadSafeDelegateMode> *)local_558);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_558,
             (FWriteAccessScope *)&local_478);
  if ((local_550.DelegateSize != 0) &&
     (local_550.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_550.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_550,0,0,0x10);
    local_550.DelegateSize = 0;
  }
  if (local_478.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_478.Accessor,&local_478);
  }
  if (local_550.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_550.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_558);
  uVar3 = local_688.SharedReferenceCount.ReferenceController._4_4_;
  local_600 = (undefined1  [8])0x0;
  local_5f8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_5f8.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_600,
             (FWriteAccessScope *)&local_230);
  local_218 = &local_5f8;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,&local_5f8);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    puVar11[4] = OnDestroyForJoinSessionComplete;
    puVar11[5] = (ulonglong)uVar3 << 0x20;
    *puVar11 = &
               ___7__TBaseRawMethodDelegateInstance__0A_VFTestSessionInterface____A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar11[3] = this;
    if ((puVar11[4] == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUserObject != nullptr && MethodPtr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x1d8,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (local_230.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_230.Accessor,&local_230);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &this->OnDestroyForJoinSessionCompleteDelegate,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_600);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_600,
             (FWriteAccessScope *)&local_448);
  if ((local_5f8.DelegateSize != 0) &&
     (local_5f8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_5f8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_5f8,0,0,0x10);
    local_5f8.DelegateSize = 0;
  }
  if (local_448.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_448.Accessor,&local_448);
  }
  if (local_5f8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_5f8.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_600);
  uVar3 = local_688.SharedReferenceCount.ReferenceController._4_4_;
  local_5e8 = (undefined1  [8])0x0;
  local_5e0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_5e0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_5e8,
             (FWriteAccessScope *)&local_210);
  local_1f8 = &local_5e0;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,&local_5e0);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6AXH_NAEBV__TArray_VFOnlineSessionSearchResult__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    puVar11[4] = OnFindFriendSessionComplete;
    puVar11[5] = (ulonglong)uVar3 << 0x20;
    *puVar11 = &
               ___7__TBaseRawMethodDelegateInstance__0A_VFTestSessionInterface____A6AXH_NAEBV__TArray_VFOnlineSessionSearchResult__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar11[3] = this;
    if ((puVar11[4] == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUserObject != nullptr && MethodPtr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x1d8,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (local_210.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_210.Accessor,&local_210);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnFindFriendSessionCompleteDelegate
             ,(TDelegateBase<FNotThreadSafeDelegateMode> *)local_5e8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_5e8,
             (FWriteAccessScope *)&local_430);
  if ((local_5e0.DelegateSize != 0) &&
     (local_5e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_5e0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_5e0,0,0,0x10);
    local_5e0.DelegateSize = 0;
  }
  if (local_430.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_430.Accessor,&local_430);
  }
  if (local_5e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_5e0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_5e8);
  uVar3 = local_688.SharedReferenceCount.ReferenceController._4_4_;
  local_678 = (undefined1  [8])0x0;
  local_670.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_670.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_678,
             (FWriteAccessScope *)&local_1f0);
  local_1d8 = &local_670;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,&local_670);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6AXH_NAEBV__TArray_VFOnlineSessionSearchResult__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    puVar11[4] = OnFindFriendSessionForListFriendSessionsComplete;
    puVar11[5] = (ulonglong)uVar3 << 0x20;
    *puVar11 = &
               ___7__TBaseRawMethodDelegateInstance__0A_VFTestSessionInterface____A6AXH_NAEBV__TArray_VFOnlineSessionSearchResult__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar11[3] = this;
    if ((puVar11[4] == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUserObject != nullptr && MethodPtr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x1d8,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (local_1f0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1f0.Accessor,&local_1f0);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &this->OnFindFriendSessionForListFriendSessionsCompleteDelegate,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_678);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_678,
             (FWriteAccessScope *)&local_3b8);
  if ((local_670.DelegateSize != 0) &&
     (local_670.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_670.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_670,0,0,0x10);
    local_670.DelegateSize = 0;
  }
  if (local_3b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3b8.Accessor,&local_3b8);
  }
  if (local_670.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_670.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_678);
  uVar3 = local_688.SharedReferenceCount.ReferenceController._4_4_;
  local_5d0 = (undefined1  [8])0x0;
  local_5c8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_5c8.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_5d0,
             (FWriteAccessScope *)&local_1d0);
  local_1b8 = &local_5c8;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,&local_5c8);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6AXVFName__AEBV__TArray_V__TSharedRef___CBVFUniqueNetId___00__V__TSizedDefaultAllocator__0CA______N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    puVar11[4] = OnRegisterPlayerComplete;
    puVar11[5] = (ulonglong)uVar3 << 0x20;
    *puVar11 = &
               ___7__TBaseRawMethodDelegateInstance__0A_VFTestSessionInterface____A6AXVFName__AEBV__TArray_V__TSharedRef___CBVFUniqueNetId___00__V__TSizedDefaultAllocator__0CA______N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar11[3] = this;
    if ((puVar11[4] == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUserObject != nullptr && MethodPtr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x1d8,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (local_1d0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1d0.Accessor,&local_1d0);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnRegisterPlayersCompleteDelegate,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_5d0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_5d0,
             (FWriteAccessScope *)&local_3a0);
  if ((local_5c8.DelegateSize != 0) &&
     (local_5c8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_5c8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_5c8,0,0,0x10);
    local_5c8.DelegateSize = 0;
  }
  if (local_3a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3a0.Accessor,&local_3a0);
  }
  if (local_5c8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_5c8.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_5d0);
  uVar3 = local_688.SharedReferenceCount.ReferenceController._4_4_;
  local_660 = (undefined1  [8])0x0;
  local_658.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_658.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_660,
             (FWriteAccessScope *)&local_1b0);
  local_198 = &local_658;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,&local_658);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6AXVFName__AEBV__TArray_V__TSharedRef___CBVFUniqueNetId___00__V__TSizedDefaultAllocator__0CA______N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    puVar11[4] = OnUnregisterPlayerComplete;
    puVar11[5] = (ulonglong)uVar3 << 0x20;
    *puVar11 = &
               ___7__TBaseRawMethodDelegateInstance__0A_VFTestSessionInterface____A6AXVFName__AEBV__TArray_V__TSharedRef___CBVFUniqueNetId___00__V__TSizedDefaultAllocator__0CA______N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar11[3] = this;
    if ((puVar11[4] == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUserObject != nullptr && MethodPtr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x1d8,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (local_1b0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1b0.Accessor,&local_1b0);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnUnregisterPlayersCompleteDelegate
             ,(TDelegateBase<FNotThreadSafeDelegateMode> *)local_660);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_660,
             (FWriteAccessScope *)&local_388);
  if ((local_658.DelegateSize != 0) &&
     (local_658.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_658.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_658,0,0,0x10);
    local_658.DelegateSize = 0;
  }
  if (local_388.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_388.Accessor,&local_388);
  }
  if (local_658.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_658.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_660);
  lStack_140 = (ulonglong)uVar3 << 0x20;
  local_148 = OnFindSessionsComplete;
  pTVar13 = TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::
            CreateRaw<FTestSessionInterface>
                      ((TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *)local_510,this,
                       (pmf_97f7bcc5 *)&local_148);
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnFindSessionsCompleteDelegate,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar13);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_510,
             (FWriteAccessScope *)&local_370);
  if ((local_500 != 0) && (local_508.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_508.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_508,0,0,0x10);
    local_500 = 0;
  }
  if (local_370.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_370.Accessor,&local_370);
  }
  if (local_508.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_508.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_510);
  FStack_50.ReferenceController = (TReferenceControllerBase<1> *)((ulonglong)uVar3 << 0x20);
  local_58 = OnCancelFindSessionsComplete;
  pTVar13 = TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::
            CreateRaw<FTestSessionInterface>
                      ((TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *)local_528,this,
                       (pmf_97f7bcc5 *)&local_58);
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &this->OnCancelFindSessionsCompleteDelegate,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar13);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_528,
             (FWriteAccessScope *)&local_358);
  if ((local_518 != 0) && (local_520.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_520.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_520,0,0,0x10);
    local_518 = 0;
  }
  if (local_358.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_358.Accessor,&local_358);
  }
  if (local_520.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_520.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_528);
  lStack_60 = (ulonglong)uVar3 << 0x20;
  local_68 = OnMatchmakingComplete;
  pTVar14 = TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>::
            CreateRaw<FTestSessionInterface>
                      ((TDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *)local_340,
                       this,(pmf_7a5b359f *)&local_68);
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnMatchmakingCompleteDelegate,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar14);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_340);
  if ((void *)local_340._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_340._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_340);
  if (this_01->Object != (IOnlineFriends *)0x0) {
    pIVar15 = TSharedPtr<IOnlineFriends,1>::operator->(this_01);
    uVar3 = local_688.SharedReferenceCount.ReferenceController._4_4_;
    local_540 = (undefined1  [8])0x0;
    pcVar2 = *(code **)(pIVar15->_padding_ + 0xe8);
    local_538.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_538.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_540,
               (FWriteAccessScope *)&local_190);
    local_178 = &local_538;
    puVar11 = UE::Core::Private::DelegateAllocate(0x30,&local_538);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &
                 ___7__TCommonDelegateInstanceState___A6AXH_NAEBVFString__1_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar12 = FDelegateHandle::GenerateNewID();
      puVar11[2] = uVar12;
      puVar11[4] = OnReadFriendsListComplete;
      puVar11[5] = (ulonglong)uVar3 << 0x20;
      *puVar11 = &
                 ___7__TBaseRawMethodDelegateInstance__0A_VFTestSessionInterface____A6AXH_NAEBVFString__1_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar11[3] = this;
      if ((puVar11[4] == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InUserObject != nullptr && MethodPtr != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                             ,0x1d8,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (local_190.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_190.Accessor,&local_190);
    }
    ::FString::FString(&local_4a0,L"default");
    (*pcVar2)(pIVar15,0,&local_4a0,local_540);
    if (local_4a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4a0.Data.AllocatorInstance.Data);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_540);
    if (local_538.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_538.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_540);
    param_2 = (bool)local_res18;
  }
  if (local_res20 == '\0') {
    if (this->bIsHost != false) {
      this_03 = ::operator_new(0xd8);
      if (this_03 != (TestOnlineGameSettings *)0x0) {
        pTVar16 = TestOnlineGameSettings::TestOnlineGameSettings(this_03,param_2,param_4);
      }
      local_4d8.Object = pTVar16;
      TSharedPtr<TestOnlineGameSettings,1>::operator=<TestOnlineGameSettings>
                (&this->HostSettings,&local_4d8);
      pTVar16 = TSharedPtr<TestOnlineGameSettings,1>::operator->(&this->HostSettings);
      TestOnlineGameSettings::AddWorldSettings(pTVar16,local_res10);
      pIVar19 = TSharedPtr<IOnlineSession,1>::operator->(this_00);
      puVar20 = (ulong64 *)
                (**(code **)(pIVar19->_padding_ + 0x50))
                          (pIVar19,local_98,&this->OnCreateSessionCompleteDelegate);
      (this->OnCreateSessionCompleteDelegateHandle).ID = *puVar20;
      pIVar19 = TSharedPtr<IOnlineSession,1>::operator->(this_00);
      pcVar2 = *(code **)(pIVar19->_padding_ + 0x48);
      pTVar16 = TSharedPtr<TestOnlineGameSettings,1>::operator*<TestOnlineGameSettings>
                          (&this->HostSettings);
      FVar6 = FNameEntryId::FromValidEName((EName)local_4d0);
      uStack_4ec = 0;
      local_4f0 = *(undefined4 *)CONCAT44(extraout_var_00,FVar6.Value);
      (*pcVar2)(pIVar19,0,local_4f0,pTVar16);
      goto LAB_14ecffee4;
    }
    pTVar17 = ::operator_new(0x88);
    if (pTVar17 != (TestOnlineSearchSettings *)0x0) {
      pTVar16 = (TestOnlineGameSettings *)
                TestOnlineSearchSettings::TestOnlineSearchSettings(pTVar17,param_2,param_4);
    }
    local_4b8.Object = (TestOnlineSearchSettings *)pTVar16;
    TSharedPtr<TestOnlineSearchSettings,1>::operator=<TestOnlineSearchSettings>
              (&this->SearchSettings,&local_4b8);
    pTVar18 = TSharedPtr<TestOnlineSearchSettings,1>::ToSharedRef(&this->SearchSettings,&local_688);
    local_4e8 = pTVar18->Object;
    local_4e0 = (pTVar18->SharedReferenceCount).ReferenceController;
    if (local_4e0 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_4e0->SharedReferenceCount = (atomic<int>)((int)local_4e0->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_688.SharedReferenceCount.ReferenceController._4_4_,
                        local_688.SharedReferenceCount.ReferenceController._0_4_));
    pIVar19 = TSharedPtr<IOnlineSession,1>::operator->(this_00);
    puVar20 = (ulong64 *)
              (**(code **)(pIVar19->_padding_ + 0x188))
                        (pIVar19,local_a0,&this->OnFindSessionsCompleteDelegate);
    (this->OnFindSessionsCompleteDelegateHandle).ID = *puVar20;
    pIVar19 = TSharedPtr<IOnlineSession,1>::operator->(this_00);
    (**(code **)(pIVar19->_padding_ + 0x180))(pIVar19,0);
    pTVar22 = local_4e0;
  }
  else {
    pTVar16 = ::operator_new(0xd8);
    local_4c8.Object = (TestOnlineGameSettings *)0x0;
    if (pTVar16 != (TestOnlineGameSettings *)0x0) {
      local_4c8.Object = TestOnlineGameSettings::TestOnlineGameSettings(pTVar16,param_2,param_4);
    }
    TSharedPtr<TestOnlineGameSettings,1>::operator=<TestOnlineGameSettings>
              (&this->HostSettings,&local_4c8);
    pTVar16 = TSharedPtr<TestOnlineGameSettings,1>::operator->(&this->HostSettings);
    TestOnlineGameSettings::AddWorldSettings(pTVar16,local_res10);
    pTVar17 = ::operator_new(0x88);
    local_4c0.Object = (TestOnlineSearchSettings *)0x0;
    if (pTVar17 != (TestOnlineSearchSettings *)0x0) {
      local_4c0.Object = TestOnlineSearchSettings::TestOnlineSearchSettings(pTVar17,param_2,param_4)
      ;
    }
    TSharedPtr<TestOnlineSearchSettings,1>::operator=<TestOnlineSearchSettings>
              (&this->SearchSettings,&local_4c0);
    pTVar18 = TSharedPtr<TestOnlineSearchSettings,1>::ToSharedRef
                        (&this->SearchSettings,
                         (TSharedRef<TestOnlineSearchSettings,1> *)(local_90 + 0x10));
    local_4b0 = pTVar18->Object;
    local_4a8 = (pTVar18->SharedReferenceCount).ReferenceController;
    if (local_4a8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_4a8->SharedReferenceCount = (atomic<int>)((int)local_4a8->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_78);
    pIVar19 = TSharedPtr<IOnlineSession,1>::operator->(this_00);
    puVar20 = (ulong64 *)
              (**(code **)(pIVar19->_padding_ + 0x128))
                        (pIVar19,local_c8,&this->OnMatchmakingCompleteDelegate);
    (this->OnMatchmakingCompleteDelegateHandle).ID = *puVar20;
    local_698.Data = (FScriptContainerElement *)0x0;
    local_690 = 0;
    pTVar21 = TSharedPtr<FUniqueNetId_const_,1>::ToSharedRef(&this->UserId,&local_f8);
    if (((local_698.Data <= pTVar21) &&
        (pTVar21 < (TSharedRef<FUniqueNetId_const_,1> *)
                   (local_698.Data + (longlong)local_690._4_4_ * 0x10))) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar5 = (int)local_690;
    if ((int)local_690 == local_690._4_4_) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_698,(int *)((longlong)&local_690 + 4));
    }
    local_690 = CONCAT44(local_690._4_4_,iVar5 + 1);
    *(FUniqueNetId **)&local_698.Data[(longlong)iVar5 * 0x10].field_0x0 = pTVar21->Object;
    pTVar22 = (pTVar21->SharedReferenceCount).ReferenceController;
    *(TReferenceControllerBase<1> **)(local_698.Data + (longlong)iVar5 * 0x10 + 8) = pTVar22;
    if (pTVar22 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar22->SharedReferenceCount = (atomic<int>)((int)pTVar22->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_f8.SharedReferenceCount.ReferenceController);
    pIVar19 = TSharedPtr<IOnlineSession,1>::operator->(this_00);
    pcVar2 = *(code **)(pIVar19->_padding_ + 0x120);
    pTVar16 = TSharedPtr<TestOnlineGameSettings,1>::operator*<TestOnlineGameSettings>
                        (&this->HostSettings);
    FVar6 = FNameEntryId::FromValidEName((EName)local_res8);
    uStack_4f4 = 0;
    local_4f8 = *(undefined4 *)CONCAT44(extraout_var,FVar6.Value);
    (*pcVar2)(pIVar19,&local_698,local_4f8,pTVar16,&local_4b0);
    DestructItems<TSharedRef<FUniqueNetId_const_,1>,int>
              ((TSharedRef<FUniqueNetId_const_,1> *)local_698.Data,(int)local_690);
    pTVar22 = local_4a8;
    if ((TSharedRef<FUniqueNetId_const_,1> *)local_698.Data !=
        (TSharedRef<FUniqueNetId_const_,1> *)0x0) {
      FMemory::Free(local_698.Data);
      pTVar22 = local_4a8;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar22);
LAB_14ecffee4:
  local_648 = (undefined1  [8])0x0;
  local_640.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_640.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_648,
             (FWriteAccessScope *)&local_170);
  local_158 = &local_640;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,&local_640);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6AX_NHV__TSharedPtr___CBVFUniqueNetId___00__AEBVFOnlineSessionSearchResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    puVar11[4] = OnSessionUserInviteAccepted;
    puVar11[5] = (ulonglong)local_688.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
    *puVar11 = &
               ___7__TBaseRawMethodDelegateInstance__0A_VFTestSessionInterface____A6AX_NHV__TSharedPtr___CBVFUniqueNetId___00__AEBVFOnlineSessionSearchResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar11[3] = this;
    if ((puVar11[4] == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUserObject != nullptr && MethodPtr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x1d8,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (local_170.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_170.Accessor,&local_170);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnSessionUserInviteAcceptedDelegate
             ,(TDelegateBase<FNotThreadSafeDelegateMode> *)local_648);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_648,
             (FWriteAccessScope *)&local_328);
  if ((local_640.DelegateSize != 0) &&
     (local_640.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_640.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_640,0,0,0x10);
    local_640.DelegateSize = 0;
  }
  if (local_328.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_328.Accessor,&local_328);
  }
  if (local_640.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_640.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_648);
  if ((this_00->Object == (IOnlineSession *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  puVar20 = (ulong64 *)
            (**(code **)(this_00->Object->_padding_ + 0x330))
                      (this_00->Object,local_a8,&this->OnSessionUserInviteAcceptedDelegate);
  (this->OnSessionUserInviteAcceptedDelegateHandle).ID = *puVar20;
  return;
}

// Tick @ 14ed05c20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FTestSessionInterface::Tick(FTestSessionInterface *this,float param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<_public:_virtual_bool___cdecl_FTestSessionInterface::Tick(float)_::_2_::FStat_STAT_FTestSessionInterface_Tick>
  FVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  FNameEntryId FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  bool bVar12;
  LARGE_INTEGER local_res8;
  FName local_res18;
  FStatMessage local_28;
  
  FVar11.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FTestSessionInterface_Tick ==
        (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_FTestSessionInterface::Tick(float)_::_2_::FStat_STAT_FTestSessionInterface_Tick>
         )0x0) {
      pFVar6 = ::FName::FName((FName *)&local_res8.s,"STAT_FTestSessionInterface_Tick");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FTestSessionInterface_Tick,*pFVar6,
                 L"STAT_FTestSessionInterface_Tick","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                 true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar7 = StatPtr_STAT_FTestSessionInterface_Tick;
  if (StatPtr_STAT_FTestSessionInterface_Tick ==
      (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_FTestSessionInterface::Tick(float)_::_2_::FStat_STAT_FTestSessionInterface_Tick>
       )0x0) {
    pFVar6 = ::FName::FName(&local_res18,"STAT_FTestSessionInterface_Tick");
    FVar7 = (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_FTestSessionInterface::Tick(float)_::_2_::FStat_STAT_FTestSessionInterface_Tick>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FTestSessionInterface_Tick,
                         *pFVar6,L"STAT_FTestSessionInterface_Tick","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar10 = *(FName *)FVar7;
  bVar3 = false;
  bVar5 = false;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar9.Value == 0) && (uVar8 == 0)) {
LAB_14ed05da0:
    bVar4 = false;
    FVar10.ComparisonIndex.Value = 0;
    FVar10.Number = 0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar9.Value;
        local_res8.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\Tests\\TestSessionInterface.cpp"
                   ,0x1ac);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14ed05da0;
    local_res8.s.LowPart = FVar9.Value;
    local_res8.s.HighPart = uVar8;
    FThreadStats::AddMessage(FVar10,CycleScopeStart);
    bVar4 = true;
    FVar11.Value = FVar9.Value;
  }
  iVar2 = this->TestPhase;
  if (iVar2 != this->LastTestPhase) {
    this->LastTestPhase = iVar2;
    if (this->bOverallSuccess == false) {
      if (4 < (byte)LogOnlineSession._0_1_) {
        ::FString::PrintfImpl((FString *)&local_28,L"Testing failed in phase %d");
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSession);
        if (local_28.StatData.Pad != (uchar  [8])0x0) {
          FMemory::Free((void *)local_28.StatData.Pad);
        }
      }
      this->TestPhase = 3;
    }
    else if (iVar2 == 1) {
      if (4 < (byte)LogOnlineSession._0_1_) {
        ::FString::PrintfImpl((FString *)&local_28,L"TESTING COMPLETE Success:%s!");
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSession);
        if (local_28.StatData.Pad != (uchar  [8])0x0) {
          FMemory::Free((void *)local_28.StatData.Pad);
        }
      }
      (**(code **)this->_padding_)(this,1);
      bVar12 = false;
      goto LAB_14ed05e28;
    }
  }
  bVar12 = true;
LAB_14ed05e28:
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar10 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_28.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      local_28.NameAndInfo.Index.Value = FVar11.Value;
      QueryPerformanceCounter(&local_res8);
      local_28.StatData.Pad[4] = '\0';
      local_28.StatData.Pad[5] = '\0';
      local_28.StatData.Pad[6] = '\0';
      local_28.StatData.Pad[7] = '\0';
      local_28.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_28.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_28.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_28.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_28);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return bVar12;
}

// WorldDestroyed @ 14ed096b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FTestSessionInterface::WorldDestroyed(FTestSessionInterface *this,UWorld *param_1)

{
  if (param_1 == this->World) {
    this->World = (UWorld *)0x0;
  }
  return;
}

