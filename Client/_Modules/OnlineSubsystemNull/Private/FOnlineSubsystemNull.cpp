// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemNull
// Functions: 33

// ~FOnlineSubsystemNull @ 14ed12f90

void __thiscall FOnlineSubsystemNull::~FOnlineSubsystemNull(FOnlineSubsystemNull *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MessageSanitizerInterface).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PurchaseInterface).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->StoreV2Interface).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AchievementsInterface).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ExternalUIInterface).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->IdentityInterface).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LeaderboardsInterface).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->VoiceInterface).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SessionInterface).SharedReferenceCount.ReferenceController);
  FOnlineSubsystemImpl::~FOnlineSubsystemImpl((FOnlineSubsystemImpl *)this);
  return;
}

// Exec @ 14ed22750

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
FOnlineSubsystemNull::Exec
          (FOnlineSubsystemNull *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  bool bVar1;
  
  bVar1 = FOnlineSubsystemImpl::Exec((FOnlineSubsystemImpl *)this,param_1,param_2,param_3);
  return bVar1;
}

// GetAchievementsInterface @ 14ed246b0

TSharedPtr<IOnlineAchievements,1> * __thiscall
FOnlineSubsystemNull::GetAchievementsInterface
          (FOnlineSubsystemNull *this,TSharedPtr<IOnlineAchievements,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (IOnlineAchievements *)(this->AchievementsInterface).Object;
  pTVar1 = (this->AchievementsInterface).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetAppId @ 14ed24920

FString * __thiscall
FOnlineSubsystemNull::GetAppId(FOnlineSubsystemNull *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"");
  return __return_storage_ptr__;
}

// GetChatInterface @ 14ed25090

