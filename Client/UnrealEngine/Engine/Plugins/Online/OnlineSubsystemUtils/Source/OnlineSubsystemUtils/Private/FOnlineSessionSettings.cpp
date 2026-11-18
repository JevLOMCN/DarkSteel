// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 3

// FOnlineSessionSettings @ 14ec52350

FOnlineSessionSettings * __thiscall
FOnlineSessionSettings::FOnlineSessionSettings
          (FOnlineSessionSettings *this,FOnlineSessionSettings *param_1)

{
  undefined1 *puVar1;
  TMap<TSharedRef<FUniqueNetId_const_,1>,FOnlineKeyValuePairs<FName,FOnlineSessionSetting>,FDefaultSetAllocator,TUniqueNetIdMapKeyFuncs<FOnlineKeyValuePairs<FName,FOnlineSessionSetting>_>_>
  *this_00;
  
  this->_padding_ = (longlong)&___7FOnlineSessionSettings__6B_;
  this->NumPublicConnections = param_1->NumPublicConnections;
  this->NumPrivateConnections = param_1->NumPrivateConnections;
  this->bShouldAdvertise = param_1->bShouldAdvertise;
  this->bAllowJoinInProgress = param_1->bAllowJoinInProgress;
  this->bIsLANMatch = param_1->bIsLANMatch;
  this->bIsDedicated = param_1->bIsDedicated;
  this->bUsesStats = param_1->bUsesStats;
  this->bAllowInvites = param_1->bAllowInvites;
  this->bUsesPresence = param_1->bUsesPresence;
  this->bAllowJoinViaPresence = param_1->bAllowJoinViaPresence;
  this->bAllowJoinViaPresenceFriendsOnly = param_1->bAllowJoinViaPresenceFriendsOnly;
  this->bAntiCheatProtected = param_1->bAntiCheatProtected;
  this->bUseLobbiesIfAvailable = param_1->bUseLobbiesIfAvailable;
  this->bUseLobbiesVoiceChatIfAvailable = param_1->bUseLobbiesVoiceChatIfAvailable;
  ::FString::FString(&this->SessionIdOverride,&param_1->SessionIdOverride);
  this->BuildUniqueId = param_1->BuildUniqueId;
  *(undefined8 *)&(this->Settings).field_0x0 = 0;
  *(undefined8 *)&(this->Settings).field_0x8 = 0;
  *(undefined8 *)&(this->Settings).field_0x20 = 0;
  *(undefined4 *)&(this->Settings).field_0x28 = 0;
  *(undefined4 *)&(this->Settings).field_0x2c = 0x80;
  *(undefined4 *)&(this->Settings).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Settings).field_0x34 = 0;
  *(undefined8 *)&(this->Settings).field_0x40 = 0;
  *(undefined4 *)&(this->Settings).field_0x48 = 0;
  TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
               *)&this->Settings,
              (TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
               *)&param_1->Settings);
  this_00 = &this->MemberSettings;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->MemberSettings).field_0x8 = 0;
  puVar1 = &(this->MemberSettings).field_0x48;
  *(undefined8 *)&(this->MemberSettings).field_0x20 = 0;
  *(undefined4 *)&(this->MemberSettings).field_0x28 = 0;
  *(undefined4 *)&(this->MemberSettings).field_0x2c = 0x80;
  *(undefined4 *)&(this->MemberSettings).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MemberSettings).field_0x34 = 0;
  *(undefined8 *)&(this->MemberSettings).field_0x40 = 0;
  *(undefined4 *)puVar1 = 0;
  if (this_00 != &param_1->MemberSettings) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->MemberSettings).field_0x38,(int *)puVar1,
               (ForElementType<FSetElementId> *)&(param_1->MemberSettings).field_0x38,
               *(int *)&(param_1->MemberSettings).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<TSharedRef<FUniqueNetId_const_,1>,FOnlineKeyValuePairs<FName,FOnlineSessionSetting>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<TSharedRef<FUniqueNetId_const_,1>,FOnlineKeyValuePairs<FName,FOnlineSessionSetting>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)this_00,
                (TSparseArray<TSparseSetElement<TTuple<TSharedRef<FUniqueNetId_const_,1>,FOnlineKeyValuePairs<FName,FOnlineSessionSetting>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&param_1->MemberSettings);
  }
  return this;
}

