// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommonEngineUtils
// Functions: 1

// ~FSessionsCommon @ 14f004d10

void __thiscall UE::Online::FSessionsCommon::~FSessionsCommon(FSessionsCommon *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  
  *(undefined4 *)&(this->AllSessionsById).field_0x48 = 0;
  pvVar3 = *(void **)&(this->AllSessionsById).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,TSharedRef<UE::Online::FSessionCommon,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,TSharedRef<UE::Online::FSessionCommon,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,TSharedRef<UE::Online::FSessionCommon,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AllSessionsById);
  *(undefined4 *)&(this->CurrentSessionSearchPromisesUserMap).field_0x48 = 0;
  pvVar3 = *(void **)&(this->CurrentSessionSearchPromisesUserMap).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TPromise<UE::Online::TOnlineResult<UE::Online::FFindSessions>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TPromise<UE::Online::TOnlineResult<UE::Online::FFindSessions>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TPromise<UE::Online::TOnlineResult<UE::Online::FFindSessions>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CurrentSessionSearchPromisesUserMap);
  *(undefined4 *)&(this->SearchResultsUserMap).field_0x48 = 0;
  pvVar3 = *(void **)&(this->SearchResultsUserMap).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TArray<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TArray<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TArray<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SearchResultsUserMap);
  *(undefined4 *)&(this->SessionInvitesUserMap).field_0x48 = 0;
  pvVar3 = *(void **)&(this->SessionInvitesUserMap).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SessionInvitesUserMap);
  *(undefined4 *)&(this->PresenceSessionsUserMap).field_0x48 = 0;
  pvVar3 = *(void **)&(this->PresenceSessionsUserMap).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PresenceSessionsUserMap);
  *(undefined4 *)&(this->LocalSessionsByName).field_0x48 = 0;
  pvVar3 = *(void **)&(this->LocalSessionsByName).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->LocalSessionsByName);
  *(undefined4 *)&(this->NamedSessionUserMap).field_0x48 = 0;
  pvVar3 = *(void **)&(this->NamedSessionUserMap).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NamedSessionUserMap);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SessionEvents).OnUISessionJoinRequested.DelegateRef.SharedReferenceCount.
             ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SessionEvents).OnSessionInviteReceived.DelegateRef.SharedReferenceCount.
             ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SessionEvents).OnSessionUpdated.DelegateRef.SharedReferenceCount.
             ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SessionEvents).OnSessionLeft.DelegateRef.SharedReferenceCount.
             ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SessionEvents).OnSessionJoined.DelegateRef.SharedReferenceCount.
             ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SessionEvents).OnSessionCreated.DelegateRef.SharedReferenceCount.
             ReferenceController);
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TUniquePtr<UE::Online::FOnlineAsyncOpQueueSerial,TDefaultDelete<UE::Online::FOnlineAsyncOpQueueSerial>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TUniquePtr<UE::Online::FOnlineAsyncOpQueueSerial,TDefaultDelete<UE::Online::FOnlineAsyncOpQueueSerial>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TUniquePtr<UE::Online::FOnlineAsyncOpQueueSerial,TDefaultDelete<UE::Online::FOnlineAsyncOpQueueSerial>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  FOnlineEventDelegateHandle::Unbind((FOnlineEventDelegateHandle *)&this->_padding_);
  if (this->_padding_ != 0) {
    plVar4 = &this->_padding_;
    if ((longlong *)this->_padding_ != (longlong *)0x0) {
      plVar4 = (longlong *)this->_padding_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  FOnlineAsyncOpQueue::~FOnlineAsyncOpQueue((FOnlineAsyncOpQueue *)&this->_padding_);
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  this->_padding_ = (longlong)&___7IOnlineComponent_Online_UE__6B_;
  return;
}

