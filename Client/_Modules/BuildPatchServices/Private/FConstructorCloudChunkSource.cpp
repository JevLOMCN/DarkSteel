// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 11

// <lambda_invoker_cdecl> @ 143270760

void __cdecl
`BuildPatchServices::FConstructorCloudChunkSource::CreateRequest'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(bool param_1)

{
  return;
}

// FConstructorCloudChunkSource @ 14327f320

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FConstructorCloudChunkSource * __thiscall
BuildPatchServices::FConstructorCloudChunkSource::FConstructorCloudChunkSource
          (FConstructorCloudChunkSource *this,FConstructorCloudChunkSourceConfig *param_1,
          IDownloadService *param_2,IChunkDataSerialization *param_3,ICloudChunkSourceStat *param_4,
          IBuildManifestSet *param_5,IDownloadConnectionCount *param_6,IMessagePump *param_7)

{
  int iVar1;
  FDownloadDelegates *pFVar2;
  FDownloadDelegates *pFVar3;
  TRawPtrProxy<BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates> local_res8;
  
  pFVar3 = (FDownloadDelegates *)0x0;
  (this->Configuration).CloudRoots.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined ***)this = &___7FConstructorCloudChunkSource_BuildPatchServices__6B_;
  (this->Configuration).CloudRoots.AllocatorInstance.Data =
       (param_1->CloudRoots).AllocatorInstance.Data;
  (param_1->CloudRoots).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Configuration).CloudRoots.ArrayNum = (param_1->CloudRoots).ArrayNum;
  (this->Configuration).CloudRoots.ArrayMax = (param_1->CloudRoots).ArrayMax;
  (param_1->CloudRoots).ArrayNum = 0;
  (param_1->CloudRoots).ArrayMax = 0;
  iVar1 = param_1->MaxRetryCount;
  (this->Configuration).RetryDelayTimes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Configuration).MaxRetryCount = iVar1;
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
  pFVar2 = ::operator_new(8);
  if (pFVar2 != (FDownloadDelegates *)0x0) {
    pFVar2->CloudSource = this;
    pFVar3 = pFVar2;
  }
  local_res8.Object = pFVar3;
  TSharedRef<BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates,1>::
  TSharedRef<BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates,1><BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates>
            (&this->DownloadDelegates,&local_res8);
  TDelegate<void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>::
  CreateThreadSafeSP<BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates>
            (&this->OnDownloadProgressDelegate,&this->DownloadDelegates,(pmf_31737394)0x1432df330);
  TDelegate<void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>
  ::CreateThreadSafeSP<BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates>
            (&this->OnDownloadCompleteDelegate,&this->DownloadDelegates,(pmf_ae7fa123)0x1432dec10);
  this->CloudChunkSourceStat = param_4;
  this->ManifestSet = param_5;
  this->DownloadCount = param_6;
  this->MessagePump = param_7;
  this->DownloadService = param_2;
  this->ChunkDataSerialization = param_3;
  *(undefined8 *)&this->WakeupMainThreadFn = 0;
  *(undefined8 *)&(this->WakeupMainThreadFn).field_0x28 = 0;
  this->CyclesAtLastData = (atomic<__int64>)0x0;
  this->NextReadId = (atomic<int>)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CompletedRequestsCS,4000);
  *(undefined8 *)&this->CompletedDownloads = 0;
  *(undefined8 *)&(this->CompletedDownloads).field_0x8 = 0;
  *(undefined8 *)&(this->CompletedDownloads).field_0x20 = 0;
  *(undefined4 *)&(this->CompletedDownloads).field_0x28 = 0;
  *(undefined4 *)&(this->CompletedDownloads).field_0x2c = 0x80;
  *(undefined4 *)&(this->CompletedDownloads).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CompletedDownloads).field_0x34 = 0;
  *(undefined8 *)&(this->CompletedDownloads).field_0x40 = 0;
  *(undefined4 *)&(this->CompletedDownloads).field_0x48 = 0;
  *(undefined8 *)&this->CompletedRequests = 0;
  *(undefined8 *)&(this->CompletedRequests).field_0x8 = 0;
  *(undefined8 *)&(this->CompletedRequests).field_0x20 = 0;
  *(undefined4 *)&(this->CompletedRequests).field_0x28 = 0;
  *(undefined4 *)&(this->CompletedRequests).field_0x2c = 0x80;
  *(undefined4 *)&(this->CompletedRequests).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CompletedRequests).field_0x34 = 0;
  *(undefined8 *)&(this->CompletedRequests).field_0x40 = 0;
  *(undefined4 *)&(this->CompletedRequests).field_0x48 = 0;
  this->CurrentBestCloudDir = 0;
  (this->CloudDirFailureCount).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CloudDirFailureCount).ArrayNum = 0;
  (this->CloudDirFailureCount).ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->ReadQueueCS,4000);
  (this->ReadQueue).ArrayNum = 0;
  (this->ReadQueue).ArrayMax = 0;
  *(undefined8 *)&(this->InFlightDownloads).field_0x8 = 0;
  (this->ReadQueue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)&this->InFlightDownloads = 0;
  *(undefined8 *)&(this->InFlightDownloads).field_0x20 = 0;
  *(undefined4 *)&(this->InFlightDownloads).field_0x28 = 0;
  *(undefined4 *)&(this->InFlightDownloads).field_0x2c = 0x80;
  *(undefined4 *)&(this->InFlightDownloads).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->InFlightDownloads).field_0x34 = 0;
  *(undefined8 *)&(this->InFlightDownloads).field_0x40 = 0;
  *(undefined4 *)&(this->InFlightDownloads).field_0x48 = 0;
  *(undefined8 *)&(this->InFlightURLRequests).field_0x8 = 0;
  *(undefined8 *)&this->InFlightURLRequests = 0;
  *(undefined8 *)&(this->InFlightURLRequests).field_0x20 = 0;
  *(undefined4 *)&(this->InFlightURLRequests).field_0x28 = 0;
  *(undefined4 *)&(this->InFlightURLRequests).field_0x2c = 0x80;
  *(undefined4 *)&(this->InFlightURLRequests).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->InFlightURLRequests).field_0x34 = 0;
  *(undefined8 *)&(this->InFlightURLRequests).field_0x40 = 0;
  *(undefined4 *)&(this->InFlightURLRequests).field_0x48 = 0;
  (this->ChunkSuccessTracker).LastAverage = 1.0;
  (this->ChunkSuccessTracker).ImmediateAccumulatedValue = 0.0;
  (this->ChunkSuccessTracker).ImmediateValueCount = 0.0;
  (this->ChunkSuccessTracker).TotalAccumulatedValue = 0.0;
  (this->ChunkSuccessTracker).TotalValueCount = 0.0;
  this->LastSeenHealth = NUM_Values;
  this->LastSeenSuccessRate = -1.0;
  iVar1 = (this->Configuration).CloudRoots.ArrayNum;
  this->TotalBytes = 0;
  this->StartTime = -1.0;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumZeroed(&this->CloudDirFailureCount,iVar1,Default);
  return this;
}

// ~FConstructorCloudChunkSource @ 143287f60

void __thiscall
BuildPatchServices::FConstructorCloudChunkSource::~FConstructorCloudChunkSource
          (FConstructorCloudChunkSource *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  *(undefined ***)this = &___7FConstructorCloudChunkSource_BuildPatchServices__6B_;
  Abort(this);
  *(undefined4 *)&(this->InFlightURLRequests).field_0x48 = 0;
  pvVar1 = *(void **)&(this->InFlightURLRequests).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->InFlightURLRequests);
  *(undefined4 *)&(this->InFlightDownloads).field_0x48 = 0;
  pvVar1 = *(void **)&(this->InFlightDownloads).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->InFlightDownloads);
  pFVar2 = (this->ReadQueue).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ReadQueueCS);
  pFVar2 = (this->CloudDirFailureCount).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->CompletedRequests).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CompletedRequests).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,BuildPatchServices::FChunkUriResponse>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,BuildPatchServices::FChunkUriResponse>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,BuildPatchServices::FChunkUriResponse>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CompletedRequests);
  *(undefined4 *)&(this->CompletedDownloads).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CompletedDownloads).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TSharedRef<BuildPatchServices::IDownload,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TSharedRef<BuildPatchServices::IDownload,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TSharedRef<BuildPatchServices::IDownload,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CompletedDownloads);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CompletedRequestsCS);
  if (*(longlong *)&this->WakeupMainThreadFn != 0) {
    plVar3 = *(longlong **)&(this->WakeupMainThreadFn).field_0x28;
    plVar4 = (longlong *)&(this->WakeupMainThreadFn).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDownloadCompleteDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDownloadProgressDelegate);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DownloadDelegates).SharedReferenceCount.ReferenceController);
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
  *(undefined ***)this = &___7IConstructorChunkSource_BuildPatchServices__6B_;
  return;
}

// operator() @ 14329b1f0

void __thiscall
`BuildPatchServices::FConstructorCloudChunkSource::Tick'::__l74::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  longlong *plVar2;
  FGuid *pFVar3;
  void *pvVar4;
  char cVar5;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  lVar1 = *(longlong *)this;
  local_18 = *(undefined4 *)(lVar1 + 0x10);
  uStack_14 = *(undefined4 *)(lVar1 + 0x14);
  uStack_10 = *(undefined4 *)(lVar1 + 0x18);
  uStack_c = *(undefined4 *)(lVar1 + 0x1c);
  cVar5 = (**(code **)(**(longlong **)((longlong)this + 0x58) + 0x48))
                    (*(longlong **)((longlong)this + 0x58),(longlong)this + 8,&local_18,
                     (longlong)this + 0x60);
  plVar2 = *(longlong **)((longlong)this + 0x50);
  if (cVar5 == '\0') {
    (**(code **)(*plVar2 + 0x20))(plVar2,*(longlong *)this,*(longlong *)this + 0x48,9);
  }
  else {
    (**(code **)(*plVar2 + 0x10))(plVar2,*(undefined8 *)this);
  }
  pFVar3 = *(FGuid **)this;
  TDelegate<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy>::Execute
            ((TDelegate<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy> *)
             (pFVar3 + 2),pFVar3,false,cVar5 == '\0',*(void **)&pFVar3[3].C);
  pvVar4 = *(void **)this;
  if (pvVar4 != (void *)0x0) {
    if (*(void **)((longlong)pvVar4 + 0x48) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)pvVar4 + 0x48));
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)pvVar4 + 0x20));
    ::operator_delete(pvVar4,0x80);
  }
  return;
}

// operator() @ 1432a8730