// FOnlineSessionSettings @ 14ec524a0

FOnlineSessionSettings * __thiscall
FOnlineSessionSettings::FOnlineSessionSettings(FOnlineSessionSettings *this)

{
  int iVar1;
  
  this->_padding_ = (longlong)&___7FOnlineSessionSettings__6B_;
  this->NumPublicConnections = 0;
  this->NumPrivateConnections = 0;
  this->bShouldAdvertise = false;
  this->bAllowJoinInProgress = false;
  this->bIsLANMatch = false;
  this->bIsDedicated = false;
  this->bUsesStats = false;
  this->bAllowInvites = false;
  this->bUsesPresence = false;
  this->bAllowJoinViaPresence = false;
  this->bAllowJoinViaPresenceFriendsOnly = false;
  this->bAntiCheatProtected = false;
  this->bUseLobbiesIfAvailable = false;
  this->bUseLobbiesVoiceChatIfAvailable = false;
  (this->SessionIdOverride).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SessionIdOverride).Data.ArrayNum = 0;
  (this->SessionIdOverride).Data.ArrayMax = 0;
  iVar1 = GetBuildUniqueId();
  this->BuildUniqueId = iVar1;
  *(undefined8 *)&this->Settings = 0;
  *(undefined8 *)&(this->Settings).field_0x8 = 0;
  *(undefined8 *)&(this->Settings).field_0x20 = 0;
  *(undefined4 *)&(this->Settings).field_0x28 = 0;
  *(undefined4 *)&(this->Settings).field_0x2c = 0x80;
  *(undefined4 *)&(this->Settings).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Settings).field_0x34 = 0;
  *(undefined8 *)&(this->Settings).field_0x40 = 0;
  *(undefined4 *)&(this->Settings).field_0x48 = 0;
  *(undefined8 *)&this->MemberSettings = 0;
  *(undefined8 *)&(this->MemberSettings).field_0x8 = 0;
  *(undefined8 *)&(this->MemberSettings).field_0x20 = 0;
  *(undefined4 *)&(this->MemberSettings).field_0x28 = 0;
  *(undefined4 *)&(this->MemberSettings).field_0x2c = 0x80;
  *(undefined4 *)&(this->MemberSettings).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MemberSettings).field_0x34 = 0;
  *(undefined8 *)&(this->MemberSettings).field_0x40 = 0;
  *(undefined4 *)&(this->MemberSettings).field_0x48 = 0;
  return this;
}

// ~FOnlineSessionSettings @ 14ec56110

void __thiscall FOnlineSessionSettings::~FOnlineSessionSettings(FOnlineSessionSettings *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->MemberSettings).field_0x48 = 0;
  this->_padding_ = (longlong)&___7FOnlineSessionSettings__6B_;
  pvVar1 = *(void **)&(this->MemberSettings).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TSharedRef<FUniqueNetId_const_,1>,FOnlineKeyValuePairs<FName,FOnlineSessionSetting>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TSharedRef<FUniqueNetId_const_,1>,FOnlineKeyValuePairs<FName,FOnlineSessionSetting>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TSharedRef<FUniqueNetId_const_,1>,FOnlineKeyValuePairs<FName,FOnlineSessionSetting>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MemberSettings);
  *(undefined4 *)&(this->Settings).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Settings).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FOnlineSessionSetting>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FOnlineSessionSetting>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FOnlineSessionSetting>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Settings);
  pFVar2 = (this->SessionIdOverride).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

