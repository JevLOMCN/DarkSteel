// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemNull
// Functions: 3

// FNamedOnlineSession @ 14ed10c30

FNamedOnlineSession * __thiscall
FNamedOnlineSession::FNamedOnlineSession
          (FNamedOnlineSession *this,FName param_1,FOnlineSession *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->_padding_ = (longlong)&___7FOnlineSession__6B_;
  this->_padding_ = (longlong)(param_2->OwningUserId).Object;
  pTVar1 = (param_2->OwningUserId).SharedReferenceCount.ReferenceController;
  this->_padding_ = (longlong)pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  ::FString::FString((FString *)&this->_padding_,&param_2->OwningUserName);
  FOnlineSessionSettings::FOnlineSessionSettings
            ((FOnlineSessionSettings *)&this->_padding_,&param_2->SessionSettings);
  this->_padding_ = (longlong)(param_2->SessionInfo).Object;
  pTVar1 = (param_2->SessionInfo).SharedReferenceCount.ReferenceController;
  this->_padding_ = (longlong)pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(int *)&this->_padding_ = param_2->NumOpenPrivateConnections;
  *(int *)((longlong)&this->_padding_ + 4) = param_2->NumOpenPublicConnections;
  this->_padding_ = (longlong)&___7FNamedOnlineSession__6B_;
  this->SessionName = param_1;
  (this->LocalOwnerId).Object = (FUniqueNetId *)0x0;
  (this->LocalOwnerId).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->RegisteredPlayers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RegisteredPlayers).ArrayNum = 0;
  (this->RegisteredPlayers).ArrayMax = 0;
  this->SessionState = NoSession;
  this->HostingPlayerNum = -1;
  this->bHosting = false;
  return this;
}

// FNamedOnlineSession @ 14ed10d30

FNamedOnlineSession * __thiscall
FNamedOnlineSession::FNamedOnlineSession
          (FNamedOnlineSession *this,FName param_1,FOnlineSessionSettings *param_2)

{
  this->_padding_ = (longlong)&___7FOnlineSession__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  FOnlineSessionSettings::FOnlineSessionSettings((FOnlineSessionSettings *)&this->_padding_,param_2)
  ;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FNamedOnlineSession__6B_;
  this->_padding_ = 0;
  this->SessionName = param_1;
  (this->LocalOwnerId).Object = (FUniqueNetId *)0x0;
  (this->LocalOwnerId).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->RegisteredPlayers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RegisteredPlayers).ArrayNum = 0;
  (this->RegisteredPlayers).ArrayMax = 0;
  this->bHosting = false;
  this->SessionState = NoSession;
  this->HostingPlayerNum = -1;
  return this;
}

// ~FNamedOnlineSession @ 14ed12a50

void __thiscall FNamedOnlineSession::~FNamedOnlineSession(FNamedOnlineSession *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FNamedOnlineSession__6B_;
  DestructItems<TSharedRef<FUniqueNetId_const_,1>,int>
            ((TSharedRef<FUniqueNetId_const_,1> *)(this->RegisteredPlayers).AllocatorInstance.Data,
             (this->RegisteredPlayers).ArrayNum);
  pFVar1 = (this->RegisteredPlayers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LocalOwnerId).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  FOnlineSessionSettings::~FOnlineSessionSettings((FOnlineSessionSettings *)&this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  return;
}