void __thiscall
`BuildPatchServices::FConstructorCloudChunkSource::Tick'::__l164::<lambda_2>::operator()
          (void *this,FChunkUriResponse *param_1)

{
  longlong lVar1;
  code *pcVar2;
  void *pvVar3;
  FScriptContainerElement *pFVar4;
  undefined8 uVar5;
  longlong *plVar6;
  TPairInitializer<int_const_&,BuildPatchServices::FChunkUriResponse_&&> local_28;
  FChunkUriResponse *local_18;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(*(longlong *)this + 0x100));
  local_28.Value = (FChunkUriResponse *)((longlong)this + 8);
  local_18 = param_1;
  TSet<TTuple<int,BuildPatchServices::FChunkUriResponse>,TDefaultMapHashableKeyFuncs<int,BuildPatchServices::FChunkUriResponse,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<int_const_&,BuildPatchServices::FChunkUriResponse_&&>_>
            ((TSet<TTuple<int,BuildPatchServices::FChunkUriResponse>,TDefaultMapHashableKeyFuncs<int,BuildPatchServices::FChunkUriResponse,0>,FDefaultSetAllocator>
              *)(*(longlong *)this + 0x178),&local_28,(bool *)&local_28.Value);
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)this + 0x100));
  lVar1 = *(longlong *)this;
  UE::Core::Private::Function::CheckCallable(*(void **)(lVar1 + 0xc0));
  pcVar2 = *(code **)(lVar1 + 0xc0);
  plVar6 = (longlong *)(lVar1 + 0xd0);
  if (*(longlong **)(lVar1 + 0xe8) != (longlong *)0x0) {
    plVar6 = *(longlong **)(lVar1 + 0xe8);
  }
  uVar5 = (**(code **)(*plVar6 + 8))();
  (*pcVar2)(uVar5);
  *(undefined4 *)&(param_1->AdditionalHeaders).field_0x48 = 0;
  pvVar3 = *(void **)&(param_1->AdditionalHeaders).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&param_1->AdditionalHeaders);
  pFVar4 = (param_1->Uri).Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return;
}

// Abort @ 1432bdf70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
BuildPatchServices::FConstructorCloudChunkSource::Abort(FConstructorCloudChunkSource *this)

{
  int *piVar1;
  TMap<int,BuildPatchServices::FChunkUriResponse,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,BuildPatchServices::FChunkUriResponse,0>_>
  *pTVar2;
  TMap<int,BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*,0>_>
  *pTVar3;
  FScriptContainerElement *pFVar4;
  ulonglong uVar5;
  uint uVar6;
  void *pvVar7;
  undefined1 *puVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  FConstructorCloudChunkSource *pFVar15;
  LPCRITICAL_SECTION lpCriticalSection;
  TMap<int,BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*,0>_>
  *pTVar16;
  bool bVar17;
  byte bVar18;
  longlong *plVar19;
  longlong lVar20;
  undefined1 *puVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  FConstructorCloudChunkSource *pFVar26;
  uint *puVar27;
  FScriptContainerElement *pFVar28;
  undefined1 auStackY_268 [32];
  undefined1 local_238;
  undefined1 local_237;
  undefined1 local_236 [6];
  FConstructorCloudChunkSource *local_230;
  TMap<int,BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*,0>_>
  *local_228;
  int iStack_220;
  uint uStack_21c;
  TBitArray<FDefaultBitArrayAllocator> *local_218;
  undefined4 uStack_210;
  uint uStack_20c;
  int local_208;
  undefined4 uStack_204;
  int iStack_200;
  undefined4 uStack_1fc;
  LPCRITICAL_SECTION local_1f8;
  int local_1f0;
  int local_1ec;
  LARGE_INTEGER local_1e8;
  LARGE_INTEGER local_1e0;
  longlong *local_1d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1d0;
  undefined8 uStack_1b0;
  TMap<int,BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*,0>_>
  *local_1a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1a0;
  undefined8 uStack_180;
  FReadAccessScope local_178;
  FReadAccessScope local_160;
  FReadAccessScope local_148 [2];
  undefined4 local_114;
  undefined4 local_f4;
  undefined1 local_e8 [32];
  uint *local_c8;
  uint local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  int local_b4;
  undefined4 local_b0;
  void *local_a8;
  undefined4 local_a0;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_268;
  local_1f8 = (LPCRITICAL_SECTION)&this->ReadQueueCS;
  local_230 = this;
  if (local_1f8 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(local_1f8);
  pFVar28 = (this->ReadQueue).AllocatorInstance.Data;
  iVar22 = (this->ReadQueue).ArrayNum;
  pFVar4 = pFVar28 + (longlong)iVar22 * 8;
  while( true ) {
    if ((this->ReadQueue).ArrayNum != iVar22) {
      local_238 = 0;
      `TCheckedPointerIterator<BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_238);
    }
    lpCriticalSection = local_1f8;
    if (pFVar28 == pFVar4) break;
    pvVar7 = *(void **)pFVar28;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)pvVar7 + 0x20),
               &local_178);
    if (*(int *)((longlong)pvVar7 + 0x30) == 0) {
      plVar19 = (longlong *)0x0;
    }
    else {
      plVar19 = *(longlong **)((longlong)pvVar7 + 0x28);
    }
    (**(code **)(*plVar19 + 0x60))(plVar19,pvVar7);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_178);
    if (*(void **)((longlong)pvVar7 + 0x48) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)pvVar7 + 0x48));
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)pvVar7 + 0x20));
    ::operator_delete(pvVar7,0x80);
    pFVar28 = pFVar28 + 8;
  }
  piVar1 = &(this->ReadQueue).ArrayMax;
  (this->ReadQueue).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->ReadQueue).AllocatorInstance,0,piVar1);
  }
  LeaveCriticalSection(lpCriticalSection);
  pFVar15 = local_230;
  pFVar26 = pFVar15;
  if (*(int *)&(local_230->InFlightURLRequests).field_0x8 !=
      *(int *)&(local_230->InFlightURLRequests).field_0x34) {
    QueryPerformanceCounter(&local_1e8);
    dVar12 = __real_4170000000000000;
    dVar11 = (double)local_1e8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
             __real_4170000000000000;
    if (3 < (byte)LogCloudChunkSource._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogCloudChunkSource);
    }
    fVar14 = __real_3b03126f;
    dVar13 = __real_4014000000000000;
    if (*(int *)&(pFVar15->InFlightURLRequests).field_0x8 !=
        *(int *)&(pFVar15->InFlightURLRequests).field_0x34) {
      pTVar2 = &pFVar15->CompletedRequests;
      pTVar3 = &pFVar15->InFlightURLRequests;
      do {
        iVar22 = 0;
        QueryPerformanceCounter(&local_1e0);
        dVar10 = (double)local_1e0.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar12;
        if ((dVar13 < dVar10 - dVar11) && (dVar11 = dVar10, 3 < (byte)LogCloudChunkSource._0_1_)) {
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogCloudChunkSource);
        }
        local_e8._0_8_ = (void *)0x0;
        local_e8._8_8_ = 0;
        local_c8 = (uint *)0x0;
        local_c0 = 0;
        local_bc = 0x80;
        local_b8 = 0xffffffff;
        local_b4 = 0;
        local_a8 = (void *)0x0;
        local_a0 = 0;
        EnterCriticalSection((LPCRITICAL_SECTION)&pFVar26->CompletedRequestsCS);
        if ((TMap<int,BuildPatchServices::FChunkUriResponse,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,BuildPatchServices::FChunkUriResponse,0>_>
             *)local_e8 != pTVar2) {
          TSparseArray<TSparseSetElement<TTuple<int,BuildPatchServices::FChunkUriResponse>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,BuildPatchServices::FChunkUriResponse>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                             *)local_e8,0,local_e8._8_4_);
          if ((void *)local_e8._0_8_ != (void *)0x0) {
            FMemory::Free((void *)local_e8._0_8_);
          }
          local_e8._0_8_ = *(undefined8 *)pTVar2;
          *(undefined8 *)pTVar2 = 0;
          local_e8._8_8_ = *(undefined8 *)&(pFVar15->CompletedRequests).field_0x8;
          puVar8 = &(pFVar15->CompletedRequests).field_0x10;
          *(undefined8 *)&(pFVar15->CompletedRequests).field_0x8 = 0;
          if (local_e8 + 0x10 != puVar8) {
            if (*(longlong *)&(pFVar15->CompletedRequests).field_0x20 == 0) {
              local_e8._16_8_ = *(undefined8 *)puVar8;
              local_e8._24_8_ = *(undefined8 *)&(pFVar15->CompletedRequests).field_0x18;
            }
            if (local_c8 != (uint *)0x0) {
              FMemory::Free(local_c8);
            }
            local_c8 = *(uint **)&(pFVar15->CompletedRequests).field_0x20;
            *(undefined8 *)&(pFVar15->CompletedRequests).field_0x20 = 0;
            local_c0 = *(uint *)&(pFVar15->CompletedRequests).field_0x28;
            local_bc = *(undefined4 *)&(pFVar15->CompletedRequests).field_0x2c;
            *(undefined8 *)&(pFVar15->CompletedRequests).field_0x28 = 0;
          }
          local_b8 = *(undefined4 *)&(pFVar15->CompletedRequests).field_0x30;
          local_b4 = *(int *)&(pFVar15->CompletedRequests).field_0x34;
          *(undefined4 *)&(pFVar15->CompletedRequests).field_0x34 = 0;
          *(undefined4 *)&(pFVar15->CompletedRequests).field_0x30 = 0xffffffff;
          if (*(longlong *)&(pFVar15->CompletedRequests).field_0x40 == 0) {
            local_b0 = *(undefined4 *)&(pFVar15->CompletedRequests).field_0x38;
          }
          if (local_a8 != (void *)0x0) {
            FMemory::Free(local_a8);
          }
          local_a8 = *(void **)&(pFVar15->CompletedRequests).field_0x40;
          *(undefined8 *)&(pFVar15->CompletedRequests).field_0x40 = 0;
          local_a0 = *(undefined4 *)&(pFVar15->CompletedRequests).field_0x48;
          *(undefined4 *)&(pFVar15->CompletedRequests).field_0x48 = 0;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)&pFVar26->CompletedRequestsCS);
        uVar25 = local_c0;
        uStack_21c = 1;
        uStack_20c = 0;
        iStack_220 = iVar22;
        local_208 = iVar22;
        if (local_c0 != 0) {
          puVar27 = (uint *)(local_e8 + 0x10);
          if (local_c8 != (uint *)0x0) {
            puVar27 = local_c8;
          }
          uVar24 = *puVar27;
          while (uVar24 == 0) {
            lVar20 = (longlong)iStack_220;
            local_208 = local_208 + 0x20;
            iStack_220 = iStack_220 + 1;
            uStack_20c = local_c0;
            if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_220)
            goto LAB_1432be3f4;
            uVar24 = puVar27[lVar20 + 1];
          }
          uStack_21c = -uVar24 & uVar24;
          uVar5 = (ulonglong)uStack_21c * 2 + 1;
          lVar20 = 0x3f;
          if (uVar5 != 0) {
            for (; uVar5 >> lVar20 == 0; lVar20 = lVar20 + -1) {
            }
          }
          local_1f0 = (int)lVar20;
          uStack_20c = local_208 + -1 + local_1f0;
          if ((int)local_c0 < (int)uStack_20c) {
            uStack_20c = local_c0;
          }
        }
LAB_1432be3f4:
        local_228 = (TMap<int,BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*,0>_>
                     *)local_e8;
        uStack_204 = local_114;
        local_218 = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
        iStack_200 = local_e8._8_4_ - local_b4;
        uVar24 = local_c0 & 0xffffffe0;
        TStack_1d0._padding_ = CONCAT44(uStack_21c,iStack_220);
        uStack_210 = 0xffffffff;
        TStack_1d0.CurrentBitIndex = uStack_20c;
        TStack_1d0.UnvisitedBitMask = 0xffffffff;
        iVar22 = (int)local_c0 >> 5;
        TStack_1d0._28_4_ = local_114;
        TStack_1d0.BaseBitIndex = local_208;
        uStack_1b0 = CONCAT44(uStack_1fc,iStack_200);
        bVar18 = (byte)local_c0;
        local_1d8 = (longlong *)local_228;
        TStack_1d0.Array = local_218;
        if (((int)local_c0 < 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar17)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if (uVar25 != local_c0) {
          puVar27 = (uint *)(local_e8 + 0x10);
          if (local_c8 != (uint *)0x0) {
            puVar27 = local_c8;
          }
          uVar25 = -1 << (bVar18 & 0x1f) & puVar27[iVar22];
          while (uVar25 == 0) {
            lVar20 = (longlong)iVar22;
            uVar24 = uVar24 + 0x20;
            iVar22 = iVar22 + 1;
            uVar25 = local_c0;
            if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar22)
            goto LAB_1432be520;
            uVar25 = puVar27[lVar20 + 1];
          }
          uVar5 = (ulonglong)(-uVar25 & uVar25) * 2 + 1;
          lVar20 = 0x3f;
          if (uVar5 != 0) {
            for (; uVar5 >> lVar20 == 0; lVar20 = lVar20 + -1) {
            }
          }
          local_1ec = (int)lVar20;
          uVar25 = local_1ec + -1 + uVar24;
          if ((int)local_c0 < (int)uVar25) {
            uVar25 = local_c0;
          }
        }
