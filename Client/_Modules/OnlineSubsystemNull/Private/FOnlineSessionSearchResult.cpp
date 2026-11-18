// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemNull
// Functions: 1

// FOnlineSessionSearchResult @ 14ed11410

FOnlineSessionSearchResult * __thiscall
FOnlineSessionSearchResult::FOnlineSessionSearchResult
          (FOnlineSessionSearchResult *this,FOnlineSessionSearchResult *param_1)

{
  bool bVar1;
  
  (this->Session)._padding_ = (longlong)&___7FOnlineSession__6B_;
  (this->Session).OwningUserId.Object = (param_1->Session).OwningUserId.Object;
  (this->Session).OwningUserId.SharedReferenceCount.ReferenceController =
       (param_1->Session).OwningUserId.SharedReferenceCount.ReferenceController;
  (param_1->Session).OwningUserId.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->Session).OwningUserId.Object = (FUniqueNetId *)0x0;
  (this->Session).OwningUserName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Session).OwningUserName.Data.AllocatorInstance.Data =
       (param_1->Session).OwningUserName.Data.AllocatorInstance.Data;
  (param_1->Session).OwningUserName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Session).OwningUserName.Data.ArrayNum = (param_1->Session).OwningUserName.Data.ArrayNum;
  (this->Session).OwningUserName.Data.ArrayMax = (param_1->Session).OwningUserName.Data.ArrayMax;
  (param_1->Session).OwningUserName.Data.ArrayNum = 0;
  (param_1->Session).OwningUserName.Data.ArrayMax = 0;
  (this->Session).SessionSettings._padding_ = (longlong)&___7FOnlineSessionSettings__6B_;
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
  bVar1 = (param_1->Session).SessionSettings.bUseLobbiesVoiceChatIfAvailable;
  (this->Session).SessionSettings.SessionIdOverride.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Session).SessionSettings.bUseLobbiesVoiceChatIfAvailable = bVar1;
  (this->Session).SessionSettings.SessionIdOverride.Data.AllocatorInstance.Data =
       (param_1->Session).SessionSettings.SessionIdOverride.Data.AllocatorInstance.Data;
  (param_1->Session).SessionSettings.SessionIdOverride.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Session).SessionSettings.SessionIdOverride.Data.ArrayNum =
       (param_1->Session).SessionSettings.SessionIdOverride.Data.ArrayNum;
  (this->Session).SessionSettings.SessionIdOverride.Data.ArrayMax =
       (param_1->Session).SessionSettings.SessionIdOverride.Data.ArrayMax;
  (param_1->Session).SessionSettings.SessionIdOverride.Data.ArrayNum = 0;
  (param_1->Session).SessionSettings.SessionIdOverride.Data.ArrayMax = 0;
  (this->Session).SessionSettings.BuildUniqueId = (param_1->Session).SessionSettings.BuildUniqueId;
  TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
              *)&(this->Session).SessionSettings.Settings,
             (TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
              *)&(param_1->Session).SessionSettings.Settings);
  TSet<TTuple<TSharedRef<FUniqueNetId_const_,1>,FOnlineKeyValuePairs<FName,FOnlineSessionSetting>_>,TUniqueNetIdMapKeyFuncs<FOnlineKeyValuePairs<FName,FOnlineSessionSetting>_>,FDefaultSetAllocator>
  ::
  TSet<TTuple<TSharedRef<FUniqueNetId_const_,1>,FOnlineKeyValuePairs<FName,FOnlineSessionSetting>_>,TUniqueNetIdMapKeyFuncs<FOnlineKeyValuePairs<FName,FOnlineSessionSetting>_>,FDefaultSetAllocator>
            ((TSet<TTuple<TSharedRef<FUniqueNetId_const_,1>,FOnlineKeyValuePairs<FName,FOnlineSessionSetting>_>,TUniqueNetIdMapKeyFuncs<FOnlineKeyValuePairs<FName,FOnlineSessionSetting>_>,FDefaultSetAllocator>
              *)&(this->Session).SessionSettings.MemberSettings,
             (TSet<TTuple<TSharedRef<FUniqueNetId_const_,1>,FOnlineKeyValuePairs<FName,FOnlineSessionSetting>_>,TUniqueNetIdMapKeyFuncs<FOnlineKeyValuePairs<FName,FOnlineSessionSetting>_>,FDefaultSetAllocator>
              *)&(param_1->Session).SessionSettings.MemberSettings);
  (this->Session).SessionInfo.Object = (param_1->Session).SessionInfo.Object;
  (this->Session).SessionInfo.SharedReferenceCount.ReferenceController =
       (param_1->Session).SessionInfo.SharedReferenceCount.ReferenceController;
  (param_1->Session).SessionInfo.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->Session).SessionInfo.Object = (FOnlineSessionInfo *)0x0;
  (this->Session).NumOpenPrivateConnections = (param_1->Session).NumOpenPrivateConnections;
  (this->Session).NumOpenPublicConnections = (param_1->Session).NumOpenPublicConnections;
  this->PingInMs = param_1->PingInMs;
  return this;
}

