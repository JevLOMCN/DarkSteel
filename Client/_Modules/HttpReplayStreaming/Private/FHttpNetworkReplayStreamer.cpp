// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HttpReplayStreaming
// Functions: 101

// FHttpNetworkReplayStreamer @ 146cb6000

FHttpNetworkReplayStreamer * __thiscall
FHttpNetworkReplayStreamer::FHttpNetworkReplayStreamer(FHttpNetworkReplayStreamer *this)

{
  INetworkReplayStreamer::INetworkReplayStreamer((INetworkReplayStreamer *)this);
  this->_padding_ = (longlong)&___7FHttpNetworkReplayStreamer__6B_;
  FArchiveState::FArchiveState((FArchiveState *)&this->HeaderArchive);
  (this->HeaderArchive)._padding_ = (longlong)&___7FHttpStreamFArchive__6B_;
  (this->HeaderArchive).Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HeaderArchive).Buffer.ArrayNum = 0;
  (this->HeaderArchive).Buffer.ArrayMax = 0;
  (this->HeaderArchive).Pos = 0;
  (this->HeaderArchive).bAtEndOfReplay = false;
  FArchiveState::FArchiveState((FArchiveState *)&this->StreamArchive);
  (this->StreamArchive)._padding_ = (longlong)&___7FHttpStreamFArchive__6B_;
  (this->StreamArchive).Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StreamArchive).Buffer.ArrayNum = 0;
  (this->StreamArchive).Buffer.ArrayMax = 0;
  (this->StreamArchive).Pos = 0;
  (this->StreamArchive).bAtEndOfReplay = false;
  FArchiveState::FArchiveState((FArchiveState *)&this->CheckpointArchive);
  (this->CheckpointArchive)._padding_ = (longlong)&___7FHttpStreamFArchive__6B_;
  (this->CheckpointArchive).Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CheckpointArchive).Buffer.ArrayNum = 0;
  (this->CheckpointArchive).Buffer.ArrayMax = 0;
  (this->CheckpointArchive).Pos = 0;
  (this->CheckpointArchive).bAtEndOfReplay = false;
  (this->ServerURL).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ServerURL).Data.ArrayNum = 0;
  (this->ServerURL).Data.ArrayMax = 0;
  (this->CheckpointList)._padding_ = (longlong)&___7FReplayEventList__6B_;
  (this->SessionName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SessionName).Data.ArrayNum = 0;
  (this->SessionName).Data.ArrayMax = 0;
  (this->ReplayVersion).AppString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReplayVersion).AppString.Data.ArrayNum = 0;
  (this->ReplayVersion).AppString.Data.ArrayMax = 0;
  (this->ReplayVersion).NetworkVersion = 0;
  (this->ReplayVersion).Changelist = 0;
  (this->StreamMetadata).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StreamMetadata).Data.ArrayNum = 0;
  (this->StreamMetadata).Data.ArrayMax = 0;
  (this->ViewerName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ViewerName).Data.ArrayNum = 0;
  (this->ViewerName).Data.ArrayMax = 0;
  *(undefined8 *)&this->StartStreamingDelegate = 0;
  *(undefined8 *)&(this->StartStreamingDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->StartStreamingDelegate).field_0x10 = 0;
  *(undefined8 *)&this->GotoCheckpointDelegate = 0;
  *(undefined8 *)&(this->GotoCheckpointDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->GotoCheckpointDelegate).field_0x10 = 0;
  (this->CheckpointList).ReplayEvents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CheckpointList).ReplayEvents.ArrayNum = 0;
  (this->CheckpointList).ReplayEvents.ArrayMax = 0;
  (this->QueuedHttpRequests).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QueuedHttpRequests).ArrayNum = 0;
  (this->QueuedHttpRequests).ArrayMax = 0;
  (this->InFlightHttpRequest).Object = (FQueuedHttpRequest *)0x0;
  (this->InFlightHttpRequest).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&(this->EventGroupSet).Elements = 0;
  *(undefined8 *)&(this->EventGroupSet).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->EventGroupSet).Elements.field_0x20 = 0;
  this->StreamChunkIndex = 0;
  this->LastChunkTime = 0.0;
  this->LastRefreshViewerTime = 0.0;
  this->LastRefreshCheckpointTime = 0.0;
  this->StreamerState = Idle;
  this->bStopStreamingCalled = false;
  this->bStreamIsLive = false;
  this->NumTotalStreamChunks = 0;
  this->TotalDemoTimeInMS = 0;
  this->StreamTimeRangeStart = 0;
  this->StreamTimeRangeEnd = 0;
  this->HighPriorityEndTime = 0;
  this->DownloadCheckpointIndex = -1;
  this->DeltaDownloadCheckpointIndex = -1;
  this->LastGotoTimeInMS = -1;
  *(undefined4 *)&(this->EventGroupSet).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->EventGroupSet).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->EventGroupSet).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->EventGroupSet).Elements.field_0x34 = 0;
  (this->EventGroupSet).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->EventGroupSet).HashSize = 0;
  this->TotalUploadBytes = 0;
  *(undefined8 *)&this->ResponseCache = 0;
  *(undefined8 *)&(this->ResponseCache).field_0x8 = 0;
  *(undefined8 *)&(this->ResponseCache).field_0x20 = 0;
  *(undefined4 *)&(this->ResponseCache).field_0x28 = 0;
  *(undefined4 *)&(this->ResponseCache).field_0x2c = 0x80;
  *(undefined4 *)&(this->ResponseCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ResponseCache).field_0x34 = 0;
  *(undefined8 *)&(this->ResponseCache).field_0x40 = 0;
  *(undefined4 *)&(this->ResponseCache).field_0x48 = 0;
  this->RefreshViewerFails = 0;
  FConfigCacheIni::GetString
            (GConfig,L"HttpNetworkReplayStreaming",L"ServerURL",&this->ServerURL,&GEngineIni);
  return this;
}

// ~FHttpNetworkReplayStreamer @ 146cb6940

void __thiscall
FHttpNetworkReplayStreamer::~FHttpNetworkReplayStreamer(FHttpNetworkReplayStreamer *this)

{
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  FScriptContainerElement *pFVar3;
  
  *(undefined4 *)&(this->ResponseCache).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ResponseCache).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FCachedResponse>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FCachedResponse>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FCachedResponse>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ResponseCache);
  (this->EventGroupSet).HashSize = 0;
  FVar2 = (this->EventGroupSet).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->EventGroupSet).Elements);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->InFlightHttpRequest).SharedReferenceCount.ReferenceController);
  DestructItems<TSharedPtr<FQueuedHttpRequest,1>,int>
            ((TSharedPtr<FQueuedHttpRequest,1> *)(this->QueuedHttpRequests).AllocatorInstance.Data,
             (this->QueuedHttpRequests).ArrayNum);
  pFVar3 = (this->QueuedHttpRequests).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  (this->CheckpointList)._padding_ = (longlong)&___7FReplayEventList__6B_;
  DestructItems<FReplayEventListItem,int>
            ((FReplayEventListItem *)(this->CheckpointList).ReplayEvents.AllocatorInstance.Data,
             (this->CheckpointList).ReplayEvents.ArrayNum);
  pFVar3 = (this->CheckpointList).ReplayEvents.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  FJsonSerializable::~FJsonSerializable((FJsonSerializable *)&this->CheckpointList);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->GotoCheckpointDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->StartStreamingDelegate);
  pFVar3 = (this->ViewerName).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->StreamMetadata).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->ServerURL).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->ReplayVersion).AppString.Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->SessionName).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->CheckpointArchive).Buffer.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  FArchive::~FArchive((FArchive *)&this->CheckpointArchive);
  pFVar3 = (this->StreamArchive).Buffer.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  FArchive::~FArchive((FArchive *)&this->StreamArchive);
  pFVar3 = (this->HeaderArchive).Buffer.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  FArchive::~FArchive((FArchive *)&this->HeaderArchive);
  INetworkReplayStreamer::~INetworkReplayStreamer((INetworkReplayStreamer *)this);
  return;
}

// operator() @ 146cb7070