LAB_1432be520:
        while( true ) {
          plVar19 = local_1d8;
          if ((int)local_1d8[1] - *(int *)((longlong)local_1d8 + 0x34) != (int)uStack_1b0) {
            local_237 = 0;
            `TSparseArray<TSparseSetElement<TTuple<int,BuildPatchServices::FChunkUriResponse>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_237);
          }
          if (((TStack_1d0.CurrentBitIndex == uVar25) &&
              (TStack_1d0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10))) &&
             (plVar19 == (longlong *)local_e8)) break;
          uVar24 = *(uint *)((longlong)TStack_1d0.CurrentBitIndex * 0x78 + *plVar19);
          if (*(int *)&(pFVar15->InFlightURLRequests).field_0x8 !=
              *(int *)&(pFVar15->InFlightURLRequests).field_0x34) {
            puVar8 = *(undefined1 **)&(pFVar15->InFlightURLRequests).field_0x40;
            puVar21 = &(pFVar15->InFlightURLRequests).field_0x38;
            if (puVar8 != (undefined1 *)0x0) {
              puVar21 = puVar8;
            }
            iVar22 = *(int *)(puVar21 +
                             (ulonglong)
                             (*(int *)&(pFVar15->InFlightURLRequests).field_0x48 - 1U & uVar24) * 4)
            ;
            if (iVar22 != -1) {
              do {
                if (*(uint *)(*(longlong *)&pTVar3->field_0x0 + (longlong)iVar22 * 0x18) == uVar24)
                {
                  if (iVar22 != -1) goto LAB_1432be5e1;
                  goto LAB_1432be5bb;
                }
                iVar22 = *(int *)(*(longlong *)&pTVar3->field_0x0 + 0x10 + (longlong)iVar22 * 0x18);
              } while (iVar22 != -1);
            }
          }
          iVar22 = -1;
LAB_1432be5bb:
          bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("PairId.IsValidId()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                              ,0x556,L"");
          if (bVar17) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
LAB_1432be5e1:
          pvVar7 = *(void **)(*(longlong *)&pTVar3->field_0x0 + 8 + (longlong)iVar22 * 0x18);
          TSet<TTuple<int,BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*>,TDefaultMapHashableKeyFuncs<int,BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*,0>,FDefaultSetAllocator>
          ::RemoveByIndex((TSet<TTuple<int,BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*>,TDefaultMapHashableKeyFuncs<int,BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*,0>,FDefaultSetAllocator>
                           *)pTVar3,iVar22);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     ((longlong)pvVar7 + 0x20),&local_160);
          if (*(int *)((longlong)pvVar7 + 0x30) == 0) {
            plVar19 = (longlong *)0x0;
          }
          else {
            plVar19 = *(longlong **)((longlong)pvVar7 + 0x28);
          }
          (**(code **)(*plVar19 + 0x60))(plVar19,pvVar7);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_160);
          if (*(void **)((longlong)pvVar7 + 0x48) != (void *)0x0) {
            FMemory::Free(*(void **)((longlong)pvVar7 + 0x48));
          }
          TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)pvVar7 + 0x20));
          ::operator_delete(pvVar7,0x80);
          TStack_1d0.UnvisitedBitMask = TStack_1d0.UnvisitedBitMask & ~TStack_1d0._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1d0);
        }
        if (*(int *)&(pFVar15->InFlightURLRequests).field_0x8 !=
            *(int *)&(pFVar15->InFlightURLRequests).field_0x34) {
          FWindowsPlatformProcess::Sleep(fVar14);
        }
        local_a0 = 0;
        if (local_a8 != (void *)0x0) {
          FMemory::Free(local_a8);
        }
        TSparseArray<TSparseSetElement<TTuple<int,BuildPatchServices::FChunkUriResponse>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<int,BuildPatchServices::FChunkUriResponse>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<int,BuildPatchServices::FChunkUriResponse>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_e8);
        pFVar26 = local_230;
      } while (*(int *)&(local_230->InFlightURLRequests).field_0x8 !=
               *(int *)&(local_230->InFlightURLRequests).field_0x34);
    }
  }
  pFVar15 = local_230;
  pTVar3 = &pFVar26->InFlightDownloads;
  iStack_220 = 0;
  local_208 = 0;
  uStack_21c = 1;
  puVar8 = &(local_230->InFlightDownloads).field_0x10;
  iVar22 = *(int *)&(local_230->InFlightDownloads).field_0x28;
  uStack_20c = 0;
  if (iVar22 != 0) {
    puVar27 = *(uint **)&(local_230->InFlightDownloads).field_0x20;
    if (puVar27 == (uint *)0x0) {
      puVar27 = (uint *)puVar8;
    }
    uVar25 = *puVar27;
    while (uVar25 == 0) {
      lVar20 = (longlong)iStack_220;
      local_208 = local_208 + 0x20;
      iStack_220 = iStack_220 + 1;
      uStack_20c = iVar22;
      if ((int)(iVar22 + -1 + (iVar22 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_220) goto LAB_1432be7ae;
      uVar25 = puVar27[lVar20 + 1];
    }
    uStack_21c = -uVar25 & uVar25;
    uVar5 = (ulonglong)uStack_21c * 2 + 1;
    lVar20 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    uStack_20c = local_208 + -1 + (int)lVar20;
    local_1f8 = (LPCRITICAL_SECTION)CONCAT44(local_1f8._4_4_,(int)lVar20);
    if (iVar22 < (int)uStack_20c) {
      uStack_20c = iVar22;
    }
  }
LAB_1432be7ae:
  uVar25 = *(uint *)&(local_230->InFlightDownloads).field_0x28;
  uStack_204 = local_f4;
  iStack_200 = *(int *)&(local_230->InFlightDownloads).field_0x8 -
               *(int *)&(local_230->InFlightDownloads).field_0x34;
  uVar24 = uVar25 & 0xffffffe0;
  uStack_210 = 0xffffffff;
  TStack_1a0._padding_ = CONCAT44(uStack_21c,iStack_220);
  TStack_1a0.CurrentBitIndex = uStack_20c;
  TStack_1a0.UnvisitedBitMask = 0xffffffff;
  iVar23 = (int)uVar25 >> 5;
  TStack_1a0._28_4_ = local_f4;
  TStack_1a0.BaseBitIndex = local_208;
  uStack_180 = CONCAT44(uStack_1fc,iStack_200);
  local_228 = pTVar3;
  local_218 = (TBitArray<FDefaultBitArrayAllocator> *)puVar8;
  local_1a8 = pTVar3;
  TStack_1a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar8;
  if ((((int)uVar25 < 0) || (iVar22 < (int)uVar25)) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar17)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar6 = *(uint *)&(pFVar15->InFlightDownloads).field_0x28;
  if (uVar25 != uVar6) {
    puVar21 = *(undefined1 **)&(pFVar15->InFlightDownloads).field_0x20;
    if (puVar21 == (undefined1 *)0x0) {
      puVar21 = puVar8;
    }
    uVar25 = -1 << ((byte)uVar25 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar23 * 4);
    while (uVar25 == 0) {
      lVar20 = (longlong)iVar23;
      uVar24 = uVar24 + 0x20;
      iVar23 = iVar23 + 1;
      uVar25 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar23) goto LAB_1432be8c0;
      uVar25 = *(uint *)(puVar21 + lVar20 * 4 + 4);
    }
    uVar5 = (ulonglong)(-uVar25 & uVar25) * 2 + 1;
    lVar20 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    uVar25 = (uVar24 - 1) + (int)lVar20;
    if ((int)uVar6 < (int)uVar25) {
      uVar25 = uVar6;
    }
  }
LAB_1432be8c0:
  while( true ) {
    pTVar16 = local_1a8;
    if (*(int *)(&local_1a8->field_0x0 + 8) - *(int *)(&local_1a8->field_0x0 + 0x34) !=
        (int)uStack_180) {
      `TSparseArray<TSparseSetElement<TTuple<int,BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_236);
    }
    if (((TStack_1a0.CurrentBitIndex == uVar25) &&
        (TStack_1a0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar8)) && (pTVar16 == pTVar3)
       ) break;
    pvVar7 = *(void **)(*(longlong *)&pTVar16->field_0x0 + 8 +
                       (longlong)TStack_1a0.CurrentBitIndex * 0x18);
    (**(code **)((longlong)*pFVar15->DownloadService + 0x20))
              (pFVar15->DownloadService,*(undefined4 *)((longlong)pvVar7 + 0x60));
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)pvVar7 + 0x20),
               local_148);
    if (*(int *)((longlong)pvVar7 + 0x30) == 0) {
      plVar19 = (longlong *)0x0;
    }
    else {
      plVar19 = *(longlong **)((longlong)pvVar7 + 0x28);
    }
    (**(code **)(*plVar19 + 0x60))(plVar19,pvVar7,1,0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (local_148);
    if (*(void **)((longlong)pvVar7 + 0x48) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)pvVar7 + 0x48));
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)pvVar7 + 0x20));
    ::operator_delete(pvVar7,0x80);
    TStack_1a0.UnvisitedBitMask = TStack_1a0.UnvisitedBitMask & ~TStack_1a0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1a0);
  }
  bVar17 = 1 < *(int *)&(pFVar26->InFlightDownloads).field_0x48;
  if (!bVar17) {
    TSet<TTuple<int,BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*>,TDefaultMapHashableKeyFuncs<int,BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<int,BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*>,TDefaultMapHashableKeyFuncs<int,BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*,0>,FDefaultSetAllocator>
                      *)pTVar3);
  }
  puVar8 = &(pFVar26->InFlightDownloads).field_0xc;
  *(undefined4 *)&(pFVar26->InFlightDownloads).field_0x8 = 0;
  if (*(int *)puVar8 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)pTVar3,0,(int *)puVar8);
  }
  *(undefined4 *)&(pFVar26->InFlightDownloads).field_0x30 = 0xffffffff;
  *(undefined4 *)&(pFVar26->InFlightDownloads).field_0x34 = 0;
  iVar22 = *(int *)&(pFVar26->InFlightDownloads).field_0x2c;
  *(undefined4 *)&(pFVar26->InFlightDownloads).field_0x28 = 0;
  if ((iVar22 < 0) || (0x80 < iVar22)) {
    *(undefined4 *)&(pFVar26->InFlightDownloads).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(pFVar26->InFlightDownloads).field_0x10,0);
  }
  if (bVar17) {
    *(undefined4 *)&(pFVar26->InFlightDownloads).field_0x48 = 1;
    TSet<TTuple<int,BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*>,TDefaultMapHashableKeyFuncs<int,BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<int,BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*>,TDefaultMapHashableKeyFuncs<int,BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*,0>,FDefaultSetAllocator>
              *)pTVar3);
  }
  return;
}

// CreateRequest @ 1432cb480

TUniqueFunction<void___cdecl(bool)> * __thiscall
BuildPatchServices::FConstructorCloudChunkSource::CreateRequest
          (FConstructorCloudChunkSource *this,
          TUniqueFunction<void___cdecl(bool)> *__return_storage_ptr__,FGuid *param_1,
          TMemoryView<void> *param_2,void *param_3,
          TDelegate<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy>
          *param_4)

