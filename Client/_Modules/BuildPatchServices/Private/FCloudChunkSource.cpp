// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 16

// FCloudChunkSource @ 14327ec40

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FCloudChunkSource * __thiscall
BuildPatchServices::FCloudChunkSource::FCloudChunkSource
          (FCloudChunkSource *this,FCloudSourceConfig *param_1,IPlatform *param_2,
          IChunkStore *param_3,IDownloadService *param_4,IChunkReferenceTracker *param_5,
          IChunkDataSerialization *param_6,IMessagePump *param_7,IInstallerError *param_8,
          IDownloadConnectionCount *param_9,ICloudChunkSourceStat *param_10,
          IBuildManifestSet *param_11,
          TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *param_12)

{
  TPromise<void> *this_00;
  TFuture<void> *pTVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  ForElementType<FSetElementId> FVar4;
  code *pcVar5;
  bool bVar6;
  TNode *pTVar7;
  TNode *pTVar8;
  FCloudChunkSource *pFVar9;
  IBuildInstallerThread *pIVar10;
  TFutureState<void> *local_88;
  FSharedReferencer<1> local_80;
  TRawPtrProxy<BuildPatchServices::FCloudChunkSource::FDownloadDelegates> local_78 [2];
  code *local_68 [2];
  undefined **local_58;
  FCloudChunkSource *local_50;
  undefined8 local_40;
  
  this->_padding_ = (longlong)&_vftable__for__BuildPatchServices__IChunkSource__;
  this->_padding_ = (longlong)&_vftable__for__BuildPatchServices__IControllable__;
  pTVar7 = ::operator_new(8);
  pTVar8 = (TNode *)0x0;
  local_78[0].Object = (FDownloadDelegates *)pTVar8;
  if (pTVar7 != (TNode *)0x0) {
    pTVar7->NextNode = (TNode *)this;
    local_78[0].Object = (FDownloadDelegates *)pTVar7;
  }
  TSharedRef<BuildPatchServices::FCloudChunkSource::FDownloadDelegates,1>::
  TSharedRef<BuildPatchServices::FCloudChunkSource::FDownloadDelegates,1><BuildPatchServices::FCloudChunkSource::FDownloadDelegates>
            (&this->DownloadDelegates,local_78);
  (this->Configuration).CloudRoots.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Configuration).CloudRoots.AllocatorInstance.Data =
       (param_1->CloudRoots).AllocatorInstance.Data;
  (param_1->CloudRoots).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Configuration).CloudRoots.ArrayNum = (param_1->CloudRoots).ArrayNum;
  (this->Configuration).CloudRoots.ArrayMax = (param_1->CloudRoots).ArrayMax;
  (param_1->CloudRoots).ArrayNum = 0;
  (param_1->CloudRoots).ArrayMax = 0;
  (this->Configuration).MaxRetryCount = param_1->MaxRetryCount;
  (this->Configuration).PreFetchMinimum = param_1->PreFetchMinimum;
  (this->Configuration).PreFetchMaximum = param_1->PreFetchMaximum;
  (this->Configuration).RetryDelayTimes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Configuration).RetryDelayTimes.AllocatorInstance.Data =
       (param_1->RetryDelayTimes).AllocatorInstance.Data;
  (param_1->RetryDelayTimes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Configuration).RetryDelayTimes.ArrayNum = (param_1->RetryDelayTimes).ArrayNum;
  (this->Configuration).RetryDelayTimes.ArrayMax = (param_1->RetryDelayTimes).ArrayMax;
  (param_1->RetryDelayTimes).ArrayNum = 0;
  (param_1->RetryDelayTimes).ArrayMax = 0;
  (this->Configuration).HealthPercentages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Configuration).HealthPercentages.AllocatorInstance.Data =
       (param_1->HealthPercentages).AllocatorInstance.Data;
  (param_1->HealthPercentages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Configuration).HealthPercentages.ArrayNum = (param_1->HealthPercentages).ArrayNum;
  (this->Configuration).HealthPercentages.ArrayMax = (param_1->HealthPercentages).ArrayMax;
  (param_1->HealthPercentages).ArrayNum = 0;
  (param_1->HealthPercentages).ArrayMax = 0;
  (this->Configuration).DisconnectedDelay = param_1->DisconnectedDelay;
  (this->Configuration).bBeginDownloadsOnFirstGet = param_1->bBeginDownloadsOnFirstGet;
  (this->Configuration).TcpZeroWindowMinimumSeconds = param_1->TcpZeroWindowMinimumSeconds;
  (this->Configuration).SharedContext = param_1->SharedContext;
  (this->Configuration).bRunOwnThread = param_1->bRunOwnThread;
  this->DownloadService = param_4;
  this->ChunkReferenceTracker = param_5;
  this->ChunkDataSerialization = param_6;
  this->MessagePump = param_7;
  this->InstallerError = param_8;
  this->CloudChunkSourceStat = param_10;
  this->ManifestSet = param_11;
  this->Platform = param_2;
  this->ChunkStore = param_3;
  *(undefined8 *)&(this->InitialDownloadSet).Elements = 0;
  *(undefined8 *)&(this->InitialDownloadSet).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->InitialDownloadSet).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->InitialDownloadSet).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->InitialDownloadSet).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->InitialDownloadSet).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->InitialDownloadSet).Elements.field_0x34 = 0;
  (this->InitialDownloadSet).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->InitialDownloadSet).HashSize = 0;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::
  Move<TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>
            (&this->InitialDownloadSet,param_12);
  this_00 = &this->Promise;
  TPromise<void>::TPromise<void>(this_00);
  pTVar1 = &this->Future;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->Future).field_0x8 = 0;
  this->Thread = (IBuildInstallerThread *)0x0;
  TDelegate<void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>::
  CreateThreadSafeSP<BuildPatchServices::FCloudChunkSource::FDownloadDelegates>
            (&this->OnDownloadProgressDelegate,&this->DownloadDelegates,(pmf_65310326)0x1432df300);
  TDelegate<void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>
  ::CreateThreadSafeSP<BuildPatchServices::FCloudChunkSource::FDownloadDelegates>
            (&this->OnDownloadCompleteDelegate,&this->DownloadDelegates,(pmf_15b7e7f7)0x1432deb90);
  this->CyclesAtLastData = 0;
  this->bIsPaused = (FThreadSafeBool)0x0;
  this->bShouldAbort = (FThreadSafeBool)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CompletedDownloadsCS,4000);
  *(undefined8 *)&(this->CompletedDownloads).field_0x10 = 0;
  *(undefined8 *)&(this->CompletedDownloads).field_0x18 = 0;
  *(undefined8 *)&(this->CompletedDownloads).field_0x38 = 0;
  *(undefined8 *)&(this->CompletedDownloads).field_0x48 = 0;
  *(undefined8 *)&this->CompletedDownloads = 0;
  *(undefined8 *)&(this->CompletedDownloads).field_0x8 = 0;
  *(undefined8 *)&(this->CompletedDownloads).field_0x20 = 0;
  *(undefined4 *)&(this->CompletedDownloads).field_0x28 = 0;
  *(undefined4 *)&(this->CompletedDownloads).field_0x2c = 0x80;
  *(undefined4 *)&(this->CompletedDownloads).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CompletedDownloads).field_0x34 = 0;
  *(undefined8 *)&(this->CompletedDownloads).field_0x40 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->RequestedDownloadsCS,4000);
  (this->RequestedDownloads).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RequestedDownloads).ArrayNum = 0;
  (this->RequestedDownloads).ArrayMax = 0;
  TQueue<TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,0>::
  TQueue<TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,0>(&this->RuntimeRequestMessages)
  ;
  pTVar7 = ::operator_new(0x18);
  if (pTVar7 != (TNode *)0x0) {
    pTVar7->NextNode = (TNode *)0x0;
    (pTVar7->Item).A = 0;
    (pTVar7->Item).B = 0;
    (pTVar7->Item).C = 0;
    (pTVar7->Item).D = 0;
    pTVar7->NextNode = (TNode *)0x0;
    (pTVar7->Item).A = 0;
    (pTVar7->Item).B = 0;
    (pTVar7->Item).C = 0;
    (pTVar7->Item).D = 0;
    pTVar8 = pTVar7;
  }
  (this->RepeatRequirementMessages).Tail = pTVar8;
  (this->RepeatRequirementMessages).Head = pTVar8;
  iVar2 = (this->Configuration).CloudRoots.ArrayNum;
  this->DownloadCount = param_9;
  this->CurrentBestCloudDir = 0;
  (this->CloudDirFailureCount).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CloudDirFailureCount).ArrayNum = 0;
  (this->CloudDirFailureCount).ArrayMax = 0;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumZeroed(&this->CloudDirFailureCount,iVar2,Default);
  if (((this->Promise).bFutureRetrieved != false) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bFutureRetrieved",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x24d,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar9 = (FCloudChunkSource *)(*pcVar5)();
    return pFVar9;
  }
  (this->Promise).bFutureRetrieved = true;
  if (((this_00->State).Object == (TFutureState<void> *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("State.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x283,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar9 = (FCloudChunkSource *)(*pcVar5)();
    return pFVar9;
  }
  local_80.ReferenceController = (this->Promise).State.SharedReferenceCount.ReferenceController;
  local_88 = (this_00->State).Object;
  if (local_80.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_80.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_80.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pTVar1 != (TFuture<void> *)&local_88) {
    *(TFutureState<void> **)pTVar1 = local_88;
    local_88 = (TFutureState<void> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&(this->Future).field_0x8,&local_80);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_80.ReferenceController);
  if ((this->Configuration).bRunOwnThread != false) {
    if (((this->Configuration).SharedContext == (IBuildInstallerSharedContext *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Configuration.SharedContext",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\CloudChunkSource.cpp"
                           ,0x130,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FCloudChunkSource *)(*pcVar5)();
      return pFVar9;
    }
    pIVar10 = (IBuildInstallerThread *)
              (**(code **)((longlong)*(this->Configuration).SharedContext + 8))();
    this->Thread = pIVar10;
    local_58 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`BuildPatchServices::FCloudChunkSource::FCloudChunkSource'::`5'::<lambda_1>,1,0>
                ::_vftable_;
    local_68[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`BuildPatchServices::FCloudChunkSource::FCloudChunkSource'::__l5::<lambda_1>,void>
                  ::Call;
    local_40 = 0;
    local_50 = this;
    (**(code **)((longlong)*pIVar10 + 8))(pIVar10,local_68);
  }
  pFVar3 = (param_1->HealthPercentages).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (param_1->RetryDelayTimes).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<FString,int>
            ((FString *)(param_1->CloudRoots).AllocatorInstance.Data,(param_1->CloudRoots).ArrayNum)
  ;
  pFVar3 = (param_1->CloudRoots).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  param_12->HashSize = 0;
  FVar4 = (param_12->Hash).SecondaryData;
  if (FVar4 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&param_12->Elements);
  return this;
}

// ~FCloudChunkSource @ 143287af0

void __thiscall BuildPatchServices::FCloudChunkSource::~FCloudChunkSource(FCloudChunkSource *this)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  TNode *pTVar3;
  void *pvVar4;
  TFutureState<void> *pTVar5;
  ForElementType<FSetElementId> FVar6;
  code *pcVar7;
  char cVar8;
  bool bVar9;
  
  this->_padding_ = (longlong)&_vftable__for__BuildPatchServices__IChunkSource__;
  this->_padding_ = (longlong)&_vftable__for__BuildPatchServices__IControllable__;
  LOCK();
  this->bShouldAbort = (FThreadSafeBool)0x1;
  UNLOCK();
  if (*(longlong *)&this->Future != 0) {
    do {
      do {
      } while (*(longlong *)&this->Future == 0);
      plVar1 = *(longlong **)(*(longlong *)&this->Future + 0x60);
      cVar8 = (**(code **)(*plVar1 + 0x20))(plVar1,0xffffffff,0);
    } while (cVar8 == '\0');
  }
  if (this->Thread != (IBuildInstallerThread *)0x0) {
    (**(code **)((longlong)*(this->Configuration).SharedContext + 0x10))();
    this->Thread = (IBuildInstallerThread *)0x0;
  }
  pFVar2 = (this->CloudDirFailureCount).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pTVar3 = (this->RepeatRequirementMessages).Tail;
  while (pTVar3 != (TNode *)0x0) {
    (this->RepeatRequirementMessages).Tail = pTVar3->NextNode;
    ::operator_delete(pTVar3,0x18);
    pTVar3 = (this->RepeatRequirementMessages).Tail;
  }
  TQueue<TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,0>::
  ~TQueue<TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,0>
            (&this->RuntimeRequestMessages);
  pFVar2 = (this->RequestedDownloads).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->RequestedDownloadsCS);
  *(undefined4 *)&(this->CompletedDownloads).field_0x48 = 0;
  pvVar4 = *(void **)&(this->CompletedDownloads).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TSharedRef<BuildPatchServices::IDownload,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TSharedRef<BuildPatchServices::IDownload,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TSharedRef<BuildPatchServices::IDownload,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CompletedDownloads);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CompletedDownloadsCS);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDownloadCompleteDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDownloadProgressDelegate);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->Future).field_0x8);
  pTVar5 = (this->Promise).State.Object;
  if (((pTVar5 != (TFutureState<void> *)0x0) && (pTVar5->field_0x68 == '\0')) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("State->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x242,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Promise).State.SharedReferenceCount.ReferenceController);
  (this->InitialDownloadSet).HashSize = 0;
  FVar6 = (this->InitialDownloadSet).Hash.SecondaryData;
  if (FVar6 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar6);
  }
  TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->InitialDownloadSet).Elements);
  pFVar2 = (this->Configuration).HealthPercentages.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Configuration).RetryDelayTimes.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FString,int>
            ((FString *)(this->Configuration).CloudRoots.AllocatorInstance.Data,
             (this->Configuration).CloudRoots.ArrayNum);
  pFVar2 = (this->Configuration).CloudRoots.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DownloadDelegates).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7IControllable_BuildPatchServices__6B_;
  this->_padding_ = (longlong)&___7IChunkSource_BuildPatchServices__6B_;
  return;
}

// operator() @ 14329ac90

bool __thiscall
`BuildPatchServices::FCloudChunkSource::ThreadRun'::__l4::<lambda_1>::operator()
          (void *this,FGuid *param_1)

{
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *pTVar1;
  int iVar2;
  ulong64 uVar3;
  
  pTVar1 = *(TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> **)this;
  uVar3 = CityHash64((char *)param_1,0x10);
  iVar2 = TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::FindIndexByHash<FGuid>
                    (pTVar1,(uint)uVar3,param_1);
  if (iVar2 != -1) {
    pTVar1 = *(TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> **)((longlong)this + 8);
    uVar3 = CityHash64((char *)param_1,0x10);
    iVar2 = TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::FindIndexByHash<FGuid>
                      (pTVar1,(uint)uVar3,param_1);
    if (iVar2 == -1) {
      return true;
    }
  }
  return false;
}

// operator() @ 1432a8590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`BuildPatchServices::FCloudChunkSource::ThreadRun'::__l21::<lambda_2>::operator()
          (void *this,FChunkUriResponse *param_1)

{
  TQueue<TTuple<FGuid,BuildPatchServices::FChunkUriResponse>,0> *this_00;
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [24];
  void *local_80;
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_70;
  void *local_30;
  undefined4 local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_98._0_8_ = *(undefined8 *)((longlong)this + 0x10);
  local_98._8_8_ = *(undefined8 *)((longlong)this + 0x18);
  this_00 = *(TQueue<TTuple<FGuid,BuildPatchServices::FChunkUriResponse>,0> **)this;
  BuildPatchServices::FChunkUriResponse::FChunkUriResponse
            ((FChunkUriResponse *)(local_98 + 0x10),param_1);
  TQueue<TTuple<FGuid,BuildPatchServices::FChunkUriResponse>,0>::Enqueue
            (this_00,(TTuple<FGuid,BuildPatchServices::FChunkUriResponse> *)local_98);
  local_28 = 0;
  if (local_30 != (void *)0x0) {
    FMemory::Free(local_30);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_70);
  if (local_80 != (void *)0x0) {
    FMemory::Free(local_80);
  }
  *(undefined4 *)&(param_1->AdditionalHeaders).field_0x48 = 0;
  pvVar1 = *(void **)&(param_1->AdditionalHeaders).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&param_1->AdditionalHeaders);
  pFVar2 = (param_1->Uri).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// operator() @ 1432a8660

bool __thiscall
`BuildPatchServices::FCloudChunkSource::GetNextTask'::__l22::<lambda_2>::operator()
          (void *this,FGuid *param_1)

{
  longlong lVar1;
  TSet<TTuple<FGuid,BuildPatchServices::FCloudChunkSource::FTaskInfo>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FCloudChunkSource::FTaskInfo,0>,FDefaultSetAllocator>
  *this_00;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *pTVar2;
  int iVar3;
  ulong64 uVar4;
  char *pcVar5;
  
  this_00 = *(TSet<TTuple<FGuid,BuildPatchServices::FCloudChunkSource::FTaskInfo>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FCloudChunkSource::FTaskInfo,0>,FDefaultSetAllocator>
              **)this;
  uVar4 = CityHash64((char *)param_1,0x10);
  iVar3 = TSet<TTuple<FGuid,BuildPatchServices::FCloudChunkSource::FTaskInfo>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FCloudChunkSource::FTaskInfo,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>(this_00,(uint)uVar4,param_1);
  if (iVar3 != -1) {
    lVar1 = *(longlong *)&this_00->Elements + (longlong)iVar3 * 0x48;
    pcVar5 = (char *)(lVar1 + 0x10);
    if (lVar1 == 0) {
      pcVar5 = (char *)0x0;
    }
    if ((pcVar5 != (char *)0x0) && (*pcVar5 != '\0')) {
      return true;
    }
  }
  pTVar2 = *(TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> **)((longlong)this + 8);
  uVar4 = CityHash64((char *)param_1,0x10);
  iVar3 = TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::FindIndexByHash<FGuid>
                    (pTVar2,(uint)uVar4,param_1);
  if (iVar3 == -1) {
    pTVar2 = *(TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> **)((longlong)this + 0x10);
    uVar4 = CityHash64((char *)param_1,0x10);
    iVar3 = TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::FindIndexByHash<FGuid>
                      (pTVar2,(uint)uVar4,param_1);
    if (iVar3 == -1) {
      return false;
    }
  }
  return true;
}

// Abort @ 1432bdf50

void __thiscall BuildPatchServices::FCloudChunkSource::Abort(FCloudChunkSource *this)

{
  LOCK();
  *(undefined4 *)((longlong)&this->CyclesAtLastData + 4) = 1;
  UNLOCK();
  return;
}

// AddRepeatRequirement @ 1432bead0

bool __thiscall
BuildPatchServices::FCloudChunkSource::AddRepeatRequirement(FCloudChunkSource *this,FGuid *param_1)

{
  TQueue<FGuid,0> *pTVar1;
  TNode *pTVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  TNode *pTVar6;
  
  pTVar1 = &this->RepeatRequirementMessages;
  pTVar6 = ::operator_new(0x18);
  if (pTVar6 != (TNode *)0x0) {
    pTVar6->NextNode = (TNode *)0x0;
    uVar3 = param_1->B;
    uVar4 = param_1->C;
    uVar5 = param_1->D;
    (pTVar6->Item).A = param_1->A;
    (pTVar6->Item).B = uVar3;
    (pTVar6->Item).C = uVar4;
    (pTVar6->Item).D = uVar5;
    if (((ulonglong)pTVar1 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    pTVar2 = pTVar1->Head;
    pTVar1->Head = pTVar6;
    UNLOCK();
    if (((ulonglong)pTVar2 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    pTVar2->NextNode = pTVar6;
    UNLOCK();
  }
  return true;
}

// AddRuntimeRequirements @ 1432beb60

TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> * __thiscall
BuildPatchServices::FCloudChunkSource::AddRuntimeRequirements
          (FCloudChunkSource *this,
          TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *__return_storage_ptr__,
          TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *param_1)

{
  TQueue<TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,0> *pTVar1;
  TNode *pTVar2;
  ForElementType<FSetElementId> FVar3;
  TNode *pTVar4;
  
  pTVar1 = &this->RuntimeRequestMessages;
  (**(code **)((longlong)*this->CloudChunkSourceStat + 0x58))(this->CloudChunkSourceStat,param_1);
  pTVar4 = ::operator_new(0x58);
  if (pTVar4 != (TNode *)0x0) {
    pTVar4->NextNode = (TNode *)0x0;
    *(undefined8 *)&(pTVar4->Item).Elements = 0;
    *(undefined8 *)&(pTVar4->Item).Elements.field_0x8 = 0;
    *(undefined8 *)&(pTVar4->Item).Elements.field_0x20 = 0;
    *(undefined4 *)&(pTVar4->Item).Elements.field_0x28 = 0;
    *(undefined4 *)&(pTVar4->Item).Elements.field_0x2c = 0x80;
    *(undefined4 *)&(pTVar4->Item).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(pTVar4->Item).Elements.field_0x34 = 0;
    (pTVar4->Item).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    (pTVar4->Item).HashSize = 0;
    TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::
    Move<TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>(&pTVar4->Item,param_1);
    if (((ulonglong)pTVar1 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    pTVar2 = pTVar1->Head;
    pTVar1->Head = pTVar4;
    UNLOCK();
    if (((ulonglong)pTVar2 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    pTVar2->NextNode = pTVar4;
    UNLOCK();
  }
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x10 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x18 = 0;
  (__return_storage_ptr__->Hash).InlineData[0] = '\0';
  (__return_storage_ptr__->Hash).InlineData[1] = '\0';
  (__return_storage_ptr__->Hash).InlineData[2] = '\0';
  (__return_storage_ptr__->Hash).InlineData[3] = '\0';
  (__return_storage_ptr__->Hash)._padding_ = 0;
  *(undefined8 *)&__return_storage_ptr__->HashSize = 0;
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  param_1->HashSize = 0;
  FVar3 = (param_1->Hash).SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&param_1->Elements);
  return __return_storage_ptr__;
}

// EnsureAquiring @ 1432cf560

void __thiscall
BuildPatchServices::FCloudChunkSource::EnsureAquiring(FCloudChunkSource *this,FGuid *param_1)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar2;
  FGuid *pFVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  int iVar9;
  TArray<FGuid,TSizedDefaultAllocator<32>_> *pTVar10;
  
  lpCriticalSection = &this->RequestedDownloadsCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar10 = &this->RequestedDownloads;
  pFVar3 = (FGuid *)(pTVar10->AllocatorInstance).Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (this->RequestedDownloads).ArrayMax)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar9 = (this->RequestedDownloads).ArrayNum;
  piVar1 = &(this->RequestedDownloads).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&pTVar10->AllocatorInstance,piVar1);
  }
  (this->RequestedDownloads).ArrayNum = iVar9 + 1;
  uVar5 = param_1->B;
  uVar6 = param_1->C;
  uVar7 = param_1->D;
  pFVar2 = (pTVar10->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
  *(uint *)pFVar2 = param_1->A;
  *(uint *)(pFVar2 + 4) = uVar5;
  *(uint *)(pFVar2 + 8) = uVar6;
  *(uint *)(pFVar2 + 0xc) = uVar7;
                    /* WARNING: Could not recover jumptable at 0x0001432cf638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// Get @ 1432d13e0

IChunkDataAccess * __thiscall
BuildPatchServices::FCloudChunkSource::Get(FCloudChunkSource *this,FGuid *param_1)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<FGuid,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FGuid *pFVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  bool bVar10;
  int iVar11;
  IChunkDataAccess *pIVar12;
  
  pIVar12 = (IChunkDataAccess *)(**(code **)((longlong)*this->ChunkStore + 0x10))();
  if (pIVar12 == (IChunkDataAccess *)0x0) {
    lpCriticalSection = &this->RequestedDownloadsCS;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar2 = &this->RequestedDownloads;
    pFVar4 = (FGuid *)(pTVar2->AllocatorInstance).Data;
    if (((pFVar4 <= param_1) && (param_1 < pFVar4 + (this->RequestedDownloads).ArrayMax)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) {
      pcVar5 = (code *)swi(3);
      pIVar12 = (IChunkDataAccess *)(*pcVar5)();
      return pIVar12;
    }
    iVar11 = (this->RequestedDownloads).ArrayNum;
    piVar1 = &(this->RequestedDownloads).ArrayMax;
    if (iVar11 == *piVar1) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x410,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->RequestedDownloads).ArrayNum = iVar11 + 1;
    uVar6 = param_1->B;
    uVar7 = param_1->C;
    uVar8 = param_1->D;
    pFVar3 = (pTVar2->AllocatorInstance).Data + (longlong)iVar11 * 0x10;
    *(uint *)pFVar3 = param_1->A;
    *(uint *)(pFVar3 + 4) = uVar6;
    *(uint *)(pFVar3 + 8) = uVar7;
    *(uint *)(pFVar3 + 0xc) = uVar8;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pIVar12 = (IChunkDataAccess *)
              (**(code **)((longlong)*this->ChunkStore + 0x10))(this->ChunkStore,param_1);
    uVar9 = __real_3c23d70a;
    while ((pIVar12 == (IChunkDataAccess *)0x0 && (this->bShouldAbort == (FThreadSafeBool)0x0))) {
      (**(code **)((longlong)*this->Platform + 0x10))(this->Platform,uVar9);
      pIVar12 = (IChunkDataAccess *)
                (**(code **)((longlong)*this->ChunkStore + 0x10))(this->ChunkStore,param_1);
    }
  }
  return pIVar12;
}

// GetNextTask @ 1432d7a90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FGuid * __thiscall
BuildPatchServices::FCloudChunkSource::GetNextTask
          (FCloudChunkSource *this,FGuid *__return_storage_ptr__,
          TMap<FGuid,BuildPatchServices::FCloudChunkSource::FTaskInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FCloudChunkSource::FTaskInfo,0>_>
          *param_1,TMap<int,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuid,0>_>
                   *param_2,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *param_3,
          TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *param_4,
          TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *param_5,
          TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *param_6,
          TArray<FGuid,TSizedDefaultAllocator<32>_> *param_7,EBuildPatchDownloadHealth param_8)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  FGuid *pFVar7;
  TMap<int,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuid,0>_> *pTVar8;
  FCloudChunkSource *pFVar9;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *pTVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  char cVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  FTaskInfo *pFVar19;
  TArray<FGuid,TSizedDefaultAllocator<32>_> *pTVar20;
  void *pvVar21;
  uint *puVar22;
  TBitArray<FDefaultBitArrayAllocator> **ppTVar23;
  FScriptContainerElement *pFVar24;
  undefined ***pppuVar25;
  FScriptContainerElement *pFVar26;
  uint uVar27;
  int iVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  TMap<int,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuid,0>_> *pTVar33;
  byte bVar34;
  float fVar35;
  double dVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  undefined1 auStack_198 [32];
  byte local_178;
  TMap<FGuid,BuildPatchServices::FCloudChunkSource::FTaskInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FCloudChunkSource::FTaskInfo,0>_>
  *local_170;
  ulonglong local_168;
  FGuid *local_160;
  TMap<int,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuid,0>_> *local_158;
  TArray<FGuid,TSizedDefaultAllocator<32>_> *local_150;
  FCloudChunkSource *local_148;
  undefined8 local_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *local_130;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_128;
  undefined4 local_ec;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *local_e8;
  uint uStack_e0;
  uint uStack_dc;
  TBitArray<FDefaultBitArrayAllocator> *local_d8;
  undefined4 uStack_d0;
  uint uStack_cc;
  uint local_c8;
  undefined4 uStack_c4;
  TBitArray<FDefaultBitArrayAllocator> **local_c0;
  code *local_b8 [2];
  undefined **local_a8;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *local_a0;
  undefined ***local_90;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStack_198;
  uVar29 = 0;
  uVar30 = 0;
  local_150 = param_7;
  if (this->bShouldAbort == (FThreadSafeBool)0x0) {
    if (0 < *(int *)&(param_4->Elements).field_0x8 - *(int *)&(param_4->Elements).field_0x34) {
      uVar32 = *(uint *)&(param_4->Elements).field_0x28;
      uVar27 = uVar30;
      if (uVar32 != 0) {
        puVar22 = *(uint **)&(param_4->Elements).field_0x20;
        if (puVar22 == (uint *)0x0) {
          puVar22 = (uint *)&(param_4->Elements).field_0x10;
        }
        uVar27 = *puVar22;
        while (uVar27 == 0) {
          lVar18 = (longlong)(int)uVar29;
          uVar30 = uVar30 + 0x20;
          uVar29 = uVar29 + 1;
          uVar27 = uVar32;
          if ((int)(((int)(uVar32 - 1) >> 0x1f & 0x1fU) + (uVar32 - 1)) >> 5 < (int)uVar29)
          goto LAB_1432d7b7a;
          uVar27 = puVar22[lVar18 + 1];
        }
        uVar2 = (ulonglong)(-uVar27 & uVar27) * 2 + 1;
        lVar18 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        uVar27 = (uVar30 - 1) + (int)lVar18;
        if ((int)uVar32 < (int)uVar27) {
          uVar27 = uVar32;
        }
      }
LAB_1432d7b7a:
      puVar1 = (undefined8 *)(*(longlong *)&param_4->Elements + (longlong)(int)uVar27 * 0x18);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      __return_storage_ptr__->A = (int)uVar4;
      __return_storage_ptr__->B = (int)((ulonglong)uVar4 >> 0x20);
      __return_storage_ptr__->C = (int)uVar5;
      __return_storage_ptr__->D = (int)((ulonglong)uVar5 >> 0x20);
      return __return_storage_ptr__;
    }
    local_170 = param_1;
    local_160 = __return_storage_ptr__;
    local_158 = param_2;
    local_148 = this;
    dVar36 = FStatsCollector::GetSeconds();
    TStack_128.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_5->Elements).field_0x10;
    local_140 = (void *)0x0;
    uStack_138 = 0;
    uVar27 = 0;
    uStack_134 = 0;
    local_168 = CONCAT44(local_168._4_4_,1);
    uVar32 = *(uint *)&(param_5->Elements).field_0x28;
    local_c8 = 0;
    uStack_e0 = uVar27;
    uStack_cc = uVar29;
    if (uVar32 != 0) {
      puVar22 = *(uint **)&(param_5->Elements).field_0x20;
      if (puVar22 == (uint *)0x0) {
        puVar22 = (uint *)TStack_128.Array;
      }
      uVar39 = *puVar22;
      local_c8 = 0;
      uStack_e0 = 0;
      while (uVar39 == 0) {
        lVar18 = (longlong)(int)uStack_e0;
        local_c8 = local_c8 + 0x20;
        uStack_e0 = uStack_e0 + 1;
        uStack_cc = uVar32;
        if ((int)((uVar32 - 1) + ((int)(uVar32 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_e0)
        goto LAB_1432d7c50;
        uVar39 = puVar22[lVar18 + 1];
      }
      local_168 = (ulonglong)(-uVar39 & uVar39);
      uVar2 = local_168 * 2 + 1;
      lVar18 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      uStack_cc = (local_c8 - 1) + (int)lVar18;
      if (*(int *)&(param_5->Elements).field_0x28 < (int)uStack_cc) {
        uStack_cc = uVar32;
      }
    }
LAB_1432d7c50:
    local_140._0_4_ = 0;
    local_140._4_4_ = 0;
    uVar39 = 0;
    uVar40 = 0;
    local_e8 = param_5;
    uStack_dc = (uint)local_168;
    uStack_d0 = 0xffffffff;
    TStack_128.UnvisitedBitMask = 0xffffffff;
    local_130 = param_5;
    uStack_c4 = local_ec;
    TStack_128._28_4_ = local_ec;
    TStack_128.BaseBitIndex = local_c8;
    uVar37 = (uint)local_140;
    uVar38 = local_140._4_4_;
    uVar32 = uVar27;
    uVar31 = uVar27;
    local_d8 = TStack_128.Array;
    uVar11 = uVar29;
    uVar12 = uVar29;
    uVar13 = uVar29;
    uVar14 = uVar29;
    TStack_128._padding_._0_4_ = uStack_e0;
    TStack_128._padding_._4_4_ = uStack_dc;
    TStack_128.CurrentBitIndex = uStack_cc;
    if ((int)uStack_cc < *(int *)&(param_5->Elements).field_0x28) {
      do {
        uVar30 = uVar14;
        uVar32 = uVar13;
        uVar31 = uVar12;
        uVar27 = uVar11;
        iVar17 = TStack_128.CurrentBitIndex;
        pTVar10 = local_130;
        param_7 = local_150;
        if (((uVar27 != 0 || uVar32 != 0) || uVar31 != 0) || uVar30 != 0) break;
        pFVar19 = TMapBase<FGuid,BuildPatchServices::FCloudChunkSource::FTaskInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FCloudChunkSource::FTaskInfo,0>_>
                  ::FindChecked((TMapBase<FGuid,BuildPatchServices::FCloudChunkSource::FTaskInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FCloudChunkSource::FTaskInfo,0>_>
                                 *)local_170,
                                (FGuid *)(*(longlong *)&local_130->Elements +
                                         (longlong)TStack_128.CurrentBitIndex * 0x18));
        dVar3 = pFVar19->SecondsAtFail;
        fVar35 = GetRetryDelay(&(local_148->Configuration).RetryDelayTimes,pFVar19->RetryNum);
        if ((double)fVar35 <= dVar36 - dVar3) {
          puVar22 = (uint *)(*(longlong *)&pTVar10->Elements + (longlong)iVar17 * 0x18);
          uVar37 = *puVar22;
          uVar38 = puVar22[1];
          uVar39 = puVar22[2];
          uVar40 = puVar22[3];
          uVar32 = *(uint *)(*(longlong *)&pTVar10->Elements + 8 + (longlong)iVar17 * 0x18);
          uVar30 = uVar37;
          uVar31 = uVar38;
          uVar27 = uVar40;
        }
        TStack_128.UnvisitedBitMask = TStack_128.UnvisitedBitMask & ~TStack_128._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_128);
        param_7 = local_150;
        uVar11 = uVar27;
        uVar12 = uVar31;
        uVar13 = uVar32;
        uVar14 = uVar30;
      } while (TStack_128.CurrentBitIndex < (TStack_128.Array)->NumBits);
    }
    pFVar9 = local_148;
    if (((uVar27 != 0 || uVar32 != 0) || uVar31 != 0) || uVar30 != 0) {
      local_160->A = uVar37;
      local_160->B = uVar38;
      local_160->C = uVar39;
      local_160->D = uVar40;
      return local_160;
    }
    iVar28 = *(uint *)&local_158->field_0x8 - *(int *)&local_158->field_0x34;
    iVar17 = *(int *)&(param_5->Elements).field_0x8;
    iVar16 = *(int *)&(param_5->Elements).field_0x34;
    uVar30 = (**(code **)*local_148->DownloadCount)(local_148->DownloadCount,iVar28,param_8);
    __return_storage_ptr__ = local_160;
    if ((uint)((iVar17 - iVar16) + iVar28) < uVar30) {
      if (param_7->ArrayNum == 0) {
        iVar17 = (pFVar9->Configuration).PreFetchMinimum;
        local_a8 = &UE::Core::Private::Function::
                    TFunction_OwnedObject<`BuildPatchServices::FCloudChunkSource::GetNextTask'::`22'::<lambda_1>,0,0>
                    ::_vftable_;
        local_a0 = param_3;
        local_b8[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`BuildPatchServices::FCloudChunkSource::GetNextTask'::__l22::<lambda_1>,bool,FGuid_const_&>
                      ::Call;
        local_90 = (undefined ***)0x0;
        iVar16 = (**(code **)((longlong)*pFVar9->ChunkStore + 0x20))();
        if (iVar17 < iVar16) {
          iVar17 = iVar16;
        }
        pTVar20 = (TArray<FGuid,TSizedDefaultAllocator<32>_> *)
                  (**(code **)((longlong)*pFVar9->ChunkReferenceTracker + 0x28))
                            (pFVar9->ChunkReferenceTracker,&local_140,iVar17,local_b8);
        if (param_7 != pTVar20) {
          pFVar26 = (param_7->AllocatorInstance).Data;
          if (pFVar26 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar26);
          }
          (param_7->AllocatorInstance).Data = (pTVar20->AllocatorInstance).Data;
          (pTVar20->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          param_7->ArrayNum = pTVar20->ArrayNum;
          param_7->ArrayMax = pTVar20->ArrayMax;
          pTVar20->ArrayNum = 0;
          pTVar20->ArrayMax = 0;
        }
        if (local_140 != (void *)0x0) {
          FMemory::Free(local_140);
        }
        local_e8 = (TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)0x0;
        local_c0 = FMemory::Malloc(0x20,8);
        *local_c0 = (TBitArray<FDefaultBitArrayAllocator> *)
                    &UE::Core::Private::Function::
                     TFunction_OwnedObject<`BuildPatchServices::FCloudChunkSource::GetNextTask'::`22'::<lambda_2>,0,1>
                     ::_vftable_;
        local_c0[1] = (TBitArray<FDefaultBitArrayAllocator> *)local_170;
        local_c0[2] = (TBitArray<FDefaultBitArrayAllocator> *)param_5;
        local_c0[3] = (TBitArray<FDefaultBitArrayAllocator> *)param_6;
        iVar17 = param_7->ArrayNum;
        if (local_c0 + 1 != (TBitArray<FDefaultBitArrayAllocator> **)0x0) {
          local_e8 = (TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)
                     UE::Core::Private::Function::
                     TFunctionRefCaller<`BuildPatchServices::FCloudChunkSource::GetNextTask'::__l22::<lambda_2>,bool,FGuid_const_&>
                     ::Call;
        }
        uVar30 = 0;
        if (iVar17 != 0) {
          pTVar33 = (TMap<int,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuid,0>_>
                     *)(param_7->AllocatorInstance).Data;
          local_170 = (TMap<FGuid,BuildPatchServices::FCloudChunkSource::FTaskInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FCloudChunkSource::FTaskInfo,0>_>
                       *)((ulonglong)local_170 & 0xffffffff00000000);
          local_158 = pTVar33;
          UE::Core::Private::Function::CheckCallable(local_e8);
          pTVar10 = local_e8;
          ppTVar23 = &local_d8;
          if (local_c0 != (TBitArray<FDefaultBitArrayAllocator> **)0x0) {
            ppTVar23 = local_c0;
          }
          pvVar21 = (void *)(**(code **)(((*ppTVar23)->AllocatorInstance).InlineData + 8))();
          if (pTVar10 ==
              (TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)
              UE::Core::Private::Function::
              TFunctionRefCaller<`BuildPatchServices::FCloudChunkSource::GetNextTask'::__l22::<lambda_2>,bool,FGuid_const_&>
              ::Call) {
            cVar15 = `BuildPatchServices::FCloudChunkSource::GetNextTask'::__l22::<lambda_2>::
                     operator()(pvVar21,(FGuid *)pTVar33);
          }
          else {
            cVar15 = (*(code *)pTVar10)();
          }
          bVar34 = cVar15 == '\0';
          uVar30 = uVar29;
          do {
            pTVar8 = local_158;
            local_168 = CONCAT44(local_168._4_4_,uVar29);
            uVar27 = uVar29 + 1;
            uVar32 = uVar29;
            local_178 = bVar34;
            uVar29 = uVar27;
            if ((int)uVar27 < iVar17) {
              do {
                UE::Core::Private::Function::CheckCallable(local_e8);
                pTVar10 = local_e8;
                ppTVar23 = &local_d8;
                if (local_c0 != (TBitArray<FDefaultBitArrayAllocator> **)0x0) {
                  ppTVar23 = local_c0;
                }
                pvVar21 = (void *)(**(code **)(((*ppTVar23)->AllocatorInstance).InlineData + 8))();
                if (pTVar10 ==
                    (TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)
                    UE::Core::Private::Function::
                    TFunctionRefCaller<`BuildPatchServices::FCloudChunkSource::GetNextTask'::__l22::<lambda_2>,bool,FGuid_const_&>
                    ::Call) {
                  cVar15 = `BuildPatchServices::FCloudChunkSource::GetNextTask'::__l22::<lambda_2>::
                           operator()(pvVar21,(FGuid *)((longlong)&pTVar8->field_0x0 +
                                                       (longlong)(int)uVar29 * 4 * 4));
                }
                else {
                  cVar15 = (*(code *)pTVar10)();
                }
              } while (((bool)bVar34 == (cVar15 == '\0')) &&
                      (uVar29 = uVar29 + 1, (int)uVar29 < iVar17));
              pTVar33 = local_158;
              uVar32 = (uint)local_168;
              uVar30 = (uint)local_170;
            }
            if (local_178 != 0) {
              if (uVar30 != uVar32) {
                memmove((uint *)((longlong)&pTVar33->field_0x0 + (longlong)(int)uVar30 * 4 * 4),
                        (uint *)((longlong)&pTVar33->field_0x0 + (longlong)(int)uVar32 * 4 * 4),
                        (longlong)(int)(uVar29 - uVar32) << 4);
              }
              uVar30 = uVar30 + (uVar29 - uVar32);
              local_170 = (TMap<FGuid,BuildPatchServices::FCloudChunkSource::FTaskInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FCloudChunkSource::FTaskInfo,0>_>
                           *)CONCAT44(local_170._4_4_,uVar30);
            }
            bVar34 = local_178 ^ 1;
          } while ((int)uVar29 < iVar17);
          local_150->ArrayNum = uVar30;
          param_7 = local_150;
          local_178 = bVar34;
        }
        uVar29 = (local_148->Configuration).PreFetchMaximum;
        if ((int)uVar30 < (int)uVar29) {
          uVar29 = uVar30;
        }
        TArray<FGuid,TSizedDefaultAllocator<32>_>::SetNum(param_7,uVar29,No);
        pFVar26 = (param_7->AllocatorInstance).Data;
        iVar17 = param_7->ArrayNum / 2;
        lVar18 = (longlong)iVar17;
        if (0 < iVar17) {
          pFVar24 = pFVar26 + (longlong)(param_7->ArrayNum + -1) * 0x10;
          do {
            uVar4 = *(undefined8 *)(pFVar24 + 8);
            uVar5 = *(undefined8 *)pFVar26;
            uVar6 = *(undefined8 *)(pFVar26 + 8);
            *(undefined8 *)pFVar26 = *(undefined8 *)pFVar24;
            *(undefined8 *)(pFVar26 + 8) = uVar4;
            pFVar26 = pFVar26 + 0x10;
            *(undefined8 *)pFVar24 = uVar5;
            *(undefined8 *)(pFVar24 + 8) = uVar6;
            lVar18 = lVar18 + -1;
            pFVar24 = pFVar24 + -0x10;
          } while (lVar18 != 0);
        }
        if (local_e8 != (TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)0x0) {
          ppTVar23 = &local_d8;
          if (local_c0 != (TBitArray<FDefaultBitArrayAllocator> **)0x0) {
            ppTVar23 = local_c0;
          }
          (*(code *)((*ppTVar23)->AllocatorInstance).SecondaryData)();
        }
        if (local_b8[0] != (code *)0x0) {
          pppuVar25 = &local_a8;
          if (local_90 != (undefined ***)0x0) {
            pppuVar25 = local_90;
          }
          (*(code *)(*pppuVar25)[2])();
        }
      }
      pFVar7 = local_160;
      __return_storage_ptr__ = local_160;
      if (0 < param_7->ArrayNum) {
        pFVar26 = (param_7->AllocatorInstance).Data + (longlong)param_7->ArrayNum * 0x10 + -0x10;
        uVar4 = *(undefined8 *)pFVar26;
        uVar5 = *(undefined8 *)(pFVar26 + 8);
        local_160->A = (int)uVar4;
        local_160->B = (int)((ulonglong)uVar4 >> 0x20);
        local_160->C = (int)uVar5;
        local_160->D = (int)((ulonglong)uVar5 >> 0x20);
        uVar30 = param_7->ArrayNum - 1;
        pFVar26 = (param_7->AllocatorInstance).Data + (longlong)(int)uVar30 * 0x10;
        iVar17 = ~uVar30 + param_7->ArrayNum;
        if (iVar17 != 0) {
          memmove(pFVar26,pFVar26 + 0x10,(longlong)iVar17 << 4);
        }
        param_7->ArrayNum = param_7->ArrayNum + -1;
        return pFVar7;
      }
    }
  }
  __return_storage_ptr__->A = 0;
  __return_storage_ptr__->B = 0;
  __return_storage_ptr__->C = 0;
  __return_storage_ptr__->D = 0;
  return __return_storage_ptr__;
}

// OnDownloadComplete @ 1432deb10

void __thiscall
BuildPatchServices::FCloudChunkSource::OnDownloadComplete
          (FCloudChunkSource *this,int param_1,TSharedRef<BuildPatchServices::IDownload,1> *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TPairInitializer<int_const_&,TSharedRef<BuildPatchServices::IDownload,1>_const_&> local_res8;
  TSharedRef<BuildPatchServices::IDownload,1> **local_18;
  TSharedRef<BuildPatchServices::IDownload,1> *local_10;
  
  lpCriticalSection = &this->CompletedDownloadsCS;
  local_res8.Value._0_4_ = param_1;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_18 = &local_res8.Value;
    local_10 = param_2;
    TSet<TTuple<int,TSharedRef<BuildPatchServices::IDownload,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedRef<BuildPatchServices::IDownload,1>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<int_const_&,TSharedRef<BuildPatchServices::IDownload,1>_const_&>_>
              ((TSet<TTuple<int,TSharedRef<BuildPatchServices::IDownload,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedRef<BuildPatchServices::IDownload,1>,0>,FDefaultSetAllocator>
                *)&this->CompletedDownloads,&local_res8,(bool *)&local_18);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// OnDownloadProgress @ 1432df2d0

void __thiscall
BuildPatchServices::FCloudChunkSource::OnDownloadProgress
          (FCloudChunkSource *this,int param_1,ulong64 param_2)

{
  ulong64 uVar1;
  
  uVar1 = FStatsCollector::GetCycles();
  LOCK();
  this->CyclesAtLastData = uVar1;
  UNLOCK();
  return;
}

// SetPaused @ 1432edd90

void __thiscall
BuildPatchServices::FCloudChunkSource::SetPaused(FCloudChunkSource *this,bool param_1)

{
  LOCK();
  *(uint *)&this->CyclesAtLastData = (uint)param_1;
  UNLOCK();
  return;
}

// SetUnavailableChunksCallback @ 1432edfd0

void __thiscall
BuildPatchServices::FCloudChunkSource::SetUnavailableChunksCallback
          (FCloudChunkSource *this,
          TFunction<void___cdecl(TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>)>
          *param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)param_1 != 0) {
    plVar1 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar1 = *(longlong **)&param_1->field_0x28;
    }
                    /* WARNING: Could not recover jumptable at 0x0001432edfe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ThreadRun @ 1432eeb60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001432ef406) */
/* WARNING: Removing unreachable block (ram,0x0001432efb4a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall BuildPatchServices::FCloudChunkSource::ThreadRun(FCloudChunkSource *this)

{
  TArray<FGuid,TSizedDefaultAllocator<32>_> *pTVar1;
  TMap<int,TSharedRef<BuildPatchServices::IDownload,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedRef<BuildPatchServices::IDownload,1>,0>_>
  *pTVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  FThreadSafeBool FVar6;
  uint uVar7;
  TNode *pTVar8;
  TNode *pTVar9;
  TNode *pTVar10;
  TNode *this_00;
  IMessagePump *pIVar11;
  TNode *this_01;
  IInstallerError *pIVar12;
  void *_Src;
  code *pcVar13;
  double dVar14;
  FTaskInfo *pFVar15;
  double dVar16;
  double dVar17;
  FTaskInfo *pFVar18;
  double dVar19;
  double dVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  double dVar23;
  undefined4 uVar24;
  bool bVar25;
  bool bVar26;
  char cVar27;
  bool bVar28;
  int iVar29;
  int iVar30;
  uint uVar31;
  EBuildPatchDownloadHealth EVar32;
  longlong lVar33;
  TReferenceControllerBase<1> *pTVar34;
  TReferenceControllerBase<1> *pTVar35;
  TReferenceControllerBase<1> *pTVar36;
  ulong64 uVar37;
  longlong lVar38;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *pTVar39;
  longlong *plVar40;
  FTaskInfo *pFVar41;
  FString *pFVar42;
  undefined8 *puVar43;
  FText *pFVar44;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar45;
  FGuid *pFVar46;
  byte bVar47;
  ForElementType<unsigned_int> FVar48;
  ForElementType<FSetElementId> FVar49;
  TBitArray<FDefaultBitArrayAllocator> **ppTVar50;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar51;
  uint *puVar52;
  uint uVar53;
  atomic<int> *paVar54;
  size_t _Size;
  longlong lVar55;
  FScriptContainerElement *pFVar56;
  uint *puVar57;
  FGuid *pFVar58;
  TReferenceControllerBase<1> *pTVar59;
  FCloudChunkSource *pFVar60;
  uint uVar61;
  uint uVar62;
  uint *puVar63;
  FGuid *pFVar64;
  bool bVar65;
  double dVar66;
  double dVar67;
  double dVar68;
  double dVar69;
  undefined8 uVar70;
  undefined8 uVar71;
  undefined1 auStackY_cc8 [32];
  undefined1 local_c73;
  char local_c72;
  undefined1 local_c71;
  FCloudChunkSource *local_c70;
  FGuid local_c68;
  EBuildPatchDownloadHealth local_c58;
  FGuid *local_c50;
  TReferenceControllerBase<1> *local_c48;
  TReferenceControllerBase<1> *local_c40;
  FTaskInfo *local_c38;
  longlong *local_c30;
  undefined8 uStack_c28;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_c20;
  undefined8 uStack_c18;
  undefined8 uStack_c10;
  int local_c08;
  undefined4 uStack_c04;
  int local_c00;
  TReferenceControllerBase<1> *local_bf8;
  ulonglong local_bf0;
  longlong local_be8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_be0;
  FString local_bd0;
  ForAnyElementType local_bc0;
  int local_bb8;
  int local_bb4;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_bb0;
  int local_ba0;
  int local_b9c;
  undefined4 local_b98;
  int local_b94;
  FGuid local_b90;
  FGuid *local_b80;
  TArray<FGuid,TSizedDefaultAllocator<32>_> local_b78;
  longlong local_b68;
  double local_b60;
  FGuid *local_b58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_b50;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_b30;
  undefined1 local_b10 [12];
  undefined1 local_b04 [8];
  undefined1 local_afc [8];
  undefined1 local_af4 [4];
  uint local_af0;
  undefined1 local_aec [12];
  undefined8 *local_ae0;
  longlong local_ad8;
  longlong local_ad0;
  FGuid *local_ac8;
  ITextData *local_ac0;
  uint local_ab8;
  ITextData *local_ab0;
  uint local_aa8;
  longlong *local_aa0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a98;
  FGuid *local_a78;
  FGuid *local_a70;
  longlong *local_a68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a60;
  undefined8 uStack_a40;
  longlong *local_a38;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a30;
  undefined8 uStack_a10;
  undefined1 local_a08 [12];
  uint uStack_9fc;
  TBitArray<FDefaultBitArrayAllocator> *local_9f8;
  undefined8 uStack_9f0;
  longlong local_9e8;
  undefined8 uStack_9e0;
  undefined8 *local_9d8;
  undefined1 *local_9d0;
  undefined4 *local_9c8;
  FGuid *local_9c0;
  void *local_9b8 [2];
  void *local_9a8 [2];
  FGuid local_998;
  longlong *local_988;
  longlong lStack_980;
  TBitArray<FDefaultBitArrayAllocator> *local_978;
  undefined8 uStack_970;
  undefined8 local_968;
  undefined8 uStack_960;
  code *local_958 [5];
  undefined8 *local_930;
  undefined1 local_928 [48];
  FString local_8f8;
  FString local_8e8;
  longlong local_8d8 [2];
  undefined8 local_8c8 [5];
  undefined4 local_89c;
  undefined4 local_87c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_878;
  undefined8 local_848;
  undefined8 uStack_840;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_838;
  undefined1 local_818 [32];
  ForElementType<unsigned_int> local_7f8;
  uint local_7f0;
  int local_7ec;
  int local_7e8;
  int local_7e4;
  undefined1 local_7e0 [8];
  ForElementType<FSetElementId> local_7d8;
  int local_7d0;
  undefined1 local_7c8 [32];
  void *local_7a8;
  int local_7a0;
  undefined4 local_79c;
  undefined4 local_798;
  int local_794;
  undefined4 local_790;
  void *local_788;
  undefined4 local_780;
  code *local_778;
  longlong lStack_770;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_768;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *pTStack_760;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *pTStack_758;
  TBitArray<FDefaultBitArrayAllocator> **local_750;
  TSet<TTuple<FGuid,BuildPatchServices::FCloudChunkSource::FTaskInfo>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FCloudChunkSource::FTaskInfo,0>,FDefaultSetAllocator>
  local_748;
  undefined1 local_6f8 [24];
  void *pvStack_6e0;
  undefined8 local_6d8;
  undefined1 auStack_6d0 [24];
  undefined8 local_6b8;
  void *pvStack_6b0;
  undefined8 local_6a8;
  undefined8 uStack_6a0;
  undefined8 local_698;
  void *pvStack_690;
  ulonglong local_688;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> local_678;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> local_628;
  TSet<TTuple<FGuid,BuildPatchServices::FChunkUriResponse>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkUriResponse,0>,FDefaultSetAllocator>
  local_5d8;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> local_588;
  undefined1 local_538 [32];
  void *local_518;
  undefined4 local_510;
  undefined4 local_50c;
  undefined4 local_508;
  undefined4 local_504;
  ForElementType<FSetElementId> local_500;
  ulonglong local_4f0;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> local_4e8;
  undefined1 local_498 [24];
  void *pvStack_480;
  undefined8 local_478;
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  TStack_470;
  undefined8 local_438;
  void *pvStack_430;
  ulonglong local_428;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> local_418;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> local_3c8;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined4 local_368;
  undefined1 local_358 [24];
  undefined1 local_340 [64];
  void *local_300;
  undefined4 local_2f8;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> local_2e8;
  TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_298;
  void *local_258;
  undefined4 local_250;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> local_248;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> local_1f8;
  TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_1a8;
  void *local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  FChunkUriResponse local_148;
  ulonglong local_d8;
  
  dVar23 = __real_3ff0000000000000;
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_cc8;
  pTVar59 = (TReferenceControllerBase<1> *)0x0;
  bVar65 = (this->Configuration).bBeginDownloadsOnFirstGet == false;
  pFVar15 = (FTaskInfo *)0x0;
  pFVar58 = (FGuid *)0x0;
  dVar17 = 0.0;
  pFVar18 = (FTaskInfo *)0x0;
  dVar19 = 0.0;
  dVar20 = 0.0;
  local_b60 = __real_3ff0000000000000;
  local_748.Elements._0_8_ = 0;
  local_748.Elements._8_8_ = 0;
  local_748.Elements._32_8_ = 0;
  local_748.Elements._40_4_ = 0;
  local_748.Elements._44_4_ = 0x80;
  local_748.Elements._48_4_ = 0xffffffff;
  local_748.Elements._52_4_ = 0;
  local_748.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_748.HashSize = 0;
  local_818._0_8_ = (FScriptContainerElement *)0x0;
  local_818._8_8_ = 0;
  local_7f8 = (ForElementType<unsigned_int>)0x0;
  local_7f0 = 0;
  local_7ec = 0x80;
  local_7e8 = -1;
  local_7e4 = 0;
  local_7d8 = (ForElementType<FSetElementId>)0x0;
  local_7d0 = 0;
  local_588.Elements._0_8_ = 0;
  local_588.Elements._8_8_ = 0;
  local_588.Elements._32_8_ = 0;
  local_588.Elements._40_4_ = 0;
  local_588.Elements._44_4_ = 0x80;
  local_588.Elements._48_4_ = 0xffffffff;
  local_588.Elements._52_4_ = 0;
  local_588.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_588.HashSize = 0;
  local_4e8.Elements._0_8_ = 0;
  local_4e8.Elements._8_8_ = 0;
  local_4e8.Elements._32_8_ = 0;
  local_4e8.Elements._40_4_ = 0;
  local_4e8.Elements._44_4_ = 0x80;
  local_4e8.Elements._48_4_ = 0xffffffff;
  local_4e8.Elements._52_4_ = 0;
  local_4e8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_4e8.HashSize = 0;
  local_418.Elements._0_8_ = 0;
  local_418.Elements._8_8_ = 0;
  local_418.Elements._32_8_ = 0;
  local_418.Elements._40_4_ = 0;
  local_418.Elements._44_4_ = 0x80;
  local_418.Elements._48_4_ = 0xffffffff;
  local_418.Elements._52_4_ = 0;
  local_418.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_418.HashSize = 0;
  local_b78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b78.ArrayNum = 0;
  local_b78.ArrayMax = 0;
  bVar28 = false;
  local_bf0 = 0;
  local_c58 = Excellent;
  local_c00 = 0;
  local_678.Elements._0_8_ = 0;
  local_678.Elements._8_8_ = 0;
  local_678.Elements._32_8_ = 0;
  local_678.Elements._40_4_ = 0;
  local_678.Elements._44_4_ = 0x80;
  local_678.Elements._48_4_ = 0xffffffff;
  local_678.Elements._52_4_ = 0;
  local_678.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_678.HashSize = 0;
  local_c70 = this;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::operator=
            (&local_678,&this->InitialDownloadSet);
  lVar33 = (**(code **)((longlong)*this->ManifestSet + 0x20))(this->ManifestSet,&local_678);
  local_b68 = 0;
  pTVar34 = ::operator_new(0x20);
  if (pTVar34 == (TReferenceControllerBase<1> *)0x0) {
    local_c48 = (TReferenceControllerBase<1> *)0x0;
    local_bf8 = (TReferenceControllerBase<1> *)&DAT_00000010;
    pTVar34 = pTVar59;
  }
  else {
    pTVar34->SharedReferenceCount = (atomic<int>)0x1;
    pTVar34->WeakReferenceCount = (atomic<int>)0x1;
    pTVar34->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TQueue_U__TTuple_UFGuid__UFChunkUriResponse_BuildPatchServices_____0A____00_SharedPointerInternals__6B_
    ;
    pTVar35 = ::operator_new(0x80);
    pTVar36 = pTVar59;
    if (pTVar35 != (TReferenceControllerBase<1> *)0x0) {
      pTVar35->_padding_ = 0;
      pTVar35->SharedReferenceCount = (atomic<int>)0x0;
      pTVar35->WeakReferenceCount = (atomic<int>)0x0;
      pTVar35[1]._padding_ = 0;
      pTVar35[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar35[1].WeakReferenceCount = (atomic<int>)0x0;
      pTVar35[2]._padding_ = 0;
      pTVar35[2].SharedReferenceCount = (atomic<int>)0x0;
      pTVar35[2].WeakReferenceCount = (atomic<int>)0x0;
      pTVar35[3]._padding_ = 0;
      pTVar35[3].SharedReferenceCount = (atomic<int>)0x0;
      pTVar35[3].WeakReferenceCount = (atomic<int>)0x0;
      pTVar35[4]._padding_ = 0;
      pTVar35[4].SharedReferenceCount = (atomic<int>)0x0;
      pTVar35[4].WeakReferenceCount = (atomic<int>)0x0;
      pTVar35[5]._padding_ = 0;
      pTVar35[5].SharedReferenceCount = (atomic<int>)0x0;
      pTVar35[5].WeakReferenceCount = (atomic<int>)0x0;
      pTVar35[6]._padding_ = 0;
      pTVar35[6].SharedReferenceCount = (atomic<int>)0x0;
      pTVar35[6].WeakReferenceCount = (atomic<int>)0x0;
      pTVar35[7]._padding_ = 0;
      pTVar35[7].SharedReferenceCount = (atomic<int>)0x0;
      pTVar35[7].WeakReferenceCount = (atomic<int>)0x0;
      pTVar35->_padding_ = 0;
      pTVar35->SharedReferenceCount = (atomic<int>)0x0;
      pTVar35->WeakReferenceCount = (atomic<int>)0x0;
      pTVar35[1]._padding_ = 0;
      pTVar35[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar35[1].WeakReferenceCount = (atomic<int>)0x0;
      pTVar35[2]._padding_ = 0;
      pTVar35[2].SharedReferenceCount = (atomic<int>)0x0;
      pTVar35[2].WeakReferenceCount = (atomic<int>)0x0;
      pTVar35[3]._padding_ = 0;
      pTVar35[3].SharedReferenceCount = (atomic<int>)0x0;
      pTVar35[3].WeakReferenceCount = (atomic<int>)0x0;
      pTVar35[4]._padding_ = 0;
      pTVar35[4].SharedReferenceCount = (atomic<int>)0x0;
      pTVar35[4].WeakReferenceCount = (atomic<int>)0x0;
      pTVar35[5]._padding_ = 0;
      pTVar35[5].SharedReferenceCount = (atomic<int>)0x0;
      pTVar35[5].WeakReferenceCount = (atomic<int>)0x0;
      pTVar35[6]._padding_ = 0;
      pTVar35[6].SharedReferenceCount = (atomic<int>)0x0;
      pTVar35[6].WeakReferenceCount = (atomic<int>)0x0;
      pTVar35[7]._padding_ = 0;
      pTVar35[7].SharedReferenceCount = (atomic<int>)0x0;
      pTVar35[7].WeakReferenceCount = (atomic<int>)0x0;
      pTVar35[5].WeakReferenceCount = (atomic<int>)0x80;
      *(undefined4 *)&pTVar35[6]._padding_ = 0xffffffff;
      pTVar36 = pTVar35;
    }
    local_bf8 = pTVar34 + 1;
    *(TReferenceControllerBase<1> **)&pTVar34[1].SharedReferenceCount = pTVar36;
    pTVar34[1]._padding_ = (longlong)pTVar36;
    local_c48 = pTVar34;
    if ((local_bf8 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("InObject != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x246,L""), bVar25)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  local_3c8.Elements._0_8_ = 0;
  local_3c8.Elements._8_8_ = 0;
  local_3c8.Elements._32_8_ = 0;
  local_3c8.Elements._40_4_ = 0;
  local_3c8.Elements._44_4_ = 0x80;
  local_3c8.Elements._48_4_ = 0xffffffff;
  local_3c8.Elements._52_4_ = 0;
  local_3c8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_3c8.HashSize = 0;
  local_5d8.Elements._0_8_ = 0;
  local_5d8.Elements._8_8_ = 0;
  local_5d8.Elements._32_8_ = 0;
  local_5d8.Elements._40_4_ = 0;
  local_5d8.Elements._44_4_ = 0x80;
  local_5d8.Elements._48_4_ = 0xffffffff;
  local_5d8.Elements._52_4_ = 0;
  local_5d8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_5d8.HashSize = 0;
  (**(code **)((longlong)*this->CloudChunkSourceStat + 0x38))(this->CloudChunkSourceStat,lVar33);
  (**(code **)((longlong)*this->CloudChunkSourceStat + 0x30))(this->CloudChunkSourceStat,0);
  (**(code **)((longlong)*this->CloudChunkSourceStat + 0x40))(this->CloudChunkSourceStat,4);
  (**(code **)((longlong)*this->CloudChunkSourceStat + 0x48))(this->CloudChunkSourceStat,0);
  (**(code **)((longlong)*this->CloudChunkSourceStat + 0x50))(this->CloudChunkSourceStat,0);
  FVar6 = this->bShouldAbort;
  EVar32 = Excellent;
  uVar70 = ___xmm_00000000ffffffff0000008000000000;
  uVar71 = _UNK_150631d98;
  do {
    if (FVar6 != (FThreadSafeBool)0x0) {
      dVar19 = 0.0;
      if (this->bShouldAbort != (FThreadSafeBool)0x0) {
        local_b30.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_818 + 0x10);
        local_b30._padding_._0_4_ = 0;
        local_b30._padding_._4_4_ = 1;
        local_b30.UnvisitedBitMask = 0xffffffff;
        local_b30.CurrentBitIndex = 0;
        local_b30.BaseBitIndex = 0;
        if (local_7f0 != 0) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_b30);
        }
        unique0x10002520 = CONCAT44(local_b30._padding_._4_4_,(undefined4)local_b30._padding_);
        local_a08._0_8_ = local_818;
        uStack_9f0 = CONCAT44(local_b30.CurrentBitIndex,local_b30.UnvisitedBitMask);
        local_9e8 = CONCAT44(local_b30._28_4_,local_b30.BaseBitIndex);
        pTStack_768 = local_b30.Array;
        local_750 = (TBitArray<FDefaultBitArrayAllocator> **)
                    CONCAT44(local_750._4_4_,local_818._8_4_ - local_7e4);
        local_9f8 = local_b30.Array;
        uStack_9e0 = local_750;
        local_778 = (code *)local_a08._0_8_;
        lStack_770 = unique0x10002520;
        pTStack_760 = (TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)uStack_9f0;
        pTStack_758 = (TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)local_9e8;
        pTVar45 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                  TConstSetBitIterator<FDefaultBitArrayAllocator>
                            (&local_878,(TBitArray<FDefaultBitArrayAllocator> *)(local_818 + 0x10),
                             local_7f0);
        local_928._0_8_ = local_818;
        local_928._8_8_ = pTVar45->_padding_;
        local_928._16_8_ = pTVar45->Array;
        local_928._24_8_ = *(undefined8 *)&pTVar45->UnvisitedBitMask;
        local_928._32_8_ = *(undefined8 *)&pTVar45->BaseBitIndex;
        local_750 = (TBitArray<FDefaultBitArrayAllocator> **)
                    CONCAT44(local_750._4_4_,local_818._8_4_ - local_7e4);
        local_928._40_8_ = local_750;
        local_778 = (code *)local_928._0_8_;
        lStack_770 = local_928._8_8_;
        pTStack_768 = (TBitArray<FDefaultBitArrayAllocator> *)local_928._16_8_;
        pTStack_760 = (TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)local_928._24_8_;
        pTStack_758 = (TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)local_928._32_8_;
        bVar28 = TSparseArray<TSparseSetElement<TTuple<int,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 ::TRangedForIterator::operator!=
                           ((TRangedForIterator *)local_a08,(TRangedForIterator *)local_928);
        if (bVar28) {
          do {
            (**(code **)((longlong)*this->DownloadService + 0x20))
                      (this->DownloadService,
                       *(undefined4 *)
                        ((longlong)uStack_9f0._4_4_ * 0x1c + *(longlong *)local_a08._0_8_));
            uStack_9f0 = CONCAT44(uStack_9f0._4_4_,(uint)uStack_9f0 & ~uStack_9fc);
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_a08 + 8));
            bVar28 = TSparseArray<TSparseSetElement<TTuple<int,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     ::TRangedForIterator::operator!=
                               ((TRangedForIterator *)local_a08,(TRangedForIterator *)local_928);
          } while (bVar28);
        }
      }
      (**(code **)((longlong)*this->CloudChunkSourceStat + 0x40))(this->CloudChunkSourceStat,EVar32)
      ;
      if (0.0 < dVar17) {
        dVar19 = (double)pFVar58 / dVar17;
      }
      (**(code **)((longlong)*this->CloudChunkSourceStat + 0x48))
                (this->CloudChunkSourceStat,(float)dVar19);
      (**(code **)((longlong)*this->CloudChunkSourceStat + 0x50))(this->CloudChunkSourceStat,0);
      TPromise<void>::SetValue(&this->Promise);
      local_5d8.HashSize = 0;
      if (local_5d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_5d8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<FGuid,BuildPatchServices::FChunkUriResponse>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FGuid,BuildPatchServices::FChunkUriResponse>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_5d8.Elements);
      local_3c8.HashSize = 0;
      if (local_3c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_3c8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_3c8.Elements);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar34);
      local_678.HashSize = 0;
      if (local_678.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_678.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_678.Elements);
      if (local_b78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b78.AllocatorInstance.Data);
      }
      local_418.HashSize = 0;
      if (local_418.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_418.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_418.Elements);
      local_4e8.HashSize = 0;
      if (local_4e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_4e8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_4e8.Elements);
      local_588.HashSize = 0;
      if (local_588.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_588.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_588.Elements);
      local_7d0 = 0;
      if (local_7d8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_7d8);
      }
      TSparseArray<TSparseSetElement<TTuple<int,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_818);
      local_748.HashSize = 0;
      if (local_748.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_748.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<FGuid,BuildPatchServices::FCloudChunkSource::FTaskInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FGuid,BuildPatchServices::FCloudChunkSource::FTaskInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_748.Elements);
      return;
    }
    local_b90.A = 0;
    local_b90.B = 0;
    bVar25 = false;
    local_b90.C = 0;
    local_b90.D = 0;
    while (pTVar8 = ((this->RepeatRequirementMessages).Tail)->NextNode, pTVar8 != (TNode *)0x0) {
      local_b90.A = (pTVar8->Item).A;
      local_b90.B = (pTVar8->Item).B;
      local_b90.C = (pTVar8->Item).C;
      local_b90.D = (pTVar8->Item).D;
      pTVar9 = (this->RepeatRequirementMessages).Tail;
      (this->RepeatRequirementMessages).Tail = pTVar8;
      (pTVar8->Item).A = 0;
      (pTVar8->Item).B = 0;
      (pTVar8->Item).C = 0;
      (pTVar8->Item).D = 0;
      ::operator_delete(pTVar9,0x18);
      if (local_4e8.Elements._8_4_ != local_4e8.Elements._52_4_) {
        uVar37 = CityHash64((char *)&local_b90,0x10);
        iVar29 = TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::RemoveImpl<FGuid>
                           (&local_4e8,(uint)uVar37,&local_b90);
        if (0 < iVar29) {
          lVar38 = (**(code **)((longlong)*this->ManifestSet + 0x28))(this->ManifestSet,&local_b90);
          pTVar59 = (TReferenceControllerBase<1> *)((longlong)&pTVar59->_padding_ + lVar38);
          bVar25 = true;
        }
      }
    }
    local_628.Elements._0_8_ = 0;
    local_628.Elements._8_8_ = 0;
    local_628.Elements._32_8_ = 0;
    local_628.Elements._40_4_ = 0;
    local_628.Elements._44_4_ = 0x80;
    local_628.Elements._48_4_ = 0xffffffff;
    local_628.Elements._52_4_ = 0;
    local_628.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_628.HashSize = 0;
    local_c40 = pTVar59;
    while( true ) {
      pFVar60 = local_c70;
      pFVar46 = (FGuid *)0x0;
      pTVar10 = ((this->RuntimeRequestMessages).Tail)->NextNode;
      if (pTVar10 == (TNode *)0x0) break;
      pTVar39 = &pTVar10->Item;
      if (&local_628 != pTVar39) {
        TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::
        Move<TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>(&local_628,pTVar39);
      }
      this_00 = (this->RuntimeRequestMessages).Tail;
      (this->RuntimeRequestMessages).Tail = pTVar10;
      local_538._16_8_ = 0;
      local_538._24_8_ = 0;
      local_500.InlineData[0] = '\0';
      local_500.InlineData[1] = '\0';
      local_500.InlineData[2] = '\0';
      local_500.InlineData[3] = '\0';
      local_500._padding_ = 0;
      local_500.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_4f0 = 0;
      local_538._0_8_ = (void *)0x0;
      local_538._8_8_ = 0;
      local_518 = (void *)0x0;
      local_510 = 0;
      local_50c = 0x80;
      local_508 = 0xffffffff;
      local_504 = 0;
      if (pTVar39 != (TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)local_538) {
        TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::
        Move<TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>
                  (pTVar39,(TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)local_538);
      }
      local_4f0 = local_4f0 & 0xffffffff00000000;
      if (local_500.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_500.SecondaryData);
      }
      TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Empty((TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_538,0);
      if (local_518 != (void *)0x0) {
        FMemory::Free(local_518);
      }
      if ((void *)local_538._0_8_ != (void *)0x0) {
        FMemory::Free((void *)local_538._0_8_);
      }
      if (this_00 != (TNode *)0x0) {
        TQueue<TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,0>::TNode::
        _scalar_deleting_destructor_(this_00,1);
      }
      pTVar39 = (TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)
                (**(code **)((longlong)*this->ChunkReferenceTracker + 8))
                          (this->ChunkReferenceTracker,&local_298);
      pTVar39 = TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Intersect
                          (&local_628,&local_2e8,pTVar39);
      if (&local_628 != pTVar39) {
        TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::
        Move<TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>(&local_628,pTVar39);
      }
      local_2e8.HashSize = 0;
      if (local_2e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_2e8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_2e8.Elements);
      local_250 = 0;
      if (local_258 != (void *)0x0) {
        FMemory::Free(local_258);
      }
      TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_298);
      pTVar39 = TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Difference
                          (&local_628,&local_248,&local_678);
      if (&local_628 != pTVar39) {
        TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::
        Move<TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>(&local_628,pTVar39);
      }
      local_248.HashSize = 0;
      if (local_248.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_248.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_248.Elements);
      if (0 < (int)(local_628.Elements._8_4_ - local_628.Elements._52_4_)) {
        lVar38 = (**(code **)((longlong)*this->ManifestSet + 0x20))(this->ManifestSet,&local_628);
        lVar33 = lVar33 + lVar38;
        TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Append<FDefaultSetAllocator>
                  (&local_678,&local_628);
        bVar25 = true;
      }
    }
    pTStack_760 = &local_678;
    pTStack_758 = &local_3c8;
    iVar29 = 0;
    local_750 = (TBitArray<FDefaultBitArrayAllocator> **)0x0;
    pTStack_768 = (TBitArray<FDefaultBitArrayAllocator> *)
                  &UE::Core::Private::Function::
                   TFunction_OwnedObject<`BuildPatchServices::FCloudChunkSource::ThreadRun'::`4'::<lambda_1>,0,0>
                   ::_vftable_;
    local_778 = UE::Core::Private::Function::
                TFunctionRefCaller<`BuildPatchServices::FCloudChunkSource::ThreadRun'::__l4::<lambda_1>,bool,FGuid_const_&>
                ::Call;
    local_b80 = (FGuid *)0x0;
    local_be8 = lVar33;
    if (local_678.Elements._8_4_ != local_678.Elements._52_4_) {
      plVar40 = (longlong *)
                (**(code **)((longlong)*local_c70->ChunkReferenceTracker + 0x28))
                          (local_c70->ChunkReferenceTracker,local_9b8,
                           (local_c70->Configuration).PreFetchMaximum);
      pFVar64 = pFVar46;
      if (local_8d8 != plVar40) {
        pFVar46 = (FGuid *)*plVar40;
        *plVar40 = 0;
        pFVar64 = (FGuid *)(ulonglong)*(uint *)(plVar40 + 1);
        plVar40[1] = 0;
        local_b80 = pFVar46;
      }
      iVar29 = (int)pFVar64;
      if (local_9b8[0] != (void *)0x0) {
        FMemory::Free(local_9b8[0]);
      }
    }
    pFVar64 = pFVar46 + iVar29;
    for (; this = local_c70, pFVar46 != pFVar64; pFVar46 = pFVar46 + 1) {
      TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
                (&local_3c8,(FGuid *)local_b10,(bool *)pFVar46);
      local_be0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_be0.ArrayNum = 0;
      local_be0.ArrayMax = 0;
      local_bd0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_bd0.Data.ArrayNum = 0;
      local_bd0.Data.ArrayMax = 0;
      uVar37 = CityHash64((char *)pFVar46,0x10);
      pFVar41 = TMapBase<FGuid,BuildPatchServices::FCloudChunkSource::FTaskInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FCloudChunkSource::FTaskInfo,0>_>
                ::FindOrAddImpl<FGuid_const_&>
                          ((TMapBase<FGuid,BuildPatchServices::FCloudChunkSource::FTaskInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FCloudChunkSource::FTaskInfo,0>_>
                            *)&local_748,(uint)uVar37,pFVar46);
      pFVar41->CloudDirUsed = pFVar60->CurrentBestCloudDir;
      uVar62 = pFVar60->CurrentBestCloudDir;
      uVar61 = 0;
      if ((int)uVar62 < (pFVar60->Configuration).CloudRoots.ArrayNum) {
        uVar61 = ~uVar62 >> 0x1f;
      }
      if ((uVar61 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      pTVar51 = (TArray<wchar_t,TSizedDefaultAllocator<32>_> *)
                ((pFVar60->Configuration).CloudRoots.AllocatorInstance.Data +
                (longlong)(int)uVar62 * 0x10);
      if (&local_be0 != pTVar51) {
        TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
                  (&local_be0,(wchar_t *)(pTVar51->AllocatorInstance).Data,pTVar51->ArrayNum,
                   local_be0.ArrayMax);
      }
      pFVar42 = (FString *)
                (**(code **)((longlong)*pFVar60->ManifestSet + 0x40))
                          (pFVar60->ManifestSet,local_9a8,pFVar46);
      if (&local_bd0 != pFVar42) {
        if (local_bd0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_bd0.Data.AllocatorInstance.Data);
        }
        local_bd0.Data.AllocatorInstance.Data = (pFVar42->Data).AllocatorInstance.Data;
        (pFVar42->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_bd0.Data.ArrayNum = (pFVar42->Data).ArrayNum;
        local_bd0.Data.ArrayMax = (pFVar42->Data).ArrayMax;
        (pFVar42->Data).ArrayNum = 0;
        (pFVar42->Data).ArrayMax = 0;
      }
      if (local_9a8[0] != (void *)0x0) {
        FMemory::Free(local_9a8[0]);
      }
      ::FString::RemoveFromStart(&local_bd0,L"/",1,IgnoreCase);
      pIVar11 = pFVar60->MessagePump;
      pcVar13 = *(code **)((longlong)*pIVar11 + 0x20);
      if (local_c48 == (TReferenceControllerBase<1> *)0x0) {
        paVar54 = (atomic<int> *)&DAT_00000008;
      }
      else {
        paVar54 = &local_c48->SharedReferenceCount;
        LOCK();
        *paVar54 = (atomic<int>)((int)*paVar54 + 1);
        UNLOCK();
      }
      uVar21._0_4_ = pFVar46->A;
      uVar21._4_4_ = pFVar46->B;
      uVar22._0_4_ = pFVar46->C;
      uVar22._4_4_ = pFVar46->D;
      local_958[0] = (code *)0x0;
      local_930 = (undefined8 *)0x0;
      local_848 = uVar21;
      uStack_840 = uVar22;
      local_930 = FMemory::Malloc(0x28,8);
      *local_930 = &UE::Core::Private::Function::
                    TFunction_OwnedObject<`BuildPatchServices::FCloudChunkSource::ThreadRun'::`21'::<lambda_2>,0,1>
                    ::_vftable_;
      local_930[1] = local_bf8;
      local_930[2] = local_c48;
      if (local_c48 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar54 = (atomic<int>)((int)*paVar54 + 1);
        UNLOCK();
      }
      local_930[3] = uVar21;
      local_930[4] = uVar22;
      if (local_930 + 1 != (undefined8 *)0x0) {
        local_958[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<`BuildPatchServices::FCloudChunkSource::ThreadRun'::__l21::<lambda_2>,void,BuildPatchServices::FChunkUriResponse>
                       ::Call;
      }
      ::FString::FString(&local_8f8,(FString *)&local_be0);
      ::FString::FString(&local_8e8,&local_bd0);
      cVar27 = (*pcVar13)(pIVar11,&local_8f8,local_958);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_c48)
      ;
      if (cVar27 == '\0') {
        local_358._8_8_ = (FScriptContainerElement *)0x0;
        local_358._16_4_ = 0;
        local_358._20_4_ = 0;
        iVar29 = local_bd0.Data.ArrayNum + -1;
        if (local_bd0.Data.ArrayNum == 0) {
          iVar29 = 0;
        }
        local_340._0_8_ = 0;
        local_340._8_8_ = 0;
        local_340._32_8_ = 0;
        local_300 = (void *)0x0;
        local_2f8 = 0;
        if ((local_be0.ArrayNum != 0) || (iVar30 = 1, iVar29 + 1 == 0)) {
          iVar30 = 0;
        }
        local_bb0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_358[0] = cVar27;
        local_340._40_8_ = uVar70;
        local_340._48_8_ = uVar71;
        TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmptyWithSlack<wchar_t,int>
                  (&local_bb0,(wchar_t *)local_be0.AllocatorInstance.Data,local_be0.ArrayNum,0,
                   iVar30 + iVar29 + 1);
        ::FString::PathAppend
                  ((FString *)&local_bb0,(wchar_t *)local_bd0.Data.AllocatorInstance.Data,iVar29);
        if ((FScriptContainerElement *)local_358._8_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_358._8_8_);
        }
        local_158._0_4_ = pFVar46->A;
        local_158._4_4_ = pFVar46->B;
        uStack_150._0_4_ = pFVar46->C;
        uStack_150._4_4_ = pFVar46->D;
        local_358._8_8_ = local_bb0.AllocatorInstance.Data;
        local_358._16_4_ = local_bb0.ArrayNum;
        local_358._20_4_ = local_bb0.ArrayMax;
        local_bb0.ArrayNum = 0;
        local_bb0.ArrayMax = 0;
        local_bb0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        FChunkUriResponse::FChunkUriResponse(&local_148,(FChunkUriResponse *)local_358);
        puVar43 = ::operator_new(0x80);
        if (puVar43 != (undefined8 *)0x0) {
          *puVar43 = 0;
          puVar43[1] = local_158;
          puVar43[2] = uStack_150;
          FChunkUriResponse::FChunkUriResponse((FChunkUriResponse *)(puVar43 + 3),&local_148);
          pTVar34 = local_bf8;
          if (((ulonglong)local_bf8 & 7) != 0) {
            FWindowsPlatformAtomics::HandleAtomicsFailure
                      (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes"
                      );
          }
          LOCK();
          puVar5 = (undefined8 *)pTVar34->_padding_;
          pTVar34->_padding_ = (longlong)puVar43;
          UNLOCK();
          if (((ulonglong)puVar5 & 7) != 0) {
            FWindowsPlatformAtomics::HandleAtomicsFailure
                      (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes"
                      );
          }
          LOCK();
          *puVar5 = puVar43;
          UNLOCK();
        }
        UE::Core::Private::Tuple::TTupleBaseElement<BuildPatchServices::FChunkUriResponse,1,2>::
        ~TTupleBaseElement<BuildPatchServices::FChunkUriResponse,1,2>
                  ((TTupleBaseElement<BuildPatchServices::FChunkUriResponse,1,2> *)&local_148);
        local_2f8 = 0;
        if (local_300 != (void *)0x0) {
          FMemory::Free(local_300);
        }
        TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_340);
        if ((FScriptContainerElement *)local_358._8_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_358._8_8_);
        }
      }
      if (local_bd0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_bd0.Data.AllocatorInstance.Data);
      }
      if (local_be0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_be0.AllocatorInstance.Data);
      }
      pFVar60 = local_c70;
    }
    local_498._0_8_ = 0;
    pFVar46 = (FGuid *)0x0;
    local_498._16_8_ = 0;
    TStack_470._16_8_ = 0;
    pvStack_480 = (void *)0x0;
    TStack_470._24_8_ = 0;
    local_478 = 0;
    local_438 = 0;
    TStack_470._0_8_ = 0;
    TStack_470._8_8_ = 0;
    TStack_470._32_8_ = 0;
    pvStack_430 = (void *)0x0;
    local_428 = 0;
    local_498._8_8_ = 0;
    TStack_470._40_8_ = uVar70;
    TStack_470._48_8_ = uVar71;
    while( true ) {
      pTVar34 = local_bf8;
      lVar33 = **(longlong **)&local_bf8->SharedReferenceCount;
      iVar29 = 0;
      if (lVar33 == 0) break;
      TTuple<FGuid,BuildPatchServices::FChunkUriResponse>::operator=
                ((TTuple<FGuid,BuildPatchServices::FChunkUriResponse> *)local_498,
                 (TTuple<FGuid,BuildPatchServices::FChunkUriResponse> *)(lVar33 + 8));
      this_01 = *(TNode **)&pTVar34->SharedReferenceCount;
      local_bf8->SharedReferenceCount = (atomic<int>)(int)lVar33;
      local_bf8->WeakReferenceCount = (atomic<int>)(int)((ulonglong)lVar33 >> 0x20);
      auStack_6d0._16_8_ = 0;
      local_688 = 0;
      local_6b8 = 0;
      local_6f8._16_8_ = 0;
      local_698 = 0;
      pvStack_6e0 = (void *)0x0;
      local_6f8._0_8_ = 0;
      local_6f8._8_8_ = 0;
      local_6d8 = 0;
      auStack_6d0._0_8_ = (FScriptContainerElement *)0x0;
      auStack_6d0._8_8_ = 0;
      pvStack_6b0 = (void *)0x0;
      pvStack_690 = (void *)0x0;
      local_6a8 = uVar70;
      uStack_6a0 = uVar71;
      TTuple<FGuid,BuildPatchServices::FChunkUriResponse>::operator=
                ((TTuple<FGuid,BuildPatchServices::FChunkUriResponse> *)(lVar33 + 8),
                 (TTuple<FGuid,BuildPatchServices::FChunkUriResponse> *)local_6f8);
      local_688 = local_688 & 0xffffffff00000000;
      if (pvStack_690 != (void *)0x0) {
        FMemory::Free(pvStack_690);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)auStack_6d0,0,auStack_6d0._8_4_);
      iVar29 = SUB84(auStack_6d0._8_8_,4);
      auStack_6d0._8_8_ = auStack_6d0._8_8_ & 0xffffffff00000000;
      if (iVar29 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,0,(ForAnyElementType *)auStack_6d0,0,(int *)(auStack_6d0 + 0xc));
      }
      uVar62 = local_6a8._4_4_;
      uStack_6a0 = 0xffffffff;
      local_6a8 = (ulonglong)local_6a8._4_4_ << 0x20;
      if (0x80 < uVar62) {
        local_6a8 = 0x8000000000;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(auStack_6d0 + 0x10),0);
      }
      if (pvStack_6b0 != (void *)0x0) {
        FMemory::Free(pvStack_6b0);
      }
      if ((FScriptContainerElement *)auStack_6d0._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)auStack_6d0._0_8_);
      }
      if (pvStack_6e0 != (void *)0x0) {
        FMemory::Free(pvStack_6e0);
      }
      if (this_01 != (TNode *)0x0) {
        TQueue<TTuple<FGuid,BuildPatchServices::FChunkUriResponse>,0>::TNode::
        _scalar_deleting_destructor_(this_01,1);
      }
      if (local_498[0x10] == '\0') {
        local_9d8 = (undefined8 *)local_498;
        local_9d0 = local_498 + 0x10;
        TSet<TTuple<FGuid,BuildPatchServices::FChunkUriResponse>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkUriResponse,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FGuid_&&,BuildPatchServices::FChunkUriResponse_&&>_>
                  (&local_5d8,
                   (TPairInitializer<FGuid_&&,BuildPatchServices::FChunkUriResponse_&&> *)
                   (local_b10 + 8),(bool *)&local_9d8);
      }
      else {
        pIVar12 = this->InstallerError;
        pcVar13 = *(code **)((longlong)*pIVar12 + 0x38);
        pFVar44 = FText::GetEmpty();
        local_ac0 = (pFVar44->TextData).Reference;
        if (local_ac0 != (ITextData *)0x0) {
          (**(code **)((longlong)*local_ac0 + 8))(local_ac0,local_b10 + 4);
        }
        local_ab8 = pFVar44->Flags;
        (*pcVar13)(pIVar12,1,DownloadErrorCodes::FailedUriRequest);
        LOCK();
        this->bShouldAbort = (FThreadSafeBool)0x1;
        UNLOCK();
      }
    }
    local_b58 = (FGuid *)0x0;
    EnterCriticalSection((LPCRITICAL_SECTION)&this->RequestedDownloadsCS);
    pTVar1 = &this->RequestedDownloads;
    if ((TArray<FGuid,TSizedDefaultAllocator<32>_> *)local_8c8 != pTVar1) {
      pFVar46 = (FGuid *)(pTVar1->AllocatorInstance).Data;
      (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      iVar29 = (this->RequestedDownloads).ArrayNum;
      (this->RequestedDownloads).ArrayNum = 0;
      (this->RequestedDownloads).ArrayMax = 0;
      local_b58 = pFVar46;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->RequestedDownloadsCS);
    pFVar64 = pFVar46 + iVar29;
    lVar33 = local_be8;
    for (; pFVar46 != pFVar64; pFVar46 = pFVar46 + 1) {
      bVar65 = true;
      uVar37 = CityHash64((char *)pFVar46,0x10);
      iVar29 = TSet<TTuple<FGuid,BuildPatchServices::FCloudChunkSource::FTaskInfo>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FCloudChunkSource::FTaskInfo,0>,FDefaultSetAllocator>
               ::FindIndexByHash<FGuid>(&local_748,(uint)uVar37,pFVar46);
      if (iVar29 == -1) {
        uVar37 = CityHash64((char *)pFVar46,0x10);
        iVar29 = TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::FindIndexByHash<FGuid>
                           (&local_4e8,(uint)uVar37,pFVar46);
        if (iVar29 == -1) {
          TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
                    (&local_418,(FGuid *)local_b04,(bool *)pFVar46);
          uVar37 = CityHash64((char *)pFVar46,0x10);
          iVar29 = TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::FindIndexByHash<FGuid>
                             (&local_678,(uint)uVar37,pFVar46);
          if (iVar29 == -1) {
            TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
                      (&local_678,(FGuid *)(local_b04 + 4),(bool *)pFVar46);
            lVar38 = (**(code **)((longlong)*this->ManifestSet + 0x28))();
            lVar33 = lVar33 + lVar38;
            bVar25 = true;
          }
        }
      }
    }
    local_be8 = lVar33;
    if ((bVar28) || (!bVar65)) {
LAB_1432efcff:
      lVar38 = local_be8;
      if (bVar25) goto LAB_1432efd06;
    }
    else {
      bVar28 = true;
      pTVar39 = (TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)
                (**(code **)((longlong)*this->ChunkReferenceTracker + 8))
                          (this->ChunkReferenceTracker,&local_1a8);
      pTVar39 = TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Intersect
                          (&local_678,&local_1f8,pTVar39);
      if (&local_678 != pTVar39) {
        TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::
        Move<TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>(&local_678,pTVar39);
      }
      local_1f8.HashSize = 0;
      if (local_1f8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_1f8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_1f8.Elements);
      local_160 = 0;
      if (local_168 != (void *)0x0) {
        FMemory::Free(local_168);
      }
      TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_1a8);
      lVar38 = (**(code **)((longlong)*this->ManifestSet + 0x20))();
      if (lVar38 == lVar33) goto LAB_1432efcff;
LAB_1432efd06:
      local_be8 = lVar38;
      (**(code **)((longlong)*this->CloudChunkSourceStat + 0x38))();
    }
    local_7c8._0_8_ = (void *)0x0;
    local_7c8._8_8_ = 0;
    local_7a8 = (void *)0x0;
    local_7a0 = 0;
    local_79c = 0x80;
    local_798 = 0xffffffff;
    local_794 = 0;
    local_788 = (void *)0x0;
    local_780 = 0;
    EnterCriticalSection((LPCRITICAL_SECTION)&this->CompletedDownloadsCS);
    pTVar2 = &this->CompletedDownloads;
    if ((TMap<int,TSharedRef<BuildPatchServices::IDownload,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedRef<BuildPatchServices::IDownload,1>,0>_>
         *)local_7c8 != pTVar2) {
      TSparseArray<TSparseSetElement<TTuple<int,TSharedRef<BuildPatchServices::IDownload,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,TSharedRef<BuildPatchServices::IDownload,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_7c8,0,local_7c8._8_4_);
      if ((void *)local_7c8._0_8_ != (void *)0x0) {
        FMemory::Free((void *)local_7c8._0_8_);
      }
      local_7c8._0_8_ = *(undefined8 *)pTVar2;
      *(undefined8 *)pTVar2 = 0;
      local_7c8._8_8_ = *(undefined8 *)&(this->CompletedDownloads).field_0x8;
      puVar4 = &(this->CompletedDownloads).field_0x10;
      *(undefined8 *)&(this->CompletedDownloads).field_0x8 = 0;
      if (local_7c8 + 0x10 != puVar4) {
        if (*(longlong *)&(this->CompletedDownloads).field_0x20 == 0) {
          local_7c8._16_8_ = *(undefined8 *)puVar4;
          local_7c8._24_8_ = *(undefined8 *)&(this->CompletedDownloads).field_0x18;
        }
        if (local_7a8 != (void *)0x0) {
          FMemory::Free(local_7a8);
        }
        local_7a8 = *(void **)&(this->CompletedDownloads).field_0x20;
        *(undefined8 *)&(this->CompletedDownloads).field_0x20 = 0;
        local_7a0 = *(int *)&(this->CompletedDownloads).field_0x28;
        local_79c = *(undefined4 *)&(this->CompletedDownloads).field_0x2c;
        *(undefined8 *)&(this->CompletedDownloads).field_0x28 = 0;
      }
      local_798 = *(undefined4 *)&(this->CompletedDownloads).field_0x30;
      local_794 = *(int *)&(this->CompletedDownloads).field_0x34;
      *(undefined4 *)&(this->CompletedDownloads).field_0x34 = 0;
      *(undefined4 *)&(this->CompletedDownloads).field_0x30 = 0xffffffff;
      if (*(longlong *)&(this->CompletedDownloads).field_0x40 == 0) {
        local_790 = *(undefined4 *)&(this->CompletedDownloads).field_0x38;
      }
      if (local_788 != (void *)0x0) {
        FMemory::Free(local_788);
      }
      local_788 = *(void **)&(this->CompletedDownloads).field_0x40;
      *(undefined8 *)&(this->CompletedDownloads).field_0x40 = 0;
      local_780 = *(undefined4 *)&(this->CompletedDownloads).field_0x48;
      *(undefined4 *)&(this->CompletedDownloads).field_0x48 = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->CompletedDownloadsCS);
    local_b50.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_7c8 + 0x10);
    local_b50._padding_._0_4_ = 0;
    local_b50._padding_._4_4_ = 1;
    local_b50.UnvisitedBitMask = 0xffffffff;
    local_b50.CurrentBitIndex = 0;
    local_b50.BaseBitIndex = 0;
    if (local_7a0 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_b50);
    }
    uStack_c28 = CONCAT44(local_b50._padding_._4_4_,(undefined4)local_b50._padding_);
    local_c30 = (longlong *)local_7c8;
    uStack_c18._4_4_ = local_b50.CurrentBitIndex;
    uStack_c18._0_4_ = local_b50.UnvisitedBitMask;
    uStack_c10._4_4_ = local_b50._28_4_;
    uStack_c10._0_4_ = local_b50.BaseBitIndex;
    local_c08 = local_7c8._8_4_ - local_794;
    pTStack_c20 = local_b50.Array;
    uStack_a40 = CONCAT44(uStack_c04,local_c08);
    TStack_a60.Array = local_b50.Array;
    local_a68 = local_c30;
    TStack_a60._padding_ = uStack_c28;
    TStack_a60._16_8_ = uStack_c18;
    TStack_a60._24_8_ = uStack_c10;
    pTVar45 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
              TConstSetBitIterator<FDefaultBitArrayAllocator>
                        (&local_838,(TBitArray<FDefaultBitArrayAllocator> *)(local_7c8 + 0x10),
                         local_7a0);
    local_c30 = (longlong *)local_7c8;
    uStack_c28 = pTVar45->_padding_;
    pTStack_c20 = pTVar45->Array;
    uStack_c18._0_4_ = pTVar45->UnvisitedBitMask;
    uStack_c18._4_4_ = pTVar45->CurrentBitIndex;
    uStack_c10 = *(undefined8 *)&pTVar45->BaseBitIndex;
    local_c08 = local_7c8._8_4_ - local_794;
    uStack_960 = CONCAT44(uStack_c04,local_c08);
    local_988 = local_c30;
    lStack_980 = uStack_c28;
    local_978 = pTStack_c20;
    uStack_970 = uStack_c18;
    local_968 = uStack_c10;
    while( true ) {
      plVar40 = local_a68;
      uVar62 = 0;
      if ((int)local_a68[1] - *(int *)((longlong)local_a68 + 0x34) != (int)uStack_a40) {
        local_c73 = 0;
        `TSparseArray<TSparseSetElement<TTuple<int,TSharedRef<BuildPatchServices::IDownload,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_c73);
      }
      uVar61 = 0;
      if (((TStack_a60.CurrentBitIndex == uStack_970._4_4_) && (TStack_a60.Array == local_978)) &&
         (plVar40 == local_988)) break;
      lVar33 = *plVar40;
      lVar38 = (longlong)TStack_a60.CurrentBitIndex * 0x20;
      local_ad8 = lVar38;
      local_ad0 = lVar33;
      pFVar46 = TMapBase<int,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuid,0>_>::
                FindChecked((TMapBase<int,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuid,0>_>
                             *)local_818,*(int *)(lVar38 + lVar33));
      local_c50 = pFVar46;
      uVar37 = CityHash64((char *)pFVar46,0x10);
      pFVar41 = TMapBase<FGuid,BuildPatchServices::FCloudChunkSource::FTaskInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FCloudChunkSource::FTaskInfo,0>_>
                ::FindOrAddImpl<FGuid_const_&>
                          ((TMapBase<FGuid,BuildPatchServices::FCloudChunkSource::FTaskInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FCloudChunkSource::FTaskInfo,0>_>
                            *)&local_748,(uint)uVar37,pFVar46);
      pFVar41->bQueuedForDownload = false;
      local_c38 = pFVar41;
      cVar27 = (**(code **)(**(longlong **)(lVar38 + 8 + lVar33) + 0x10))();
      if (cVar27 == '\0') {
        (**(code **)((longlong)*this->CloudChunkSourceStat + 0x18))
                  (this->CloudChunkSourceStat,pFVar46,&pFVar41->UrlUsed);
        if (1 < (byte)LogCloudChunkSource._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCloudChunkSource);
        }
LAB_1432f02af:
        TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
                  (&local_588,(FGuid *)(local_afc + 4),(bool *)pFVar46);
        iVar29 = (this->Configuration).MaxRetryCount;
        if ((-1 < iVar29) && (iVar29 <= pFVar41->RetryNum)) {
          pIVar12 = this->InstallerError;
          pcVar13 = *(code **)((longlong)*pIVar12 + 0x38);
          pFVar44 = FText::GetEmpty();
          local_ab0 = (pFVar44->TextData).Reference;
          if (local_ab0 != (ITextData *)0x0) {
            (**(code **)((longlong)*local_ab0 + 8))(local_ab0,local_af4);
          }
          local_aa8 = pFVar44->Flags;
          (*pcVar13)(pIVar12,1,DownloadErrorCodes::OutOfChunkRetries);
          LOCK();
          this->bShouldAbort = (FThreadSafeBool)0x1;
          UNLOCK();
        }
        pFVar41->RetryNum = pFVar41->RetryNum + 1;
        uVar53 = pFVar41->CloudDirUsed;
        uVar31 = uVar61;
        if ((int)uVar53 < (this->CloudDirFailureCount).ArrayNum) {
          uVar31 = ~uVar53 >> 0x1f;
        }
        if ((uVar31 == 0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar25)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        pFVar56 = (this->CloudDirFailureCount).AllocatorInstance.Data + (longlong)(int)uVar53 * 4;
        *(int *)pFVar56 = *(int *)pFVar56 + 1;
        uVar53 = pFVar41->CloudDirUsed;
        uVar31 = uVar61;
        if ((int)uVar53 < (this->CloudDirFailureCount).ArrayNum) {
          uVar31 = ~uVar53 >> 0x1f;
        }
        if ((uVar31 == 0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar25)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        if (0x6400000 <
            *(int *)((this->CloudDirFailureCount).AllocatorInstance.Data + (longlong)(int)uVar53 * 4
                    )) {
          uVar53 = pFVar41->CloudDirUsed;
          uVar31 = uVar61;
          if ((int)uVar53 < (this->CloudDirFailureCount).ArrayNum) {
            uVar31 = ~uVar53 >> 0x1f;
          }
          if ((uVar31 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          *(undefined4 *)
           ((this->CloudDirFailureCount).AllocatorInstance.Data + (longlong)(int)uVar53 * 4) =
               0x6400000;
        }
        if (((this->CloudDirFailureCount).ArrayNum < 1) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar25)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        pFVar60 = local_c70;
        uVar53 = 1;
        lVar33 = 1;
        iVar29 = *(int *)(this->CloudDirFailureCount).AllocatorInstance.Data;
        if (1 < (local_c70->CloudDirFailureCount).ArrayNum) {
          do {
            uVar61 = 0;
            if ((int)uVar53 < (pFVar60->CloudDirFailureCount).ArrayNum) {
              uVar61 = ~uVar53 >> 0x1f;
            }
            if ((uVar61 == 0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar25)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            uVar61 = uVar62;
            if (*(int *)((pFVar60->CloudDirFailureCount).AllocatorInstance.Data + lVar33 * 4) <
                iVar29) {
              uVar62 = 0;
              if ((int)uVar53 < (pFVar60->CloudDirFailureCount).ArrayNum) {
                uVar62 = ~uVar53 >> 0x1f;
              }
              if ((uVar62 == 0) &&
                 (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar25)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              iVar29 = *(int *)((pFVar60->CloudDirFailureCount).AllocatorInstance.Data + lVar33 * 4)
              ;
              uVar61 = uVar53;
            }
            uVar53 = uVar53 + 1;
            lVar33 = lVar33 + 1;
            pFVar41 = local_c38;
            uVar62 = uVar61;
          } while ((int)uVar53 < (pFVar60->CloudDirFailureCount).ArrayNum);
        }
        local_c70->CurrentBestCloudDir = uVar61;
        this = local_c70;
        if (2 < (byte)LogCloudChunkSource._0_1_) {
          uVar62 = 0;
          if ((int)uVar61 < (local_c70->Configuration).CloudRoots.ArrayNum) {
            uVar62 = ~uVar61 >> 0x1f;
          }
          if ((uVar62 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          this = local_c70;
          uVar62 = 0;
          if (pFVar41->CloudDirUsed < (local_c70->Configuration).CloudRoots.ArrayNum) {
            uVar62 = (uint)~pFVar41->CloudDirUsed >> 0x1f;
          }
          if ((uVar62 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCloudChunkSource);
        }
        dVar67 = FStatsCollector::GetSeconds();
        pFVar46 = local_c50;
        pFVar41->SecondsAtFail = dVar67;
        if (local_3c8.Elements._8_4_ != local_3c8.Elements._52_4_) {
          uVar37 = CityHash64((char *)local_c50,0x10);
          TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::RemoveImpl<FGuid>
                    (&local_3c8,(uint)uVar37,pFVar46);
        }
        if (local_5d8.Elements._8_4_ != local_5d8.Elements._52_4_) {
          uVar37 = CityHash64((char *)pFVar46,0x10);
          TSet<TTuple<FGuid,BuildPatchServices::FChunkUriResponse>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkUriResponse,0>,FDefaultSetAllocator>
          ::RemoveImpl<FGuid>(&local_5d8,(uint)uVar37,pFVar46);
        }
      }
      else {
        puVar43 = (undefined8 *)(**(code **)(**(longlong **)(lVar38 + 8 + lVar33) + 0x20))();
        local_bc0.Data = (FScriptContainerElement *)0x0;
        local_bb8 = *(int *)(puVar43 + 1);
        _Size = (size_t)local_bb8;
        _Src = (void *)*puVar43;
        if (local_bb8 == 0) {
          local_bb4 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,local_bb8,0,&local_bc0,local_bb8,&local_bb4);
          memcpy(local_bc0.Data,_Src,_Size);
        }
        local_378 = 0;
        uStack_370 = 0;
        local_368 = 0;
        cVar27 = (**(code **)((longlong)*this->ManifestSet + 0x38))
                           (this->ManifestSet,pFVar46,&local_378);
        if (cVar27 != '\0') {
          (**(code **)((longlong)*this->ChunkDataSerialization + 0x50))
                    (this->ChunkDataSerialization,&local_bc0,&local_378);
        }
        puVar43 = (undefined8 *)
                  (**(code **)((longlong)*this->ChunkDataSerialization + 0x10))
                            (this->ChunkDataSerialization,&local_bc0,&local_c72);
        bVar25 = local_c72 != '\0';
        if (local_c72 == '\0') {
          lVar33 = local_b68 + pFVar41->ExpectedSize;
          local_b68 = lVar33;
          if (local_748.Elements._8_4_ != local_748.Elements._52_4_) {
            uVar37 = CityHash64((char *)pFVar46,0x10);
            TSet<TTuple<FGuid,BuildPatchServices::FCloudChunkSource::FTaskInfo>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FCloudChunkSource::FTaskInfo,0>,FDefaultSetAllocator>
            ::RemoveImpl<FGuid>(&local_748,(uint)uVar37,pFVar46);
          }
          TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
                    (&local_4e8,(FGuid *)local_afc,(bool *)pFVar46);
          local_ae0 = puVar43;
          (**(code **)((longlong)*this->ChunkStore + 8))(this->ChunkStore,pFVar46,&local_ae0);
          (**(code **)((longlong)*this->CloudChunkSourceStat + 0x10))
                    (this->CloudChunkSourceStat,pFVar46);
          (**(code **)((longlong)*this->CloudChunkSourceStat + 0x30))
                    (this->CloudChunkSourceStat,lVar33);
        }
        else {
          (**(code **)((longlong)*this->CloudChunkSourceStat + 0x20))
                    (this->CloudChunkSourceStat,pFVar46,&pFVar41->UrlUsed);
          if (1 < (byte)LogCloudChunkSource._0_1_) {
            UE::Logging::Private::BasicLog<2>
                      (&::LOG_Static,(FLogCategoryBase *)&LogCloudChunkSource);
          }
          if (puVar43 != (undefined8 *)0x0) {
            (**(code **)*puVar43)(puVar43,1);
          }
        }
        if (local_bc0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_bc0.Data);
        }
        if (bVar25) goto LAB_1432f02af;
        dVar67 = pFVar41->SecondsAtRequested;
        dVar66 = FStatsCollector::GetSeconds();
        local_bf0 = local_bf0 + 1;
        dVar66 = dVar66 - dVar67;
        pFVar15 = (FTaskInfo *)((double)pFVar15 + dVar23);
        pFVar58 = (FGuid *)((double)pFVar58 + dVar23);
        dVar19 = dVar19 + dVar66;
        dVar20 = dVar20 + dVar66 * dVar66;
      }
      pFVar18 = (FTaskInfo *)((double)pFVar18 + dVar23);
      dVar17 = dVar17 + dVar23;
      if (local_818._8_4_ != local_7e4) {
        FVar49 = (ForElementType<FSetElementId>)local_7e0;
        if (local_7d8 != (ForElementType<FSetElementId>)0x0) {
          FVar49 = local_7d8;
        }
        uVar62 = *(uint *)((longlong)FVar49 +
                          (longlong)(int)(local_7d0 - 1U & *(uint *)(local_ad8 + local_ad0)) * 4);
        if (uVar62 != 0xffffffff) {
LAB_1432f0780:
          if (*(uint *)(local_818._0_8_ + (longlong)(int)uVar62 * 0x1c) !=
              *(uint *)(local_ad8 + local_ad0)) goto code_r0x0001432f0794;
          if (((int)uVar62 < 0) || ((int)local_7f0 <= (int)uVar62)) {
LAB_1432f07de:
            bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("Elements.IsValidIndex(ElementIndex)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                ,0x2ab,
                                L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
            if (bVar25) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
          }
          else {
            FVar48 = (ForElementType<unsigned_int>)((longlong)local_818 + 0x10);
            if (local_7f8 != (ForElementType<unsigned_int>)0x0) {
              FVar48 = local_7f8;
            }
            uVar61 = uVar62;
            if ((int)uVar62 < 0) {
              uVar61 = uVar62 + 0x1f;
            }
            if ((*(uint *)((longlong)FVar48 + (longlong)((int)uVar61 >> 5) * 4) >> (uVar62 & 0x1f) &
                1) == 0) goto LAB_1432f07de;
          }
          uVar21 = local_818._0_8_;
          FVar49 = (ForElementType<FSetElementId>)local_7e0;
          if (local_7d8 != (ForElementType<FSetElementId>)0x0) {
            FVar49 = local_7d8;
          }
          pFVar56 = (FScriptContainerElement *)
                    ((longlong)FVar49 +
                    (longlong)*(int *)(local_818._0_8_ + (longlong)(int)uVar62 * 0x1c + 0x18) * 4);
          while( true ) {
            uVar61 = *(uint *)pFVar56;
            if ((uVar61 == 0xffffffff) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("NextElementIndex != INDEX_NONE",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                    ,0x2b5,L"Corrupt hash"), bVar25)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            if (uVar61 == uVar62) break;
            pFVar56 = (FScriptContainerElement *)
                      (local_818._0_8_ + (longlong)(int)uVar61 * 0x1c + 0x14);
          }
          *(uint *)pFVar56 = *(uint *)(uVar21 + (longlong)(int)uVar62 * 0x1c + 0x14);
          TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::RemoveAtUninitialized
                    ((TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_818,uVar62,1);
        }
      }
LAB_1432f0890:
      TStack_a60.UnvisitedBitMask = TStack_a60.UnvisitedBitMask & ~TStack_a60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a60);
    }
    if (((int)(local_588.Elements._8_4_ - local_588.Elements._52_4_) < 1) &&
       (local_818._8_4_ - local_7e4 < 1)) {
      uVar53 = 0;
    }
    else {
      uVar53 = 1;
    }
    cVar27 = (char)uVar53;
    uVar31 = 1;
    uStack_c18._4_4_ = uVar62;
    uStack_c10._0_4_ = uVar62;
    if (local_7f0 != 0) {
      FVar48 = (ForElementType<unsigned_int>)((longlong)local_818 + 0x10);
      if (local_7f8 != (ForElementType<unsigned_int>)0x0) {
        FVar48 = local_7f8;
      }
      uVar7 = *(uint *)FVar48;
      uVar61 = uVar62;
      while (uVar7 == 0) {
        lVar33 = (longlong)(int)uVar61;
        uStack_c10._0_4_ = (uint)uStack_c10 + 0x20;
        uVar61 = uVar61 + 1;
        uStack_c18._4_4_ = local_7f0;
        if ((int)((local_7f0 - 1) + ((int)(local_7f0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar61)
        goto LAB_1432f0972;
        uVar7 = ((uint *)((longlong)FVar48 + 4))[lVar33];
      }
      uVar31 = -uVar7 & uVar7;
      uVar3 = (ulonglong)uVar31 * 2 + 1;
      lVar33 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar33 == 0; lVar33 = lVar33 + -1) {
        }
      }
      local_af0 = (uint)lVar33;
      uStack_c18._4_4_ = (local_af0 - 1) + (uint)uStack_c10;
      if ((int)local_7f0 < (int)uStack_c18._4_4_) {
        uStack_c18._4_4_ = local_7f0;
      }
    }
LAB_1432f0972:
    local_c30 = (longlong *)local_818;
    pTStack_c20 = (TBitArray<FDefaultBitArrayAllocator> *)(local_818 + 0x10);
    uStack_c28 = CONCAT44(uVar31,uVar61);
    uStack_c18._0_4_ = 0xffffffff;
    uStack_c10._4_4_ = local_89c;
    TStack_a98._padding_ = uStack_c28;
    TStack_a98.BaseBitIndex = (uint)uStack_c10;
    TStack_a98._28_4_ = local_89c;
    TStack_a98.UnvisitedBitMask = 0xffffffff;
    TStack_a98.CurrentBitIndex = uStack_c18._4_4_;
    local_c50 = pFVar58;
    local_c38 = pFVar15;
    local_aa0 = local_c30;
    TStack_a98.Array = pTStack_c20;
    uVar61 = uStack_c18._4_4_;
    if ((int)uStack_c18._4_4_ < (int)local_7f0) {
      do {
        cVar27 = '\0';
        if ((char)uVar53 == '\0') break;
        pFVar46 = (FGuid *)(*local_aa0 + 4 + (longlong)(int)uVar61 * 0x1c);
        uVar37 = CityHash64((char *)pFVar46,0x10);
        iVar29 = TSet<TTuple<FGuid,BuildPatchServices::FCloudChunkSource::FTaskInfo>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FCloudChunkSource::FTaskInfo,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<FGuid>(&local_748,(uint)uVar37,pFVar46);
        if ((iVar29 == -1) ||
           (lVar33 = local_748.Elements._0_8_ + (longlong)iVar29 * 0x48, lVar33 == 0)) {
          local_ac8 = pFVar46;
          TSet<TTuple<FGuid,BuildPatchServices::FCloudChunkSource::FTaskInfo>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FCloudChunkSource::FTaskInfo,0>,FDefaultSetAllocator>
          ::EmplaceByHash<TKeyInitializer<FGuid_const_&>_>
                    (&local_748,(uint)&local_ba0,
                     (TKeyInitializer<FGuid_const_&> *)(uVar37 & 0xffffffff),(bool *)&local_ac8);
          lVar33 = local_748.Elements._0_8_ + (longlong)local_ba0 * 0x48;
        }
        if (*(int *)(lVar33 + 0x28) == 0) {
          uVar53 = uVar62;
        }
        cVar27 = (char)uVar53;
        TStack_a98.UnvisitedBitMask = TStack_a98.UnvisitedBitMask & ~TStack_a98._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a98);
        uVar61 = TStack_a98.CurrentBitIndex;
      } while (TStack_a98.CurrentBitIndex < (TStack_a98.Array)->NumBits);
    }
    uVar37 = FStatsCollector::GetCycles();
    dVar67 = FStatsCollector::CyclesToSeconds(uVar37 - this->CyclesAtLastData);
    if ((cVar27 == '\0') || (dVar67 <= (double)(this->Configuration).DisconnectedDelay)) {
      bVar25 = false;
    }
    else {
      bVar25 = true;
    }
    if (0.0 < dVar17) {
      dVar67 = (double)pFVar58 / dVar17;
    }
    else {
      dVar67 = 0.0;
    }
    EVar32 = GetDownloadHealth(bVar25,&(this->Configuration).HealthPercentages,(float)dVar67);
    if (local_c58 != EVar32) {
      local_c58 = EVar32;
      (**(code **)((longlong)*this->CloudChunkSourceStat + 0x40))(this->CloudChunkSourceStat,EVar32)
      ;
    }
    if (0 < local_7c8._8_4_ - local_794) {
      (**(code **)((longlong)*this->CloudChunkSourceStat + 0x48))
                (this->CloudChunkSourceStat,(float)dVar67);
    }
    if (__real_4008000000000000 <= (double)pFVar18) {
      local_b60 = (double)pFVar15 / (double)pFVar18;
      local_c38 = (FTaskInfo *)0x0;
      pFVar15 = (FTaskInfo *)0x0;
      pFVar18 = (FTaskInfo *)0x0;
    }
    EVar32 = GetDownloadHealth(bVar25,&(this->Configuration).HealthPercentages,(float)local_b60);
    puVar63 = (uint *)0x0;
    uVar62 = 0;
    if (bVar65) {
      local_c68.A = 0;
      local_c68.B = 0;
      local_c68.C = 0;
      local_c68.D = 0;
      pFVar46 = GetNextTask(this,&local_998,
                            (TMap<FGuid,BuildPatchServices::FCloudChunkSource::FTaskInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FCloudChunkSource::FTaskInfo,0>_>
                             *)&local_748,
                            (TMap<int,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuid,0>_>
                             *)local_818,&local_678,&local_418,&local_588,&local_4e8,&local_b78,
                            EVar32);
      local_c68.A = pFVar46->A;
      local_c68.B = pFVar46->B;
      local_c68.C = pFVar46->C;
      local_c68.D = pFVar46->D;
      if (((pFVar46->B != 0 || pFVar46->D != 0) || pFVar46->C != 0) || pFVar46->A != 0) {
        while( true ) {
          uVar37 = CityHash64((char *)&local_c68,0x10);
          if (local_5d8.Elements._8_4_ == local_5d8.Elements._52_4_) break;
          FVar49 = (ForElementType<FSetElementId>)&local_5d8.Hash;
          if (local_5d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar49 = local_5d8.Hash.SecondaryData;
          }
          uVar61 = *(uint *)((longlong)FVar49 +
                            ((ulonglong)(local_5d8.HashSize - 1) & uVar37 & 0xffffffff) * 4);
          if (uVar61 == 0xffffffff) break;
          while (puVar52 = (uint *)((longlong)(int)uVar61 * 0x80 + local_5d8.Elements._0_8_),
                ((local_c68.D != puVar52[3] || local_c68.C != puVar52[2]) ||
                local_c68.B != puVar52[1]) || local_c68.A != *puVar52) {
            uVar61 = puVar52[0x1e];
            if (uVar61 == 0xffffffff) goto LAB_1432f0f67;
          }
          puVar57 = puVar52 + 4;
          if (puVar52 == (uint *)0x0) {
            puVar57 = puVar63;
          }
          if (puVar57 == (uint *)0x0) break;
          uVar37 = CityHash64((char *)&local_c68,0x10);
          if (local_748.Elements._8_4_ != local_748.Elements._52_4_) {
            FVar49 = (ForElementType<FSetElementId>)&local_748.Hash;
            if (local_748.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar49 = local_748.Hash.SecondaryData;
            }
            uVar61 = *(uint *)((longlong)FVar49 +
                              ((ulonglong)(local_748.HashSize - 1) & uVar37 & 0xffffffff) * 4);
            if (uVar61 != 0xffffffff) {
              do {
                puVar52 = (uint *)(local_748.Elements._0_8_ + (longlong)(int)uVar61 * 0x48);
                if (((local_c68.D == puVar52[3] &&
                     local_c68.C ==
                     *(uint *)(local_748.Elements._0_8_ + 8 + (longlong)(int)uVar61 * 0x48)) &&
                    local_c68.B == puVar52[1]) && local_c68.A == *puVar52) {
                  if (puVar52 != (uint *)0x0) goto LAB_1432f0dca;
                  break;
                }
                uVar61 = puVar52[0x10];
              } while (uVar61 != 0xffffffff);
            }
          }
          local_a70 = &local_c68;
          TSet<TTuple<FGuid,BuildPatchServices::FCloudChunkSource::FTaskInfo>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FCloudChunkSource::FTaskInfo,0>,FDefaultSetAllocator>
          ::EmplaceByHash<TKeyInitializer<FGuid_const_&>_>
                    (&local_748,(uint)&local_b9c,
                     (TKeyInitializer<FGuid_const_&> *)(uVar37 & 0xffffffff),(bool *)&local_a70);
          puVar52 = (uint *)(local_748.Elements._0_8_ + (longlong)local_b9c * 0x48);
LAB_1432f0dca:
          *(undefined1 *)(puVar52 + 4) = 1;
          uVar61 = puVar57[4] - 1;
          if (puVar57[4] == 0) {
            uVar61 = uVar62;
          }
          ::FString::AssignRange((FString *)(puVar52 + 6),*(wchar_t **)(puVar57 + 2),uVar61);
          uVar61 = (**(code **)((longlong)*this->ManifestSet + 0x28))(this->ManifestSet,&local_c68);
          puVar52[0xb] = uVar61;
          dVar67 = FStatsCollector::GetSeconds();
          *(double *)(puVar52 + 0xc) = dVar67;
          local_b98 = (**(code **)((longlong)*this->DownloadService + 0x10))
                                (this->DownloadService,puVar52 + 6,puVar57 + 6,
                                 &this->OnDownloadCompleteDelegate);
          local_9c8 = &local_b98;
          local_9c0 = &local_c68;
          TSet<TTuple<int,FGuid>,TDefaultMapHashableKeyFuncs<int,FGuid,0>,FDefaultSetAllocator>::
          Emplace<TPairInitializer<int_const_&,FGuid_const_&>_>
                    ((TSet<TTuple<int,FGuid>,TDefaultMapHashableKeyFuncs<int,FGuid,0>,FDefaultSetAllocator>
                      *)local_818,(TPairInitializer<int_const_&,FGuid_const_&> *)local_aec,
                     (bool *)&local_9c8);
          if (local_418.Elements._8_4_ != local_418.Elements._52_4_) {
            uVar37 = CityHash64((char *)&local_c68,0x10);
            TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::RemoveImpl<FGuid>
                      (&local_418,(uint)uVar37,&local_c68);
          }
          if (local_588.Elements._8_4_ != local_588.Elements._52_4_) {
            uVar37 = CityHash64((char *)&local_c68,0x10);
            TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::RemoveImpl<FGuid>
                      (&local_588,(uint)uVar37,&local_c68);
          }
          (**(code **)((longlong)*this->CloudChunkSourceStat + 8))
                    (this->CloudChunkSourceStat,&local_c68);
          pFVar46 = GetNextTask(this,&local_998,
                                (TMap<FGuid,BuildPatchServices::FCloudChunkSource::FTaskInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FCloudChunkSource::FTaskInfo,0>_>
                                 *)&local_748,
                                (TMap<int,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuid,0>_>
                                 *)local_818,&local_678,&local_418,&local_588,&local_4e8,&local_b78,
                                EVar32);
          local_c68.A = pFVar46->A;
          local_c68.B = pFVar46->B;
          local_c68.C = pFVar46->C;
          local_c68.D = pFVar46->D;
          if (((pFVar46->B == 0 && pFVar46->D == 0) && pFVar46->C == 0) && pFVar46->A == 0) break;
        }
      }
    }
LAB_1432f0f67:
    iVar29 = ((local_588.Elements._8_4_ - local_588.Elements._52_4_) - local_7e4) + local_818._8_4_;
    if (local_c00 != iVar29) {
      local_c00 = iVar29;
      (**(code **)((longlong)*this->CloudChunkSourceStat + 0x50))();
    }
    uVar61 = local_7f0;
    if (10 < local_bf0) {
      bVar25 = false;
      uVar53 = 1;
      uStack_c18._4_4_ = uVar62;
      if (local_7f0 != 0) {
        FVar48 = (ForElementType<unsigned_int>)((longlong)local_818 + 0x10);
        if (local_7f8 != (ForElementType<unsigned_int>)0x0) {
          FVar48 = local_7f8;
        }
        uVar31 = *(uint *)FVar48;
        puVar52 = puVar63;
        uVar62 = 0;
        while (uVar31 == 0) {
          iVar29 = (int)puVar52;
          puVar63 = (uint *)(ulonglong)((int)puVar63 + 0x20);
          uVar62 = iVar29 + 1;
          puVar52 = (uint *)(ulonglong)uVar62;
          uStack_c18._4_4_ = local_7f0;
          if ((int)((local_7f0 - 1) + ((int)(local_7f0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar62)
          goto LAB_1432f1043;
          uVar31 = ((uint *)((longlong)FVar48 + 4))[iVar29];
        }
        uVar53 = -uVar31 & uVar31;
        uVar3 = (ulonglong)uVar53 * 2 + 1;
        lVar33 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar33 == 0; lVar33 = lVar33 + -1) {
          }
        }
        local_aec._4_4_ = (undefined4)lVar33;
        uStack_c18._4_4_ = (int)puVar63 + -1 + local_aec._4_4_;
        if ((int)local_7f0 < (int)uStack_c18._4_4_) {
          uStack_c18._4_4_ = local_7f0;
        }
      }
LAB_1432f1043:
      local_c08 = local_818._8_4_ - local_7e4;
      local_c30 = (longlong *)local_818;
      pTStack_c20 = (TBitArray<FDefaultBitArrayAllocator> *)(local_818 + 0x10);
      uStack_c28 = CONCAT44(uVar53,uVar62);
      uStack_c18._0_4_ = 0xffffffff;
      uVar62 = local_7f0 & 0xffffffe0;
      TStack_a30._padding_ = uStack_c28;
      uStack_c10._0_4_ = (uint)puVar63;
      uStack_c10._4_4_ = local_87c;
      uStack_a10 = CONCAT44(uStack_c04,local_c08);
      iVar29 = (int)local_7f0 >> 5;
      bVar47 = (byte)local_7f0;
      TStack_a30.BaseBitIndex = (uint)uStack_c10;
      TStack_a30._28_4_ = local_87c;
      TStack_a30.UnvisitedBitMask = 0xffffffff;
      TStack_a30.CurrentBitIndex = uStack_c18._4_4_;
      local_a38 = local_c30;
      TStack_a30.Array = pTStack_c20;
      if (((int)local_7f0 < 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar26)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      dVar67 = __real_4010000000000000;
      if (uVar61 != local_7f0) {
        FVar48 = (ForElementType<unsigned_int>)((longlong)local_818 + 0x10);
        if (local_7f8 != (ForElementType<unsigned_int>)0x0) {
          FVar48 = local_7f8;
        }
        uVar61 = -1 << (bVar47 & 0x1f) & *(uint *)((longlong)FVar48 + (longlong)iVar29 * 4);
        while (uVar61 == 0) {
          lVar33 = (longlong)iVar29;
          uVar62 = uVar62 + 0x20;
          iVar29 = iVar29 + 1;
          uVar61 = local_7f0;
          if ((int)((local_7f0 - 1) + ((int)(local_7f0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar29)
          goto LAB_1432f1170;
          uVar61 = ((uint *)((longlong)FVar48 + 4))[lVar33];
        }
        uVar3 = (ulonglong)(-uVar61 & uVar61) * 2 + 1;
        lVar33 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar33 == 0; lVar33 = lVar33 + -1) {
          }
        }
        local_aec._8_4_ = (undefined4)lVar33;
        uVar61 = (uVar62 - 1) + local_aec._8_4_;
        if ((int)local_7f0 < (int)uVar61) {
          uVar61 = local_7f0;
        }
      }
LAB_1432f1170:
      while( true ) {
        plVar40 = local_a38;
        if ((int)local_a38[1] - *(int *)((longlong)local_a38 + 0x34) != (int)uStack_a10) {
          local_c71 = 0;
          `TSparseArray<TSparseSetElement<TTuple<int,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_c71);
        }
        lVar33 = (longlong)TStack_a30.CurrentBitIndex;
        if (((TStack_a30.CurrentBitIndex == uVar61) &&
            (TStack_a30.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_818 + 0x10))) &&
           (plVar40 == (longlong *)local_818)) break;
        lVar38 = *plVar40;
        pFVar58 = (FGuid *)(lVar38 + 4 + lVar33 * 0x1c);
        uVar37 = CityHash64((char *)pFVar58,0x10);
        iVar29 = TSet<TTuple<FGuid,BuildPatchServices::FCloudChunkSource::FTaskInfo>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FCloudChunkSource::FTaskInfo,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<FGuid>(&local_748,(uint)uVar37,pFVar58);
        if ((iVar29 == -1) ||
           (lVar55 = local_748.Elements._0_8_ + (longlong)iVar29 * 0x48, lVar55 == 0)) {
          local_a78 = pFVar58;
          TSet<TTuple<FGuid,BuildPatchServices::FCloudChunkSource::FTaskInfo>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FCloudChunkSource::FTaskInfo,0>,FDefaultSetAllocator>
          ::EmplaceByHash<TKeyInitializer<FGuid_const_&>_>
                    (&local_748,(uint)&local_b94,
                     (TKeyInitializer<FGuid_const_&> *)(uVar37 & 0xffffffff),(bool *)&local_a78);
          lVar55 = local_748.Elements._0_8_ + (longlong)local_b94 * 0x48;
        }
        this = local_c70;
        if (*(int *)(lVar55 + 0x28) == 0) {
          dVar66 = *(double *)(lVar55 + 0x30);
          dVar68 = FStatsCollector::GetSeconds();
          this = local_c70;
          dVar16 = (dVar23 / (double)local_bf0) * dVar19;
          dVar69 = (double)(local_c70->Configuration).TcpZeroWindowMinimumSeconds;
          dVar14 = SQRT((dVar23 / (double)local_bf0) * dVar20 - dVar16 * dVar16) * dVar67 + dVar16;
          if (dVar14 <= dVar69) {
            dVar14 = dVar69;
          }
          if ((dVar14 < dVar68 - dVar66) &&
             (bVar26 = ::FString::EndsWith((FString *)(lVar55 + 0x18),L".chunk",6,IgnoreCase),
             bVar26)) {
            bVar25 = true;
            (**(code **)((longlong)*this->DownloadService + 0x18))
                      (this->DownloadService,*(undefined4 *)(lVar33 * 0x1c + lVar38));
            (**(code **)((longlong)*this->CloudChunkSourceStat + 0x28))
                      (this->CloudChunkSourceStat,pFVar58,lVar55 + 0x18,SUB84(dVar16,0));
          }
        }
        TStack_a30.UnvisitedBitMask = TStack_a30.UnvisitedBitMask & ~TStack_a30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a30);
      }
      pFVar15 = local_c38;
      pFVar58 = local_c50;
      uVar70 = ___xmm_00000000ffffffff0000008000000000;
      uVar71 = _UNK_150631d98;
      if (bVar25) {
        dVar19 = 0.0;
        local_bf0 = 0;
        dVar20 = 0.0;
      }
    }
    uVar24 = __real_3dcccccd;
    FVar6 = this->bIsPaused;
    while ((FVar6 != (FThreadSafeBool)0x0 &&
           (pFVar58 = local_c50, this->bShouldAbort == (FThreadSafeBool)0x0))) {
      (**(code **)((longlong)*this->Platform + 0x10))(this->Platform,uVar24);
      FVar6 = this->bIsPaused;
      pFVar58 = local_c50;
    }
    (**(code **)((longlong)*this->Platform + 0x10))(this->Platform,__real_3c23d70a);
    local_780 = 0;
    if (local_788 != (void *)0x0) {
      FMemory::Free(local_788);
    }
    TSparseArray<TSparseSetElement<TTuple<int,TSharedRef<BuildPatchServices::IDownload,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,TSharedRef<BuildPatchServices::IDownload,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,TSharedRef<BuildPatchServices::IDownload,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_7c8);
    if (local_b58 != (FGuid *)0x0) {
      FMemory::Free(local_b58);
    }
    local_428 = local_428 & 0xffffffff00000000;
    if (pvStack_430 != (void *)0x0) {
      FMemory::Free(pvStack_430);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&TStack_470);
    if (pvStack_480 != (void *)0x0) {
      FMemory::Free(pvStack_480);
    }
    if (local_b80 != (FGuid *)0x0) {
      FMemory::Free(local_b80);
    }
    if (local_778 != (code *)0x0) {
      ppTVar50 = &pTStack_768;
      if (local_750 != (TBitArray<FDefaultBitArrayAllocator> **)0x0) {
        ppTVar50 = local_750;
      }
      (*(code *)((*ppTVar50)->AllocatorInstance).SecondaryData)();
    }
    local_628.HashSize = 0;
    if (local_628.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_628.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_628.Elements);
    FVar6 = this->bShouldAbort;
    lVar33 = local_be8;
    pTVar34 = local_c48;
    pTVar59 = local_c40;
    EVar32 = local_c58;
  } while( true );
code_r0x0001432f0794:
  uVar62 = *(uint *)(local_818._0_8_ + (longlong)(int)uVar62 * 0x1c + 0x14);
  if (uVar62 == 0xffffffff) goto LAB_1432f0890;
  goto LAB_1432f0780;
}