void __thiscall
`FHttpNetworkReplayStreamer::SearchEvents'::__l2::<lambda_1>::operator()
          (void *this,FEnumerateStreamsResult *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FNetworkReplayStreamInfo *pFVar3;
  bool bVar4;
  char cVar5;
  longlong *plVar6;
  FReadAccessScope local_68;
  undefined **local_50;
  undefined4 local_48;
  ForAnyElementType local_40;
  undefined8 local_38;
  ForAnyElementType local_30;
  undefined8 local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this,&local_68);
  if ((*(int *)((longlong)this + 0x10) != 0) &&
     (*(longlong **)((longlong)this + 8) != (longlong *)0x0)) {
    cVar5 = (**(code **)(**(longlong **)((longlong)this + 8) + 0x38))();
    if (cVar5 != '\0') {
      bVar4 = true;
      goto LAB_146cb70b3;
    }
  }
  bVar4 = false;
LAB_146cb70b3:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_68);
  if (bVar4) {
    plVar6 = (longlong *)0x0;
    local_50 = &___7FSearchEventsResult__6B_;
    local_48 = (undefined4)param_1->_padding_;
    local_40.Data = (FScriptContainerElement *)0x0;
    local_38 = 0;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    if ((TArray<FString,TSizedDefaultAllocator<32>_> *)&local_30 != &param_1->CorruptedStreams) {
      DestructItems<FString,int>((FString *)0x0,0);
      iVar1 = (param_1->CorruptedStreams).ArrayNum;
      pFVar2 = (param_1->CorruptedStreams).AllocatorInstance.Data;
      local_28 = CONCAT44(local_28._4_4_,iVar1);
      if ((iVar1 == 0) && (local_28._4_4_ == 0)) {
        local_28 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar1,local_28._4_4_,&local_30,iVar1,(int *)((longlong)&local_28 + 4));
        ConstructItems<FString,FString,int>(local_30.Data,(FString *)pFVar2,iVar1);
      }
    }
    if ((TArray<FNetworkReplayStreamInfo,TSizedDefaultAllocator<32>_> *)&local_40 !=
        &param_1->FoundStreams) {
      DestructItems<FNetworkReplayStreamInfo,int>
                ((FNetworkReplayStreamInfo *)local_40.Data,(int)local_38);
      iVar1 = (param_1->FoundStreams).ArrayNum;
      pFVar3 = (FNetworkReplayStreamInfo *)(param_1->FoundStreams).AllocatorInstance.Data;
      local_38 = CONCAT44(local_38._4_4_,iVar1);
      if ((iVar1 == 0) && (local_38._4_4_ == 0)) {
        local_38 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,8,iVar1,local_38._4_4_,&local_40,iVar1,(int *)((longlong)&local_38 + 4));
        ConstructItems<FNetworkReplayStreamInfo,FNetworkReplayStreamInfo,int>
                  (local_40.Data,pFVar3,iVar1);
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this,&local_68);
    if (*(int *)((longlong)this + 0x10) != 0) {
      plVar6 = *(longlong **)((longlong)this + 8);
    }
    (**(code **)(*plVar6 + 0x60))(plVar6,&local_50);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_68);
    DestructItems<FString,int>((FString *)local_30.Data,(int)local_28);
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
    DestructItems<FNetworkReplayStreamInfo,int>
              ((FNetworkReplayStreamInfo *)local_40.Data,(int)local_38);
    if ((FNetworkReplayStreamInfo *)local_40.Data != (FNetworkReplayStreamInfo *)0x0) {
      FMemory::Free(local_40.Data);
    }
  }
  return;
}

// AddCustomRequestToQueue @ 146cb7c10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FHttpNetworkReplayStreamer::AddCustomRequestToQueue
          (FHttpNetworkReplayStreamer *this,TSharedPtr<FQueuedHttpRequest,1> *param_1)

{
  int *piVar1;
  TSharedPtr<FQueuedHttpRequest,1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  TArray<TSharedPtr<FQueuedHttpRequest,1>,TSizedDefaultAllocator<32>_> *pTVar8;
  
  if (5 < (byte)LogHttpReplay._0_1_) {
    if (param_1->Object == (FQueuedHttpRequest *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    EQueuedHttpRequestType::ToString(param_1->Object->Type);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
  }
  pTVar8 = &this->QueuedHttpRequests;
  pTVar2 = (TSharedPtr<FQueuedHttpRequest,1> *)(pTVar8->AllocatorInstance).Data;
  if ((pTVar2 <= param_1) && (param_1 < pTVar2 + (this->QueuedHttpRequests).ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->QueuedHttpRequests).ArrayNum;
  piVar1 = &(this->QueuedHttpRequests).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar8->AllocatorInstance,piVar1);
  }
  (this->QueuedHttpRequests).ArrayNum = iVar6 + 1;
  pFVar7 = (pTVar8->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
  *(FQueuedHttpRequest **)pFVar7 = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar7 + 8) = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// AddEvent @ 146cb7d40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FHttpNetworkReplayStreamer::AddEvent
          (FHttpNetworkReplayStreamer *this,uint param_1,FString *param_2,FString *param_3,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_4)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  wchar_t *pwVar5;
  FString local_28;
  
  if (this->StreamerState == Recording) {
    iVar1 = (param_2->Data).ArrayNum;
    iVar4 = iVar1 + -1;
    if (iVar1 == 0) {
      pwVar5 = L"";
      iVar4 = 0;
    }
    else {
      pwVar5 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar5);
    iVar4 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                      (&this->EventGroupSet,uVar3,param_2);
    if (iVar4 == -1) {
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                (&this->EventGroupSet,(FString *)&stack0x00000008,(bool *)param_2);
      (**(code **)(this->_padding_ + 0x180))(this,param_2);
    }
  }
  else if (this->StreamerState != Playback) {
    if ((byte)LogHttpReplay._0_1_ < 3) {
      return;
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
    return;
  }
  pcVar2 = *(code **)(this->_padding_ + 0x90);
  ::FString::FString(&local_28,L"");
  (*pcVar2)(this,&local_28,param_1,param_2,param_3,param_4);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// AddOrUpdateEvent @ 146cb7e60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FHttpNetworkReplayStreamer::AddOrUpdateEvent
          (FHttpNetworkReplayStreamer *this,FString *param_1,uint param_2,FString *param_3,
          FString *param_4,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_5)

{
  code *pcVar1;
  bool bVar2;
  FHttpModule *pFVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar4;
  ulong64 uVar5;
  FQueuedHttpRequestAddEvent *pFVar6;
  IHttpRequest *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  TSharedPtr<FQueuedHttpRequest,1> local_38;
  TSharedRef<IHttpRequest,1> local_28;
  
  if ((this->StreamerState == Recording) || (this->StreamerState == Playback)) {
    if (5 < (byte)LogHttpReplay._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
    }
    pFVar3 = FHttpModule::Get();
    (**(code **)(pFVar3->_padding_ + 0x40))(pFVar3,&local_48);
    lpCriticalSection = (LPCRITICAL_SECTION)(**(code **)(*(longlong *)local_48 + 0xf0))();
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    EnterCriticalSection(lpCriticalSection);
    puVar4 = UE::Core::Private::DelegateAllocate
                       (0x28,(FDelegateAllocation *)(lpCriticalSection + 1));
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseRawMethodDelegateInstance__0A_VFHttpNetworkReplayStreamer____A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
      ;
      puVar4[4] = HttpUploadCustomEventFinished;
      puVar4[3] = this;
    }
    if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(lpCriticalSection);
    }
    pFVar6 = ::operator_new(0x70);
    if (pFVar6 == (FQueuedHttpRequestAddEvent *)0x0) {
      pFVar6 = (FQueuedHttpRequestAddEvent *)0x0;
    }
    else {
      local_28.Object = local_48;
      local_28.SharedReferenceCount.ReferenceController = pTStack_40;
      if (pTStack_40 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTStack_40->SharedReferenceCount = (atomic<int>)((int)pTStack_40->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar6 = FQueuedHttpRequestAddEvent::FQueuedHttpRequestAddEvent
                         (pFVar6,param_1,param_2,param_3,param_4,param_5,&local_28);
    }
    local_38.Object = (FQueuedHttpRequest *)pFVar6;
    local_38.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
      (local_38.SharedReferenceCount.ReferenceController)->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_VFQueuedHttpRequestAddEvent__U__DefaultDeleter_VFQueuedHttpRequestAddEvent___SharedPointerInternals___00_SharedPointerInternals__6B_
      ;
      (local_38.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
      local_38.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pFVar6;
    }
    AddCustomRequestToQueue(this,&local_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_40);
  }
  else if (2 < (byte)LogHttpReplay._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
    return;
  }
  return;
}

// AddRequestToQueue @ 146cb80a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FHttpNetworkReplayStreamer::AddRequestToQueue
          (FHttpNetworkReplayStreamer *this,Type param_1,TSharedPtr<IHttpRequest,1> *param_2,
          int param_3,float param_4)

{
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  IHttpRequest *pIVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  TArray<TSharedPtr<FQueuedHttpRequest,1>,TSizedDefaultAllocator<32>_> *pTVar11;
  undefined8 *local_18;
  undefined8 *local_10;
  
  if (5 < (byte)LogHttpReplay._0_1_) {
    EQueuedHttpRequestType::ToString(param_1);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
  }
  pTVar11 = &this->QueuedHttpRequests;
  puVar8 = ::operator_new(0x38);
  if (puVar8 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)0x0;
  }
  else {
    pTVar2 = (param_2->SharedReferenceCount).ReferenceController;
    pIVar3 = param_2->Object;
    if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
      *puVar8 = &___7FQueuedHttpRequest__6B_;
      *(Type *)(puVar8 + 1) = param_1;
      puVar8[2] = pIVar3;
      puVar8[3] = 0;
    }
    else {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      *puVar8 = &___7FQueuedHttpRequest__6B_;
      *(Type *)(puVar8 + 1) = param_1;
      puVar8[2] = pIVar3;
      puVar8[3] = pTVar2;
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(float *)(puVar8 + 5) = param_4;
    *(undefined4 *)(puVar8 + 4) = 0;
    puVar8[6] = 0;
    *(int *)((longlong)puVar8 + 0x24) = param_3;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  puVar10 = (undefined8 *)0x0;
  local_18 = puVar8;
  puVar9 = ::operator_new(0x18);
  if (puVar9 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar9 + 1) = 1;
    *puVar9 = &
              ___7__TReferenceControllerWithDeleter_VFQueuedHttpRequest__U__DefaultDeleter_VFQueuedHttpRequest___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)puVar9 + 0xc) = 1;
    puVar9[2] = puVar8;
    puVar10 = puVar9;
  }
  pFVar4 = (pTVar11->AllocatorInstance).Data;
  local_10 = puVar10;
  if (((pFVar4 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 <
       pFVar4 + (longlong)(this->QueuedHttpRequests).ArrayMax * 0x10)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar7 = (this->QueuedHttpRequests).ArrayNum;
  piVar1 = &(this->QueuedHttpRequests).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar11->AllocatorInstance,piVar1);
  }
  pFVar4 = (pTVar11->AllocatorInstance).Data;
  (this->QueuedHttpRequests).ArrayNum = iVar7 + 1;
  *(undefined8 **)(pFVar4 + (longlong)iVar7 * 0x10) = local_18;
  *(undefined8 **)(pFVar4 + (longlong)iVar7 * 0x10 + 8) = local_10;
  local_10 = (undefined8 *)0x0;
  local_18 = (undefined8 *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// AddResponseToCache @ 146cb8290

void __thiscall
FHttpNetworkReplayStreamer::AddResponseToCache
          (FHttpNetworkReplayStreamer *this,TSharedPtr<IHttpRequest,1> *param_1,
          TSharedPtr<IHttpResponse,1> *param_2)

{
  code *pcVar1;
  bool bVar2;
  LARGE_INTEGER local_res20;
  undefined8 local_38;
  IHttpResponse **local_30;
  IHttpResponse *local_28;
  TReferenceControllerBase<1> *local_20;
  double local_18;
  
  if ((param_1->Object != (IHttpRequest *)0x0) && (param_2->Object != (IHttpResponse *)0x0)) {
    QueryPerformanceCounter(&local_res20);
    local_20 = (param_2->SharedReferenceCount).ReferenceController;
    local_28 = param_2->Object;
    local_18 = (double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle +
               __real_4170000000000000;
    if (local_20 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_20->SharedReferenceCount = (atomic<int>)((int)local_20->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      local_20->SharedReferenceCount = (atomic<int>)((int)local_20->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
    if ((param_1->Object == (IHttpRequest *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_38 = (*(code *)**(undefined8 **)param_1->Object)();
    local_30 = &local_28;
    TSet<TTuple<FString,FCachedResponse>,TDefaultMapHashableKeyFuncs<FString,FCachedResponse,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,FCachedResponse_&&>_>
              ((TSet<TTuple<FString,FCachedResponse>,TDefaultMapHashableKeyFuncs<FString,FCachedResponse,0>,FDefaultSetAllocator>
                *)&this->ResponseCache,
               (TPairInitializer<FString_const_&,FCachedResponse_&&> *)&stack0x00000010,
               (bool *)&local_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
    CleanupResponseCache(this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// AddUserToReplay @ 146cb83b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FHttpNetworkReplayStreamer::AddUserToReplay(FHttpNetworkReplayStreamer *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  FHttpModule *pFVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar4;
  ulong64 uVar5;
  FQueuedHttpRequestAddUser *this_00;
  FQueuedHttpRequest *pFVar6;
  IHttpRequest *local_38;
  TReferenceControllerBase<1> *pTStack_30;
  TSharedPtr<FQueuedHttpRequest,1> local_28;
  TSharedRef<IHttpRequest,1> local_18;
  
  if (this->StreamerState == Recording) {
    if ((param_1->Data).ArrayNum < 2) {
      if (4 < (byte)LogHttpReplay._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
        return;
      }
    }
    else {
      pFVar3 = FHttpModule::Get();
      (**(code **)(pFVar3->_padding_ + 0x40))(pFVar3,&local_38);
      lpCriticalSection = (LPCRITICAL_SECTION)(**(code **)(*(longlong *)local_38 + 0xf0))();
      if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      EnterCriticalSection(lpCriticalSection);
      puVar4 = UE::Core::Private::DelegateAllocate
                         (0x28,(FDelegateAllocation *)(lpCriticalSection + 1));
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = &
                  ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
        ;
        uVar5 = FDelegateHandle::GenerateNewID();
        puVar4[2] = uVar5;
        *puVar4 = &
                  ___7__TBaseRawMethodDelegateInstance__0A_VFHttpNetworkReplayStreamer____A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
        ;
        puVar4[4] = HttpAddUserFinished;
        puVar4[3] = this;
      }
      if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
        LeaveCriticalSection(lpCriticalSection);
      }
      this_00 = ::operator_new(0x38);
      if (this_00 == (FQueuedHttpRequestAddUser *)0x0) {
        pFVar6 = (FQueuedHttpRequest *)0x0;
      }
      else {
        local_18.Object = local_38;
        local_18.SharedReferenceCount.ReferenceController = pTStack_30;
        if (pTStack_30 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTStack_30->SharedReferenceCount =
               (atomic<int>)((int)pTStack_30->SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar6 = (FQueuedHttpRequest *)
                 FQueuedHttpRequestAddUser::FQueuedHttpRequestAddUser(this_00,param_1,&local_18);
      }
      local_28.Object = pFVar6;
      local_28.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
      if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1
        ;
        (local_28.SharedReferenceCount.ReferenceController)->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_VFQueuedHttpRequestAddUser__U__DefaultDeleter_VFQueuedHttpRequestAddUser___SharedPointerInternals___00_SharedPointerInternals__6B_
        ;
        (local_28.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
        local_28.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pFVar6;
      }
      AddCustomRequestToQueue(this,&local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_30);
    }
  }
  return;
}

// CancelInFlightOrPendingTask @ 146cb8840

void __thiscall
FHttpNetworkReplayStreamer::CancelInFlightOrPendingTask
          (FHttpNetworkReplayStreamer *this,Type param_1)

{
  int *piVar1;
  TArray<TSharedPtr<FQueuedHttpRequest,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  TSharedPtr<FQueuedHttpRequest,1> *this_00;
  FQueuedHttpRequest *pFVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  TSharedPtr<FQueuedHttpRequest,1> local_38;
  
  uVar10 = (this->QueuedHttpRequests).ArrayNum - 1;
  if (-1 < (int)uVar10) {
    pTVar2 = &this->QueuedHttpRequests;
    lVar11 = (longlong)(int)uVar10 << 4;
    do {
      uVar12 = ~uVar10 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar10 < (this->QueuedHttpRequests).ArrayNum) {
        uVar7 = uVar12;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar9 = (pTVar2->AllocatorInstance).Data;
      if ((*(longlong *)(pFVar9 + lVar11) == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (*(Type *)(*(longlong *)(pFVar9 + lVar11) + 8) == param_1) {
        uVar7 = 0;
        if ((int)uVar10 < (this->QueuedHttpRequests).ArrayNum) {
          uVar7 = uVar12;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar9 = (pTVar2->AllocatorInstance).Data + lVar11;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (*(TReferenceControllerBase<1> **)(pFVar9 + 8));
        iVar8 = (this->QueuedHttpRequests).ArrayNum + ~uVar10;
        if (iVar8 != 0) {
          memmove(pFVar9,pFVar9 + 0x10,(longlong)iVar8 << 4);
        }
        piVar1 = &(this->QueuedHttpRequests).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&pTVar2->AllocatorInstance,(this->QueuedHttpRequests).ArrayNum,
                   &(this->QueuedHttpRequests).ArrayMax);
      }
      lVar11 = lVar11 + -0x10;
      uVar10 = uVar10 - 1;
    } while (-1 < (int)uVar10);
  }
  this_00 = &this->InFlightHttpRequest;
  pFVar3 = this_00->Object;
  if ((pFVar3 != (FQueuedHttpRequest *)0x0) && (pFVar3->Type == param_1)) {
    if (((pFVar3->Request).Object == (IHttpRequest *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lpCriticalSection =
         (LPCRITICAL_SECTION)(**(code **)(*(longlong *)(pFVar3->Request).Object + 0xf0))();
    if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    EnterCriticalSection(lpCriticalSection);
    if (((lpCriticalSection[1].LockCount != 0) &&
        (lpCriticalSection[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0)) &&
       (cVar6 = (**(code **)(*(longlong *)lpCriticalSection[1].DebugInfo + 0x38))(), cVar6 != '\0'))
    {
      LeaveCriticalSection(lpCriticalSection);
      if ((this_00->Object == (FQueuedHttpRequest *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = this_00->Object;
      if (((pFVar3->Request).Object == (IHttpRequest *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lpCriticalSection =
           (LPCRITICAL_SECTION)(**(code **)(*(longlong *)(pFVar3->Request).Object + 0xf0))();
      if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x1b,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      EnterCriticalSection(lpCriticalSection);
      if ((lpCriticalSection[1].LockCount != 0) &&
         (lpCriticalSection[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0)) {
        (*(code *)**(undefined8 **)lpCriticalSection[1].DebugInfo)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)(lpCriticalSection + 1),0,0,0x10);
        lpCriticalSection[1].LockCount = 0;
      }
    }
    LeaveCriticalSection(lpCriticalSection);
    if ((this_00->Object == (FQueuedHttpRequest *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = this_00->Object;
    if (((pFVar3->Request).Object == (IHttpRequest *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    (**(code **)(*(longlong *)(pFVar3->Request).Object + 0x118))();
    local_38.Object = (FQueuedHttpRequest *)0x0;
    local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    TSharedPtr<FQueuedHttpRequest,1>::operator=(this_00,&local_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  return;
}

// CancelStreamingRequests @ 146cb8c10

void __thiscall
FHttpNetworkReplayStreamer::CancelStreamingRequests(FHttpNetworkReplayStreamer *this)

{
  TSharedPtr<FQueuedHttpRequest,1> *this_00;
  int *piVar1;
  FQueuedHttpRequest *pFVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  LPCRITICAL_SECTION p_Var6;
  TSharedPtr<FQueuedHttpRequest,1> local_18;
  
  this_00 = &this->InFlightHttpRequest;
  pFVar2 = this_00->Object;
  if (pFVar2 == (FQueuedHttpRequest *)0x0) goto LAB_146cb8e4c;
  if ((pFVar2->Request).Object == (IHttpRequest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  p_Var6 = (LPCRITICAL_SECTION)(**(code **)(*(longlong *)(pFVar2->Request).Object + 0xf0))();
  if (p_Var6 == (LPCRITICAL_SECTION)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  EnterCriticalSection(p_Var6);
  if ((p_Var6[1].LockCount == 0) || (p_Var6[1].DebugInfo == (PRTL_CRITICAL_SECTION_DEBUG)0x0)) {
LAB_146cb8dba:
    LeaveCriticalSection(p_Var6);
  }
  else {
    cVar5 = (**(code **)(*(longlong *)p_Var6[1].DebugInfo + 0x38))();
    if (cVar5 == '\0') goto LAB_146cb8dba;
    LeaveCriticalSection(p_Var6);
    if (this_00->Object == (FQueuedHttpRequest *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar2 = this_00->Object;
    if ((pFVar2->Request).Object == (IHttpRequest *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    p_Var6 = (LPCRITICAL_SECTION)(**(code **)(*(longlong *)(pFVar2->Request).Object + 0xf0))();
    if (p_Var6 == (LPCRITICAL_SECTION)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    EnterCriticalSection(p_Var6);
    if ((p_Var6[1].LockCount != 0) && (p_Var6[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0)) {
      (*(code *)**(undefined8 **)p_Var6[1].DebugInfo)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)(p_Var6 + 1),0,0,0x10);
      p_Var6[1].LockCount = 0;
    }
    LeaveCriticalSection(p_Var6);
  }
  if (this_00->Object == (FQueuedHttpRequest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = this_00->Object;
  if ((pFVar2->Request).Object == (IHttpRequest *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (**(code **)(*(longlong *)(pFVar2->Request).Object + 0x118))();
  local_18.Object = (FQueuedHttpRequest *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  TSharedPtr<FQueuedHttpRequest,1>::operator=(this_00,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
LAB_146cb8e4c:
  DestructItems<TSharedPtr<FQueuedHttpRequest,1>,int>
            ((TSharedPtr<FQueuedHttpRequest,1> *)(this->QueuedHttpRequests).AllocatorInstance.Data,
             (this->QueuedHttpRequests).ArrayNum);
  piVar1 = &(this->QueuedHttpRequests).ArrayMax;
  (this->QueuedHttpRequests).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->QueuedHttpRequests).AllocatorInstance,0,piVar1);
  }
  this->StreamerState = Idle;
  this->bStopStreamingCalled = false;
  return;
}

// CleanupResponseCache @ 146cb8ec0

void __thiscall FHttpNetworkReplayStreamer::CleanupResponseCache(FHttpNetworkReplayStreamer *this)

{
  TMap<FString,FCachedResponse,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FCachedResponse,0>_>
  *this_00;
  double *pdVar1;
  undefined8 uVar2;
  code *pcVar3;
  TConsoleVariableData<int> *pTVar4;
  longlong *plVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  FString local_c8;
  undefined1 local_b8 [32];
  longlong local_98;
  TSet<TTuple<FString,FCachedResponse>,TDefaultMapHashableKeyFuncs<FString,FCachedResponse,0>,FDefaultSetAllocator>
  *pTStack_90;
  longlong *local_88;
  undefined1 auStack_80 [16];
  uint uStack_70;
  uint uStack_6c;
  longlong local_68;
  TSet<TTuple<FString,FCachedResponse>,TDefaultMapHashableKeyFuncs<FString,FCachedResponse,0>,FDefaultSetAllocator>
  *pTStack_60;
  TSet<TTuple<FString,FCachedResponse>,TDefaultMapHashableKeyFuncs<FString,FCachedResponse,0>,FDefaultSetAllocator>
  *local_58;
  undefined2 local_50;
  
  this_00 = &this->ResponseCache;
  if (*(int *)&(this->ResponseCache).field_0x8 != *(int *)&(this->ResponseCache).field_0x34) {
    do {
      local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c8.Data.ArrayNum = 0;
      local_c8.Data.ArrayMax = 0;
      uVar15 = 0;
      uVar16 = 0;
      uVar8 = 0;
      TSet<TTuple<FString,FCachedResponse>,TDefaultMapHashableKeyFuncs<FString,FCachedResponse,0>,FDefaultSetAllocator>
      ::TIterator::TIterator
                ((TIterator *)local_b8,
                 (TSet<TTuple<FString,FCachedResponse>,TDefaultMapHashableKeyFuncs<FString,FCachedResponse,0>,FDefaultSetAllocator>
                  *)this_00);
      local_50 = 0;
      stack0xffffffffffffff88 = local_b8._16_16_;
      local_88 = (longlong *)local_b8._0_8_;
      auStack_80._0_8_ = local_b8._8_8_;
      local_68 = local_98;
      pTStack_60 = pTStack_90;
      uVar11 = local_b8._24_8_ >> 0x20;
      uVar14 = local_b8._28_4_;
      uVar13 = uVar8;
      uVar12 = 0;
      local_58 = (TSet<TTuple<FString,FCachedResponse>,TDefaultMapHashableKeyFuncs<FString,FCachedResponse,0>,FDefaultSetAllocator>
                  *)this_00;
      if ((int)uVar14 < *(int *)(local_b8._16_8_ + 0x18)) {
        do {
          plVar5 = local_88;
          uVar13 = (uint)uVar11;
          if ((local_c8.Data.ArrayNum < 2) ||
             (pdVar1 = (double *)(*local_88 + 0x20 + (longlong)(int)uVar14 * 0x30),
             *pdVar1 <= (double)CONCAT44(uVar16,uVar15) &&
             (double)CONCAT44(uVar16,uVar15) != *pdVar1)) {
            lVar9 = *local_88;
            uVar2 = *(undefined8 *)(lVar9 + 0x20 + (longlong)(int)uVar14 * 0x30);
            uVar15 = (undefined4)uVar2;
            uVar16 = (undefined4)((ulonglong)uVar2 >> 0x20);
            iVar7 = *(int *)(lVar9 + 8 + (longlong)(int)uVar13 * 0x30);
            uVar14 = iVar7 - 1;
            if (iVar7 == 0) {
              uVar14 = uVar8;
            }
            ::FString::AssignRange
                      (&local_c8,*(wchar_t **)(lVar9 + (longlong)(int)uVar13 * 0x30),uVar14);
            uVar14 = uVar13;
          }
          lVar9 = *plVar5;
          if ((*(longlong *)(lVar9 + 0x10 + (longlong)(int)uVar14 * 0x30) == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          lVar9 = (**(code **)(**(longlong **)(lVar9 + 0x10 + (longlong)(int)uVar14 * 0x30) + 0x48))
                            ();
          uVar13 = uVar12 + *(int *)(lVar9 + 8);
          uStack_70 = uStack_70 & ~auStack_80._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_80);
          uVar11 = (ulonglong)uStack_6c;
          uVar14 = uStack_6c;
          uVar12 = uVar13;
        } while ((int)uStack_6c < *(int *)(auStack_80._8_8_ + 0x18));
        if (((char)local_50 != '\0') && (local_50._1_1_ != '\0')) {
          uVar14 = *(int *)&(local_58->Elements).field_0x8 -
                   *(int *)&(local_58->Elements).field_0x34;
          if (uVar14 < 4) {
            iVar7 = 1;
          }
          else {
            uVar11 = (ulonglong)((uVar14 >> 1) + 7) * 2 + 1;
            lVar9 = 0x3f;
            if (uVar11 != 0) {
              for (; uVar11 >> lVar9 == 0; lVar9 = lVar9 + -1) {
              }
            }
            iVar7 = 1 << ((byte)lVar9 & 0x1f);
          }
          if (((0 < (int)uVar14) && (local_58->HashSize < iVar7)) || (iVar7 < local_58->HashSize)) {
            local_58->HashSize = iVar7;
            TSet<TTuple<FString,FCachedResponse>,TDefaultMapHashableKeyFuncs<FString,FCachedResponse,0>,FDefaultSetAllocator>
            ::Rehash(local_58);
          }
        }
      }
      if ((local_c8.Data.ArrayNum < 2) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("!OldestKey.IsEmpty()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\HttpNetworkReplayStreaming\\Private\\HttpNetworkReplayStreaming.cpp"
                             ,0x1c4,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar4 = CVarMaxCacheSize.Ref;
      bVar6 = IsInParallelGameThread();
      if (((!bVar6) && (bVar6 = IsInGameThread(), !bVar6)) &&
         (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6409875433831007945>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x6c9,"GetShadowIndex() == 0"), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar13 <= (uint)pTVar4->ShadowedValue[0]) {
        if (local_c8.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        return;
      }
      if (*(int *)&(this->ResponseCache).field_0x8 != *(int *)&(this->ResponseCache).field_0x34) {
        if (local_c8.Data.ArrayNum == 0) {
          pwVar10 = L"";
        }
        else {
          uVar8 = local_c8.Data.ArrayNum - 1;
          pwVar10 = (wchar_t *)local_c8.Data.AllocatorInstance.Data;
        }
        uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar8,pwVar10);
        TSet<TTuple<FString,FCachedResponse>,TDefaultMapHashableKeyFuncs<FString,FCachedResponse,0>,FDefaultSetAllocator>
        ::RemoveImpl<FString>
                  ((TSet<TTuple<FString,FCachedResponse>,TDefaultMapHashableKeyFuncs<FString,FCachedResponse,0>,FDefaultSetAllocator>
                    *)this_00,uVar8,&local_c8);
      }
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
    } while (*(int *)&(this->ResponseCache).field_0x8 != *(int *)&(this->ResponseCache).field_0x34);
  }
  return;
}

// CompressBuffer @ 146cb9210

bool __thiscall
FHttpNetworkReplayStreamer::CompressBuffer
          (FHttpNetworkReplayStreamer *this,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1,FHttpStreamFArchive *param_2)

{
  return false;
}

// CompressRequest @ 146cb9220

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FHttpNetworkReplayStreamer::CompressRequest
          (FHttpNetworkReplayStreamer *this,TSharedPtr<IHttpRequest,1> *param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_HttpReplay_CompressTime> FVar10;
  FThreadStats *pFVar11;
  FThreadStatsPool *pFVar12;
  uint uVar13;
  FNameEntryId FVar14;
  FName FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res20;
  LARGE_INTEGER local_158;
  FName local_150;
  LARGE_INTEGER local_140;
  LARGE_INTEGER local_138;
  LARGE_INTEGER local_130;
  FStatMessage local_128;
  FStatMessage local_118;
  FName local_108 [2];
  FArchiveState local_f8;
  void *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined1 local_54;
  
  cVar5 = (**(code **)(this->_padding_ + 0x1d0))();
  if (cVar5 == '\0') {
    if ((param_1->Object == (IHttpRequest *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
    (**(code **)(*(longlong *)param_1->Object + 0x88))(param_1->Object,param_2);
    goto LAB_146cb96b6;
  }
  FVar10 = StatPtr_STAT_HttpReplay_CompressTime;
  if (StatPtr_STAT_HttpReplay_CompressTime ==
      (FThreadSafeStaticStat<FStat_STAT_HttpReplay_CompressTime>)0x0) {
    pFVar9 = ::FName::FName(local_108,"STAT_HttpReplay_CompressTime");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_HttpReplay_CompressTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_HttpReplay_CompressTime,*pFVar9,
                        L"Http replay compress time","STATGROUP_HttpReplay","STATCAT_Advanced",
                        L"HttpReplay",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)FVar10;
  bVar8 = false;
  bVar4 = false;
  local_150.ComparisonIndex.Value = 0;
  local_150.Number = 0;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar13 = FVar15.Number;
  if ((FVar14.Value == 0) && (uVar13 == 0)) {
LAB_146cb9394:
    bVar3 = false;
    FVar15 = local_150;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar8 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar14.Value;
        local_res20.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\HttpNetworkReplayStreaming\\Private\\HttpNetworkReplayStreaming.cpp"
                   ,0x273);
        bVar8 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146cb9394;
    local_158.s.LowPart = FVar14.Value;
    local_158.s.HighPart = uVar13;
    FThreadStats::AddMessage(FVar15,CycleScopeStart);
    bVar3 = true;
  }
  QueryPerformanceCounter(&local_158);
  FArchiveState::FArchiveState(&local_f8);
  local_68 = (void *)0x0;
  local_f8._padding_ = (longlong)&___7FHttpStreamFArchive__6B_;
  local_60 = 0;
  local_58 = 0;
  local_54 = 0;
  cVar5 = (**(code **)(this->_padding_ + 0x1d8))(this,param_2);
  if (cVar5 == '\0') {
    if (local_68 != (void *)0x0) {
      FMemory::Free(local_68);
    }
    FArchive::~FArchive((FArchive *)&local_f8);
    if (bVar4) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar8) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar3) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar11 == (FThreadStats *)0x0) {
        pFVar12 = FThreadStatsPool::Get();
        pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
      }
      if (pFVar11->bWaitForExplicitFlush < pFVar11->ScopeCount) {
        local_128.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
        local_128.NameAndInfo.Index.Value = FVar15.ComparisonIndex.Value.Value;
        QueryPerformanceCounter(&local_140);
        local_128.StatData.Pad[4] = '\0';
        local_128.StatData.Pad[5] = '\0';
        local_128.StatData.Pad[6] = '\0';
        local_128.StatData.Pad[7] = '\0';
        local_128.StatData.Pad[0] = local_140.s.LowPart._0_1_;
        local_128.StatData.Pad[1] = local_140.s.LowPart._1_1_;
        local_128.StatData.Pad[2] = local_140.s.LowPart._2_1_;
        local_128.StatData.Pad[3] = local_140.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar11,&local_128);
        piVar1 = &pFVar11->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(pFVar11,false,false);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((param_1->SharedReferenceCount).ReferenceController);
          return false;
        }
        if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar11,false,false);
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return false;
  }
  QueryPerformanceCounter(&local_138);
  if (6 < (byte)LogHttpReplay._0_1_) {
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
  }
  if ((param_1->Object == (IHttpRequest *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    uVar7 = (*pcVar2)();
    return (bool)uVar7;
  }
  (**(code **)(*(longlong *)param_1->Object + 0x88))(param_1->Object,&local_68);
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  FArchive::~FArchive((FArchive *)&local_f8);
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar3) && (FVar15 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar11 == (FThreadStats *)0x0) {
      pFVar12 = FThreadStatsPool::Get();
      pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
    }
    if (pFVar11->bWaitForExplicitFlush < pFVar11->ScopeCount) {
      local_118.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      local_118.NameAndInfo.Index.Value = FVar15.ComparisonIndex.Value.Value;
      QueryPerformanceCounter(&local_130);
      local_118.StatData.Pad[4] = '\0';
      local_118.StatData.Pad[5] = '\0';
      local_118.StatData.Pad[6] = '\0';
      local_118.StatData.Pad[7] = '\0';
      local_118.StatData.Pad[0] = local_130.s.LowPart._0_1_;
      local_118.StatData.Pad[1] = local_130.s.LowPart._1_1_;
      local_118.StatData.Pad[2] = local_130.s.LowPart._2_1_;
      local_118.StatData.Pad[3] = local_130.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar11,&local_118);
      piVar1 = &pFVar11->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar11,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar11,false,false);
      }
    }
  }
LAB_146cb96b6:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return true;
}

// ConditionallyDownloadNextChunk @ 146cb96e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FHttpNetworkReplayStreamer::ConditionallyDownloadNextChunk(FHttpNetworkReplayStreamer *this)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  code *pcVar7;
  double dVar8;
  TConsoleVariableData<float> *pTVar9;
  IHttpRequest *pIVar10;
  char cVar11;
  bool bVar12;
  FHttpModule *pFVar13;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar14;
  ulong64 uVar15;
  double dVar16;
  float fVar17;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10;
  IHttpRequest *local_b8;
  TReferenceControllerBase<1> *pTStack_b0;
  FString local_a8;
  FString local_98;
  TSharedPtr<IHttpRequest,1> local_88;
  FReadAccessScope local_78 [4];
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->GotoCheckpointDelegate
             ,local_78);
  if (((*(int *)&(this->GotoCheckpointDelegate).field_0x10 != 0) &&
      (plVar6 = *(longlong **)&(this->GotoCheckpointDelegate).field_0x8, plVar6 != (longlong *)0x0))
     && (cVar11 = (**(code **)(*plVar6 + 0x38))(), cVar11 != '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (local_78);
    return;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (local_78);
  bVar12 = IsTaskPendingOrInFlight(this,DownloadingStream);
  dVar8 = __real_4170000000000000;
  if (!bVar12) {
    iVar1 = this->StreamChunkIndex;
    iVar2 = this->NumTotalStreamChunks;
    if ((iVar1 < iVar2) || (this->bStreamIsLive != false)) {
      if ((this->HighPriorityEndTime == 0) ||
         ((this->HighPriorityEndTime <= this->StreamTimeRangeEnd || (iVar2 <= iVar1)))) {
        QueryPerformanceCounter(&local_res8);
        pTVar9 = CVarChunkUploadDelayInSeconds.Ref;
        dVar16 = ((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar8) -
                 this->LastChunkTime;
        if (dVar16 < __real_4014000000000000) {
          return;
        }
        if (dVar16 < __real_403e000000000000) {
          uVar3 = this->StreamTimeRangeEnd;
          if ((this->StreamTimeRangeStart < uVar3) &&
             (iVar4 = (this->StreamArchive).Buffer.ArrayNum, 0 < iVar4)) {
            iVar5 = (this->StreamArchive).Pos;
            fVar17 = (float)(uVar3 - this->StreamTimeRangeStart) * __real_3a83126f;
            bVar12 = IsInParallelGameThread();
            if ((!bVar12) &&
               ((bVar12 = IsInGameThread(), !bVar12 &&
                (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                                    (&bGEnsureHasExecuted<6409875433831007945>,false,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                     ,0x6c9,"GetShadowIndex() == 0"), bVar12)))) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            if (pTVar9->ShadowedValue[0] * __real_3f000000 <
                fVar17 - fVar17 * ((float)iVar5 / (float)iVar4)) {
              if ((byte)LogHttpReplay._0_1_ < 7) {
                return;
              }
              UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
              return;
            }
          }
        }
        if (((iVar2 <= iVar1) && (this->bStreamIsLive == false)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("bMoreChunksDefinitelyAvailable || bStreamIsLive",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\HttpNetworkReplayStreaming\\Private\\HttpNetworkReplayStreaming.cpp"
                                ,0x4e0,L""), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      pFVar13 = FHttpModule::Get();
      (**(code **)(pFVar13->_padding_ + 0x40))(pFVar13,&local_b8);
      ::FString::PrintfImpl(&local_a8,L"%sreplay/%s/file/stream.%i");
      if (5 < (byte)LogHttpReplay._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
      }
      (**(code **)(*(longlong *)local_b8 + 0x68))(local_b8,&local_a8);
      pIVar10 = local_b8;
      pcVar7 = *(code **)(*(longlong *)local_b8 + 0x60);
      ::FString::FString(&local_98,L"GET");
      (*pcVar7)(pIVar10,&local_98);
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      lpCriticalSection = (LPCRITICAL_SECTION)(**(code **)(*(longlong *)local_b8 + 0xf0))();
      if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Mutex",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                              ,0x1b,L""), bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      EnterCriticalSection(lpCriticalSection);
      puVar14 = UE::Core::Private::DelegateAllocate
                          (0x28,(FDelegateAllocation *)(lpCriticalSection + 1));
      if (puVar14 != (undefined8 *)0x0) {
        *puVar14 = &
                   ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy__H_N__6B_
        ;
        *(int *)(puVar14 + 1) = this->StreamChunkIndex;
        *(bool *)((longlong)puVar14 + 0xc) = this->bStreamIsLive;
        uVar15 = FDelegateHandle::GenerateNewID();
        puVar14[2] = uVar15;
        *puVar14 = &
                   ___7__TBaseRawMethodDelegateInstance__0A_VFHttpNetworkReplayStreamer____A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy__H_N__6B_
        ;
        puVar14[4] = HttpDownloadFinished;
        puVar14[3] = this;
      }
      if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
        LeaveCriticalSection(lpCriticalSection);
      }
      local_88.Object = local_b8;
      local_88.SharedReferenceCount.ReferenceController = pTStack_b0;
      if (pTStack_b0 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTStack_b0->SharedReferenceCount = (atomic<int>)((int)pTStack_b0->SharedReferenceCount + 1);
        UNLOCK();
      }
      AddRequestToQueue(this,DownloadingStream,&local_88,0,0.0);
      QueryPerformanceCounter(&local_res10);
      this->LastChunkTime =
           (double)local_res10.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar8;
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_b0);
    }
  }
  return;
}

// ConditionallyEnumerateCheckpoints @ 146cb9b80

void __thiscall
FHttpNetworkReplayStreamer::ConditionallyEnumerateCheckpoints(FHttpNetworkReplayStreamer *this)

{
  LARGE_INTEGER local_res8 [4];
  
  if ((((this->InFlightHttpRequest).Object == (FQueuedHttpRequest *)0x0) &&
      ((this->QueuedHttpRequests).ArrayNum < 1)) && (this->bStreamIsLive != false)) {
    QueryPerformanceCounter(local_res8);
    if (__real_403e000000000000 <
        ((double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
        __real_4170000000000000) - this->LastRefreshCheckpointTime) {
      EnumerateCheckpoints(this);
      return;
    }
  }
  return;
}

// ConditionallyFlushStream @ 146cb9c00

void __thiscall
FHttpNetworkReplayStreamer::ConditionallyFlushStream(FHttpNetworkReplayStreamer *this)

{
  float fVar1;
  code *pcVar2;
  TConsoleVariableData<float> *pTVar3;
  bool bVar4;
  LARGE_INTEGER local_res8;
  
  pTVar3 = CVarChunkUploadDelayInSeconds.Ref;
  if (((this->InFlightHttpRequest).Object == (FQueuedHttpRequest *)0x0) &&
     ((this->QueuedHttpRequests).ArrayNum < 1)) {
    bVar4 = IsInParallelGameThread();
    if (!bVar4) {
      bVar4 = IsInGameThread();
      if (!bVar4) {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007945>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6c9,"GetShadowIndex() == 0");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
    fVar1 = pTVar3->ShadowedValue[0];
    QueryPerformanceCounter(&local_res8);
    if ((double)fVar1 <
        ((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
        __real_4170000000000000) - this->LastChunkTime) {
      FlushStream(this);
      return;
    }
  }
  return;
}

// ConditionallyRefreshViewer @ 146cb9ce0

void __thiscall
FHttpNetworkReplayStreamer::ConditionallyRefreshViewer(FHttpNetworkReplayStreamer *this)

{
  LARGE_INTEGER local_res8 [4];
  
  if (((this->InFlightHttpRequest).Object == (FQueuedHttpRequest *)0x0) &&
     ((this->QueuedHttpRequests).ArrayNum < 1)) {
    QueryPerformanceCounter(local_res8);
    if (__real_4024000000000000 <
        ((double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
        __real_4170000000000000) - this->LastRefreshViewerTime) {
      RefreshViewer(this,false);
      return;
    }
  }
  return;
}

// DecompressBuffer @ 146cbaa90

bool __thiscall
FHttpNetworkReplayStreamer::DecompressBuffer
          (FHttpNetworkReplayStreamer *this,FHttpStreamFArchive *param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2)

{
  return false;
}

// DecompressResponse @ 146cbaaa0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FHttpNetworkReplayStreamer::DecompressResponse
          (FHttpNetworkReplayStreamer *this,TSharedPtr<IHttpResponse,1> *param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *_Src;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  int iVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_HttpReplay_DecompressTime> FVar11;
  ForAnyElementType *pFVar12;
  FThreadStats *pFVar13;
  FThreadStatsPool *pFVar14;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar15;
  uint uVar16;
  FNameEntryId FVar17;
  FName FVar18;
  size_t _Size;
  FColor_u_0 local_res8 [2];
  FName local_res20;
  LARGE_INTEGER local_148;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_140;
  FName local_130;
  LARGE_INTEGER local_120;
  FStatMessage local_118;
  FStatMessage local_108;
  FName local_f8 [2];
  FArchiveState local_e8;
  ForAnyElementType local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_44;
  
  cVar5 = (**(code **)(this->_padding_ + 0x1d0))();
  if (cVar5 == '\0') {
    if ((param_1->Object == (IHttpResponse *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
    pTVar15 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
              (**(code **)((longlong)*param_1->Object + 0x48))();
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::
    Append<unsigned_char,TSizedDefaultAllocator<32>_>(param_2,pTVar15);
    goto LAB_146cbafe8;
  }
  FVar11 = StatPtr_STAT_HttpReplay_DecompressTime;
  if (StatPtr_STAT_HttpReplay_DecompressTime ==
      (FThreadSafeStaticStat<FStat_STAT_HttpReplay_DecompressTime>)0x0) {
    pFVar10 = ::FName::FName(local_f8,"STAT_HttpReplay_DecompressTime");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_HttpReplay_DecompressTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_HttpReplay_DecompressTime,
                        *pFVar10,L"Http replay decompress time","STATGROUP_HttpReplay",
                        "STATCAT_Advanced",L"HttpReplay",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar11;
  bVar8 = false;
  bVar4 = false;
  local_130.ComparisonIndex.Value = 0;
  local_130.Number = 0;
  FVar17 = FVar18.ComparisonIndex.Value;
  uVar16 = FVar18.Number;
  if ((FVar17.Value == 0) && (uVar16 == 0)) {
LAB_146cbac00:
    bVar3 = false;
    FVar18 = local_130;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar8 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar17.Value;
        local_res20.Number = uVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\HttpNetworkReplayStreaming\\Private\\HttpNetworkReplayStreaming.cpp"
                   ,0x7b9);
        bVar8 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146cbac00;
    local_148.s.LowPart = FVar17.Value;
    local_148.s.HighPart = uVar16;
    FThreadStats::AddMessage(FVar18,CycleScopeStart);
    bVar3 = true;
  }
  FArchiveState::FArchiveState(&local_e8);
  local_58.Data = (FScriptContainerElement *)0x0;
  local_e8._padding_ = (longlong)&___7FHttpStreamFArchive__6B_;
  local_50 = 0;
  local_48 = 0;
  local_44 = 0;
  if ((param_1->Object == (IHttpResponse *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    uVar7 = (*pcVar2)();
    return (bool)uVar7;
  }
  pFVar12 = (ForAnyElementType *)(**(code **)((longlong)*param_1->Object + 0x48))();
  if (&local_58 != pFVar12) {
    iVar9 = *(int *)&pFVar12[1].Data;
    _Src = pFVar12->Data;
    local_50 = CONCAT44(local_50._4_4_,iVar9);
    if ((iVar9 == 0) && (local_50._4_4_ == 0)) {
      local_50 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar9,local_50._4_4_,&local_58,iVar9,(int *)((longlong)&local_50 + 4));
      if (iVar9 != 0) {
        memcpy(local_58.Data,_Src,(longlong)iVar9);
      }
    }
  }
  local_140.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_140.ArrayNum = 0;
  local_140.ArrayMax = 0;
  cVar5 = (**(code **)(this->_padding_ + 0x1e0))(this,&local_e8);
  if (cVar5 == '\0') {
    param_2->ArrayNum = 0;
    if (param_2->ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
    }
    if (1 < (byte)LogHttpReplay._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
    }
    if (local_140.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.AllocatorInstance.Data);
    }
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data);
    }
    FArchive::~FArchive((FArchive *)&local_e8);
    if (bVar4) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar8) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar3) && (FVar18 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar13 == (FThreadStats *)0x0) {
        pFVar14 = FThreadStatsPool::Get();
        pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
      }
      if (pFVar13->bWaitForExplicitFlush < pFVar13->ScopeCount) {
        local_118.NameAndInfo.Number = FVar18.Number & 0xffff6fff | 0x6000;
        local_118.NameAndInfo.Index.Value = FVar18.ComparisonIndex.Value.Value;
        QueryPerformanceCounter(&local_148);
        local_118.StatData.Pad[4] = '\0';
        local_118.StatData.Pad[5] = '\0';
        local_118.StatData.Pad[6] = '\0';
        local_118.StatData.Pad[7] = '\0';
        local_118.StatData.Pad[0] = local_148.s.LowPart._0_1_;
        local_118.StatData.Pad[1] = local_148.s.LowPart._1_1_;
        local_118.StatData.Pad[2] = local_148.s.LowPart._2_1_;
        local_118.StatData.Pad[3] = local_148.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar13,&local_118);
        piVar1 = &pFVar13->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(pFVar13,false,false);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((param_1->SharedReferenceCount).ReferenceController);
          return false;
        }
        if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar13,false,false);
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return false;
  }
  if ((param_2 == &local_140) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    uVar7 = (*pcVar2)();
    return (bool)uVar7;
  }
  _Size = (size_t)local_140.ArrayNum;
  if (local_140.ArrayNum != 0) {
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,local_140.ArrayNum,&param_2->AllocatorInstance,&param_2->ArrayNum,
                       &param_2->ArrayMax);
    memcpy((param_2->AllocatorInstance).Data + iVar9,local_140.AllocatorInstance.Data,_Size);
  }
  if (local_140.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.AllocatorInstance.Data);
  }
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  FArchive::~FArchive((FArchive *)&local_e8);
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar3) && (FVar18 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar13 == (FThreadStats *)0x0) {
      pFVar14 = FThreadStatsPool::Get();
      pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
    }
    if (pFVar13->bWaitForExplicitFlush < pFVar13->ScopeCount) {
      local_108.NameAndInfo.Number = FVar18.Number & 0xffff6fff | 0x6000;
      local_108.NameAndInfo.Index.Value = FVar18.ComparisonIndex.Value.Value;
      QueryPerformanceCounter(&local_120);
      local_108.StatData.Pad[4] = '\0';
      local_108.StatData.Pad[5] = '\0';
      local_108.StatData.Pad[6] = '\0';
      local_108.StatData.Pad[7] = '\0';
      local_108.StatData.Pad[0] = local_120.s.LowPart._0_1_;
      local_108.StatData.Pad[1] = local_120.s.LowPart._1_1_;
      local_108.StatData.Pad[2] = local_120.s.LowPart._2_1_;
      local_108.StatData.Pad[3] = local_120.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar13,&local_108);
      piVar1 = &pFVar13->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar13,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar13,false,false);
      }
    }
  }
LAB_146cbafe8:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return true;
}

// DeleteFinishedStream @ 146cbb020

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FHttpNetworkReplayStreamer::DeleteFinishedStream
          (FHttpNetworkReplayStreamer *this,FString *param_1,
          TDelegate<void___cdecl(FDeleteFinishedStreamResult_const_&),FDefaultDelegateUserPolicy>
          *param_2)

{
  longlong *plVar1;
  undefined **local_38;
  undefined4 local_30;
  FReadAccessScope local_28;
  
  if (4 < (byte)LogHttpReplay._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
  }
  local_30 = 1;
  local_38 = &___7FDeleteFinishedStreamResult__6B_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_28);
  if ((*(int *)&param_2->field_0x10 != 0) &&
     (plVar1 = *(longlong **)&param_2->field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// DeleteFinishedStream @ 146cbb0a0

void __thiscall
FHttpNetworkReplayStreamer::DeleteFinishedStream
          (FHttpNetworkReplayStreamer *this,FString *param_1,int param_2,
          TDelegate<void___cdecl(FDeleteFinishedStreamResult_const_&),FDefaultDelegateUserPolicy>
          *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000146cbb0a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x148))(this,param_1,param_3);
  return;
}

// DownloadHeader @ 146cbb260

void __thiscall
FHttpNetworkReplayStreamer::DownloadHeader
          (FHttpNetworkReplayStreamer *this,
          TDelegate<void___cdecl(FDownloadHeaderResult_const_&),FDefaultDelegateUserPolicy> *param_1
          )

{
  code *pcVar1;
  IHttpRequest *pIVar2;
  bool bVar3;
  FHttpModule *pFVar4;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar5;
  ulong64 uVar6;
  IHttpRequest *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  FString local_38;
  FString local_28;
  TSharedPtr<IHttpRequest,1> local_18;
  
  pFVar4 = FHttpModule::Get();
  (**(code **)(pFVar4->_padding_ + 0x40))(pFVar4,&local_48);
  pIVar2 = local_48;
  pcVar1 = *(code **)(*(longlong *)local_48 + 0x68);
  ::FString::PrintfImpl(&local_38,L"%sreplay/%s/file/replay.header");
  (*pcVar1)(pIVar2,&local_38);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pIVar2 = local_48;
  pcVar1 = *(code **)(*(longlong *)local_48 + 0x60);
  ::FString::FString(&local_28,L"GET");
  (*pcVar1)(pIVar2,&local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(**(code **)(*(longlong *)local_48 + 0xf0))();
  if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  EnterCriticalSection(lpCriticalSection);
  puVar5 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)(lpCriticalSection + 1));
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy__V__TDelegate___A6AXAEBUFDownloadHeaderResult___ZUFDefaultDelegateUserPolicy______6B_
    ;
    TDelegate<void___cdecl(FDownloadHeaderResult_const_&),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(FDownloadHeaderResult_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(FDownloadHeaderResult_const_&),FDefaultDelegateUserPolicy> *)
               (puVar5 + 1),param_1);
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[4] = uVar6;
    *puVar5 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFHttpNetworkReplayStreamer____A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy__V__TDelegate___A6AXAEBUFDownloadHeaderResult___ZUFDefaultDelegateUserPolicy______6B_
    ;
    puVar5[6] = HttpDownloadHeaderFinished;
    puVar5[5] = this;
    if ((this == (FHttpNetworkReplayStreamer *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUserObject != nullptr && MethodPtr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x1d8,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  local_18.Object = local_48;
  local_18.SharedReferenceCount.ReferenceController = pTStack_40;
  if (pTStack_40 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_40->SharedReferenceCount = (atomic<int>)((int)pTStack_40->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddRequestToQueue(this,DownloadingHeader,&local_18,0,0.0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_40);
  return;
}

// EnumerateCheckpoints @ 146cbb480

void __thiscall FHttpNetworkReplayStreamer::EnumerateCheckpoints(FHttpNetworkReplayStreamer *this)

{
  code *pcVar1;
  IHttpRequest *pIVar2;
  bool bVar3;
  FHttpModule *pFVar4;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar5;
  ulong64 uVar6;
  LARGE_INTEGER local_res8;
  IHttpRequest *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  FString local_38;
  FString local_28;
  TSharedPtr<IHttpRequest,1> local_18;
  
  pFVar4 = FHttpModule::Get();
  (**(code **)(pFVar4->_padding_ + 0x40))(pFVar4,&local_48);
  pIVar2 = local_48;
  pcVar1 = *(code **)(*(longlong *)local_48 + 0x68);
  ::FString::PrintfImpl(&local_38,L"%sreplay/%s/event?group=checkpoint");
  (*pcVar1)(pIVar2,&local_38);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pIVar2 = local_48;
  pcVar1 = *(code **)(*(longlong *)local_48 + 0x60);
  ::FString::FString(&local_28,L"GET");
  (*pcVar1)(pIVar2,&local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(**(code **)(*(longlong *)local_48 + 0xf0))();
  if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  EnterCriticalSection(lpCriticalSection);
  puVar5 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)(lpCriticalSection + 1));
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFHttpNetworkReplayStreamer____A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar5[4] = HttpEnumerateCheckpointsFinished;
    puVar5[3] = this;
    if ((this == (FHttpNetworkReplayStreamer *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUserObject != nullptr && MethodPtr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x1d8,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  local_18.Object = local_48;
  local_18.SharedReferenceCount.ReferenceController = pTStack_40;
  if (pTStack_40 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_40->SharedReferenceCount = (atomic<int>)((int)pTStack_40->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddRequestToQueue(this,EnumeratingCheckpoints,&local_18,0,0.0);
  QueryPerformanceCounter(&local_res8);
  this->LastRefreshCheckpointTime =
       (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_40);
  return;
}

// EnumerateEvents @ 146cbb6a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FHttpNetworkReplayStreamer::EnumerateEvents
          (FHttpNetworkReplayStreamer *this,FString *param_1,FString *param_2,
          TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  longlong *plVar1;
  code *pcVar2;
  IHttpRequest *pIVar3;
  bool bVar4;
  FHttpModule *pFVar5;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar6;
  ulong64 uVar7;
  IHttpRequest *local_a8;
  TReferenceControllerBase<1> *pTStack_a0;
  undefined **local_98;
  undefined8 local_90;
  FJsonSerializable local_88;
  FReplayEventListItem *local_80;
  undefined8 local_78;
  FString local_70;
  FString local_60;
  TSharedPtr<IHttpRequest,1> local_48;
  FReadAccessScope local_38;
  
  if ((this->ServerURL).Data.ArrayNum < 2) {
    if (2 < (byte)LogHttpReplay._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
    }
    local_90 = 6;
    local_80 = (FReplayEventListItem *)0x0;
    local_78 = 0;
    local_98 = &___7FEnumerateEventsResult__6B_;
    local_88 = (FJsonSerializable)&___7FReplayEventList__6B_;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_3,&local_38);
    if ((*(int *)&param_3->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_3->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x68))(plVar1,&local_98);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_38);
    local_88 = (FJsonSerializable)&___7FReplayEventList__6B_;
    DestructItems<FReplayEventListItem,int>(local_80,(int)local_78);
    if (local_80 != (FReplayEventListItem *)0x0) {
      FMemory::Free(local_80);
    }
    FJsonSerializable::~FJsonSerializable(&local_88);
  }
  else {
    pFVar5 = FHttpModule::Get();
    (**(code **)(pFVar5->_padding_ + 0x40))(pFVar5,&local_a8);
    pIVar3 = local_a8;
    pcVar2 = *(code **)(*(longlong *)local_a8 + 0x68);
    ::FString::PrintfImpl(&local_70,L"%sreplay/%s/event?group=%s");
    (*pcVar2)(pIVar3,&local_70);
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    pIVar3 = local_a8;
    pcVar2 = *(code **)(*(longlong *)local_a8 + 0x60);
    ::FString::FString(&local_60,L"GET");
    (*pcVar2)(pIVar3,&local_60);
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
    lpCriticalSection = (LPCRITICAL_SECTION)(**(code **)(*(longlong *)local_a8 + 0xf0))();
    if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    EnterCriticalSection(lpCriticalSection);
    puVar6 = UE::Core::Private::DelegateAllocate
                       (0x38,(FDelegateAllocation *)(lpCriticalSection + 1));
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy__V__TDelegate___A6AXAEBUFEnumerateEventsResult___ZUFDefaultDelegateUserPolicy______6B_
      ;
      TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy>::
      TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy>
                ((TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy>
                  *)(puVar6 + 1),param_3);
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[4] = uVar7;
      *puVar6 = &
                ___7__TBaseRawMethodDelegateInstance__0A_VFHttpNetworkReplayStreamer____A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy__V__TDelegate___A6AXAEBUFEnumerateEventsResult___ZUFDefaultDelegateUserPolicy______6B_
      ;
      puVar6[6] = HttpEnumerateEventsFinished;
      puVar6[5] = this;
    }
    if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(lpCriticalSection);
    }
    local_48.Object = local_a8;
    local_48.SharedReferenceCount.ReferenceController = pTStack_a0;
    if (pTStack_a0 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_a0->SharedReferenceCount = (atomic<int>)((int)pTStack_a0->SharedReferenceCount + 1);
      UNLOCK();
    }
    AddRequestToQueue(this,EnumeratingCustomEvent,&local_48,0,0.0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_a0);
  }
  return;
}

// EnumerateEvents @ 146cbb950

void __thiscall
FHttpNetworkReplayStreamer::EnumerateEvents
          (FHttpNetworkReplayStreamer *this,FString *param_1,FString *param_2,int param_3,
          TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy>
          *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000146cbb958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0xa0))();
  return;
}

// EnumerateEvents @ 146cbb970

void __thiscall
FHttpNetworkReplayStreamer::EnumerateEvents
          (FHttpNetworkReplayStreamer *this,FString *param_1,
          TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy>
          *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000146cbb983. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0xa0))(this,&this->SessionName,param_1,param_2);
  return;
}

// EnumerateRecentStreams @ 146cbb990

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

void __thiscall
FHttpNetworkReplayStreamer::EnumerateRecentStreams
          (FHttpNetworkReplayStreamer *this,FNetworkReplayVersion *param_1,int param_2,
          TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  longlong *plVar1;
  code *pcVar2;
  IHttpRequest *pIVar3;
  bool bVar4;
  FHttpModule *pFVar5;
  ULocalPlayer *pUVar6;
  FUniqueNetIdWrapper *this_00;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar7;
  ulong64 uVar8;
  undefined1 auStackY_148 [32];
  FString local_108;
  IHttpRequest *local_f8;
  TReferenceControllerBase<1> *pTStack_f0;
  undefined **local_e8;
  undefined8 local_e0;
  FNetworkReplayStreamInfo *local_d8;
  undefined8 local_d0;
  FString *local_c8;
  undefined8 local_c0;
  FString local_b8;
  FString local_a8;
  TSharedPtr<IHttpRequest,1> local_98;
  FReadAccessScope local_88;
  FUniqueNetIdRepl local_70;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_148;
  if ((this->ServerURL).Data.ArrayNum < 2) {
    if (2 < (byte)LogHttpReplay._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
    }
    local_e0 = 6;
    local_d8 = (FNetworkReplayStreamInfo *)0x0;
    local_e8 = &___7FEnumerateStreamsResult__6B_;
    local_d0 = 0;
    local_c8 = (FString *)0x0;
    local_c0 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_3,&local_88);
    if ((*(int *)&param_3->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_3->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x68))(plVar1,&local_e8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_88);
    DestructItems<FString,int>(local_c8,(int)local_c0);
    if (local_c8 != (FString *)0x0) {
      FMemory::Free(local_c8);
    }
    DestructItems<FNetworkReplayStreamInfo,int>(local_d8,(int)local_d0);
    if (local_d8 != (FNetworkReplayStreamInfo *)0x0) {
      FMemory::Free(local_d8);
    }
  }
  else {
    pFVar5 = FHttpModule::Get();
    (**(code **)(pFVar5->_padding_ + 0x40))(pFVar5,&local_f8);
    pIVar3 = local_f8;
    pcVar2 = *(code **)(*(longlong *)local_f8 + 0x68);
    if ((((param_2 == -1) || (GWorld.World == (UWorld *)0x0)) || (GEngine == (UEngine *)0x0)) ||
       (pUVar6 = UEngine::GetLocalPlayerFromControllerId(GEngine,GWorld.World,param_2),
       pUVar6 == (ULocalPlayer *)0x0)) {
      local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_108.Data.ArrayNum = 0;
      local_108.Data.ArrayMax = 0;
    }
    else {
      this_00 = (FUniqueNetIdWrapper *)(**(code **)(pUVar6->_padding_ + 0x360))(pUVar6,&local_70);
      FUniqueNetIdWrapper::ToString(this_00,&local_108);
      FUniqueNetIdRepl::~FUniqueNetIdRepl(&local_70);
    }
    ::FString::PrintfImpl(&local_b8,L"%sreplay?app=%s&version=%u&cl=%u&recent=%s");
    (*pcVar2)(pIVar3,&local_b8);
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    pIVar3 = local_f8;
    pcVar2 = *(code **)(*(longlong *)local_f8 + 0x60);
    ::FString::FString(&local_a8,L"GET");
    (*pcVar2)(pIVar3,&local_a8);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    lpCriticalSection = (LPCRITICAL_SECTION)(**(code **)(*(longlong *)local_f8 + 0xf0))();
    if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    EnterCriticalSection(lpCriticalSection);
    puVar7 = UE::Core::Private::DelegateAllocate
                       (0x38,(FDelegateAllocation *)(lpCriticalSection + 1));
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &
                ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy__V__TDelegate___A6AXAEBUFEnumerateStreamsResult___ZUFDefaultDelegateUserPolicy______6B_
      ;
      TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy>::
      TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy>
                ((TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy>
                  *)(puVar7 + 1),param_3);
      uVar8 = FDelegateHandle::GenerateNewID();
      puVar7[4] = uVar8;
      *puVar7 = &
                ___7__TBaseRawMethodDelegateInstance__0A_VFHttpNetworkReplayStreamer____A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy__V__TDelegate___A6AXAEBUFEnumerateStreamsResult___ZUFDefaultDelegateUserPolicy______6B_
      ;
      puVar7[6] = HttpEnumerateSessionsFinished;
      puVar7[5] = this;
      if ((this == (FHttpNetworkReplayStreamer *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InUserObject != nullptr && MethodPtr != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                             ,0x1d8,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(lpCriticalSection);
    }
    local_98.Object = local_f8;
    local_98.SharedReferenceCount.ReferenceController = pTStack_f0;
    if (pTStack_f0 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_f0->SharedReferenceCount = (atomic<int>)((int)pTStack_f0->SharedReferenceCount + 1);
      UNLOCK();
    }
    AddRequestToQueue(this,EnumeratingSessions,&local_98,0,0.0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_f0);
  }
  return;
}

// EnumerateStreams @ 146cbbd10

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

void __thiscall
FHttpNetworkReplayStreamer::EnumerateStreams
          (FHttpNetworkReplayStreamer *this,FNetworkReplayVersion *param_1,int param_2,
          FString *param_3,TArray<FString,TSizedDefaultAllocator<32>_> *param_4,
          TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy>
          *param_5)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TConsoleVariableData<FString> *pTVar5;
  IHttpRequest *pIVar6;
  bool bVar7;
  uint uVar8;
  FHttpModule *pFVar9;
  ULocalPlayer *pUVar10;
  FUniqueNetIdWrapper *this_00;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar11;
  ulong64 uVar12;
  uint uVar13;
  longlong lVar14;
  ForAnyElementType _Src;
  int iVar15;
  uint uVar16;
  undefined1 auStackY_228 [32];
  ForAnyElementType local_1e8;
  int local_1e0;
  int local_1dc;
  ForAnyElementType local_1d8;
  int local_1d0;
  int local_1cc;
  ForAnyElementType local_1c8;
  int local_1c0;
  int local_1bc;
  ForAnyElementType local_1b8;
  int local_1b0;
  int local_1ac;
  FString local_1a8;
  FString local_198;
  IHttpRequest *local_188;
  TReferenceControllerBase<1> *pTStack_180;
  undefined **local_178;
  undefined8 local_170;
  FNetworkReplayStreamInfo *local_168;
  undefined8 local_160;
  FString *local_158;
  undefined8 local_150;
  undefined4 local_148;
  FString local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FScriptContainerElement *local_e8;
  uint uStack_e0;
  undefined4 uStack_dc;
  FString local_d8;
  TStringView<wchar_t> local_c8;
  FString local_b8;
  TSharedPtr<IHttpRequest,1> local_a8;
  FReadAccessScope local_98;
  FUniqueNetIdRepl local_80;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_148 = 0;
  if ((this->ServerURL).Data.ArrayNum < 2) {
    if (2 < (byte)LogHttpReplay._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
    }
    local_170 = 6;
    local_178 = &___7FEnumerateStreamsResult__6B_;
    local_168 = (FNetworkReplayStreamInfo *)0x0;
    local_160 = 0;
    local_158 = (FString *)0x0;
    local_150 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_5,&local_98);
    if ((*(int *)&param_5->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_5->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x68))(plVar1,&local_178);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_98);
    DestructItems<FString,int>(local_158,(int)local_150);
    if (local_158 != (FString *)0x0) {
      FMemory::Free(local_158);
    }
    DestructItems<FNetworkReplayStreamInfo,int>(local_168,(int)local_160);
    if (local_168 != (FNetworkReplayStreamInfo *)0x0) {
      FMemory::Free(local_168);
    }
  }
  else {
    pFVar9 = FHttpModule::Get();
    (**(code **)(pFVar9->_padding_ + 0x40))(pFVar9,&local_188);
    ::FString::PrintfImpl(&local_1a8,L"%sreplay?app=%s");
    if (param_1->Changelist != 0) {
      ::FString::PrintfImpl(&local_140,L"&cl=%u");
      iVar15 = local_140.Data.ArrayNum + -1;
      if (local_140.Data.ArrayNum == 0) {
        iVar15 = 0;
      }
      ::FString::AppendChars(&local_1a8,(wchar_t *)local_140.Data.AllocatorInstance.Data,iVar15);
      if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.Data.AllocatorInstance.Data);
      }
    }
    if (param_1->NetworkVersion != 0) {
      ::FString::PrintfImpl(&local_130,L"&version=%u");
      iVar15 = local_130.Data.ArrayNum + -1;
      if (local_130.Data.ArrayNum == 0) {
        iVar15 = 0;
      }
      ::FString::AppendChars(&local_1a8,(wchar_t *)local_130.Data.AllocatorInstance.Data,iVar15);
      if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130.Data.AllocatorInstance.Data);
      }
    }
    pTVar5 = CVarMetaFilterOverride.Ref;
    bVar7 = IsInParallelGameThread();
    if (((!bVar7) && (bVar7 = IsInGameThread(), !bVar7)) &&
       (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007945>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6c9,"GetShadowIndex() == 0"), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_1b8.Data = (FScriptContainerElement *)0x0;
    local_1b0 = pTVar5->ShadowedValue[0].Data.ArrayNum;
    lVar14 = (longlong)local_1b0;
    pFVar2 = pTVar5->ShadowedValue[0].Data.AllocatorInstance.Data;
    if (local_1b0 == 0) {
      local_1ac = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_1b0,0,&local_1b8,local_1b0,&local_1ac);
      memcpy(local_1b8.Data,pFVar2,lVar14 * 2);
    }
    pTVar5 = CVarMetaFilterOverride.Ref;
    if (local_1b0 < 2) {
      local_1e0 = (param_3->Data).ArrayNum;
      lVar14 = (longlong)local_1e0;
      pFVar2 = (param_3->Data).AllocatorInstance.Data;
      local_1e8.Data = (FScriptContainerElement *)0x0;
      if (local_1e0 == 0) {
        local_1dc = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_1e0,0,&local_1e8,local_1e0,&local_1dc);
        memcpy(local_1e8.Data,pFVar2,lVar14 * 2);
      }
      bVar4 = false;
      bVar7 = true;
      _Src.Data = local_1e8.Data;
      iVar15 = local_1e0;
    }
    else {
      bVar7 = IsInParallelGameThread();
      if (((!bVar7) && (bVar7 = IsInGameThread(), !bVar7)) &&
         (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6409875433831007945>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x6c9,"GetShadowIndex() == 0"), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_1d8.Data = (FScriptContainerElement *)0x0;
      local_1d0 = pTVar5->ShadowedValue[0].Data.ArrayNum;
      lVar14 = (longlong)local_1d0;
      pFVar2 = pTVar5->ShadowedValue[0].Data.AllocatorInstance.Data;
      if (local_1d0 == 0) {
        local_1cc = 0;
        bVar4 = true;
        bVar7 = false;
        _Src.Data = (FScriptContainerElement *)0x0;
        iVar15 = local_1d0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_1d0,0,&local_1d8,local_1d0,&local_1cc);
        memcpy(local_1d8.Data,pFVar2,lVar14 * 2);
        bVar4 = true;
        bVar7 = false;
        _Src.Data = local_1d8.Data;
        iVar15 = local_1d0;
      }
    }
    local_1c8.Data = (FScriptContainerElement *)0x0;
    local_1c0 = iVar15;
    if (iVar15 == 0) {
      local_1bc = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar15,0,&local_1c8,iVar15,&local_1bc);
      memcpy(local_1c8.Data,_Src.Data,(longlong)iVar15 * 2);
    }
    uVar13 = 0;
    if ((bVar7) && (local_1e8.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_1e8.Data);
    }
    if ((bVar4) && (local_1d8.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_1d8.Data);
    }
    if (local_1b8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data);
    }
    if (1 < local_1c0) {
      ::FString::PrintfImpl(&local_120,L"&meta=%s");
      iVar15 = local_120.Data.ArrayNum + -1;
      if (local_120.Data.ArrayNum == 0) {
        iVar15 = 0;
      }
      ::FString::AppendChars(&local_1a8,(wchar_t *)local_120.Data.AllocatorInstance.Data,iVar15);
      if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.Data.AllocatorInstance.Data);
      }
    }
    if ((((param_2 == -1) || (GWorld.World == (UWorld *)0x0)) || (GEngine == (UEngine *)0x0)) ||
       (pUVar10 = UEngine::GetLocalPlayerFromControllerId(GEngine,GWorld.World,param_2),
       pUVar10 == (ULocalPlayer *)0x0)) {
      local_198.Data.ArrayMax = 0;
      local_198.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_198.Data.ArrayNum = 0;
    }
    else {
      this_00 = (FUniqueNetIdWrapper *)(**(code **)(pUVar10->_padding_ + 0x360))(pUVar10,&local_80);
      FUniqueNetIdWrapper::ToString(this_00,&local_198);
      FUniqueNetIdRepl::~FUniqueNetIdRepl(&local_80);
    }
    uVar8 = 0;
    if (1 < local_198.Data.ArrayNum) {
      uStack_e0 = local_198.Data.ArrayNum - 1;
      if (local_198.Data.ArrayNum == 0) {
        uStack_e0 = uVar8;
      }
      local_c8._12_4_ = uStack_dc;
      local_c8.Size = uStack_e0;
      local_e8 = local_198.Data.AllocatorInstance.Data;
      local_c8.DataPtr = (wchar_t *)local_198.Data.AllocatorInstance.Data;
      FGenericPlatformHttp::UrlEncode(&local_b8,&local_c8);
      ::FString::PrintfImpl(&local_110,L"&user=%s");
      uVar16 = local_110.Data.ArrayNum - 1;
      if (local_110.Data.ArrayNum == 0) {
        uVar16 = uVar8;
      }
      ::FString::AppendChars(&local_1a8,(wchar_t *)local_110.Data.AllocatorInstance.Data,uVar16);
      if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_110.Data.AllocatorInstance.Data);
      }
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
    }
    iVar15 = param_4->ArrayNum;
    if (0 < iVar15) {
      do {
        uVar16 = uVar8;
        if ((int)uVar13 < iVar15) {
          uVar16 = ~uVar13 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        ::FString::PrintfImpl(&local_100,L"&%s");
        uVar16 = local_100.Data.ArrayNum - 1;
        if (local_100.Data.ArrayNum == 0) {
          uVar16 = uVar8;
        }
        ::FString::AppendChars(&local_1a8,(wchar_t *)local_100.Data.AllocatorInstance.Data,uVar16);
        if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_100.Data.AllocatorInstance.Data);
        }
        iVar15 = param_4->ArrayNum;
        uVar13 = uVar13 + 1;
      } while ((int)uVar13 < iVar15);
    }
    (**(code **)(*(longlong *)local_188 + 0x68))(local_188,&local_1a8);
    pIVar6 = local_188;
    pcVar3 = *(code **)(*(longlong *)local_188 + 0x60);
    ::FString::FString(&local_d8,L"GET");
    (*pcVar3)(pIVar6,&local_d8);
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    lpCriticalSection = (LPCRITICAL_SECTION)(**(code **)(*(longlong *)local_188 + 0xf0))();
    if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    EnterCriticalSection(lpCriticalSection);
    puVar11 = UE::Core::Private::DelegateAllocate
                        (0x38,(FDelegateAllocation *)(lpCriticalSection + 1));
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &
                 ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy__V__TDelegate___A6AXAEBUFEnumerateStreamsResult___ZUFDefaultDelegateUserPolicy______6B_
      ;
      TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy>::
      TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy>
                ((TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy>
                  *)(puVar11 + 1),param_5);
      uVar12 = FDelegateHandle::GenerateNewID();
      puVar11[4] = uVar12;
      *puVar11 = &
                 ___7__TBaseRawMethodDelegateInstance__0A_VFHttpNetworkReplayStreamer____A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy__V__TDelegate___A6AXAEBUFEnumerateStreamsResult___ZUFDefaultDelegateUserPolicy______6B_
      ;
      puVar11[6] = HttpEnumerateSessionsFinished;
      puVar11[5] = this;
      if ((this == (FHttpNetworkReplayStreamer *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InUserObject != nullptr && MethodPtr != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                             ,0x1d8,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(lpCriticalSection);
    }
    local_a8.Object = local_188;
    local_a8.SharedReferenceCount.ReferenceController = pTStack_180;
    if (pTStack_180 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_180->SharedReferenceCount = (atomic<int>)((int)pTStack_180->SharedReferenceCount + 1);
      UNLOCK();
    }
    AddRequestToQueue(this,EnumeratingSessions,&local_a8,0,0.0);
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
    if (local_1c8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data);
    }
    if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_180)
    ;
  }
  return;
}

// FlushCheckpoint @ 146cbd120

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FHttpNetworkReplayStreamer::FlushCheckpoint(FHttpNetworkReplayStreamer *this,uint param_1)

{
  if ((this->CheckpointArchive).Buffer.ArrayNum == 0) {
    if (2 < (byte)LogHttpReplay._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
      return;
    }
  }
  else {
    FlushStream(this);
    FlushCheckpointInternal(this,param_1);
  }
  return;
}

// FlushCheckpointInternal @ 146cbd180

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FHttpNetworkReplayStreamer::FlushCheckpointInternal(FHttpNetworkReplayStreamer *this,uint param_1)

{
  int iVar1;
  code *pcVar2;
  UEnum *pUVar3;
  IHttpRequest *pIVar4;
  bool bVar5;
  char cVar6;
  FHttpModule *pFVar7;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar8;
  ulong64 uVar9;
  UPackage *pUVar10;
  wchar_t *pwVar11;
  LARGE_INTEGER local_res8;
  UEnum *local_res18;
  LARGE_INTEGER local_res20;
  IHttpRequest *local_e8;
  TReferenceControllerBase<1> *pTStack_e0;
  undefined8 local_d8;
  FWeakObjectPtr local_d0;
  UEnum *local_c8;
  FString local_c0;
  longlong local_b0;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  LARGE_INTEGER local_68 [2];
  IHttpRequest *local_58;
  TReferenceControllerBase<1> *pTStack_50;
  TSharedPtr<IHttpRequest,1> local_48 [2];
  wchar_t *pwVar12;
  
  if ((((this->SessionName).Data.ArrayNum < 2) || (this->StreamerState != Recording)) ||
     ((this->CheckpointArchive).Buffer.ArrayNum == 0)) {
    (this->CheckpointArchive).Buffer.ArrayNum = 0;
    iVar1 = (this->CheckpointArchive).Buffer.ArrayMax;
  }
  else {
    QueryPerformanceCounter(&local_res8);
    pFVar7 = FHttpModule::Get();
    (**(code **)(pFVar7->_padding_ + 0x40))(pFVar7,&local_e8);
    lpCriticalSection = (LPCRITICAL_SECTION)(**(code **)(*(longlong *)local_e8 + 0xf0))();
    if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    EnterCriticalSection(lpCriticalSection);
    puVar8 = UE::Core::Private::DelegateAllocate
                       (0x28,(FDelegateAllocation *)(lpCriticalSection + 1));
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &
                ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
      ;
      uVar9 = FDelegateHandle::GenerateNewID();
      puVar8[2] = uVar9;
      *puVar8 = &
                ___7__TBaseRawMethodDelegateInstance__0A_VFHttpNetworkReplayStreamer____A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
      ;
      puVar8[4] = HttpUploadCheckpointFinished;
      puVar8[3] = this;
    }
    if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(lpCriticalSection);
    }
    pIVar4 = local_e8;
    pcVar2 = *(code **)(*(longlong *)local_e8 + 0x68);
    ::FString::PrintfImpl
              (&local_a8,
               L"%sreplay/%s/event?group=checkpoint&time1=%i&time2=%i&meta=%i&incrementSize=false");
    (*pcVar2)(pIVar4,&local_a8);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    pIVar4 = local_e8;
    pcVar2 = *(code **)(*(longlong *)local_e8 + 0x60);
    ::FString::FString(&local_98,L"POST");
    (*pcVar2)(pIVar4,&local_98);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    pIVar4 = local_e8;
    pcVar2 = *(code **)(*(longlong *)local_e8 + 0xb0);
    ::FString::FString(&local_78,L"application/octet-stream");
    ::FString::FString(&local_88,L"Content-Type");
    (*pcVar2)(pIVar4,&local_88,&local_78);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    local_58 = local_e8;
    pTStack_50 = pTStack_e0;
    pcVar2 = *(code **)(this->_padding_ + 0x1f8);
    if (pTStack_e0 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_e0->SharedReferenceCount = (atomic<int>)((int)pTStack_e0->SharedReferenceCount + 1);
      UNLOCK();
    }
    cVar6 = (*pcVar2)(this,&local_58,&(this->CheckpointArchive).Buffer);
    if (cVar6 == '\0') {
      if (Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton == (UEnum *)0x0) {
        pUVar10 = Z_Construct_UPackage__Script_HttpNetworkReplayStreaming();
        Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton =
             GetStaticEnum(Z_Construct_UEnum_HttpNetworkReplayStreaming_EHttpReplayResult,
                           (UObject *)pUVar10,L"EHttpReplayResult");
      }
      pUVar3 = Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton;
      local_d8 = 4;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton != (UEnum *)0x0)) {
        UE::GC::MarkAsReachable
                  ((UObject *)Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton);
      }
      local_d0.ObjectIndex = 0;
      local_d0.ObjectSerialNumber = 0;
      local_res18 = pUVar3;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UEnum *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      FWeakObjectPtr::operator=(&local_d0,(FObjectPtr)&local_res18);
      local_c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c0.Data.ArrayNum = 0;
      local_c0.Data.ArrayMax = 0;
      local_b0 = 0;
      pwVar11 = L"EHttpReplayResult::CompressionFailed";
      do {
        pwVar12 = pwVar11;
        pwVar11 = pwVar12 + 1;
      } while (*pwVar11 != L':');
      local_c8 = pUVar3;
      ::FString::operator=(&local_c0,pwVar12 + 3);
      (**(code **)(this->_padding_ + 0x1c0))(this);
      (**(code **)(this->_padding_ + 0x178))(this,&local_d8);
      if (local_b0 != 0) {
        (**(code **)(local_b0 + -0x10))(local_b0 + -0x10);
      }
      if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_e0);
      QueryPerformanceCounter(local_68);
      return;
    }
    local_48[0].Object = local_e8;
    local_48[0].SharedReferenceCount.ReferenceController = pTStack_e0;
    if (pTStack_e0 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_e0->SharedReferenceCount = (atomic<int>)((int)pTStack_e0->SharedReferenceCount + 1);
      UNLOCK();
    }
    AddRequestToQueue(this,UploadingCheckpoint,local_48,2,__real_40000000);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_e0);
    QueryPerformanceCounter(&local_res20);
    if (4 < (byte)LogHttpReplay._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
    }
    (this->CheckpointArchive).Buffer.ArrayNum = 0;
    iVar1 = (this->CheckpointArchive).Buffer.ArrayMax;
  }
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->CheckpointArchive).Buffer.AllocatorInstance,0,
               &(this->CheckpointArchive).Buffer.ArrayMax);
  }
  (this->CheckpointArchive).Pos = 0;
  return;
}

// FlushStream @ 146cbd5f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FHttpNetworkReplayStreamer::FlushStream(FHttpNetworkReplayStreamer *this)

{
  int *piVar1;
  code *pcVar2;
  UEnum *pUVar3;
  IHttpRequest *pIVar4;
  bool bVar5;
  char cVar6;
  FHttpModule *pFVar7;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar8;
  ulong64 uVar9;
  UPackage *pUVar10;
  longlong lVar11;
  wchar_t *pwVar12;
  UEnum *local_res8;
  LARGE_INTEGER local_res10;
  IHttpRequest *local_c8;
  TReferenceControllerBase<1> *pTStack_c0;
  undefined8 local_b8;
  FWeakObjectPtr local_b0;
  UEnum *local_a8;
  FString local_a0;
  longlong local_90;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  IHttpRequest *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  TSharedPtr<IHttpRequest,1> local_38;
  wchar_t *pwVar13;
  
  if ((((this->StreamArchive)._padding_ & 4) == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StreamArchive.IsSaving()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\HttpNetworkReplayStreaming\\Private\\HttpNetworkReplayStreaming.cpp"
                         ,0x28d,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((this->SessionName).Data.ArrayNum < 2) {
    if (2 < (byte)LogHttpReplay._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
      return;
    }
  }
  else if ((this->StreamArchive).Buffer.ArrayNum != 0) {
    if (5 < (byte)LogHttpReplay._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
    }
    pFVar7 = FHttpModule::Get();
    (**(code **)(pFVar7->_padding_ + 0x40))(pFVar7,&local_c8);
    lpCriticalSection = (LPCRITICAL_SECTION)(**(code **)(*(longlong *)local_c8 + 0xf0))();
    if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    EnterCriticalSection(lpCriticalSection);
    puVar8 = UE::Core::Private::DelegateAllocate
                       (0x28,(FDelegateAllocation *)(lpCriticalSection + 1));
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &
                ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
      ;
      uVar9 = FDelegateHandle::GenerateNewID();
      puVar8[2] = uVar9;
      *puVar8 = &
                ___7__TBaseRawMethodDelegateInstance__0A_VFHttpNetworkReplayStreamer____A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
      ;
      puVar8[4] = HttpUploadStreamFinished;
      puVar8[3] = this;
    }
    if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(lpCriticalSection);
    }
    local_48 = local_c8;
    pTStack_40 = pTStack_c0;
    pcVar2 = *(code **)(this->_padding_ + 0x1f8);
    if (pTStack_c0 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_c0->SharedReferenceCount = (atomic<int>)((int)pTStack_c0->SharedReferenceCount + 1);
      UNLOCK();
    }
    cVar6 = (*pcVar2)(this,&local_48,&(this->StreamArchive).Buffer);
    if (cVar6 == '\0') {
      if (Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton == (UEnum *)0x0) {
        pUVar10 = Z_Construct_UPackage__Script_HttpNetworkReplayStreaming();
        Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton =
             GetStaticEnum(Z_Construct_UEnum_HttpNetworkReplayStreaming_EHttpReplayResult,
                           (UObject *)pUVar10,L"EHttpReplayResult");
      }
      pUVar3 = Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton;
      local_b8 = 4;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton != (UEnum *)0x0)) {
        UE::GC::MarkAsReachable
                  ((UObject *)Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton);
      }
      local_b0.ObjectIndex = 0;
      local_b0.ObjectSerialNumber = 0;
      local_res8 = pUVar3;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UEnum *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      FWeakObjectPtr::operator=(&local_b0,(FObjectPtr)&local_res8);
      local_a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a0.Data.ArrayNum = 0;
      local_a0.Data.ArrayMax = 0;
      local_90 = 0;
      pwVar12 = L"EHttpReplayResult::CompressionFailed";
      do {
        pwVar13 = pwVar12;
        pwVar12 = pwVar13 + 1;
      } while (*pwVar12 != L':');
      local_a8 = pUVar3;
      ::FString::operator=(&local_a0,pwVar13 + 3);
      (**(code **)(this->_padding_ + 0x1c0))(this);
      (**(code **)(this->_padding_ + 0x178))(this,&local_b8);
      if (local_90 != 0) {
        (**(code **)(local_90 + -0x10))(local_90 + -0x10);
      }
      if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      }
    }
    else {
      lVar11 = (**(code **)(*(longlong *)local_c8 + 0x40))();
      pIVar4 = local_c8;
      this->TotalUploadBytes = this->TotalUploadBytes + lVar11;
      pcVar2 = *(code **)(*(longlong *)local_c8 + 0x68);
      ::FString::PrintfImpl
                (&local_88,
                 L"%sreplay/%s/file/stream.%i?numChunks=%i&time=%i&mTime1=%i&mTime2=%i&absSize=%llu"
                );
      (*pcVar2)(pIVar4,&local_88);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      pIVar4 = local_c8;
      pcVar2 = *(code **)(*(longlong *)local_c8 + 0x60);
      ::FString::FString(&local_78,L"POST");
      (*pcVar2)(pIVar4,&local_78);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      pIVar4 = local_c8;
      pcVar2 = *(code **)(*(longlong *)local_c8 + 0xb0);
      ::FString::FString(&local_58,L"application/octet-stream");
      ::FString::FString(&local_68,L"Content-Type");
      (*pcVar2)(pIVar4,&local_68);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      piVar1 = &(this->StreamArchive).Buffer.ArrayMax;
      (this->StreamArchive).Buffer.ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,0,&(this->StreamArchive).Buffer.AllocatorInstance,0,piVar1);
      }
      this->StreamChunkIndex = this->StreamChunkIndex + 1;
      local_38.Object = local_c8;
      local_38.SharedReferenceCount.ReferenceController = pTStack_c0;
      this->StreamTimeRangeStart = this->StreamTimeRangeEnd;
      (this->StreamArchive).Pos = 0;
      if (pTStack_c0 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTStack_c0->SharedReferenceCount = (atomic<int>)((int)pTStack_c0->SharedReferenceCount + 1);
        UNLOCK();
      }
      AddRequestToQueue(this,UploadingStream,&local_38,2,__real_40000000);
      QueryPerformanceCounter(&local_res10);
      this->LastChunkTime =
           (double)local_res10.QuadPart * FGenericPlatformTime::SecondsPerCycle +
           __real_4170000000000000;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_c0);
  }
  return;
}

// GetCheckpointArchive @ 146cbdb30

FArchive * __thiscall
FHttpNetworkReplayStreamer::GetCheckpointArchive(FHttpNetworkReplayStreamer *this)

{
  FArchive *pFVar1;
  
  pFVar1 = (FArchive *)&this->CheckpointArchive;
  if ((this->SessionName).Data.ArrayNum < 2) {
    pFVar1 = (FArchive *)0x0;
  }
  return pFVar1;
}

// GetDemoPath @ 146cbdb50

EStreamingOperationResult __thiscall
FHttpNetworkReplayStreamer::GetDemoPath(FHttpNetworkReplayStreamer *this,FString *param_1)

{
  return Unsupported;
}

// GetHeaderArchive @ 146cbdc40

FArchive * __thiscall FHttpNetworkReplayStreamer::GetHeaderArchive(FHttpNetworkReplayStreamer *this)

{
  return (FArchive *)&this->HeaderArchive;
}

// GetMaxFriendlyNameSize @ 146cbdc50

uint __thiscall FHttpNetworkReplayStreamer::GetMaxFriendlyNameSize(FHttpNetworkReplayStreamer *this)

{
  return 0;
}

// GetRecordingMetadata @ 146cbdce0

FString * __thiscall
FHttpNetworkReplayStreamer::GetRecordingMetadata
          (FHttpNetworkReplayStreamer *this,FString *__return_storage_ptr__)

{
  wchar_t *pwVar1;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pwVar1 = FCommandLine::Get();
  FParse::Value(pwVar1,L"ReplayMeta=",__return_storage_ptr__,true,(wchar_t **)0x0);
  return __return_storage_ptr__;
}

// GetReplayID @ 146cbdd30

FString * __thiscall
FHttpNetworkReplayStreamer::GetReplayID
          (FHttpNetworkReplayStreamer *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->SessionName);
  return __return_storage_ptr__;
}

// GetReplayStreamerState @ 146cbdd60

EReplayStreamerState __thiscall
FHttpNetworkReplayStreamer::GetReplayStreamerState(FHttpNetworkReplayStreamer *this)

{
  return this->StreamerState;
}

// GetStreamingArchive @ 146cbdd70

FArchive * __thiscall
FHttpNetworkReplayStreamer::GetStreamingArchive(FHttpNetworkReplayStreamer *this)

{
  return (FArchive *)&this->StreamArchive;
}

// GetTotalDemoTime @ 146cbdd80

uint __thiscall FHttpNetworkReplayStreamer::GetTotalDemoTime(FHttpNetworkReplayStreamer *this)

{
  return this->TotalDemoTimeInMS;
}

// GotoCheckpointIndex @ 146cbdeb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FHttpNetworkReplayStreamer::GotoCheckpointIndex
          (FHttpNetworkReplayStreamer *this,int param_1,
          TDelegate<void___cdecl(FGotoResult_const_&),FDefaultDelegateUserPolicy> *param_2,
          EReplayCheckpointType param_3)

{
  longlong *plVar1;
  IHttpRequest *pIVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  FQueuedHttpRequest *pFVar6;
  FQueuedHttpRequest *pFVar7;
  FHttpModule *pFVar8;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar9;
  ulong64 uVar10;
  code *pcVar11;
  FQueuedHttpRequest *pFVar12;
  IHttpRequest *local_158;
  TReferenceControllerBase<1> *pTStack_150;
  undefined **local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  FGotoResult local_128;
  FGotoResult local_108;
  undefined **local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  TSharedPtr<FQueuedHttpRequest,1> local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  TSharedPtr<IHttpRequest,1> local_88;
  FReadAccessScope local_78;
  FReadAccessScope local_60;
  FReadAccessScope local_48;
  
  cVar3 = (**(code **)(this->_padding_ + 0x48))(this,param_3);
  if (cVar3 == '\0') {
    if (2 < (byte)LogHttpReplay._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
    }
    local_140 = 6;
    local_148 = &___7FGotoResult__6B_;
    local_138 = 0xffffffffffffffff;
    local_130 = 0xfffffffe;
    local_12c = 0xfffffffe;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_48);
    if ((*(int *)&param_2->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_2->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x68))(plVar1,&local_148);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_48);
    return;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->GotoCheckpointDelegate
             ,&local_78);
  if (((*(int *)&(this->GotoCheckpointDelegate).field_0x10 != 0) &&
      (plVar1 = *(longlong **)&(this->GotoCheckpointDelegate).field_0x8, plVar1 != (longlong *)0x0))
     && (cVar3 = (**(code **)(*plVar1 + 0x38))(), cVar3 != '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_78);
LAB_146cbdfaf:
    if (2 < (byte)LogHttpReplay._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
    }
    local_e0 = 6;
    local_e8 = &___7FGotoResult__6B_;
    local_d8 = 0xffffffffffffffff;
    local_d0 = 0xfffffffe;
    local_cc = 0xfffffffe;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_60);
    if ((*(int *)&param_2->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_2->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x68))(plVar1,&local_e8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_60);
    return;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_78);
  if ((this->DownloadCheckpointIndex != -1) || (this->DeltaDownloadCheckpointIndex != -1))
  goto LAB_146cbdfaf;
  if ((this->ServerURL).Data.ArrayNum < 2) {
    if (2 < (byte)LogHttpReplay._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
    }
    local_128._padding_ = 6;
    local_128._padding_ = (longlong)&___7FGotoResult__6B_;
    local_128.ExtraTimeMS = -1;
    local_128.CheckpointInfo.CheckpointStartTime = 0xfffffffe;
    local_128.CheckpointInfo.CheckpointIndex = 0xfffffffe;
    TDelegate<void___cdecl(FGotoResult_const_&),FDefaultDelegateUserPolicy>::ExecuteIfBound
              (param_2,&local_128);
    return;
  }
  if (param_1 == -1) {
    TDelegate<void___cdecl(FGotoResult_const_&),FDefaultDelegateUserPolicy>::operator=
              (&this->GotoCheckpointDelegate,param_2);
    pcVar11 = *(code **)(this->_padding_ + 0x70);
    uVar5 = IntCastChecked<unsigned_int,__int64>(this->LastGotoTimeInMS);
    (*pcVar11)(this,0,uVar5);
    pFVar7 = (FQueuedHttpRequest *)0x0;
    this->LastChunkTime = 0.0;
    pFVar6 = ::operator_new(0x38);
    pFVar12 = pFVar7;
    if (pFVar6 != (FQueuedHttpRequest *)0x0) {
      pFVar6->Type = UploadingCustomEvent;
      pFVar6->_padding_ = (longlong)&___7FQueuedHttpRequest__6B_;
      (pFVar6->Request).Object = (IHttpRequest *)0x0;
      (pFVar6->Request).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      pFVar6->RetryProgress = 0;
      pFVar6->MaxRetries = 0;
      pFVar6->RetryDelay = 0.0;
      pFVar6->NextRetryTime = 0.0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      pFVar6->_padding_ = (longlong)&___7FQueuedGotoFakeCheckpoint__6B_;
      pFVar12 = pFVar6;
    }
    local_c8.Object = pFVar12;
    pFVar6 = ::operator_new(0x18);
    if (pFVar6 != (FQueuedHttpRequest *)0x0) {
      pFVar6->Type = UploadingHeader;
      pFVar6->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_VFQueuedGotoFakeCheckpoint__U__DefaultDeleter_VFQueuedGotoFakeCheckpoint___SharedPointerInternals___00_SharedPointerInternals__6B_
      ;
      *(undefined4 *)&pFVar6->field_0xc = 1;
      (pFVar6->Request).Object = (IHttpRequest *)pFVar12;
      pFVar7 = pFVar6;
    }
    local_c8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar7;
    AddCustomRequestToQueue(this,&local_c8);
    return;
  }
  if ((param_1 < 0) || ((this->CheckpointList).ReplayEvents.ArrayNum <= param_1)) {
    if (2 < (byte)LogHttpReplay._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
    }
    local_108._padding_ = 6;
    local_108._padding_ = (longlong)&___7FGotoResult__6B_;
    local_108.ExtraTimeMS = -1;
    local_108.CheckpointInfo.CheckpointStartTime = 0xfffffffe;
    local_108.CheckpointInfo.CheckpointIndex = 0xfffffffe;
    TDelegate<void___cdecl(FGotoResult_const_&),FDefaultDelegateUserPolicy>::ExecuteIfBound
              (param_2,&local_108);
    return;
  }
  pFVar8 = FHttpModule::Get();
  (**(code **)(pFVar8->_padding_ + 0x40))(pFVar8,&local_158);
  pIVar2 = local_158;
  pcVar11 = *(code **)(*(longlong *)local_158 + 0x60);
  ::FString::FString(&local_b8,L"GET");
  (*pcVar11)(pIVar2,&local_b8);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  pIVar2 = local_158;
  if (param_3 == Delta) {
    this->DeltaDownloadCheckpointIndex = 0;
    pcVar11 = *(code **)(*(longlong *)local_158 + 0x68);
    if (((this->CheckpointList).ReplayEvents.ArrayNum < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    ::FString::PrintfImpl(&local_a8,L"%sevent/%s");
    (*pcVar11)(pIVar2,&local_a8);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    lpCriticalSection = (LPCRITICAL_SECTION)(**(code **)(*(longlong *)local_158 + 0xf0))();
    if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar4)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    EnterCriticalSection(lpCriticalSection);
    puVar9 = UE::Core::Private::DelegateAllocate
                       (0x28,(FDelegateAllocation *)(lpCriticalSection + 1));
    if (puVar9 == (undefined8 *)0x0) goto LAB_146cbe484;
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFHttpNetworkReplayStreamer____A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    pcVar11 = HttpDownloadCheckpointDeltaFinished;
  }
  else {
    pcVar11 = *(code **)(*(longlong *)local_158 + 0x68);
    uVar5 = 0;
    if (param_1 < (this->CheckpointList).ReplayEvents.ArrayNum) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    ::FString::PrintfImpl(&local_98,L"%sevent/%s");
    (*pcVar11)(pIVar2,&local_98);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    lpCriticalSection = (LPCRITICAL_SECTION)(**(code **)(*(longlong *)local_158 + 0xf0))();
    if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar4)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    EnterCriticalSection(lpCriticalSection);
    puVar9 = UE::Core::Private::DelegateAllocate
                       (0x28,(FDelegateAllocation *)(lpCriticalSection + 1));
    if (puVar9 == (undefined8 *)0x0) goto LAB_146cbe484;
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFHttpNetworkReplayStreamer____A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    pcVar11 = HttpDownloadCheckpointFinished;
  }
  puVar9[3] = this;
  puVar9[4] = pcVar11;
LAB_146cbe484:
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  TDelegate<void___cdecl(FGotoResult_const_&),FDefaultDelegateUserPolicy>::operator=
            (&this->GotoCheckpointDelegate,param_2);
  local_88.Object = local_158;
  local_88.SharedReferenceCount.ReferenceController = pTStack_150;
  this->DownloadCheckpointIndex = param_1;
  if (pTStack_150 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_150->SharedReferenceCount = (atomic<int>)((int)pTStack_150->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddRequestToQueue(this,DownloadingCheckpoint,&local_88,0,0.0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_150);
  return;
}

// GotoTimeInMS @ 146cbe550

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FHttpNetworkReplayStreamer::GotoTimeInMS
          (FHttpNetworkReplayStreamer *this,uint param_1,
          TDelegate<void___cdecl(FGotoResult_const_&),FDefaultDelegateUserPolicy> *param_2,
          EReplayCheckpointType param_3)

{
  int *piVar1;
  TArray<FReplayEventListItem,TSizedDefaultAllocator<32>_> *pTVar2;
  longlong *plVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  FReadAccessScope *this_00;
  int iVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  int *local_res8;
  undefined **local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  FGotoResult local_a8;
  undefined **local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  FReadAccessScope local_68;
  FReadAccessScope local_50;
  
  cVar5 = (**(code **)(this->_padding_ + 0x48))(this,param_3);
  if (cVar5 == '\0') {
    if (4 < (byte)LogHttpReplay._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
    }
    local_c0 = 6;
    local_c8 = &___7FGotoResult__6B_;
    local_b8 = 0xffffffffffffffff;
    local_b0 = 0xfffffffe;
    local_ac = 0xfffffffe;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_50);
    if ((*(int *)&param_2->field_0x10 != 0) &&
       (plVar3 = *(longlong **)&param_2->field_0x8, plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x68))(plVar3,&local_c8);
    }
    this_00 = &local_50;
LAB_146cbe8e7:
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (this_00);
    return;
  }
  if ((this->LastGotoTimeInMS != -1) || (this->DownloadCheckpointIndex != -1)) {
    if (4 < (byte)LogHttpReplay._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
    }
    local_80 = 6;
    local_88 = &___7FGotoResult__6B_;
    local_78 = 0xffffffffffffffff;
    local_70 = 0xfffffffe;
    local_6c = 0xfffffffe;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_68);
    if ((*(int *)&param_2->field_0x10 != 0) &&
       (plVar3 = *(longlong **)&param_2->field_0x8, plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x68))(plVar3,&local_88);
    }
    this_00 = &local_68;
    goto LAB_146cbe8e7;
  }
  bVar6 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->GotoCheckpointDelegate);
  if (bVar6) {
    if (2 < (byte)LogHttpReplay._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
    }
    local_a8._padding_ = 6;
    local_a8._padding_ = (longlong)&___7FGotoResult__6B_;
    local_a8.ExtraTimeMS = -1;
    local_a8.CheckpointInfo.CheckpointStartTime = 0xfffffffe;
    local_a8.CheckpointInfo.CheckpointIndex = 0xfffffffe;
    TDelegate<void___cdecl(FGotoResult_const_&),FDefaultDelegateUserPolicy>::ExecuteIfBound
              (param_2,&local_a8);
    return;
  }
  if (5 < (byte)LogHttpReplay._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
  }
  if ((this->DownloadCheckpointIndex != -1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("DownloadCheckpointIndex == -1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\HttpNetworkReplayStreaming\\Private\\HttpNetworkReplayStreaming.cpp"
                         ,0x3d8,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((this->LastGotoTimeInMS != -1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("LastGotoTimeInMS == -1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\HttpNetworkReplayStreaming\\Private\\HttpNetworkReplayStreaming.cpp"
                         ,0x3d9,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  piVar1 = &(this->CheckpointList).ReplayEvents.ArrayNum;
  iVar7 = *piVar1;
  iVar11 = -1;
  uVar9 = this->TotalDemoTimeInMS;
  if (param_1 < this->TotalDemoTimeInMS) {
    uVar9 = param_1;
  }
  this->LastGotoTimeInMS = (ulonglong)uVar9;
  pTVar2 = &(this->CheckpointList).ReplayEvents;
  if (0 < iVar7) {
    uVar8 = iVar7 - 1;
    uVar9 = 0;
    if ((int)uVar8 < iVar7) {
      uVar9 = ~uVar8 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (*(uint *)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar8 * 0x40 + 0x38) <= param_1)
    {
      iVar11 = *piVar1 + -1;
      goto LAB_146cbe839;
    }
  }
  local_res8 = &(this->CheckpointList).ReplayEvents.ArrayNum;
  iVar7 = *piVar1;
  uVar9 = 0;
  if (0 < iVar7) {
    lVar10 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar9 < iVar7) {
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
      if (param_1 < *(uint *)((pTVar2->AllocatorInstance).Data + lVar10 + 0x38)) {
        iVar11 = uVar9 - 1;
        break;
      }
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 0x40;
      iVar7 = *local_res8;
    } while ((int)uVar9 < iVar7);
  }
LAB_146cbe839:
                    /* WARNING: Could not recover jumptable at 0x000146cbe871. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x38))(this,iVar11,param_2,param_3);
  return;
}

// HasPendingHttpRequests @ 146cbe910

bool __thiscall FHttpNetworkReplayStreamer::HasPendingHttpRequests(FHttpNetworkReplayStreamer *this)

{
  if (((this->InFlightHttpRequest).Object == (FQueuedHttpRequest *)0x0) &&
     ((this->QueuedHttpRequests).ArrayNum < 1)) {
    return false;
  }
  return true;
}

// HttpAddUserFinished @ 146cbea40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FHttpNetworkReplayStreamer::HttpAddUserFinished
          (FHttpNetworkReplayStreamer *this,TSharedPtr<IHttpRequest,1> *param_1,
          TSharedPtr<IHttpResponse,1> *param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TSharedPtr<IHttpRequest,1> local_48;
  TSharedPtr<IHttpResponse,1> local_38;
  TSharedPtr<IHttpRequest,1> local_28;
  FString local_18;
  
  local_48.Object = param_1->Object;
  local_48.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  RequestFinished(this,Recording,AddingUser,&local_48);
  if (param_3) {
    if ((param_2->Object == (IHttpResponse *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar3 = (**(code **)((longlong)*param_2->Object + 0x58))();
    if (iVar3 == 0xcc) {
      if (5 < (byte)LogHttpReplay._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
      }
      goto LAB_146cbeb6f;
    }
  }
  if (2 < (byte)LogHttpReplay._0_1_) {
    local_38.Object = param_2->Object;
    local_38.SharedReferenceCount.ReferenceController =
         (param_2->SharedReferenceCount).ReferenceController;
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_28.Object = param_1->Object;
    local_28.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    BuildRequestErrorString(&local_18,&local_28,&local_38);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
LAB_146cbeb6f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// HttpDownloadCheckpointDeltaFinished @ 146cbeba0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FHttpNetworkReplayStreamer::HttpDownloadCheckpointDeltaFinished
          (FHttpNetworkReplayStreamer *this,TSharedPtr<IHttpRequest,1> *param_1,
          TSharedPtr<IHttpResponse,1> *param_2,bool param_3)

{
  int *piVar1;
  TDelegate<void___cdecl(FGotoResult_const_&),FDefaultDelegateUserPolicy> *this_00;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  IHttpRequest *pIVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  IHttpResponse *pIVar8;
  longlong lVar9;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar10;
  FHttpModule *pFVar11;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar12;
  ulong64 uVar13;
  uint uVar14;
  uint uVar15;
  FMRSWRecursiveAccessDetector *this_01;
  code *pcVar16;
  undefined7 uVar18;
  uint *puVar17;
  uint uVar19;
  wchar_t *_Str;
  uint local_res8 [2];
  undefined8 local_res10;
  undefined1 local_418 [8];
  ForAnyElementType local_410;
  ulonglong local_408;
  undefined1 local_400 [8];
  ForAnyElementType local_3f8;
  ulonglong local_3f0;
  undefined1 local_3e8 [8];
  ForAnyElementType local_3e0;
  ulonglong local_3d8;
  undefined1 local_3d0 [8];
  ForAnyElementType local_3c8;
  ulonglong local_3c0;
  code *local_3b8;
  IHttpRequest *local_3a8;
  TReferenceControllerBase<1> *pTStack_3a0;
  undefined **local_398;
  undefined8 local_390;
  undefined8 local_388;
  undefined4 local_380;
  undefined4 local_37c;
  FGotoResult local_378;
  FGotoResult local_358;
  undefined **local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined4 local_320;
  undefined4 local_31c;
  TSharedPtr<IHttpRequest,1> local_318;
  TSharedPtr<IHttpResponse,1> local_308;
  TSharedPtr<IHttpRequest,1> local_2f8;
  IHttpResponse *local_2e8;
  TReferenceControllerBase<1> *local_2e0;
  FString local_2d8;
  FString local_2c8;
  TSharedPtr<IHttpResponse,1> local_2b8;
  TSharedPtr<IHttpRequest,1> local_2a8;
  undefined **local_298;
  undefined4 local_290;
  ulonglong local_288;
  undefined4 local_280;
  undefined4 local_27c;
  FDestructionSentinel local_278;
  FDestructionSentinel local_260;
  FDestructionSentinel local_248;
  FDestructionSentinel local_230;
  TMemoryWriterBase<TSizedDefaultAllocator<32>_> local_218;
  FMemoryReader local_168;
  TSharedPtr<IHttpRequest,1> local_b8;
  FString local_a8;
  FReadAccessScope local_98;
  FReadAccessScope local_80;
  FReadAccessScope local_68;
  FReadAccessScope local_50;
  
  if (5 < (byte)LogHttpReplay._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
  }
  local_318.Object = param_1->Object;
  local_318.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_318.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_318.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_318.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  RequestFinished(this,Playback,DownloadingCheckpoint,&local_318);
  _Str = L"";
  if ((((this->StreamArchive)._padding_ & 1) == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StreamArchive.IsLoading()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\HttpNetworkReplayStreaming\\Private\\HttpNetworkReplayStreaming.cpp"
                         ,0x9ed,L""), bVar5)) {
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  this_00 = &this->GotoCheckpointDelegate;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_98);
  if (((*(int *)&(this->GotoCheckpointDelegate).field_0x10 == 0) ||
      (plVar2 = *(longlong **)&(this->GotoCheckpointDelegate).field_0x8, plVar2 == (longlong *)0x0))
     || (cVar6 = (**(code **)(*plVar2 + 0x38))(), cVar6 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_98);
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("GotoCheckpointDelegate.IsBound()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\HttpNetworkReplayStreaming\\Private\\HttpNetworkReplayStreaming.cpp"
                       ,0x9ee,L"");
    if (bVar5) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_98);
  }
  if ((this->DownloadCheckpointIndex < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DownloadCheckpointIndex >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\HttpNetworkReplayStreaming\\Private\\HttpNetworkReplayStreaming.cpp"
                         ,0x9ef,L""), bVar5)) {
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  if ((this->DeltaDownloadCheckpointIndex < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DeltaDownloadCheckpointIndex >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\HttpNetworkReplayStreaming\\Private\\HttpNetworkReplayStreaming.cpp"
                         ,0x9f0,L""), bVar5)) {
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  if (this->bStopStreamingCalled == false) {
    if (param_3) {
      if ((param_2->Object == (IHttpResponse *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      iVar7 = (**(code **)((longlong)*param_2->Object + 0x58))();
      if (iVar7 != 200) goto LAB_146cbf941;
      pIVar8 = TSharedPtr<IHttpResponse,1>::operator->(param_2);
      lVar9 = (**(code **)((longlong)*pIVar8 + 0x48))(pIVar8);
      if (*(int *)(lVar9 + 8) == 0) {
        if (2 < (byte)LogHttpReplay._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
        }
        local_378._padding_ = 6;
        local_378._padding_ = (longlong)&___7FGotoResult__6B_;
        local_378.ExtraTimeMS = -1;
        local_378.CheckpointInfo.CheckpointStartTime = 0xfffffffe;
        local_378.CheckpointInfo.CheckpointIndex = 0xfffffffe;
        TDelegate<void___cdecl(FGotoResult_const_&),FDefaultDelegateUserPolicy>::ExecuteIfBound
                  (this_00,&local_378);
        local_3f0 = 0;
        local_400 = (undefined1  [8])0x0;
        local_3f8.Data = (FScriptContainerElement *)0x0;
        TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)local_400);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_400,
                   (FWriteAccessScope *)&local_260);
        if (((int)local_3f0 != 0) && (local_3f8.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)local_3f8.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_3f8,0,0,0x10);
          local_3f0 = local_3f0 & 0xffffffff00000000;
        }
        if (local_260.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_260.Accessor,&local_260);
        }
        if (local_3f8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3f8.Data);
        }
        this_01 = (FMRSWRecursiveAccessDetector *)local_400;
        goto LAB_146cbfac5;
      }
      local_308.Object = param_2->Object;
      local_308.SharedReferenceCount.ReferenceController =
           (param_2->SharedReferenceCount).ReferenceController;
      if (local_308.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_308.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_308.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_2f8.Object = param_1->Object;
      local_2f8.SharedReferenceCount.ReferenceController =
           (param_1->SharedReferenceCount).ReferenceController;
      if (local_2f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_2f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_2f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      AddResponseToCache(this,&local_2f8,&local_308);
      if (this->DeltaDownloadCheckpointIndex == 0) {
        piVar1 = &(this->CheckpointArchive).Buffer.ArrayMax;
        (this->CheckpointArchive).Buffer.ArrayNum = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,0,&(this->CheckpointArchive).Buffer.AllocatorInstance,0,piVar1);
        }
      }
      local_res8[0] = 0;
      pIVar8 = TSharedPtr<IHttpResponse,1>::operator->(param_2);
      pcVar16 = *(code **)((longlong)*pIVar8 + 0x48);
      pTVar10 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(*pcVar16)(pIVar8);
      local_168._padding_ = 0;
      local_168._padding_ = 0;
      local_168._padding_ = 0;
      local_168._padding_ = 0;
      local_168._padding_ = 0;
      local_168._padding_ = 0;
      local_168._padding_ = 0;
      local_168._padding_ = 0;
      local_168._padding_ = 0;
      local_168._padding_ = 0;
      local_168._padding_ = 0;
      local_168._padding_ = 0;
      local_168._padding_ = 0;
      local_168._padding_ = 0;
      local_168._padding_ = 0;
      local_168._padding_ = 0;
      local_168._padding_ = 0;
      local_168._padding_ = 0;
      FArchiveState::FArchiveState((FArchiveState *)&local_168);
      local_168._padding_ = 0;
      local_168._padding_ = (longlong)&___7FMemoryReader__6B_;
      uVar18 = (undefined7)((ulonglong)pcVar16 >> 8);
      local_168.LimitSize = 0x7fffffffffffffff;
      local_168.Bytes = pTVar10;
      FArchiveState::SetIsLoading((FArchiveState *)&local_168,true);
      (**(code **)(local_168._padding_ + 0x108))(&local_168,CONCAT71(uVar18,1));
      puVar17 = *(uint **)local_168._padding_;
      if (*(uint **)(local_168._padding_ + 8) < puVar17 + 1) {
        puVar17 = local_res8;
        if ((local_168._padding_ & 0x10000U) == 0) {
          if (*(code **)(local_168._padding_ + 0x188) == FMemoryReader::Serialize) {
            FMemoryReader::Serialize(&local_168,puVar17,4);
          }
          else {
            (**(code **)(local_168._padding_ + 0x188))();
          }
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)&local_168,puVar17);
        }
      }
      else {
        local_res8[0] = *puVar17;
        *(longlong *)local_168._padding_ = *(longlong *)local_168._padding_ + 4;
      }
      local_res10 = 0;
      local_218._padding_ = 0;
      local_218._padding_ = 0;
      local_218._padding_ = 0;
      local_218._padding_ = 0;
      local_218._padding_ = 0;
      local_218._padding_ = 0;
      local_218._padding_ = 0;
      local_218._padding_ = 0;
      local_218._padding_ = 0;
      local_218._padding_ = 0;
      local_218._padding_ = 0;
      local_218._padding_ = 0;
      local_218._padding_ = 0;
      local_218._padding_ = 0;
      local_218._padding_ = 0;
      local_218._padding_ = 0;
      local_218._padding_ = 0;
      local_218._padding_ = 0;
      FArchiveState::FArchiveState((FArchiveState *)&local_218);
      local_218._padding_ = 0;
      local_218._padding_ =
           (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
      uVar18 = (undefined7)((ulonglong)puVar17 >> 8);
      local_218.ArchiveName.ComparisonIndex.Value = 0;
      local_218.ArchiveName.Number = 0;
      local_218.Bytes = &(this->CheckpointArchive).Buffer;
      FArchiveState::SetIsSaving((FArchiveState *)&local_218,true);
      (**(code **)(local_218._padding_ + 0x108))(&local_218,CONCAT71(uVar18,1));
      local_218._padding_ = (longlong)&___7FMemoryWriter__6B_;
      local_218._padding_ = (longlong)(local_218.Bytes)->ArrayNum;
      if (*(uint **)(local_218._padding_ + 8) < *(uint **)local_218._padding_ + 1) {
        if ((local_218._padding_ & 0x10000U) == 0) {
          TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_218,local_res8,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)&local_218,local_res8);
        }
      }
      else {
        local_res8[0] = **(uint **)local_218._padding_;
        *(longlong *)local_218._padding_ = *(longlong *)local_218._padding_ + 4;
      }
      pcVar16 = *(code **)(this->_padding_ + 0x1f0);
      local_2e8 = param_2->Object;
      local_2e0 = (param_2->SharedReferenceCount).ReferenceController;
      if (local_2e0 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_2e0->SharedReferenceCount = (atomic<int>)((int)local_2e0->SharedReferenceCount + 1);
        UNLOCK();
      }
      cVar6 = (*pcVar16)(this,&local_2e8);
      if (cVar6 == '\0') {
        local_358._padding_ = 6;
        local_358._padding_ = (longlong)&___7FGotoResult__6B_;
        local_358.ExtraTimeMS = -1;
        local_358.CheckpointInfo.CheckpointStartTime = 0xfffffffe;
        local_358.CheckpointInfo.CheckpointIndex = 0xfffffffe;
        TDelegate<void___cdecl(FGotoResult_const_&),FDefaultDelegateUserPolicy>::ExecuteIfBound
                  (this_00,&local_358);
        local_3d8 = 0;
        local_3e8 = (undefined1  [8])0x0;
        local_3e0.Data = (FScriptContainerElement *)0x0;
        TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3e8);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3e8,
                   (FWriteAccessScope *)&local_248);
        if (((int)local_3d8 != 0) && (local_3e0.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)local_3e0.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_3e0,0,0,0x10);
          local_3d8 = local_3d8 & 0xffffffff00000000;
        }
        if (local_248.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_248.Accessor,&local_248);
        }
        if (local_3e0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3e0.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_3e8);
        this->DownloadCheckpointIndex = -1;
        this->DeltaDownloadCheckpointIndex = -1;
        this->LastGotoTimeInMS = -1;
LAB_146cbf337:
        FArchive::~FArchive((FArchive *)&local_218);
        FArchive::~FArchive((FArchive *)&local_168);
        goto LAB_146cbfae0;
      }
      if (this->DeltaDownloadCheckpointIndex < this->DownloadCheckpointIndex) {
        iVar7 = this->DeltaDownloadCheckpointIndex + 1;
        this->DeltaDownloadCheckpointIndex = iVar7;
        if (((iVar7 < 0) || ((this->CheckpointList).ReplayEvents.ArrayNum <= iVar7)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("CheckpointList.ReplayEvents.IsValidIndex(DeltaDownloadCheckpointIndex)"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\HttpNetworkReplayStreaming\\Private\\HttpNetworkReplayStreaming.cpp"
                               ,0xa2c,L""), bVar5)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        pFVar11 = FHttpModule::Get();
        (**(code **)(pFVar11->_padding_ + 0x40))(pFVar11,&local_3a8);
        pIVar4 = local_3a8;
        local_3b8 = *(code **)(*(longlong *)local_3a8 + 0x68);
        uVar19 = 0;
        if (this->DeltaDownloadCheckpointIndex < (this->CheckpointList).ReplayEvents.ArrayNum) {
          uVar19 = (uint)~this->DeltaDownloadCheckpointIndex >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        ::FString::PrintfImpl(&local_2d8,L"%sevent/%s");
        (*local_3b8)(pIVar4,&local_2d8);
        if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
        }
        pIVar4 = local_3a8;
        pcVar16 = *(code **)(*(longlong *)local_3a8 + 0x60);
        ::FString::FString(&local_2c8,L"GET");
        (*pcVar16)(pIVar4,&local_2c8);
        if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
        }
        lpCriticalSection = (LPCRITICAL_SECTION)(**(code **)(*(longlong *)local_3a8 + 0xf0))();
        if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Mutex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                               ,0x1b,L""), bVar5)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        EnterCriticalSection(lpCriticalSection);
        puVar12 = UE::Core::Private::DelegateAllocate
                            (0x28,(FDelegateAllocation *)(lpCriticalSection + 1));
        if (puVar12 != (undefined8 *)0x0) {
          *puVar12 = &
                     ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
          ;
          uVar13 = FDelegateHandle::GenerateNewID();
          puVar12[2] = uVar13;
          *puVar12 = &
                     ___7__TBaseRawMethodDelegateInstance__0A_VFHttpNetworkReplayStreamer____A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
          ;
          puVar12[4] = HttpDownloadCheckpointDeltaFinished;
          puVar12[3] = this;
        }
        if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
          LeaveCriticalSection(lpCriticalSection);
        }
        local_b8.Object = local_3a8;
        local_b8.SharedReferenceCount.ReferenceController = pTStack_3a0;
        if (pTStack_3a0 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTStack_3a0->SharedReferenceCount =
               (atomic<int>)((int)pTStack_3a0->SharedReferenceCount + 1);
          UNLOCK();
        }
        AddRequestToQueue(this,DownloadingCheckpoint,&local_b8,0,0.0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_3a0);
        goto LAB_146cbf337;
      }
      (this->CheckpointArchive).Pos = 0;
      piVar1 = &(this->StreamArchive).Buffer.ArrayMax;
      (this->StreamArchive).Buffer.ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,0,&(this->StreamArchive).Buffer.AllocatorInstance,0,piVar1);
      }
      uVar19 = this->DownloadCheckpointIndex;
      (this->StreamArchive).Pos = 0;
      (this->StreamArchive).bAtEndOfReplay = false;
      this->HighPriorityEndTime = 0;
      this->StreamTimeRangeStart = 0;
      this->StreamTimeRangeEnd = 0;
      uVar14 = 0;
      uVar15 = uVar14;
      if ((int)uVar19 < (this->CheckpointList).ReplayEvents.ArrayNum) {
        uVar15 = ~uVar19 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      pFVar3 = (this->CheckpointList).ReplayEvents.AllocatorInstance.Data;
      if (*(int *)(pFVar3 + (longlong)(int)uVar19 * 0x40 + 0x30) != 0) {
        _Str = *(wchar_t **)(pFVar3 + (longlong)(int)uVar19 * 0x40 + 0x28);
      }
      iVar7 = _wtoi(_Str);
      local_288 = this->LastGotoTimeInMS;
      this->StreamChunkIndex = iVar7;
      this->LastChunkTime = 0.0;
      if (((longlong)local_288 < 0) || (iVar7 < this->NumTotalStreamChunks)) {
        if (-1 < (longlong)local_288) {
          local_3b8 = *(code **)(this->_padding_ + 0x70);
          if (((local_288 != (local_288 & 0xffffffff)) || ((longlong)local_288 < 0)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IntFitsIn<OutType>(In)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                 ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"),
             bVar5)) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          uVar19 = this->DownloadCheckpointIndex;
          uVar15 = uVar14;
          if ((int)uVar19 < (this->CheckpointList).ReplayEvents.ArrayNum) {
            uVar15 = ~uVar19 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          (*local_3b8)(this,*(undefined4 *)
                             ((this->CheckpointList).ReplayEvents.AllocatorInstance.Data +
                             (longlong)(int)uVar19 * 0x40 + 0x38));
          uVar19 = this->DownloadCheckpointIndex;
          if ((int)uVar19 < (this->CheckpointList).ReplayEvents.ArrayNum) {
            uVar14 = ~uVar19 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          this->LastGotoTimeInMS =
               this->LastGotoTimeInMS -
               (ulonglong)
               *(uint *)((this->CheckpointList).ReplayEvents.AllocatorInstance.Data +
                        (longlong)(int)uVar19 * 0x40 + 0x38);
          local_288 = this->LastGotoTimeInMS;
        }
      }
      else {
        if (2 < (byte)LogHttpReplay._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
        }
        uVar19 = this->DownloadCheckpointIndex;
        uVar15 = uVar14;
        if ((int)uVar19 < (this->CheckpointList).ReplayEvents.ArrayNum) {
          uVar15 = ~uVar19 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        uVar15 = this->DownloadCheckpointIndex;
        this->StreamTimeRangeStart =
             *(uint *)((this->CheckpointList).ReplayEvents.AllocatorInstance.Data +
                      (longlong)(int)uVar19 * 0x40 + 0x38);
        if ((int)uVar15 < (this->CheckpointList).ReplayEvents.ArrayNum) {
          uVar14 = ~uVar15 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        this->StreamTimeRangeEnd =
             *(uint *)((this->CheckpointList).ReplayEvents.AllocatorInstance.Data +
                      (longlong)(int)uVar15 * 0x40 + 0x38);
        local_288 = 0xffffffffffffffff;
        this->LastGotoTimeInMS = -1;
      }
      local_298 = &___7FGotoResult__6B_;
      local_280 = 0xfffffffe;
      local_27c = 0xfffffffe;
      local_290 = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_50);
      if ((*(int *)&(this->GotoCheckpointDelegate).field_0x10 != 0) &&
         (plVar2 = *(longlong **)&(this->GotoCheckpointDelegate).field_0x8,
         plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x68))(plVar2,&local_298);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_50);
      if (5 < (byte)LogHttpReplay._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
      }
      FArchive::~FArchive((FArchive *)&local_218);
      FArchive::~FArchive((FArchive *)&local_168);
    }
    else {
LAB_146cbf941:
      if (1 < (byte)LogHttpReplay._0_1_) {
        local_2b8.Object = param_2->Object;
        local_2b8.SharedReferenceCount.ReferenceController =
             (param_2->SharedReferenceCount).ReferenceController;
        if (local_2b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_2b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_2b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        local_2a8.Object = param_1->Object;
        local_2a8.SharedReferenceCount.ReferenceController =
             (param_1->SharedReferenceCount).ReferenceController;
        if (local_2a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_2a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_2a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        BuildRequestErrorString(&local_a8,&local_2a8,&local_2b8);
        UE::Logging::Private::BasicLog<2>
                  ((FStaticBasicLogRecord *)&PTR_u_FHttpNetworkRep_1514573d0,
                   (FLogCategoryBase *)&LogHttpReplay);
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
      }
      local_330 = 6;
      local_338 = &___7FGotoResult__6B_;
      local_328 = 0xffffffffffffffff;
      local_320 = 0xfffffffe;
      local_31c = 0xfffffffe;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_80);
      if ((*(int *)&(this->GotoCheckpointDelegate).field_0x10 != 0) &&
         (plVar2 = *(longlong **)&(this->GotoCheckpointDelegate).field_0x8,
         plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x68))(plVar2,&local_338);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_80);
    }
    local_3c0 = 0;
    local_3d0 = (undefined1  [8])0x0;
    local_3c8.Data = (FScriptContainerElement *)0x0;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3d0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3d0,
               (FWriteAccessScope *)&local_230);
    if (((int)local_3c0 != 0) && (local_3c8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_3c8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_3c8,0,0,0x10);
      local_3c0 = local_3c0 & 0xffffffff00000000;
    }
    if (local_230.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_230.Accessor,&local_230);
    }
    if (local_3c8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3c8.Data);
    }
    this_01 = (FMRSWRecursiveAccessDetector *)local_3d0;
  }
  else {
    local_390 = 6;
    local_398 = &___7FGotoResult__6B_;
    local_388 = 0xffffffffffffffff;
    local_380 = 0xfffffffe;
    local_37c = 0xfffffffe;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_68);
    if ((*(int *)&(this->GotoCheckpointDelegate).field_0x10 != 0) &&
       (plVar2 = *(longlong **)&(this->GotoCheckpointDelegate).field_0x8, plVar2 != (longlong *)0x0)
       ) {
      (**(code **)(*plVar2 + 0x68))(plVar2,&local_398);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_68);
    local_408 = 0;
    local_418 = (undefined1  [8])0x0;
    local_410.Data = (FScriptContainerElement *)0x0;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_418);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_418,
               (FWriteAccessScope *)&local_278);
    if (((int)local_408 != 0) && (local_410.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_410.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_410,0,0,0x10);
      local_408 = local_408 & 0xffffffff00000000;
    }
    if (local_278.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_278.Accessor,&local_278);
    }
    if (local_410.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_410.Data);
    }
    this_01 = (FMRSWRecursiveAccessDetector *)local_418;
  }
LAB_146cbfac5:
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this_01);
  this->DownloadCheckpointIndex = -1;
  this->DeltaDownloadCheckpointIndex = -1;
  this->LastGotoTimeInMS = -1;
LAB_146cbfae0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// HttpDownloadCheckpointFinished @ 146cbfb20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FHttpNetworkReplayStreamer::HttpDownloadCheckpointFinished
          (FHttpNetworkReplayStreamer *this,TSharedPtr<IHttpRequest,1> *param_1,
          TSharedPtr<IHttpResponse,1> *param_2,bool param_3)

{
  TDelegate<void___cdecl(FGotoResult_const_&),FDefaultDelegateUserPolicy> *this_00;
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  IHttpResponse *pIVar10;
  longlong lVar11;
  FMRSWRecursiveAccessDetector *this_01;
  wchar_t *_Str;
  undefined1 local_258 [8];
  ForAnyElementType local_250;
  ulonglong local_248;
  undefined1 local_240 [8];
  ForAnyElementType local_238;
  ulonglong local_230;
  undefined1 local_228 [8];
  ForAnyElementType local_220;
  ulonglong local_218;
  undefined1 local_210 [8];
  ForAnyElementType local_208;
  ulonglong local_200;
  undefined **local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  FGotoResult local_1d8;
  FGotoResult local_1b8;
  undefined **local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  TSharedPtr<IHttpRequest,1> local_178;
  TSharedPtr<IHttpResponse,1> local_168;
  TSharedPtr<IHttpRequest,1> local_158;
  IHttpResponse *local_148;
  TReferenceControllerBase<1> *local_140;
  TSharedPtr<IHttpResponse,1> local_138;
  TSharedPtr<IHttpRequest,1> local_128;
  undefined **local_118;
  undefined4 local_110;
  ulonglong local_108;
  undefined4 local_100;
  int local_fc;
  FDestructionSentinel local_f8;
  FDestructionSentinel local_e0;
  FDestructionSentinel local_c8;
  FDestructionSentinel local_b0;
  FString local_98;
  FReadAccessScope local_88;
  FReadAccessScope local_70;
  FReadAccessScope local_58;
  FReadAccessScope local_40;
  
  if (5 < (byte)LogHttpReplay._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
  }
  local_178.Object = param_1->Object;
  local_178.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_178.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  RequestFinished(this,Playback,DownloadingCheckpoint,&local_178);
  _Str = L"";
  if ((((this->StreamArchive)._padding_ & 1) == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StreamArchive.IsLoading()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\HttpNetworkReplayStreaming\\Private\\HttpNetworkReplayStreaming.cpp"
                         ,0x844,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  this_00 = &this->GotoCheckpointDelegate;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_88);
  if (((*(int *)&(this->GotoCheckpointDelegate).field_0x10 == 0) ||
      (plVar3 = *(longlong **)&(this->GotoCheckpointDelegate).field_0x8, plVar3 == (longlong *)0x0))
     || (cVar7 = (**(code **)(*plVar3 + 0x38))(), cVar7 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_88);
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("GotoCheckpointDelegate.IsBound()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\HttpNetworkReplayStreaming\\Private\\HttpNetworkReplayStreaming.cpp"
                       ,0x845,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_88);
  }
  if ((this->DownloadCheckpointIndex < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("DownloadCheckpointIndex >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\HttpNetworkReplayStreaming\\Private\\HttpNetworkReplayStreaming.cpp"
                         ,0x846,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (this->bStopStreamingCalled != false) {
    local_1f0 = 6;
    local_1f8 = &___7FGotoResult__6B_;
    local_1e8 = 0xffffffffffffffff;
    local_1e0 = 0xfffffffe;
    local_1dc = 0xfffffffe;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_58);
    if ((*(int *)&(this->GotoCheckpointDelegate).field_0x10 != 0) &&
       (plVar3 = *(longlong **)&(this->GotoCheckpointDelegate).field_0x8, plVar3 != (longlong *)0x0)
       ) {
      (**(code **)(*plVar3 + 0x68))(plVar3,&local_1f8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_58);
    local_248 = 0;
    local_258 = (undefined1  [8])0x0;
    local_250.Data = (FScriptContainerElement *)0x0;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_258);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_258,
               (FWriteAccessScope *)&local_f8);
    if (((int)local_248 != 0) && (local_250.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_250.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_250,0,0,0x10);
      local_248 = local_248 & 0xffffffff00000000;
    }
    if (local_f8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f8.Accessor,&local_f8);
    }
    if (local_250.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_250.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_258);
    this->DownloadCheckpointIndex = -1;
    this->LastGotoTimeInMS = -1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->SharedReferenceCount).ReferenceController);
    return;
  }
  if (param_3) {
    if ((param_2->Object == (IHttpResponse *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = (**(code **)((longlong)*param_2->Object + 0x58))();
    if (iVar8 != 200) goto LAB_146cc028c;
    pIVar10 = TSharedPtr<IHttpResponse,1>::operator->(param_2);
    lVar11 = (**(code **)((longlong)*pIVar10 + 0x48))(pIVar10);
    if (*(int *)(lVar11 + 8) == 0) {
      if (2 < (byte)LogHttpReplay._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
      }
      local_1d8._padding_ = 6;
      local_1d8._padding_ = (longlong)&___7FGotoResult__6B_;
      local_1d8.ExtraTimeMS = -1;
      local_1d8.CheckpointInfo.CheckpointStartTime = 0xfffffffe;
      local_1d8.CheckpointInfo.CheckpointIndex = 0xfffffffe;
      TDelegate<void___cdecl(FGotoResult_const_&),FDefaultDelegateUserPolicy>::ExecuteIfBound
                (this_00,&local_1d8);
      local_230 = 0;
      local_240 = (undefined1  [8])0x0;
      local_238.Data = (FScriptContainerElement *)0x0;
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_240);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_240,
                 (FWriteAccessScope *)&local_e0);
      if (((int)local_230 != 0) && (local_238.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_238.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_238,0,0,0x10);
        local_230 = local_230 & 0xffffffff00000000;
      }
      if (local_e0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e0.Accessor,&local_e0);
      }
      if (local_238.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_238.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_240);
      goto LAB_146cc041f;
    }
    local_168.Object = param_2->Object;
    local_168.SharedReferenceCount.ReferenceController =
         (param_2->SharedReferenceCount).ReferenceController;
    if (local_168.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_158.Object = param_1->Object;
    local_158.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_158.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    AddResponseToCache(this,&local_158,&local_168);
    piVar1 = &(this->CheckpointArchive).Buffer.ArrayMax;
    (this->CheckpointArchive).Buffer.ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&(this->CheckpointArchive).Buffer.AllocatorInstance,0,piVar1);
    }
    pcVar5 = *(code **)(this->_padding_ + 0x1f0);
    local_148 = param_2->Object;
    local_140 = (param_2->SharedReferenceCount).ReferenceController;
    if (local_140 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_140->SharedReferenceCount = (atomic<int>)((int)local_140->SharedReferenceCount + 1);
      UNLOCK();
    }
    cVar7 = (*pcVar5)(this,&local_148);
    if (cVar7 != '\0') {
      (this->CheckpointArchive).Pos = 0;
      piVar1 = &(this->StreamArchive).Buffer.ArrayMax;
      (this->StreamArchive).Buffer.ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,0,&(this->StreamArchive).Buffer.AllocatorInstance,0,piVar1);
      }
      uVar2 = this->DownloadCheckpointIndex;
      (this->StreamArchive).Pos = 0;
      (this->StreamArchive).bAtEndOfReplay = false;
      this->HighPriorityEndTime = 0;
      this->StreamTimeRangeStart = 0;
      this->StreamTimeRangeEnd = 0;
      uVar9 = 0;
      if ((int)uVar2 < (this->CheckpointList).ReplayEvents.ArrayNum) {
        uVar9 = ~uVar2 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (this->CheckpointList).ReplayEvents.AllocatorInstance.Data;
      lVar11 = (longlong)(int)uVar2 * 0x40;
      if (*(int *)(pFVar4 + lVar11 + 0x30) != 0) {
        _Str = *(wchar_t **)(pFVar4 + lVar11 + 0x28);
      }
      iVar8 = _wtoi(_Str);
      local_108 = this->LastGotoTimeInMS;
      this->StreamChunkIndex = iVar8;
      this->LastChunkTime = 0.0;
      if (((longlong)local_108 < 0) || (iVar8 < this->NumTotalStreamChunks)) {
        if (-1 < (longlong)local_108) {
          pcVar5 = *(code **)(this->_padding_ + 0x70);
          if (((local_108 != (local_108 & 0xffffffff)) || ((longlong)local_108 < 0)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IntFitsIn<OutType>(In)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                 ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          (*pcVar5)(this,*(undefined4 *)(pFVar4 + lVar11 + 0x38));
          this->LastGotoTimeInMS =
               this->LastGotoTimeInMS - (ulonglong)*(uint *)(pFVar4 + lVar11 + 0x38);
          local_108 = this->LastGotoTimeInMS;
        }
      }
      else {
        if (2 < (byte)LogHttpReplay._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
        }
        local_108 = 0xffffffffffffffff;
        this->StreamTimeRangeStart = *(uint *)(pFVar4 + lVar11 + 0x38);
        this->StreamTimeRangeEnd = *(uint *)(pFVar4 + lVar11 + 0x38);
        this->LastGotoTimeInMS = -1;
      }
      local_118 = &___7FGotoResult__6B_;
      local_fc = this->DownloadCheckpointIndex;
      local_110 = 0;
      local_100 = *(undefined4 *)(pFVar4 + lVar11 + 0x38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->GotoCheckpointDelegate,&local_40);
      if ((*(int *)&(this->GotoCheckpointDelegate).field_0x10 != 0) &&
         (plVar3 = *(longlong **)&(this->GotoCheckpointDelegate).field_0x8,
         plVar3 != (longlong *)0x0)) {
        (**(code **)(*plVar3 + 0x68))(plVar3,&local_118);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_40);
      if (5 < (byte)LogHttpReplay._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
      }
      goto LAB_146cc0372;
    }
    local_1b8._padding_ = 6;
    local_1b8._padding_ = (longlong)&___7FGotoResult__6B_;
    local_1b8.ExtraTimeMS = -1;
    local_1b8.CheckpointInfo.CheckpointStartTime = 0xfffffffe;
    local_1b8.CheckpointInfo.CheckpointIndex = 0xfffffffe;
    TDelegate<void___cdecl(FGotoResult_const_&),FDefaultDelegateUserPolicy>::ExecuteIfBound
              (this_00,&local_1b8);
    local_218 = 0;
    local_228 = (undefined1  [8])0x0;
    local_220.Data = (FScriptContainerElement *)0x0;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_228);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_228,
               (FWriteAccessScope *)&local_c8);
    if (((int)local_218 != 0) && (local_220.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_220.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_220,0,0,0x10);
      local_218 = local_218 & 0xffffffff00000000;
    }
    if (local_c8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c8.Accessor,&local_c8);
    }
    if (local_220.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_220.Data);
    }
    this_01 = (FMRSWRecursiveAccessDetector *)local_228;
  }
  else {
LAB_146cc028c:
    if (1 < (byte)LogHttpReplay._0_1_) {
      local_138.Object = param_2->Object;
      local_138.SharedReferenceCount.ReferenceController =
           (param_2->SharedReferenceCount).ReferenceController;
      if (local_138.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_138.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_138.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_128.Object = param_1->Object;
      local_128.SharedReferenceCount.ReferenceController =
           (param_1->SharedReferenceCount).ReferenceController;
      if (local_128.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      BuildRequestErrorString(&local_98,&local_128,&local_138);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
    }
    local_190 = 6;
    local_198 = &___7FGotoResult__6B_;
    local_188 = 0xffffffffffffffff;
    local_180 = 0xfffffffe;
    local_17c = 0xfffffffe;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->GotoCheckpointDelegate,&local_70);
    if ((*(int *)&(this->GotoCheckpointDelegate).field_0x10 != 0) &&
       (plVar3 = *(longlong **)&(this->GotoCheckpointDelegate).field_0x8, plVar3 != (longlong *)0x0)
       ) {
      (**(code **)(*plVar3 + 0x68))(plVar3,&local_198);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_70);
LAB_146cc0372:
    local_200 = 0;
    local_210 = (undefined1  [8])0x0;
    local_208.Data = (FScriptContainerElement *)0x0;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->GotoCheckpointDelegate,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_210);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_210,
               (FWriteAccessScope *)&local_b0);
    if (((int)local_200 != 0) && (local_208.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_208.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_208,0,0,0x10);
      local_200 = local_200 & 0xffffffff00000000;
    }
    if (local_b0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
    }
    if (local_208.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.Data);
    }
    this_01 = (FMRSWRecursiveAccessDetector *)local_210;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this_01);
  this->LastGotoTimeInMS = -1;
  this->DownloadCheckpointIndex = -1;
LAB_146cc041f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// HttpDownloadFinished @ 146cc0460

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FHttpNetworkReplayStreamer::HttpDownloadFinished
          (FHttpNetworkReplayStreamer *this,TSharedPtr<IHttpRequest,1> *param_1,
          TSharedPtr<IHttpResponse,1> *param_2,bool param_3,int param_4,bool param_5)

{
  int *piVar1;
  code *pcVar2;
  UEnum *pUVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  UPackage *pUVar8;
  IHttpResponse *pIVar9;
  undefined8 *puVar10;
  longlong lVar11;
  wchar_t *pwVar12;
  ForAnyElementType FVar13;
  wchar_t *pwVar14;
  FMemScope local_res8;
  UEnum *local_res10;
  FLLMScope local_res20 [2];
  undefined8 local_288;
  FWeakObjectPtr local_280;
  UEnum *local_278;
  FString local_270;
  longlong local_260;
  undefined8 local_258;
  FWeakObjectPtr local_250;
  UEnum *local_248;
  FString local_240;
  longlong local_230;
  undefined8 local_228;
  FWeakObjectPtr local_220;
  UEnum *local_218;
  FString local_210;
  longlong local_200;
  undefined8 local_1f8;
  FWeakObjectPtr local_1f0;
  UEnum *local_1e8;
  FString local_1e0;
  longlong local_1d0;
  UEnum *local_1c8;
  UEnum *local_1c0;
  UEnum *local_1b8;
  TSharedPtr<IHttpRequest,1> local_1b0;
  FString local_1a0;
  FString local_190;
  FString local_180;
  FString local_170;
  TSharedPtr<IHttpResponse,1> local_160;
  TSharedPtr<IHttpRequest,1> local_150;
  FString local_140;
  FString local_130;
  TSharedPtr<IHttpResponse,1> local_120;
  TSharedPtr<IHttpRequest,1> local_110;
  IHttpResponse *local_100;
  TReferenceControllerBase<1> *local_f8;
  TSharedPtr<IHttpResponse,1> local_f0;
  TSharedPtr<IHttpRequest,1> local_e0;
  void *local_d0 [2];
  void *local_c0 [2];
  void *local_b0 [2];
  void *local_a0 [2];
  FString local_90;
  void *local_80 [2];
  void *local_70 [2];
  FString local_60 [2];
  
  FLLMScope::FLLMScope(local_res20,Replays,false,None,Default,true);
  FMemScope::FMemScope(&local_res8,Replays,true);
  local_1b0.Object = param_1->Object;
  local_1b0.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_1b0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1b0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1b0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  RequestFinished(this,Playback,DownloadingStream,&local_1b0);
  pwVar14 = L"";
  if ((((this->StreamArchive)._padding_ & 1) == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StreamArchive.IsLoading()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\HttpNetworkReplayStreaming\\Private\\HttpNetworkReplayStreaming.cpp"
                         ,0x7d6,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (param_3) {
    if ((param_2->Object == (IHttpResponse *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar6 = (**(code **)((longlong)*param_2->Object + 0x58))();
    if (iVar6 != 200) goto LAB_146cc0ebb;
    if (param_4 == this->StreamChunkIndex) {
      pIVar9 = TSharedPtr<IHttpResponse,1>::operator->(param_2);
      pcVar2 = *(code **)((longlong)*pIVar9 + 0x28);
      ::FString::FString(&local_1a0,L"NumChunks");
      puVar10 = (undefined8 *)(*pcVar2)(pIVar9,local_d0,&local_1a0);
      if (*(int *)(puVar10 + 1) == 0) {
        pwVar12 = L"";
      }
      else {
        pwVar12 = (wchar_t *)*puVar10;
      }
      iVar6 = FGenericPlatformStricmp::Stricmp(pwVar12,L"");
      if (local_d0[0] != (void *)0x0) {
        FMemory::Free(local_d0[0]);
      }
      if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
      }
      if (iVar6 == 0) {
        if (4 < (byte)LogHttpReplay._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
        }
        goto LAB_146cc1114;
      }
      pIVar9 = TSharedPtr<IHttpResponse,1>::operator->(param_2);
      pcVar2 = *(code **)((longlong)*pIVar9 + 0x28);
      ::FString::FString(&local_190,L"NumChunks");
      puVar10 = (undefined8 *)(*pcVar2)(pIVar9,local_c0,&local_190);
      if (*(int *)(puVar10 + 1) == 0) {
        pwVar12 = L"";
      }
      else {
        pwVar12 = (wchar_t *)*puVar10;
      }
      iVar6 = _wtoi(pwVar12);
      if (local_c0[0] != (void *)0x0) {
        FMemory::Free(local_c0[0]);
      }
      if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_190.Data.AllocatorInstance.Data);
      }
      pIVar9 = TSharedPtr<IHttpResponse,1>::operator->(param_2);
      pcVar2 = *(code **)((longlong)*pIVar9 + 0x28);
      ::FString::FString(&local_180,L"Time");
      puVar10 = (undefined8 *)(*pcVar2)(pIVar9,local_b0,&local_180);
      if (*(int *)(puVar10 + 1) == 0) {
        pwVar12 = L"";
      }
      else {
        pwVar12 = (wchar_t *)*puVar10;
      }
      uVar7 = _wtoi(pwVar12);
      if (local_b0[0] != (void *)0x0) {
        FMemory::Free(local_b0[0]);
      }
      if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_180.Data.AllocatorInstance.Data);
      }
      if (this->NumTotalStreamChunks < iVar6) {
        this->NumTotalStreamChunks = iVar6;
      }
      if (this->TotalDemoTimeInMS < uVar7) {
        this->TotalDemoTimeInMS = uVar7;
      }
      pIVar9 = TSharedPtr<IHttpResponse,1>::operator->(param_2);
      pcVar2 = *(code **)((longlong)*pIVar9 + 0x28);
      ::FString::FString(&local_170,L"State");
      puVar10 = (undefined8 *)(*pcVar2)(pIVar9,local_a0);
      if (*(int *)(puVar10 + 1) == 0) {
        pwVar12 = L"";
      }
      else {
        pwVar12 = (wchar_t *)*puVar10;
      }
      iVar6 = FGenericPlatformStricmp::Stricmp(pwVar12,L"Live");
      if (local_a0[0] != (void *)0x0) {
        FMemory::Free(local_a0[0]);
      }
      if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_170.Data.AllocatorInstance.Data);
      }
      if ((this->bStreamIsLive != false) && (iVar6 != 0)) {
        this->bStreamIsLive = iVar6 == 0;
      }
      pIVar9 = TSharedPtr<IHttpResponse,1>::operator->(param_2);
      lVar11 = (**(code **)((longlong)*pIVar9 + 0x48))(pIVar9);
      if ((0 < *(int *)(lVar11 + 8)) || (this->bStreamIsLive != false)) {
        pIVar9 = TSharedPtr<IHttpResponse,1>::operator->(param_2);
        lVar11 = (**(code **)((longlong)*pIVar9 + 0x48))(pIVar9);
        if (*(int *)(lVar11 + 8) < 1) {
          if (this->HighPriorityEndTime != 0) {
            if (2 < (byte)LogHttpReplay._0_1_) {
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
            }
            this->HighPriorityEndTime = 0;
          }
        }
        else {
          if ((this->StreamArchive).Buffer.ArrayNum == 0) {
            pIVar9 = TSharedPtr<IHttpResponse,1>::operator->(param_2);
            pcVar2 = *(code **)((longlong)*pIVar9 + 0x28);
            ::FString::FString(&local_140,L"MTime1");
            puVar10 = (undefined8 *)(*pcVar2)(pIVar9,local_80,&local_140);
            if (*(int *)(puVar10 + 1) == 0) {
              pwVar12 = L"";
            }
            else {
              pwVar12 = (wchar_t *)*puVar10;
            }
            uVar7 = _wtoi(pwVar12);
            this->StreamTimeRangeStart = uVar7;
            if (local_80[0] != (void *)0x0) {
              FMemory::Free(local_80[0]);
            }
            if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_140.Data.AllocatorInstance.Data);
            }
          }
          pIVar9 = TSharedPtr<IHttpResponse,1>::operator->(param_2);
          pcVar2 = *(code **)((longlong)*pIVar9 + 0x28);
          ::FString::FString(&local_130,L"MTime2");
          puVar10 = (undefined8 *)(*pcVar2)(pIVar9,local_70,&local_130);
          if (*(int *)(puVar10 + 1) != 0) {
            pwVar14 = (wchar_t *)*puVar10;
          }
          uVar7 = _wtoi(pwVar14);
          this->StreamTimeRangeEnd = uVar7;
          if (local_70[0] != (void *)0x0) {
            FMemory::Free(local_70[0]);
          }
          if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_130.Data.AllocatorInstance.Data);
          }
          local_120.Object = param_2->Object;
          local_120.SharedReferenceCount.ReferenceController =
               (param_2->SharedReferenceCount).ReferenceController;
          if (local_120.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_120.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_120.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          local_110.Object = param_1->Object;
          local_110.SharedReferenceCount.ReferenceController =
               (param_1->SharedReferenceCount).ReferenceController;
          if (local_110.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_110.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_110.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          AddResponseToCache(this,&local_110,&local_120);
          pcVar2 = *(code **)(this->_padding_ + 0x1f0);
          local_100 = param_2->Object;
          local_f8 = (param_2->SharedReferenceCount).ReferenceController;
          if (local_f8 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_f8->SharedReferenceCount = (atomic<int>)((int)local_f8->SharedReferenceCount + 1);
            UNLOCK();
          }
          cVar5 = (*pcVar2)(this,&local_100,&(this->StreamArchive).Buffer);
          if (cVar5 == '\0') {
            if (Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton == (UEnum *)0x0) {
              pUVar8 = Z_Construct_UPackage__Script_HttpNetworkReplayStreaming();
              Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton =
                   GetStaticEnum(Z_Construct_UEnum_HttpNetworkReplayStreaming_EHttpReplayResult,
                                 (UObject *)pUVar8,L"EHttpReplayResult");
            }
            pUVar3 = Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton;
            local_228 = 5;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton != (UEnum *)0x0)) {
              UE::GC::MarkAsReachable
                        ((UObject *)Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton);
            }
            local_220.ObjectIndex = 0;
            local_220.ObjectSerialNumber = 0;
            local_1c0 = pUVar3;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UEnum *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar3);
            }
            FWeakObjectPtr::operator=(&local_220,(FObjectPtr)&local_1c0);
            local_210.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_210.Data.ArrayNum = 0;
            local_210.Data.ArrayMax = 0;
            local_200 = 0;
            pwVar14 = L"EHttpReplayResult::DecompressionFailed";
            do {
              pwVar12 = pwVar14;
              pwVar14 = pwVar12 + 1;
            } while (*pwVar14 != L':');
            local_218 = pUVar3;
            ::FString::operator=(&local_210,pwVar12 + 3);
            (**(code **)(this->_padding_ + 0x1c0))(this);
            (**(code **)(this->_padding_ + 0x178))(this,&local_228);
            FVar13.Data = local_210.Data.AllocatorInstance.Data;
            if (local_200 != 0) {
              (**(code **)(local_200 + -0x10))(local_200 + -0x10);
              FVar13.Data = local_210.Data.AllocatorInstance.Data;
            }
            goto LAB_146cc110a;
          }
          this->StreamChunkIndex = this->StreamChunkIndex + 1;
        }
        if (5 < (byte)LogHttpReplay._0_1_) {
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
        }
        goto LAB_146cc1114;
      }
      if (param_5) goto LAB_146cc1114;
      if (1 < (byte)LogHttpReplay._0_1_) {
        local_160.Object = param_2->Object;
        local_160.SharedReferenceCount.ReferenceController =
             (param_2->SharedReferenceCount).ReferenceController;
        if (local_160.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_160.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_160.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        local_150.Object = param_1->Object;
        local_150.SharedReferenceCount.ReferenceController =
             (param_1->SharedReferenceCount).ReferenceController;
        if (local_150.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_150.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_150.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        BuildRequestErrorString(&local_90,&local_150,&local_160);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
        if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90.Data.AllocatorInstance.Data);
        }
      }
      piVar1 = &(this->StreamArchive).Buffer.ArrayMax;
      (this->StreamArchive).Buffer.ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,0,&(this->StreamArchive).Buffer.AllocatorInstance,0,piVar1);
      }
      if (Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton == (UEnum *)0x0) {
        pUVar8 = Z_Construct_UPackage__Script_HttpNetworkReplayStreaming();
        Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton =
             GetStaticEnum(Z_Construct_UEnum_HttpNetworkReplayStreaming_EHttpReplayResult,
                           (UObject *)pUVar8,L"EHttpReplayResult");
      }
      pUVar3 = Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton;
      local_258 = 3;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton != (UEnum *)0x0)) {
        UE::GC::MarkAsReachable
                  ((UObject *)Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton);
      }
      local_250.ObjectIndex = 0;
      local_250.ObjectSerialNumber = 0;
      local_1c8 = pUVar3;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UEnum *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      FWeakObjectPtr::operator=(&local_250,(FObjectPtr)&local_1c8);
      local_240.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_240.Data.ArrayNum = 0;
      local_240.Data.ArrayMax = 0;
      local_230 = 0;
      pwVar14 = L"EHttpReplayResult::InvalidHttpResponse";
      do {
        pwVar12 = pwVar14;
        pwVar14 = pwVar12 + 1;
      } while (*pwVar14 != L':');
      local_248 = pUVar3;
      ::FString::operator=(&local_240,pwVar12 + 3);
      (**(code **)(this->_padding_ + 0x1c0))(this);
      (**(code **)(this->_padding_ + 0x178))(this,&local_258);
      FVar13.Data = local_240.Data.AllocatorInstance.Data;
      if (local_230 != 0) {
        (**(code **)(local_230 + -0x10))(local_230 + -0x10);
        FVar13.Data = local_240.Data.AllocatorInstance.Data;
      }
    }
    else {
      if (1 < (byte)LogHttpReplay._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
      }
      piVar1 = &(this->StreamArchive).Buffer.ArrayMax;
      (this->StreamArchive).Buffer.ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,0,&(this->StreamArchive).Buffer.AllocatorInstance,0,piVar1);
      }
      if (Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton == (UEnum *)0x0) {
        pUVar8 = Z_Construct_UPackage__Script_HttpNetworkReplayStreaming();
        Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton =
             GetStaticEnum(Z_Construct_UEnum_HttpNetworkReplayStreaming_EHttpReplayResult,
                           (UObject *)pUVar8,L"EHttpReplayResult");
      }
      pUVar3 = Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton;
      local_288 = 2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton != (UEnum *)0x0)) {
        UE::GC::MarkAsReachable
                  ((UObject *)Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton);
      }
      local_280.ObjectIndex = 0;
      local_280.ObjectSerialNumber = 0;
      local_res10 = pUVar3;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UEnum *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      FWeakObjectPtr::operator=(&local_280,(FObjectPtr)&local_res10);
      local_270.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_270.Data.ArrayNum = 0;
      local_270.Data.ArrayMax = 0;
      local_260 = 0;
      pwVar14 = L"EHttpReplayResult::DataUnavailable";
      do {
        pwVar12 = pwVar14;
        pwVar14 = pwVar12 + 1;
      } while (*pwVar14 != L':');
      local_278 = pUVar3;
      ::FString::operator=(&local_270,pwVar12 + 3);
      (**(code **)(this->_padding_ + 0x1c0))(this);
      (**(code **)(this->_padding_ + 0x178))(this,&local_288);
      FVar13.Data = local_270.Data.AllocatorInstance.Data;
      if (local_260 != 0) {
        (**(code **)(local_260 + -0x10))(local_260 + -0x10);
        FVar13.Data = local_270.Data.AllocatorInstance.Data;
      }
    }
  }
  else {
LAB_146cc0ebb:
    if (this->bStreamIsLive != false) {
      this->bStreamIsLive = false;
      if (2 < (byte)LogHttpReplay._0_1_) {
        if (param_2->Object != (IHttpResponse *)0x0) {
          pIVar9 = TSharedPtr<IHttpResponse,1>::operator->(param_2);
          (**(code **)((longlong)*pIVar9 + 0x58))(pIVar9);
        }
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
      }
      goto LAB_146cc1114;
    }
    if (1 < (byte)LogHttpReplay._0_1_) {
      local_f0.Object = param_2->Object;
      local_f0.SharedReferenceCount.ReferenceController =
           (param_2->SharedReferenceCount).ReferenceController;
      if (local_f0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_f0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_f0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_e0.Object = param_1->Object;
      local_e0.SharedReferenceCount.ReferenceController =
           (param_1->SharedReferenceCount).ReferenceController;
      if (local_e0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      BuildRequestErrorString(local_60,&local_e0,&local_f0);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
      if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
      }
    }
    piVar1 = &(this->StreamArchive).Buffer.ArrayMax;
    (this->StreamArchive).Buffer.ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&(this->StreamArchive).Buffer.AllocatorInstance,0,piVar1);
    }
    if (Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton == (UEnum *)0x0) {
      pUVar8 = Z_Construct_UPackage__Script_HttpNetworkReplayStreaming();
      Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton =
           GetStaticEnum(Z_Construct_UEnum_HttpNetworkReplayStreaming_EHttpReplayResult,
                         (UObject *)pUVar8,L"EHttpReplayResult");
    }
    pUVar3 = Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton;
    local_1f8 = 3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton != (UEnum *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton)
      ;
    }
    local_1f0.ObjectIndex = 0;
    local_1f0.ObjectSerialNumber = 0;
    local_1b8 = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UEnum *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    FWeakObjectPtr::operator=(&local_1f0,(FObjectPtr)&local_1b8);
    local_1e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1e0.Data.ArrayNum = 0;
    local_1e0.Data.ArrayMax = 0;
    local_1d0 = 0;
    pwVar14 = L"EHttpReplayResult::InvalidHttpResponse";
    do {
      pwVar12 = pwVar14;
      pwVar14 = pwVar12 + 1;
    } while (*pwVar14 != L':');
    local_1e8 = pUVar3;
    ::FString::operator=(&local_1e0,pwVar12 + 3);
    (**(code **)(this->_padding_ + 0x1c0))(this);
    (**(code **)(this->_padding_ + 0x178))(this,&local_1f8);
    FVar13.Data = local_1e0.Data.AllocatorInstance.Data;
    if (local_1d0 != 0) {
      (**(code **)(local_1d0 + -0x10))(local_1d0 + -0x10);
      FVar13.Data = local_1e0.Data.AllocatorInstance.Data;
    }
  }
LAB_146cc110a:
  if (FVar13.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar13.Data);
  }
LAB_146cc1114:
  FMemScope::~FMemScope(&local_res8);
  FLLMScope::~FLLMScope(local_res20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// HttpDownloadHeaderFinished @ 146cc1170

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FHttpNetworkReplayStreamer::HttpDownloadHeaderFinished
          (FHttpNetworkReplayStreamer *this,TSharedPtr<IHttpRequest,1> *param_1,
          TSharedPtr<IHttpResponse,1> *param_2,bool param_3,
          TDelegate<void___cdecl(FDownloadHeaderResult_const_&),FDefaultDelegateUserPolicy> *param_4
          )

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  UEnum *pUVar4;
  bool bVar5;
  int iVar6;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar7;
  UPackage *pUVar8;
  wchar_t *pwVar9;
  UEnum *local_res8;
  undefined1 local_118 [8];
  ForAnyElementType local_110;
  ulonglong local_108;
  undefined **local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  FWeakObjectPtr local_e8;
  UEnum *local_e0;
  FString local_d8;
  longlong local_c8;
  undefined **local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  TSharedPtr<IHttpRequest,1> local_a8;
  TSharedPtr<IHttpResponse,1> local_98;
  TSharedPtr<IHttpRequest,1> local_88;
  FDestructionSentinel local_78;
  FString local_60;
  FReadAccessScope local_50;
  FReadAccessScope local_38;
  wchar_t *pwVar10;
  
  local_a8.Object = param_1->Object;
  local_a8.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  RequestFinished(this,Playback,DownloadingHeader,&local_a8);
  if ((((this->StreamArchive)._padding_ & 1) == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StreamArchive.IsLoading()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\HttpNetworkReplayStreaming\\Private\\HttpNetworkReplayStreaming.cpp"
                         ,0x79a,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_f8 = 6;
  local_100 = &___7FDownloadHeaderResult__6B_;
  if (param_3) {
    if ((param_2->Object == (IHttpResponse *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar6 = (**(code **)((longlong)*param_2->Object + 0x58))();
    if (iVar6 == 200) {
      local_f8 = 0;
      if ((param_2->Object == (IHttpResponse *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar7 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
               (**(code **)((longlong)*param_2->Object + 0x48))();
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::
      Append<unsigned_char,TSizedDefaultAllocator<32>_>(&(this->HeaderArchive).Buffer,pTVar7);
      if (4 < (byte)LogHttpReplay._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
      }
      goto LAB_146cc153a;
    }
  }
  if (1 < (byte)LogHttpReplay._0_1_) {
    local_98.Object = param_2->Object;
    local_98.SharedReferenceCount.ReferenceController =
         (param_2->SharedReferenceCount).ReferenceController;
    if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_88.Object = param_1->Object;
    local_88.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    BuildRequestErrorString(&local_60,&local_88,&local_98);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
  }
  piVar1 = &(this->StreamArchive).Buffer.ArrayMax;
  (this->StreamArchive).Buffer.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->StreamArchive).Buffer.AllocatorInstance,0,piVar1);
  }
  local_b0 = 0;
  uStack_b8 = 6;
  local_c0 = &___7FStartStreamingResult__6B_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->StartStreamingDelegate
             ,&local_50);
  if ((*(int *)&(this->StartStreamingDelegate).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->StartStreamingDelegate).field_0x8, plVar2 != (longlong *)0x0))
  {
    (**(code **)(*plVar2 + 0x68))(plVar2,&local_c0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_50);
  local_108 = 0;
  local_118 = (undefined1  [8])0x0;
  local_110.Data = (FScriptContainerElement *)0x0;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->StartStreamingDelegate,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_118);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,
             (FWriteAccessScope *)&local_78);
  if (((int)local_108 != 0) && (local_110.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_110.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_110,0,0,0x10);
    local_108 = local_108 & 0xffffffff00000000;
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  if (local_110.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_118);
  if (Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton == (UEnum *)0x0) {
    pUVar8 = Z_Construct_UPackage__Script_HttpNetworkReplayStreaming();
    Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_HttpNetworkReplayStreaming_EHttpReplayResult,
                       (UObject *)pUVar8,L"EHttpReplayResult");
  }
  pUVar4 = Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton;
  local_f0 = 3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton != (UEnum *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton);
  }
  local_e8.ObjectIndex = 0;
  local_e8.ObjectSerialNumber = 0;
  local_res8 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UEnum *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  FWeakObjectPtr::operator=(&local_e8,(FObjectPtr)&local_res8);
  local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.Data.ArrayNum = 0;
  local_d8.Data.ArrayMax = 0;
  local_c8 = 0;
  pwVar9 = L"EHttpReplayResult::InvalidHttpResponse";
  do {
    pwVar10 = pwVar9;
    pwVar9 = pwVar10 + 1;
  } while (*pwVar9 != L':');
  local_e0 = pUVar4;
  ::FString::operator=(&local_d8,pwVar10 + 3);
  (**(code **)(this->_padding_ + 0x1c0))(this);
  (**(code **)(this->_padding_ + 0x178))(this,&local_f0);
  if (local_c8 != 0) {
    (**(code **)(local_c8 + -0x10))(local_c8 + -0x10);
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
LAB_146cc153a:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_4,&local_38);
  if ((*(int *)&param_4->field_0x10 != 0) &&
     (plVar2 = *(longlong **)&param_4->field_0x8, plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x68))(plVar2,&local_100);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  local_100 = &___7FStreamingResultBase__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4);
  return;
}

// HttpEnumerateCheckpointsFinished @ 146cc15c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FHttpNetworkReplayStreamer::HttpEnumerateCheckpointsFinished
          (FHttpNetworkReplayStreamer *this,TSharedPtr<IHttpRequest,1> *param_1,
          TSharedPtr<IHttpResponse,1> *param_2,bool param_3)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  UEnum *pUVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  UPackage *pUVar8;
  wchar_t *pwVar9;
  UEnum *local_res8;
  UEnum *local_res10 [2];
  TLess<void> local_res20;
  undefined1 local_148 [8];
  ForAnyElementType local_140;
  ulonglong local_138;
  undefined8 local_130;
  FWeakObjectPtr local_128;
  UEnum *local_120;
  FString local_118;
  longlong local_108;
  undefined8 local_100;
  FWeakObjectPtr local_f8;
  UEnum *local_f0;
  FString local_e8;
  longlong local_d8;
  undefined **local_d0;
  undefined4 local_c8;
  undefined1 local_c0;
  TSharedPtr<IHttpRequest,1> local_b8;
  FScriptContainerElement *local_a8 [2];
  TSharedPtr<IHttpResponse,1> local_98;
  TSharedPtr<IHttpRequest,1> local_88;
  FDestructionSentinel local_78;
  FString local_60;
  FReadAccessScope local_50;
  wchar_t *pwVar10;
  
  local_b8.Object = param_1->Object;
  local_b8.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  RequestFinished(this,Playback,EnumeratingCheckpoints,&local_b8);
  local_c8 = 6;
  local_d0 = &___7FStartStreamingResult__6B_;
  local_c0 = 0;
  if (param_3) {
    if ((param_2->Object == (IHttpResponse *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar7 = (**(code **)((longlong)*param_2->Object + 0x58))();
    if (iVar7 == 200) {
      if (5 < (byte)LogHttpReplay._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
      }
      if ((param_2->Object == (IHttpResponse *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (**(code **)((longlong)*param_2->Object + 0x60))(param_2->Object,local_a8);
      DestructItems<FReplayEventListItem,int>
                ((FReplayEventListItem *)(this->CheckpointList).ReplayEvents.AllocatorInstance.Data,
                 (this->CheckpointList).ReplayEvents.ArrayNum);
      piVar1 = &(this->CheckpointList).ReplayEvents.ArrayMax;
      (this->CheckpointList).ReplayEvents.ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,8,0,&(this->CheckpointList).ReplayEvents.AllocatorInstance,0,piVar1);
      }
      cVar6 = (**(code **)((this->CheckpointList)._padding_ + 0x38))(&this->CheckpointList,local_a8)
      ;
      if (cVar6 == '\0') {
        if (2 < (byte)LogHttpReplay._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
        }
        if (Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton == (UEnum *)0x0) {
          pUVar8 = Z_Construct_UPackage__Script_HttpNetworkReplayStreaming();
          Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton =
               GetStaticEnum(Z_Construct_UEnum_HttpNetworkReplayStreaming_EHttpReplayResult,
                             (UObject *)pUVar8,L"EHttpReplayResult");
        }
        pUVar4 = Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton;
        local_130 = 1;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton != (UEnum *)0x0)) {
          UE::GC::MarkAsReachable
                    ((UObject *)Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton);
        }
        local_128.ObjectIndex = 0;
        local_128.ObjectSerialNumber = 0;
        local_res8 = pUVar4;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UEnum *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar4);
        }
        FWeakObjectPtr::operator=(&local_128,(FObjectPtr)&local_res8);
        local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_118.Data.ArrayNum = 0;
        local_118.Data.ArrayMax = 0;
        local_108 = 0;
        pwVar9 = L"EHttpReplayResult::FailedJsonParse";
        do {
          pwVar10 = pwVar9;
          pwVar9 = pwVar10 + 1;
        } while (*pwVar9 != L':');
        local_120 = pUVar4;
        ::FString::operator=(&local_118,pwVar10 + 3);
        (**(code **)(this->_padding_ + 0x1c0))(this);
        (**(code **)(this->_padding_ + 0x178))(this,&local_130);
        if (local_108 != 0) {
          (**(code **)(local_108 + -0x10))(local_108 + -0x10);
        }
        if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.Data.AllocatorInstance.Data);
        }
      }
      else {
        AlgoImpl::
        IntroSortInternal<FReplayEventListItem,int,UE::Core::Private::TProjectionMemberData<unsigned_int_FReplayEventListItem::*>,TLess<void>_>
                  ((FReplayEventListItem *)
                   (this->CheckpointList).ReplayEvents.AllocatorInstance.Data,
                   (this->CheckpointList).ReplayEvents.ArrayNum,
                   (TProjectionMemberData<unsigned_int_FReplayEventListItem::*>)0x38,local_res20);
        local_c8 = 0;
      }
      goto LAB_146cc19df;
    }
  }
  if (2 < (byte)LogHttpReplay._0_1_) {
    local_98.Object = param_2->Object;
    local_98.SharedReferenceCount.ReferenceController =
         (param_2->SharedReferenceCount).ReferenceController;
    if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_88.Object = param_1->Object;
    local_88.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    BuildRequestErrorString(&local_60,&local_88,&local_98);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
  }
  if (Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton == (UEnum *)0x0) {
    pUVar8 = Z_Construct_UPackage__Script_HttpNetworkReplayStreaming();
    Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_HttpNetworkReplayStreaming_EHttpReplayResult,
                       (UObject *)pUVar8,L"EHttpReplayResult");
  }
  pUVar4 = Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton;
  local_100 = 3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton != (UEnum *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton);
  }
  local_f8.ObjectIndex = 0;
  local_f8.ObjectSerialNumber = 0;
  local_res10[0] = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UEnum *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  FWeakObjectPtr::operator=(&local_f8,(FObjectPtr)local_res10);
  local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.Data.ArrayNum = 0;
  local_e8.Data.ArrayMax = 0;
  local_d8 = 0;
  pwVar9 = L"EHttpReplayResult::InvalidHttpResponse";
  do {
    pwVar10 = pwVar9;
    pwVar9 = pwVar10 + 1;
  } while (*pwVar9 != L':');
  local_f0 = pUVar4;
  ::FString::operator=(&local_e8,pwVar10 + 3);
  (**(code **)(this->_padding_ + 0x1c0))(this);
  (**(code **)(this->_padding_ + 0x178))(this,&local_100);
  local_a8[0] = local_e8.Data.AllocatorInstance.Data;
  if (local_d8 != 0) {
    (**(code **)(local_d8 + -0x10))(local_d8 + -0x10);
    local_a8[0] = local_e8.Data.AllocatorInstance.Data;
  }
LAB_146cc19df:
  if (local_a8[0] != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8[0]);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->StartStreamingDelegate
             ,&local_50);
  if ((*(int *)&(this->StartStreamingDelegate).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->StartStreamingDelegate).field_0x8, plVar2 != (longlong *)0x0))
  {
    (**(code **)(*plVar2 + 0x68))(plVar2,&local_d0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_50);
  local_138 = 0;
  local_148 = (undefined1  [8])0x0;
  local_140.Data = (FScriptContainerElement *)0x0;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->StartStreamingDelegate,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_148);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_148,
             (FWriteAccessScope *)&local_78);
  if (((int)local_138 != 0) && (local_140.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_140.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_140,0,0,0x10);
    local_138 = local_138 & 0xffffffff00000000;
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  if (local_140.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_148);
  local_d0 = &___7FStreamingResultBase__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// HttpEnumerateEventsFinished @ 146cc1b00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FHttpNetworkReplayStreamer::HttpEnumerateEventsFinished
          (FHttpNetworkReplayStreamer *this,TSharedPtr<IHttpRequest,1> *param_1,
          TSharedPtr<IHttpResponse,1> *param_2,bool param_3,
          TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  longlong *plVar1;
  code *pcVar2;
  UEnum *pUVar3;
  bool bVar4;
  int iVar5;
  UPackage *pUVar6;
  wchar_t *pwVar7;
  UEnum *local_res8;
  UEnum *local_res10;
  undefined **local_148;
  undefined4 local_140;
  FJsonSerializable local_138;
  FReplayEventListItem *local_130;
  undefined8 local_128;
  FJsonSerializable local_120;
  FReplayEventListItem *local_118;
  undefined8 local_110;
  FString local_108;
  undefined8 local_f8;
  FWeakObjectPtr local_f0;
  UEnum *local_e8;
  FString local_e0;
  longlong local_d0;
  undefined8 local_c8;
  FWeakObjectPtr local_c0;
  UEnum *local_b8;
  FString local_b0;
  longlong local_a0;
  TSharedPtr<IHttpRequest,1> local_98;
  TSharedPtr<IHttpResponse,1> local_88;
  TSharedPtr<IHttpRequest,1> local_78;
  FString local_68;
  FReadAccessScope local_58;
  wchar_t *pwVar8;
  
  local_98.Object = param_1->Object;
  local_98.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  RequestFinished(this,this->StreamerState,EnumeratingCustomEvent,&local_98);
  local_140 = 6;
  local_130 = (FReplayEventListItem *)0x0;
  local_148 = &___7FEnumerateEventsResult__6B_;
  local_138 = (FJsonSerializable)&___7FReplayEventList__6B_;
  local_128 = 0;
  if (param_3) {
    if ((param_2->Object == (IHttpResponse *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar5 = (**(code **)((longlong)*param_2->Object + 0x58))();
    if (iVar5 == 200) {
      local_118 = (FReplayEventListItem *)0x0;
      local_110 = 0;
      if ((param_2->Object == (IHttpResponse *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (**(code **)((longlong)*param_2->Object + 0x60))(param_2->Object,&local_108);
      bVar4 = FJsonSerializable::FromJson(&local_138,&local_108);
      if (bVar4) {
        if (5 < (byte)LogHttpReplay._0_1_) {
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
        }
        local_140 = 0;
      }
      else {
        if (2 < (byte)LogHttpReplay._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
        }
        if (Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton == (UEnum *)0x0) {
          pUVar6 = Z_Construct_UPackage__Script_HttpNetworkReplayStreaming();
          Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton =
               GetStaticEnum(Z_Construct_UEnum_HttpNetworkReplayStreaming_EHttpReplayResult,
                             (UObject *)pUVar6,L"EHttpReplayResult");
        }
        pUVar3 = Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton;
        local_f8 = 1;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton != (UEnum *)0x0)) {
          UE::GC::MarkAsReachable
                    ((UObject *)Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton);
        }
        local_f0.ObjectIndex = 0;
        local_f0.ObjectSerialNumber = 0;
        local_res8 = pUVar3;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UEnum *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar3);
        }
        FWeakObjectPtr::operator=(&local_f0,(FObjectPtr)&local_res8);
        local_e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_e0.Data.ArrayNum = 0;
        local_e0.Data.ArrayMax = 0;
        local_d0 = 0;
        pwVar7 = L"EHttpReplayResult::FailedJsonParse";
        do {
          pwVar8 = pwVar7;
          pwVar7 = pwVar8 + 1;
        } while (*pwVar7 != L':');
        local_e8 = pUVar3;
        ::FString::operator=(&local_e0,pwVar8 + 3);
        (**(code **)(this->_padding_ + 0x1c0))(this);
        (**(code **)(this->_padding_ + 0x178))(this,&local_f8);
        if (local_d0 != 0) {
          (**(code **)(local_d0 + -0x10))(local_d0 + -0x10);
        }
        if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e0.Data.AllocatorInstance.Data);
        }
      }
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
      local_120 = (FJsonSerializable)&___7FReplayEventList__6B_;
      DestructItems<FReplayEventListItem,int>(local_118,(int)local_110);
      if (local_118 != (FReplayEventListItem *)0x0) {
        FMemory::Free(local_118);
      }
      FJsonSerializable::~FJsonSerializable(&local_120);
      goto LAB_146cc1f05;
    }
  }
  if (2 < (byte)LogHttpReplay._0_1_) {
    local_88.Object = param_2->Object;
    local_88.SharedReferenceCount.ReferenceController =
         (param_2->SharedReferenceCount).ReferenceController;
    if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_78.Object = param_1->Object;
    local_78.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    BuildRequestErrorString(&local_68,&local_78,&local_88);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  if (Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton == (UEnum *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_HttpNetworkReplayStreaming();
    Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_HttpNetworkReplayStreaming_EHttpReplayResult,
                       (UObject *)pUVar6,L"EHttpReplayResult");
  }
  pUVar3 = Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton;
  local_c8 = 3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton != (UEnum *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton);
  }
  local_c0.ObjectIndex = 0;
  local_c0.ObjectSerialNumber = 0;
  local_res10 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UEnum *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  FWeakObjectPtr::operator=(&local_c0,(FObjectPtr)&local_res10);
  local_b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b0.Data.ArrayNum = 0;
  local_b0.Data.ArrayMax = 0;
  local_a0 = 0;
  pwVar7 = L"EHttpReplayResult::InvalidHttpResponse";
  do {
    pwVar8 = pwVar7;
    pwVar7 = pwVar8 + 1;
  } while (*pwVar7 != L':');
  local_b8 = pUVar3;
  ::FString::operator=(&local_b0,pwVar8 + 3);
  (**(code **)(this->_padding_ + 0x1c0))(this);
  (**(code **)(this->_padding_ + 0x178))(this,&local_c8);
  if (local_a0 != 0) {
    (**(code **)(local_a0 + -0x10))(local_a0 + -0x10);
  }
  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
LAB_146cc1f05:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_4,&local_58);
  if ((*(int *)&param_4->field_0x10 != 0) &&
     (plVar1 = *(longlong **)&param_4->field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,&local_148);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_58);
  local_138 = (FJsonSerializable)&___7FReplayEventList__6B_;
  DestructItems<FReplayEventListItem,int>(local_130,(int)local_128);
  if (local_130 != (FReplayEventListItem *)0x0) {
    FMemory::Free(local_130);
  }
  FJsonSerializable::~FJsonSerializable(&local_138);
  local_148 = &___7FStreamingResultBase__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4);
  return;
}

// HttpEnumerateSessionsFinished @ 146cc1fb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FHttpNetworkReplayStreamer::HttpEnumerateSessionsFinished
          (FHttpNetworkReplayStreamer *this,TSharedPtr<IHttpRequest,1> *param_1,
          TSharedPtr<IHttpResponse,1> *param_2,bool param_3,
          TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  TSharedPtr<FQueuedHttpRequest,1> *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  FScriptContainerElement *this_01;
  uint uVar7;
  longlong *plVar9;
  longlong *plVar10;
  FJsonSerializable local_128;
  FNetworkReplayListItem *local_120;
  undefined8 local_118;
  undefined **local_110;
  undefined4 local_108;
  ForAnyElementType local_100;
  undefined8 local_f8;
  FString *local_f0;
  undefined8 local_e8;
  FNetworkReplayStreamInfo local_d8;
  TSharedPtr<FQueuedHttpRequest,1> local_98;
  FString local_88;
  TSharedPtr<IHttpResponse,1> local_78;
  TSharedPtr<IHttpRequest,1> local_68;
  FString local_58;
  FReadAccessScope local_48;
  longlong *plVar8;
  
  this_00 = &this->InFlightHttpRequest;
  if (this_00->Object == (FQueuedHttpRequest *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InFlightHttpRequest.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\HttpNetworkReplayStreaming\\Private\\HttpNetworkReplayStreaming.cpp"
                       ,0x8c9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((this_00->Object == (FQueuedHttpRequest *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (((this_00->Object->Request).Object != param_1->Object) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InFlightHttpRequest->Request == HttpRequest",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\HttpNetworkReplayStreaming\\Private\\HttpNetworkReplayStreaming.cpp"
                         ,0x8ca,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((this_00->Object == (FQueuedHttpRequest *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((this_00->Object->Type != EnumeratingSessions) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InFlightHttpRequest->Type == EQueuedHttpRequestType::EnumeratingSessions",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\HttpNetworkReplayStreaming\\Private\\HttpNetworkReplayStreaming.cpp"
                         ,0x8cb,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_98.Object = (FQueuedHttpRequest *)0x0;
  local_98.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  TSharedPtr<FQueuedHttpRequest,1>::operator=(this_00,&local_98);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  plVar9 = (longlong *)0x0;
  local_108 = 6;
  local_100.Data = (FScriptContainerElement *)0x0;
  local_110 = &___7FEnumerateStreamsResult__6B_;
  local_f8 = 0;
  local_f0 = (FString *)0x0;
  local_e8 = 0;
  if (param_3) {
    if ((param_2->Object == (IHttpResponse *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar3 = (**(code **)((longlong)*param_2->Object + 0x58))();
    if (iVar3 == 200) {
      if (5 < (byte)LogHttpReplay._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
      }
      if ((param_2->Object == (IHttpResponse *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (**(code **)((longlong)*param_2->Object + 0x60))(param_2->Object,&local_88);
      local_120 = (FNetworkReplayListItem *)0x0;
      local_128 = (FJsonSerializable)&___7FNetworkReplayList__6B_;
      local_118 = 0;
      bVar2 = FJsonSerializable::FromJson(&local_128,&local_88);
      if (bVar2) {
        local_108 = 0;
        plVar8 = plVar9;
        plVar10 = plVar9;
        if (0 < (int)local_118) {
          do {
            uVar7 = (uint)plVar8;
            local_d8.Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_d8.Name.Data.ArrayNum = 0;
            local_d8.Name.Data.ArrayMax = 0;
            uVar6 = ~uVar7 >> 0x1f;
            local_d8.FriendlyName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_d8.FriendlyName.Data.ArrayNum = 0;
            local_d8.FriendlyName.Data.ArrayMax = 0;
            uVar4 = 0;
            if ((int)uVar7 < (int)local_118) {
              uVar4 = uVar6;
            }
            local_d8.Timestamp.Ticks = 0;
            local_d8.SizeInBytes = 0;
            local_d8.LengthInMS = 0;
            local_d8.NumViewers = 0;
            local_d8.Changelist = 0;
            local_d8.bIsLive = false;
            local_d8.bShouldKeep = false;
            if ((uVar4 == 0) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar2)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            iVar3 = *(int *)((longlong)&(local_120->SessionName).Data.ArrayNum + (longlong)plVar10);
            uVar4 = iVar3 - 1;
            if (iVar3 == 0) {
              uVar4 = 0;
            }
            ::FString::AssignRange
                      (&local_d8.Name,
                       *(wchar_t **)
                        ((longlong)&(local_120->SessionName).Data.AllocatorInstance.Data +
                        (longlong)plVar10),uVar4);
            uVar5 = 0;
            uVar4 = uVar5;
            if ((int)uVar7 < (int)local_118) {
              uVar4 = uVar6;
            }
            if ((uVar4 == 0) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar2)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            iVar3 = *(int *)((longlong)&(local_120->FriendlyName).Data.ArrayNum + (longlong)plVar10)
            ;
            uVar4 = iVar3 - 1;
            if (iVar3 == 0) {
              uVar4 = uVar5;
            }
            ::FString::AssignRange
                      (&local_d8.FriendlyName,
                       *(wchar_t **)
                        ((longlong)&(local_120->FriendlyName).Data.AllocatorInstance.Data +
                        (longlong)plVar10),uVar4);
            uVar4 = uVar5;
            if ((int)uVar7 < (int)local_118) {
              uVar4 = uVar6;
            }
            if (uVar4 == 0) {
              bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar2) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
            }
            local_d8.Timestamp.Ticks = *(long64 *)((longlong)(plVar10 + 7) + (longlong)local_120);
            uVar4 = uVar5;
            if ((int)uVar7 < (int)local_118) {
              uVar4 = uVar6;
            }
            iVar3 = (int)local_118;
            if (uVar4 == 0) {
              bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar2) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              iVar3 = (int)local_118;
            }
            local_d8.SizeInBytes = (long64)*(int *)((longlong)(plVar10 + 8) + (longlong)local_120);
            uVar4 = uVar5;
            if ((int)uVar7 < iVar3) {
              uVar4 = uVar6;
            }
            if (uVar4 == 0) {
              bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar2) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              iVar3 = (int)local_118;
            }
            uVar4 = uVar5;
            if ((int)uVar7 < iVar3) {
              uVar4 = uVar6;
            }
            local_d8.LengthInMS = *(int *)((longlong)plVar10 + (longlong)&local_120->DemoTimeInMs);
            if (uVar4 == 0) {
              bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar2) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              iVar3 = (int)local_118;
            }
            uVar4 = uVar5;
            if ((int)uVar7 < iVar3) {
              uVar4 = uVar6;
            }
            local_d8.NumViewers = *(int *)((longlong)(plVar10 + 9) + (longlong)local_120);
            if (uVar4 == 0) {
              bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar2) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              iVar3 = (int)local_118;
            }
            if ((int)uVar7 < iVar3) {
              uVar5 = uVar6;
            }
            local_d8.bIsLive = *(bool *)((longlong)plVar10 + (longlong)&local_120->bIsLive);
            if (uVar5 == 0) {
              bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar2) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              iVar3 = (int)local_118;
            }
            local_d8.Changelist = *(int *)((longlong)(plVar10 + 10) + (longlong)local_120);
            uVar4 = 0;
            if ((int)uVar7 < iVar3) {
              uVar4 = uVar6;
            }
            if ((uVar4 == 0) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar2)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            local_d8.bShouldKeep = *(bool *)((longlong)plVar10 + (longlong)&local_120->bShouldKeep);
            if (((local_100.Data <= &local_d8) &&
                (&local_d8 <
                 (FNetworkReplayStreamInfo *)(local_100.Data + (longlong)local_f8._4_4_ * 0x40))) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar2)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            iVar3 = (int)local_f8;
            if ((int)local_f8 == local_f8._4_4_) {
              iVar3 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x840,&local_100,(int *)((longlong)&local_f8 + 4));
            }
            local_f8 = CONCAT44(local_f8._4_4_,iVar3 + 1);
            this_01 = local_100.Data + (longlong)iVar3 * 0x40;
            ::FString::FString((FString *)this_01,&local_d8.Name);
            ::FString::FString((FString *)(this_01 + 0x10),&local_d8.FriendlyName);
            *(long64 *)(this_01 + 0x20) = local_d8.Timestamp.Ticks;
            *(long64 *)(this_01 + 0x28) = local_d8.SizeInBytes;
            *(int *)(this_01 + 0x30) = local_d8.LengthInMS;
            *(int *)(this_01 + 0x34) = local_d8.NumViewers;
            *(int *)(this_01 + 0x38) = local_d8.Changelist;
            this_01[0x3c] = (FScriptContainerElement)local_d8.bIsLive;
            this_01[0x3d] = (FScriptContainerElement)local_d8.bShouldKeep;
            if (local_d8.FriendlyName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_d8.FriendlyName.Data.AllocatorInstance.Data);
            }
            if (local_d8.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_d8.Name.Data.AllocatorInstance.Data);
            }
            plVar8 = (longlong *)(ulonglong)(uVar7 + 1);
            plVar10 = plVar10 + 0xb;
          } while ((int)(uVar7 + 1) < (int)local_118);
        }
      }
      else {
        if (2 < (byte)LogHttpReplay._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
        }
      }
      local_128 = (FJsonSerializable)&___7FNetworkReplayList__6B_;
      DestructItems<FNetworkReplayListItem,int>(local_120,(int)local_118);
      if (local_120 != (FNetworkReplayListItem *)0x0) {
        FMemory::Free(local_120);
      }
      FJsonSerializable::~FJsonSerializable(&local_128);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      DestructItems<FNetworkReplayStreamInfo,int>((FNetworkReplayStreamInfo *)0x0,0);
      goto LAB_146cc272c;
    }
  }
  if (2 < (byte)LogHttpReplay._0_1_) {
    local_78.Object = param_2->Object;
    local_78.SharedReferenceCount.ReferenceController =
         (param_2->SharedReferenceCount).ReferenceController;
    if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_68.Object = param_1->Object;
    local_68.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    BuildRequestErrorString(&local_58,&local_68,&local_78);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
LAB_146cc272c:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_4,&local_48);
  if (*(int *)&param_4->field_0x10 != 0) {
    plVar9 = *(longlong **)&param_4->field_0x8;
  }
  (**(code **)(*plVar9 + 0x60))(plVar9,&local_110);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_48);
  DestructItems<FString,int>(local_f0,(int)local_e8);
  if (local_f0 != (FString *)0x0) {
    FMemory::Free(local_f0);
  }
  DestructItems<FNetworkReplayStreamInfo,int>
            ((FNetworkReplayStreamInfo *)local_100.Data,(int)local_f8);
  if ((FNetworkReplayStreamInfo *)local_100.Data != (FNetworkReplayStreamInfo *)0x0) {
    FMemory::Free(local_100.Data);
  }
  local_110 = &___7FStreamingResultBase__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4);
  return;
}

// HttpHeaderUploadFinished @ 146cc27e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FHttpNetworkReplayStreamer::HttpHeaderUploadFinished
          (FHttpNetworkReplayStreamer *this,TSharedPtr<IHttpRequest,1> *param_1,
          TSharedPtr<IHttpResponse,1> *param_2,bool param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  FQueuedHttpRequest *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  UEnum *pUVar5;
  bool bVar6;
  int iVar7;
  IHttpRequest *pIVar8;
  longlong lVar9;
  UPackage *pUVar10;
  wchar_t *pwVar11;
  UEnum *local_res8;
  undefined1 local_118 [8];
  ForAnyElementType local_110;
  ulonglong local_108;
  undefined **local_100;
  undefined4 local_f8;
  undefined1 local_f0;
  undefined8 local_e8;
  FWeakObjectPtr local_e0;
  UEnum *local_d8;
  FString local_d0;
  longlong local_c0;
  TSharedPtr<IHttpRequest,1> local_b8;
  TSharedPtr<IHttpResponse,1> local_a8;
  TSharedPtr<FQueuedHttpRequest,1> local_98;
  TSharedPtr<IHttpResponse,1> local_88;
  TSharedPtr<IHttpRequest,1> local_78;
  FDestructionSentinel local_68;
  FString local_50;
  FReadAccessScope local_40;
  wchar_t *pwVar12;
  
  pTVar1 = (this->InFlightHttpRequest).SharedReferenceCount.ReferenceController;
  pFVar2 = (this->InFlightHttpRequest).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_b8.Object = param_1->Object;
  local_b8.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  RequestFinished(this,Recording,UploadingHeader,&local_b8);
  local_f8 = 6;
  local_100 = &___7FStartStreamingResult__6B_;
  local_f0 = 1;
  if (param_3) {
    if ((param_2->Object == (IHttpResponse *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar7 = (**(code **)((longlong)*param_2->Object + 0x58))();
    if (iVar7 != 0xcc) goto LAB_146cc2905;
    if (param_1->Object != (IHttpRequest *)0x0) {
      pIVar8 = TSharedPtr<IHttpRequest,1>::operator->(param_1);
      lVar9 = (**(code **)(*(longlong *)pIVar8 + 0x40))(pIVar8);
      this->TotalUploadBytes = this->TotalUploadBytes + lVar9;
    }
    if (5 < (byte)LogHttpReplay._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
    }
    local_f8 = 0;
  }
  else {
LAB_146cc2905:
    local_a8.Object = param_2->Object;
    local_a8.SharedReferenceCount.ReferenceController =
         (param_2->SharedReferenceCount).ReferenceController;
    if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_98.Object = pFVar2;
    local_98.SharedReferenceCount.ReferenceController = pTVar1;
    bVar6 = RetryRequest(this,&local_98,&local_a8,false);
    if (bVar6) goto LAB_146cc2b88;
    if (1 < (byte)LogHttpReplay._0_1_) {
      local_88.Object = param_2->Object;
      local_88.SharedReferenceCount.ReferenceController =
           (param_2->SharedReferenceCount).ReferenceController;
      if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_78.Object = param_1->Object;
      local_78.SharedReferenceCount.ReferenceController =
           (param_1->SharedReferenceCount).ReferenceController;
      if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      BuildRequestErrorString(&local_50,&local_78,&local_88);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
    }
    if (Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton == (UEnum *)0x0) {
      pUVar10 = Z_Construct_UPackage__Script_HttpNetworkReplayStreaming();
      Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton =
           GetStaticEnum(Z_Construct_UEnum_HttpNetworkReplayStreaming_EHttpReplayResult,
                         (UObject *)pUVar10,L"EHttpReplayResult");
    }
    pUVar5 = Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton;
    local_e8 = 3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton != (UEnum *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton)
      ;
    }
    local_e0.ObjectIndex = 0;
    local_e0.ObjectSerialNumber = 0;
    local_res8 = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UEnum *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    FWeakObjectPtr::operator=(&local_e0,(FObjectPtr)&local_res8);
    local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d0.Data.ArrayNum = 0;
    local_d0.Data.ArrayMax = 0;
    local_c0 = 0;
    pwVar11 = L"EHttpReplayResult::InvalidHttpResponse";
    do {
      pwVar12 = pwVar11;
      pwVar11 = pwVar12 + 1;
    } while (*pwVar11 != L':');
    local_d8 = pUVar5;
    ::FString::operator=(&local_d0,pwVar12 + 3);
    (**(code **)(this->_padding_ + 0x1c0))(this);
    (**(code **)(this->_padding_ + 0x178))(this,&local_e8);
    if (local_c0 != 0) {
      (**(code **)(local_c0 + -0x10))(local_c0 + -0x10);
    }
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->StartStreamingDelegate
             ,&local_40);
  if ((*(int *)&(this->StartStreamingDelegate).field_0x10 != 0) &&
     (plVar3 = *(longlong **)&(this->StartStreamingDelegate).field_0x8, plVar3 != (longlong *)0x0))
  {
    (**(code **)(*plVar3 + 0x68))(plVar3,&local_100);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_40);
  local_108 = 0;
  local_118 = (undefined1  [8])0x0;
  local_110.Data = (FScriptContainerElement *)0x0;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->StartStreamingDelegate,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_118);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,
             (FWriteAccessScope *)&local_68);
  if (((int)local_108 != 0) && (local_110.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_110.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_110,0,0,0x10);
    local_108 = local_108 & 0xffffffff00000000;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  if (local_110.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_118);
LAB_146cc2b88:
  local_100 = &___7FStreamingResultBase__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// HttpRefreshViewerFinished @ 146cc2be0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FHttpNetworkReplayStreamer::HttpRefreshViewerFinished
          (FHttpNetworkReplayStreamer *this,TSharedPtr<IHttpRequest,1> *param_1,
          TSharedPtr<IHttpResponse,1> *param_2,bool param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  UEnum *pUVar3;
  bool bVar4;
  int iVar5;
  UPackage *pUVar6;
  wchar_t *pwVar7;
  UEnum *local_res8;
  undefined8 local_c8;
  FWeakObjectPtr local_c0;
  UEnum *local_b8;
  FString local_b0;
  longlong local_a0;
  TSharedPtr<IHttpRequest,1> local_98;
  TSharedPtr<IHttpResponse,1> local_88;
  TSharedPtr<IHttpRequest,1> local_78;
  TSharedPtr<IHttpResponse,1> local_68;
  TSharedPtr<IHttpRequest,1> local_58;
  FString local_48;
  FString local_38;
  wchar_t *pwVar8;
  
  pTVar1 = (this->InFlightHttpRequest).SharedReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_98.Object = param_1->Object;
  local_98.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  RequestFinished(this,Playback,RefreshingViewer,&local_98);
  if (param_3) {
    if ((param_2->Object == (IHttpResponse *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar5 = (**(code **)((longlong)*param_2->Object + 0x58))();
    if (iVar5 == 0xcc) {
      this->RefreshViewerFails = 0;
      goto LAB_146cc2e8d;
    }
  }
  iVar5 = this->RefreshViewerFails + 1;
  this->RefreshViewerFails = iVar5;
  if (iVar5 < 7) {
    if ((byte)LogHttpReplay._0_1_ < 3) goto LAB_146cc2e8d;
    local_68.Object = param_2->Object;
    local_68.SharedReferenceCount.ReferenceController =
         (param_2->SharedReferenceCount).ReferenceController;
    if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_58.Object = param_1->Object;
    local_58.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    BuildRequestErrorString(&local_38,&local_58,&local_68);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
  }
  else {
    if (1 < (byte)LogHttpReplay._0_1_) {
      local_88.Object = param_2->Object;
      local_88.SharedReferenceCount.ReferenceController =
           (param_2->SharedReferenceCount).ReferenceController;
      if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_78.Object = param_1->Object;
      local_78.SharedReferenceCount.ReferenceController =
           (param_1->SharedReferenceCount).ReferenceController;
      if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      BuildRequestErrorString(&local_48,&local_78,&local_88);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    if (Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton == (UEnum *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_HttpNetworkReplayStreaming();
      Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton =
           GetStaticEnum(Z_Construct_UEnum_HttpNetworkReplayStreaming_EHttpReplayResult,
                         (UObject *)pUVar6,L"EHttpReplayResult");
    }
    pUVar3 = Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton;
    local_c8 = 3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton != (UEnum *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton)
      ;
    }
    local_c0.ObjectIndex = 0;
    local_c0.ObjectSerialNumber = 0;
    local_res8 = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UEnum *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    FWeakObjectPtr::operator=(&local_c0,(FObjectPtr)&local_res8);
    local_b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b0.Data.ArrayNum = 0;
    local_b0.Data.ArrayMax = 0;
    local_a0 = 0;
    pwVar7 = L"EHttpReplayResult::InvalidHttpResponse";
    do {
      pwVar8 = pwVar7;
      pwVar7 = pwVar8 + 1;
    } while (*pwVar7 != L':');
    local_b8 = pUVar3;
    ::FString::operator=(&local_b0,pwVar8 + 3);
    (**(code **)(this->_padding_ + 0x1c0))(this);
    (**(code **)(this->_padding_ + 0x178))(this,&local_c8);
    local_38.Data.AllocatorInstance.Data = local_b0.Data.AllocatorInstance.Data;
    if (local_a0 != 0) {
      (**(code **)(local_a0 + -0x10))(local_a0 + -0x10);
      local_38.Data.AllocatorInstance.Data = local_b0.Data.AllocatorInstance.Data;
    }
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
LAB_146cc2e8d:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// HttpRequestEventDataFinished @ 146cc2ed0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FHttpNetworkReplayStreamer::HttpRequestEventDataFinished
          (FHttpNetworkReplayStreamer *this,TSharedPtr<IHttpRequest,1> *param_1,
          TSharedPtr<IHttpResponse,1> *param_2,bool param_3,
          TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  FScriptContainerElement *_Src;
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForAnyElementType *pFVar5;
  IHttpResponse *pIVar6;
  TSharedPtr<IHttpRequest,1> local_58;
  FReadAccessScope local_48;
  undefined **local_30;
  undefined4 local_28;
  ForAnyElementType local_20;
  undefined8 local_18;
  
  local_58.Object = param_1->Object;
  local_58.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  RequestFinished(this,this->StreamerState,RequestEventData,&local_58);
  local_28 = 6;
  local_20.Data = (FScriptContainerElement *)0x0;
  local_30 = &___7FRequestEventDataResult__6B_;
  local_18 = 0;
  if (param_3) {
    if ((param_2->Object == (IHttpResponse *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar4 = (**(code **)((longlong)*param_2->Object + 0x58))();
    if (iVar4 == 200) {
      if (5 < (byte)LogHttpReplay._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
      }
      if ((param_2->Object == (IHttpResponse *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar5 = (ForAnyElementType *)(**(code **)((longlong)*param_2->Object + 0x48))();
      if (&local_20 != pFVar5) {
        iVar4 = *(int *)&pFVar5[1].Data;
        _Src = pFVar5->Data;
        local_18 = CONCAT44(local_18._4_4_,iVar4);
        if (((iVar4 != 0) || (local_18._4_4_ != 0)) &&
           (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,iVar4,local_18._4_4_,&local_20,iVar4,(int *)((longlong)&local_18 + 4)),
           iVar4 != 0)) {
          memcpy(local_20.Data,_Src,(longlong)iVar4);
        }
      }
      local_28 = 0;
      goto LAB_146cc3092;
    }
  }
  if (1 < (byte)LogHttpReplay._0_1_) {
    if (param_2->Object != (IHttpResponse *)0x0) {
      pIVar6 = TSharedPtr<IHttpResponse,1>::operator->(param_2);
      (**(code **)((longlong)*pIVar6 + 0x58))(pIVar6);
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
  }
LAB_146cc3092:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_4,&local_48);
  if ((*(int *)&param_4->field_0x10 != 0) &&
     (plVar1 = *(longlong **)&param_4->field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,&local_30);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_48);
  if (local_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data);
  }
  local_30 = &___7FStreamingResultBase__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4);
  return;
}

// HttpStartDownloadingFinished @ 146cc3130

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FHttpNetworkReplayStreamer::HttpStartDownloadingFinished
          (FHttpNetworkReplayStreamer *this,TSharedPtr<IHttpRequest,1> *param_1,
          TSharedPtr<IHttpResponse,1> *param_2,bool param_3)

{
  longlong *plVar1;
  code *pcVar2;
  UEnum *pUVar3;
  void *_Src;
  bool bVar4;
  int iVar5;
  UPackage *pUVar6;
  ForAnyElementType FVar7;
  wchar_t *pwVar8;
  longlong lVar10;
  UEnum *local_res10;
  ForAnyElementType local_1d8;
  int local_1d0;
  int local_1cc;
  undefined1 local_1c8 [8];
  ForAnyElementType local_1c0;
  ulonglong local_1b8;
  undefined1 local_1b0 [8];
  ForAnyElementType local_1a8;
  ulonglong local_1a0;
  FJsonSerializable local_198;
  void *local_190;
  undefined8 local_188;
  wchar_t *local_180;
  undefined8 local_178;
  uint local_170;
  int local_16c;
  wchar_t *local_168;
  undefined8 local_160;
  undefined8 local_158;
  FWeakObjectPtr local_150;
  UEnum *local_148;
  FString local_140;
  longlong local_130;
  undefined8 local_128;
  FWeakObjectPtr local_120;
  UEnum *local_118;
  FString local_110;
  longlong local_100;
  UEnum *local_f8;
  FString local_f0;
  FStartStreamingResult local_e0;
  undefined **local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  TSharedPtr<IHttpRequest,1> local_b0;
  TSharedPtr<IHttpResponse,1> local_a0;
  TSharedPtr<IHttpRequest,1> local_90;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FString local_50;
  FReadAccessScope local_40;
  wchar_t *pwVar9;
  
  local_b0.Object = param_1->Object;
  local_b0.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_b0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_b0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_b0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  RequestFinished(this,Playback,StartDownloading,&local_b0);
  if (param_3) {
    if ((param_2->Object == (IHttpResponse *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar5 = (**(code **)((longlong)*param_2->Object + 0x58))();
    if (iVar5 == 200) {
      if ((param_2->Object == (IHttpResponse *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (**(code **)((longlong)*param_2->Object + 0x60))(param_2->Object,&local_f0);
      local_198 = (FJsonSerializable)&___7FNetworkReplayStartDownloadingResponse__6B_;
      local_190 = (void *)0x0;
      local_188 = 0;
      local_180 = (wchar_t *)0x0;
      local_178 = 0;
      local_168 = (wchar_t *)0x0;
      local_160 = 0;
      bVar4 = FJsonSerializable::FromJson(&local_198,&local_f0);
      _Src = local_190;
      if (bVar4) {
        lVar10 = (longlong)(int)local_188;
        local_1d8.Data = (FScriptContainerElement *)0x0;
        local_1d0 = (int)local_188;
        if ((int)local_188 == 0) {
          local_1cc = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,(int)local_188,0,&local_1d8,(int)local_188,&local_1cc);
          memcpy(local_1d8.Data,_Src,lVar10 * 2);
        }
        iVar5 = (int)local_178 + -1;
        if ((int)local_178 == 0) {
          iVar5 = 0;
        }
        ::FString::AssignRange(&this->ViewerName,local_180,iVar5);
        FVar7.Data = (FScriptContainerElement *)L"";
        if (local_1d0 != 0) {
          FVar7.Data = local_1d8.Data;
        }
        iVar5 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar7.Data,L"Live");
        this->bStreamIsLive = iVar5 == 0;
        iVar5 = (int)local_160 + -1;
        if ((int)local_160 == 0) {
          iVar5 = 0;
        }
        ::FString::AssignRange(&this->StreamMetadata,local_168,iVar5);
        this->TotalDemoTimeInMS = local_170;
        this->NumTotalStreamChunks = local_16c;
        if (4 < (byte)LogHttpReplay._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
        }
        if (this->NumTotalStreamChunks == 0) {
          if (2 < (byte)LogHttpReplay._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
          }
          local_e0.bRecording = false;
          local_e0._17_7_ = 0;
          local_e0._padding_ = 6;
          local_e0._padding_ = (longlong)&___7FStartStreamingResult__6B_;
          TDelegate<void___cdecl(FStartStreamingResult_const_&),FDefaultDelegateUserPolicy>::
          ExecuteIfBound(&this->StartStreamingDelegate,&local_e0);
          local_1b8 = 0;
          local_1c8 = (undefined1  [8])0x0;
          local_1c0.Data = (FScriptContainerElement *)0x0;
          TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->StartStreamingDelegate,
                     (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1c8);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1c8,
                     (FWriteAccessScope *)&local_80);
          if (((int)local_1b8 != 0) && (local_1c0.Data != (FScriptContainerElement *)0x0)) {
            (*(code *)**(undefined8 **)local_1c0.Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_1c0,0,0,0x10);
            local_1b8 = local_1b8 & 0xffffffff00000000;
          }
          if (local_80.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
          }
          if (local_1c0.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1c0.Data);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_1c8);
          if (Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton == (UEnum *)0x0) {
            pUVar6 = Z_Construct_UPackage__Script_HttpNetworkReplayStreaming();
            Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton =
                 GetStaticEnum(Z_Construct_UEnum_HttpNetworkReplayStreaming_EHttpReplayResult,
                               (UObject *)pUVar6,L"EHttpReplayResult");
          }
          pUVar3 = Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton;
          local_158 = 6;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton != (UEnum *)0x0)) {
            UE::GC::MarkAsReachable
                      ((UObject *)Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton);
          }
          local_150.ObjectIndex = 0;
          local_150.ObjectSerialNumber = 0;
          local_res10 = pUVar3;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UEnum *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar3);
          }
          FWeakObjectPtr::operator=(&local_150,(FObjectPtr)&local_res10);
          local_140.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_140.Data.ArrayNum = 0;
          local_140.Data.ArrayMax = 0;
          local_130 = 0;
          pwVar8 = L"EHttpReplayResult::InvalidPayload";
          do {
            pwVar9 = pwVar8;
            pwVar8 = pwVar9 + 1;
          } while (*pwVar8 != L':');
          local_148 = pUVar3;
          ::FString::operator=(&local_140,pwVar9 + 3);
          (**(code **)(this->_padding_ + 0x1c0))(this);
          (**(code **)(this->_padding_ + 0x178))(this,&local_158);
          if (local_130 != 0) {
            (**(code **)(local_130 + -0x10))(local_130 + -0x10);
          }
          if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_140.Data.AllocatorInstance.Data);
          }
        }
        if (local_1d8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d8.Data);
        }
      }
      else if (2 < (byte)LogHttpReplay._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
      }
      local_198 = (FJsonSerializable)&___7FNetworkReplayStartDownloadingResponse__6B_;
      if (local_168 != (wchar_t *)0x0) {
        FMemory::Free(local_168);
      }
      if (local_180 != (wchar_t *)0x0) {
        FMemory::Free(local_180);
      }
      if (local_190 != (void *)0x0) {
        FMemory::Free(local_190);
      }
      FJsonSerializable::~FJsonSerializable(&local_198);
      goto LAB_146cc384a;
    }
  }
  if (1 < (byte)LogHttpReplay._0_1_) {
    local_a0.Object = param_2->Object;
    local_a0.SharedReferenceCount.ReferenceController =
         (param_2->SharedReferenceCount).ReferenceController;
    if (local_a0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_a0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_a0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_90.Object = param_1->Object;
    local_90.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_90.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_90.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_90.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    BuildRequestErrorString(&local_50,&local_90,&local_a0);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
  }
  local_b8 = 0;
  uStack_c0 = 6;
  local_c8 = &___7FStartStreamingResult__6B_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->StartStreamingDelegate
             ,&local_40);
  if ((*(int *)&(this->StartStreamingDelegate).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->StartStreamingDelegate).field_0x8, plVar1 != (longlong *)0x0))
  {
    (**(code **)(*plVar1 + 0x68))(plVar1,&local_c8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_40);
  local_1a0 = 0;
  local_1b0 = (undefined1  [8])0x0;
  local_1a8.Data = (FScriptContainerElement *)0x0;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->StartStreamingDelegate,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1b0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1b0,
             (FWriteAccessScope *)&local_68);
  if (((int)local_1a0 != 0) && (local_1a8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_1a8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1a8,0,0,0x10);
    local_1a0 = local_1a0 & 0xffffffff00000000;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  if (local_1a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1b0);
  if (Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton == (UEnum *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_HttpNetworkReplayStreaming();
    Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_HttpNetworkReplayStreaming_EHttpReplayResult,
                       (UObject *)pUVar6,L"EHttpReplayResult");
  }
  pUVar3 = Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton;
  local_128 = 3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton != (UEnum *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton);
  }
  local_120.ObjectIndex = 0;
  local_120.ObjectSerialNumber = 0;
  local_f8 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UEnum *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  FWeakObjectPtr::operator=(&local_120,(FObjectPtr)&local_f8);
  local_110.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_110.Data.ArrayNum = 0;
  local_110.Data.ArrayMax = 0;
  local_100 = 0;
  pwVar8 = L"EHttpReplayResult::InvalidHttpResponse";
  do {
    pwVar9 = pwVar8;
    pwVar8 = pwVar9 + 1;
  } while (*pwVar8 != L':');
  local_118 = pUVar3;
  ::FString::operator=(&local_110,pwVar9 + 3);
  (**(code **)(this->_padding_ + 0x1c0))(this);
  (**(code **)(this->_padding_ + 0x178))(this,&local_128);
  local_f0.Data.AllocatorInstance.Data = local_110.Data.AllocatorInstance.Data;
  if (local_100 != 0) {
    (**(code **)(local_100 + -0x10))(local_100 + -0x10);
    local_f0.Data.AllocatorInstance.Data = local_110.Data.AllocatorInstance.Data;
  }
LAB_146cc384a:
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// HttpStartUploadingFinished @ 146cc3890

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FHttpNetworkReplayStreamer::HttpStartUploadingFinished
          (FHttpNetworkReplayStreamer *this,TSharedPtr<IHttpRequest,1> *param_1,
          TSharedPtr<IHttpResponse,1> *param_2,bool param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  FQueuedHttpRequest *pFVar2;
  code *pcVar3;
  UEnum *pUVar4;
  bool bVar5;
  int iVar6;
  UPackage *pUVar7;
  wchar_t *pwVar8;
  UEnum *local_res8;
  FJsonSerializable local_e8;
  wchar_t *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  FWeakObjectPtr local_c8;
  UEnum *local_c0;
  FString local_b8;
  longlong local_a8;
  FString local_a0;
  TSharedPtr<IHttpRequest,1> local_90;
  TSharedPtr<IHttpResponse,1> local_80;
  TSharedPtr<FQueuedHttpRequest,1> local_70;
  TSharedPtr<IHttpResponse,1> local_60;
  TSharedPtr<IHttpRequest,1> local_50;
  FString local_40;
  wchar_t *pwVar9;
  
  pTVar1 = (this->InFlightHttpRequest).SharedReferenceCount.ReferenceController;
  pFVar2 = (this->InFlightHttpRequest).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_90.Object = param_1->Object;
  local_90.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_90.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_90.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_90.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  RequestFinished(this,Recording,StartUploading,&local_90);
  if (param_3) {
    if ((param_2->Object == (IHttpResponse *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar6 = (**(code **)((longlong)*param_2->Object + 0x58))();
    if (iVar6 != 200) goto LAB_146cc3a60;
    if ((param_2->Object == (IHttpResponse *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (**(code **)((longlong)*param_2->Object + 0x60))(param_2->Object,&local_a0);
    local_e8 = (FJsonSerializable)&___7FNetworkReplayStartUploadingResponse__6B_;
    local_e0 = (wchar_t *)0x0;
    local_d8 = 0;
    bVar5 = FJsonSerializable::FromJson(&local_e8,&local_a0);
    if (bVar5) {
      iVar6 = (int)local_d8 + -1;
      if ((int)local_d8 == 0) {
        iVar6 = 0;
      }
      ::FString::AssignRange(&this->SessionName,local_e0,iVar6);
      if (4 < (byte)LogHttpReplay._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
      }
      (**(code **)(this->_padding_ + 0x180))(this,&this->SessionName);
    }
    else if (2 < (byte)LogHttpReplay._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
    }
    local_e8 = (FJsonSerializable)&___7FNetworkReplayStartUploadingResponse__6B_;
    if (local_e0 != (wchar_t *)0x0) {
      FMemory::Free(local_e0);
    }
    FJsonSerializable::~FJsonSerializable(&local_e8);
  }
  else {
LAB_146cc3a60:
    local_80.Object = param_2->Object;
    local_80.SharedReferenceCount.ReferenceController =
         (param_2->SharedReferenceCount).ReferenceController;
    if (local_80.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_80.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_80.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_70.Object = pFVar2;
    local_70.SharedReferenceCount.ReferenceController = pTVar1;
    bVar5 = RetryRequest(this,&local_70,&local_80,false);
    if (bVar5) goto LAB_146cc3c09;
    if (1 < (byte)LogHttpReplay._0_1_) {
      local_60.Object = param_2->Object;
      local_60.SharedReferenceCount.ReferenceController =
           (param_2->SharedReferenceCount).ReferenceController;
      if (local_60.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_60.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_60.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_50.Object = param_1->Object;
      local_50.SharedReferenceCount.ReferenceController =
           (param_1->SharedReferenceCount).ReferenceController;
      if (local_50.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_50.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_50.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      BuildRequestErrorString(&local_40,&local_50,&local_60);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
      if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data.AllocatorInstance.Data);
      }
    }
    if (Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton == (UEnum *)0x0) {
      pUVar7 = Z_Construct_UPackage__Script_HttpNetworkReplayStreaming();
      Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton =
           GetStaticEnum(Z_Construct_UEnum_HttpNetworkReplayStreaming_EHttpReplayResult,
                         (UObject *)pUVar7,L"EHttpReplayResult");
    }
    pUVar4 = Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton;
    local_d0 = 3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton != (UEnum *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton)
      ;
    }
    local_c8.ObjectIndex = 0;
    local_c8.ObjectSerialNumber = 0;
    local_res8 = pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UEnum *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    FWeakObjectPtr::operator=(&local_c8,(FObjectPtr)&local_res8);
    local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.Data.ArrayNum = 0;
    local_b8.Data.ArrayMax = 0;
    local_a8 = 0;
    pwVar8 = L"EHttpReplayResult::InvalidHttpResponse";
    do {
      pwVar9 = pwVar8;
      pwVar8 = pwVar9 + 1;
    } while (*pwVar8 != L':');
    local_c0 = pUVar4;
    ::FString::operator=(&local_b8,pwVar9 + 3);
    (**(code **)(this->_padding_ + 0x1c0))(this);
    (**(code **)(this->_padding_ + 0x178))(this,&local_d0);
    local_a0.Data.AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
    if (local_a8 != 0) {
      (**(code **)(local_a8 + -0x10))(local_a8 + -0x10);
      local_a0.Data.AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
    }
  }
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
LAB_146cc3c09:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// HttpStopUploadingFinished @ 146cc3c50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FHttpNetworkReplayStreamer::HttpStopUploadingFinished
          (FHttpNetworkReplayStreamer *this,TSharedPtr<IHttpRequest,1> *param_1,
          TSharedPtr<IHttpResponse,1> *param_2,bool param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  FQueuedHttpRequest *pFVar2;
  code *pcVar3;
  UEnum *pUVar4;
  bool bVar5;
  int iVar6;
  UPackage *pUVar7;
  wchar_t *pwVar8;
  UEnum *local_res8;
  undefined8 local_b8;
  FWeakObjectPtr local_b0;
  UEnum *local_a8;
  FString local_a0;
  longlong local_90;
  TSharedPtr<IHttpRequest,1> local_88;
  TSharedPtr<IHttpResponse,1> local_78;
  TSharedPtr<FQueuedHttpRequest,1> local_68;
  TSharedPtr<IHttpResponse,1> local_58;
  TSharedPtr<IHttpRequest,1> local_48;
  FString local_38;
  wchar_t *pwVar9;
  
  pTVar1 = (this->InFlightHttpRequest).SharedReferenceCount.ReferenceController;
  pFVar2 = (this->InFlightHttpRequest).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_88.Object = param_1->Object;
  local_88.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  RequestFinished(this,Recording,StopUploading,&local_88);
  if (param_3) {
    if ((param_2->Object == (IHttpResponse *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar6 = (**(code **)((longlong)*param_2->Object + 0x58))();
    if (iVar6 != 0xcc) goto LAB_146cc3def;
    if (4 < (byte)LogHttpReplay._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
    }
  }
  else {
LAB_146cc3def:
    local_78.Object = param_2->Object;
    local_78.SharedReferenceCount.ReferenceController =
         (param_2->SharedReferenceCount).ReferenceController;
    if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_68.Object = pFVar2;
    local_68.SharedReferenceCount.ReferenceController = pTVar1;
    bVar5 = RetryRequest(this,&local_68,&local_78,false);
    if (bVar5) goto LAB_146cc3db4;
    if (1 < (byte)LogHttpReplay._0_1_) {
      local_58.Object = param_2->Object;
      local_58.SharedReferenceCount.ReferenceController =
           (param_2->SharedReferenceCount).ReferenceController;
      if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_48.Object = param_1->Object;
      local_48.SharedReferenceCount.ReferenceController =
           (param_1->SharedReferenceCount).ReferenceController;
      if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      BuildRequestErrorString(&local_38,&local_48,&local_58);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    if (Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton == (UEnum *)0x0) {
      pUVar7 = Z_Construct_UPackage__Script_HttpNetworkReplayStreaming();
      Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton =
           GetStaticEnum(Z_Construct_UEnum_HttpNetworkReplayStreaming_EHttpReplayResult,
                         (UObject *)pUVar7,L"EHttpReplayResult");
    }
    pUVar4 = Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton;
    local_b8 = 3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton != (UEnum *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton)
      ;
    }
    local_b0.ObjectIndex = 0;
    local_b0.ObjectSerialNumber = 0;
    local_res8 = pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UEnum *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    FWeakObjectPtr::operator=(&local_b0,(FObjectPtr)&local_res8);
    local_a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a0.Data.ArrayNum = 0;
    local_a0.Data.ArrayMax = 0;
    local_90 = 0;
    pwVar8 = L"EHttpReplayResult::InvalidHttpResponse";
    do {
      pwVar9 = pwVar8;
      pwVar8 = pwVar9 + 1;
    } while (*pwVar8 != L':');
    local_a8 = pUVar4;
    ::FString::operator=(&local_a0,pwVar9 + 3);
    (**(code **)(this->_padding_ + 0x1c0))(this);
    (**(code **)(this->_padding_ + 0x178))(this,&local_b8);
    if (local_90 != 0) {
      (**(code **)(local_90 + -0x10))(local_90 + -0x10);
    }
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
  }
  (**(code **)((this->StreamArchive)._padding_ + 200))(&this->StreamArchive,0);
  (**(code **)((this->StreamArchive)._padding_ + 0xd8))(&this->StreamArchive,0);
  iVar6 = (this->StreamArchive).Buffer.ArrayMax;
  (this->StreamArchive).Buffer.ArrayNum = 0;
  if (iVar6 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->StreamArchive).Buffer.AllocatorInstance,0,
               &(this->StreamArchive).Buffer.ArrayMax);
  }
  (this->StreamArchive).Pos = 0;
  this->StreamChunkIndex = 0;
  ::FString::Empty(&this->SessionName);
LAB_146cc3db4:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// HttpUploadCheckpointFinished @ 146cc3fb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FHttpNetworkReplayStreamer::HttpUploadCheckpointFinished
          (FHttpNetworkReplayStreamer *this,TSharedPtr<IHttpRequest,1> *param_1,
          TSharedPtr<IHttpResponse,1> *param_2,bool param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  FQueuedHttpRequest *pFVar2;
  code *pcVar3;
  UEnum *pUVar4;
  bool bVar5;
  int iVar6;
  IHttpRequest *pIVar7;
  longlong lVar8;
  UPackage *pUVar9;
  wchar_t *pwVar10;
  UEnum *local_res8;
  undefined8 local_b8;
  FWeakObjectPtr local_b0;
  UEnum *local_a8;
  FString local_a0;
  longlong local_90;
  TSharedPtr<IHttpRequest,1> local_88;
  TSharedPtr<IHttpResponse,1> local_78;
  TSharedPtr<FQueuedHttpRequest,1> local_68;
  TSharedPtr<IHttpResponse,1> local_58;
  TSharedPtr<IHttpRequest,1> local_48;
  FString local_38;
  wchar_t *pwVar11;
  
  pTVar1 = (this->InFlightHttpRequest).SharedReferenceCount.ReferenceController;
  pFVar2 = (this->InFlightHttpRequest).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_88.Object = param_1->Object;
  local_88.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  RequestFinished(this,Recording,UploadingCheckpoint,&local_88);
  if (param_3) {
    if ((param_2->Object == (IHttpResponse *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar6 = (**(code **)((longlong)*param_2->Object + 0x58))();
    if (iVar6 != 200) {
      if ((param_2->Object == (IHttpResponse *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = (**(code **)((longlong)*param_2->Object + 0x58))();
      if (iVar6 != 0xcc) goto LAB_146cc40ee;
    }
    if (param_1->Object != (IHttpRequest *)0x0) {
      pIVar7 = TSharedPtr<IHttpRequest,1>::operator->(param_1);
      lVar8 = (**(code **)(*(longlong *)pIVar7 + 0x40))(pIVar7);
      this->TotalUploadBytes = this->TotalUploadBytes + lVar8;
    }
    if (5 < (byte)LogHttpReplay._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
    }
  }
  else {
LAB_146cc40ee:
    local_78.Object = param_2->Object;
    local_78.SharedReferenceCount.ReferenceController =
         (param_2->SharedReferenceCount).ReferenceController;
    if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_68.Object = pFVar2;
    local_68.SharedReferenceCount.ReferenceController = pTVar1;
    bVar5 = RetryRequest(this,&local_68,&local_78,false);
    if (!bVar5) {
      if (2 < (byte)LogHttpReplay._0_1_) {
        local_58.Object = param_2->Object;
        local_58.SharedReferenceCount.ReferenceController =
             (param_2->SharedReferenceCount).ReferenceController;
        if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_48.Object = param_1->Object;
        local_48.SharedReferenceCount.ReferenceController =
             (param_1->SharedReferenceCount).ReferenceController;
        if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        BuildRequestErrorString(&local_38,&local_48,&local_58);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
      if (Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton == (UEnum *)0x0) {
        pUVar9 = Z_Construct_UPackage__Script_HttpNetworkReplayStreaming();
        Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton =
             GetStaticEnum(Z_Construct_UEnum_HttpNetworkReplayStreaming_EHttpReplayResult,
                           (UObject *)pUVar9,L"EHttpReplayResult");
      }
      pUVar4 = Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton;
      local_b8 = 3;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton != (UEnum *)0x0)) {
        UE::GC::MarkAsReachable
                  ((UObject *)Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton);
      }
      local_b0.ObjectIndex = 0;
      local_b0.ObjectSerialNumber = 0;
      local_res8 = pUVar4;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UEnum *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      FWeakObjectPtr::operator=(&local_b0,(FObjectPtr)&local_res8);
      local_a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a0.Data.ArrayNum = 0;
      local_a0.Data.ArrayMax = 0;
      local_90 = 0;
      pwVar10 = L"EHttpReplayResult::InvalidHttpResponse";
      do {
        pwVar11 = pwVar10;
        pwVar10 = pwVar11 + 1;
      } while (*pwVar10 != L':');
      local_a8 = pUVar4;
      ::FString::operator=(&local_a0,pwVar11 + 3);
      (**(code **)(this->_padding_ + 0x1c0))(this);
      (**(code **)(this->_padding_ + 0x178))(this,&local_b8);
      if (local_90 != 0) {
        (**(code **)(local_90 + -0x10))(local_90 + -0x10);
      }
      if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// HttpUploadCustomEventFinished @ 146cc42e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FHttpNetworkReplayStreamer::HttpUploadCustomEventFinished
          (FHttpNetworkReplayStreamer *this,TSharedPtr<IHttpRequest,1> *param_1,
          TSharedPtr<IHttpResponse,1> *param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  IHttpRequest *pIVar4;
  longlong lVar5;
  TSharedPtr<IHttpRequest,1> local_58;
  TSharedPtr<IHttpResponse,1> local_48;
  TSharedPtr<IHttpRequest,1> local_38;
  FString local_28;
  
  local_58.Object = param_1->Object;
  local_58.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  RequestFinished(this,this->StreamerState,UploadingCustomEvent,&local_58);
  if (param_3) {
    if ((param_2->Object == (IHttpResponse *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar3 = (**(code **)((longlong)*param_2->Object + 0x58))();
    if (iVar3 != 200) {
      if ((param_2->Object == (IHttpResponse *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar3 = (**(code **)((longlong)*param_2->Object + 0x58))();
      if (iVar3 != 0xcc) goto LAB_146cc43c1;
    }
    if (param_1->Object != (IHttpRequest *)0x0) {
      pIVar4 = TSharedPtr<IHttpRequest,1>::operator->(param_1);
      lVar5 = (**(code **)(*(longlong *)pIVar4 + 0x40))(pIVar4);
      this->TotalUploadBytes = this->TotalUploadBytes + lVar5;
    }
    if (5 < (byte)LogHttpReplay._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
    }
  }
  else {
LAB_146cc43c1:
    if (2 < (byte)LogHttpReplay._0_1_) {
      local_48.Object = param_2->Object;
      local_48.SharedReferenceCount.ReferenceController =
           (param_2->SharedReferenceCount).ReferenceController;
      if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_38.Object = param_1->Object;
      local_38.SharedReferenceCount.ReferenceController =
           (param_1->SharedReferenceCount).ReferenceController;
      if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      BuildRequestErrorString(&local_28,&local_38,&local_48);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// HttpUploadStreamFinished @ 146cc44c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FHttpNetworkReplayStreamer::HttpUploadStreamFinished
          (FHttpNetworkReplayStreamer *this,TSharedPtr<IHttpRequest,1> *param_1,
          TSharedPtr<IHttpResponse,1> *param_2,bool param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  FQueuedHttpRequest *pFVar2;
  code *pcVar3;
  UEnum *pUVar4;
  bool bVar5;
  int iVar6;
  UPackage *pUVar7;
  wchar_t *pwVar8;
  UEnum *local_res8;
  undefined8 local_b8;
  FWeakObjectPtr local_b0;
  UEnum *local_a8;
  FString local_a0;
  longlong local_90;
  TSharedPtr<IHttpRequest,1> local_88;
  TSharedPtr<IHttpResponse,1> local_78;
  TSharedPtr<FQueuedHttpRequest,1> local_68;
  TSharedPtr<IHttpResponse,1> local_58;
  TSharedPtr<IHttpRequest,1> local_48;
  FString local_38;
  wchar_t *pwVar9;
  
  pTVar1 = (this->InFlightHttpRequest).SharedReferenceCount.ReferenceController;
  pFVar2 = (this->InFlightHttpRequest).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_88.Object = param_1->Object;
  local_88.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  RequestFinished(this,Recording,UploadingStream,&local_88);
  if (param_3) {
    if ((param_2->Object == (IHttpResponse *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar6 = (**(code **)((longlong)*param_2->Object + 0x58))();
    if (iVar6 == 0xcc) {
      if (5 < (byte)LogHttpReplay._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
      }
      goto LAB_146cc4746;
    }
  }
  local_78.Object = param_2->Object;
  local_78.SharedReferenceCount.ReferenceController =
       (param_2->SharedReferenceCount).ReferenceController;
  if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_68.Object = pFVar2;
  local_68.SharedReferenceCount.ReferenceController = pTVar1;
  bVar5 = RetryRequest(this,&local_68,&local_78,false);
  if (!bVar5) {
    if (1 < (byte)LogHttpReplay._0_1_) {
      local_58.Object = param_2->Object;
      local_58.SharedReferenceCount.ReferenceController =
           (param_2->SharedReferenceCount).ReferenceController;
      if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_48.Object = param_1->Object;
      local_48.SharedReferenceCount.ReferenceController =
           (param_1->SharedReferenceCount).ReferenceController;
      if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      BuildRequestErrorString(&local_38,&local_48,&local_58);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    if (Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton == (UEnum *)0x0) {
      pUVar7 = Z_Construct_UPackage__Script_HttpNetworkReplayStreaming();
      Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton =
           GetStaticEnum(Z_Construct_UEnum_HttpNetworkReplayStreaming_EHttpReplayResult,
                         (UObject *)pUVar7,L"EHttpReplayResult");
    }
    pUVar4 = Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton;
    local_b8 = 3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton != (UEnum *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)Z_Registration_Info_UEnum_EHttpReplayResult.OuterSingleton)
      ;
    }
    local_b0.ObjectIndex = 0;
    local_b0.ObjectSerialNumber = 0;
    local_res8 = pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UEnum *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    FWeakObjectPtr::operator=(&local_b0,(FObjectPtr)&local_res8);
    local_a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a0.Data.ArrayNum = 0;
    local_a0.Data.ArrayMax = 0;
    local_90 = 0;
    pwVar8 = L"EHttpReplayResult::InvalidHttpResponse";
    do {
      pwVar9 = pwVar8;
      pwVar8 = pwVar9 + 1;
    } while (*pwVar8 != L':');
    local_a8 = pUVar4;
    ::FString::operator=(&local_a0,pwVar9 + 3);
    (**(code **)(this->_padding_ + 0x1c0))(this);
    (**(code **)(this->_padding_ + 0x178))(this,&local_b8);
    if (local_90 != 0) {
      (**(code **)(local_90 + -0x10))(local_90 + -0x10);
    }
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
  }
LAB_146cc4746:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// IsCheckpointTypeSupported @ 146cc4820

bool __thiscall
FHttpNetworkReplayStreamer::IsCheckpointTypeSupported
          (FHttpNetworkReplayStreamer *this,EReplayCheckpointType param_1)

{
  if ((param_1 != Full) && (param_1 != Delta)) {
    return false;
  }
  return true;
}

// IsDataAvailable @ 146cc4840

bool __thiscall FHttpNetworkReplayStreamer::IsDataAvailable(FHttpNetworkReplayStreamer *this)

{
  longlong *plVar1;
  char cVar2;
  FReadAccessScope local_28;
  
  cVar2 = (**(code **)(this->_padding_ + 0x168))();
  if (cVar2 == '\0') {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->GotoCheckpointDelegate,&local_28);
    if (((*(int *)&(this->GotoCheckpointDelegate).field_0x10 != 0) &&
        (plVar1 = *(longlong **)&(this->GotoCheckpointDelegate).field_0x8, plVar1 != (longlong *)0x0
        )) && (cVar2 = (**(code **)(*plVar1 + 0x38))(), cVar2 != '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return false;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    if (((this->HighPriorityEndTime == 0) && (((this->StreamArchive)._padding_ & 1) != 0)) &&
       ((this->StreamArchive).Pos < (this->StreamArchive).Buffer.ArrayNum)) {
      return 0 < this->NumTotalStreamChunks;
    }
  }
  return false;
}

// IsDataAvailableForTimeRange @ 146cc48f0

bool __thiscall
FHttpNetworkReplayStreamer::IsDataAvailableForTimeRange
          (FHttpNetworkReplayStreamer *this,uint param_1,uint param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(this->_padding_ + 0x168))();
  if (((cVar1 == '\0') && (this->StreamTimeRangeStart <= param_1)) &&
     (param_2 <= this->StreamTimeRangeEnd)) {
    return true;
  }
  return false;
}

// IsHttpRequestInFlight @ 146cc4950

bool __thiscall FHttpNetworkReplayStreamer::IsHttpRequestInFlight(FHttpNetworkReplayStreamer *this)

{
  return (this->InFlightHttpRequest).Object != (FQueuedHttpRequest *)0x0;
}

// IsLive @ 146cc4970

bool __thiscall FHttpNetworkReplayStreamer::IsLive(FHttpNetworkReplayStreamer *this)

{
  return this->bStreamIsLive;
}

// IsLoadingCheckpoint @ 146cc4980

bool __thiscall FHttpNetworkReplayStreamer::IsLoadingCheckpoint(FHttpNetworkReplayStreamer *this)

{
  longlong *plVar1;
  char cVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->GotoCheckpointDelegate
             ,&local_28);
  if ((*(int *)&(this->GotoCheckpointDelegate).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->GotoCheckpointDelegate).field_0x8, plVar1 != (longlong *)0x0))
  {
    cVar2 = (**(code **)(*plVar1 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return true;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return false;
}

// IsStreaming @ 146cc4a70

bool __thiscall FHttpNetworkReplayStreamer::IsStreaming(FHttpNetworkReplayStreamer *this)

{
  return this->StreamerState != Idle;
}

// IsTaskPendingOrInFlight @ 146cc4a90

bool __thiscall
FHttpNetworkReplayStreamer::IsTaskPendingOrInFlight(FHttpNetworkReplayStreamer *this,Type param_1)

{
  int iVar1;
  FQueuedHttpRequest *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  iVar1 = (this->QueuedHttpRequests).ArrayNum;
  pFVar6 = (this->QueuedHttpRequests).AllocatorInstance.Data;
  pFVar7 = pFVar6 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->QueuedHttpRequests).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FQueuedHttpRequest,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar7) break;
    if ((*(longlong *)pFVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    if (*(Type *)(*(longlong *)pFVar6 + 8) == param_1) {
      return true;
    }
    pFVar6 = pFVar6 + 0x10;
  }
  pFVar2 = (this->InFlightHttpRequest).Object;
  if (pFVar2 == (FQueuedHttpRequest *)0x0) {
    return false;
  }
  return pFVar2->Type == param_1;
}

// KeepReplay @ 146cc4b50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FHttpNetworkReplayStreamer::KeepReplay
          (FHttpNetworkReplayStreamer *this,FString *param_1,bool param_2,
          TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy> *param_3)

{
  longlong *plVar1;
  code *pcVar2;
  IHttpRequest *pIVar3;
  bool bVar4;
  FHttpModule *pFVar5;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar6;
  ulong64 uVar7;
  IHttpRequest *local_d8;
  TReferenceControllerBase<1> *pTStack_d0;
  undefined **local_c8;
  undefined8 local_c0;
  void *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  TSharedPtr<IHttpRequest,1> local_48;
  FReadAccessScope local_38;
  
  if ((this->ServerURL).Data.ArrayNum < 2) {
    if (2 < (byte)LogHttpReplay._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
    }
    local_c0 = 6;
    local_b8 = (void *)0x0;
    local_b0 = 0;
    local_a8 = 0;
    local_c8 = &___7FKeepReplayResult__6B_;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_3,&local_38);
    if ((*(int *)&param_3->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_3->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x68))(plVar1,&local_c8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_38);
    if (local_b8 != (void *)0x0) {
      FMemory::Free(local_b8);
    }
  }
  else {
    pFVar5 = FHttpModule::Get();
    (**(code **)(pFVar5->_padding_ + 0x40))(pFVar5,&local_d8);
    pIVar3 = local_d8;
    pcVar2 = *(code **)(*(longlong *)local_d8 + 0x68);
    if (param_2) {
      ::FString::PrintfImpl(&local_a0,L"%sreplay/%s?shouldKeep=true");
      (*pcVar2)(pIVar3,&local_a0);
    }
    else {
      ::FString::PrintfImpl(&local_90,L"%sreplay/%s?shouldKeep=false");
      (*pcVar2)(pIVar3,&local_90);
      local_a0.Data.AllocatorInstance.Data = local_90.Data.AllocatorInstance.Data;
    }
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
    pIVar3 = local_d8;
    pcVar2 = *(code **)(*(longlong *)local_d8 + 0x60);
    ::FString::FString(&local_80,L"POST");
    (*pcVar2)(pIVar3,&local_80);
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
    pIVar3 = local_d8;
    pcVar2 = *(code **)(*(longlong *)local_d8 + 0xb0);
    ::FString::FString(&local_60,L"application/json");
    ::FString::FString(&local_70,L"Content-Type");
    (*pcVar2)(pIVar3,&local_70,&local_60);
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
    lpCriticalSection = (LPCRITICAL_SECTION)(**(code **)(*(longlong *)local_d8 + 0xf0))();
    if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    EnterCriticalSection(lpCriticalSection);
    puVar6 = UE::Core::Private::DelegateAllocate
                       (0x48,(FDelegateAllocation *)(lpCriticalSection + 1));
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy__V__TDelegate___A6AXAEBUFKeepReplayResult___ZUFDefaultDelegateUserPolicy____VFString____6B_
      ;
      TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy>::
      TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy>
                ((TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy> *)
                 (puVar6 + 1),param_3);
      ::FString::FString((FString *)(puVar6 + 4),param_1);
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[6] = uVar7;
      *puVar6 = &
                ___7__TBaseRawMethodDelegateInstance__0A_VFHttpNetworkReplayStreamer____A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy__V__TDelegate___A6AXAEBUFKeepReplayResult___ZUFDefaultDelegateUserPolicy____VFString____6B_
      ;
      puVar6[8] = KeepReplayFinished;
      puVar6[7] = this;
    }
    if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(lpCriticalSection);
    }
    local_48.Object = local_d8;
    local_48.SharedReferenceCount.ReferenceController = pTStack_d0;
    if (pTStack_d0 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_d0->SharedReferenceCount = (atomic<int>)((int)pTStack_d0->SharedReferenceCount + 1);
      UNLOCK();
    }
    AddRequestToQueue(this,KeepReplay,&local_48,0,0.0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_d0);
  }
  return;
}

// KeepReplay @ 146cc4e90

void __thiscall
FHttpNetworkReplayStreamer::KeepReplay
          (FHttpNetworkReplayStreamer *this,FString *param_1,bool param_2,int param_3,
          TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy> *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000146cc4e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x100))();
  return;
}

// KeepReplayFinished @ 146cc4eb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FHttpNetworkReplayStreamer::KeepReplayFinished
          (FHttpNetworkReplayStreamer *this,TSharedPtr<IHttpRequest,1> *param_1,
          TSharedPtr<IHttpResponse,1> *param_2,bool param_3,
          TDelegate<void___cdecl(FKeepReplayResult_const_&),FDefaultDelegateUserPolicy> *param_4,
          FString *param_5)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  IHttpResponse *pIVar5;
  longlong *plVar6;
  int iVar7;
  TSharedPtr<IHttpRequest,1> local_58;
  FReadAccessScope local_48;
  undefined **local_30;
  undefined4 local_28;
  FString local_20;
  undefined8 local_10;
  
  local_58.Object = param_1->Object;
  local_58.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  RequestFinished(this,this->StreamerState,KeepReplay,&local_58);
  plVar6 = (longlong *)0x0;
  local_30 = &___7FKeepReplayResult__6B_;
  local_28 = 6;
  local_20.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_20.Data.ArrayNum = 0;
  local_20.Data.ArrayMax = 0;
  local_10 = 0;
  if (param_3) {
    if ((param_2->Object == (IHttpResponse *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar4 = (**(code **)((longlong)*param_2->Object + 0x58))();
    if (iVar4 == 0xcc) {
      iVar4 = (param_5->Data).ArrayNum;
      local_28 = 0;
      iVar7 = iVar4 + -1;
      if (iVar4 == 0) {
        iVar7 = 0;
      }
      ::FString::AssignRange(&local_20,(wchar_t *)(param_5->Data).AllocatorInstance.Data,iVar7);
      goto LAB_146cc4fcf;
    }
  }
  if (1 < (byte)LogHttpReplay._0_1_) {
    if (param_2->Object != (IHttpResponse *)0x0) {
      pIVar5 = TSharedPtr<IHttpResponse,1>::operator->(param_2);
      (**(code **)((longlong)*pIVar5 + 0x58))(pIVar5);
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
  }
LAB_146cc4fcf:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_4,&local_48);
  if (*(int *)&param_4->field_0x10 != 0) {
    plVar6 = *(longlong **)&param_4->field_0x8;
  }
  (**(code **)(*plVar6 + 0x60))(plVar6,&local_30);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_48);
  if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data.AllocatorInstance.Data);
  }
  local_30 = &___7FStreamingResultBase__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4);
  pFVar1 = (param_5->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ProcessNextHttpRequest @ 146cc57a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FHttpNetworkReplayStreamer::ProcessNextHttpRequest(FHttpNetworkReplayStreamer *this)

{
  double *pdVar1;
  TSharedPtr<FQueuedHttpRequest,1> *this_00;
  FScriptContainerElement *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined8 uVar4;
  TReferenceControllerBase<1> *pTVar5;
  PRTL_CRITICAL_SECTION_DEBUG p_Var6;
  code *pcVar7;
  double dVar8;
  bool bVar9;
  undefined1 uVar10;
  char cVar11;
  uint uVar12;
  int iVar13;
  FQueuedHttpRequest *pFVar14;
  IHttpRequest *pIVar15;
  FString *pFVar16;
  TDelegateBase<FThreadSafeDelegateMode> *this_01;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar17;
  TReferenceControllerBase<1> *pTVar18;
  wchar_t *pwVar19;
  longlong lVar20;
  undefined8 *puVar21;
  LARGE_INTEGER local_res8;
  undefined8 local_78;
  TReferenceControllerBase<1> *local_70;
  IHttpRequest *local_68;
  TReferenceControllerBase<1> *local_60;
  IHttpRequest *local_58;
  TReferenceControllerBase<1> *local_50;
  FQueuedHttpRequest *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  
  this_00 = &this->InFlightHttpRequest;
  if (this_00->Object != (FQueuedHttpRequest *)0x0) {
    if (0.0 < this_00->Object->NextRetryTime) {
      QueryPerformanceCounter(&local_res8);
      dVar8 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
              __real_4170000000000000;
      if ((this_00->Object == (FQueuedHttpRequest *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
      pdVar1 = &this_00->Object->NextRetryTime;
      if (*pdVar1 <= dVar8 && dVar8 != *pdVar1) {
        pFVar14 = TSharedPtr<FQueuedHttpRequest,1>::operator->(this_00);
        pFVar14->NextRetryTime = 0.0;
        pFVar14 = TSharedPtr<FQueuedHttpRequest,1>::operator->(this_00);
        pIVar15 = TSharedPtr<IHttpRequest,1>::operator->(&pFVar14->Request);
        (**(code **)(*(longlong *)pIVar15 + 0xe8))(pIVar15);
      }
    }
    return false;
  }
  if ((this->QueuedHttpRequests).ArrayNum < 1) {
    return false;
  }
  pFVar2 = (this->QueuedHttpRequests).AllocatorInstance.Data;
  pTVar3 = *(TReferenceControllerBase<1> **)(pFVar2 + 8);
  pFVar14 = *(FQueuedHttpRequest **)pFVar2;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  TArray<TSharedPtr<FQueuedHttpRequest,1>,TSizedDefaultAllocator<32>_>::RemoveAt
            (&this->QueuedHttpRequests,0,Default);
  if (5 < (byte)LogHttpReplay._0_1_) {
    if ((pFVar14 == (FQueuedHttpRequest *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      uVar10 = (*pcVar7)();
      return (bool)uVar10;
    }
    EQueuedHttpRequestType::ToString(pFVar14->Type);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
  }
  if ((this_00->Object != (FQueuedHttpRequest *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InFlightHttpRequest.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\HttpNetworkReplayStreaming\\Private\\HttpNetworkReplayStreaming.cpp"
                         ,0x966,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    uVar10 = (*pcVar7)();
    return (bool)uVar10;
  }
  if ((pFVar14 == (FQueuedHttpRequest *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    uVar10 = (*pcVar7)();
    return (bool)uVar10;
  }
  if (pFVar14->Type == UploadHeader) {
    if (((this->SessionName).Data.ArrayNum < 2) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("!SessionName.IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\HttpNetworkReplayStreaming\\Private\\HttpNetworkReplayStreaming.cpp"
                           ,0x96b,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      uVar10 = (*pcVar7)();
      return (bool)uVar10;
    }
    UploadHeader(this);
  }
  else if (pFVar14->Type == StopStreaming) {
    if ((this->StreamerState == Idle) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsStreaming()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\HttpNetworkReplayStreaming\\Private\\HttpNetworkReplayStreaming.cpp"
                           ,0x971,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      uVar10 = (*pcVar7)();
      return (bool)uVar10;
    }
    iVar13 = (this->QueuedHttpRequests).ArrayNum;
    this->StreamerState = Idle;
    this->bStopStreamingCalled = false;
    if ((iVar13 != 0) &&
       (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7599545937047849332>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\HttpNetworkReplayStreaming\\Private\\HttpNetworkReplayStreaming.cpp"
                           ,0x974,"QueuedHttpRequests.Num() == 0"), bVar9)) {
      pcVar7 = (code *)swi(3);
      uVar10 = (*pcVar7)();
      return (bool)uVar10;
    }
  }
  else {
    cVar11 = (**(code **)(pFVar14->_padding_ + 8))(pFVar14,this,&this->ServerURL,&this->SessionName)
    ;
    if ((cVar11 != '\0') && ((pFVar14->Request).Object != (IHttpRequest *)0x0)) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_48 = (this->InFlightHttpRequest).Object;
      pTStack_40 = (this->InFlightHttpRequest).SharedReferenceCount.ReferenceController;
      (this->InFlightHttpRequest).Object = pFVar14;
      (this->InFlightHttpRequest).SharedReferenceCount.ReferenceController = pTVar3;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_40);
      pFVar14 = TSharedPtr<FQueuedHttpRequest,1>::operator->(&this->InFlightHttpRequest);
      pIVar15 = TSharedPtr<IHttpRequest,1>::operator->(&pFVar14->Request);
      pFVar16 = (FString *)(*(code *)**(undefined8 **)pIVar15)(pIVar15);
      iVar13 = (pFVar16->Data).ArrayNum;
      if (iVar13 == 0) {
        pwVar19 = L"";
      }
      else {
        pwVar19 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
      }
      iVar17 = iVar13 + -1;
      if (iVar13 == 0) {
        iVar17 = 0;
      }
      uVar12 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar17,pwVar19);
      iVar13 = TSet<TTuple<FString,FCachedResponse>,TDefaultMapHashableKeyFuncs<FString,FCachedResponse,0>,FDefaultSetAllocator>
               ::FindIndexByHash<FString>
                         ((TSet<TTuple<FString,FCachedResponse>,TDefaultMapHashableKeyFuncs<FString,FCachedResponse,0>,FDefaultSetAllocator>
                           *)&this->ResponseCache,uVar12,pFVar16);
      if (iVar13 != -1) {
        lVar20 = (longlong)iVar13 * 0x30 + *(longlong *)&this->ResponseCache;
        puVar21 = (undefined8 *)(lVar20 + 0x10);
        if (lVar20 == 0) {
          puVar21 = (undefined8 *)0x0;
        }
        if (puVar21 != (undefined8 *)0x0) {
          pFVar14 = TSharedPtr<FQueuedHttpRequest,1>::operator->(&this->InFlightHttpRequest);
          pIVar15 = TSharedPtr<IHttpRequest,1>::operator->(&pFVar14->Request);
          this_01 = (TDelegateBase<FThreadSafeDelegateMode> *)
                    (**(code **)(*(longlong *)pIVar15 + 0xf0))(pIVar15);
          bVar9 = TDelegateBase<FThreadSafeDelegateMode>::IsBound(this_01);
          if (bVar9) {
            dVar8 = FWindowsPlatformTime::Seconds();
            puVar21[2] = dVar8;
            pFVar14 = TSharedPtr<FQueuedHttpRequest,1>::operator->(&this->InFlightHttpRequest);
            pIVar15 = TSharedPtr<IHttpRequest,1>::operator->(&pFVar14->Request);
            lpCriticalSection =
                 (LPCRITICAL_SECTION)(**(code **)(*(longlong *)pIVar15 + 0xf0))(pIVar15);
            uVar4 = *puVar21;
            pTVar18 = (TReferenceControllerBase<1> *)puVar21[1];
            if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
              UNLOCK();
            }
            pFVar14 = TSharedPtr<FQueuedHttpRequest,1>::operator->(&this->InFlightHttpRequest);
            pTVar5 = (pFVar14->Request).SharedReferenceCount.ReferenceController;
            pIVar15 = (pFVar14->Request).Object;
            if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
              UNLOCK();
            }
            if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Mutex",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                                   ,0x1b,L""), bVar9)) {
              pcVar7 = (code *)swi(3);
              uVar10 = (*pcVar7)();
              return (bool)uVar10;
            }
            EnterCriticalSection(lpCriticalSection);
            if ((lpCriticalSection[1].LockCount == 0) ||
               (p_Var6 = lpCriticalSection[1].DebugInfo, p_Var6 == (PRTL_CRITICAL_SECTION_DEBUG)0x0)
               ) {
              LeaveCriticalSection(lpCriticalSection);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar5);
            }
            else {
              local_78 = uVar4;
              local_70 = pTVar18;
              local_68 = pIVar15;
              local_60 = pTVar5;
              (**(code **)(*(longlong *)p_Var6 + 0x68))(p_Var6,&local_68,&local_78,1);
              LeaveCriticalSection(lpCriticalSection);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)0x0);
              pTVar18 = (TReferenceControllerBase<1> *)0x0;
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar18);
            goto LAB_146cc5c25;
          }
          pFVar14 = TSharedPtr<FQueuedHttpRequest,1>::operator->(&this->InFlightHttpRequest);
          pIVar15 = TSharedPtr<IHttpRequest,1>::operator->(&pFVar14->Request);
          pFVar16 = (FString *)(*(code *)**(undefined8 **)pIVar15)(pIVar15);
          TMapBase<FString,FCachedResponse,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FCachedResponse,0>_>
          ::Remove((TMapBase<FString,FCachedResponse,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FCachedResponse,0>_>
                    *)&this->ResponseCache,pFVar16);
        }
      }
      pcVar7 = *(code **)(this->_padding_ + 0x1c8);
      pFVar14 = TSharedPtr<FQueuedHttpRequest,1>::operator->(&this->InFlightHttpRequest);
      local_58 = (pFVar14->Request).Object;
      local_50 = (pFVar14->Request).SharedReferenceCount.ReferenceController;
      if (local_50 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_50->SharedReferenceCount = (atomic<int>)((int)local_50->SharedReferenceCount + 1);
        UNLOCK();
      }
      (*pcVar7)(this,&local_58);
      bVar9 = true;
      goto LAB_146cc5c30;
    }
  }
LAB_146cc5c25:
  bVar9 = ProcessNextHttpRequest(this);
LAB_146cc5c30:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return bVar9;
}

// ProcessRequestInternal @ 146cc5cf0

void __thiscall
FHttpNetworkReplayStreamer::ProcessRequestInternal
          (FHttpNetworkReplayStreamer *this,TSharedPtr<IHttpRequest,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1->Object == (IHttpRequest *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (**(code **)(*(longlong *)param_1->Object + 0xe8))();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// RefreshHeader @ 146cc5d50

void __thiscall FHttpNetworkReplayStreamer::RefreshHeader(FHttpNetworkReplayStreamer *this)

{
  TSharedPtr<IHttpRequest,1> local_18;
  
  local_18.Object = (IHttpRequest *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  AddRequestToQueue(this,UploadHeader,&local_18,0,0.0);
  return;
}

// RefreshViewer @ 146cc5d90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FHttpNetworkReplayStreamer::RefreshViewer(FHttpNetworkReplayStreamer *this,bool param_1)

{
  code *pcVar1;
  IHttpRequest *pIVar2;
  bool bVar3;
  FHttpModule *pFVar4;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar5;
  ulong64 uVar6;
  LARGE_INTEGER local_res8;
  IHttpRequest *local_58;
  TReferenceControllerBase<1> *pTStack_50;
  FString local_48;
  FString local_38;
  FString local_28;
  TSharedPtr<IHttpRequest,1> local_18;
  
  if ((this->ServerURL).Data.ArrayNum < 2) {
    if (2 < (byte)LogHttpReplay._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
      return;
    }
  }
  else {
    pFVar4 = FHttpModule::Get();
    (**(code **)(pFVar4->_padding_ + 0x40))(pFVar4,&local_58);
    pIVar2 = local_58;
    pcVar1 = *(code **)(*(longlong *)local_58 + 0x68);
    if (param_1) {
      ::FString::PrintfImpl(&local_48,L"%sreplay/%s/viewer/%s?final=true");
      (*pcVar1)(pIVar2,&local_48);
    }
    else {
      ::FString::PrintfImpl(&local_38,L"%sreplay/%s/viewer/%s");
      (*pcVar1)(pIVar2,&local_38);
      local_48.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    pIVar2 = local_58;
    pcVar1 = *(code **)(*(longlong *)local_58 + 0x60);
    ::FString::FString(&local_28,L"POST");
    (*pcVar1)(pIVar2,&local_28);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    lpCriticalSection = (LPCRITICAL_SECTION)(**(code **)(*(longlong *)local_58 + 0xf0))();
    if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    EnterCriticalSection(lpCriticalSection);
    puVar5 = UE::Core::Private::DelegateAllocate
                       (0x28,(FDelegateAllocation *)(lpCriticalSection + 1));
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &
                ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
      ;
      uVar6 = FDelegateHandle::GenerateNewID();
      puVar5[2] = uVar6;
      *puVar5 = &
                ___7__TBaseRawMethodDelegateInstance__0A_VFHttpNetworkReplayStreamer____A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
      ;
      puVar5[4] = HttpRefreshViewerFinished;
      puVar5[3] = this;
    }
    if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(lpCriticalSection);
    }
    local_18.Object = local_58;
    local_18.SharedReferenceCount.ReferenceController = pTStack_50;
    if (pTStack_50 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_50->SharedReferenceCount = (atomic<int>)((int)pTStack_50->SharedReferenceCount + 1);
      UNLOCK();
    }
    AddRequestToQueue(this,RefreshingViewer,&local_18,0,0.0);
    QueryPerformanceCounter(&local_res8);
    this->LastRefreshViewerTime =
         (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
         __real_4170000000000000;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_50);
  }
  return;
}

// RenameReplay @ 146cc6360

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FHttpNetworkReplayStreamer::RenameReplay
          (FHttpNetworkReplayStreamer *this,FString *param_1,FString *param_2,
          TDelegate<void___cdecl(FRenameReplayResult_const_&),FDefaultDelegateUserPolicy> *param_3)

{
  longlong *plVar1;
  undefined **local_38;
  undefined4 local_30;
  FReadAccessScope local_28;
  
  if (4 < (byte)LogHttpReplay._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
  }
  local_30 = 1;
  local_38 = &___7FRenameReplayResult__6B_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_3,&local_28);
  if (*(int *)&param_3->field_0x10 == 0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    plVar1 = *(longlong **)&param_3->field_0x8;
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,&local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// RenameReplay @ 146cc63e0

void __thiscall
FHttpNetworkReplayStreamer::RenameReplay
          (FHttpNetworkReplayStreamer *this,FString *param_1,FString *param_2,int param_3,
          TDelegate<void___cdecl(FRenameReplayResult_const_&),FDefaultDelegateUserPolicy> *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000146cc63e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x120))();
  return;
}

// RenameReplayFriendlyName @ 146cc6400

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FHttpNetworkReplayStreamer::RenameReplayFriendlyName
          (FHttpNetworkReplayStreamer *this,FString *param_1,FString *param_2,
          TDelegate<void___cdecl(FRenameReplayResult_const_&),FDefaultDelegateUserPolicy> *param_3)

{
  longlong *plVar1;
  undefined **local_38;
  undefined4 local_30;
  FReadAccessScope local_28;
  
  if (4 < (byte)LogHttpReplay._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
  }
  local_30 = 1;
  local_38 = &___7FRenameReplayResult__6B_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_3,&local_28);
  if (*(int *)&param_3->field_0x10 == 0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    plVar1 = *(longlong **)&param_3->field_0x8;
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,&local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// RenameReplayFriendlyName @ 146cc6480

void __thiscall
FHttpNetworkReplayStreamer::RenameReplayFriendlyName
          (FHttpNetworkReplayStreamer *this,FString *param_1,FString *param_2,int param_3,
          TDelegate<void___cdecl(FRenameReplayResult_const_&),FDefaultDelegateUserPolicy> *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000146cc6488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x110))();
  return;
}

// RequestEventData @ 146cc64a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FHttpNetworkReplayStreamer::RequestEventData
          (FHttpNetworkReplayStreamer *this,FString *param_1,FString *param_2,
          TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  if (5 < (byte)LogHttpReplay._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
  }
                    /* WARNING: Could not recover jumptable at 0x000146cc64ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0xc0))(this,param_2,param_3);
  return;
}

// RequestEventData @ 146cc6500

void __thiscall
FHttpNetworkReplayStreamer::RequestEventData
          (FHttpNetworkReplayStreamer *this,FString *param_1,FString *param_2,int param_3,
          TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy>
          *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000146cc6508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0xb8))();
  return;
}

// RequestEventData @ 146cc6520

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FHttpNetworkReplayStreamer::RequestEventData
          (FHttpNetworkReplayStreamer *this,FString *param_1,
          TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy>
          *param_2)

{
  code *pcVar1;
  IHttpRequest *pIVar2;
  bool bVar3;
  FHttpModule *pFVar4;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar5;
  ulong64 uVar6;
  longlong *plVar7;
  IHttpRequest *local_98;
  TReferenceControllerBase<1> *pTStack_90;
  FString local_88;
  FString local_78;
  TSharedPtr<IHttpRequest,1> local_68;
  FReadAccessScope local_58;
  undefined **local_40;
  undefined8 local_38;
  void *local_30;
  undefined8 local_28;
  
  if ((this->ServerURL).Data.ArrayNum < 2) {
    if (2 < (byte)LogHttpReplay._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
    }
    plVar7 = (longlong *)0x0;
    local_38 = 6;
    local_30 = (void *)0x0;
    local_40 = &___7FRequestEventDataResult__6B_;
    local_28 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_58);
    if (*(int *)&param_2->field_0x10 != 0) {
      plVar7 = *(longlong **)&param_2->field_0x8;
    }
    (**(code **)(*plVar7 + 0x60))(plVar7,&local_40);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_58);
    if (local_30 != (void *)0x0) {
      FMemory::Free(local_30);
    }
  }
  else {
    pFVar4 = FHttpModule::Get();
    (**(code **)(pFVar4->_padding_ + 0x40))(pFVar4,&local_98);
    pIVar2 = local_98;
    pcVar1 = *(code **)(*(longlong *)local_98 + 0x68);
    ::FString::PrintfImpl(&local_88,L"%sevent/%s");
    (*pcVar1)(pIVar2,&local_88);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    pIVar2 = local_98;
    pcVar1 = *(code **)(*(longlong *)local_98 + 0x60);
    ::FString::FString(&local_78,L"GET");
    (*pcVar1)(pIVar2,&local_78);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    lpCriticalSection = (LPCRITICAL_SECTION)(**(code **)(*(longlong *)local_98 + 0xf0))();
    if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    EnterCriticalSection(lpCriticalSection);
    puVar5 = UE::Core::Private::DelegateAllocate
                       (0x38,(FDelegateAllocation *)(lpCriticalSection + 1));
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &
                ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy__V__TDelegate___A6AXAEBUFRequestEventDataResult___ZUFDefaultDelegateUserPolicy______6B_
      ;
      TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy>::
      TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy>
                ((TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy>
                  *)(puVar5 + 1),param_2);
      uVar6 = FDelegateHandle::GenerateNewID();
      puVar5[4] = uVar6;
      *puVar5 = &
                ___7__TBaseRawMethodDelegateInstance__0A_VFHttpNetworkReplayStreamer____A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy__V__TDelegate___A6AXAEBUFRequestEventDataResult___ZUFDefaultDelegateUserPolicy______6B_
      ;
      puVar5[6] = HttpRequestEventDataFinished;
      puVar5[5] = this;
    }
    if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(lpCriticalSection);
    }
    local_68.Object = local_98;
    local_68.SharedReferenceCount.ReferenceController = pTStack_90;
    if (pTStack_90 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_90->SharedReferenceCount = (atomic<int>)((int)pTStack_90->SharedReferenceCount + 1);
      UNLOCK();
    }
    AddRequestToQueue(this,RequestEventData,&local_68,0,0.0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_90);
  }
  return;
}

// RequestEventGroupData @ 146cc6790

void __thiscall
FHttpNetworkReplayStreamer::RequestEventGroupData
          (FHttpNetworkReplayStreamer *this,FString *param_1,FString *param_2,
          TDelegate<void___cdecl(FRequestEventGroupDataResult_const_&),FDefaultDelegateUserPolicy>
          *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000146cc6799. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0xd8))(this,param_2,param_3);
  return;
}

// RequestEventGroupData @ 146cc67b0

void __thiscall
FHttpNetworkReplayStreamer::RequestEventGroupData
          (FHttpNetworkReplayStreamer *this,FString *param_1,FString *param_2,int param_3,
          TDelegate<void___cdecl(FRequestEventGroupDataResult_const_&),FDefaultDelegateUserPolicy>
          *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000146cc67bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0xd8))(this,param_2,param_4);
  return;
}

// RequestEventGroupData @ 146cc67d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FHttpNetworkReplayStreamer::RequestEventGroupData
          (FHttpNetworkReplayStreamer *this,FString *param_1,
          TDelegate<void___cdecl(FRequestEventGroupDataResult_const_&),FDefaultDelegateUserPolicy>
          *param_2)

{
  longlong *plVar1;
  FReadAccessScope local_58;
  undefined **local_40;
  undefined4 local_38;
  FReplayEventListItem *local_30;
  undefined8 local_28;
  FRequestEventDataResult *local_20;
  undefined8 local_18;
  
  if (4 < (byte)LogHttpReplay._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
  }
  plVar1 = (longlong *)0x0;
  local_38 = 1;
  local_30 = (FReplayEventListItem *)0x0;
  local_40 = &___7FRequestEventGroupDataResult__6B_;
  local_28 = 0;
  local_20 = (FRequestEventDataResult *)0x0;
  local_18 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_58);
  if (*(int *)&param_2->field_0x10 != 0) {
    plVar1 = *(longlong **)&param_2->field_0x8;
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,&local_40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_58);
  DestructItems<FRequestEventDataResult,int>(local_20,(int)local_18);
  if (local_20 != (FRequestEventDataResult *)0x0) {
    FMemory::Free(local_20);
  }
  DestructItems<FReplayEventListItem,int>(local_30,(int)local_28);
  if (local_30 != (FReplayEventListItem *)0x0) {
    FMemory::Free(local_30);
  }
  return;
}

// RequestFinished @ 146cc68a0

void __thiscall
FHttpNetworkReplayStreamer::RequestFinished
          (FHttpNetworkReplayStreamer *this,EReplayStreamerState param_1,Type param_2,
          TSharedPtr<IHttpRequest,1> *param_3)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<FQueuedHttpRequest,1> *this_00;
  TSharedPtr<FQueuedHttpRequest,1> local_18;
  
  if (this->StreamerState != param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("StreamerState == ExpectedStreamerState",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\HttpNetworkReplayStreaming\\Private\\HttpNetworkReplayStreaming.cpp"
                       ,0x6af,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = &this->InFlightHttpRequest;
  if (this_00->Object == (FQueuedHttpRequest *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InFlightHttpRequest.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\HttpNetworkReplayStreaming\\Private\\HttpNetworkReplayStreaming.cpp"
                       ,0x6b0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (this_00->Object == (FQueuedHttpRequest *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  if ((this_00->Object->Request).Object != param_3->Object) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InFlightHttpRequest->Request == HttpRequest",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\HttpNetworkReplayStreaming\\Private\\HttpNetworkReplayStreaming.cpp"
                       ,0x6b1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this_00->Object == (FQueuedHttpRequest *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this_00->Object->Type != param_2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InFlightHttpRequest->Type == ExpectedType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\HttpNetworkReplayStreaming\\Private\\HttpNetworkReplayStreaming.cpp"
                       ,0x6b2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18.Object = (FQueuedHttpRequest *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  TSharedPtr<FQueuedHttpRequest,1>::operator=(this_00,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return;
}

// RetryRequest @ 146cc6a10

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FHttpNetworkReplayStreamer::RetryRequest
          (FHttpNetworkReplayStreamer *this,TSharedPtr<FQueuedHttpRequest,1> *param_1,
          TSharedPtr<IHttpResponse,1> *param_2,bool param_3)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  IHttpResponse *pIVar6;
  FQueuedHttpRequest *pFVar7;
  IHttpRequest *pIVar8;
  double dVar9;
  TSharedPtr<IHttpResponse,1> local_68;
  TSharedPtr<IHttpRequest,1> local_58;
  FString local_48 [3];
  
  pFVar7 = param_1->Object;
  if (pFVar7 == (FQueuedHttpRequest *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->SharedReferenceCount).ReferenceController);
    return false;
  }
  if (pFVar7->MaxRetries != 0) {
    if ((pFVar7 == (FQueuedHttpRequest *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if ((pFVar7->RetryProgress < param_1->Object->MaxRetries) &&
       (param_2->Object != (IHttpResponse *)0x0)) {
      if (param_3) {
LAB_146cc6b08:
        pFVar7 = TSharedPtr<FQueuedHttpRequest,1>::operator->(param_1);
        pFVar7->RetryProgress = pFVar7->RetryProgress + 1;
        pFVar7 = TSharedPtr<FQueuedHttpRequest,1>::operator->(param_1);
        if (pFVar7->RetryDelay == 0.0) {
          pFVar7 = TSharedPtr<FQueuedHttpRequest,1>::operator->(param_1);
          pIVar8 = TSharedPtr<IHttpRequest,1>::operator->(&pFVar7->Request);
          (**(code **)(*(longlong *)pIVar8 + 0xe8))(pIVar8);
        }
        else {
          pFVar7 = TSharedPtr<FQueuedHttpRequest,1>::operator->(param_1);
          fVar1 = pFVar7->RetryDelay;
          dVar9 = FWindowsPlatformTime::Seconds();
          pFVar7 = TSharedPtr<FQueuedHttpRequest,1>::operator->(param_1);
          pFVar7->NextRetryTime = dVar9 + (double)fVar1;
        }
        TSharedPtr<FQueuedHttpRequest,1>::operator=(&this->InFlightHttpRequest,param_1);
        if (2 < (byte)LogHttpReplay._0_1_) {
          local_68.Object = param_2->Object;
          local_68.SharedReferenceCount.ReferenceController =
               (param_2->SharedReferenceCount).ReferenceController;
          if (local_68.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          pFVar7 = TSharedPtr<FQueuedHttpRequest,1>::operator->(param_1);
          local_58.Object = (pFVar7->Request).Object;
          local_58.SharedReferenceCount.ReferenceController =
               (pFVar7->Request).SharedReferenceCount.ReferenceController;
          if (local_58.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          BuildRequestErrorString(local_48,&local_58,&local_68);
          TSharedPtr<FQueuedHttpRequest,1>::operator->(param_1);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
          if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((param_1->SharedReferenceCount).ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((param_2->SharedReferenceCount).ReferenceController);
        return true;
      }
      pIVar6 = TSharedPtr<IHttpResponse,1>::operator->(param_2);
      iVar5 = (**(code **)((longlong)*pIVar6 + 0x58))(pIVar6);
      if (499 < iVar5) {
        pIVar6 = TSharedPtr<IHttpResponse,1>::operator->(param_2);
        iVar5 = (**(code **)((longlong)*pIVar6 + 0x58))(pIVar6);
        if (iVar5 < 600) goto LAB_146cc6b08;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return false;
}

// SearchEvents @ 146cc6c80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FHttpNetworkReplayStreamer::SearchEvents
          (FHttpNetworkReplayStreamer *this,FString *param_1,
          TDelegate<void___cdecl(FSearchEventsResult_const_&),FDefaultDelegateUserPolicy> *param_2)

{
  code *pcVar1;
  IHttpRequest *pIVar2;
  bool bVar3;
  FHttpModule *pFVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar7;
  undefined1 local_118 [8];
  FDelegateAllocation local_110;
  IHttpRequest *local_f8;
  TReferenceControllerBase<1> *pTStack_f0;
  undefined **local_e8;
  undefined8 local_e0;
  FNetworkReplayStreamInfo *local_d8;
  undefined8 local_d0;
  FString *local_c8;
  undefined8 local_c0;
  FString local_b8;
  FString local_a8;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDelegateAllocation *local_68;
  TSharedPtr<IHttpRequest,1> local_58;
  TDelegate<void___cdecl(FSearchEventsResult_const_&),FDefaultDelegateUserPolicy> local_48;
  FReadAccessScope local_30;
  
  if ((this->ServerURL).Data.ArrayNum < 2) {
    if (2 < (byte)LogHttpReplay._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
    }
    plVar7 = (longlong *)0x0;
    local_e0 = 6;
    local_d8 = (FNetworkReplayStreamInfo *)0x0;
    local_e8 = &___7FSearchEventsResult__6B_;
    local_d0 = 0;
    local_c8 = (FString *)0x0;
    local_c0 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_30);
    if (*(int *)&param_2->field_0x10 != 0) {
      plVar7 = *(longlong **)&param_2->field_0x8;
    }
    (**(code **)(*plVar7 + 0x60))(plVar7,&local_e8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_30);
    DestructItems<FString,int>(local_c8,(int)local_c0);
    if (local_c8 != (FString *)0x0) {
      FMemory::Free(local_c8);
    }
    DestructItems<FNetworkReplayStreamInfo,int>(local_d8,(int)local_d0);
    if (local_d8 != (FNetworkReplayStreamInfo *)0x0) {
      FMemory::Free(local_d8);
    }
  }
  else {
    pFVar4 = FHttpModule::Get();
    (**(code **)(pFVar4->_padding_ + 0x40))(pFVar4,&local_f8);
    pIVar2 = local_f8;
    pcVar1 = *(code **)(*(longlong *)local_f8 + 0x68);
    ::FString::PrintfImpl(&local_b8,L"%sevent?group=%s");
    (*pcVar1)(pIVar2,&local_b8);
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    pIVar2 = local_f8;
    pcVar1 = *(code **)(*(longlong *)local_f8 + 0x60);
    ::FString::FString(&local_a8,L"GET");
    (*pcVar1)(pIVar2,&local_a8);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    TDelegate<void___cdecl(FSearchEventsResult_const_&),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(FSearchEventsResult_const_&),FDefaultDelegateUserPolicy>
              (&local_48,param_2);
    local_118 = (undefined1  [8])0x0;
    local_110.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_110.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,
               (FWriteAccessScope *)&local_80);
    local_68 = &local_110;
    puVar5 = UE::Core::Private::DelegateAllocate(0x30,&local_110);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBUFEnumerateStreamsResult___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar6 = FDelegateHandle::GenerateNewID();
      puVar5[2] = uVar6;
      *puVar5 = &TBaseFunctorDelegateInstance<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy,`FHttpNetworkReplayStreamer::SearchEvents'::`2'::<lambda_1>_>
                 ::_vftable_;
      TDelegate<void___cdecl(FSearchEventsResult_const_&),FDefaultDelegateUserPolicy>::
      TDelegate<void___cdecl(FSearchEventsResult_const_&),FDefaultDelegateUserPolicy>
                ((TDelegate<void___cdecl(FSearchEventsResult_const_&),FDefaultDelegateUserPolicy> *)
                 (puVar5 + 3),&local_48);
    }
    if (local_80.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_48);
    lpCriticalSection = (LPCRITICAL_SECTION)(**(code **)(*(longlong *)local_f8 + 0xf0))();
    if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    EnterCriticalSection(lpCriticalSection);
    puVar5 = UE::Core::Private::DelegateAllocate
                       (0x38,(FDelegateAllocation *)(lpCriticalSection + 1));
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &
                ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy__V__TDelegate___A6AXAEBUFEnumerateStreamsResult___ZUFDefaultDelegateUserPolicy______6B_
      ;
      TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy>::
      TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy>
                ((TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy>
                  *)(puVar5 + 1),
                 (TDelegate<void___cdecl(FEnumerateStreamsResult_const_&),FDefaultDelegateUserPolicy>
                  *)local_118);
      uVar6 = FDelegateHandle::GenerateNewID();
      puVar5[4] = uVar6;
      *puVar5 = &
                ___7__TBaseRawMethodDelegateInstance__0A_VFHttpNetworkReplayStreamer____A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy__V__TDelegate___A6AXAEBUFEnumerateStreamsResult___ZUFDefaultDelegateUserPolicy______6B_
      ;
      puVar5[6] = HttpEnumerateSessionsFinished;
      puVar5[5] = this;
    }
    if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(lpCriticalSection);
    }
    local_58.Object = local_f8;
    local_58.SharedReferenceCount.ReferenceController = pTStack_f0;
    if (pTStack_f0 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_f0->SharedReferenceCount = (atomic<int>)((int)pTStack_f0->SharedReferenceCount + 1);
      UNLOCK();
    }
    AddRequestToQueue(this,EnumeratingSessions,&local_58,0,0.0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,
               (FWriteAccessScope *)&local_98);
    if ((local_110.DelegateSize != 0) &&
       (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_110.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_110,0,0,0x10);
      local_110.DelegateSize = 0;
    }
    if (local_98.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
    }
    if (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_110.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_118);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_f0);
  }
  return;
}