{
  int *piVar1;
  atomic<int> *paVar2;
  TArray<BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*,TSizedDefaultAllocator<32>_>
  *pTVar3;
  atomic<int> aVar4;
  FScriptContainerElement *pFVar5;
  longlong *plVar6;
  code *pcVar7;
  ulong64 uVar8;
  bool bVar9;
  int iVar10;
  TUniqueFunction<void___cdecl(bool)> *pTVar11;
  undefined8 uVar12;
  longlong *plVar13;
  undefined8 *local_28 [2];
  
  local_28[0] = ::operator_new(0x80);
  if (local_28[0] == (undefined8 *)0x0) {
    local_28[0] = (undefined8 *)0x0;
  }
  else {
    *(undefined8 *)((longlong)local_28[0] + 0x34) = 0;
    *(undefined4 *)((longlong)local_28[0] + 0x3c) = 0;
    *(undefined2 *)((longlong)local_28[0] + 0x41) = 0;
    *(undefined1 *)((longlong)local_28[0] + 0x43) = 0;
    local_28[0][0xc] = 0;
    local_28[0][0xe] = 0;
    *local_28[0] = 0;
    local_28[0][1] = 0;
    local_28[0][2] = 0;
    local_28[0][3] = 0;
    local_28[0][4] = 0;
    local_28[0][5] = 0;
    *(undefined4 *)(local_28[0] + 6) = 0;
    *(undefined1 *)(local_28[0] + 8) = 0;
    *(undefined4 *)((longlong)local_28[0] + 0x44) = 0;
    local_28[0][9] = 0;
    local_28[0][10] = 0;
    local_28[0][0xb] = 0;
    local_28[0][0xd] = 0;
    local_28[0][0xf] = 0;
  }
  uVar12 = *(undefined8 *)&param_1->C;
  *local_28[0] = *(undefined8 *)param_1;
  local_28[0][1] = uVar12;
  uVar8 = param_2->Size;
  local_28[0][2] = param_2->Data;
  local_28[0][3] = uVar8;
  TDelegate<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy> *)
             (local_28[0] + 4),param_4);
  local_28[0][7] = param_3;
  LOCK();
  paVar2 = &this->NextReadId;
  aVar4 = *paVar2;
  *paVar2 = (atomic<int>)((int)*paVar2 + 1);
  UNLOCK();
  *(atomic<int> *)(local_28[0] + 0xe) = aVar4;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->ReadQueueCS);
  pTVar3 = &this->ReadQueue;
  pFVar5 = (pTVar3->AllocatorInstance).Data;
  if ((pFVar5 <= (FScriptContainerElement *)local_28) &&
     ((FScriptContainerElement *)local_28 < pFVar5 + (longlong)(this->ReadQueue).ArrayMax * 8)) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      pTVar11 = (TUniqueFunction<void___cdecl(bool)> *)(*pcVar7)();
      return pTVar11;
    }
  }
  iVar10 = (this->ReadQueue).ArrayNum;
  piVar1 = &(this->ReadQueue).ArrayMax;
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar3->AllocatorInstance,piVar1);
  }
  (this->ReadQueue).ArrayNum = iVar10 + 1;
  *(undefined8 **)((pTVar3->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_28[0];
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->ReadQueueCS);
  UE::Core::Private::Function::CheckCallable(*(void **)&this->WakeupMainThreadFn);
  pcVar7 = *(code **)&this->WakeupMainThreadFn;
  plVar6 = *(longlong **)&(this->WakeupMainThreadFn).field_0x28;
  plVar13 = (longlong *)&(this->WakeupMainThreadFn).field_0x10;
  if (plVar6 != (longlong *)0x0) {
    plVar13 = plVar6;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar7)(uVar12);
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined ***)&__return_storage_ptr__->field_0x10 =
       &___7__TFunction_OwnedObject_P6AX_N_Z_00_0A__Function_Private_Core_UE__6B_;
  *(code **)&__return_storage_ptr__->field_0x18 =
       `BuildPatchServices::FConstructorCloudChunkSource::CreateRequest'::__l2::<lambda_1>::
       <lambda_invoker_cdecl>;
  if (&__return_storage_ptr__->field_0x18 != (undefined1 *)0x0) {
    *(code **)__return_storage_ptr__ =
         UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(bool),void,bool>::Call;
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4);
  return __return_storage_ptr__;
}

// GetChunkUnavailableAt @ 1432d3ca0

int __thiscall
BuildPatchServices::FConstructorCloudChunkSource::GetChunkUnavailableAt
          (FConstructorCloudChunkSource *this,FGuid *param_1)

{
  return 0;
}

// PostRequiredByteCount @ 1432e16d0

void __thiscall
BuildPatchServices::FConstructorCloudChunkSource::PostRequiredByteCount
          (FConstructorCloudChunkSource *this,ulong64 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001432e16da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->CloudChunkSourceStat + 0x38))();
  return;
}

// SetWakeupFunction @ 1432ee0d0

void __thiscall
BuildPatchServices::FConstructorCloudChunkSource::SetWakeupFunction
          (FConstructorCloudChunkSource *this,TUniqueFunction<void___cdecl(void)> *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *(undefined8 *)&param_1->field_0x8;
  uVar2 = *(undefined8 *)&this->WakeupMainThreadFn;
  uVar3 = *(undefined8 *)&(this->WakeupMainThreadFn).field_0x8;
  uVar4 = *(undefined8 *)&(this->WakeupMainThreadFn).field_0x10;
  uVar5 = *(undefined8 *)&(this->WakeupMainThreadFn).field_0x18;
  uVar6 = *(undefined8 *)&(this->WakeupMainThreadFn).field_0x20;
  uVar7 = *(undefined8 *)&(this->WakeupMainThreadFn).field_0x28;
  *(undefined8 *)&this->WakeupMainThreadFn = *(undefined8 *)param_1;
  *(undefined8 *)&(this->WakeupMainThreadFn).field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&param_1->field_0x18;
  *(undefined8 *)&(this->WakeupMainThreadFn).field_0x10 = *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)&(this->WakeupMainThreadFn).field_0x18 = uVar1;
  uVar1 = *(undefined8 *)&param_1->field_0x28;
  *(undefined8 *)&(this->WakeupMainThreadFn).field_0x20 = *(undefined8 *)&param_1->field_0x20;
  *(undefined8 *)&(this->WakeupMainThreadFn).field_0x28 = uVar1;
  *(undefined8 *)param_1 = uVar2;
  *(undefined8 *)&param_1->field_0x8 = uVar3;
  *(undefined8 *)&param_1->field_0x10 = uVar4;
  *(undefined8 *)&param_1->field_0x18 = uVar5;
  *(undefined8 *)&param_1->field_0x20 = uVar6;
  *(undefined8 *)&param_1->field_0x28 = uVar7;
  return;
}

// Tick @ 1432f18d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
BuildPatchServices::FConstructorCloudChunkSource::Tick
          (FConstructorCloudChunkSource *this,bool param_1,uint *param_2,uint param_3)

{
  ulonglong *puVar1;
  int *piVar2;
  FWindowsRecursiveMutex *pFVar3;
  TMap<int,BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*,0>_>
  *pTVar4;
  TArray<BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*,TSizedDefaultAllocator<32>_>
  *pTVar5;
  atomic<unsigned_int> *paVar6;
  atomic<unsigned_int> aVar7;
  ulonglong uVar8;
  double dVar9;
  undefined1 *puVar10;
  void *pvVar11;
  atomic<unsigned___int64> aVar12;
  IMessagePump *pIVar13;
  atomic<__int64> aVar14;
  code *pcVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  double dVar20;
  FGuid *pFVar21;
  ForElementType<UE::Tasks::Private::FTaskBase_*> FVar22;
  TMap<int,BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*,0>_>
  *pTVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  bool bVar31;
  char cVar32;
  bool bVar33;
  ushort uVar34;
  int iVar35;
  EBuildPatchDownloadHealth EVar36;
  uint uVar37;
  uint uVar38;
  undefined4 uVar39;
  int iVar40;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar41;
  longlong lVar42;
  FTaskBase *this_00;
  ulong64 uVar43;
  FString *pFVar44;
  longlong *plVar45;
  FReadAccessScope *this_01;
  longlong *plVar46;
  ForAnyElementType FVar47;
  FScriptContainerElement *pFVar48;
  undefined1 *puVar49;
  FScriptContainerElement *pFVar50;
  uint uVar51;
  uint *puVar52;
  undefined1 *puVar53;
  int iVar54;
  longlong lVar55;
  IChunkDataSerialization *pIVar56;
  uint uVar57;
  float fVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined1 auStackY_7a8 [32];
  FGuid *local_758;
  char local_750;
  char local_74f;
  longlong local_748;
  undefined1 local_740;
  undefined1 local_73f;
  undefined1 local_73e [2];
  int local_73c;
  FString local_738;
  undefined1 local_728 [8];
  IChunkDataSerialization *local_720;
  void *local_718;
  code *local_710;
  FString local_708;
  FString local_6f8;
  ForElementType<UE::Tasks::Private::FTaskBase_*> local_6e8;
  TMap<int,BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*,0>_>
  *local_6e0;
  undefined8 uStack_6d8;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  int local_6b8;
  undefined4 uStack_6b4;
  TMap<int,BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*,0>_>
  *local_6b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_6a8;
  undefined8 local_688;
  undefined4 local_680;
  undefined8 local_67c;
  undefined8 uStack_674;
  ForAnyElementType local_668;
  undefined8 local_660;
  ForAnyElementType local_658;
  undefined8 local_650;
  uint local_648;
  int local_644;
  ForAnyElementType local_640;
  int local_638;
  int local_634;
  ForAnyElementType local_630;
  int local_628;
  int local_624;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_620;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_600;
  undefined1 local_5e0 [16];
  TPairInitializer<int_const_&,BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*_const_&>
  local_5d0;
  undefined1 local_5c0 [12];
  uint uStack_5b4;
  TBitArray<FDefaultBitArrayAllocator> *local_5b0;
  undefined8 uStack_5a8;
  longlong local_5a0;
  int iStack_598;
  undefined4 uStack_594;
  longlong *local_590;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_588;
  undefined8 uStack_568;
  longlong local_560;
  void **local_558;
  longlong local_550;
  longlong *local_548;
  longlong local_540;
  longlong *local_538;
  undefined4 local_530;
  undefined4 local_52c;
  undefined4 uStack_528;
  undefined4 uStack_524;
  undefined4 uStack_520;
  FScriptContainerElement *local_518;
  undefined4 local_510;
  undefined4 local_50c;
  FScriptContainerElement *local_508;
  int local_500;
  uint local_4fc;
  code *local_4f8 [2];
  undefined **local_4e8;
  FConstructorCloudChunkSource *local_4e0;
  undefined4 local_4d8;
  undefined4 local_4d4;
  undefined8 local_4d0;
  void *local_4c8 [2];
  uint local_4b8;
  uint uStack_4b4;
  uint uStack_4b0;
  uint uStack_4ac;
  longlong *local_4a8;
  longlong lStack_4a0;
  TBitArray<FDefaultBitArrayAllocator> *local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  FArchiveState local_478;
  undefined8 local_3e8;
  longlong local_3e0;
  undefined8 local_3d8;
  TRangedForIterator local_3c8;
  FReadAccessScope local_398;
  FReadAccessScope local_380;
  FReadAccessScope local_368;
  FReadAccessScope local_350;
  undefined4 local_32c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_328;
  undefined4 local_2ec;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_2e8;
  undefined1 local_2c8 [32];
  undefined8 local_2a8;
  int local_2a0;
  undefined4 local_29c;
  undefined4 local_298;
  int local_294;
  void *local_288;
  undefined4 local_280;
  undefined1 local_278 [32];
  undefined8 local_258;
  int local_250;
  undefined4 local_24c;
  undefined4 local_248;
  int local_244;
  void *local_238;
  undefined4 local_230;
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_228;
  undefined8 local_1f0;
  void *local_1e8;
  ulonglong local_1e0;
  undefined1 local_1d8 [60];
  uchar auStack_19c [20];
  TStringBuilderBase<wchar_t> local_188;
  wchar_t local_168 [40];
  wchar_t local_118 [4];
  longlong local_110;
  longlong lStack_108;
  longlong local_100;
  longlong lStack_f8;
  longlong local_f0;
  ulong64 uStack_e8;
  uchar local_e0 [4];
  uchar auStack_dc [4];
  atomic<unsigned_int> aStack_d8;
  uchar auStack_d4 [44];
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_7a8;
  pFVar3 = &this->ReadQueueCS;
  local_644 = *(int *)&(this->InFlightDownloads).field_0x8 -
              *(int *)&(this->InFlightDownloads).field_0x34;
  local_74f = param_1;
  local_648 = param_3;
  local_5d0.Value = (FCloudRead **)param_2;
  if (pFVar3 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)pFVar3);
  iVar35 = (this->ReadQueue).ArrayNum;
  LeaveCriticalSection((LPCRITICAL_SECTION)pFVar3);
  lVar42 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar42 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    __TraceCounter1110.CounterId._0_2_ =
         FCountersTrace::OutputInitCounter
                   (L"BPS.Cloud.ActiveURLRequests",TraceCounterType_Int,TraceCounterDisplayHint_None
                   );
    LOCK();
    __TraceCounter1110.CounterId._2_2_ = 0;
    UNLOCK();
    atexit(`BuildPatchServices::FConstructorCloudChunkSource::Tick'::__l3::
           _dynamic_atexit_destructor_for____TraceCounter1110__);
    _Init_thread_footer(&::_TSS0);
  }
  FCountersTrace::TCounter<__int64,0,__int64,0>::Set
            (&__TraceCounter1110,
             (longlong)
             (*(int *)&(this->InFlightURLRequests).field_0x8 -
             *(int *)&(this->InFlightURLRequests).field_0x34));
  if ((*(int *)(lVar42 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    __TraceCounter1111.CounterId._0_2_ =
         FCountersTrace::OutputInitCounter
                   (L"BPS.Cloud.ActiveReads",TraceCounterType_Int,TraceCounterDisplayHint_None);
    LOCK();
    __TraceCounter1111.CounterId._2_2_ = 0;
    UNLOCK();
    atexit(`BuildPatchServices::FConstructorCloudChunkSource::Tick'::__l3::
           _dynamic_atexit_destructor_for____TraceCounter1111__);
    _Init_thread_footer(&::_TSS1);
  }
  FCountersTrace::TCounter<__int64,0,__int64,0>::Set
            (&__TraceCounter1111,
             (longlong)
             (*(int *)&(this->InFlightDownloads).field_0x8 -
             *(int *)&(this->InFlightDownloads).field_0x34));
  if ((*(int *)(lVar42 + 0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    __TraceCounter1112.CounterId._0_2_ =
         FCountersTrace::OutputInitCounter
                   (L"BPS.Cloud.PendingReads",TraceCounterType_Int,TraceCounterDisplayHint_None);
    LOCK();
    __TraceCounter1112.CounterId._2_2_ = 0;
    UNLOCK();
    atexit(`BuildPatchServices::FConstructorCloudChunkSource::Tick'::__l3::
           _dynamic_atexit_destructor_for____TraceCounter1112__);
    _Init_thread_footer(&::_TSS2);
  }
  FCountersTrace::TCounter<__int64,0,__int64,0>::Set(&__TraceCounter1112,(longlong)iVar35);
  if (5 < (byte)LogCloudChunkSource._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogCloudChunkSource);
  }
  local_24c = 0x80;
  local_278._0_8_ = 0;
  local_278._8_8_ = 0;
  local_258 = 0;
  local_250 = 0;
  local_244 = 0;
  local_238 = (void *)0x0;
  local_230 = 0;
  local_2c8._0_8_ = 0;
  local_2c8._8_8_ = 0;
  local_2a8 = 0;
  local_2a0 = 0;
  local_294 = 0;
  local_288 = (void *)0x0;
  local_280 = 0;
  local_248 = 0xffffffff;
  local_29c = 0x80;
  local_298 = 0xffffffff;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->CompletedRequestsCS);
  TMap<int,BuildPatchServices::FChunkUriResponse,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,BuildPatchServices::FChunkUriResponse,0>_>
  ::operator=((TMap<int,BuildPatchServices::FChunkUriResponse,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,BuildPatchServices::FChunkUriResponse,0>_>
               *)local_2c8,&this->CompletedRequests);
  TMap<int,TSharedRef<BuildPatchServices::IDownload,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedRef<BuildPatchServices::IDownload,1>,0>_>
  ::operator=((TMap<int,TSharedRef<BuildPatchServices::IDownload,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedRef<BuildPatchServices::IDownload,1>,0>_>
               *)local_278,&this->CompletedDownloads);
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->CompletedRequestsCS);
  local_620.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_2c8 + 0x10);
  local_620._padding_._0_4_ = 0;
  local_620._padding_._4_4_ = 1;
  local_620.UnvisitedBitMask = 0xffffffff;
  local_620.CurrentBitIndex = 0;
  local_620.BaseBitIndex = 0;
  if (local_2a0 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_620);
  }
  TStack_6a8._padding_ = CONCAT44(local_620._padding_._4_4_,(undefined4)local_620._padding_);
  local_6b0 = (TMap<int,BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*,0>_>
               *)local_2c8;
  TStack_6a8._16_8_ = CONCAT44(local_620.CurrentBitIndex,local_620.UnvisitedBitMask);
  TStack_6a8._24_8_ = CONCAT44(local_620._28_4_,local_620.BaseBitIndex);
  local_688._0_4_ = local_2c8._8_4_ - local_294;
  TStack_6a8.Array = local_620.Array;
  local_5b0 = local_620.Array;
  uStack_594 = local_688._4_4_;
  local_5c0._0_8_ = local_6b0;
  unique0x10003f8e = TStack_6a8._padding_;
  uStack_5a8 = TStack_6a8._16_8_;
  local_5a0 = TStack_6a8._24_8_;
  iStack_598 = (int)local_688;
  pTVar41 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_2e8,(TBitArray<FDefaultBitArrayAllocator> *)(local_2c8 + 0x10),
                       local_2a0);
  local_6b0 = (TMap<int,BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*,0>_>
               *)local_2c8;
  TStack_6a8._padding_ = pTVar41->_padding_;
  TStack_6a8.Array = pTVar41->Array;
  TStack_6a8.UnvisitedBitMask = pTVar41->UnvisitedBitMask;
  TStack_6a8.CurrentBitIndex = pTVar41->CurrentBitIndex;
  TStack_6a8._24_8_ = *(undefined8 *)&pTVar41->BaseBitIndex;
  local_688._0_4_ = local_2c8._8_4_ - local_294;
  local_3c8.InitialNum = local_2c8._8_4_ - local_294;
  local_3c8._44_4_ = local_688._4_4_;
  local_3c8._padding_ = (longlong)local_6b0;
  local_3c8._padding_ = TStack_6a8._padding_;
  local_3c8._padding_ = (longlong)TStack_6a8.Array;
  local_3c8._padding_ = TStack_6a8._16_8_;
  local_3c8._padding_ = TStack_6a8._24_8_;
  bVar31 = TSparseArray<TSparseSetElement<TTuple<int,BuildPatchServices::FChunkUriResponse>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           ::TRangedForIterator::operator!=((TRangedForIterator *)local_5c0,&local_3c8);
  cVar32 = local_74f;
  if (bVar31) {
    pTVar4 = &this->InFlightURLRequests;
    do {
      lVar55 = (longlong)uStack_5a8._4_4_ * 0x78;
      lVar42 = *(longlong *)local_5c0._0_8_;
      if (*(int *)&(this->InFlightURLRequests).field_0x8 !=
          *(int *)&(this->InFlightURLRequests).field_0x34) {
        puVar10 = *(undefined1 **)&(this->InFlightURLRequests).field_0x40;
        puVar49 = &(this->InFlightURLRequests).field_0x38;
        if (puVar10 != (undefined1 *)0x0) {
          puVar49 = puVar10;
        }
        iVar35 = *(int *)(puVar49 +
                         (ulonglong)
                         (*(int *)&(this->InFlightURLRequests).field_0x48 - 1U &
                         *(uint *)(lVar55 + lVar42)) * 4);
        if (iVar35 != -1) {
          do {
            if (*(uint *)(*(longlong *)&pTVar4->field_0x0 + (longlong)iVar35 * 0x18) ==
                *(uint *)(lVar55 + lVar42)) {
              if (iVar35 != -1) goto LAB_1432f1cc1;
              goto LAB_1432f1c9b;
            }
            iVar35 = *(int *)(*(longlong *)&pTVar4->field_0x0 + 0x10 + (longlong)iVar35 * 0x18);
          } while (iVar35 != -1);
        }
      }
      iVar35 = -1;
LAB_1432f1c9b:
      bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("PairId.IsValidId()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                          ,0x556,L"");
      if (bVar31) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
LAB_1432f1cc1:
      pvVar11 = *(void **)(*(longlong *)&pTVar4->field_0x0 + 8 + (longlong)iVar35 * 0x18);
      TSet<TTuple<int,BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*>,TDefaultMapHashableKeyFuncs<int,BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*,0>,FDefaultSetAllocator>
      ::RemoveByIndex((TSet<TTuple<int,BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*>,TDefaultMapHashableKeyFuncs<int,BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*,0>,FDefaultSetAllocator>
                       *)pTVar4,iVar35);
      local_718 = pvVar11;
      if (*(char *)(lVar55 + 8 + lVar42) == '\0') {
        if (cVar32 == '\0') {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     ((longlong)pvVar11 + 0x20),&local_380);
          if (*(int *)((longlong)pvVar11 + 0x30) == 0) {
            plVar45 = (longlong *)0x0;
          }
          else {
            plVar45 = *(longlong **)((longlong)pvVar11 + 0x28);
          }
          (**(code **)(*plVar45 + 0x60))(plVar45,pvVar11,1,0);
          this_01 = &local_380;
          goto LAB_1432f1d72;
        }
        pFVar44 = (FString *)(lVar42 + 0x10 + lVar55);
        iVar54 = (pFVar44->Data).ArrayNum;
        iVar35 = iVar54 + -1;
        if (iVar54 == 0) {
          iVar35 = 0;
        }
        if (iVar35 != 0) {
          ::FString::operator=((FString *)((longlong)pvVar11 + 0x48),pFVar44);
        }
        uVar39 = (**(code **)((longlong)*this->DownloadService + 0x10))
                           (this->DownloadService,(longlong)local_718 + 0x48,lVar42 + 0x20 + lVar55,
                            &this->OnDownloadCompleteDelegate);
        *(undefined4 *)((longlong)local_718 + 0x60) = uVar39;
        local_560 = (longlong)local_718 + 0x60;
        local_558 = &local_718;
        TSet<TTuple<int,BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*>,TDefaultMapHashableKeyFuncs<int,BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<int_const_&,BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*_const_&>_>
                  ((TSet<TTuple<int,BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*>,TDefaultMapHashableKeyFuncs<int,BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*,0>,FDefaultSetAllocator>
                    *)&this->InFlightDownloads,
                   (TPairInitializer<int_const_&,BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*_const_&>
                    *)local_5e0,(bool *)&local_560);
        (**(code **)((longlong)*this->CloudChunkSourceStat + 8))
                  (this->CloudChunkSourceStat,local_718);
      }
      else {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   ((longlong)pvVar11 + 0x20),&local_398);
        if (*(int *)((longlong)pvVar11 + 0x30) == 0) {
          plVar45 = (longlong *)0x0;
        }
        else {
          plVar45 = *(longlong **)((longlong)pvVar11 + 0x28);
        }
        (**(code **)(*plVar45 + 0x60))(plVar45,pvVar11,0);
        this_01 = &local_398;
LAB_1432f1d72:
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (this_01);
        pvVar11 = local_718;
        if (local_718 != (void *)0x0) {
          if (*(void **)((longlong)local_718 + 0x48) != (void *)0x0) {
            FMemory::Free(*(void **)((longlong)local_718 + 0x48));
          }
          TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)pvVar11 + 0x20));
          ::operator_delete(pvVar11,0x80);
        }
      }
      uStack_5a8 = CONCAT44(uStack_5a8._4_4_,(uint)uStack_5a8 & ~uStack_5b4);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_5c0 + 8));
      bVar31 = TSparseArray<TSparseSetElement<TTuple<int,BuildPatchServices::FChunkUriResponse>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               ::TRangedForIterator::operator!=((TRangedForIterator *)local_5c0,&local_3c8);
    } while (bVar31);
  }
  if (CpuChannel->Enabled < 0) {
    local_750 = '\0';
  }
  else {
    local_750 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1161,"CDT_ProcessCompleted",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\CloudChunkSource.cpp"
               ,0x489);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1161);
  }
  local_600.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_278 + 0x10);
  local_600._padding_._0_4_ = 0;
  local_600._padding_._4_4_ = 1;
  local_600.UnvisitedBitMask = 0xffffffff;
  local_600.CurrentBitIndex = 0;
  local_600.BaseBitIndex = 0;
  if (local_250 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_600);
  }
  uStack_6d8 = CONCAT44(local_600._padding_._4_4_,(undefined4)local_600._padding_);
  local_6e0 = (TMap<int,BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*,0>_>
               *)local_278;
  uStack_6c8._4_4_ = local_600.CurrentBitIndex;
  uStack_6c8._0_4_ = local_600.UnvisitedBitMask;
  uStack_6c0._4_4_ = local_600._28_4_;
  uStack_6c0._0_4_ = local_600.BaseBitIndex;
  local_6b8 = local_278._8_4_ - local_244;
  pTStack_6d0 = local_600.Array;
  uStack_568 = CONCAT44(uStack_6b4,local_6b8);
  TStack_588.Array = local_600.Array;
  local_590 = (longlong *)local_6e0;
  TStack_588._padding_ = uStack_6d8;
  TStack_588._16_8_ = uStack_6c8;
  TStack_588._24_8_ = uStack_6c0;
  pTVar41 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_328,(TBitArray<FDefaultBitArrayAllocator> *)(local_278 + 0x10),
                       local_250);
  dVar9 = _UNK_150689688;
  dVar19 = ___xmm_3ff00000000000003ff0000000000000;
  local_6e0 = (TMap<int,BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*,0>_>
               *)local_278;
  uStack_6d8 = pTVar41->_padding_;
  pTStack_6d0 = pTVar41->Array;
  uStack_6c8._0_4_ = pTVar41->UnvisitedBitMask;
  uStack_6c8._4_4_ = pTVar41->CurrentBitIndex;
  uStack_6c0 = *(undefined8 *)&pTVar41->BaseBitIndex;
  local_6b8 = local_278._8_4_ - local_244;
  uStack_480 = CONCAT44(uStack_6b4,local_6b8);
  local_4a8 = (longlong *)local_6e0;
  lStack_4a0 = uStack_6d8;
  local_498 = pTStack_6d0;
  uStack_490 = uStack_6c8;
  local_488 = uStack_6c0;
