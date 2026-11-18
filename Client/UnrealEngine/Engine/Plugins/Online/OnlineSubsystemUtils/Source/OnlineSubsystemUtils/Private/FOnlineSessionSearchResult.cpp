// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 2

// operator= @ 14ec57e50

FOnlineSessionSearchResult * __thiscall
FOnlineSessionSearchResult::operator=
          (FOnlineSessionSearchResult *this,FOnlineSessionSearchResult *param_1)

{
  TMap<TSharedRef<FUniqueNetId_const_,1>,FOnlineKeyValuePairs<FName,FOnlineSessionSetting>,FDefaultSetAllocator,TUniqueNetIdMapKeyFuncs<FOnlineKeyValuePairs<FName,FOnlineSessionSetting>_>_>
  *pTVar1;
  TMap<TSharedRef<FUniqueNetId_const_,1>,FOnlineKeyValuePairs<FName,FOnlineSessionSetting>,FDefaultSetAllocator,TUniqueNetIdMapKeyFuncs<FOnlineKeyValuePairs<FName,FOnlineSessionSetting>_>_>
  *this_00;
  TReferenceControllerBase<1> *pTVar2;
  FUniqueNetId *pFVar3;
  FOnlineSessionInfo *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  
  pTVar2 = (param_1->Session).OwningUserId.SharedReferenceCount.ReferenceController;
  pFVar3 = (param_1->Session).OwningUserId.Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = (this->Session).OwningUserId.SharedReferenceCount.ReferenceController;
  (this->Session).OwningUserId.Object = pFVar3;
  (this->Session).OwningUserId.SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  ::FString::operator=(&(this->Session).OwningUserName,&(param_1->Session).OwningUserName);
  (this->Session).SessionSettings.NumPublicConnections =
       (param_1->Session).SessionSettings.NumPublicConnections;
  (this->Session).SessionSettings.NumPrivateConnections =
       (param_1->Session).SessionSettings.NumPrivateConnections;
  (this->Session).SessionSettings.bShouldAdvertise =
       (param_1->Session).SessionSettings.bShouldAdvertise;
  (this->Session).SessionSettings.bAllowJoinInProgress =
       (param_1->Session).SessionSettings.bAllowJoinInProgress;
  (this->Session).SessionSettings.bIsLANMatch = (param_1->Session).SessionSettings.bIsLANMatch;
  (this->Session).SessionSettings.bIsDedicated = (param_1->Session).SessionSettings.bIsDedicated;
  (this->Session).SessionSettings.bUsesStats = (param_1->Session).SessionSettings.bUsesStats;
  (this->Session).SessionSettings.bAllowInvites = (param_1->Session).SessionSettings.bAllowInvites;
  (this->Session).SessionSettings.bUsesPresence = (param_1->Session).SessionSettings.bUsesPresence;
  (this->Session).SessionSettings.bAllowJoinViaPresence =
       (param_1->Session).SessionSettings.bAllowJoinViaPresence;
  (this->Session).SessionSettings.bAllowJoinViaPresenceFriendsOnly =
       (param_1->Session).SessionSettings.bAllowJoinViaPresenceFriendsOnly;
  (this->Session).SessionSettings.bAntiCheatProtected =
       (param_1->Session).SessionSettings.bAntiCheatProtected;
  (this->Session).SessionSettings.bUseLobbiesIfAvailable =
       (param_1->Session).SessionSettings.bUseLobbiesIfAvailable;
  (this->Session).SessionSettings.bUseLobbiesVoiceChatIfAvailable =
       (param_1->Session).SessionSettings.bUseLobbiesVoiceChatIfAvailable;
  ::FString::operator=
            (&(this->Session).SessionSettings.SessionIdOverride,
             &(param_1->Session).SessionSettings.SessionIdOverride);
  (this->Session).SessionSettings.BuildUniqueId = (param_1->Session).SessionSettings.BuildUniqueId;
  TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
               *)&(this->Session).SessionSettings.Settings,
              (TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
               *)&(param_1->Session).SessionSettings.Settings);
  pTVar1 = &(param_1->Session).SessionSettings.MemberSettings;
  this_00 = &(this->Session).SessionSettings.MemberSettings;
  if (this_00 != pTVar1) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)
               &(this->Session).SessionSettings.MemberSettings.field_0x38,
               (int *)&(this->Session).SessionSettings.MemberSettings.field_0x48,
               (ForElementType<FSetElementId> *)
               &(param_1->Session).SessionSettings.MemberSettings.field_0x38,
               *(int *)&(param_1->Session).SessionSettings.MemberSettings.field_0x48);
    TSparseArray<TSparseSetElement<TTuple<TSharedRef<FUniqueNetId_const_,1>,FOnlineKeyValuePairs<FName,FOnlineSessionSetting>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<TSharedRef<FUniqueNetId_const_,1>,FOnlineKeyValuePairs<FName,FOnlineSessionSetting>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)this_00,
                (TSparseArray<TSparseSetElement<TTuple<TSharedRef<FUniqueNetId_const_,1>,FOnlineKeyValuePairs<FName,FOnlineSessionSetting>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)pTVar1);
  }
  pTVar2 = (param_1->Session).SessionInfo.SharedReferenceCount.ReferenceController;
  pFVar4 = (param_1->Session).SessionInfo.Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = (this->Session).SessionInfo.SharedReferenceCount.ReferenceController;
  (this->Session).SessionInfo.Object = pFVar4;
  (this->Session).SessionInfo.SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  (this->Session).NumOpenPrivateConnections = (param_1->Session).NumOpenPrivateConnections;
  (this->Session).NumOpenPublicConnections = (param_1->Session).NumOpenPublicConnections;
  this->PingInMs = param_1->PingInMs;
  return this;
}

// FOnlineSessionSearchResult @ 14ecd7530

FOnlineSessionSearchResult * __thiscall
FOnlineSessionSearchResult::FOnlineSessionSearchResult
          (FOnlineSessionSearchResult *this,FOnlineSessionSearchResult *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  (this->Session)._padding_ = (longlong)&___7FOnlineSession__6B_;
  (this->Session).OwningUserId.Object = (param_1->Session).OwningUserId.Object;
  pTVar1 = (param_1->Session).OwningUserId.SharedReferenceCount.ReferenceController;
  (this->Session).OwningUserId.SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  ::FString::FString(&(this->Session).OwningUserName,&(param_1->Session).OwningUserName);
  FOnlineSessionSettings::FOnlineSessionSettings
            (&(this->Session).SessionSettings,&(param_1->Session).SessionSettings);
  (this->Session).SessionInfo.Object = (param_1->Session).SessionInfo.Object;
  pTVar1 = (param_1->Session).SessionInfo.SharedReferenceCount.ReferenceController;
  (this->Session).SessionInfo.SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->Session).NumOpenPrivateConnections = (param_1->Session).NumOpenPrivateConnections;
  (this->Session).NumOpenPublicConnections = (param_1->Session).NumOpenPublicConnections;
  this->PingInMs = param_1->PingInMs;
  return this;
}