// SetDemoPath @ 146cc7b80

EStreamingOperationResult __thiscall
FHttpNetworkReplayStreamer::SetDemoPath(FHttpNetworkReplayStreamer *this,FString *param_1)

{
  return Unsupported;
}

// SetHighPriorityTimeRange @ 146cc7b90

void __thiscall
FHttpNetworkReplayStreamer::SetHighPriorityTimeRange
          (FHttpNetworkReplayStreamer *this,uint param_1,uint param_2)

{
  this->HighPriorityEndTime = param_2;
  return;
}

// SetLastError @ 146cc7ba0

void __thiscall
FHttpNetworkReplayStreamer::SetLastError
          (FHttpNetworkReplayStreamer *this,TNetResult<EHttpReplayResult> *param_1)

{
  (**(code **)(this->_padding_ + 0x1c0))();
                    /* WARNING: Could not recover jumptable at 0x000146cc7bcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x178))(this,param_1);
  return;
}

// SetTimeBufferHintSeconds @ 146cc7be0

void __thiscall
FHttpNetworkReplayStreamer::SetTimeBufferHintSeconds(FHttpNetworkReplayStreamer *this,float param_1)

{
  return;
}

// StartStreaming @ 146cc7d40

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

void __thiscall
FHttpNetworkReplayStreamer::StartStreaming
          (FHttpNetworkReplayStreamer *this,FStartStreamingParameters *param_1,
          TDelegate<void___cdecl(FStartStreamingResult_const_&),FDefaultDelegateUserPolicy> *param_2
          )

{
  undefined1 *puVar1;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *this_00;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  IHttpRequest *pIVar5;
  bool bVar6;
  int iVar7;
  FHttpModule *pFVar8;
  FString *pFVar9;
  LPCRITICAL_SECTION p_Var10;
  undefined8 *puVar11;
  ulong64 uVar12;
  ULocalPlayer *pUVar13;
  FUniqueNetIdWrapper *this_01;
  longlong lVar14;
  ForAnyElementType FVar15;
  FScriptContainerElement *pFVar16;
  int iVar17;
  int iVar18;
  undefined1 auStackY_388 [32];
  undefined1 local_338 [8];
  FJsonSerializable local_330;
  ForAnyElementType local_328;
  undefined8 local_320;
  FString local_318;
  IHttpRequest *local_308;
  TReferenceControllerBase<1> *pTStack_300;
  undefined1 local_2f8 [8];
  ForAnyElementType local_2f0;
  int local_2e8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2e0;
  ForAnyElementType local_2d8;
  ulonglong local_2d0;
  FString local_2c8;
  FString local_2b8;
  FString local_2a8;
  FString local_298;
  FString local_288;
  undefined **local_278;
  undefined4 local_270;
  undefined1 local_268;
  FString local_260;
  FString local_250;
  wchar_t *local_240;
  int local_238;
  FString local_230;
  FScriptContainerElement *local_218;
  int iStack_210;
  undefined4 uStack_20c;
  FScriptContainerElement *local_208;
  int iStack_200;
  undefined4 uStack_1fc;
  wchar_t *local_1f8;
  int iStack_1f0;
  undefined4 uStack_1ec;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FDestructionSentinel local_1b8;
  FDestructionSentinel local_1a0;
  TStringView<wchar_t> local_188;
  FString local_178;
  FString local_168;
  TSharedPtr<IHttpRequest,1> local_158;
  FString local_148;
  TSharedPtr<IHttpRequest,1> local_138;
  TStringView<wchar_t> local_128;
  FString local_118;
  TStringView<wchar_t> local_108;
  FString local_f8;
  FReadAccessScope local_e8;
  FReadAccessScope local_d0;
  FReadAccessScope local_b8;
  FReadAccessScope local_a0;
  FReadAccessScope local_88;
  FUniqueNetIdRepl local_70;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_388;
  local_278 = &___7FStartStreamingResult__6B_;
  local_268 = param_1->bRecord;
  local_270 = 6;
  if ((this->SessionName).Data.ArrayNum < 2) {
    if (this->StreamerState == Idle) {
      if ((this->ServerURL).Data.ArrayNum < 2) {
        if (2 < (byte)LogHttpReplay._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_d0);
        if ((*(int *)&param_2->field_0x10 != 0) &&
           (plVar3 = *(longlong **)&param_2->field_0x8, plVar3 != (longlong *)0x0)) {
          (**(code **)(*plVar3 + 0x68))(plVar3,&local_278);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_d0);
      }
      else if ((this->InFlightHttpRequest).Object == (FQueuedHttpRequest *)0x0) {
        ::FString::operator=(&(this->ReplayVersion).AppString,&(param_1->ReplayVersion).AppString);
        (this->ReplayVersion).NetworkVersion = (param_1->ReplayVersion).NetworkVersion;
        (this->ReplayVersion).Changelist = (param_1->ReplayVersion).Changelist;
        if (param_2 != &this->StartStreamingDelegate) {
          local_2f8 = (undefined1  [8])0x0;
          local_2f0.Data = (FScriptContainerElement *)0x0;
          local_2e8 = 0;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_88);
          if ((*(int *)&param_2->field_0x10 != 0) &&
             (plVar3 = *(longlong **)&param_2->field_0x8, plVar3 != (longlong *)0x0)) {
            (**(code **)(*plVar3 + 0x50))(plVar3,local_2f8);
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_88);
          TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->StartStreamingDelegate,
                     (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2f8);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2f8,
                     (FWriteAccessScope *)&local_1b8);
          if ((local_2e8 != 0) && (local_2f0.Data != (FScriptContainerElement *)0x0)) {
            (*(code *)**(undefined8 **)local_2f0.Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_2f0,0,0,0x10);
            local_2e8 = 0;
          }
          if (local_1b8.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1b8.Accessor,&local_1b8);
          }
          if (local_2f0.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2f0.Data);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_2f8);
        }
        (**(code **)((this->StreamArchive)._padding_ + 200))
                  (&this->StreamArchive,param_1->bRecord == false);
        (**(code **)((this->StreamArchive)._padding_ + 0xd8))(&this->StreamArchive,param_1->bRecord)
        ;
        lVar14 = (this->HeaderArchive)._padding_;
        (this->StreamArchive).bAtEndOfReplay = false;
        (**(code **)(lVar14 + 200))(&this->HeaderArchive,param_1->bRecord == false);
        (**(code **)((this->HeaderArchive)._padding_ + 0xd8))(&this->HeaderArchive,param_1->bRecord)
        ;
        (**(code **)((this->CheckpointArchive)._padding_ + 200))
                  (&this->CheckpointArchive,param_1->bRecord == false);
        (**(code **)((this->CheckpointArchive)._padding_ + 0xd8))(&this->CheckpointArchive);
        this_00 = &this->EventGroupSet;
        this->TotalDemoTimeInMS = 0;
        this->StreamTimeRangeStart = 0;
        this->StreamTimeRangeEnd = 0;
        bVar6 = 1 < (this->EventGroupSet).HashSize;
        if (!bVar6) {
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::UnhashElements(this_00);
        }
        TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::DestroyElements(&this_00->Elements,0,*(int *)&(this->EventGroupSet).Elements.field_0x8);
        puVar1 = &(this->EventGroupSet).Elements.field_0xc;
        *(undefined4 *)&(this->EventGroupSet).Elements.field_0x8 = 0;
        if (*(int *)puVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
        }
        *(undefined4 *)&(this->EventGroupSet).Elements.field_0x30 = 0xffffffff;
        *(undefined4 *)&(this->EventGroupSet).Elements.field_0x34 = 0;
        iVar17 = *(int *)&(this->EventGroupSet).Elements.field_0x2c;
        *(undefined4 *)&(this->EventGroupSet).Elements.field_0x28 = 0;
        if ((iVar17 < 0) || (0x80 < iVar17)) {
          *(undefined4 *)&(this->EventGroupSet).Elements.field_0x2c = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)
                     &(this->EventGroupSet).Elements.field_0x10,0);
        }
        if (bVar6) {
          (this->EventGroupSet).HashSize = 1;
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Rehash(this_00);
        }
        pFVar8 = FHttpModule::Get();
        (**(code **)(pFVar8->_padding_ + 0x40))(pFVar8,&local_308);
        this->StreamChunkIndex = 0;
        this->TotalUploadBytes = 0;
        this->RefreshViewerFails = 0;
        iVar17 = 0;
        if (param_1->bRecord == false) {
          this->StreamerState = Playback;
          ::FString::operator=(&this->SessionName,&param_1->CustomName);
          local_2b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_2b8.Data.ArrayNum = 0;
          local_2b8.Data.ArrayMax = 0;
          if ((param_1->UserIndices).ArrayNum == 1) {
            pFVar9 = GetUserStringFromUserIndex
                               (&local_148,*(int *)(param_1->UserIndices).AllocatorInstance.Data);
            iVar7 = (pFVar9->Data).ArrayNum;
            iVar18 = iVar7 + -1;
            if (iVar7 == 0) {
              iVar18 = iVar17;
            }
            ::FString::AssignRange
                      (&local_2b8,(wchar_t *)(pFVar9->Data).AllocatorInstance.Data,iVar18);
            if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_148.Data.AllocatorInstance.Data);
            }
          }
          ::FString::PrintfImpl(&local_288,L"%sreplay/%s/startDownloading?user=%s");
          if (4 < (byte)LogHttpReplay._0_1_) {
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
          }
          (**(code **)(*(longlong *)local_308 + 0x68))(local_308,&local_288);
          pIVar5 = local_308;
          pcVar4 = *(code **)(*(longlong *)local_308 + 0x60);
          ::FString::FString(&local_230,L"POST");
          (*pcVar4)(pIVar5,&local_230);
          if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_230.Data.AllocatorInstance.Data);
          }
          p_Var10 = (LPCRITICAL_SECTION)(**(code **)(*(longlong *)local_308 + 0xf0))();
          if ((p_Var10 == (LPCRITICAL_SECTION)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Mutex",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                                 ,0x1b,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          EnterCriticalSection(p_Var10);
          puVar11 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)(p_Var10 + 1));
          if (puVar11 != (undefined8 *)0x0) {
            *puVar11 = &
                       ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
            ;
            uVar12 = FDelegateHandle::GenerateNewID();
            puVar11[2] = uVar12;
            *puVar11 = &
                       ___7__TBaseRawMethodDelegateInstance__0A_VFHttpNetworkReplayStreamer____A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
            ;
            puVar11[4] = HttpStartDownloadingFinished;
            puVar11[3] = this;
          }
          if (p_Var10 != (LPCRITICAL_SECTION)0x0) {
            LeaveCriticalSection(p_Var10);
          }
          local_138.Object = local_308;
          local_138.SharedReferenceCount.ReferenceController = pTStack_300;
          if (pTStack_300 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTStack_300->SharedReferenceCount =
                 (atomic<int>)((int)pTStack_300->SharedReferenceCount + 1);
            UNLOCK();
          }
          AddRequestToQueue(this,StartDownloading,&local_138,0,0.0);
          local_2d0 = 0;
          local_2e0.AccessDetector.State =
               (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
          local_2d8.Data = (FScriptContainerElement *)0x0;
          (**(code **)(this->_padding_ + 0xf0))(this,&local_2e0);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&local_2e0,(FWriteAccessScope *)&local_1a0);
          if (((int)local_2d0 != 0) && (local_2d8.Data != (FScriptContainerElement *)0x0)) {
            (*(code *)**(undefined8 **)local_2d8.Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_2d8,0,0,0x10);
            local_2d0 = local_2d0 & 0xffffffff00000000;
          }
          if (local_1a0.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a0.Accessor,&local_1a0);
          }
          if (local_2d8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2d8.Data);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2e0.AccessDetector);
          EnumerateCheckpoints(this);
          FVar15.Data = local_2b8.Data.AllocatorInstance.Data;
          if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_288.Data.AllocatorInstance.Data);
            FVar15.Data = local_2b8.Data.AllocatorInstance.Data;
          }
        }
        else {
          this->StreamerState = Recording;
          ::FString::Empty(&this->SessionName);
          local_318.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          if ((param_1->CustomName).Data.ArrayNum < 2) {
            local_208 = (param_1->FriendlyName).Data.AllocatorInstance.Data;
            iVar7 = (param_1->FriendlyName).Data.ArrayNum;
            iStack_200 = iVar7 + -1;
            if (iVar7 == 0) {
              iStack_200 = iVar17;
            }
            local_108._12_4_ = uStack_1fc;
            local_108.Size = iStack_200;
            local_108.DataPtr = (wchar_t *)local_208;
            FGenericPlatformHttp::UrlEncode(&local_f8,&local_108);
            ::FString::PrintfImpl(&local_298,L"%sreplay?app=%s&version=%u&cl=%u&friendlyName=%s");
            if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_318.Data.AllocatorInstance.Data);
            }
            local_318.Data.AllocatorInstance.Data = local_298.Data.AllocatorInstance.Data;
            local_318.Data.ArrayNum = local_298.Data.ArrayNum;
            local_318.Data.ArrayMax = local_298.Data.ArrayMax;
            local_298.Data.ArrayNum = 0;
            local_298.Data.ArrayMax = 0;
            local_298.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          }
          else {
            ::FString::ToLower(&param_1->CustomName,&local_260);
            local_218 = (param_1->FriendlyName).Data.AllocatorInstance.Data;
            iVar7 = (param_1->FriendlyName).Data.ArrayNum;
            iStack_210 = iVar7 + -1;
            if (iVar7 == 0) {
              iStack_210 = iVar17;
            }
            local_128._12_4_ = uStack_20c;
            local_128.Size = iStack_210;
            local_128.DataPtr = (wchar_t *)local_218;
            FGenericPlatformHttp::UrlEncode(&local_118,&local_128);
            ::FString::PrintfImpl(&local_2a8,L"%sreplay/%s?app=%s&version=%u&cl=%u&friendlyName=%s")
            ;
            if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_318.Data.AllocatorInstance.Data);
            }
            local_318.Data.AllocatorInstance.Data = local_2a8.Data.AllocatorInstance.Data;
            local_318.Data.ArrayNum = local_2a8.Data.ArrayNum;
            local_318.Data.ArrayMax = local_2a8.Data.ArrayMax;
            local_2a8.Data.ArrayNum = 0;
            local_2a8.Data.ArrayMax = 0;
            local_2a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_f8.Data.AllocatorInstance.Data = local_260.Data.AllocatorInstance.Data;
            if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_118.Data.AllocatorInstance.Data);
              local_f8.Data.AllocatorInstance.Data = local_260.Data.AllocatorInstance.Data;
            }
          }
          if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f8.Data.AllocatorInstance.Data);
          }
          (**(code **)(this->_padding_ + 0x1e8))(this,&local_240);
          if (1 < local_238) {
            local_1f8 = local_240;
            iStack_1f0 = local_238 + -1;
            if (local_238 == 0) {
              iStack_1f0 = 0;
            }
            local_188._12_4_ = uStack_1ec;
            local_188.Size = iStack_1f0;
            local_188.DataPtr = local_240;
            FGenericPlatformHttp::UrlEncode(&local_178,&local_188);
            ::FString::PrintfImpl(&local_250,L"&meta=%s");
            iVar7 = local_250.Data.ArrayNum + -1;
            if (local_250.Data.ArrayNum == 0) {
              iVar7 = iVar17;
            }
            ::FString::AppendChars
                      (&local_318,(wchar_t *)local_250.Data.AllocatorInstance.Data,iVar7);
            if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_250.Data.AllocatorInstance.Data);
            }
            if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_178.Data.AllocatorInstance.Data);
            }
          }
          (**(code **)(*(longlong *)local_308 + 0x68))(local_308,&local_318);
          pIVar5 = local_308;
          pcVar4 = *(code **)(*(longlong *)local_308 + 0x60);
          ::FString::FString(&local_1e8,L"POST");
          (*pcVar4)(pIVar5,&local_1e8);
          if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
          }
          p_Var10 = (LPCRITICAL_SECTION)(**(code **)(*(longlong *)local_308 + 0xf0))();
          if ((p_Var10 == (LPCRITICAL_SECTION)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Mutex",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                                 ,0x1b,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          EnterCriticalSection(p_Var10);
          puVar11 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)(p_Var10 + 1));
          if (puVar11 != (undefined8 *)0x0) {
            *puVar11 = &
                       ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
            ;
            uVar12 = FDelegateHandle::GenerateNewID();
            puVar11[2] = uVar12;
            *puVar11 = &
                       ___7__TBaseRawMethodDelegateInstance__0A_VFHttpNetworkReplayStreamer____A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
            ;
            puVar11[4] = HttpStartUploadingFinished;
            puVar11[3] = this;
          }
          if (p_Var10 != (LPCRITICAL_SECTION)0x0) {
            LeaveCriticalSection(p_Var10);
          }
          pIVar5 = local_308;
          pcVar4 = *(code **)(*(longlong *)local_308 + 0xb0);
          ::FString::FString(&local_1c8,L"application/json");
          ::FString::FString(&local_1d8,L"Content-Type");
          (*pcVar4)(pIVar5,&local_1d8,&local_1c8);
          if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
          }
          if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
          }
          iVar17 = (param_1->UserIndices).ArrayNum;
          if (0 < iVar17) {
            pFVar16 = (param_1->UserIndices).AllocatorInstance.Data;
            local_330 = (FJsonSerializable)&___7FNetworkReplayUserList__6B_;
            local_328.Data = (FScriptContainerElement *)0x0;
            local_320 = 0;
            pFVar2 = pFVar16 + (longlong)iVar17 * 4;
            while( true ) {
              if ((param_1->UserIndices).ArrayNum != iVar17) {
                local_338[0] = 0;
                `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::
                operator()(local_338);
              }
              pIVar5 = local_308;
              if (pFVar16 == pFVar2) break;
              if ((((*(int *)pFVar16 == -1) || (GWorld.World == (UWorld *)0x0)) ||
                  (GEngine == (UEngine *)0x0)) ||
                 (pUVar13 = UEngine::GetLocalPlayerFromControllerId
                                      (GEngine,GWorld.World,*(int *)pFVar16),
                 pUVar13 == (ULocalPlayer *)0x0)) {
                local_2c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_2c8.Data.ArrayNum = 0;
                local_2c8.Data.ArrayMax = 0;
              }
              else {
                this_01 = (FUniqueNetIdWrapper *)
                          (**(code **)(pUVar13->_padding_ + 0x360))(pUVar13,&local_70);
                FUniqueNetIdWrapper::ToString(this_01,&local_2c8);
                FUniqueNetIdRepl::~FUniqueNetIdRepl(&local_70);
              }
              if (((local_328.Data <= (FScriptContainerElement *)&local_2c8) &&
                  ((FScriptContainerElement *)&local_2c8 <
                   local_328.Data + (longlong)local_320._4_4_ * 0x10)) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar6)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              if ((int)local_320 == local_320._4_4_) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x810,&local_328,(int *)((longlong)&local_320 + 4));
                local_320 = CONCAT44(local_320._4_4_,iVar7);
              }
              lVar14 = (longlong)(int)local_320;
              local_320 = CONCAT44(local_320._4_4_,(int)local_320 + 1);
              ::FString::FString((FString *)(local_328.Data + lVar14 * 0x10),&local_2c8);
              if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
              }
              pFVar16 = pFVar16 + 4;
            }
            pcVar4 = *(code **)(*(longlong *)local_308 + 0x90);
            pFVar9 = FJsonSerializable::ToJson(&local_330,&local_168,true);
            (*pcVar4)(pIVar5,pFVar9);
            if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_168.Data.AllocatorInstance.Data);
            }
            local_330 = (FJsonSerializable)&___7FNetworkReplayUserList__6B_;
            DestructItems<FString,int>((FString *)local_328.Data,(int)local_320);
            if (local_328.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_328.Data);
            }
            FJsonSerializable::~FJsonSerializable(&local_330);
          }
          local_158.Object = local_308;
          local_158.SharedReferenceCount.ReferenceController = pTStack_300;
          if (pTStack_300 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTStack_300->SharedReferenceCount =
                 (atomic<int>)((int)pTStack_300->SharedReferenceCount + 1);
            UNLOCK();
          }
          AddRequestToQueue(this,StartUploading,&local_158,3,__real_40000000);
          (**(code **)(this->_padding_ + 0xe8))(this);
          FVar15.Data = local_318.Data.AllocatorInstance.Data;
          if (local_240 != (wchar_t *)0x0) {
            FMemory::Free(local_240);
            FVar15.Data = local_318.Data.AllocatorInstance.Data;
          }
        }
        if (FVar15.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar15.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_300);
      }
      else {
        if (2 < (byte)LogHttpReplay._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_b8);
        if ((*(int *)&param_2->field_0x10 != 0) &&
           (plVar3 = *(longlong **)&param_2->field_0x8, plVar3 != (longlong *)0x0)) {
          (**(code **)(*plVar3 + 0x68))(plVar3,&local_278);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_b8);
      }
    }
    else {
      if (2 < (byte)LogHttpReplay._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_e8);
      if ((*(int *)&param_2->field_0x10 != 0) &&
         (plVar3 = *(longlong **)&param_2->field_0x8, plVar3 != (longlong *)0x0)) {
        (**(code **)(*plVar3 + 0x68))(plVar3,&local_278);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_e8);
    }
  }
  else {
    if (2 < (byte)LogHttpReplay._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_a0);
    if ((*(int *)&param_2->field_0x10 != 0) &&
       (plVar3 = *(longlong **)&param_2->field_0x8, plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x68))(plVar3,&local_278);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_a0);
  }
  return;
}

// StopStreaming @ 146cc8ad0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FHttpNetworkReplayStreamer::StopStreaming(FHttpNetworkReplayStreamer *this)

{
  EReplayStreamerState EVar1;
  longlong *plVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  TSharedPtr<IHttpRequest,1> local_38;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->StartStreamingDelegate
             ,&local_28);
  if (((*(int *)&(this->StartStreamingDelegate).field_0x10 != 0) &&
      (plVar2 = *(longlong **)&(this->StartStreamingDelegate).field_0x8, plVar2 != (longlong *)0x0))
     && (cVar4 = (**(code **)(*plVar2 + 0x38))(), cVar4 != '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    if (2 < (byte)LogHttpReplay._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
    }
    (**(code **)(this->_padding_ + 0x1c0))(this);
    if (this->StreamerState == Idle) {
      return;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsStreaming()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\HttpNetworkReplayStreaming\\Private\\HttpNetworkReplayStreaming.cpp"
                       ,0x21d,L"");
    if (!bVar5) {
      return;
    }
code_r0x000146cc8be6:
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  EVar1 = this->StreamerState;
  if (EVar1 == Idle) {
    if (2 < (byte)LogHttpReplay._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
    }
    if ((this->bStopStreamingCalled != false) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("bStopStreamingCalled == false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\HttpNetworkReplayStreaming\\Private\\HttpNetworkReplayStreaming.cpp"
                           ,0x224,L""), bVar5)) goto code_r0x000146cc8be6;
  }
  else if (this->bStopStreamingCalled == false) {
    this->bStopStreamingCalled = true;
    if (EVar1 == Playback) {
      RefreshViewer(this,true);
    }
    else if (EVar1 == Recording) {
      FlushStream(this);
      StopUploading(this);
    }
    local_38.Object = (IHttpRequest *)0x0;
    local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    AddRequestToQueue(this,StopStreaming,&local_38,0,0.0);
  }
  else if (2 < (byte)LogHttpReplay._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
    return;
  }
  return;
}

// StopUploading @ 146cc8c90

void __thiscall FHttpNetworkReplayStreamer::StopUploading(FHttpNetworkReplayStreamer *this)

{
  code *pcVar1;
  IHttpRequest *pIVar2;
  bool bVar3;
  FHttpModule *pFVar4;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar5;
  ulong64 uVar6;
  IHttpRequest *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  TSharedPtr<IHttpRequest,1> local_18;
  
  pFVar4 = FHttpModule::Get();
  (**(code **)(pFVar4->_padding_ + 0x40))(pFVar4,&local_68);
  lpCriticalSection = (LPCRITICAL_SECTION)(**(code **)(*(longlong *)local_68 + 0xf0))();
  if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  EnterCriticalSection(lpCriticalSection);
  puVar5 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)(lpCriticalSection + 1));
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFHttpNetworkReplayStreamer____A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar5[4] = HttpStopUploadingFinished;
    puVar5[3] = this;
    if ((this == (FHttpNetworkReplayStreamer *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUserObject != nullptr && MethodPtr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x1d8,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  pIVar2 = local_68;
  pcVar1 = *(code **)(*(longlong *)local_68 + 0x68);
  ::FString::PrintfImpl(&local_58,L"%sreplay/%s/stopUploading?numChunks=%i&time=%i&absSize=%llu");
  (*pcVar1)(pIVar2,&local_58);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  pIVar2 = local_68;
  pcVar1 = *(code **)(*(longlong *)local_68 + 0x60);
  ::FString::FString(&local_48,L"POST");
  (*pcVar1)(pIVar2,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pIVar2 = local_68;
  pcVar1 = *(code **)(*(longlong *)local_68 + 0xb0);
  ::FString::FString(&local_28,L"application/octet-stream");
  ::FString::FString(&local_38,L"Content-Type");
  (*pcVar1)(pIVar2,&local_38,&local_28);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  local_18.Object = local_68;
  local_18.SharedReferenceCount.ReferenceController = pTStack_60;
  if (pTStack_60 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_60->SharedReferenceCount = (atomic<int>)((int)pTStack_60->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddRequestToQueue(this,StopUploading,&local_18,3,__real_40000000);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_60);
  return;
}

// SupportsCompression @ 146cc8f10

bool __thiscall FHttpNetworkReplayStreamer::SupportsCompression(FHttpNetworkReplayStreamer *this)

{
  return false;
}

// Tick @ 146cc8f30

void __thiscall FHttpNetworkReplayStreamer::Tick(FHttpNetworkReplayStreamer *this,float param_1)

{
  float fVar1;
  code *pcVar2;
  double dVar3;
  TConsoleVariableData<float> *pTVar4;
  bool bVar5;
  FLLMScope local_res8 [2];
  LARGE_INTEGER local_res18;
  LARGE_INTEGER local_res20;
  LARGE_INTEGER local_28;
  FMemScope local_20 [3];
  
  FLLMScope::FLLMScope(local_res8,Replays,false,None,Default,true);
  FMemScope::FMemScope(local_20,Replays,true);
  bVar5 = ProcessNextHttpRequest(this);
  if (((bVar5) && ((this->InFlightHttpRequest).Object == (FQueuedHttpRequest *)0x0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsHttpRequestInFlight()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\HttpNetworkReplayStreaming\\Private\\HttpNetworkReplayStreaming.cpp"
                         ,0x9af,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pTVar4 = CVarChunkUploadDelayInSeconds.Ref;
  if (this->bStopStreamingCalled == false) {
    if (this->StreamerState == Recording) {
      if (((this->InFlightHttpRequest).Object == (FQueuedHttpRequest *)0x0) &&
         ((this->QueuedHttpRequests).ArrayNum < 1)) {
        bVar5 = IsInParallelGameThread();
        if ((!bVar5) &&
           ((bVar5 = IsInGameThread(), !bVar5 &&
            (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<6409875433831007945>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                ,0x6c9,"GetShadowIndex() == 0"), bVar5)))) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        fVar1 = pTVar4->ShadowedValue[0];
        QueryPerformanceCounter(&local_res18);
        if ((double)fVar1 <
            ((double)local_res18.QuadPart * FGenericPlatformTime::SecondsPerCycle +
            __real_4170000000000000) - this->LastChunkTime) {
          FlushStream(this);
        }
      }
    }
    else if ((this->StreamerState == Playback) &&
            (bVar5 = IsTaskPendingOrInFlight(this,StartDownloading), !bVar5)) {
      if ((this->HighPriorityEndTime != 0) &&
         (this->HighPriorityEndTime <= this->StreamTimeRangeEnd)) {
        this->HighPriorityEndTime = 0;
      }
      if ((this->NumTotalStreamChunks <= this->StreamChunkIndex) && (this->bStreamIsLive == false))
      {
        (this->StreamArchive).bAtEndOfReplay = true;
      }
      dVar3 = __real_4170000000000000;
      if ((((this->InFlightHttpRequest).Object == (FQueuedHttpRequest *)0x0) &&
          ((this->QueuedHttpRequests).ArrayNum < 1)) &&
         (QueryPerformanceCounter(&local_res20),
         __real_4024000000000000 <
         ((double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar3) -
         this->LastRefreshViewerTime)) {
        RefreshViewer(this,false);
      }
      ConditionallyDownloadNextChunk(this);
      if ((((this->InFlightHttpRequest).Object == (FQueuedHttpRequest *)0x0) &&
          ((this->QueuedHttpRequests).ArrayNum < 1)) &&
         ((this->bStreamIsLive != false &&
          (QueryPerformanceCounter(&local_28),
          __real_403e000000000000 <
          ((double)local_28.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar3) -
          this->LastRefreshCheckpointTime)))) {
        EnumerateCheckpoints(this);
      }
    }
  }
  FMemScope::~FMemScope(local_20);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// UpdatePlaybackTime @ 146cc9360

void __thiscall
FHttpNetworkReplayStreamer::UpdatePlaybackTime(FHttpNetworkReplayStreamer *this,uint param_1)

{
  return;
}

// UpdateTotalDemoTime @ 146cc9370

void __thiscall
FHttpNetworkReplayStreamer::UpdateTotalDemoTime(FHttpNetworkReplayStreamer *this,uint param_1)

{
  this->TotalDemoTimeInMS = param_1;
  this->StreamTimeRangeEnd = param_1;
  return;
}

// UploadHeader @ 146cc9390

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FHttpNetworkReplayStreamer::UploadHeader(FHttpNetworkReplayStreamer *this)

{
  int *piVar1;
  code *pcVar2;
  IHttpRequest *pIVar3;
  bool bVar4;
  FHttpModule *pFVar5;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar6;
  ulong64 uVar7;
  LARGE_INTEGER local_res8;
  IHttpRequest *local_78;
  TReferenceControllerBase<1> *pTStack_70;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  TSharedPtr<IHttpRequest,1> local_28;
  
  if ((((this->StreamArchive)._padding_ & 4) == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StreamArchive.IsSaving()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\HttpNetworkReplayStreaming\\Private\\HttpNetworkReplayStreaming.cpp"
                         ,0x243,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((this->SessionName).Data.ArrayNum < 2) {
    if (2 < (byte)LogHttpReplay._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
      return;
    }
  }
  else if ((this->HeaderArchive).Buffer.ArrayNum == 0) {
    if (2 < (byte)LogHttpReplay._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
      return;
    }
  }
  else if (this->StreamerState == Idle) {
    if (2 < (byte)LogHttpReplay._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
      return;
    }
  }
  else {
    if (4 < (byte)LogHttpReplay._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogHttpReplay);
    }
    pFVar5 = FHttpModule::Get();
    (**(code **)(pFVar5->_padding_ + 0x40))(pFVar5,&local_78);
    lpCriticalSection = (LPCRITICAL_SECTION)(**(code **)(*(longlong *)local_78 + 0xf0))();
    if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    EnterCriticalSection(lpCriticalSection);
    puVar6 = UE::Core::Private::DelegateAllocate
                       (0x28,(FDelegateAllocation *)(lpCriticalSection + 1));
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
      ;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &
                ___7__TBaseRawMethodDelegateInstance__0A_VFHttpNetworkReplayStreamer____A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
      ;
      puVar6[4] = HttpHeaderUploadFinished;
      puVar6[3] = this;
    }
    if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(lpCriticalSection);
    }
    pIVar3 = local_78;
    pcVar2 = *(code **)(*(longlong *)local_78 + 0x68);
    ::FString::PrintfImpl(&local_68,L"%sreplay/%s/file/replay.header?numChunks=%i&time=%i");
    (*pcVar2)(pIVar3,&local_68);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    pIVar3 = local_78;
    pcVar2 = *(code **)(*(longlong *)local_78 + 0x60);
    ::FString::FString(&local_58,L"POST");
    (*pcVar2)(pIVar3,&local_58);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    pIVar3 = local_78;
    pcVar2 = *(code **)(*(longlong *)local_78 + 0xb0);
    ::FString::FString(&local_38,L"application/octet-stream");
    ::FString::FString(&local_48,L"Content-Type");
    (*pcVar2)(pIVar3,&local_48);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    (**(code **)(*(longlong *)local_78 + 0x88))(local_78,&(this->HeaderArchive).Buffer);
    piVar1 = &(this->HeaderArchive).Buffer.ArrayMax;
    (this->HeaderArchive).Buffer.ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&(this->HeaderArchive).Buffer.AllocatorInstance,0,piVar1);
    }
    local_28.Object = local_78;
    local_28.SharedReferenceCount.ReferenceController = pTStack_70;
    (this->HeaderArchive).Pos = 0;
    if (pTStack_70 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_70->SharedReferenceCount = (atomic<int>)((int)pTStack_70->SharedReferenceCount + 1);
      UNLOCK();
    }
    AddRequestToQueue(this,UploadingHeader,&local_28,3,__real_40000000);
    QueryPerformanceCounter(&local_res8);
    this->LastChunkTime =
         (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
         __real_4170000000000000;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_70);
  }
  return;
}