LAB_1432f1ff6:
  plVar46 = local_590;
  plVar45 = (longlong *)0x0;
  if ((int)local_590[1] - *(int *)((longlong)local_590 + 0x34) != (int)uStack_568) {
    local_740 = 0;
    `TSparseArray<TSparseSetElement<TTuple<int,TSharedRef<BuildPatchServices::IDownload,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_740);
  }
  if (((TStack_588.CurrentBitIndex != uStack_490._4_4_) || (TStack_588.Array != local_498)) ||
     (plVar46 != local_4a8)) {
    puVar52 = (uint *)((longlong)TStack_588.CurrentBitIndex * 0x20 + *plVar46);
    bVar31 = -1 < CpuChannel->Enabled;
    if (bVar31) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId1164,"CDT_ProcessOne",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\CloudChunkSource.cpp"
                 ,0x48c);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1164);
    }
    pTVar4 = &this->InFlightDownloads;
    uVar57 = *puVar52;
    if (*(int *)&(this->InFlightDownloads).field_0x8 !=
        *(int *)&(this->InFlightDownloads).field_0x34) {
      puVar10 = *(undefined1 **)&(this->InFlightDownloads).field_0x40;
      puVar49 = &(this->InFlightDownloads).field_0x38;
      if (puVar10 != (undefined1 *)0x0) {
        puVar49 = puVar10;
      }
      iVar35 = *(int *)(puVar49 +
                       (ulonglong)(*(int *)&(this->InFlightDownloads).field_0x48 - 1U & uVar57) * 4)
      ;
      if (iVar35 != -1) {
        do {
          lVar42 = *(longlong *)&pTVar4->field_0x0 + (longlong)iVar35 * 0x18;
          if (*(uint *)(*(longlong *)&pTVar4->field_0x0 + (longlong)iVar35 * 0x18) == uVar57) {
            plVar46 = (longlong *)(lVar42 + 8);
            if (lVar42 == 0) {
              plVar46 = plVar45;
            }
            if (plVar46 != (longlong *)0x0) {
              local_758 = (FGuid *)*plVar46;
              puVar10 = *(undefined1 **)&(this->InFlightDownloads).field_0x40;
              puVar49 = &(this->InFlightDownloads).field_0x38;
              if (puVar10 != (undefined1 *)0x0) {
                puVar49 = puVar10;
              }
              iVar35 = *(int *)(puVar49 +
                               ((longlong)*(int *)&(this->InFlightDownloads).field_0x48 - 1U &
                               (longlong)(int)uVar57) * 4);
              if (iVar35 == -1) goto LAB_1432f2166;
              goto LAB_1432f2140;
            }
            break;
          }
          iVar35 = *(int *)(lVar42 + 0x10);
        } while (iVar35 != -1);
      }
    }
    goto LAB_1432f2def;
  }
  if (local_750 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->ReadQueueCS);
  iVar35 = (this->ReadQueue).ArrayNum;
  pFVar50 = (this->ReadQueue).AllocatorInstance.Data;
  uVar37 = (uint)(0 < iVar35);
  uVar57 = 0;
  pFVar48 = pFVar50 + (longlong)iVar35 * 8;
  while( true ) {
    if ((this->ReadQueue).ArrayNum != iVar35) {
      local_73f = 0;
      `TCheckedPointerIterator<BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_73f);
    }
    iVar54 = 0;
    if (pFVar50 == pFVar48) break;
    if (*(int *)(*(longlong *)pFVar50 + 0x58) == 0) {
      uVar37 = uVar57;
    }
    pFVar50 = pFVar50 + 8;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->ReadQueueCS);
  aVar14 = this->CyclesAtLastData;
  uVar43 = FStatsCollector::GetCycles();
  dVar19 = FStatsCollector::CyclesToSeconds(uVar43 - (longlong)aVar14);
  if (((char)uVar37 == '\0') || (dVar19 <= (double)(this->Configuration).DisconnectedDelay)) {
    bVar31 = false;
  }
  else {
    bVar31 = true;
  }
  dVar19 = (this->ChunkSuccessTracker).TotalValueCount;
  if (0.0 < dVar19) {
    dVar19 = (this->ChunkSuccessTracker).TotalAccumulatedValue / dVar19;
  }
  else {
    dVar19 = 0.0;
  }
  fVar58 = (float)dVar19;
  EVar36 = GetDownloadHealth(bVar31,&(this->Configuration).HealthPercentages,fVar58);
  if (this->LastSeenHealth != EVar36) {
    this->LastSeenHealth = EVar36;
    (**(code **)((longlong)*this->CloudChunkSourceStat + 0x40))(this->CloudChunkSourceStat,EVar36);
  }
  if (fVar58 != this->LastSeenSuccessRate) {
    this->LastSeenSuccessRate = fVar58;
    (**(code **)((longlong)*this->CloudChunkSourceStat + 0x48))(this->CloudChunkSourceStat,fVar58);
  }
  dVar19 = (this->ChunkSuccessTracker).ImmediateValueCount;
  if (__real_4008000000000000 <= dVar19) {
    dVar9 = (this->ChunkSuccessTracker).ImmediateAccumulatedValue;
    (this->ChunkSuccessTracker).ImmediateValueCount = 0.0;
    (this->ChunkSuccessTracker).ImmediateAccumulatedValue = 0.0;
    (this->ChunkSuccessTracker).LastAverage = dVar9 / dVar19;
  }
  EVar36 = GetDownloadHealth(bVar31,&(this->Configuration).HealthPercentages,
                             (float)(this->ChunkSuccessTracker).LastAverage);
  pTStack_6d0 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->InFlightDownloads).field_0x10;
  local_720 = (IChunkDataSerialization *)CONCAT44(local_720._4_4_,EVar36);
  iVar35 = *(int *)&(this->InFlightDownloads).field_0x28;
  pTVar4 = &this->InFlightDownloads;
  local_73c = 0;
  uVar37 = 1;
  uStack_6c8._4_4_ = iVar54;
  if (iVar35 != 0) {
    puVar52 = *(uint **)&(this->InFlightDownloads).field_0x20;
    if (puVar52 == (uint *)0x0) {
      puVar52 = (uint *)pTStack_6d0;
    }
    uVar38 = *puVar52;
    iVar54 = 0;
    while (uVar38 == 0) {
      lVar42 = (longlong)(int)uVar57;
      iVar54 = iVar54 + 0x20;
      uVar57 = uVar57 + 1;
      uStack_6c8._4_4_ = iVar35;
      if ((int)(iVar35 + -1 + (iVar35 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uVar57) goto LAB_1432f3031;
      uVar38 = puVar52[lVar42 + 1];
    }
    uVar37 = ~(uVar38 - 1) & uVar38;
    uVar8 = (ulonglong)uVar37 * 2 + 1;
    lVar42 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar42 == 0; lVar42 = lVar42 + -1) {
      }
    }
    local_5e0._4_4_ = (undefined4)lVar42;
    uStack_6c8._4_4_ = iVar54 + -1 + local_5e0._4_4_;
    if (iVar35 < uStack_6c8._4_4_) {
      uStack_6c8._4_4_ = iVar35;
    }
  }