TSharedPtr<IOnlineChat,1> * __thiscall
FOnlineSubsystemNull::GetChatInterface
          (FOnlineSubsystemNull *this,TSharedPtr<IOnlineChat,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (IOnlineChat *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetEntitlementsInterface @ 14ed25430

TSharedPtr<IOnlineEntitlements,1> * __thiscall
FOnlineSubsystemNull::GetEntitlementsInterface
          (FOnlineSubsystemNull *this,TSharedPtr<IOnlineEntitlements,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (IOnlineEntitlements *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetEventsInterface @ 14ed25450

TSharedPtr<IOnlineEvents,1> * __thiscall
FOnlineSubsystemNull::GetEventsInterface
          (FOnlineSubsystemNull *this,TSharedPtr<IOnlineEvents,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (IOnlineEvents *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetExternalUIInterface @ 14ed25470

TSharedPtr<IOnlineExternalUI,1> * __thiscall
FOnlineSubsystemNull::GetExternalUIInterface
          (FOnlineSubsystemNull *this,TSharedPtr<IOnlineExternalUI,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (IOnlineExternalUI *)(this->ExternalUIInterface).Object;
  pTVar1 = (this->ExternalUIInterface).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetFriendsInterface @ 14ed254a0

TSharedPtr<IOnlineFriends,1> * __thiscall
FOnlineSubsystemNull::GetFriendsInterface
          (FOnlineSubsystemNull *this,TSharedPtr<IOnlineFriends,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (IOnlineFriends *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetGroupsInterface @ 14ed254c0

TSharedPtr<IOnlineGroups,1> * __thiscall
FOnlineSubsystemNull::GetGroupsInterface
          (FOnlineSubsystemNull *this,TSharedPtr<IOnlineGroups,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (IOnlineGroups *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetIdentityInterface @ 14ed25540

TSharedPtr<IOnlineIdentity,1> * __thiscall
FOnlineSubsystemNull::GetIdentityInterface
          (FOnlineSubsystemNull *this,TSharedPtr<IOnlineIdentity,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (IOnlineIdentity *)(this->IdentityInterface).Object;
  pTVar1 = (this->IdentityInterface).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetLeaderboardsInterface @ 14ed25570

TSharedPtr<IOnlineLeaderboards,1> * __thiscall
FOnlineSubsystemNull::GetLeaderboardsInterface
          (FOnlineSubsystemNull *this,TSharedPtr<IOnlineLeaderboards,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (IOnlineLeaderboards *)(this->LeaderboardsInterface).Object;
  pTVar1 = (this->LeaderboardsInterface).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetMessageInterface @ 14ed25880

TSharedPtr<IOnlineMessage,1> * __thiscall
FOnlineSubsystemNull::GetMessageInterface
          (FOnlineSubsystemNull *this,TSharedPtr<IOnlineMessage,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (IOnlineMessage *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetMessageSanitizer @ 14ed258a0

TSharedPtr<IMessageSanitizer,1> * __thiscall
FOnlineSubsystemNull::GetMessageSanitizer
          (FOnlineSubsystemNull *this,TSharedPtr<IMessageSanitizer,1> *__return_storage_ptr__,
          int param_1,FString *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (IMessageSanitizer *)(this->MessageSanitizerInterface).Object;
  pTVar1 = (this->MessageSanitizerInterface).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetOnlineServiceName @ 14ed25cc0

FText * __thiscall
FOnlineSubsystemNull::GetOnlineServiceName(FOnlineSubsystemNull *this,FText *__return_storage_ptr__)

{
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"OnlineSubsystemNull",L"OnlineServiceName",L"Null");
  return __return_storage_ptr__;
}

// GetPartyInterface @ 14ed25d00

TSharedPtr<IOnlinePartySystem,1> * __thiscall
FOnlineSubsystemNull::GetPartyInterface
          (FOnlineSubsystemNull *this,TSharedPtr<IOnlinePartySystem,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (IOnlinePartySystem *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetPresenceInterface @ 14ed25ed0

TSharedPtr<IOnlinePresence,1> * __thiscall
FOnlineSubsystemNull::GetPresenceInterface
          (FOnlineSubsystemNull *this,TSharedPtr<IOnlinePresence,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (IOnlinePresence *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetPurchaseInterface @ 14ed25ef0

TSharedPtr<IOnlinePurchase,1> * __thiscall
FOnlineSubsystemNull::GetPurchaseInterface
          (FOnlineSubsystemNull *this,TSharedPtr<IOnlinePurchase,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (IOnlinePurchase *)(this->PurchaseInterface).Object;
  pTVar1 = (this->PurchaseInterface).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetSessionInterface @ 14ed26360

TSharedPtr<IOnlineSession,1> * __thiscall
FOnlineSubsystemNull::GetSessionInterface
          (FOnlineSubsystemNull *this,TSharedPtr<IOnlineSession,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (IOnlineSession *)(this->SessionInterface).Object;
  pTVar1 = (this->SessionInterface).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetSharedCloudInterface @ 14ed26550

TSharedPtr<IOnlineSharedCloud,1> * __thiscall
FOnlineSubsystemNull::GetSharedCloudInterface
          (FOnlineSubsystemNull *this,TSharedPtr<IOnlineSharedCloud,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (IOnlineSharedCloud *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetSharingInterface @ 14ed26570

TSharedPtr<IOnlineSharing,1> * __thiscall
FOnlineSubsystemNull::GetSharingInterface
          (FOnlineSubsystemNull *this,TSharedPtr<IOnlineSharing,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (IOnlineSharing *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetStatsInterface @ 14ed265c0

TSharedPtr<IOnlineStats,1> * __thiscall
FOnlineSubsystemNull::GetStatsInterface
          (FOnlineSubsystemNull *this,TSharedPtr<IOnlineStats,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (IOnlineStats *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetStoreV2Interface @ 14ed265e0

TSharedPtr<IOnlineStoreV2,1> * __thiscall
FOnlineSubsystemNull::GetStoreV2Interface
          (FOnlineSubsystemNull *this,TSharedPtr<IOnlineStoreV2,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (IOnlineStoreV2 *)(this->StoreV2Interface).Object;
  pTVar1 = (this->StoreV2Interface).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetTimeInterface @ 14ed26610

TSharedPtr<IOnlineTime,1> * __thiscall
FOnlineSubsystemNull::GetTimeInterface
          (FOnlineSubsystemNull *this,TSharedPtr<IOnlineTime,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (IOnlineTime *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetTitleFileInterface @ 14ed26630

TSharedPtr<IOnlineTitleFile,1> * __thiscall
FOnlineSubsystemNull::GetTitleFileInterface
          (FOnlineSubsystemNull *this,TSharedPtr<IOnlineTitleFile,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (IOnlineTitleFile *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetTournamentInterface @ 14ed26650

TSharedPtr<IOnlineTournament,1> * __thiscall
FOnlineSubsystemNull::GetTournamentInterface
          (FOnlineSubsystemNull *this,TSharedPtr<IOnlineTournament,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (IOnlineTournament *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetTurnBasedInterface @ 14ed26670

TSharedPtr<IOnlineTurnBased,1> * __thiscall
FOnlineSubsystemNull::GetTurnBasedInterface
          (FOnlineSubsystemNull *this,TSharedPtr<IOnlineTurnBased,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (IOnlineTurnBased *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetUserCloudInterface @ 14ed269c0

TSharedPtr<IOnlineUserCloud,1> * __thiscall
FOnlineSubsystemNull::GetUserCloudInterface
          (FOnlineSubsystemNull *this,TSharedPtr<IOnlineUserCloud,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (IOnlineUserCloud *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetUserInterface @ 14ed26a10

TSharedPtr<IOnlineUser,1> * __thiscall
FOnlineSubsystemNull::GetUserInterface
          (FOnlineSubsystemNull *this,TSharedPtr<IOnlineUser,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (IOnlineUser *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetVoiceInterface @ 14ed26ab0

TSharedPtr<IOnlineVoice,1> * __thiscall
FOnlineSubsystemNull::GetVoiceInterface
          (FOnlineSubsystemNull *this,TSharedPtr<IOnlineVoice,1> *__return_storage_ptr__)

{
  TSharedPtr<IOnlineVoice,1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  char cVar3;
  longlong local_18;
  FSharedReferencer<1> FStack_10;
  
  pTVar1 = &this->VoiceInterface;
  if ((pTVar1->Object != (IOnlineVoice *)0x0) && (this->bVoiceInterfaceInitialized == false)) {
    cVar3 = (**(code **)(pTVar1->Object->_padding_ + 0x18))();
    if (cVar3 == '\0') {
      local_18 = 0;
      FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar1 != (TSharedPtr<IOnlineVoice,1> *)&local_18) {
        pTVar1->Object = (IOnlineVoice *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->VoiceInterface).SharedReferenceCount,&FStack_10);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_10.ReferenceController);
    }
    this->bVoiceInterfaceInitialized = true;
  }
  __return_storage_ptr__->Object = pTVar1->Object;
  pTVar2 = (this->VoiceInterface).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// Init @ 14ed27040

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FOnlineSubsystemNull::Init(FOnlineSubsystemNull *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  wchar_t *pwVar4;
  FOnlineAsyncTaskManagerNull *this_00;
  FRunnableThread *pFVar5;
  FOnlineSessionNull *pFVar6;
  FOnlineIdentityNull *this_01;
  FOnlineVoiceImpl *this_02;
  FOnlineStoreV2Null *this_03;
  FMessageSanitizerNull *pFVar7;
  ForAnyElementType FVar8;
  FOnlineSessionNull *pFVar9;
  TRawPtrProxy<FOnlineSessionNull> local_res8;
  TRawPtrProxy<FOnlineLeaderboardsNull> local_res10;
  TRawPtrProxy<FOnlineIdentityNull> local_res18;
  TRawPtrProxy<FOnlineExternalUINull> local_res20;
  TRawPtrProxy<FOnlineAchievementsNull> local_98;
  TRawPtrProxy<FOnlineVoiceImpl> local_90;
  TRawPtrProxy<FOnlineStoreV2Null> local_88;
  TRawPtrProxy<FOnlinePurchaseNull> local_80;
  TRawPtrProxy<FMessageSanitizerNull> local_78;
  FString local_70;
  FString local_60;
  FString local_50;
  
  if (!bLoadedConfig) {
    bLoadedConfig = true;
    FConfigCacheIni::GetBool
              (GConfig,L"OnlineSubsystemNull",L"bAutoLoginAtStartup",&bAutoLoginAtStartup,
               &GEngineIni);
    FConfigCacheIni::GetBool
              (GConfig,L"OnlineSubsystemNull",L"bSupportExternalUI",&bSupportExternalUI,&GEngineIni)
    ;
    FConfigCacheIni::GetBool
              (GConfig,L"OnlineSubsystemNull",L"bRequireShowLoginUI",&bRequireShowLoginUI,
               &GEngineIni);
    FConfigCacheIni::GetBool
              (GConfig,L"OnlineSubsystemNull",L"bForceShowLoginUIUserChange",
               &bForceShowLoginUIUserChange,&GEngineIni);
    FConfigCacheIni::GetBool
              (GConfig,L"OnlineSubsystemNull",L"bRequireLoginCredentials",&bRequireLoginCredentials,
               &GEngineIni);
    FConfigCacheIni::GetBool
              (GConfig,L"OnlineSubsystemNull",L"bAddUserNumToNullId",&bAddUserNumToNullId,
               &GEngineIni);
    FConfigCacheIni::GetBool
              (GConfig,L"OnlineSubsystemNull",L"bForceStableNullId",&bForceStableNullId,&GEngineIni)
    ;
    FConfigCacheIni::GetBool
              (GConfig,L"OnlineSubsystemNull",L"bForceOfflineMode",&bForceOfflineMode,&GEngineIni);
    FConfigCacheIni::GetBool
              (GConfig,L"OnlineSubsystemNull",L"bOnlineRequiresSecondLogin",
               &bOnlineRequiresSecondLogin,&GEngineIni);
    pwVar4 = FCommandLine::Get();
    bVar2 = FParse::Param(pwVar4,L"StableNullID");
    if (bVar2) {
      bForceStableNullId = true;
    }
  }
  this_00 = ::operator_new(0x180);
  pFVar9 = (FOnlineSessionNull *)0x0;
  if (this_00 == (FOnlineAsyncTaskManagerNull *)0x0) {
    this->OnlineAsyncTaskThreadRunnable = (FOnlineAsyncTaskManagerNull *)0x0;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OnlineAsyncTaskThreadRunnable",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemNull\\Source\\Private\\OnlineSubsystemNull.cpp"
                       ,0x12a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  else {
    FOnlineAsyncTaskManager::FOnlineAsyncTaskManager((FOnlineAsyncTaskManager *)this_00);
    this_00->NullSubsystem = this;
    this_00->_padding_ = (longlong)&FOnlineAsyncTaskManagerNull::_vftable__for__FRunnable__;
    this_00->_padding_ =
         (longlong)&FOnlineAsyncTaskManagerNull::_vftable__for__FSingleThreadRunnable__;
    this->OnlineAsyncTaskThreadRunnable = this_00;
  }
  LOCK();
  TaskCounter.Counter = TaskCounter.Counter + 1;
  UNLOCK();
  ::FName::ToString((FName *)&this->_padding_,&local_50);
  ::FString::PrintfImpl(&local_70,L"OnlineAsyncTaskThreadNull %s(%d)");
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_70.Data.ArrayNum != 0) {
    FVar8.Data = local_70.Data.AllocatorInstance.Data;
  }
  pFVar5 = FForkProcessHelper::CreateForkableThread
                     ((FRunnable *)this->OnlineAsyncTaskThreadRunnable,(wchar_t *)FVar8.Data,0x20000
                      ,TPri_Normal,0xffffffffffffffff,None,false);
  this->OnlineAsyncTaskThread = pFVar5;
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  if ((this->OnlineAsyncTaskThread == (FRunnableThread *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("OnlineAsyncTaskThread",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemNull\\Source\\Private\\OnlineSubsystemNull.cpp"
                         ,300,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if (5 < (byte)LogOnline._0_1_) {
    ::FString::PrintfImpl(&local_60,L"Created thread (ID:%d).");
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
  }
  pFVar6 = ::operator_new(0x4b0);
  local_res8.Object = pFVar9;
  if (pFVar6 != (FOnlineSessionNull *)0x0) {
    IOnlineSession::IOnlineSession((IOnlineSession *)pFVar6);
    pFVar6->NullSubsystem = this;
    pFVar6->_padding_ = (longlong)&___7FOnlineSessionNull__6B_;
    (pFVar6->LANSessionManager).LanAnnouncePort = 0x36b1;
    (pFVar6->LANSessionManager).LanGameUniqueId = 9999;
    (pFVar6->LANSessionManager)._padding_ = (longlong)&___7FLANSession__6B_;
    (pFVar6->LANSessionManager).LanPacketPlatformMask = -1;
    (pFVar6->LANSessionManager).LanQueryTimeout = 5.0;
    (pFVar6->LANSessionManager).LanQueryRetryTime = 1.0;
    (pFVar6->LANSessionManager).LanBeacon = (FLanBeacon *)0x0;
    (pFVar6->LANSessionManager).LanBeaconState = NotUsingLanBeacon;
    (pFVar6->LANSessionManager).LanNonce = 0;
    (pFVar6->LANSessionManager).LanQueryTimeLeft = 0.0;
    (pFVar6->LANSessionManager).LanQueryRetryTimeLeft = 0.0;
    (pFVar6->LANSessionManager).RetryData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->LANSessionManager).RetryData.ArrayNum = 0;
    (pFVar6->LANSessionManager).RetryData.ArrayMax = 0;
    (pFVar6->LANSessionManager).LanBeaconGuid.A = 0;
    (pFVar6->LANSessionManager).LanBeaconGuid.B = 0;
    (pFVar6->LANSessionManager).LanBeaconGuid.C = 0;
    (pFVar6->LANSessionManager).LanBeaconGuid.D = 0;
    *(undefined8 *)&(pFVar6->LANSessionManager).CachedResponseGuids.Elements = 0;
    *(undefined8 *)&(pFVar6->LANSessionManager).CachedResponseGuids.Elements.field_0x8 = 0;
    *(undefined8 *)&(pFVar6->LANSessionManager).CachedResponseGuids.Elements.field_0x20 = 0;
    *(undefined4 *)&(pFVar6->LANSessionManager).CachedResponseGuids.Elements.field_0x28 = 0;
    *(undefined4 *)&(pFVar6->LANSessionManager).CachedResponseGuids.Elements.field_0x2c = 0x80;
    *(undefined4 *)&(pFVar6->LANSessionManager).CachedResponseGuids.Elements.field_0x30 = 0xffffffff
    ;
    *(undefined4 *)&(pFVar6->LANSessionManager).CachedResponseGuids.Elements.field_0x34 = 0;
    (pFVar6->LANSessionManager).CachedResponseGuids.Hash.SecondaryData =
         (ForElementType<FSetElementId>)0x0;
    (pFVar6->LANSessionManager).CachedResponseGuids.HashSize = 0;
    *(undefined8 *)&(pFVar6->LANSessionManager).OnValidQueryPacketDelegates = 0;
    *(undefined8 *)&(pFVar6->LANSessionManager).OnValidQueryPacketDelegates.field_0x8 = 0;
    *(undefined8 *)&(pFVar6->LANSessionManager).OnValidQueryPacketDelegates.field_0x10 = 0;
    *(undefined8 *)&(pFVar6->LANSessionManager).OnValidQueryPacketDelegates.field_0x18 = 2;
    *(undefined8 *)&(pFVar6->LANSessionManager).OnValidResponsePacketDelegates = 0;
    *(undefined8 *)&(pFVar6->LANSessionManager).OnValidResponsePacketDelegates.field_0x8 = 0;
    *(undefined8 *)&(pFVar6->LANSessionManager).OnValidResponsePacketDelegates.field_0x10 = 0;
    *(undefined8 *)&(pFVar6->LANSessionManager).OnValidResponsePacketDelegates.field_0x18 = 2;
    *(undefined8 *)&(pFVar6->LANSessionManager).OnSearchTimeoutDelegates = 0;
    *(undefined8 *)&(pFVar6->LANSessionManager).OnSearchTimeoutDelegates.field_0x8 = 0;
    *(undefined8 *)&(pFVar6->LANSessionManager).OnSearchTimeoutDelegates.field_0x10 = 0;
    *(undefined8 *)&(pFVar6->LANSessionManager).OnSearchTimeoutDelegates.field_0x18 = 2;
    bVar2 = FConfigCacheIni::GetInt
                      (GConfig,L"LANSession",L"LanAnnouncePort",
                       &(pFVar6->LANSessionManager).LanAnnouncePort,&GEngineIni);
    if (!bVar2) {
      (pFVar6->LANSessionManager).LanAnnouncePort = 0x36b1;
    }
    bVar2 = FConfigCacheIni::GetInt
                      (GConfig,L"LANSession",L"LanGameUniqueId",
                       &(pFVar6->LANSessionManager).LanGameUniqueId,&GEngineIni);
    if (!bVar2) {
      (pFVar6->LANSessionManager).LanGameUniqueId = 9999;
    }
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pFVar6->SessionLock,4000);
    (pFVar6->Sessions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->Sessions).ArrayNum = 0;
    (pFVar6->Sessions).ArrayMax = 0;
    (pFVar6->CurrentSessionSearch).Object = (FOnlineSessionSearch *)0x0;
    (pFVar6->CurrentSessionSearch).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pFVar6->SessionSearchStartInSeconds = 0.0;
    local_res8.Object = pFVar6;
  }
  TSharedPtr<FOnlineSessionNull,1>::operator=<FOnlineSessionNull>
            (&this->SessionInterface,&local_res8);
  pFVar6 = ::operator_new(0xa0);
  local_res10.Object = (FOnlineLeaderboardsNull *)pFVar9;
  if (pFVar6 != (FOnlineSessionNull *)0x0) {
    *(undefined8 *)&pFVar6->_padding_ = 0;
    pFVar6->_padding_ = (longlong)&___7FOnlineLeaderboardsNull__6B_;
    pFVar6->_padding_ = 0;
    pFVar6->_padding_ = 0;
    pFVar6->_padding_ = 2;
    *(undefined8 *)&pFVar6->_padding_ = 0;
    pFVar6->_padding_ = 0;
    pFVar6->_padding_ = 0;
    pFVar6->_padding_ = 2;
    *(FOnlineSubsystemNull **)&pFVar6->_padding_ = this;
    pFVar6->_padding_ = 0;
    pFVar6->_padding_ = 0;
    pFVar6->_padding_ = 0;
    *(undefined4 *)&pFVar6->_padding_ = 0;
    *(undefined4 *)((longlong)&pFVar6->_padding_ + 4) = 0x80;
    *(undefined4 *)&pFVar6->_padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pFVar6->_padding_ + 4) = 0;
    pFVar6->_padding_ = 0;
    *(undefined4 *)&pFVar6->_padding_ = 0;
    local_res10.Object = (FOnlineLeaderboardsNull *)pFVar6;
  }
  TSharedPtr<FOnlineLeaderboardsNull,1>::operator=<FOnlineLeaderboardsNull>
            (&this->LeaderboardsInterface,&local_res10);
  this_01 = ::operator_new(0x2b0);
  local_res18.Object = (FOnlineIdentityNull *)pFVar9;
  if (this_01 != (FOnlineIdentityNull *)0x0) {
    local_res18.Object = FOnlineIdentityNull::FOnlineIdentityNull(this_01,this);
  }
  TSharedPtr<FOnlineIdentityNull,1>::operator=<FOnlineIdentityNull>
            (&this->IdentityInterface,&local_res18);
  if (bSupportExternalUI != false) {
    pFVar6 = ::operator_new(0x70);
    local_res20.Object = (FOnlineExternalUINull *)pFVar9;
    if (pFVar6 != (FOnlineSessionNull *)0x0) {
      *(undefined8 *)&pFVar6->_padding_ = 0;
      pFVar6->_padding_ = (longlong)&___7FOnlineExternalUINull__6B_;
      pFVar6->_padding_ = 0;
      pFVar6->_padding_ = 0;
      pFVar6->_padding_ = 2;
      *(undefined8 *)&pFVar6->_padding_ = 0;
      pFVar6->_padding_ = 0;
      pFVar6->_padding_ = 0;
      pFVar6->_padding_ = 2;
      *(undefined8 *)&pFVar6->_padding_ = 0;
      pFVar6->_padding_ = 0;
      pFVar6->_padding_ = 0;
      pFVar6->_padding_ = 2;
      *(FOnlineSubsystemNull **)&pFVar6->_padding_ = this;
      local_res20.Object = (FOnlineExternalUINull *)pFVar6;
    }
    TSharedPtr<FOnlineExternalUINull,1>::operator=<FOnlineExternalUINull>
              (&this->ExternalUIInterface,&local_res20);
  }
  local_98.Object = ::operator_new(0xe0);
  if (local_98.Object == (FOnlineAchievementsNull *)0x0) {
    local_98.Object = (FOnlineAchievementsNull *)0x0;
  }
  else {
    (local_98.Object)->_padding_ = 0;
    (local_98.Object)->_padding_ = 0;
    (local_98.Object)->_padding_ = 0;
    (local_98.Object)->_padding_ = 2;
    (local_98.Object)->NullSubsystem = this;
    *(undefined8 *)&(local_98.Object)->PlayerAchievements = 0;
    *(undefined8 *)&((local_98.Object)->PlayerAchievements).field_0x8 = 0;
    *(undefined8 *)&((local_98.Object)->PlayerAchievements).field_0x20 = 0;
    (local_98.Object)->_padding_ = (longlong)&___7FOnlineAchievementsNull__6B_;
    *(undefined4 *)&((local_98.Object)->PlayerAchievements).field_0x28 = 0;
    *(undefined4 *)&((local_98.Object)->PlayerAchievements).field_0x2c = 0x80;
    *(undefined4 *)&((local_98.Object)->PlayerAchievements).field_0x30 = 0xffffffff;
    *(undefined4 *)&((local_98.Object)->PlayerAchievements).field_0x34 = 0;
    *(undefined8 *)&((local_98.Object)->PlayerAchievements).field_0x40 = 0;
    *(undefined4 *)&((local_98.Object)->PlayerAchievements).field_0x48 = 0;
    *(undefined8 *)&(local_98.Object)->AchievementDescriptions = 0;
    *(undefined8 *)&((local_98.Object)->AchievementDescriptions).field_0x8 = 0;
    *(undefined8 *)&((local_98.Object)->AchievementDescriptions).field_0x20 = 0;
    *(undefined4 *)&((local_98.Object)->AchievementDescriptions).field_0x28 = 0;
    *(undefined4 *)&((local_98.Object)->AchievementDescriptions).field_0x2c = 0x80;
    *(undefined4 *)&((local_98.Object)->AchievementDescriptions).field_0x30 = 0xffffffff;
    *(undefined4 *)&((local_98.Object)->AchievementDescriptions).field_0x34 = 0;
    *(undefined8 *)&((local_98.Object)->AchievementDescriptions).field_0x40 = 0;
    *(undefined4 *)&((local_98.Object)->AchievementDescriptions).field_0x48 = 0;
    ((local_98.Object)->Achievements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    ((local_98.Object)->Achievements).ArrayNum = 0;
    ((local_98.Object)->Achievements).ArrayMax = 0;
    if (((local_98.Object)->NullSubsystem == (FOnlineSubsystemNull *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("NullSubsystem",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemNull\\Source\\Private\\OnlineAchievementsInterfaceNull.cpp"
                           ,10,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  TSharedPtr<FOnlineAchievementsNull,1>::operator=<FOnlineAchievementsNull>
            (&this->AchievementsInterface,&local_98);
  this_02 = ::operator_new(0xf0);
  local_90.Object = (FOnlineVoiceImpl *)pFVar9;
  if (this_02 != (FOnlineVoiceImpl *)0x0) {
    local_90.Object = FOnlineVoiceImpl::FOnlineVoiceImpl(this_02,(IOnlineSubsystem *)this);
  }
  TSharedPtr<IOnlineVoice,1>::operator=<FOnlineVoiceImpl>(&this->VoiceInterface,&local_90);
  this_03 = ::operator_new(0x90);
  if (this_03 == (FOnlineStoreV2Null *)0x0) {
    local_88.Object = (FOnlineStoreV2Null *)0x0;
  }
  else {
    local_88.Object = FOnlineStoreV2Null::FOnlineStoreV2Null(this_03,this);
    if ((((local_88.Object != (FOnlineStoreV2Null *)0x0) && ((local_88.Object)->_padding_ != 0)) &&
        ((local_88.Object)->_padding_ != 0)) &&
       ((0 < *(int *)((local_88.Object)->_padding_ + 8) &&
        (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                           ("!InObject || !InObject->DoesSharedInstanceExist()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x7a5,L"Trying to share an already-shared object"), bVar2)))) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  TSharedPtr<FOnlineStoreV2Null,1>::operator=<FOnlineStoreV2Null>(&this->StoreV2Interface,&local_88)
  ;
  pFVar6 = ::operator_new(200);
  if (pFVar6 != (FOnlineSessionNull *)0x0) {
    *(undefined8 *)&pFVar6->_padding_ = 0;
    pFVar6->_padding_ = 0;
    pFVar6->_padding_ = 0;
    pFVar6->_padding_ = 2;
    *(undefined8 *)&pFVar6->_padding_ = 0;
    pFVar6->_padding_ = 0;
    pFVar6->_padding_ = (longlong)&___7FOnlinePurchaseNull__6B_;
    pFVar6->_padding_ = (longlong)this;
    pFVar6->_padding_ = 0;
    *(undefined8 *)&pFVar6->_padding_ = 0;
    pFVar6->_padding_ = 0;
    *(undefined4 *)&pFVar6->_padding_ = 0;
    *(undefined4 *)
     &((TMulticastDelegate<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *)&pFVar6->_padding_
      )->field_0x4 = 0x80;
    *(undefined4 *)&pFVar6->_padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pFVar6->_padding_ + 4) = 0;
    pFVar6->_padding_ = 0;
    *(undefined4 *)&pFVar6->_padding_ = 0;
    *(undefined1 *)&pFVar6->_padding_ = 0;
    *(undefined1 *)&pFVar6->_padding_ = 0;
    pFVar6->_padding_ = 0;
    pFVar9 = pFVar6;
  }
  local_80.Object = (FOnlinePurchaseNull *)pFVar9;
  TSharedPtr<FOnlinePurchaseNull,1>::operator=<FOnlinePurchaseNull>
            (&this->PurchaseInterface,&local_80);
  pFVar7 = ::operator_new(0x80);
  if (pFVar7 == (FMessageSanitizerNull *)0x0) {
    pFVar7 = (FMessageSanitizerNull *)0x0;
  }
  else {
    pFVar7->_padding_ = 0;
    pFVar7->_padding_ = 0;
    pFVar7->_padding_ = (longlong)&___7IMessageSanitizer__6B_;
    ::FString::FString((FString *)&pFVar7->_padding_,L"␞");
    pFVar7->RequestId = 0;
    pFVar7->_padding_ = (longlong)&___7FMessageSanitizerNull__6B_;
    *(undefined8 *)&pFVar7->RequestIdHandleMap = 0;
    *(undefined8 *)&(pFVar7->RequestIdHandleMap).field_0x8 = 0;
    *(undefined8 *)&(pFVar7->RequestIdHandleMap).field_0x20 = 0;
    *(undefined4 *)&(pFVar7->RequestIdHandleMap).field_0x28 = 0;
    *(undefined4 *)&(pFVar7->RequestIdHandleMap).field_0x2c = 0x80;
    *(undefined4 *)&(pFVar7->RequestIdHandleMap).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar7->RequestIdHandleMap).field_0x34 = 0;
    *(undefined8 *)&(pFVar7->RequestIdHandleMap).field_0x40 = 0;
    *(undefined4 *)&(pFVar7->RequestIdHandleMap).field_0x48 = 0;
    if (((pFVar7->_padding_ != 0) && (pFVar7->_padding_ != 0)) &&
       ((0 < *(int *)(pFVar7->_padding_ + 8) &&
        (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                           ("!InObject || !InObject->DoesSharedInstanceExist()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x7a5,L"Trying to share an already-shared object"), bVar2)))) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_78.Object = pFVar7;
  TSharedPtr<FMessageSanitizerNull,1>::operator=<FMessageSanitizerNull>
            (&this->MessageSanitizerInterface,&local_78);
  return true;
}

// Shutdown @ 14ed2f140

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FOnlineSubsystemNull::Shutdown(FOnlineSubsystemNull *this)

{
  TSharedPtr<FOnlinePurchaseNull,1> *pTVar1;
  TSharedPtr<FOnlineStoreV2Null,1> *pTVar2;
  TSharedPtr<FOnlineAchievementsNull,1> *pTVar3;
  TSharedPtr<FOnlineIdentityNull,1> *pTVar4;
  TSharedPtr<FOnlineLeaderboardsNull,1> *pTVar5;
  TSharedPtr<FOnlineSessionNull,1> *pTVar6;
  TSharedPtr<FMessageSanitizerNull,1> *pTVar7;
  IOnlineVoice *pIVar8;
  TReferenceControllerBase<1> *pTVar9;
  code *pcVar10;
  bool bVar11;
  undefined1 uVar12;
  FString local_98;
  longlong local_88;
  FSharedReferencer<1> FStack_80;
  longlong local_78;
  FSharedReferencer<1> FStack_70;
  undefined8 local_68;
  FSharedReferencer<1> FStack_60;
  longlong local_58;
  FSharedReferencer<1> FStack_50;
  longlong local_48;
  FSharedReferencer<1> FStack_40;
  longlong local_38;
  FSharedReferencer<1> FStack_30;
  longlong local_28;
  FSharedReferencer<1> FStack_20;
  longlong local_18;
  FSharedReferencer<1> FStack_10;
  
  if (6 < (byte)LogOnline._0_1_) {
    ::FString::PrintfImpl(&local_98,L"FOnlineSubsystemNull::Shutdown()");
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  FOnlineSubsystemImpl::Shutdown((FOnlineSubsystemImpl *)this);
  if (this->OnlineAsyncTaskThread != (FRunnableThread *)0x0) {
    (**(code **)(this->OnlineAsyncTaskThread->_padding_ + 0x30))();
    this->OnlineAsyncTaskThread = (FRunnableThread *)0x0;
  }
  if (this->OnlineAsyncTaskThreadRunnable != (FOnlineAsyncTaskManagerNull *)0x0) {
    (**(code **)(this->OnlineAsyncTaskThreadRunnable->_padding_ + 0x28))();
    this->OnlineAsyncTaskThreadRunnable = (FOnlineAsyncTaskManagerNull *)0x0;
  }
  pIVar8 = (this->VoiceInterface).Object;
  if ((pIVar8 != (IOnlineVoice *)0x0) && (this->bVoiceInterfaceInitialized != false)) {
    (**(code **)(pIVar8->_padding_ + 0x10))();
  }
  pTVar1 = &this->PurchaseInterface;
  if (pTVar1->Object != (FOnlinePurchaseNull *)0x0) {
    pTVar9 = (this->PurchaseInterface).SharedReferenceCount.ReferenceController;
    if (((pTVar9 == (TReferenceControllerBase<1> *)0x0) ||
        (pTVar9->SharedReferenceCount != (atomic<int>)0x1)) &&
       (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<4019359459364045160>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemNull\\Source\\Private\\OnlineSubsystemNull.cpp"
                            ,0x168,"PurchaseInterface.IsUnique()"), bVar11)) {
      pcVar10 = (code *)swi(3);
      uVar12 = (*pcVar10)();
      return (bool)uVar12;
    }
    local_88 = 0;
    FStack_80.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar1 != (TSharedPtr<FOnlinePurchaseNull,1> *)&local_88) {
      pTVar1->Object = (FOnlinePurchaseNull *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->PurchaseInterface).SharedReferenceCount,&FStack_80);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_80.ReferenceController);
  }
  pTVar2 = &this->StoreV2Interface;
  if (pTVar2->Object != (FOnlineStoreV2Null *)0x0) {
    pTVar9 = (this->StoreV2Interface).SharedReferenceCount.ReferenceController;
    if (((pTVar9 == (TReferenceControllerBase<1> *)0x0) ||
        (pTVar9->SharedReferenceCount != (atomic<int>)0x1)) &&
       (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<4019359459364045161>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemNull\\Source\\Private\\OnlineSubsystemNull.cpp"
                            ,0x169,"StoreV2Interface.IsUnique()"), bVar11)) {
      pcVar10 = (code *)swi(3);
      uVar12 = (*pcVar10)();
      return (bool)uVar12;
    }
    local_78 = 0;
    FStack_70.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar2 != (TSharedPtr<FOnlineStoreV2Null,1> *)&local_78) {
      pTVar2->Object = (FOnlineStoreV2Null *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->StoreV2Interface).SharedReferenceCount,&FStack_70);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_70.ReferenceController);
  }
  if ((this->VoiceInterface).Object != (IOnlineVoice *)0x0) {
    pTVar9 = (this->VoiceInterface).SharedReferenceCount.ReferenceController;
    if (((pTVar9 == (TReferenceControllerBase<1> *)0x0) ||
        (pTVar9->SharedReferenceCount != (atomic<int>)0x1)) &&
       (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<4019359459364045162>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemNull\\Source\\Private\\OnlineSubsystemNull.cpp"
                            ,0x16a,"VoiceInterface.IsUnique()"), bVar11)) {
      pcVar10 = (code *)swi(3);
      uVar12 = (*pcVar10)();
      return (bool)uVar12;
    }
    local_68 = 0;
    FStack_60.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->VoiceInterface != (TSharedPtr<IOnlineVoice,1> *)&local_68) {
      (this->VoiceInterface).Object = (IOnlineVoice *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->VoiceInterface).SharedReferenceCount,&FStack_60);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_60.ReferenceController);
  }
  pTVar3 = &this->AchievementsInterface;
  if (pTVar3->Object != (FOnlineAchievementsNull *)0x0) {
    pTVar9 = (this->AchievementsInterface).SharedReferenceCount.ReferenceController;
    if (((pTVar9 == (TReferenceControllerBase<1> *)0x0) ||
        (pTVar9->SharedReferenceCount != (atomic<int>)0x1)) &&
       (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<4019359459364045163>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemNull\\Source\\Private\\OnlineSubsystemNull.cpp"
                            ,0x16b,"AchievementsInterface.IsUnique()"), bVar11)) {
      pcVar10 = (code *)swi(3);
      uVar12 = (*pcVar10)();
      return (bool)uVar12;
    }
    local_58 = 0;
    FStack_50.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar3 != (TSharedPtr<FOnlineAchievementsNull,1> *)&local_58) {
      pTVar3->Object = (FOnlineAchievementsNull *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->AchievementsInterface).SharedReferenceCount,&FStack_50);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_50.ReferenceController);
  }
  pTVar4 = &this->IdentityInterface;
  if (pTVar4->Object != (FOnlineIdentityNull *)0x0) {
    pTVar9 = (this->IdentityInterface).SharedReferenceCount.ReferenceController;
    if (((pTVar9 == (TReferenceControllerBase<1> *)0x0) ||
        (pTVar9->SharedReferenceCount != (atomic<int>)0x1)) &&
       (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<4019359459364045164>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemNull\\Source\\Private\\OnlineSubsystemNull.cpp"
                            ,0x16c,"IdentityInterface.IsUnique()"), bVar11)) {
      pcVar10 = (code *)swi(3);
      uVar12 = (*pcVar10)();
      return (bool)uVar12;
    }
    local_48 = 0;
    FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar4 != (TSharedPtr<FOnlineIdentityNull,1> *)&local_48) {
      pTVar4->Object = (FOnlineIdentityNull *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->IdentityInterface).SharedReferenceCount,&FStack_40);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_40.ReferenceController);
  }
  pTVar5 = &this->LeaderboardsInterface;
  if (pTVar5->Object != (FOnlineLeaderboardsNull *)0x0) {
    pTVar9 = (this->LeaderboardsInterface).SharedReferenceCount.ReferenceController;
    if (((pTVar9 == (TReferenceControllerBase<1> *)0x0) ||
        (pTVar9->SharedReferenceCount != (atomic<int>)0x1)) &&
       (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<4019359459364045165>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemNull\\Source\\Private\\OnlineSubsystemNull.cpp"
                            ,0x16d,"LeaderboardsInterface.IsUnique()"), bVar11)) {
      pcVar10 = (code *)swi(3);
      uVar12 = (*pcVar10)();
      return (bool)uVar12;
    }
    local_38 = 0;
    FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar5 != (TSharedPtr<FOnlineLeaderboardsNull,1> *)&local_38) {
      pTVar5->Object = (FOnlineLeaderboardsNull *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->LeaderboardsInterface).SharedReferenceCount,&FStack_30);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_30.ReferenceController);
  }
  pTVar6 = &this->SessionInterface;
  if (pTVar6->Object != (FOnlineSessionNull *)0x0) {
    pTVar9 = (this->SessionInterface).SharedReferenceCount.ReferenceController;
    if (((pTVar9 == (TReferenceControllerBase<1> *)0x0) ||
        (pTVar9->SharedReferenceCount != (atomic<int>)0x1)) &&
       (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<4019359459364045166>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemNull\\Source\\Private\\OnlineSubsystemNull.cpp"
                            ,0x16e,"SessionInterface.IsUnique()"), bVar11)) {
      pcVar10 = (code *)swi(3);
      uVar12 = (*pcVar10)();
      return (bool)uVar12;
    }
    local_28 = 0;
    FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar6 != (TSharedPtr<FOnlineSessionNull,1> *)&local_28) {
      pTVar6->Object = (FOnlineSessionNull *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->SessionInterface).SharedReferenceCount,&FStack_20);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_20.ReferenceController);
  }
  pTVar7 = &this->MessageSanitizerInterface;
  if (pTVar7->Object != (FMessageSanitizerNull *)0x0) {
    pTVar9 = (this->MessageSanitizerInterface).SharedReferenceCount.ReferenceController;
    if (((pTVar9 == (TReferenceControllerBase<1> *)0x0) ||
        (pTVar9->SharedReferenceCount != (atomic<int>)0x1)) &&
       (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<4019359459364045167>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemNull\\Source\\Private\\OnlineSubsystemNull.cpp"
                            ,0x16f,"MessageSanitizerInterface.IsUnique()"), bVar11)) {
      pcVar10 = (code *)swi(3);
      uVar12 = (*pcVar10)();
      return (bool)uVar12;
    }
    local_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar7 != (TSharedPtr<FMessageSanitizerNull,1> *)&local_18) {
      pTVar7->Object = (FMessageSanitizerNull *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->MessageSanitizerInterface).SharedReferenceCount,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
  }
  return true;
}

// Tick @ 14ed2fe00

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FOnlineSubsystemNull::Tick(FOnlineSubsystemNull *this,float param_1)

{
  int *piVar1;
  FOnlineAsyncTaskManager *this_00;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<_public:_virtual_bool___cdecl_FOnlineSubsystemNull::Tick(float)_::_2_::FStat_STAT_FOnlineSubsystemNull_Tick>
  FVar8;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  LARGE_INTEGER local_res8;
  FName local_res18;
  FStatMessage local_38 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_FOnlineSubsystemNull_Tick ==
          (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_FOnlineSubsystemNull::Tick(float)_::_2_::FStat_STAT_FOnlineSubsystemNull_Tick>
           )0x0) {
        pFVar7 = ::FName::FName((FName *)&local_res8.s,"STAT_FOnlineSubsystemNull_Tick");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FOnlineSubsystemNull_Tick,*pFVar7,
                   L"STAT_FOnlineSubsystemNull_Tick","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                   true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar8 = StatPtr_STAT_FOnlineSubsystemNull_Tick;
  if (StatPtr_STAT_FOnlineSubsystemNull_Tick ==
      (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_FOnlineSubsystemNull::Tick(float)_::_2_::FStat_STAT_FOnlineSubsystemNull_Tick>
       )0x0) {
    pFVar7 = ::FName::FName(&local_res18,"STAT_FOnlineSubsystemNull_Tick");
    FVar8 = (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_FOnlineSubsystemNull::Tick(float)_::_2_::FStat_STAT_FOnlineSubsystemNull_Tick>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FOnlineSubsystemNull_Tick,
                         *pFVar7,L"STAT_FOnlineSubsystemNull_Tick","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar8;
  bVar3 = false;
  bVar5 = false;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar10.Value;
        local_res8.s.HighPart = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemNull\\Source\\Private\\OnlineSubsystemNull.cpp"
                   ,0xb0);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar10.Value;
      local_res8.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar4 = true;
      goto LAB_14ed2ff87;
    }
  }
  bVar4 = false;
  FVar11.ComparisonIndex.Value = 0;
  FVar11.Number = 0;
LAB_14ed2ff87:
  bVar6 = FOnlineSubsystemImpl::Tick((FOnlineSubsystemImpl *)this,param_1);
  if (bVar6) {
    this_00 = (FOnlineAsyncTaskManager *)(this->VoiceInterface).Object;
    if (this_00 != (FOnlineAsyncTaskManager *)0x0) {
      FOnlineAsyncTaskManager::GameTick(this_00);
    }
    if ((FOnlineSessionNull *)this->_padding_ != (FOnlineSessionNull *)0x0) {
      FOnlineSessionNull::Tick((FOnlineSessionNull *)this->_padding_,param_1);
    }
    plVar2 = (longlong *)this->_padding_;
    if ((plVar2 != (longlong *)0x0) && ((char)this->_padding_ != '\0')) {
      (**(code **)(*plVar2 + 0xe0))(plVar2,param_1);
    }
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_38[0].NameAndInfo.Index = FVar11.ComparisonIndex.Value;
      local_38[0].NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res8);
      local_38[0].StatData.Pad[4] = '\0';
      local_38[0].StatData.Pad[5] = '\0';
      local_38[0].StatData.Pad[6] = '\0';
      local_38[0].StatData.Pad[7] = '\0';
      local_38[0].StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_38[0].StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_38[0].StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_38[0].StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,local_38);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return bVar6;
}