LAB_1432f3031:
  uVar38 = *(uint *)&(this->InFlightDownloads).field_0x28;
  puVar10 = &(this->InFlightDownloads).field_0x10;
  local_6b8 = *(int *)&(this->InFlightDownloads).field_0x8 -
              *(int *)&(this->InFlightDownloads).field_0x34;
  uVar51 = uVar38 & 0xffffffe0;
  uStack_6d8 = CONCAT44(uVar37,uVar57);
  uStack_6c8._0_4_ = 0xffffffff;
  uStack_6c0._4_4_ = local_2ec;
  uStack_6c0._0_4_ = iVar54;
  TStack_6a8._padding_ = uStack_6d8;
  iVar35 = (int)uVar38 >> 5;
  local_688 = CONCAT44(uStack_6b4,local_6b8);
  TStack_6a8.UnvisitedBitMask = 0xffffffff;
  TStack_6a8.CurrentBitIndex = uStack_6c8._4_4_;
  TStack_6a8.BaseBitIndex = iVar54;
  TStack_6a8._28_4_ = local_2ec;
  local_6e0 = pTVar4;
  local_6b0 = pTVar4;
  TStack_6a8.Array = pTStack_6d0;
  if (((int)uVar38 < 0) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar31)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  uVar57 = *(uint *)&(this->InFlightDownloads).field_0x28;
  if (uVar38 != uVar57) {
    puVar49 = *(undefined1 **)&(this->InFlightDownloads).field_0x20;
    puVar53 = puVar10;
    if (puVar49 != (undefined1 *)0x0) {
      puVar53 = puVar49;
    }
    uVar37 = -1 << ((byte)uVar38 & 0x1f) & *(uint *)(puVar53 + (longlong)iVar35 * 4);
    while (uVar37 == 0) {
      lVar42 = (longlong)iVar35;
      uVar51 = uVar51 + 0x20;
      iVar35 = iVar35 + 1;
      uVar38 = uVar57;
      if ((int)((uVar57 - 1) + ((int)(uVar57 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar35)
      goto LAB_1432f3141;
      uVar37 = *(uint *)(puVar53 + lVar42 * 4 + 4);
    }
    uVar8 = (ulonglong)(~(uVar37 - 1) & uVar37) * 2 + 1;
    lVar42 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar42 == 0; lVar42 = lVar42 + -1) {
      }
    }
    local_5e0._8_4_ = (undefined4)lVar42;
    uVar38 = (uVar51 - 1) + local_5e0._8_4_;
    if ((int)uVar57 < (int)uVar38) {
      uVar38 = uVar57;
    }
  }
LAB_1432f3141:
  iVar35 = 0x7fffffff;
  iVar54 = local_73c;
  while( true ) {
    pTVar23 = local_6b0;
    if (*(int *)&local_6b0->field_0x8 - *(int *)&local_6b0->field_0x34 != (int)local_688) {
      local_73e[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_73e);
    }
    dVar19 = __real_bff0000000000000;
    if (((TStack_6a8.CurrentBitIndex == uVar38) &&
        (TStack_6a8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar10)) &&
       (pTVar23 == pTVar4)) break;
    iVar40 = *(int *)(*(longlong *)
                       (*(longlong *)pTVar23 + 8 + (longlong)TStack_6a8.CurrentBitIndex * 0x18) +
                     0x70);
    if (iVar40 < iVar35) {
      iVar35 = iVar40;
    }
    if (iVar54 < iVar40) {
      iVar54 = iVar40;
    }
    TStack_6a8.UnvisitedBitMask = TStack_6a8.UnvisitedBitMask & ~TStack_6a8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_6a8);
  }
  if (iVar54 < iVar35) {
    iVar35 = iVar54;
  }
  local_710 = (code *)CONCAT44(local_710._4_4_,iVar35);
  local_73c = iVar54;
  if (local_74f != '\0') {
    while( true ) {
      pTVar5 = &this->ReadQueue;
      pFVar3 = &this->ReadQueueCS;
      uVar57 = (**(code **)*this->DownloadCount)
                         (this->DownloadCount,
                          *(int *)&(this->InFlightDownloads).field_0x8 -
                          *(int *)&(this->InFlightDownloads).field_0x34);
      if (uVar57 == 0) {
        uVar57 = 1;
      }
      if (local_648 < uVar57) {
        uVar57 = local_648;
      }
      if (uVar57 <= (uint)(((*(int *)&(this->InFlightURLRequests).field_0x8 -
                            *(int *)&(this->InFlightURLRequests).field_0x34) -
                           *(int *)&(this->InFlightDownloads).field_0x34) +
                          *(int *)&(this->InFlightDownloads).field_0x8)) break;
      local_748 = 0;
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar3);
      iVar35 = (this->ReadQueue).ArrayNum;
      if (iVar35 == 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)pFVar3);
        break;
      }
      if ((iVar35 < 1) &&
         (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar31)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      local_748 = *(longlong *)(pTVar5->AllocatorInstance).Data;
      if (((this->ReadQueue).ArrayNum < 1) &&
         (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar31)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      pFVar48 = (pTVar5->AllocatorInstance).Data;
      iVar35 = (this->ReadQueue).ArrayNum + -1;
      if (iVar35 != 0) {
        memmove(pFVar48,pFVar48 + 8,(longlong)iVar35 << 3);
      }
      iVar35 = (this->ReadQueue).ArrayNum + -1;
      (this->ReadQueue).ArrayNum = iVar35;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,&pTVar5->AllocatorInstance,iVar35,&(this->ReadQueue).ArrayMax);
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar3);
      uVar57 = this->CurrentBestCloudDir;
      local_708.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_708.Data.ArrayNum = 0;
      local_708.Data.ArrayMax = 0;
      local_6f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      uVar37 = 0;
      if ((int)uVar57 < (this->Configuration).CloudRoots.ArrayNum) {
        uVar37 = ~uVar57 >> 0x1f;
      }
      local_6f8.Data.ArrayNum = 0;
      local_6f8.Data.ArrayMax = 0;
      if ((uVar37 == 0) &&
         (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar31)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      pFVar48 = (this->Configuration).CloudRoots.AllocatorInstance.Data;
      iVar35 = *(int *)(pFVar48 + (longlong)(int)uVar57 * 0x10 + 8);
      iVar54 = iVar35 + -1;
      if (iVar35 == 0) {
        iVar54 = 0;
      }
      ::FString::AssignRange
                (&local_708,*(wchar_t **)(pFVar48 + (longlong)(int)uVar57 * 0x10),iVar54);
      pFVar44 = (FString *)
                (**(code **)((longlong)*this->ManifestSet + 0x40))
                          (this->ManifestSet,local_4c8,local_748);
      if (&local_6f8 != pFVar44) {
        if (local_6f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_6f8.Data.AllocatorInstance.Data);
        }
        local_6f8.Data.AllocatorInstance.Data = (pFVar44->Data).AllocatorInstance.Data;
        (pFVar44->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_6f8.Data.ArrayNum = (pFVar44->Data).ArrayNum;
        local_6f8.Data.ArrayMax = (pFVar44->Data).ArrayMax;
        (pFVar44->Data).ArrayNum = 0;
        (pFVar44->Data).ArrayMax = 0;
      }
      if (local_4c8[0] != (void *)0x0) {
        FMemory::Free(local_4c8[0]);
      }
      ::FString::RemoveFromStart(&local_6f8,L"/",1,IgnoreCase);
      *(int *)(local_748 + 0x44) = this->CurrentBestCloudDir;
      *(undefined1 *)(local_748 + 0x40) = 1;
      uVar39 = (**(code **)((longlong)*this->ManifestSet + 0x28))(this->ManifestSet,local_748);
      *(undefined4 *)(local_748 + 0x5c) = uVar39;
      dVar9 = FStatsCollector::GetSeconds();
      FVar47.Data = local_708.Data.AllocatorInstance.Data;
      *(double *)(local_748 + 0x68) = dVar9;
      iVar35 = local_708.Data.ArrayNum;
      lVar42 = (longlong)local_708.Data.ArrayNum;
      iVar54 = local_6f8.Data.ArrayNum + -1;
      if (local_6f8.Data.ArrayNum == 0) {
        iVar54 = 0;
      }
      iVar40 = iVar54 + 1;
      if ((local_708.Data.ArrayNum == 0) && (iVar40 != 0)) {
        iVar40 = iVar54 + 2;
LAB_1432f348e:
        local_738.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (iVar40 != 0) goto LAB_1432f3499;
        local_738.Data._8_8_ = local_708.Data._8_8_ & 0xffffffff;
      }
      else {
        if (local_708.Data.ArrayNum == 0) goto LAB_1432f348e;
LAB_1432f3499:
        local_738.Data.ArrayNum = local_708.Data.ArrayNum;
        local_738.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        uVar57 = local_708.Data.ArrayNum + iVar40;
        if ((int)uVar57 < local_708.Data.ArrayNum) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar57);
        }
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar57,0,(ForAnyElementType *)&local_738,local_708.Data.ArrayNum,
                   &local_738.Data.ArrayMax);
        if (iVar35 != 0) {
          memcpy(local_738.Data.AllocatorInstance.Data,FVar47.Data,lVar42 * 2);
        }
      }
      ::FString::PathAppend(&local_738,(wchar_t *)local_6f8.Data.AllocatorInstance.Data,iVar54);
      lVar42 = local_748;
      pFVar44 = (FString *)(local_748 + 0x48);
      if (pFVar44 != &local_738) {
        pFVar48 = (pFVar44->Data).AllocatorInstance.Data;
        if (pFVar48 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar48);
        }
        (pFVar44->Data).AllocatorInstance.Data = local_738.Data.AllocatorInstance.Data;
        local_738.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(lVar42 + 0x50) = local_738.Data.ArrayNum;
        *(int *)(lVar42 + 0x54) = local_738.Data.ArrayMax;
        local_738.Data.ArrayNum = 0;
        local_738.Data.ArrayMax = 0;
      }
      if (local_738.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_738.Data.AllocatorInstance.Data);
      }
      local_540 = local_748 + 0x70;
      local_538 = &local_748;
      TSet<TTuple<int,BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*>,TDefaultMapHashableKeyFuncs<int,BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<int_const_&,BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*_const_&>_>
                ((TSet<TTuple<int,BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*>,TDefaultMapHashableKeyFuncs<int,BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*,0>,FDefaultSetAllocator>
                  *)&this->InFlightURLRequests,
                 (TPairInitializer<int_const_&,BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*_const_&>
                  *)(local_5e0 + 0xc),(bool *)&local_540);
      FVar47.Data = local_708.Data.AllocatorInstance.Data;
      lVar42 = (longlong)local_708.Data.ArrayNum;
      pIVar13 = this->MessagePump;
      pcVar15 = *(code **)((longlong)*pIVar13 + 0x20);
      local_4d8 = *(undefined4 *)(local_748 + 0x70);
      local_4e8 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`BuildPatchServices::FConstructorCloudChunkSource::Tick'::`164'::<lambda_2>,0,0>
                   ::_vftable_;
      local_4d0 = 0;
      local_640.Data = (FScriptContainerElement *)0x0;
      local_4f8[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`BuildPatchServices::FConstructorCloudChunkSource::Tick'::__l164::<lambda_2>,void,BuildPatchServices::FChunkUriResponse>
                     ::Call;
      local_4d4 = local_32c;
      local_638 = local_708.Data.ArrayNum;
      local_4e0 = this;
      if (local_708.Data.ArrayNum == 0) {
        local_634 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_708.Data.ArrayNum,0,&local_640,local_708.Data.ArrayNum,&local_634);
        memcpy(local_640.Data,FVar47.Data,lVar42 * 2);
      }
      FVar47.Data = local_6f8.Data.AllocatorInstance.Data;
      lVar42 = (longlong)local_6f8.Data.ArrayNum;
      local_630.Data = (FScriptContainerElement *)0x0;
      local_628 = local_6f8.Data.ArrayNum;
      if (local_6f8.Data.ArrayNum == 0) {
        local_624 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_6f8.Data.ArrayNum,0,&local_630,local_6f8.Data.ArrayNum,&local_624);
        memcpy(local_630.Data,FVar47.Data,lVar42 * 2);
      }
      cVar32 = (*pcVar15)(pIVar13,&local_640,local_4f8);
      if (cVar32 == '\0') {
        if (*(int *)&(this->InFlightURLRequests).field_0x8 !=
            *(int *)&(this->InFlightURLRequests).field_0x34) {
          puVar10 = *(undefined1 **)&(this->InFlightURLRequests).field_0x40;
          puVar49 = &(this->InFlightURLRequests).field_0x38;
          if (puVar10 != (undefined1 *)0x0) {
            puVar49 = puVar10;
          }
          iVar35 = *(int *)(puVar49 +
                           ((longlong)*(int *)&(this->InFlightURLRequests).field_0x48 - 1U &
                           (longlong)*(int *)(local_748 + 0x70)) * 4);
          if (iVar35 != -1) {
            do {
              if (*(int *)(*(longlong *)&this->InFlightURLRequests + (longlong)iVar35 * 0x18) ==
                  *(int *)(local_748 + 0x70)) {
                TSet<TTuple<int,BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*>,TDefaultMapHashableKeyFuncs<int,BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*,0>,FDefaultSetAllocator>
                ::RemoveByIndex((TSet<TTuple<int,BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*>,TDefaultMapHashableKeyFuncs<int,BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*,0>,FDefaultSetAllocator>
                                 *)&this->InFlightURLRequests,iVar35);
                break;
              }
              iVar35 = *(int *)(*(longlong *)&this->InFlightURLRequests + 0x10 +
                               (longlong)iVar35 * 0x18);
            } while (iVar35 != -1);
          }
        }
        local_228._16_8_ = 0;
        local_228._24_8_ = 0;
        local_1f0 = 0;
        local_1e0 = 0;
        local_228._0_8_ = 0;
        local_228._8_8_ = 0;
        local_228._32_8_ = 0;
        local_228._40_4_ = 0;
        local_228._44_4_ = 0x80;
        local_228._48_4_ = 0xffffffff;
        local_228._52_4_ = 0;
        local_1e8 = (void *)0x0;
        uVar39 = (**(code **)((longlong)*this->DownloadService + 0x10))
                           (this->DownloadService,local_748 + 0x48,&local_228,
                            &this->OnDownloadCompleteDelegate);
        *(undefined4 *)(local_748 + 0x60) = uVar39;
        local_1e0 = local_1e0 & 0xffffffff00000000;
        if (local_1e8 != (void *)0x0) {
          FMemory::Free(local_1e8);
        }
        TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_228);
        local_550 = local_748 + 0x60;
        local_548 = &local_748;
        TSet<TTuple<int,BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*>,TDefaultMapHashableKeyFuncs<int,BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<int_const_&,BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*_const_&>_>
                  ((TSet<TTuple<int,BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*>,TDefaultMapHashableKeyFuncs<int,BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*,0>,FDefaultSetAllocator>
                    *)&this->InFlightDownloads,&local_5d0,(bool *)&local_550);
        (**(code **)((longlong)*this->CloudChunkSourceStat + 8))
                  (this->CloudChunkSourceStat,local_748);
      }
      if (dVar19 == this->StartTime) {
        this->StartTime = *(double *)(local_748 + 0x68);
      }
      if (local_6f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6f8.Data.AllocatorInstance.Data);
      }
      if (local_708.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_708.Data.AllocatorInstance.Data);
      }
    }
    iVar35 = (int)local_710;
  }
  iVar54 = local_73c;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS7) && (_Init_thread_header(&::_TSS7), ::_TSS7 == -1)) {
    __TraceCounter1420.CounterId._0_2_ =
         FCountersTrace::OutputInitCounter
                   (L"BPS.Cloud.OldestDownload",TraceCounterType_Int,TraceCounterDisplayHint_None);
    LOCK();
    __TraceCounter1420.CounterId._2_2_ = 0;
    UNLOCK();
    atexit(`BuildPatchServices::FConstructorCloudChunkSource::Tick'::__l2::
           _dynamic_atexit_destructor_for____TraceCounter1420__);
    _Init_thread_footer(&::_TSS7);
  }
  lVar42 = (longlong)(iVar54 - iVar35);
  if ((__TraceCounter1420.Value != lVar42) &&
     (__TraceCounter1420.Value = lVar42, -1 < CountersChannel->Enabled)) {
    if (__TraceCounter1420.CounterId == (atomic<unsigned_int>)0x0) {
      uVar34 = FCountersTrace::OutputInitCounter
                         (__TraceCounter1420.CounterName,TraceCounterType_Int,
                          __TraceCounter1420.CounterFlags & 0xf);
      LOCK();
      if (__TraceCounter1420.CounterId == (atomic<unsigned_int>)0x0) {
        __TraceCounter1420.CounterId._2_2_ = 0;
        __TraceCounter1420.CounterId._0_2_ = uVar34;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue(__TraceCounter1420.CounterId._0_2_,__TraceCounter1420.Value);
  }
  if (local_644 !=
      *(int *)&(this->InFlightDownloads).field_0x8 - *(int *)&(this->InFlightDownloads).field_0x34)
  {
    (**(code **)((longlong)*this->CloudChunkSourceStat + 0x50))();
  }
  uVar57 = 0xffffffff;
  dVar19 = FStatsCollector::GetSeconds();
  EnterCriticalSection((LPCRITICAL_SECTION)&this->ReadQueueCS);
  dVar9 = __real_7fefffffffffffff;
  iVar35 = (this->ReadQueue).ArrayNum;
  if (iVar35 != 0) {
    pFVar50 = (this->ReadQueue).AllocatorInstance.Data;
    pFVar48 = pFVar50 + (longlong)iVar35 * 8;
    uVar39 = SUB84(__real_7fefffffffffffff,0);
    uVar60 = (int)((ulonglong)__real_7fefffffffffffff >> 0x20);
    while( true ) {
      if ((this->ReadQueue).ArrayNum != iVar35) {
        `TCheckedPointerIterator<BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_728);
      }
      if (pFVar50 == pFVar48) break;
      uVar59 = uVar39;
      uVar61 = uVar60;
      if (*(int *)(*(longlong *)pFVar50 + 0x58) != 0) {
        dVar18 = *(double *)(*(longlong *)pFVar50 + 0x78);
        uVar59 = SUB84(dVar18,0);
        uVar61 = (int)((ulonglong)dVar18 >> 0x20);
        if ((double)CONCAT44(uVar60,uVar39) <= dVar18) {
          uVar59 = uVar39;
          uVar61 = uVar60;
        }
      }
      pFVar50 = pFVar50 + 8;
      uVar39 = uVar59;
      uVar60 = uVar61;
    }
    if ((double)CONCAT44(uVar60,uVar39) != dVar9) {
      dVar19 = (double)CONCAT44(uVar60,uVar39) - dVar19;
      if (dVar19 <= 0.0) {
        uVar57 = 0;
      }
      else {
        uVar57 = (uint)(longlong)(dVar19 * __real_408f400000000000);
        if (0x1e < uVar57) {
          uVar57 = 0x1e;
        }
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->ReadQueueCS);
  if ((*(int *)&(this->InFlightDownloads).field_0x8 != *(int *)&(this->InFlightDownloads).field_0x34
      ) && ((uVar57 == 0xffffffff || (1000 < uVar57)))) {
    uVar57 = 1000;
  }
  local_280 = 0;
  *(uint *)local_5d0.Value = uVar57;
  if (local_288 != (void *)0x0) {
    FMemory::Free(local_288);
  }
  TSparseArray<TSparseSetElement<TTuple<int,BuildPatchServices::FChunkUriResponse>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,BuildPatchServices::FChunkUriResponse>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,BuildPatchServices::FChunkUriResponse>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_2c8);
  local_230 = 0;
  if (local_238 != (void *)0x0) {
    FMemory::Free(local_238);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TSharedRef<BuildPatchServices::IDownload,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TSharedRef<BuildPatchServices::IDownload,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TSharedRef<BuildPatchServices::IDownload,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_278);
  return;
  while (iVar35 = *(int *)(*(longlong *)&pTVar4->field_0x0 + 0x10 + (longlong)iVar35 * 0x18),
        iVar35 != -1) {
LAB_1432f2140:
    if (*(uint *)(*(longlong *)&pTVar4->field_0x0 + (longlong)iVar35 * 0x18) == uVar57) {
      TSet<TTuple<int,BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*>,TDefaultMapHashableKeyFuncs<int,BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*,0>,FDefaultSetAllocator>
      ::RemoveByIndex((TSet<TTuple<int,BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*>,TDefaultMapHashableKeyFuncs<int,BuildPatchServices::FConstructorCloudChunkSource::FCloudRead_*,0>,FDefaultSetAllocator>
                       *)pTVar4,iVar35);
      break;
    }
  }
LAB_1432f2166:
  *(undefined1 *)&local_758[4].A = 0;
  if (6 < (byte)LogCloudChunkSource._0_1_) {
    local_188.Base = local_168;
    local_188.CurPos = local_168;
    local_188.bIsDynamic = false;
    local_188.bIsExternal = false;
    local_188.End = local_118;
    FGuid::AppendString(local_758,&local_188,DigitsWithHyphensLower);
    if (local_188.End < local_188.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_188,1);
    }
    *local_188.CurPos = L'\0';
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogCloudChunkSource);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_188);
  }
  cVar32 = (**(code **)(**(longlong **)(puVar52 + 2) + 0x10))();
  if (cVar32 == '\0') {
    (**(code **)((longlong)*this->CloudChunkSourceStat + 0x18))();
    if (1 < (byte)LogCloudChunkSource._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCloudChunkSource);
    }
    uVar57 = local_758[4].B;
    uVar38 = 0;
    uVar37 = uVar38;
    if ((int)uVar57 < (this->CloudDirFailureCount).ArrayNum) {
      uVar37 = ~uVar57 >> 0x1f;
    }
    if ((uVar37 == 0) &&
       (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar33)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    pFVar48 = (this->CloudDirFailureCount).AllocatorInstance.Data + (longlong)(int)uVar57 * 4;
    *(int *)pFVar48 = *(int *)pFVar48 + 1;
    uVar57 = local_758[4].B;
    uVar37 = uVar38;
    if ((int)uVar57 < (this->CloudDirFailureCount).ArrayNum) {
      uVar37 = ~uVar57 >> 0x1f;
    }
    if ((uVar37 == 0) &&
       (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar33)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    if (0x6400000 <
        *(int *)((this->CloudDirFailureCount).AllocatorInstance.Data + (longlong)(int)uVar57 * 4)) {
      uVar57 = local_758[4].B;
      uVar37 = uVar38;
      if ((int)uVar57 < (this->CloudDirFailureCount).ArrayNum) {
        uVar37 = ~uVar57 >> 0x1f;
      }
      if ((uVar37 == 0) &&
         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar33)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      *(undefined4 *)
       ((this->CloudDirFailureCount).AllocatorInstance.Data + (longlong)(int)uVar57 * 4) = 0x6400000
      ;
    }
    if (((this->CloudDirFailureCount).ArrayNum < 1) &&
       (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar33)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    uVar57 = 1;
    local_720 = (IChunkDataSerialization *)0x0;
    pIVar56 = (IChunkDataSerialization *)&DAT_00000001;
    iVar35 = *(int *)(this->CloudDirFailureCount).AllocatorInstance.Data;
    if (1 < (this->CloudDirFailureCount).ArrayNum) {
      do {
        uVar37 = 0;
        if ((int)uVar57 < (this->CloudDirFailureCount).ArrayNum) {
          uVar37 = ~uVar57 >> 0x1f;
        }
        if ((uVar37 == 0) &&
           (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar33)) {
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        if (*(int *)((this->CloudDirFailureCount).AllocatorInstance.Data + (longlong)pIVar56 * 4) <
            iVar35) {
          uVar37 = 0;
          if ((int)uVar57 < (this->CloudDirFailureCount).ArrayNum) {
            uVar37 = ~uVar57 >> 0x1f;
          }
          if ((uVar37 == 0) &&
             (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar33)) {
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          plVar45 = (longlong *)(ulonglong)uVar57;
          iVar35 = *(int *)((this->CloudDirFailureCount).AllocatorInstance.Data +
                           (longlong)pIVar56 * 4);
          local_720 = pIVar56;
        }
        uVar38 = (uint)plVar45;
        uVar57 = uVar57 + 1;
        pIVar56 = (IChunkDataSerialization *)&pIVar56->field_0x1;
      } while ((int)uVar57 < (this->CloudDirFailureCount).ArrayNum);
    }
    this->CurrentBestCloudDir = uVar38;
    if (2 < (byte)LogCloudChunkSource._0_1_) {
      uVar57 = 0;
      if ((int)uVar38 < (this->Configuration).CloudRoots.ArrayNum) {
        uVar57 = ~uVar38 >> 0x1f;
      }
      if ((uVar57 == 0) &&
         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar33)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      uVar57 = 0;
      if ((int)local_758[4].B < (this->Configuration).CloudRoots.ArrayNum) {
        uVar57 = ~local_758[4].B >> 0x1f;
      }
      if ((uVar57 == 0) &&
         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar33)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCloudChunkSource);
    }
    pIVar13 = this->MessagePump;
    local_680 = 1;
    local_710 = *(code **)((longlong)*pIVar13 + 0x10);
    local_67c._0_4_ = local_758->A;
    local_67c._4_4_ = local_758->B;
    uStack_674._0_4_ = local_758->C;
    uStack_674._4_4_ = local_758->D;
    uVar57 = local_758[4].B;
    uVar37 = 0;
    if ((int)uVar57 < (this->Configuration).CloudRoots.ArrayNum) {
      uVar37 = ~uVar57 >> 0x1f;
    }
    if ((uVar37 == 0) &&
       (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar33)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    pFVar48 = (this->Configuration).CloudRoots.AllocatorInstance.Data;
    local_668.Data = (FScriptContainerElement *)0x0;
    iVar35 = *(int *)(pFVar48 + (longlong)(int)uVar57 * 0x10 + 8);
    pvVar11 = *(void **)(pFVar48 + (longlong)(int)uVar57 * 0x10);
    local_660 = CONCAT44(local_660._4_4_,iVar35);
    if (iVar35 == 0) {
      local_660 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar35,0,&local_668,iVar35,(int *)((longlong)&local_660 + 4));
      memcpy(local_668.Data,pvVar11,(longlong)iVar35 * 2);
    }
    pFVar48 = (FScriptContainerElement *)0x0;
    uVar37 = 0;
    uVar57 = uVar37;
    if ((int)uVar38 < (this->Configuration).CloudRoots.ArrayNum) {
      uVar57 = ~uVar38 >> 0x1f;
    }
    if ((uVar57 == 0) &&
       (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar33)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    pFVar50 = (this->Configuration).CloudRoots.AllocatorInstance.Data;
    local_658.Data = (FScriptContainerElement *)0x0;
    iVar35 = *(int *)(pFVar50 + (longlong)local_720 * 0x10 + 8);
    pvVar11 = *(void **)(pFVar50 + (longlong)local_720 * 0x10);
    FVar47.Data = pFVar48;
    if (iVar35 != 0) {
      local_650._0_4_ = iVar35;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar35,0,&local_658,iVar35,(int *)((longlong)&local_650 + 4));
      memcpy(local_658.Data,pvVar11,(longlong)iVar35 * 2);
      FVar47.Data = local_658.Data;
      uVar37 = local_650._4_4_;
      iVar35 = (int)local_650;
    }
    local_530 = local_680;
    local_518 = local_668.Data;
    local_510 = (undefined4)local_660;
    local_50c = local_660._4_4_;
    local_660 = 0;
    local_52c = (undefined4)local_67c;
    uStack_528 = local_67c._4_4_;
    uStack_524 = (undefined4)uStack_674;
    uStack_520 = uStack_674._4_4_;
    local_668.Data = (FScriptContainerElement *)0x0;
    local_658.Data = (FScriptContainerElement *)0x0;
    local_650 = 0;
    local_508 = FVar47.Data;
    local_500 = iVar35;
    local_4fc = uVar37;
    (*local_710)(pIVar13,&local_530);
    if (local_658.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_658.Data);
    }
    if (local_668.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_668.Data);
    }
    pFVar21 = local_758;
    (this->ChunkSuccessTracker).ImmediateValueCount =
         (this->ChunkSuccessTracker).ImmediateValueCount + dVar19;
    (this->ChunkSuccessTracker).TotalValueCount =
         (this->ChunkSuccessTracker).TotalValueCount + dVar19;
    local_758[5].C = local_758[5].C + 1;
    iVar35 = (this->Configuration).MaxRetryCount;
    if ((iVar35 < 0) || ((int)local_758[5].C < iVar35)) {
      dVar18 = FStatsCollector::GetSeconds();
      fVar58 = GetRetryDelay(&(this->Configuration).RetryDelayTimes,local_758[5].C);
      *(double *)&local_758[7].C = (double)fVar58 + dVar18;
      EnterCriticalSection((LPCRITICAL_SECTION)&this->ReadQueueCS);
      pTVar5 = &this->ReadQueue;
      pFVar48 = (pTVar5->AllocatorInstance).Data;
      if ((pFVar48 <= (FScriptContainerElement *)&local_758) &&
         (((FScriptContainerElement *)&local_758 <
           pFVar48 + (longlong)(this->ReadQueue).ArrayMax * 8 &&
          (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar33)))) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      iVar35 = (this->ReadQueue).ArrayNum;
      piVar2 = &(this->ReadQueue).ArrayMax;
      if (iVar35 == *piVar2) {
        iVar35 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar5->AllocatorInstance,piVar2);
        (this->ReadQueue).ArrayNum = iVar35 + 1;
      }
      else {
        (this->ReadQueue).ArrayNum = iVar35 + 1;
      }
      *(FGuid **)((pTVar5->AllocatorInstance).Data + (longlong)iVar35 * 8) = local_758;
      LeaveCriticalSection((LPCRITICAL_SECTION)&this->ReadQueueCS);
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(local_758 + 2),
                 &local_350);
      if (pFVar21[3].A != 0) {
        pFVar48 = *(FScriptContainerElement **)&pFVar21[2].C;
      }
      (**(code **)(*(longlong *)pFVar48 + 0x60))(pFVar48,pFVar21,0,1);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_350);
      pFVar21 = local_758;
      if (local_758 != (FGuid *)0x0) {
        if (*(void **)&local_758[4].C != (void *)0x0) {
          FMemory::Free(*(void **)&local_758[4].C);
        }
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)(pFVar21 + 2));
        ::operator_delete(pFVar21,0x80);
      }
    }
  }
  else {
    lVar42 = (**(code **)(**(longlong **)(puVar52 + 2) + 0x20))();
    this->TotalBytes = this->TotalBytes + (longlong)*(int *)(lVar42 + 8);
    dVar18 = FStatsCollector::GetSeconds();
    (**(code **)((longlong)*this->CloudChunkSourceStat + 0x30))(SUB84(dVar18,0),this->TotalBytes);
    local_478._padding_ = 0;
    local_478.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_478.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_478.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_478.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_478._40_8_ = 0;
    local_478.ArSerializingDefaults = 0;
    local_478.ArPortFlags = 0;
    local_478.ArMaxSerializeSize = 0;
    local_478.ArUEVer.FileVersionUE4 = 0;
    local_478.ArUEVer.FileVersionUE5 = 0;
    local_478.ArLicenseeUEVer = 0;
    local_478.ArEngineVer.Major = 0;
    local_478.ArEngineVer.Minor = 0;
    local_478.ArEngineVer.Patch = 0;
    local_478.ArEngineVer._6_2_ = 0;
    local_478.ArEngineVer.Changelist = 0;
    local_478.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_478.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_478.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_478.SerializedProperty = (FProperty *)0x0;
    local_478.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_478.bCustomVersionsAreReset = false;
    local_478._129_7_ = 0;
    local_478.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_478);
    local_3e8 = 0;
    local_3d8 = 0x7fffffffffffffff;
    local_478._padding_ = (longlong)&___7FMemoryReader__6B_;
    local_3e0 = lVar42;
    FArchiveState::SetIsLoading(&local_478,true);
    (**(code **)(local_478._padding_ + 0x108))(&local_478,0);
    FChunkHeader::FChunkHeader((FChunkHeader *)local_1d8);
    local_6e8 = (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0;
    local_4b8 = local_758[1].A;
    uStack_4b4 = local_758[1].B;
    uStack_4b0 = local_758[1].C;
    uStack_4ac = local_758[1].D;
    cVar32 = (**(code **)((longlong)*this->ChunkDataSerialization + 0x40))
                       (this->ChunkDataSerialization,&local_478,&local_4b8);
    pFVar21 = local_758;
    if (cVar32 == '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(local_758 + 2),
                 &local_368);
      if (pFVar21[3].A != 0) {
        plVar45 = *(longlong **)&pFVar21[2].C;
      }
      (**(code **)(*plVar45 + 0x60))(plVar45,pFVar21,0,1);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_368);
      pFVar21 = local_758;
      if (local_758 != (FGuid *)0x0) {
        if (*(void **)&local_758[4].C != (void *)0x0) {
          FMemory::Free(*(void **)&local_758[4].C);
        }
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)(pFVar21 + 2));
        ::operator_delete(pFVar21,0x80);
      }
    }
    else {
      if (((local_1d8[0x21] & Sha1) == None) &&
         (cVar32 = (**(code **)((longlong)*this->ManifestSet + 0x38))
                             (this->ManifestSet,local_758,local_1d8 + 0x30), cVar32 != '\0')) {
        local_1d8[0x21] = local_1d8[0x21] | Sha1;
      }
      uVar30 = auStack_19c._4_8_;
      uVar61 = auStack_19c._0_4_;
      uVar59 = local_1d8._56_4_;
      uVar60 = local_1d8._52_4_;
      uVar39 = local_1d8._48_4_;
      uVar28 = local_1d8._40_8_;
      uVar27 = local_1d8._24_8_;
      uVar26 = local_1d8._16_8_;
      uVar25 = local_1d8._8_8_;
      uVar24 = local_1d8._0_8_;
      FVar22 = local_6e8;
      pFVar21 = local_758;
      lVar42 = CONCAT62(local_1d8._34_6_,CONCAT11(local_1d8[0x21],local_1d8[0x20]));
      local_720 = this->ChunkDataSerialization;
      aVar12 = (atomic<unsigned___int64>)this->CloudChunkSourceStat;
      local_110 = local_1d8._0_8_;
      lStack_108 = local_1d8._8_8_;
      local_100 = local_1d8._16_8_;
      lStack_f8 = local_1d8._24_8_;
      local_6e8 = (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0;
      uStack_e8 = local_1d8._40_8_;
      local_e0[0] = local_1d8[0x30];
      local_e0[1] = local_1d8[0x31];
      local_e0[2] = local_1d8[0x32];
      local_e0[3] = local_1d8[0x33];
      auStack_dc[0] = local_1d8[0x34];
      auStack_dc[1] = local_1d8[0x35];
      auStack_dc[2] = local_1d8[0x36];
      auStack_dc[3] = local_1d8[0x37];
      aStack_d8 = (atomic<unsigned_int>)local_1d8._56_4_;
      auStack_d4[0] = auStack_19c[0];
      auStack_d4[1] = auStack_19c[1];
      auStack_d4[2] = auStack_19c[2];
      auStack_d4[3] = auStack_19c[3];
      auStack_d4[4] = auStack_19c[4];
      auStack_d4[5] = auStack_19c[5];
      auStack_d4[6] = auStack_19c[6];
      auStack_d4[7] = auStack_19c[7];
      auStack_d4[8] = auStack_19c[8];
      auStack_d4[9] = auStack_19c[9];
      auStack_d4[10] = auStack_19c[10];
      auStack_d4[0xb] = auStack_19c[0xb];
      local_f0 = lVar42;
      this_00 = FMemory::Malloc(0x140,0x40);
      if (this_00 == (FTaskBase *)0x0) {
        UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x140);
        if (FVar22 != (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0) {
          LOCK();
          plVar45 = (longlong *)((longlong)FVar22 + 0x18);
          lVar42 = *plVar45;
          *plVar45 = *plVar45 + -1;
          UNLOCK();
          if (((uint)lVar42 & 0x3fffffff) == 1) {
            (**(code **)(*(longlong *)FVar22 + 0x10))(FVar22);
            *(longlong *)((longlong)FVar22 + 8) = 0;
            *(longlong *)((longlong)FVar22 + 0x10) = 0;
            LOCK();
            puVar1 = (ulonglong *)((longlong)FVar22 + 0x18);
            uVar8 = *puVar1;
            *puVar1 = *puVar1 - 0x40000000;
            UNLOCK();
            if (((uint)(uVar8 >> 0x1e) & 0x3fffffff) == 1) {
              (*(code *)**(undefined8 **)FVar22)(FVar22,1);
            }
          }
        }
      }
      else {
        UE::Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
        this_00->_padding_ =
             (longlong)
             &UE::Tasks::Private::
              TExecutableTaskBase<`BuildPatchServices::FConstructorCloudChunkSource::Tick'::`74'::<lambda_1>,void,void>
              ::_vftable_;
        UE::Tasks::Private::FTaskBase::Init(this_00,L"CloudDecompressionAndHash",Default,None,None);
        uVar29 = local_1d8._40_8_;
        this_00[1]._padding_ = uVar24;
        this_00[1]._padding_ = uVar25;
        *(IChunkDataSerialization **)
         this_00[1].Prerequisites.Prerequisites.AllocatorInstance.InlineData = local_720;
        this_00[1]._padding_ = uVar26;
        this_00[1]._padding_ = uVar27;
        this_00[1]._padding_ = (longlong)pFVar21;
        this_00[1]._padding_ = lVar42;
        local_1d8._40_4_ = (undefined4)uVar28;
        local_1d8._44_4_ = SUB84(uVar28,4);
        this_00[1].RefCount = (atomic<unsigned_int>)local_1d8._40_4_;
        this_00[1].NumLocks = (atomic<unsigned_int>)local_1d8._44_4_;
        this_00[1].TraceId = aVar12;
        *(undefined4 *)&this_00[1].Pipe = uVar39;
        *(undefined4 *)((longlong)&this_00[1].Pipe + 4) = uVar60;
        this_00[1].StateChangeEvent.Count = (atomic<unsigned_int>)uVar59;
        *(undefined4 *)&this_00[1].ExtendedPriority = uVar61;
        *(undefined8 *)&this_00[1].ExecutingThreadId = uVar30;
        this_00[1].Prerequisites.Prerequisites.AllocatorInstance.SecondaryData = FVar22;
        this_00->_padding_ =
             (longlong)
             &UE::Tasks::Private::
              TExecutableTask<`BuildPatchServices::FConstructorCloudChunkSource::Tick'::`74'::<lambda_1>_>
              ::_vftable_;
        local_1d8._40_8_ = uVar29;
        UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0x140);
        LOCK();
        paVar6 = &this_00->RefCount;
        aVar7 = *paVar6;
        *paVar6 = (atomic<unsigned_int>)((int)*paVar6 + -1);
        UNLOCK();
        if (aVar7 == (atomic<unsigned_int>)0x1) {
          (**(code **)this_00->_padding_)(this_00,1);
        }
      }
    }
    FVar22 = local_6e8;
    dVar18 = (this->ChunkSuccessTracker).ImmediateAccumulatedValue + dVar19;
    dVar20 = (this->ChunkSuccessTracker).ImmediateValueCount + dVar9;
    auVar16._8_4_ = SUB84(dVar20,0);
    auVar16._0_8_ = dVar18;
    auVar16._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
    (this->ChunkSuccessTracker).ImmediateAccumulatedValue = dVar18;
    (this->ChunkSuccessTracker).ImmediateValueCount = (double)auVar16._8_8_;
    dVar18 = (this->ChunkSuccessTracker).TotalAccumulatedValue + dVar19;
    dVar20 = (this->ChunkSuccessTracker).TotalValueCount + dVar9;
    auVar17._8_4_ = SUB84(dVar20,0);
    auVar17._0_8_ = dVar18;
    auVar17._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
    (this->ChunkSuccessTracker).TotalAccumulatedValue = dVar18;
    (this->ChunkSuccessTracker).TotalValueCount = (double)auVar17._8_8_;
    if (local_6e8 != (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0) {
      LOCK();
      plVar45 = (longlong *)((longlong)local_6e8 + 0x18);
      lVar42 = *plVar45;
      *plVar45 = *plVar45 + -1;
      UNLOCK();
      if (((uint)lVar42 & 0x3fffffff) == 1) {
        (**(code **)(*(longlong *)local_6e8 + 0x10))(local_6e8);
        *(longlong *)((longlong)FVar22 + 8) = 0;
        *(longlong *)((longlong)FVar22 + 0x10) = 0;
        LOCK();
        puVar1 = (ulonglong *)((longlong)FVar22 + 0x18);
        uVar8 = *puVar1;
        *puVar1 = *puVar1 - 0x40000000;
        UNLOCK();
        if (((uint)(uVar8 >> 0x1e) & 0x3fffffff) == 1) {
          (*(code *)**(undefined8 **)FVar22)(FVar22,1);
        }
      }
    }
    FArchive::~FArchive((FArchive *)&local_478);
  }
LAB_1432f2def:
  if (bVar31) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  TStack_588.UnvisitedBitMask = TStack_588.UnvisitedBitMask & ~TStack_588._padding_._4_4_;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_588);
  goto LAB_1432f1ff6;
}

