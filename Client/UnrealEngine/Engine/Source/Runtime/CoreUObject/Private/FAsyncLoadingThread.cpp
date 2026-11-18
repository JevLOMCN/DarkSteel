// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 71

// FAsyncLoadingThread @ 141ed26c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FAsyncLoadingThread * __thiscall
FAsyncLoadingThread::FAsyncLoadingThread(FAsyncLoadingThread *this,int param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  FAsyncLoadingThread *pFVar6;
  FPrecacheCallbackHandler *pFVar7;
  FEvent *pFVar8;
  FAsyncLoadingThreadSettings *pFVar9;
  FRunnableThread *pFVar10;
  longlong *plVar11;
  undefined1 auStackY_78 [32];
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_78;
  this->_padding_ = (longlong)&_vftable__for__FRunnable__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPackageLoader__;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::Singleton.PathToState._0_8_ = 0;
    ::Singleton.PathToState._8_8_ = 0;
    ::Singleton.PathToState._32_8_ = 0;
    ::Singleton.PathToState._40_4_ = 0;
    ::Singleton.PathToState._44_4_ = 0x80;
    ::Singleton.PathToState._48_4_ = 0xffffffff;
    ::Singleton.PathToState._52_4_ = 0;
    ::Singleton.PathToState._64_8_ = 0;
    ::Singleton.PathToState._72_4_ = 0;
    ::Singleton.PathToWaitingPackageNodes._0_8_ = 0;
    ::Singleton.PathToWaitingPackageNodes._8_8_ = 0;
    ::Singleton.PathToWaitingPackageNodes._32_8_ = 0;
    ::Singleton.PathToWaitingPackageNodes._40_4_ = 0;
    ::Singleton.PathToWaitingPackageNodes._44_4_ = 0x80;
    ::Singleton.PathToWaitingPackageNodes._48_4_ = 0xffffffff;
    ::Singleton.PathToWaitingPackageNodes._52_4_ = 0;
    ::Singleton.PathToWaitingPackageNodes._64_8_ = 0;
    ::Singleton.PathToWaitingPackageNodes._72_4_ = 0;
    ::Singleton.PathsToFire.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    ::Singleton.PathsToFire.ArrayNum = 0;
    ::Singleton.PathsToFire.ArrayMax = 0;
    ::Singleton.CDORecursiveStack.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    ::Singleton.CDORecursiveStack.ArrayNum = 0;
    ::Singleton.CDORecursiveStack.ArrayMax = 0;
    ::Singleton.CDORecursives.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    ::Singleton.CDORecursives.ArrayNum = 0;
    ::Singleton.CDORecursives.ArrayMax = 0;
    InitializeCriticalSectionAndSpinCount
              ((LPCRITICAL_SECTION)&::Singleton.EDLBootNotificationManagerLock,4000);
    ::Singleton.bEnabled = true;
    atexit(`GetGEDLBootNotificationManager'::__l2::_dynamic_atexit_destructor_for__Singleton__);
    _Init_thread_footer(&::_TSS0);
  }
  this->Thread = (FRunnableThread *)0x0;
  this->EDLBootNotificationManager = &::Singleton;
  (this->StopTaskCounter).Counter = 0;
  (this->QueuedPackages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QueuedPackages).ArrayNum = 0;
  (this->QueuedPackages).ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->QueueCritical,4000);
  this->bShouldCancelLoading = (FThreadSafeBool)0x0;
  (this->IsLoadingSuspended).Counter = 0;
  (this->LoadedPackages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LoadedPackages).ArrayNum = 0;
  (this->LoadedPackages).ArrayMax = 0;
  *(undefined8 *)&this->LoadedPackagesNameLookup = 0;
  *(undefined8 *)&(this->LoadedPackagesNameLookup).field_0x8 = 0;
  *(undefined8 *)&(this->LoadedPackagesNameLookup).field_0x20 = 0;
  *(undefined4 *)&(this->LoadedPackagesNameLookup).field_0x28 = 0;
  *(undefined4 *)&(this->LoadedPackagesNameLookup).field_0x2c = 0x80;
  *(undefined4 *)&(this->LoadedPackagesNameLookup).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LoadedPackagesNameLookup).field_0x34 = 0;
  *(undefined8 *)&(this->LoadedPackagesNameLookup).field_0x40 = 0;
  *(undefined4 *)&(this->LoadedPackagesNameLookup).field_0x48 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->LoadedPackagesCritical,4000);
  (this->LoadedPackagesToProcess).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LoadedPackagesToProcess).ArrayNum = 0;
  (this->LoadedPackagesToProcess).ArrayMax = 0;
  (this->PackagesToDelete).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PackagesToDelete).ArrayNum = 0;
  (this->PackagesToDelete).ArrayMax = 0;
  *(undefined8 *)&this->LoadedPackagesToProcessNameLookup = 0;
  *(undefined8 *)&(this->LoadedPackagesToProcessNameLookup).field_0x8 = 0;
  *(undefined8 *)&(this->LoadedPackagesToProcessNameLookup).field_0x20 = 0;
  *(undefined4 *)&(this->LoadedPackagesToProcessNameLookup).field_0x28 = 0;
  *(undefined4 *)&(this->LoadedPackagesToProcessNameLookup).field_0x2c = 0x80;
  *(undefined4 *)&(this->LoadedPackagesToProcessNameLookup).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LoadedPackagesToProcessNameLookup).field_0x34 = 0;
  *(undefined8 *)&(this->LoadedPackagesToProcessNameLookup).field_0x40 = 0;
  *(undefined4 *)&(this->LoadedPackagesToProcessNameLookup).field_0x48 = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->LoadedPackagesToProcessCritical,4000);
  (this->FlushRequests).AllocatorInstance.SecondaryData = (ForElementType<FFlushRequest>)0x0;
  (this->FlushRequests).ArrayNum = 0;
  (this->FlushRequests).ArrayMax = 4;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->FlushRequestCritical,4000);
  *(undefined8 *)&this->DuplicateRequestMap = 0;
  *(undefined8 *)&(this->DuplicateRequestMap).field_0x8 = 0;
  *(undefined8 *)&(this->DuplicateRequestMap).field_0x20 = 0;
  *(undefined4 *)&(this->DuplicateRequestMap).field_0x28 = 0;
  *(undefined4 *)&(this->DuplicateRequestMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->DuplicateRequestMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DuplicateRequestMap).field_0x34 = 0;
  *(undefined8 *)&(this->DuplicateRequestMap).field_0x40 = 0;
  *(undefined4 *)&(this->DuplicateRequestMap).field_0x48 = 0;
  (this->AsyncPackages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AsyncPackages).ArrayNum = 0;
  (this->AsyncPackages).ArrayMax = 0;
  *(undefined8 *)&this->AsyncPackageNameLookup = 0;
  *(undefined8 *)&(this->AsyncPackageNameLookup).field_0x8 = 0;
  *(undefined8 *)&(this->AsyncPackageNameLookup).field_0x20 = 0;
  *(undefined4 *)&(this->AsyncPackageNameLookup).field_0x28 = 0;
  *(undefined4 *)&(this->AsyncPackageNameLookup).field_0x2c = 0x80;
  *(undefined4 *)&(this->AsyncPackageNameLookup).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AsyncPackageNameLookup).field_0x34 = 0;
  *(undefined8 *)&(this->AsyncPackageNameLookup).field_0x40 = 0;
  *(undefined4 *)&(this->AsyncPackageNameLookup).field_0x48 = 0;
  (this->AsyncPackagesReadyForTick).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AsyncPackagesReadyForTick).ArrayNum = 0;
  (this->AsyncPackagesReadyForTick).ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->AsyncPackagesCritical,4000);
  *(undefined8 *)&(this->PendingRequests).Elements = 0;
  *(undefined8 *)&(this->PendingRequests).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PendingRequests).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PendingRequests).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PendingRequests).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingRequests).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PendingRequests).Elements.field_0x34 = 0;
  (this->PendingRequests).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PendingRequests).HashSize = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->PendingRequestsCritical,4000);
  (this->QueuedPackagesCounter).Counter = 0;
  (this->ExistingAsyncPackagesCounter).Counter = 0;
  (this->AsyncThreadReady).Counter = 0;
  (this->QueuedPackagesToCancel).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QueuedPackagesToCancel).ArrayNum = 0;
  (this->QueuedPackagesToCancel).ArrayMax = 0;
  *(undefined8 *)&(this->PackagesToCancel).Elements = 0;
  *(undefined8 *)&(this->PackagesToCancel).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PackagesToCancel).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PackagesToCancel).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PackagesToCancel).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PackagesToCancel).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PackagesToCancel).Elements.field_0x34 = 0;
  (this->PackagesToCancel).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PackagesToCancel).HashSize = 0;
  this->IoStorePackageLoader = (IAsyncPackageLoader *)0x0;
  (this->EventQueue).RunningSerialNumber = 0;
  (this->EventQueue).EventQueue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EventQueue).EventQueue.ArrayNum = 0;
  (this->EventQueue).EventQueue.ArrayMax = 0;
  *(undefined8 *)&(this->EventGraph).PackagesWithNodes.Elements = 0;
  *(undefined8 *)&(this->EventGraph).PackagesWithNodes.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->EventGraph).PackagesWithNodes.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->EventGraph).PackagesWithNodes.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->EventGraph).PackagesWithNodes.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->EventGraph).PackagesWithNodes.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->EventGraph).PackagesWithNodes.Elements.field_0x34 = 0;
  (this->EventGraph).PackagesWithNodes.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->EventGraph).PackagesWithNodes.HashSize = 0;
  (this->EventGraph).IndicesToFire.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EventGraph).IndicesToFire.ArrayNum = 0;
  (this->EventGraph).IndicesToFire.ArrayMax = 0;
  (this->RecursionNotAllowed).Counter = 0;
  if (Instance == (FAsyncLoadingThread *)0x0) {
    Instance = this;
  }
  this->AsyncLoadingThreadIndex = param_1;
  if ((bThreadStarted != false) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bThreadStarted",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                         ,0x1401,L""), bVar5)) {
    pcVar1 = (code *)swi(3);
    pFVar6 = (FAsyncLoadingThread *)(*pcVar1)();
    return pFVar6;
  }
  GEventDrivenLoaderEnabled = true;
  pFVar7 = ::operator_new(0x140);
  if (pFVar7 == (FPrecacheCallbackHandler *)0x0) {
    pFVar7 = (FPrecacheCallbackHandler *)0x0;
  }
  else {
    *(undefined8 *)&pFVar7->PrecacheCallBack = 0;
    *(undefined8 *)&(pFVar7->PrecacheCallBack).field_0x28 = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pFVar7->IncomingLock,4000);
    (pFVar7->Incoming).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->Incoming).ArrayNum = 0;
    (pFVar7->Incoming).ArrayMax = 0;
    (pFVar7->IncomingSummaries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->IncomingSummaries).ArrayNum = 0;
    (pFVar7->IncomingSummaries).ArrayMax = 0;
    *(undefined8 *)&pFVar7->WaitingPackages = 0;
    *(undefined8 *)&(pFVar7->WaitingPackages).field_0x8 = 0;
    *(undefined8 *)&(pFVar7->WaitingPackages).field_0x20 = 0;
    pFVar7->bFireIncomingEvent = false;
    pFVar7->PermanentIncomingEvent = (FEvent *)0x0;
    *(undefined4 *)&(pFVar7->WaitingPackages).field_0x28 = 0;
    *(undefined4 *)&(pFVar7->WaitingPackages).field_0x2c = 0x80;
    *(undefined4 *)&(pFVar7->WaitingPackages).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar7->WaitingPackages).field_0x34 = 0;
    *(undefined8 *)&(pFVar7->WaitingPackages).field_0x40 = 0;
    *(undefined4 *)&(pFVar7->WaitingPackages).field_0x48 = 0;
    *(undefined8 *)&(pFVar7->WaitingSummaries).Elements = 0;
    *(undefined8 *)&(pFVar7->WaitingSummaries).Elements.field_0x8 = 0;
    *(undefined8 *)&(pFVar7->WaitingSummaries).Elements.field_0x20 = 0;
    *(undefined4 *)&(pFVar7->WaitingSummaries).Elements.field_0x28 = 0;
    *(undefined4 *)&(pFVar7->WaitingSummaries).Elements.field_0x2c = 0x80;
    *(undefined4 *)&(pFVar7->WaitingSummaries).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar7->WaitingSummaries).Elements.field_0x34 = 0;
    (pFVar7->WaitingSummaries).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    (pFVar7->WaitingSummaries).HashSize = 0;
    pFVar7->UnprocessedMemUsed = 0;
    pFVar7->bPrecacheRequestsEnabled = true;
    pFVar7->bStalledOnMemory = false;
    lVar3 = *(longlong *)&pFVar7->PrecacheCallBack;
    local_38 = *(longlong *)&(pFVar7->PrecacheCallBack).field_0x10;
    uVar4 = *(undefined8 *)&(pFVar7->PrecacheCallBack).field_0x18;
    uVar2 = *(undefined8 *)&(pFVar7->PrecacheCallBack).field_0x20;
    plStack_20 = *(longlong **)&(pFVar7->PrecacheCallBack).field_0x28;
    *(code **)&pFVar7->PrecacheCallBack =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FPrecacheCallbackHandler::FPrecacheCallbackHandler'::__l2::<lambda_1>,void,bool,IAsyncReadRequest_*>
         ::Call;
    *(undefined8 *)&(pFVar7->PrecacheCallBack).field_0x8 = uStack_40;
    uStack_30._0_4_ = SUB84(pFVar7,0);
    uStack_30._4_4_ = (undefined4)((ulonglong)pFVar7 >> 0x20);
    *(undefined4 *)&(pFVar7->PrecacheCallBack).field_0x10 = 0x507f0128;
    *(undefined4 *)&(pFVar7->PrecacheCallBack).field_0x14 = 1;
    *(undefined4 *)&(pFVar7->PrecacheCallBack).field_0x18 = (undefined4)uStack_30;
    *(undefined4 *)&(pFVar7->PrecacheCallBack).field_0x1c = uStack_30._4_4_;
    *(undefined4 *)&(pFVar7->PrecacheCallBack).field_0x20 = (undefined4)local_28;
    *(undefined4 *)&(pFVar7->PrecacheCallBack).field_0x24 = local_28._4_4_;
    *(undefined4 *)&(pFVar7->PrecacheCallBack).field_0x28 = 0;
    *(undefined4 *)&(pFVar7->PrecacheCallBack).field_0x2c = 0;
    uStack_30 = uVar4;
    local_28 = uVar2;
    if (lVar3 != 0) {
      plVar11 = &local_38;
      if (plStack_20 != (longlong *)0x0) {
        plVar11 = plStack_20;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
  }
  this->PrecacheHandler = pFVar7;
  pFVar8 = FGenericPlatformProcess::GetSynchEventFromPool(false);
  this->QueuedRequestsEvent = pFVar8;
  pFVar8 = FGenericPlatformProcess::GetSynchEventFromPool(false);
  this->CancelLoadingEvent = pFVar8;
  pFVar8 = FGenericPlatformProcess::GetSynchEventFromPool(false);
  this->ThreadSuspendedEvent = pFVar8;
  pFVar8 = FGenericPlatformProcess::GetSynchEventFromPool(false);
  this->ThreadResumedEvent = pFVar8;
  if ((((GEventDrivenLoaderEnabled == false) &&
       (pFVar9 = FAsyncLoadingThreadSettings::Get(), pFVar9->bAsyncLoadingThreadEnabled != false))
      && (FGCCSyncObject::Create(), this->Thread == (FRunnableThread *)0x0)) &&
     (pFVar9 = FAsyncLoadingThreadSettings::Get(), pFVar9->bAsyncLoadingThreadEnabled != false)) {
    UE::Trace::ThreadGroupBegin(L"AsyncLoading");
    if (4 < (byte)LogStreaming._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
    }
    bThreadStarted = true;
    pFVar10 = FRunnableThread::Create
                        ((FRunnable *)this,L"FAsyncLoadingThread",0,TPri_Normal,0xffffffffffffffff,
                         None);
    this->Thread = pFVar10;
    UE::Trace::ThreadGroupEnd();
  }
  if (3 < (byte)LogStreaming._0_1_) {
    FAsyncLoadingThreadSettings::Get();
    FAsyncLoadingThreadSettings::Get();
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
  }
  return this;
}

// ~FAsyncLoadingThread @ 141ed53d0

void __thiscall FAsyncLoadingThread::~FAsyncLoadingThread(FAsyncLoadingThread *this)

{
  FRunnableThread *pFVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<FSetElementId> FVar3;
  void *pvVar4;
  code *pcVar5;
  bool bVar6;
  ForElementType<FFlushRequest> FVar7;
  FAsyncLoadEventArgs local_28;
  
  this->_padding_ = (longlong)&_vftable__for__FRunnable__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPackageLoader__;
  if (this->Thread != (FRunnableThread *)0x0) {
    local_28.TimeLimit = 0.0;
    local_28.TickStartTime = 0.0;
    local_28.bUseTimeLimit = false;
    local_28.bUseFullTimeLimit = true;
    local_28.OutLastTypeOfWorkPerformed = (wchar_t *)0x0;
    local_28.OutLastObjectWorkWasPerformedOn = (UObject *)0x0;
    bVar6 = FAsyncLoadEventQueue::PopAndExecute(&this->EventQueue,&local_28);
    if (bVar6) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!EventQueue.PopAndExecute(Args)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                         ,0x1429,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar1 = this->Thread;
    if (pFVar1 != (FRunnableThread *)0x0) {
      (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,1);
    }
    this->Thread = (FRunnableThread *)0x0;
    FGenericPlatformProcess::ReturnSynchEventToPool(this->QueuedRequestsEvent);
    this->QueuedRequestsEvent = (FEvent *)0x0;
    FGenericPlatformProcess::ReturnSynchEventToPool(this->CancelLoadingEvent);
    this->CancelLoadingEvent = (FEvent *)0x0;
    FGenericPlatformProcess::ReturnSynchEventToPool(this->ThreadSuspendedEvent);
    this->ThreadSuspendedEvent = (FEvent *)0x0;
    FGenericPlatformProcess::ReturnSynchEventToPool(this->ThreadResumedEvent);
    this->ThreadResumedEvent = (FEvent *)0x0;
  }
  pFVar2 = (this->EventGraph).IndicesToFire.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  (this->EventGraph).PackagesWithNodes.HashSize = 0;
  FVar3 = (this->EventGraph).PackagesWithNodes.Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<FUnsafeWeakAsyncPackagePtr>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FUnsafeWeakAsyncPackagePtr>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FUnsafeWeakAsyncPackagePtr>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->EventGraph);
  DestructItems<FAsyncLoadEvent,int>
            ((FAsyncLoadEvent *)(this->EventQueue).EventQueue.AllocatorInstance.Data,
             (this->EventQueue).EventQueue.ArrayNum);
  pFVar2 = (this->EventQueue).EventQueue.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  (this->PackagesToCancel).HashSize = 0;
  FVar3 = (this->PackagesToCancel).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<FAsyncPackage_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FAsyncPackage_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->PackagesToCancel).Elements);
  pFVar2 = (this->QueuedPackagesToCancel).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->PendingRequestsCritical);
  (this->PendingRequests).HashSize = 0;
  FVar3 = (this->PendingRequests).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->PendingRequests).Elements);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->AsyncPackagesCritical);
  pFVar2 = (this->AsyncPackagesReadyForTick).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->AsyncPackageNameLookup).field_0x48 = 0;
  pvVar4 = *(void **)&(this->AsyncPackageNameLookup).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FAsyncPackage_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FAsyncPackage_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FAsyncPackage_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AsyncPackageNameLookup);
  pFVar2 = (this->AsyncPackages).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->DuplicateRequestMap).field_0x48 = 0;
  pvVar4 = *(void **)&(this->DuplicateRequestMap).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DuplicateRequestMap);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->FlushRequestCritical);
  FVar7 = (this->FlushRequests).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<FFlushRequest>)0x0) {
    FVar7 = (ForElementType<FFlushRequest>)&this->FlushRequests;
  }
  DestructItems<FFlushRequest,int>((FFlushRequest *)FVar7,(this->FlushRequests).ArrayNum);
  FVar7 = (this->FlushRequests).AllocatorInstance.SecondaryData;
  if (FVar7 != (ForElementType<FFlushRequest>)0x0) {
    FMemory::Free((void *)FVar7);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->LoadedPackagesToProcessCritical);
  *(undefined4 *)&(this->LoadedPackagesToProcessNameLookup).field_0x48 = 0;
  pvVar4 = *(void **)&(this->LoadedPackagesToProcessNameLookup).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FAsyncPackage_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FAsyncPackage_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FAsyncPackage_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->LoadedPackagesToProcessNameLookup);
  pFVar2 = (this->PackagesToDelete).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->LoadedPackagesToProcess).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->LoadedPackagesCritical);
  *(undefined4 *)&(this->LoadedPackagesNameLookup).field_0x48 = 0;
  pvVar4 = *(void **)&(this->LoadedPackagesNameLookup).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FAsyncPackage_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FAsyncPackage_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FAsyncPackage_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->LoadedPackagesNameLookup);
  pFVar2 = (this->LoadedPackages).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->QueueCritical);
  pFVar2 = (this->QueuedPackages).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7IAsyncPackageLoader__6B_;
  this->_padding_ = (longlong)&___7FRunnable__6B_;
  return;
}

// operator() @ 141ed80e0

void __thiscall
`FAsyncLoadingThread::QueueEvent_CreateLinker'::__l2::<lambda_1>::operator()
          (void *this,FAsyncLoadEventArgs *param_1)

{
  int iVar1;
  FAsyncPackage *this_00;
  code *pcVar2;
  bool bVar3;
  TTuple<FName,FAsyncPackage_*> *pTVar4;
  
  iVar1 = *(int *)((longlong)this + 8);
  if ((*(FName *)this != (FName)0x0) && (iVar1 != 0)) {
    pTVar4 = TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
                     *)(*(longlong *)((longlong)this + 0x10) + 0x280),*(FName *)this);
    if ((pTVar4 != (TTuple<FName,FAsyncPackage_*> *)0x0) &&
       ((this_00 = *(FAsyncPackage **)&pTVar4->field_0x8, this_00 != (FAsyncPackage *)0x0 &&
        (this_00->SerialNumber == iVar1)))) {
      param_1->OutLastTypeOfWorkPerformed = L"Create Linker";
      param_1->OutLastObjectWorkWasPerformedOn = (UObject *)this_00->LinkerRoot;
      this_00->TickStartTime = param_1->TickStartTime;
      this_00->LastTypeOfWorkPerformed = L"Create Linker";
      this_00->LastObjectWorkWasPerformedOn = (UObject *)this_00->LinkerRoot;
      this_00->TimeLimit = param_1->TimeLimit;
      this_00->bUseTimeLimit = param_1->bUseTimeLimit;
      this_00->bUseFullTimeLimit = param_1->bUseFullTimeLimit;
      FAsyncPackage::Event_CreateLinker(this_00);
      param_1->OutLastObjectWorkWasPerformedOn = (UObject *)this_00->LinkerRoot;
      return;
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pkg",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                     ,0x70a,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

// operator() @ 141ed81f0

void __thiscall
`FAsyncLoadingThread::QueueEvent_ExportsDone'::__l2::<lambda_1>::operator()
          (void *this,FAsyncLoadEventArgs *param_1)

{
  int iVar1;
  FAsyncPackage *this_00;
  TTuple<FName,FAsyncPackage_*> *pTVar2;
  
  iVar1 = *(int *)((longlong)this + 8);
  if ((*(FName *)this != (FName)0x0) && (iVar1 != 0)) {
    pTVar2 = TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
                     *)(*(longlong *)((longlong)this + 0x10) + 0x280),*(FName *)this);
    if ((pTVar2 != (TTuple<FName,FAsyncPackage_*> *)0x0) &&
       ((this_00 = *(FAsyncPackage **)&pTVar2->field_0x8, this_00 != (FAsyncPackage *)0x0 &&
        (this_00->SerialNumber == iVar1)))) {
      param_1->OutLastTypeOfWorkPerformed = L"Exports Done";
      param_1->OutLastObjectWorkWasPerformedOn = (UObject *)this_00->LinkerRoot;
      this_00->TickStartTime = param_1->TickStartTime;
      this_00->LastObjectWorkWasPerformedOn = (UObject *)this_00->LinkerRoot;
      this_00->LastTypeOfWorkPerformed = L"Exports Done";
      this_00->TimeLimit = param_1->TimeLimit;
      this_00->bUseTimeLimit = param_1->bUseTimeLimit;
      this_00->bUseFullTimeLimit = param_1->bUseFullTimeLimit;
      FAsyncPackage::Event_ExportsDone(this_00);
    }
  }
  return;
}

// operator() @ 141ed82a0

void __thiscall
`FAsyncLoadingThread::QueueEvent_ProcessImportsAndExports'::__l2::<lambda_1>::operator()
          (void *this,FAsyncLoadEventArgs *param_1)

{
  FTlsAutoCleanup this_00;
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  TTuple<FName,FAsyncPackage_*> *pTVar4;
  uint *puVar5;
  FTlsAutoCleanup *pFVar6;
  FExclusiveLoadPackageTimeTracker *this_01;
  char *pcVar7;
  FTlsAutoCleanup FVar8;
  int iVar9;
  undefined1 local_res8 [16];
  FLLMScope local_res18 [2];
  FMemScope local_res20;
  FName local_48;
  undefined1 *local_40;
  FScopedAsyncPackageEvent local_38;
  
  local_48 = *(FName *)this;
  iVar9 = *(int *)((longlong)this + 8);
  if (local_48 == (FName)0x0) {
    return;
  }
  if (iVar9 == 0) {
    return;
  }
  pTVar4 = TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
                   *)(*(longlong *)((longlong)this + 0x10) + 0x280),local_48);
  if (pTVar4 == (TTuple<FName,FAsyncPackage_*> *)0x0) {
    return;
  }
  this_00 = *(FTlsAutoCleanup *)&pTVar4->field_0x8;
  if (this_00 == (FTlsAutoCleanup)0x0) {
    return;
  }
  if (*(int *)((longlong)this_00 + 0x2dc) != iVar9) {
    return;
  }
  param_1->OutLastTypeOfWorkPerformed = L"ProcessImportsAndExports";
  param_1->OutLastObjectWorkWasPerformedOn = (UObject *)*(UPackage **)((longlong)this_00 + 0x58);
  *(double *)((longlong)this_00 + 0x118) = param_1->TickStartTime;
  *(wchar_t **)((longlong)this_00 + 0x128) = L"ProcessImportsAndExports";
  *(UPackage **)((longlong)this_00 + 0x120) = *(UPackage **)((longlong)this_00 + 0x58);
  *(float *)((longlong)this_00 + 0x108) = param_1->TimeLimit;
  *(bool *)((longlong)this_00 + 0x10c) = param_1->bUseTimeLimit;
  *(bool *)((longlong)this_00 + 0x10d) = param_1->bUseFullTimeLimit;
  FLLMScope::FLLMScope(local_res18,AsyncLoading,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,AsyncLoading,true);
  if (*(bool *)((longlong)this_00 + 0x59a) == false) {
    if ((*(EAsyncPackageLoadingState *)((longlong)this_00 + 0x2d8) != ProcessNewImportsAndExports)
       && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("AsyncPackageLoadingState == EAsyncPackageLoadingState::ProcessNewImportsAndExports"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                              ,0xb5f,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_38.Package = (FAsyncPackage *)this_00;
    puVar5 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
    local_40 = local_res8;
    local_48 = (FName)UE::Core::Private::Function::
                      TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                      ::Call;
    pFVar6 = FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_48,puVar5);
    local_38.PreviousPackage = *(FAsyncPackage **)(pFVar6 + 8);
    local_38.PreviousAsyncPackageLoader = *(IAsyncPackageLoader **)(pFVar6 + 9);
    pFVar6[8] = this_00;
    FVar8 = (FTlsAutoCleanup)&(*(FAsyncLoadingThread **)((longlong)this_00 + 0x278))->_padding_;
    if (*(FAsyncLoadingThread **)((longlong)this_00 + 0x278) == (FAsyncLoadingThread *)0x0) {
      FVar8 = (FTlsAutoCleanup)0x0;
    }
    pFVar6[9] = FVar8;
    FAsyncPackage::BeginAsyncLoad((FAsyncPackage *)this_00);
    FVar1 = *(FName *)((longlong)this_00 + 0x1c);
    this_01 = FExclusiveLoadPackageTimeTracker::TrackerInstance;
    if (FExclusiveLoadPackageTimeTracker::TrackerInstance == (FExclusiveLoadPackageTimeTracker *)0x0
       ) {
      this_01 = FExclusiveLoadPackageTimeTracker::Construct();
    }
    FExclusiveLoadPackageTimeTracker::InternalPushLoadPackage(this_01,FVar1);
    FAsyncPackage::ProcessImportsAndExports_Event((FAsyncPackage *)this_00);
    *(bool *)((longlong)this_00 + 0x598) = false;
    FAsyncPackage::ConditionalQueueProcessImportsAndExports((FAsyncPackage *)this_00,true);
    FScopedAsyncPackageEvent::~FScopedAsyncPackageEvent(&local_38);
    if (*(EAsyncPackageLoadingState *)((longlong)this_00 + 0x2d8) == ProcessNewImportsAndExports)
    goto LAB_141ed84de;
    iVar9 = 0xb66;
    pcVar7 = "AsyncPackageLoadingState == EAsyncPackageLoadingState::ProcessNewImportsAndExports";
  }
  else {
    if ((((*(int *)((longlong)this_00 + 0x2e8) == 0) && (*(int *)((longlong)this_00 + 0x2f8) == 0))
        && (*(int *)((longlong)this_00 + 0x308) == 0)) &&
       (((*(int *)((longlong)this_00 + 0x318) == 0 && (*(int *)((longlong)this_00 + 0x328) == 0)) &&
        (*(int *)((longlong)this_00 + 0x338) == 0)))) goto LAB_141ed84de;
    iVar9 = 0xb5c;
    pcVar7 = "!AnyImportsAndExportWorkOutstanding()";
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    (pcVar7,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                     ,iVar9,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_141ed84de:
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res18);
  return;
}

// operator() @ 141ed8510

void __thiscall
`FAsyncLoadingThread::QueueEvent_ProcessPostloadWait'::__l2::<lambda_1>::operator()
          (void *this,FAsyncLoadEventArgs *param_1)

{
  int iVar1;
  FAsyncPackage *this_00;
  TTuple<FName,FAsyncPackage_*> *pTVar2;
  
  iVar1 = *(int *)((longlong)this + 8);
  if ((*(FName *)this != (FName)0x0) && (iVar1 != 0)) {
    pTVar2 = TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
                     *)(*(longlong *)((longlong)this + 0x10) + 0x280),*(FName *)this);
    if ((pTVar2 != (TTuple<FName,FAsyncPackage_*> *)0x0) &&
       ((this_00 = *(FAsyncPackage **)&pTVar2->field_0x8, this_00 != (FAsyncPackage *)0x0 &&
        (this_00->SerialNumber == iVar1)))) {
      param_1->OutLastTypeOfWorkPerformed = L"Process Process Postload Wait";
      param_1->OutLastObjectWorkWasPerformedOn = (UObject *)this_00->LinkerRoot;
      this_00->TickStartTime = param_1->TickStartTime;
      this_00->LastObjectWorkWasPerformedOn = (UObject *)this_00->LinkerRoot;
      this_00->LastTypeOfWorkPerformed = L"Process Process Postload Wait";
      this_00->TimeLimit = param_1->TimeLimit;
      this_00->bUseTimeLimit = param_1->bUseTimeLimit;
      this_00->bUseFullTimeLimit = param_1->bUseFullTimeLimit;
      FAsyncPackage::Event_ProcessPostloadWait(this_00);
    }
  }
  return;
}

// operator() @ 141ed85c0

void __thiscall
`FAsyncLoadingThread::QueueEvent_SetupExports'::__l2::<lambda_1>::operator()
          (void *this,FAsyncLoadEventArgs *param_1)

{
  int iVar1;
  FTlsAutoCleanup this_00;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  Type TVar5;
  TTuple<FName,FAsyncPackage_*> *pTVar6;
  uint *puVar7;
  FTlsAutoCleanup *pFVar8;
  FExclusiveLoadPackageTimeTracker *this_01;
  FTlsAutoCleanup FVar9;
  undefined1 local_res8 [8];
  FName local_38;
  undefined1 *local_30;
  FScopedAsyncPackageEvent local_28;
  
  local_38 = *(FName *)this;
  iVar1 = *(int *)((longlong)this + 8);
  if ((((local_38 != (FName)0x0) && (iVar1 != 0)) &&
      (pTVar6 = TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
                        *)(*(longlong *)((longlong)this + 0x10) + 0x280),local_38),
      pTVar6 != (TTuple<FName,FAsyncPackage_*> *)0x0)) &&
     ((this_00 = *(FTlsAutoCleanup *)&pTVar6->field_0x8, this_00 != (FTlsAutoCleanup)0x0 &&
      (*(int *)((longlong)this_00 + 0x2dc) == iVar1)))) {
    param_1->OutLastTypeOfWorkPerformed = L"Setup Exports";
    param_1->OutLastObjectWorkWasPerformedOn = (UObject *)*(UPackage **)((longlong)this_00 + 0x58);
    *(double *)((longlong)this_00 + 0x118) = param_1->TickStartTime;
    *(UPackage **)((longlong)this_00 + 0x120) = *(UPackage **)((longlong)this_00 + 0x58);
    *(wchar_t **)((longlong)this_00 + 0x128) = L"Setup Exports";
    *(float *)((longlong)this_00 + 0x108) = param_1->TimeLimit;
    *(bool *)((longlong)this_00 + 0x10c) = param_1->bUseTimeLimit;
    *(bool *)((longlong)this_00 + 0x10d) = param_1->bUseFullTimeLimit;
    local_28.Package = (FAsyncPackage *)this_00;
    puVar7 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
    local_30 = local_res8;
    local_38 = (FName)UE::Core::Private::Function::
                      TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                      ::Call;
    pFVar8 = FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_38,puVar7);
    local_28.PreviousPackage = *(FAsyncPackage **)(pFVar8 + 8);
    local_28.PreviousAsyncPackageLoader = *(IAsyncPackageLoader **)(pFVar8 + 9);
    pFVar8[8] = this_00;
    FVar9 = (FTlsAutoCleanup)&(*(FAsyncLoadingThread **)((longlong)this_00 + 0x278))->_padding_;
    if (*(FAsyncLoadingThread **)((longlong)this_00 + 0x278) == (FAsyncLoadingThread *)0x0) {
      FVar9 = (FTlsAutoCleanup)0x0;
    }
    pFVar8[9] = FVar9;
    FAsyncPackage::BeginAsyncLoad((FAsyncPackage *)this_00);
    FVar2 = *(FName *)((longlong)this_00 + 0x1c);
    this_01 = FExclusiveLoadPackageTimeTracker::TrackerInstance;
    if (FExclusiveLoadPackageTimeTracker::TrackerInstance == (FExclusiveLoadPackageTimeTracker *)0x0
       ) {
      this_01 = FExclusiveLoadPackageTimeTracker::Construct();
    }
    FExclusiveLoadPackageTimeTracker::InternalPushLoadPackage(this_01,FVar2);
    TVar5 = FAsyncPackage::SetupExports_Event((FAsyncPackage *)this_00);
    if (TVar5 == TimeOut) {
      FAsyncLoadingThread::QueueEvent_SetupExports
                (*(FAsyncLoadingThread **)((longlong)this_00 + 0x278),(FAsyncPackage *)this_00,0);
      FScopedAsyncPackageEvent::~FScopedAsyncPackageEvent(&local_28);
      return;
    }
    FScopedAsyncPackageEvent::~FScopedAsyncPackageEvent(&local_28);
    if ((*(EAsyncPackageLoadingState *)((longlong)this_00 + 0x2d8) != SetupExports) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("AsyncPackageLoadingState == EAsyncPackageLoadingState::SetupExports",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                           ,0xa71,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(EAsyncPackageLoadingState *)((longlong)this_00 + 0x2d8) = ProcessNewImportsAndExports;
    FAsyncPackage::ConditionalQueueProcessImportsAndExports((FAsyncPackage *)this_00,false);
  }
  return;
}

// operator() @ 141ed8790

/* WARNING: Enum "EEventLoadNode": Some values do not have unique names */

void __thiscall
`FAsyncLoadingThread::QueueEvent_SetupImports'::__l2::<lambda_1>::operator()
          (void *this,FAsyncLoadEventArgs *param_1)

{
  int iVar1;
  FTlsAutoCleanup this_00;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  Type TVar5;
  TTuple<FName,FAsyncPackage_*> *pTVar6;
  uint *puVar7;
  FTlsAutoCleanup *pFVar8;
  FExclusiveLoadPackageTimeTracker *this_01;
  FTlsAutoCleanup FVar9;
  undefined1 local_res8 [8];
  FEventLoadNodePtr local_48;
  code *local_38;
  undefined1 *local_30;
  FScopedAsyncPackageEvent local_28;
  
  local_48.WaitingPackage.Package = *(FAsyncPackage **)this;
  iVar1 = *(int *)((longlong)this + 8);
  if (((((FName)local_48.WaitingPackage.Package != (FName)0x0) && (iVar1 != 0)) &&
      (pTVar6 = TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
                        *)(*(longlong *)((longlong)this + 0x10) + 0x280),
                       (FName)local_48.WaitingPackage.Package),
      pTVar6 != (TTuple<FName,FAsyncPackage_*> *)0x0)) &&
     ((this_00 = *(FTlsAutoCleanup *)&pTVar6->field_0x8, this_00 != (FTlsAutoCleanup)0x0 &&
      (*(int *)((longlong)this_00 + 0x2dc) == iVar1)))) {
    param_1->OutLastTypeOfWorkPerformed = L"Setup Imports";
    param_1->OutLastObjectWorkWasPerformedOn = (UObject *)*(UPackage **)((longlong)this_00 + 0x58);
    *(double *)((longlong)this_00 + 0x118) = param_1->TickStartTime;
    *(UPackage **)((longlong)this_00 + 0x120) = *(UPackage **)((longlong)this_00 + 0x58);
    *(wchar_t **)((longlong)this_00 + 0x128) = L"Setup Imports";
    *(float *)((longlong)this_00 + 0x108) = param_1->TimeLimit;
    *(bool *)((longlong)this_00 + 0x10c) = param_1->bUseTimeLimit;
    *(bool *)((longlong)this_00 + 0x10d) = param_1->bUseFullTimeLimit;
    local_28.Package = (FAsyncPackage *)this_00;
    puVar7 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
    local_30 = local_res8;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pFVar8 = FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_38,puVar7);
    local_28.PreviousPackage = *(FAsyncPackage **)(pFVar8 + 8);
    local_28.PreviousAsyncPackageLoader = *(IAsyncPackageLoader **)(pFVar8 + 9);
    pFVar8[8] = this_00;
    FVar9 = (FTlsAutoCleanup)&(*(FAsyncLoadingThread **)((longlong)this_00 + 0x278))->_padding_;
    if (*(FAsyncLoadingThread **)((longlong)this_00 + 0x278) == (FAsyncLoadingThread *)0x0) {
      FVar9 = (FTlsAutoCleanup)0x0;
    }
    pFVar8[9] = FVar9;
    FAsyncPackage::BeginAsyncLoad((FAsyncPackage *)this_00);
    FVar2 = *(FName *)((longlong)this_00 + 0x1c);
    this_01 = FExclusiveLoadPackageTimeTracker::TrackerInstance;
    if (FExclusiveLoadPackageTimeTracker::TrackerInstance == (FExclusiveLoadPackageTimeTracker *)0x0
       ) {
      this_01 = FExclusiveLoadPackageTimeTracker::Construct();
    }
    FExclusiveLoadPackageTimeTracker::InternalPushLoadPackage(this_01,FVar2);
    TVar5 = FAsyncPackage::SetupImports_Event((FAsyncPackage *)this_00);
    if ((TVar5 != Complete) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("SetupImports_Event() == EAsyncPackageState::Complete",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                           ,0x91a,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FScopedAsyncPackageEvent::~FScopedAsyncPackageEvent(&local_28);
    if ((*(EAsyncPackageLoadingState *)((longlong)this_00 + 0x2d8) != SetupImports) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("AsyncPackageLoadingState == EAsyncPackageLoadingState::SetupImports",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                           ,0x91c,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((*(int *)((longlong)this_00 + 0xe0) !=
         (int)(*(FLinkerLoad **)((longlong)this_00 + 0x50))->_padding_) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ImportIndex == Linker->ImportMap.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                           ,0x91d,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(EAsyncPackageLoadingState *)((longlong)this_00 + 0x2d8) = SetupExports;
    local_48.ImportOrExportIndex.Index = 0;
    local_48.Phase = ImportOrExport_Serialize;
    local_48.WaitingPackage.Package = (FAsyncPackage *)this_00;
    FEventLoadGraph::RemoveNode
              (&(*(FAsyncLoadingThread **)((longlong)this_00 + 0x278))->EventGraph,&local_48);
    FAsyncLoadingThread::QueueEvent_SetupExports
              (*(FAsyncLoadingThread **)((longlong)this_00 + 0x278),(FAsyncPackage *)this_00,0);
  }
  return;
}

// operator() @ 141ed89d0

/* WARNING: Enum "EEventLoadNode": Some values do not have unique names */

void __thiscall
`FAsyncLoadingThread::QueueEvent_StartImportPackages'::__l2::<lambda_1>::operator()
          (void *this,FAsyncLoadEventArgs *param_1)

{
  int iVar1;
  FName this_00;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  Type TVar5;
  TTuple<FName,FAsyncPackage_*> *pTVar6;
  uint *puVar7;
  FTlsAutoCleanup *pFVar8;
  FExclusiveLoadPackageTimeTracker *this_01;
  FTlsAutoCleanup FVar9;
  undefined1 local_res8 [16];
  FLLMScope local_res18 [2];
  FMemScope local_res20;
  FEventLoadNodePtr local_58;
  code *local_48;
  undefined1 *local_40;
  FScopedAsyncPackageEvent local_38;
  
  local_58.WaitingPackage.Package = *(FAsyncPackage **)this;
  iVar1 = *(int *)((longlong)this + 8);
  if (((((FName)local_58.WaitingPackage.Package != (FName)0x0) && (iVar1 != 0)) &&
      (pTVar6 = TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
                        *)(*(longlong *)((longlong)this + 0x10) + 0x280),
                       (FName)local_58.WaitingPackage.Package),
      pTVar6 != (TTuple<FName,FAsyncPackage_*> *)0x0)) &&
     ((this_00 = *(FName *)&pTVar6->field_0x8, this_00 != (FName)0x0 &&
      (*(int *)((longlong)this_00 + 0x2dc) == iVar1)))) {
    param_1->OutLastTypeOfWorkPerformed = L"Start Import Packages";
    param_1->OutLastObjectWorkWasPerformedOn = *(UObject **)((longlong)this_00 + 0x58);
    *(double *)((longlong)this_00 + 0x118) = param_1->TickStartTime;
    *(wchar_t **)((longlong)this_00 + 0x128) = L"Start Import Packages";
    *(undefined8 *)((longlong)this_00 + 0x120) = *(undefined8 *)((longlong)this_00 + 0x58);
    *(float *)((longlong)this_00 + 0x108) = param_1->TimeLimit;
    *(bool *)((longlong)this_00 + 0x10c) = param_1->bUseTimeLimit;
    *(bool *)((longlong)this_00 + 0x10d) = param_1->bUseFullTimeLimit;
    FLLMScope::FLLMScope(local_res18,AsyncLoading,false,None,Default,true);
    FMemScope::FMemScope(&local_res20,AsyncLoading,true);
    local_38.Package = (FAsyncPackage *)this_00;
    puVar7 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
    local_40 = local_res8;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pFVar8 = FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_48,puVar7);
    local_38.PreviousPackage = *(FAsyncPackage **)(pFVar8 + 8);
    local_38.PreviousAsyncPackageLoader = *(IAsyncPackageLoader **)(pFVar8 + 9);
    *(FName *)(pFVar8 + 8) = this_00;
    FVar9 = (FTlsAutoCleanup)(*(longlong *)((longlong)this_00 + 0x278) + 8);
    if (*(longlong *)((longlong)this_00 + 0x278) == 0) {
      FVar9 = (FTlsAutoCleanup)0x0;
    }
    pFVar8[9] = FVar9;
    FAsyncPackage::BeginAsyncLoad((FAsyncPackage *)this_00);
    FVar2 = *(FName *)((longlong)this_00 + 0x1c);
    this_01 = FExclusiveLoadPackageTimeTracker::TrackerInstance;
    if (FExclusiveLoadPackageTimeTracker::TrackerInstance == (FExclusiveLoadPackageTimeTracker *)0x0
       ) {
      this_01 = FExclusiveLoadPackageTimeTracker::Construct();
    }
    FExclusiveLoadPackageTimeTracker::InternalPushLoadPackage(this_01,FVar2);
    TVar5 = FAsyncPackage::LoadImports_Event((FAsyncPackage *)this_00);
    if (TVar5 == TimeOut) {
      FAsyncLoadingThread::QueueEvent_StartImportPackages
                (*(FAsyncLoadingThread **)((longlong)this_00 + 0x278),(FAsyncPackage *)this_00,
                 0x7fffffff);
      FScopedAsyncPackageEvent::~FScopedAsyncPackageEvent(&local_38);
    }
    else {
      FScopedAsyncPackageEvent::~FScopedAsyncPackageEvent(&local_38);
      if ((*(char *)((longlong)this_00 + 0x2d8) != '\x02') &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("AsyncPackageLoadingState == EAsyncPackageLoadingState::StartImportPackages"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                             ,0x7f7,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(undefined1 *)((longlong)this_00 + 0x2d8) = 3;
      local_58.ImportOrExportIndex.Index = 0;
      local_58.Phase = ImportOrExport_Serialize;
      local_58.WaitingPackage.Package = (FAsyncPackage *)this_00;
      FEventLoadGraph::DoneAddingPrerequistesFireIfNone
                ((FEventLoadGraph *)(*(longlong *)((longlong)this_00 + 0x278) + 0x410),&local_58,
                 true);
    }
    FMemScope::~FMemScope(&local_res20);
    FLLMScope::~FLLMScope(local_res18);
  }
  return;
}

// operator() @ 141ed8c00

void __thiscall
`FAsyncLoadingThread::QueueEvent_StartPostLoad'::__l2::<lambda_1>::operator()
          (void *this,FAsyncLoadEventArgs *param_1)

{
  int iVar1;
  FAsyncPackage *this_00;
  TTuple<FName,FAsyncPackage_*> *pTVar2;
  
  iVar1 = *(int *)((longlong)this + 8);
  if ((*(FName *)this != (FName)0x0) && (iVar1 != 0)) {
    pTVar2 = TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
                     *)(*(longlong *)((longlong)this + 0x10) + 0x280),*(FName *)this);
    if ((pTVar2 != (TTuple<FName,FAsyncPackage_*> *)0x0) &&
       ((this_00 = *(FAsyncPackage **)&pTVar2->field_0x8, this_00 != (FAsyncPackage *)0x0 &&
        (this_00->SerialNumber == iVar1)))) {
      param_1->OutLastTypeOfWorkPerformed = L"Start Post Load";
      param_1->OutLastObjectWorkWasPerformedOn = (UObject *)this_00->LinkerRoot;
      this_00->TickStartTime = param_1->TickStartTime;
      this_00->LastObjectWorkWasPerformedOn = (UObject *)this_00->LinkerRoot;
      this_00->LastTypeOfWorkPerformed = L"Start Post Load";
      this_00->TimeLimit = param_1->TimeLimit;
      this_00->bUseTimeLimit = param_1->bUseTimeLimit;
      this_00->bUseFullTimeLimit = param_1->bUseFullTimeLimit;
      FAsyncPackage::Event_StartPostload(this_00);
    }
  }
  return;
}

// operator() @ 141ed8eb0

bool __thiscall
`FAsyncLoadingThread::ShouldProcessPackage'::__l2::<lambda_1>::operator()
          (void *this,atomic<int> *param_1)

{
  atomic<int> aVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  lVar2 = *(longlong *)this;
  aVar1 = *param_1;
  AcquireSRWLockShared((PSRWLOCK)(lVar2 + 0x1a0));
  if (*(int *)(lVar2 + 0x1b0) != *(int *)(lVar2 + 0x1dc)) {
    lVar3 = *(longlong *)(lVar2 + 0x1e8);
    if (*(longlong *)(lVar2 + 0x1e8) == 0) {
      lVar3 = lVar2 + 0x1e0;
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)(*(int *)(lVar2 + 0x1f0) - 1U & (uint)aVar1) * 4);
    if (iVar4 != -1) {
      do {
        if (*(atomic<int> *)(*(longlong *)(lVar2 + 0x1a8) + (longlong)iVar4 * 0xc) == aVar1)
        goto LAB_141ed8f2d;
        iVar4 = *(int *)(*(longlong *)(lVar2 + 0x1a8) + 4 + (longlong)iVar4 * 0xc);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_141ed8f2d:
  ReleaseSRWLockShared((PSRWLOCK)(lVar2 + 0x1a0));
  return iVar4 != -1;
}

// operator() @ 141ed8f60

void __thiscall
`FAsyncLoadingThread::QueueEvent_FinishLinker'::__l5::<lambda_1>::operator()
          (void *this,FAsyncLoadEventArgs *param_1)

{
  int iVar1;
  FAsyncPackage *this_00;
  code *pcVar2;
  bool bVar3;
  TTuple<FName,FAsyncPackage_*> *pTVar4;
  
  iVar1 = *(int *)((longlong)this + 8);
  if ((*(FName *)this != (FName)0x0) && (iVar1 != 0)) {
    pTVar4 = TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
                     *)(*(longlong *)((longlong)this + 0x10) + 0x280),*(FName *)this);
    if ((pTVar4 != (TTuple<FName,FAsyncPackage_*> *)0x0) &&
       ((this_00 = *(FAsyncPackage **)&pTVar4->field_0x8, this_00 != (FAsyncPackage *)0x0 &&
        (this_00->SerialNumber == iVar1)))) {
      param_1->OutLastTypeOfWorkPerformed = L"Finish Linker";
      param_1->OutLastObjectWorkWasPerformedOn = (UObject *)this_00->LinkerRoot;
      this_00->TickStartTime = param_1->TickStartTime;
      this_00->LastObjectWorkWasPerformedOn = (UObject *)this_00->LinkerRoot;
      this_00->LastTypeOfWorkPerformed = L"Finish Linker";
      this_00->TimeLimit = param_1->TimeLimit;
      this_00->bUseTimeLimit = param_1->bUseTimeLimit;
      this_00->bUseFullTimeLimit = param_1->bUseFullTimeLimit;
      FAsyncPackage::Event_FinishLinker(this_00);
      return;
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("PkgInner",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                     ,0x74a,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

// AddFlushRequest @ 141edad60

FFlushRequest * __thiscall
FAsyncLoadingThread::AddFlushRequest
          (FAsyncLoadingThread *this,FFlushRequest *__return_storage_ptr__,
          TArrayView<int_const_,int> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<FFlushRequest,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  uint uVar5;
  int iVar6;
  TReferenceControllerBase<1> *pTVar7;
  ulong64 uVar8;
  void *_Dst;
  FFlushRequest *pFVar9;
  ForElementType<FFlushRequest> FVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  int *piVar15;
  atomic<int> aVar16;
  
  pTVar7 = ::operator_new(0x20);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
    (__return_storage_ptr__->Data).Object = (FFlushRequestData *)0x10;
    (__return_storage_ptr__->Data).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_UFFlushRequestData___00_SharedPointerInternals__6B_;
    aVar16 = SUB84(*(undefined8 *)&param_1->ArrayNum,0);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (longlong)(int)aVar16;
    uVar8 = SUB168(ZEXT816(4) * auVar3,0);
    if (SUB168(ZEXT816(4) * auVar3,8) != 0) {
      uVar8 = 0xffffffffffffffff;
    }
    _Dst = operator_new__(uVar8);
    uVar12 = 0;
    if (_Dst == (void *)0x0) {
      _Dst = (void *)0x0;
    }
    else if (aVar16 != (atomic<int>)0x0) {
      memset(_Dst,0,(longlong)(int)aVar16 * 4);
    }
    pTVar7[1]._padding_ = (longlong)_Dst;
    pTVar7[1].SharedReferenceCount = aVar16;
    pTVar7[1].WeakReferenceCount = (atomic<int>)0x0;
    if (0 < (int)aVar16) {
      piVar15 = param_1->DataPtr;
      uVar14 = uVar12;
      do {
        uVar13 = (uint)uVar14;
        uVar5 = 0;
        if ((int)uVar13 < (int)aVar16) {
          uVar5 = ~uVar13 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pFVar9 = (FFlushRequest *)(*pcVar2)();
          return pFVar9;
        }
        uVar14 = (ulonglong)(uVar13 + 1);
        LOCK();
        *(int *)(pTVar7[1]._padding_ + uVar12 * 4) = *piVar15;
        UNLOCK();
        piVar15 = piVar15 + 1;
        uVar12 = uVar12 + 1;
      } while ((int)(uVar13 + 1) < (int)aVar16);
    }
    if (((FFlushRequestData *)(pTVar7 + 1) == (FFlushRequestData *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FFlushRequest *)(*pcVar2)();
      return pFVar9;
    }
    (__return_storage_ptr__->Data).Object = (FFlushRequestData *)(pTVar7 + 1);
    (__return_storage_ptr__->Data).SharedReferenceCount.ReferenceController = pTVar7;
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  lpCriticalSection = &this->FlushRequestCritical;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  FVar10 = (this->FlushRequests).AllocatorInstance.SecondaryData;
  pTVar1 = &this->FlushRequests;
  if (FVar10 == (ForElementType<FFlushRequest>)0x0) {
    FVar10 = (ForElementType<FFlushRequest>)pTVar1;
  }
  if ((((ulonglong)FVar10 <= __return_storage_ptr__) &&
      (__return_storage_ptr__ <
       (FFlushRequest *)((longlong)(this->FlushRequests).ArrayMax * 0x10 + (longlong)FVar10))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar9 = (FFlushRequest *)(*pcVar2)();
    return pFVar9;
  }
  iVar6 = (this->FlushRequests).ArrayNum;
  piVar15 = &(this->FlushRequests).ArrayMax;
  if (iVar6 == *piVar15) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FFlushRequest>_>
                      (0x810,&pTVar1->AllocatorInstance,piVar15);
  }
  (this->FlushRequests).ArrayNum = iVar6 + 1;
  FVar10 = (this->FlushRequests).AllocatorInstance.SecondaryData;
  if (FVar10 == (ForElementType<FFlushRequest>)0x0) {
    FVar10 = (ForElementType<FFlushRequest>)pTVar1;
  }
  puVar11 = (undefined8 *)((longlong)FVar10 + (longlong)iVar6 * 0x10);
  *puVar11 = (__return_storage_ptr__->Data).Object;
  pTVar7 = (__return_storage_ptr__->Data).SharedReferenceCount.ReferenceController;
  puVar11[1] = pTVar7;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return __return_storage_ptr__;
}

// AddPendingRequest @ 141edbc90

void __thiscall FAsyncLoadingThread::AddPendingRequest(FAsyncLoadingThread *this,int param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  int local_res8 [2];
  int local_res10 [2];
  
  lpCriticalSection = &this->PendingRequestsCritical;
  local_res10[0] = param_1;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (*(int *)&(this->PendingRequests).Elements.field_0x8 !=
      *(int *)&(this->PendingRequests).Elements.field_0x34) {
    FVar5 = (this->PendingRequests).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->PendingRequests).Hash;
    }
    iVar4 = *(int *)((longlong)FVar5 +
                    (ulonglong)((this->PendingRequests).HashSize - 1U & param_1) * 4);
    if (iVar4 != -1) {
      lVar1 = *(longlong *)&(this->PendingRequests).Elements;
      do {
        if (*(int *)(lVar1 + (longlong)iVar4 * 0xc) == param_1) goto LAB_141edbd49;
        iVar4 = *(int *)(lVar1 + 4 + (longlong)iVar4 * 0xc);
      } while (iVar4 != -1);
    }
  }
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
            (&this->PendingRequests,local_res8,(bool *)local_res10);
LAB_141edbd49:
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// AddToLoadedPackages @ 141edbf90

void __thiscall
FAsyncLoadingThread::AddToLoadedPackages(FAsyncLoadingThread *this,FAsyncPackage *param_1)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<FAsyncPackage_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  FAsyncPackage *local_res10;
  FName *local_18;
  FAsyncPackage **local_10;
  
  lpCriticalSection = &this->LoadedPackagesCritical;
  local_res10 = param_1;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar2 = &this->LoadedPackages;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  pFVar3 = pFVar7 + (longlong)(this->LoadedPackages).ArrayNum * 8;
  for (; pFVar7 != pFVar3; pFVar7 = pFVar7 + 8) {
    if (*(FAsyncPackage **)pFVar7 == local_res10) goto LAB_141edc0d2;
  }
  if (ActiveAsyncLoadContext != (FActiveAsyncLoadContext *)0x0) {
    ActiveAsyncLoadContext->TotalCompleted = ActiveAsyncLoadContext->TotalCompleted + 1;
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if (((pFVar3 <= (FScriptContainerElement *)&local_res10) &&
      ((FScriptContainerElement *)&local_res10 <
       pFVar3 + (longlong)(this->LoadedPackages).ArrayMax * 8)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = (this->LoadedPackages).ArrayNum;
  piVar1 = &(this->LoadedPackages).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->LoadedPackages).ArrayNum = iVar6 + 1;
  *(FAsyncPackage **)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_res10;
  local_18 = &(local_res10->Desc).Name;
  local_10 = &local_res10;
  TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,FAsyncPackage_*_const_&>_>
            ((TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
              *)&this->LoadedPackagesNameLookup,
             (TPairInitializer<FName_const_&,FAsyncPackage_*_const_&> *)local_res8,(bool *)&local_18
            );
LAB_141edc0d2:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// AdjustFlushRequest @ 141edc7a0

void __thiscall
FAsyncLoadingThread::AdjustFlushRequest(FAsyncLoadingThread *this,FFlushRequest *param_1)

{
  atomic<int> *paVar1;
  int iVar2;
  FFlushRequestData *pFVar3;
  undefined1 *puVar4;
  code *pcVar5;
  bool bVar6;
  atomic<int> aVar7;
  atomic<int> *paVar8;
  atomic<int> *paVar9;
  undefined1 *puVar10;
  atomic<int> *paVar11;
  
  pFVar3 = (param_1->Data).Object;
  if (pFVar3 != (FFlushRequestData *)0x0) {
    paVar11 = (pFVar3->RequestIDs).Ptr;
    iVar2 = pFVar3->NumRequests;
    if ((iVar2 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    paVar1 = paVar11 + iVar2;
    if (paVar11 != paVar1) {
      do {
        if (*(int *)&(this->DuplicateRequestMap).field_0x8 !=
            *(int *)&(this->DuplicateRequestMap).field_0x34) {
          puVar4 = *(undefined1 **)&(this->DuplicateRequestMap).field_0x40;
          puVar10 = &(this->DuplicateRequestMap).field_0x38;
          if (puVar4 != (undefined1 *)0x0) {
            puVar10 = puVar4;
          }
          aVar7 = *(atomic<int> *)
                   (puVar10 +
                   (ulonglong)
                   (*(int *)&(this->DuplicateRequestMap).field_0x48 - 1U & (uint)*paVar11) * 4);
          if (aVar7 != (atomic<int>)0xffffffff) {
            do {
              paVar8 = (atomic<int> *)
                       ((longlong)(int)aVar7 * 0x10 + *(longlong *)&this->DuplicateRequestMap);
              if (*paVar8 == *paVar11) {
                paVar9 = paVar8 + 1;
                if (paVar8 == (atomic<int> *)0x0) {
                  paVar9 = (atomic<int> *)0x0;
                }
                if (paVar9 != (atomic<int> *)0x0) {
                  *paVar11 = *paVar9;
                }
                break;
              }
              aVar7 = paVar8[2];
            } while (aVar7 != (atomic<int>)0xffffffff);
          }
        }
        paVar11 = paVar11 + 1;
      } while (paVar11 != paVar1);
    }
  }
  return;
}

// CancelAsyncLoadingInternal @ 141ede670

void __thiscall FAsyncLoadingThread::CancelAsyncLoadingInternal(FAsyncLoadingThread *this)

{
  FWindowsRecursiveMutex *pFVar1;
  TArray<FAsyncPackageDesc_*,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined1 *puVar3;
  TArray<FAsyncPackageDesc_*,TSizedDefaultAllocator<32>_> *pTVar4;
  FEventLoadGraph *this_00;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_01;
  int iVar5;
  FPrecacheCallbackHandler *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  char cVar11;
  FEvent *pFVar12;
  int *piVar13;
  undefined4 uStack_ac;
  undefined4 uStack_9c;
  undefined4 uStack_8c;
  undefined4 uStack_7c;
  undefined4 uStack_6c;
  TArrayView<FAsyncPackage_*_const,int> local_68;
  TArrayView<FAsyncPackage_*_const,int> local_58;
  TArrayView<FAsyncPackage_*_const,int> local_48;
  TArrayView<FAsyncPackage_*_const,int> local_38;
  TArrayView<FAsyncPackage_*_const,int> local_28;
  
  bVar10 = false;
  bVar9 = IsInGameThread();
  if (bVar9) {
    iVar5 = this->AsyncLoadingThreadIndex;
    LOCK();
    AsyncLoadingTickCounter.Counter = AsyncLoadingTickCounter.Counter + 1;
    UNLOCK();
    if (((CurrentAsyncLoadingTickThreadIndex != -1) && (CurrentAsyncLoadingTickThreadIndex != iVar5)
        ) && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("CurrentAsyncLoadingTickThreadIndex == INDEX_NONE || CurrentAsyncLoadingTickThreadIndex == ThreadIndex"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoadingThread.h"
                                  ,0x1cb,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    bVar10 = true;
    CurrentAsyncLoadingTickThreadIndex = iVar5;
  }
  if (GEventDrivenLoaderEnabled != false) {
    while ((pFVar6 = this->PrecacheHandler,
           *(int *)&(pFVar6->WaitingPackages).field_0x8 !=
           *(int *)&(pFVar6->WaitingPackages).field_0x34 ||
           (*(int *)&(pFVar6->WaitingSummaries).Elements.field_0x8 !=
            *(int *)&(pFVar6->WaitingSummaries).Elements.field_0x34))) {
      pFVar1 = &pFVar6->IncomingLock;
      if (pFVar1 == (FWindowsRecursiveMutex *)0x0) goto LAB_141ededc0;
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
      if (((pFVar6->Incoming).ArrayNum == 0) && ((pFVar6->IncomingSummaries).ArrayNum == 0)) {
        if (pFVar6->PermanentIncomingEvent == (FEvent *)0x0) {
          pFVar12 = FGenericPlatformProcess::GetSynchEventFromPool(false);
          pFVar6->PermanentIncomingEvent = pFVar12;
        }
        pFVar6->bFireIncomingEvent = true;
        LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
        cVar11 = (**(code **)(pFVar6->PermanentIncomingEvent->_padding_ + 0x20))
                           (pFVar6->PermanentIncomingEvent,10000);
        if (cVar11 == '\0') {
          EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
          if (pFVar6->bFireIncomingEvent == false) {
            (**(code **)(pFVar6->PermanentIncomingEvent->_padding_ + 0x18))();
          }
          else {
            pFVar6->bFireIncomingEvent = false;
          }
          goto LAB_141ede7f1;
        }
        if ((pFVar6->bFireIncomingEvent != false) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("!bFireIncomingEvent",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                               ,0x656,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      else {
LAB_141ede7f1:
        LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
      }
      FPrecacheCallbackHandler::ProcessIncoming(this->PrecacheHandler);
    }
  }
  pFVar1 = &this->QueueCritical;
  if (pFVar1 != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
    pTVar2 = &this->QueuedPackages;
    pTVar4 = &this->QueuedPackagesToCancel;
    if (pTVar4 != pTVar2) {
      pFVar7 = (pTVar4->AllocatorInstance).Data;
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar7);
      }
      piVar13 = &(this->QueuedPackages).ArrayMax;
      (pTVar4->AllocatorInstance).Data = (pTVar2->AllocatorInstance).Data;
      (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (this->QueuedPackagesToCancel).ArrayNum = (this->QueuedPackages).ArrayNum;
      (this->QueuedPackagesToCancel).ArrayMax = *piVar13;
      (this->QueuedPackages).ArrayNum = 0;
      *piVar13 = 0;
    }
    piVar13 = &(this->QueuedPackages).ArrayMax;
    (this->QueuedPackages).ArrayNum = 0;
    if (*piVar13 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&pTVar2->AllocatorInstance,0,piVar13);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
    local_68.DataPtr = (FAsyncPackage **)(this->PackagesToDelete).AllocatorInstance.Data;
    iVar5 = (this->PackagesToDelete).ArrayNum;
    if ((iVar5 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    local_68._12_4_ = uStack_ac;
    local_68.ArrayNum = iVar5;
    TSet<FAsyncPackage_*,DefaultKeyFuncs<FAsyncPackage_*,0>,FDefaultSetAllocator>::Append
              (&this->PackagesToCancel,&local_68);
    local_58.DataPtr = (FAsyncPackage **)(this->AsyncPackagesReadyForTick).AllocatorInstance.Data;
    iVar5 = (this->AsyncPackagesReadyForTick).ArrayNum;
    if ((iVar5 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    local_58._12_4_ = uStack_9c;
    local_58.ArrayNum = iVar5;
    TSet<FAsyncPackage_*,DefaultKeyFuncs<FAsyncPackage_*,0>,FDefaultSetAllocator>::Append
              (&this->PackagesToCancel,&local_58);
    local_48.DataPtr = (FAsyncPackage **)(this->AsyncPackages).AllocatorInstance.Data;
    iVar5 = (this->AsyncPackages).ArrayNum;
    if ((iVar5 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    local_48._12_4_ = uStack_8c;
    local_48.ArrayNum = iVar5;
    TSet<FAsyncPackage_*,DefaultKeyFuncs<FAsyncPackage_*,0>,FDefaultSetAllocator>::Append
              (&this->PackagesToCancel,&local_48);
    piVar13 = &(this->AsyncPackagesReadyForTick).ArrayMax;
    (this->AsyncPackagesReadyForTick).ArrayNum = 0;
    if (*piVar13 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->AsyncPackagesReadyForTick).AllocatorInstance,0,piVar13);
    }
    piVar13 = &(this->AsyncPackages).ArrayMax;
    (this->AsyncPackages).ArrayNum = 0;
    if (*piVar13 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->AsyncPackages).AllocatorInstance,0,piVar13);
    }
    TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
             *)&this->AsyncPackageNameLookup);
    pFVar1 = &this->LoadedPackagesCritical;
    if (pFVar1 != (FWindowsRecursiveMutex *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
      local_38.DataPtr = (FAsyncPackage **)(this->LoadedPackages).AllocatorInstance.Data;
      iVar5 = (this->LoadedPackages).ArrayNum;
      if ((iVar5 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_38._12_4_ = uStack_7c;
      local_38.ArrayNum = iVar5;
      TSet<FAsyncPackage_*,DefaultKeyFuncs<FAsyncPackage_*,0>,FDefaultSetAllocator>::Append
                (&this->PackagesToCancel,&local_38);
      piVar13 = &(this->LoadedPackages).ArrayMax;
      (this->LoadedPackages).ArrayNum = 0;
      if (*piVar13 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&(this->LoadedPackages).AllocatorInstance,0,piVar13);
      }
      TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
      ::Reset((TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
               *)&this->LoadedPackagesNameLookup);
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
      pFVar1 = &this->LoadedPackagesToProcessCritical;
      if (pFVar1 != (FWindowsRecursiveMutex *)0x0) {
        EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
        local_28.DataPtr = (FAsyncPackage **)(this->LoadedPackagesToProcess).AllocatorInstance.Data;
        iVar5 = (this->LoadedPackagesToProcess).ArrayNum;
        if ((iVar5 < 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        local_28._12_4_ = uStack_6c;
        local_28.ArrayNum = iVar5;
        TSet<FAsyncPackage_*,DefaultKeyFuncs<FAsyncPackage_*,0>,FDefaultSetAllocator>::Append
                  (&this->PackagesToCancel,&local_28);
        piVar13 = &(this->LoadedPackagesToProcess).ArrayMax;
        (this->LoadedPackagesToProcess).ArrayNum = 0;
        if (*piVar13 < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,0,&(this->LoadedPackagesToProcess).AllocatorInstance,0,piVar13);
        }
        TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
        ::Reset((TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
                 *)&this->LoadedPackagesToProcessNameLookup);
        LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
        LOCK();
        (this->ExistingAsyncPackagesCounter).Counter = 0;
        UNLOCK();
        LOCK();
        (this->QueuedPackagesCounter).Counter = 0;
        UNLOCK();
        DestructItems<FAsyncLoadEvent,int>
                  ((FAsyncLoadEvent *)(this->EventQueue).EventQueue.AllocatorInstance.Data,
                   (this->EventQueue).EventQueue.ArrayNum);
        piVar13 = &(this->EventQueue).EventQueue.ArrayMax;
        (this->EventQueue).EventQueue.ArrayNum = 0;
        if (*piVar13 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x40,0x10,0,&(this->EventQueue).EventQueue.AllocatorInstance,0,piVar13);
        }
        this_00 = &this->EventGraph;
        bVar9 = 1 < (this->EventGraph).PackagesWithNodes.HashSize;
        if (!bVar9) {
          TSet<FUnsafeWeakAsyncPackagePtr,DefaultKeyFuncs<FUnsafeWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
          ::UnhashElements(&this_00->PackagesWithNodes);
        }
        puVar3 = &(this->EventGraph).PackagesWithNodes.Elements.field_0xc;
        *(undefined4 *)&(this->EventGraph).PackagesWithNodes.Elements.field_0x8 = 0;
        if (*(int *)puVar3 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,(ForAnyElementType *)this_00,0,(int *)puVar3);
        }
        *(undefined4 *)&(this->EventGraph).PackagesWithNodes.Elements.field_0x30 = 0xffffffff;
        *(undefined4 *)&(this->EventGraph).PackagesWithNodes.Elements.field_0x34 = 0;
        iVar5 = *(int *)&(this->EventGraph).PackagesWithNodes.Elements.field_0x2c;
        *(undefined4 *)&(this->EventGraph).PackagesWithNodes.Elements.field_0x28 = 0;
        if ((iVar5 < 0) || (0x80 < iVar5)) {
          *(undefined4 *)&(this->EventGraph).PackagesWithNodes.Elements.field_0x2c = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)
                     &(this->EventGraph).PackagesWithNodes.Elements.field_0x10,0);
        }
        if (bVar9) {
          (this->EventGraph).PackagesWithNodes.HashSize = 1;
          TSet<FUnsafeWeakAsyncPackagePtr,DefaultKeyFuncs<FUnsafeWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
          ::Rehash(&this_00->PackagesWithNodes);
        }
        pFVar1 = &this->PendingRequestsCritical;
        if ((pFVar1 == (FWindowsRecursiveMutex *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Mutex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                               ,0x1b,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
        this_01 = &this->PendingRequests;
        bVar9 = 1 < (this->PendingRequests).HashSize;
        if (!bVar9) {
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements(this_01);
        }
        puVar3 = &(this->PendingRequests).Elements.field_0xc;
        *(undefined4 *)&(this->PendingRequests).Elements.field_0x8 = 0;
        if (*(int *)puVar3 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,0,(ForAnyElementType *)this_01,0,(int *)puVar3);
        }
        *(undefined4 *)&(this->PendingRequests).Elements.field_0x30 = 0xffffffff;
        *(undefined4 *)&(this->PendingRequests).Elements.field_0x34 = 0;
        iVar5 = *(int *)&(this->PendingRequests).Elements.field_0x2c;
        *(undefined4 *)&(this->PendingRequests).Elements.field_0x28 = 0;
        if ((iVar5 < 0) || (0x80 < iVar5)) {
          *(undefined4 *)&(this->PendingRequests).Elements.field_0x2c = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)
                     &(this->PendingRequests).Elements.field_0x10,0);
        }
        if (bVar9) {
          (this->PendingRequests).HashSize = 1;
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash(this_01);
        }
        if (pFVar1 != (FWindowsRecursiveMutex *)0x0) {
          LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
        }
        NotifyAsyncLoadingStateHasMaybeChanged();
        (**(code **)(this->CancelLoadingEvent->_padding_ + 0x10))();
        if (bVar10) {
          LeaveAsyncLoadingTick(this->AsyncLoadingThreadIndex);
        }
        return;
      }
    }
  }
LAB_141ededc0:
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// CancelLoading @ 141ededd0

void __thiscall FAsyncLoadingThread::CancelLoading(FAsyncLoadingThread *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                       ,0x14eb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  LOCK();
  *(undefined4 *)((this->QueueCritical).CriticalSection.Opaque3 + 2) = 1;
  UNLOCK();
  if (bThreadStarted == false) {
    FlushAsyncLoading(-1);
    LOCK();
    *(undefined4 *)((this->QueueCritical).CriticalSection.Opaque3 + 2) = 0;
    UNLOCK();
  }
  else {
    (**(code **)(this->QueuedRequestsEvent->_padding_ + 0x20))
              (this->QueuedRequestsEvent,0xffffffff,0);
  }
  FinalizeCancelAsyncLoadingInternal((FAsyncLoadingThread *)&this[-1].AsyncLoadingThreadIndex);
  return;
}

// CheckForCycles @ 141edeed0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAsyncLoadingThread::CheckForCycles(FAsyncLoadingThread *this)

{
  longlong *plVar1;
  ulonglong uVar2;
  uint uVar3;
  FPrecacheCallbackHandler *pFVar4;
  longlong lVar5;
  code *pcVar6;
  longlong *plVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  TBitArray<FDefaultBitArrayAllocator> *pTVar13;
  uint uVar14;
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  longlong local_118;
  FName local_110;
  FName local_108;
  undefined4 local_100;
  longlong *local_f8;
  int iStack_f0;
  uint uStack_ec;
  TBitArray<FDefaultBitArrayAllocator> *local_e8;
  undefined4 uStack_e0;
  int iStack_dc;
  int local_d8;
  undefined4 uStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  longlong *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  FString local_98;
  FString local_88;
  FString local_78 [2];
  undefined4 local_4c;
  
  pFVar4 = this->PrecacheHandler;
  if (((*(int *)&(pFVar4->WaitingPackages).field_0x8 ==
        *(int *)&(pFVar4->WaitingPackages).field_0x34) &&
      (*(int *)&(pFVar4->WaitingSummaries).Elements.field_0x8 ==
       *(int *)&(pFVar4->WaitingSummaries).Elements.field_0x34)) &&
     ((this->EventQueue).EventQueue.ArrayNum == 0)) {
    FEventLoadGraph::CheckForCycles(&this->EventGraph,true);
    uVar14 = 0;
    if (0 < (this->AsyncPackages).ArrayNum) {
      local_118 = 0;
      do {
        uVar12 = 0;
        if ((int)uVar14 < (this->AsyncPackages).ArrayNum) {
          uVar12 = ~uVar14 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar5 = *(longlong *)((this->AsyncPackages).AllocatorInstance.Data + local_118);
        if (*(char *)(lVar5 + 0x2d8) == '\a') {
          if (*(int *)(lVar5 + 0x4e8) == *(int *)(lVar5 + 0x514)) {
            ::FName::ToString((FName *)(lVar5 + 0x14),&local_98);
            UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
            if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_98.Data.AllocatorInstance.Data);
            }
          }
          if (1 < (byte)LogStreaming._0_1_) {
            ::FName::ToString((FName *)(lVar5 + 0x14),&local_88);
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
            if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_88.Data.AllocatorInstance.Data);
            }
          }
          local_e8 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar5 + 0x4f0);
          iStack_f0 = 0;
          iVar10 = *(int *)(lVar5 + 0x508);
          plVar1 = (longlong *)(lVar5 + 0x4e0);
          local_d8 = 0;
          uStack_ec = 1;
          iStack_dc = 0;
          if (iVar10 != 0) {
            pTVar13 = local_e8;
            if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar5 + 0x500) !=
                (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
              pTVar13 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar5 + 0x500);
            }
            uVar12 = *(uint *)(pTVar13->AllocatorInstance).InlineData;
            while (uVar12 == 0) {
              lVar9 = (longlong)iStack_f0;
              local_d8 = local_d8 + 0x20;
              iStack_f0 = iStack_f0 + 1;
              iStack_dc = iVar10;
              if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_f0)
              goto LAB_141edf10f;
              uVar12 = *(uint *)((pTVar13->AllocatorInstance).InlineData + lVar9 * 4 + 4);
            }
            uStack_ec = -uVar12 & uVar12;
            uVar2 = (ulonglong)uStack_ec * 2 + 1;
            lVar9 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
              }
            }
            local_res18 = (int)lVar9;
            iStack_dc = local_d8 + -1 + local_res18;
            if (iVar10 < iStack_dc) {
              iStack_dc = iVar10;
            }
          }
LAB_141edf10f:
          uStack_d4 = local_4c;
          iStack_d0 = *(int *)(lVar5 + 0x4e8) - *(int *)(lVar5 + 0x514);
          uVar12 = *(uint *)(lVar5 + 0x508);
          TStack_c0._padding_ = CONCAT44(uStack_ec,iStack_f0);
          uStack_e0 = 0xffffffff;
          uVar11 = uVar12 & 0xffffffe0;
          TStack_c0.CurrentBitIndex = iStack_dc;
          TStack_c0.UnvisitedBitMask = 0xffffffff;
          iVar10 = (int)uVar12 >> 5;
          TStack_c0._28_4_ = local_4c;
          TStack_c0.BaseBitIndex = local_d8;
          uStack_a0 = CONCAT44(uStack_cc,iStack_d0);
          local_f8 = plVar1;
          local_c8 = plVar1;
          TStack_c0.Array = local_e8;
          if (((int)uVar12 < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x7af,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar3 = *(uint *)(lVar5 + 0x508);
          if (uVar12 != uVar3) {
            pTVar13 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar5 + 0x4f0);
            if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar5 + 0x500) !=
                (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
              pTVar13 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar5 + 0x500);
            }
            uVar12 = -1 << ((byte)uVar12 & 0x1f) &
                     *(uint *)((pTVar13->AllocatorInstance).InlineData + (longlong)iVar10 * 4);
            while (uVar12 == 0) {
              lVar9 = (longlong)iVar10;
              uVar11 = uVar11 + 0x20;
              iVar10 = iVar10 + 1;
              uVar12 = uVar3;
              if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
              goto LAB_141edf230;
              uVar12 = *(uint *)((pTVar13->AllocatorInstance).InlineData + lVar9 * 4 + 4);
            }
            uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
            lVar9 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
              }
            }
            local_res20 = (int)lVar9;
            uVar12 = local_res20 + -1 + uVar11;
            if ((int)uVar3 < (int)uVar12) {
              uVar12 = uVar3;
            }
          }
LAB_141edf230:
          while( true ) {
            plVar7 = local_c8;
            if ((int)local_c8[1] - *(int *)((longlong)local_c8 + 0x34) != (int)uStack_a0) {
              local_res10[0] = 0;
              `TSparseArray<TSparseSetElement<FWeakAsyncPackagePtr>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
            }
            if (((TStack_c0.CurrentBitIndex == uVar12) &&
                (TStack_c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(lVar5 + 0x4f0))) &&
               (plVar7 == plVar1)) break;
            lVar9 = *plVar7;
            local_108 = *(FName *)(lVar9 + (longlong)TStack_c0.CurrentBitIndex * 0x14);
            local_100 = *(undefined4 *)(lVar9 + 8 + (longlong)TStack_c0.CurrentBitIndex * 0x14);
            if (1 < (byte)LogStreaming._0_1_) {
              local_110 = local_108;
              ::FName::ToString(&local_110,local_78);
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
              if (local_78[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_78[0].Data.AllocatorInstance.Data);
              }
            }
            TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
          }
        }
        uVar14 = uVar14 + 1;
        local_118 = local_118 + 8;
      } while ((int)uVar14 < (this->AsyncPackages).ArrayNum);
    }
  }
  return;
}

// CompleteFlushRequests @ 141ee2810

void __thiscall
FAsyncLoadingThread::CompleteFlushRequests
          (FAsyncLoadingThread *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  int *piVar16;
  longlong lVar17;
  longlong *plVar18;
  ForElementType<FFlushRequest> FVar19;
  ForElementType<FFlushRequest> FVar20;
  int iVar21;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  int local_78;
  
  lpCriticalSection = &this->FlushRequestCritical;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar4 = param_1->ArrayNum;
  uVar10 = (ulonglong)(int)uVar4;
  pFVar11 = (param_1->AllocatorInstance).Data;
  pFVar2 = pFVar11 + uVar10 * 4;
  do {
    if (param_1->ArrayNum != (int)uVar10) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar11 == pFVar2) {
                    /* WARNING: Could not recover jumptable at 0x000141ee2b39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return;
    }
    iVar5 = *(int *)pFVar11;
    piVar1 = &(this->FlushRequests).ArrayNum;
    FVar20 = (this->FlushRequests).AllocatorInstance.SecondaryData;
    iVar21 = *piVar1;
    if (FVar20 == (ForElementType<FFlushRequest>)0x0) {
      FVar20 = (ForElementType<FFlushRequest>)&this->FlushRequests;
    }
    FVar19 = (ForElementType<FFlushRequest>)((longlong)iVar21 * 0x10 + (longlong)FVar20);
    while( true ) {
      if (*piVar1 != iVar21) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FFlushRequest,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (FVar20 == FVar19) break;
      if ((*(longlong *)FVar20 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      puVar6 = *(undefined8 **)FVar20;
      iVar12 = *(int *)(puVar6 + 1);
      piVar16 = (int *)*puVar6;
      if ((iVar12 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      piVar3 = piVar16 + iVar12;
      for (; piVar16 != piVar3; piVar16 = piVar16 + 1) {
        if (*piVar16 == iVar5) {
          *(int *)((longlong)puVar6 + 0xc) = *(int *)((longlong)puVar6 + 0xc) + 1;
        }
      }
      FVar20 = (ForElementType<FFlushRequest>)((longlong)FVar20 + 0x10);
    }
    lVar17 = (longlong)*piVar1;
    if (*piVar1 != 0) {
      FVar20 = (this->FlushRequests).AllocatorInstance.SecondaryData;
      FVar19 = (ForElementType<FFlushRequest>)&this->FlushRequests;
      if (FVar20 != (ForElementType<FFlushRequest>)0x0) {
        FVar19 = FVar20;
      }
      iVar21 = 0;
      local_78 = 0;
      lVar14 = 0;
      if ((*(longlong *)FVar19 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      bVar8 = *(int *)(*(longlong *)FVar19 + 8) != *(int *)(*(longlong *)FVar19 + 0xc);
      iVar12 = 0;
      do {
        lVar14 = lVar14 + 1;
        iVar13 = iVar12 + 1;
        if (lVar14 < lVar17) {
          plVar18 = (longlong *)(lVar14 * 0x10 + (longlong)FVar19);
          do {
            if ((*plVar18 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar9)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar21 = local_78;
            if (bVar8 != (*(int *)(*plVar18 + 8) != *(int *)(*plVar18 + 0xc))) break;
            iVar13 = iVar13 + 1;
            lVar14 = lVar14 + 1;
            plVar18 = plVar18 + 2;
          } while (lVar14 < lVar17);
        }
        iVar15 = iVar13 - iVar12;
        if (bVar8 == false) {
          DestructItems<FFlushRequest,int>
                    ((FFlushRequest *)((longlong)iVar12 * 0x10 + (longlong)FVar19),iVar15);
        }
        else {
          if (iVar21 != iVar12) {
            memmove((longlong *)((longlong)iVar21 * 0x10 + (longlong)FVar19),
                    (longlong *)((longlong)iVar12 * 0x10 + (longlong)FVar19),(longlong)iVar15 << 4);
          }
          iVar21 = iVar21 + iVar15;
          local_78 = iVar21;
        }
        bVar8 = (bool)(bVar8 ^ 1);
        iVar12 = iVar13;
      } while (lVar14 < lVar17);
      (this->FlushRequests).ArrayNum = iVar21;
    }
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Remove
              ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
               &this->DuplicateRequestMap,iVar5);
    pFVar11 = pFVar11 + 4;
    uVar10 = (ulonglong)uVar4;
  } while( true );
}

// CreateAsyncPackagesFromQueue @ 141ee4ca0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FAsyncLoadingThread::CreateAsyncPackagesFromQueue
          (FAsyncLoadingThread *this,bool param_1,bool param_2,double param_3)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  FAsyncPackageDesc *pFVar4;
  TDelegateBase<FNotThreadSafeDelegateMode> *this_00;
  code *pcVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  bool bVar9;
  double dVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  int iVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_CreateAsyncPackagesFromQueue> FVar17;
  longlong lVar18;
  ulonglong uVar19;
  uint uVar20;
  uint uVar21;
  FNameEntryId FVar22;
  FName FVar23;
  LPCRITICAL_SECTION lpCriticalSection;
  ForAnyElementType FVar24;
  FScriptContainerElement *pFVar25;
  double dVar26;
  undefined1 local_105;
  undefined1 local_104 [4];
  ForAnyElementType local_100;
  uint local_f8;
  uint uStack_f4;
  uint local_f0;
  int local_ec;
  undefined8 local_e8;
  FColor_u_0 local_e0 [2];
  FName local_d8;
  uint local_d0;
  uint uStack_cc;
  FName local_c8;
  LARGE_INTEGER local_b8;
  LARGE_INTEGER local_b0;
  LARGE_INTEGER local_a8;
  LPCRITICAL_SECTION local_a0;
  LARGE_INTEGER local_98;
  FName local_90 [11];
  
  if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId954,"CreateAsyncPackagesFromQueueTime",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
               ,0x3ba);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId954);
  }
  bVar14 = false;
  bVar13 = IsInGameThread();
  if (bVar13) {
    iVar15 = this->AsyncLoadingThreadIndex;
    LOCK();
    AsyncLoadingTickCounter.Counter = AsyncLoadingTickCounter.Counter + 1;
    UNLOCK();
    if (((CurrentAsyncLoadingTickThreadIndex != -1) &&
        (CurrentAsyncLoadingTickThreadIndex != iVar15)) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("CurrentAsyncLoadingTickThreadIndex == INDEX_NONE || CurrentAsyncLoadingTickThreadIndex == ThreadIndex"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoadingThread.h"
                            ,0x1cb,L""), bVar14)) {
      pcVar5 = (code *)swi(3);
      iVar15 = (*pcVar5)();
      return iVar15;
    }
    bVar14 = true;
    CurrentAsyncLoadingTickThreadIndex = iVar15;
  }
  uVar20 = 0x7fffffff;
  if (param_1) {
    uVar20 = 1;
  }
  local_100.Data = (FScriptContainerElement *)0x0;
  local_f8 = 0;
  uStack_f4 = 0;
  local_f0 = uVar20;
  QueryPerformanceCounter(&local_b8);
  dVar10 = __real_4170000000000000;
  lpCriticalSection = (LPCRITICAL_SECTION)&this->QueueCritical;
  local_ec = 0;
  dVar7 = (double)local_b8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  local_a0 = lpCriticalSection;
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  while( true ) {
    uVar21 = 0;
    EnterCriticalSection(lpCriticalSection);
    local_f8 = 0;
    if ((int)uStack_f4 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&local_100,0,(int *)&uStack_f4);
    }
    uVar2 = (this->QueuedPackages).ArrayNum;
    if ((int)uVar20 < (int)uVar2) {
      uVar2 = uVar20;
    }
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    if ((int)uStack_f4 < (int)uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar2,&local_100,local_f8,(int *)&uStack_f4);
    }
    uVar20 = local_f0;
    pFVar25 = (this->QueuedPackages).AllocatorInstance.Data;
    iVar15 = (this->QueuedPackages).ArrayNum;
    pFVar3 = pFVar25 + (longlong)iVar15 * 8;
    while( true ) {
      if ((this->QueuedPackages).ArrayNum != iVar15) {
        local_105 = 0;
        `TCheckedPointerIterator<FAsyncPackageDesc_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_105);
      }
      if ((pFVar25 == pFVar3) || (local_e8 = *(undefined8 *)pFVar25, (int)uVar20 <= (int)uVar21))
      break;
      uVar21 = uVar21 + 1;
      if (((local_100.Data <= (FScriptContainerElement *)&local_e8) &&
          ((FScriptContainerElement *)&local_e8 < local_100.Data + (longlong)(int)uStack_f4 * 8)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar13)) {
        pcVar5 = (code *)swi(3);
        iVar15 = (*pcVar5)();
        return iVar15;
      }
      if (local_f8 == uStack_f4) {
        local_f8 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_100,(int *)&uStack_f4);
      }
      lVar18 = (longlong)(int)local_f8;
      pFVar25 = pFVar25 + 8;
      local_f8 = local_f8 + 1;
      *(undefined8 *)(local_100.Data + lVar18 * 8) = local_e8;
    }
    if (uVar21 == 0) break;
    uVar20 = 0;
    if ((int)uVar21 <= (this->QueuedPackages).ArrayNum) {
      uVar20 = ~uVar21 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           ), bVar13)) {
      pcVar5 = (code *)swi(3);
      iVar15 = (*pcVar5)();
      return iVar15;
    }
    pFVar3 = (this->QueuedPackages).AllocatorInstance.Data;
    iVar15 = (this->QueuedPackages).ArrayNum - uVar21;
    if (iVar15 != 0) {
      memmove(pFVar3,pFVar3 + (longlong)(int)uVar21 * 8,(longlong)iVar15 << 3);
    }
    piVar1 = &(this->QueuedPackages).ArrayNum;
    *piVar1 = *piVar1 - uVar21;
    LeaveCriticalSection(lpCriticalSection);
    if (0 < (int)local_f8) {
      FVar17 = StatPtr_STAT_FAsyncPackage_CreateAsyncPackagesFromQueue;
      if (StatPtr_STAT_FAsyncPackage_CreateAsyncPackagesFromQueue ==
          (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_CreateAsyncPackagesFromQueue>)0x0) {
        pFVar16 = ::FName::FName(local_90,"STAT_FAsyncPackage_CreateAsyncPackagesFromQueue");
        FVar17 = (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_CreateAsyncPackagesFromQueue>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_FAsyncPackage_CreateAsyncPackagesFromQueue,*pFVar16,
                            L"CreateAsyncPackagesFromQueue","STATGROUP_AsyncLoad","STATCAT_Advanced"
                            ,L"Async Load",false,true,ST_int64,true,false,MCR_Invalid);
      }
      FVar23 = *(FName *)FVar17;
      bVar13 = false;
      bVar9 = false;
      local_c8.ComparisonIndex.Value = 0;
      local_c8.Number = 0;
      bVar11 = false;
      bVar12 = false;
      FVar22 = FVar23.ComparisonIndex.Value;
      uVar20 = FVar23.Number;
      if ((FVar22.Value == 0) && (uVar20 == 0)) {
LAB_141ee5149:
        bVar9 = bVar12;
        bVar13 = bVar11;
        bVar11 = false;
        FVar23 = local_c8;
      }
      else {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_e0[0].Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&local_e0[0]._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
          bVar13 = false;
          bVar9 = true;
          bVar11 = false;
          bVar12 = true;
          if (-1 < CpuChannel->Enabled) {
            local_d8.ComparisonIndex.Value = FVar22.Value;
            local_d8.Number = uVar20;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      (&local_d8,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                       ,0x3ed);
            bVar13 = true;
            bVar9 = true;
            bVar11 = true;
            bVar12 = true;
          }
        }
        if (FThreadStats::bPrimaryEnable == false) goto LAB_141ee5149;
        local_d0 = FVar22.Value;
        uStack_cc = uVar20;
        local_c8 = FVar23;
        FThreadStats::AddMessage(FVar23,CycleScopeStart);
        bVar11 = true;
      }
      QueryPerformanceCounter(&local_b0);
      uVar20 = local_f8;
      uVar19 = (ulonglong)(int)local_f8;
      pFVar3 = local_100.Data + uVar19 * 8;
      FVar24.Data = local_100.Data;
      while( true ) {
        if ((uint)uVar19 != uVar20) {
          local_104[0] = 0;
          `TCheckedPointerIterator<FAsyncPackageDesc_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_104);
        }
        if (FVar24.Data == pFVar3) break;
        pFVar4 = *(FAsyncPackageDesc **)FVar24.Data;
        ProcessAsyncPackageRequest(this,pFVar4,(FAsyncPackage *)0x0);
        if (pFVar4 != (FAsyncPackageDesc *)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((pFVar4->InstancingContext).SharedData.SharedReferenceCount.ReferenceController
                    );
          this_00 = (TDelegateBase<FNotThreadSafeDelegateMode> *)(pFVar4->PackageLoadedDelegate).Ptr
          ;
          if (this_00 != (TDelegateBase<FNotThreadSafeDelegateMode> *)0x0) {
            TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                      (this_00);
            ::operator_delete(this_00,0x18);
          }
          ::operator_delete(pFVar4,0x40);
        }
        uVar19 = (ulonglong)local_f8;
        FVar24.Data = FVar24.Data + 8;
      }
      QueryPerformanceCounter(&local_a8);
      lpCriticalSection = local_a0;
      if (5 < (byte)LogStreaming._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
      }
      if (bVar9) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar13) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar11) {
        FThreadStats::AddMessage(FVar23,CycleScopeEnd);
      }
    }
    iVar15 = local_ec + local_f8;
    local_ec = iVar15;
    if (param_1) {
      QueryPerformanceCounter(&local_98);
      dVar6 = (double)local_98.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar10;
      dVar26 = dVar6 - dVar7;
      if ((param_3 < dVar26) && (GWarnIfTimeLimitExceeded != 0)) {
        IsTimeLimitExceededPrint
                  (dVar7,dVar6,LastTestTime,param_3,L"CreateAsyncPackagesFromQueue",(UObject *)0x0);
        LastTestTime = dVar6;
        goto LAB_141ee5355;
      }
      LastTestTime = dVar6;
      if (param_3 < dVar26) goto LAB_141ee5355;
    }
    uVar20 = local_f0;
    if ((byte)LogStreaming._0_1_ < 6) {
      if (GGCSingleton->GCWantsToRunCounter != (TAtomic<int>)0x0) {
LAB_141ee5355:
        if (local_100.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_100.Data);
        }
        if (bVar14) {
          LeaveAsyncLoadingTick(this->AsyncLoadingThreadIndex);
        }
        if (bVar8) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        return iVar15;
      }
    }
    else if (GGCSingleton->GCWantsToRunCounter != (TAtomic<int>)0x0) {
      UE::Logging::Private::BasicLog<6>
                ((FStaticBasicLogRecord *)&PTR_u_Timing_out_asyn_1507e7988,
                 (FLogCategoryBase *)&LogStreaming);
      goto LAB_141ee5355;
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  iVar15 = local_ec;
  goto LAB_141ee5355;
}

// FinalizeCancelAsyncLoadingInternal @ 141ef22e0

void __thiscall FAsyncLoadingThread::FinalizeCancelAsyncLoadingInternal(FAsyncLoadingThread *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection_00;
  FWindowsRecursiveMutex *lpCriticalSection_01;
  undefined1 *puVar2;
  TSet<FAsyncPackage_*,DefaultKeyFuncs<FAsyncPackage_*,0>,FDefaultSetAllocator> *this_00;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  int iVar5;
  void *pvVar6;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this_01;
  atomic<unsigned___int64> aVar7;
  TDelegateBase<FNotThreadSafeDelegateMode> *this_02;
  undefined8 *puVar8;
  code *pcVar9;
  TSet<FAsyncPackage_*,DefaultKeyFuncs<FAsyncPackage_*,0>,FDefaultSetAllocator> *pTVar10;
  bool bVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  undefined1 *puVar17;
  uint uVar18;
  uint *puVar19;
  uint uVar20;
  FScriptContainerElement *pFVar21;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_150;
  undefined4 uStack_11c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_100;
  undefined8 uStack_e0;
  TSet<FAsyncPackage_*,DefaultKeyFuncs<FAsyncPackage_*,0>,FDefaultSetAllocator> *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  undefined8 uStack_b0;
  FReadAccessScope local_a8 [2];
  undefined4 local_74;
  undefined4 local_54;
  
  bVar11 = IsInGameThread();
  if ((!bVar11) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                          ,0x1549,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  lpCriticalSection = &this->QueueCritical;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    lpCriticalSection_00 = &this->LoadedPackagesCritical;
    if (lpCriticalSection_00 != (FWindowsRecursiveMutex *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
      lpCriticalSection_01 = &this->LoadedPackagesToProcessCritical;
      if (lpCriticalSection_01 != (FWindowsRecursiveMutex *)0x0) {
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_01);
        if (((this->QueuedPackages).ArrayNum != 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("QueuedPackages.Num() == 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                                ,0x1551,L""), bVar11)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar21 = (this->QueuedPackagesToCancel).AllocatorInstance.Data;
        iVar5 = (this->QueuedPackagesToCancel).ArrayNum;
        pFVar3 = pFVar21 + (longlong)iVar5 * 8;
        while( true ) {
          if ((this->QueuedPackagesToCancel).ArrayNum != iVar5) {
            local_res10[0] = 0;
            `TCheckedPointerIterator<FAsyncPackageDesc_*,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res10);
          }
          if (pFVar21 == pFVar3) break;
          pvVar6 = *(void **)pFVar21;
          this_01 = *(TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> **)
                     ((longlong)pvVar6 + 0x18);
          if (this_01 != (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)0x0) {
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      (this_01,local_a8);
            if ((*(int *)&this_01[2].AccessDetector.State != 0) &&
               (aVar7 = this_01[1].AccessDetector.State, aVar7 != (atomic<unsigned___int64>)0x0)) {
              (**(code **)(*(longlong *)aVar7 + 0x68))(aVar7,(longlong)pvVar6 + 4,0,5);
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(local_a8);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (*(TReferenceControllerBase<1> **)((longlong)pvVar6 + 0x38));
          this_02 = *(TDelegateBase<FNotThreadSafeDelegateMode> **)((longlong)pvVar6 + 0x18);
          if (this_02 != (TDelegateBase<FNotThreadSafeDelegateMode> *)0x0) {
            TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                      (this_02);
            ::operator_delete(this_02,0x18);
          }
          ::operator_delete(pvVar6,0x40);
          pFVar21 = pFVar21 + 8;
        }
        piVar1 = &(this->QueuedPackagesToCancel).ArrayMax;
        (this->QueuedPackagesToCancel).ArrayNum = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,0,&(this->QueuedPackagesToCancel).AllocatorInstance,0,piVar1);
        }
        if (((this->PackagesToDelete).ArrayNum != 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("PackagesToDelete.Num() == 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                                ,0x155d,L""), bVar11)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if (((this->AsyncPackages).ArrayNum != 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("AsyncPackages.Num() == 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                                ,0x155e,L""), bVar11)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if (((this->LoadedPackages).ArrayNum != 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("LoadedPackages.Num() == 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                                ,0x155f,L""), bVar11)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if (((this->LoadedPackagesToProcess).ArrayNum != 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("LoadedPackagesToProcess.Num() == 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                                ,0x1560,L""), bVar11)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        puVar2 = &(this->PackagesToCancel).Elements.field_0x10;
        local_150 = 1;
        iVar5 = *(int *)&(this->PackagesToCancel).Elements.field_0x28;
        this_00 = &this->PackagesToCancel;
        iVar14 = 0;
        iVar16 = 0;
        iVar12 = 0;
        if (iVar5 != 0) {
          puVar19 = *(uint **)&(this->PackagesToCancel).Elements.field_0x20;
          if (puVar19 == (uint *)0x0) {
            puVar19 = (uint *)puVar2;
          }
          uVar20 = *puVar19;
          while (uVar20 == 0) {
            lVar13 = (longlong)iVar14;
            iVar16 = iVar16 + 0x20;
            iVar14 = iVar14 + 1;
            iVar12 = iVar5;
            if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_141ef2604;
            uVar20 = puVar19[lVar13 + 1];
          }
          local_150 = -uVar20 & uVar20;
          uVar4 = (ulonglong)local_150 * 2 + 1;
          lVar13 = 0x3f;
          if (uVar4 != 0) {
            for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          iVar12 = iVar16 + -1 + (int)lVar13;
          if (iVar5 < iVar12) {
            iVar12 = iVar5;
          }
        }
LAB_141ef2604:
        uVar20 = *(uint *)&(this->PackagesToCancel).Elements.field_0x28;
        TStack_100._padding_ = CONCAT44(local_150,iVar14);
        TStack_100.CurrentBitIndex = iVar12;
        TStack_100.UnvisitedBitMask = 0xffffffff;
        iVar14 = (int)uVar20 >> 5;
        TStack_100._28_4_ = local_74;
        TStack_100.BaseBitIndex = iVar16;
        uStack_e0 = CONCAT44(uStack_11c,
                             *(int *)&(this->PackagesToCancel).Elements.field_0x8 -
                             *(int *)&(this->PackagesToCancel).Elements.field_0x34);
        TStack_100.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
        if ((((int)uVar20 < 0) || (iVar5 < (int)uVar20)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar11)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar15 = uVar20 & 0xffffffe0;
        uVar18 = *(uint *)&(this->PackagesToCancel).Elements.field_0x28;
        if (uVar20 != uVar18) {
          puVar17 = *(undefined1 **)&(this->PackagesToCancel).Elements.field_0x20;
          if (puVar17 == (undefined1 *)0x0) {
            puVar17 = puVar2;
          }
          uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar14 * 4);
          while (uVar20 == 0) {
            lVar13 = (longlong)iVar14;
            uVar15 = uVar15 + 0x20;
            iVar14 = iVar14 + 1;
            uVar20 = uVar18;
            if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
            goto LAB_141ef2750;
            uVar20 = *(uint *)(puVar17 + lVar13 * 4 + 4);
          }
          uVar4 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
          lVar13 = 0x3f;
          if (uVar4 != 0) {
            for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          uVar20 = (int)lVar13 + -1 + uVar15;
          if ((int)uVar18 < (int)uVar20) {
            uVar20 = uVar18;
          }
        }
LAB_141ef2750:
        while( true ) {
          if (*(int *)&(this->PackagesToCancel).Elements.field_0x8 -
              *(int *)&(this->PackagesToCancel).Elements.field_0x34 != (int)uStack_e0) {
            local_res18[0] = 0;
            `TSparseArray<TSparseSetElement<FAsyncPackage_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
          }
          if ((TStack_100.CurrentBitIndex == uVar20) &&
             (TStack_100.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
          FAsyncPackage::Cancel
                    (*(FAsyncPackage **)
                      (*(longlong *)&this_00->Elements + (longlong)TStack_100.CurrentBitIndex * 0x10
                      ));
          TStack_100.UnvisitedBitMask = TStack_100.UnvisitedBitMask & ~TStack_100._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_100);
        }
        iVar5 = *(int *)&(this->PackagesToCancel).Elements.field_0x28;
        iVar14 = 0;
        iVar16 = 0;
        uVar20 = 1;
        iVar12 = 0;
        if (iVar5 != 0) {
          puVar19 = *(uint **)&(this->PackagesToCancel).Elements.field_0x20;
          if (puVar19 == (uint *)0x0) {
            puVar19 = (uint *)puVar2;
          }
          uVar18 = *puVar19;
          while (uVar18 == 0) {
            lVar13 = (longlong)iVar14;
            iVar16 = iVar16 + 0x20;
            iVar14 = iVar14 + 1;
            iVar12 = iVar5;
            if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_141ef2831;
            uVar18 = puVar19[lVar13 + 1];
          }
          uVar20 = -uVar18 & uVar18;
          uVar4 = (ulonglong)uVar20 * 2 + 1;
          lVar13 = 0x3f;
          if (uVar4 != 0) {
            for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          iVar12 = iVar16 + -1 + (int)lVar13;
          if (iVar5 < iVar12) {
            iVar12 = iVar5;
          }
        }
LAB_141ef2831:
        uVar18 = *(uint *)&(this->PackagesToCancel).Elements.field_0x28;
        uVar15 = uVar18 & 0xffffffe0;
        TStack_d0._padding_ = CONCAT44(uVar20,iVar14);
        TStack_d0.CurrentBitIndex = iVar12;
        TStack_d0.UnvisitedBitMask = 0xffffffff;
        iVar14 = (int)uVar18 >> 5;
        TStack_d0._28_4_ = local_54;
        TStack_d0.BaseBitIndex = iVar16;
        uStack_b0 = CONCAT44(uStack_11c,
                             *(int *)&(this->PackagesToCancel).Elements.field_0x8 -
                             *(int *)&(this->PackagesToCancel).Elements.field_0x34);
        local_d8 = this_00;
        TStack_d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
        if ((((int)uVar18 < 0) || (iVar5 < (int)uVar18)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar11)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar20 = *(uint *)&(this->PackagesToCancel).Elements.field_0x28;
        if (uVar18 != uVar20) {
          puVar17 = *(undefined1 **)&(this->PackagesToCancel).Elements.field_0x20;
          if (puVar17 == (undefined1 *)0x0) {
            puVar17 = puVar2;
          }
          uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar14 * 4);
          while (uVar18 == 0) {
            lVar13 = (longlong)iVar14;
            uVar15 = uVar15 + 0x20;
            iVar14 = iVar14 + 1;
            uVar18 = uVar20;
            if ((int)((uVar20 - 1) + ((int)(uVar20 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
            goto LAB_141ef2980;
            uVar18 = *(uint *)(puVar17 + lVar13 * 4 + 4);
          }
          uVar4 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
          lVar13 = 0x3f;
          if (uVar4 != 0) {
            for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          uVar18 = (int)lVar13 + -1 + uVar15;
          if ((int)uVar20 < (int)uVar18) {
            uVar18 = uVar20;
          }
        }
LAB_141ef2980:
        while( true ) {
          pTVar10 = local_d8;
          if (*(int *)&(local_d8->Elements).field_0x8 - *(int *)&(local_d8->Elements).field_0x34 !=
              (int)uStack_b0) {
            `TSparseArray<TSparseSetElement<FAsyncPackage_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
          }
          if (((TStack_d0.CurrentBitIndex == uVar18) &&
              (TStack_d0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
             (pTVar10 == this_00)) break;
          puVar8 = *(undefined8 **)
                    (*(longlong *)&pTVar10->Elements + (longlong)TStack_d0.CurrentBitIndex * 0x10);
          if (puVar8 != (undefined8 *)0x0) {
            (**(code **)*puVar8)();
          }
          TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
        }
        bVar11 = 1 < (this->PackagesToCancel).HashSize;
        if (!bVar11) {
          TSet<FAsyncPackage_*,DefaultKeyFuncs<FAsyncPackage_*,0>,FDefaultSetAllocator>::
          UnhashElements(this_00);
        }
        puVar2 = &(this->PackagesToCancel).Elements.field_0xc;
        *(undefined4 *)&(this->PackagesToCancel).Elements.field_0x8 = 0;
        if (*(int *)puVar2 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,(ForAnyElementType *)this_00,0,(int *)puVar2);
        }
        *(undefined4 *)&(this->PackagesToCancel).Elements.field_0x34 = 0;
        *(undefined4 *)&(this->PackagesToCancel).Elements.field_0x30 = 0xffffffff;
        iVar5 = *(int *)&(this->PackagesToCancel).Elements.field_0x2c;
        *(undefined4 *)&(this->PackagesToCancel).Elements.field_0x28 = 0;
        if ((iVar5 < 0) || (0x80 < iVar5)) {
          *(undefined4 *)&(this->PackagesToCancel).Elements.field_0x2c = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)
                     &(this->PackagesToCancel).Elements.field_0x10,0);
        }
        if (bVar11) {
          (this->PackagesToCancel).HashSize = 1;
          TSet<FAsyncPackage_*,DefaultKeyFuncs<FAsyncPackage_*,0>,FDefaultSetAllocator>::Rehash
                    (this_00);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_01);
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
                    /* WARNING: Could not recover jumptable at 0x000141ef2ab3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// FindExistingPackageAndAddCompletionCallback @ 141ef31f0

FAsyncPackage * __thiscall
FAsyncLoadingThread::FindExistingPackageAndAddCompletionCallback
          (FAsyncLoadingThread *this,FAsyncPackageDesc *param_1,
          TMap<FName,FAsyncPackage_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>_>
          *param_2)

{
  FThreadSafeCounter *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TTuple<FName,FAsyncPackage_*> *pTVar5;
  FAsyncPackage *pFVar6;
  
  pTVar5 = TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
                   *)param_2,param_1->Name);
  if (pTVar5 == (TTuple<FName,FAsyncPackage_*> *)0x0) {
    return (FAsyncPackage *)0x0;
  }
  pFVar6 = *(FAsyncPackage **)&pTVar5->field_0x8;
  if (pFVar6 != (FAsyncPackage *)0x0) {
    if ((param_1->PackageLoadedDelegate).Ptr !=
        (TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
         *)0x0) {
      FAsyncPackage::AddCompletionCallback(pFVar6,&param_1->PackageLoadedDelegate,false);
    }
    FAsyncPackage::AddRequestID(pFVar6,param_1->RequestID);
    LOCK();
    pFVar1 = &this->QueuedPackagesCounter;
    iVar2 = pFVar1->Counter;
    pFVar1->Counter = pFVar1->Counter + -1;
    UNLOCK();
    if (iVar2 + -1 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("QueuedPackagesCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                         ,0x367,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FAsyncPackage *)(*pcVar3)();
        return pFVar6;
      }
    }
    NotifyAsyncLoadingStateHasMaybeChanged();
  }
  return pFVar6;
}

// FireCompletedCompiledInImport @ 141ef47a0

/* WARNING: Enum "EEventLoadNode": Some values do not have unique names */

void __thiscall
FAsyncLoadingThread::FireCompletedCompiledInImport
          (FAsyncLoadingThread *this,void *param_1,FPackageIndex param_2)

{
  FEventLoadNodePtr local_18;
  
  local_18.Phase = ImportOrExport_Create;
  local_18.WaitingPackage.Package = param_1;
  local_18.ImportOrExportIndex.Index = param_2.Index;
  FAsyncPackage::FireNode(param_1,&local_18);
  return;
}

// FlushLoading @ 141ef54e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAsyncLoadingThread::FlushLoading(FAsyncLoadingThread *this,TArrayView<int_const_,int> *param_1)

{
  int *piVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  float fVar9;
  FName FVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_FlushAsyncLoadingGameThread> FVar15;
  FThreadStats *pFVar16;
  FThreadStatsPool *pFVar17;
  FFlushRequest *pFVar18;
  FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_TickAsyncLoadingGameThread> FVar19;
  FThreadHeartBeat *this_00;
  FStatMessage *pFVar20;
  FName FVar21;
  FFlushRequestData *pFVar22;
  FSharedReferencer<1> FVar23;
  FColor_u_0 local_res18 [2];
  FColor_u_0 local_res20 [2];
  FFlushRequest local_188;
  FName local_178;
  FName local_170;
  FName local_168;
  FName local_160;
  FName local_150;
  LARGE_INTEGER local_140;
  LARGE_INTEGER local_138;
  LARGE_INTEGER local_130;
  LARGE_INTEGER local_128;
  LARGE_INTEGER local_120;
  FStatMessage local_118;
  FStatMessage local_108;
  FStatMessage local_f8;
  FName local_e8;
  FName local_e0;
  TArrayView<int_const_,int> local_d8;
  TArrayView<int_const_,int> local_c8;
  FFlushRequest local_b8;
  FFlushRequest local_a8;
  TArrayView<int_const_,int> local_98 [5];
  
  if ((*(int *)((this->PendingRequestsCritical).CriticalSection.Opaque3 + 2) == 0) &&
     (*(int *)((longlong)(this->PendingRequestsCritical).CriticalSection.Opaque3 + 0x14) == 0)) {
    return;
  }
  bVar11 = IsInGameThread();
  if (!bVar11) {
    ::LexToString(LegacyLoader);
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsInGameThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                        ,0x1d66,
                        L"The current loader %s is unable to FlushAsyncLoading from any thread other than the game thread."
                       );
    if (bVar11) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(int *)((longlong)(this->QueueCritical).CriticalSection.Opaque3 + 0x14) != 0) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
  }
  FVar15 = StatPtr_STAT_FAsyncPackage_FlushAsyncLoadingGameThread;
  if (StatPtr_STAT_FAsyncPackage_FlushAsyncLoadingGameThread ==
      (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_FlushAsyncLoadingGameThread>)0x0) {
    pFVar14 = ::FName::FName(&local_e8,"STAT_FAsyncPackage_FlushAsyncLoadingGameThread");
    FVar15 = (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_FlushAsyncLoadingGameThread>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_FAsyncPackage_FlushAsyncLoadingGameThread,*pFVar14,
                        L"Flush Async Loading GT","STATGROUP_AsyncLoadGameThread","STATCAT_Advanced"
                        ,L"Async Load Game Thread",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar21 = *(FName *)FVar15;
  bVar11 = false;
  bVar5 = false;
  local_160.ComparisonIndex.Value = 0;
  local_160.Number = 0;
  if ((FVar21.ComparisonIndex.Value.Value == 0) && (FVar21.Number == 0)) {
LAB_141ef56c9:
    bVar4 = false;
    local_168 = local_160;
    FVar21 = local_160;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar11 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_178.ComparisonIndex.Value = FVar21.ComparisonIndex.Value.Value;
        local_178.Number = FVar21.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_178,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                   ,0x1d6b);
        bVar11 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_141ef56c9;
    local_168 = FVar21;
    FThreadStats::AddMessage(FVar21,CycleScopeStart);
    bVar4 = true;
  }
  if (param_1->ArrayNum != 0) {
    local_d8.DataPtr = param_1->DataPtr;
    local_d8.ArrayNum = param_1->ArrayNum;
    local_d8._12_4_ = *(undefined4 *)&param_1->field_0xc;
    piVar1 = &(this->PendingRequests).HashSize;
    if ((piVar1 == (int *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mutex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                            ,0x1b,L""), bVar12)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)piVar1);
    bVar12 = Algo::
             NoneOf<TArrayView<int_const_,int>,_FAsyncLoadingThread::ContainsAnyRequestInternal_::__l2::<lambda_1>_>
                       (&local_d8,(<lambda_1>)&this[-1].AsyncLoadingThreadIndex);
    if (piVar1 != (int *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)piVar1);
    }
    if (bVar12) {
      if (bVar5) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar11) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (!bVar4) {
        return;
      }
      if (FVar21 == (FName)0x0) {
        return;
      }
      if (FThreadStats::bPrimaryDisableForever != false) {
        return;
      }
      if (FThreadStats::TlsSlot == 0xffffffff) {
        return;
      }
      pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar16 == (FThreadStats *)0x0) {
        pFVar17 = FThreadStatsPool::Get();
        pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
      }
      if (pFVar16->ScopeCount <= pFVar16->bWaitForExplicitFlush) {
        return;
      }
      local_118.NameAndInfo.Index = FVar21.ComparisonIndex.Value;
      local_118.NameAndInfo.Number = FVar21.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_140);
      local_118.StatData.Pad[4] = '\0';
      local_118.StatData.Pad[5] = '\0';
      local_118.StatData.Pad[6] = '\0';
      local_118.StatData.Pad[7] = '\0';
      local_118.StatData.Pad[0] = local_140.s.LowPart._0_1_;
      local_118.StatData.Pad[1] = local_140.s.LowPart._1_1_;
      local_118.StatData.Pad[2] = local_140.s.LowPart._2_1_;
      local_118.StatData.Pad[3] = local_140.s.LowPart._3_1_;
      pFVar20 = &local_118;
      goto LAB_141ef5d0e;
    }
  }
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&FCoreDelegates::OnAsyncLoadingFlush);
  QueryPerformanceCounter(&local_138);
  pFVar22 = (FFlushRequestData *)0x0;
  FVar23.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  dVar3 = (double)local_138.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  local_188.Data.Object = (FFlushRequestData *)0x0;
  local_188.Data.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_1->ArrayNum != 0) {
    local_c8.DataPtr = param_1->DataPtr;
    local_c8.ArrayNum = param_1->ArrayNum;
    local_c8._12_4_ = *(undefined4 *)&param_1->field_0xc;
    pFVar18 = AddFlushRequest((FAsyncLoadingThread *)&this[-1].AsyncLoadingThreadIndex,&local_b8,
                              &local_c8);
    if (&local_188 != pFVar18) {
      local_188.Data.Object = (pFVar18->Data).Object;
      (pFVar18->Data).Object = (FFlushRequestData *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&local_188.Data.SharedReferenceCount,&(pFVar18->Data).SharedReferenceCount);
      pFVar22 = local_188.Data.Object;
      FVar23.ReferenceController = local_188.Data.SharedReferenceCount.ReferenceController;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b8.Data.SharedReferenceCount.ReferenceController);
  }
  FVar19 = StatPtr_STAT_FAsyncPackage_TickAsyncLoadingGameThread;
  if (StatPtr_STAT_FAsyncPackage_TickAsyncLoadingGameThread ==
      (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_TickAsyncLoadingGameThread>)0x0) {
    pFVar14 = ::FName::FName(&local_e0,"STAT_FAsyncPackage_TickAsyncLoadingGameThread");
    FVar19 = (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_TickAsyncLoadingGameThread>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_FAsyncPackage_TickAsyncLoadingGameThread,*pFVar14,
                        L"TickAsyncLoading GT","STATGROUP_AsyncLoadGameThread","STATCAT_Advanced",
                        L"Async Load Game Thread",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar21 = *(FName *)FVar19;
  bVar7 = false;
  bVar13 = false;
  local_150.ComparisonIndex.Value = 0;
  local_150.Number = 0;
  bVar6 = false;
  bVar12 = false;
  if ((FVar21.ComparisonIndex.Value.Value == 0) && (FVar21.Number == 0)) {
LAB_141ef59e9:
    bVar8 = false;
    fVar9 = __real_38d1b717;
    FVar21 = local_150;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar19 + 0x10));
      bVar7 = false;
      bVar13 = true;
      bVar6 = false;
      bVar12 = true;
      if (-1 < CpuChannel->Enabled) {
        local_170.ComparisonIndex.Value = FVar21.ComparisonIndex.Value.Value;
        local_170.Number = FVar21.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_170,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                   ,0x1d7e);
        bVar7 = true;
        bVar13 = true;
        bVar6 = true;
        bVar12 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_141ef59e9;
    FThreadStats::AddMessage(FVar21,CycleScopeStart);
    bVar8 = true;
    bVar6 = bVar7;
    bVar12 = bVar13;
    fVar9 = __real_38d1b717;
  }
  while ((*(int *)((this->PendingRequestsCritical).CriticalSection.Opaque3 + 2) != 0 ||
         (*(int *)((longlong)(this->PendingRequestsCritical).CriticalSection.Opaque3 + 0x14) != 0)))
  {
    if (FVar23.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar23.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar23.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_a8.Data.Object = pFVar22;
    local_a8.Data.SharedReferenceCount.ReferenceController = FVar23.ReferenceController;
    TickAsyncLoading((FAsyncLoadingThread *)&this[-1].AsyncLoadingThreadIndex,false,false,0.0,
                     &local_a8);
    if (param_1->ArrayNum != 0) {
      local_98[0].DataPtr = param_1->DataPtr;
      local_98[0].ArrayNum = param_1->ArrayNum;
      local_98[0]._12_4_ = *(undefined4 *)&param_1->field_0xc;
      piVar1 = &(this->PendingRequests).HashSize;
      if ((piVar1 == (int *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Mutex",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                              ,0x1b,L""), bVar13)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      EnterCriticalSection((LPCRITICAL_SECTION)piVar1);
      bVar13 = Algo::
               NoneOf<TArrayView<int_const_,int>,_FAsyncLoadingThread::ContainsAnyRequestInternal_::__l2::<lambda_1>_>
                         (local_98,(<lambda_1>)&this[-1].AsyncLoadingThreadIndex);
      if (piVar1 != (int *)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)piVar1);
      }
      if (bVar13) break;
    }
    if (bThreadStarted != false) {
      this_00 = FThreadHeartBeat::Get();
      FThreadHeartBeat::HeartBeat(this_00);
      FWindowsPlatformProcess::SleepNoStats(fVar9);
    }
  }
  FVar10 = local_168;
  if (bVar12) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar8) && (FVar21 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar16 == (FThreadStats *)0x0) {
      pFVar17 = FThreadStatsPool::Get();
      pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
    }
    if (pFVar16->bWaitForExplicitFlush < pFVar16->ScopeCount) {
      local_108.NameAndInfo.Index = FVar21.ComparisonIndex.Value;
      local_108.NameAndInfo.Number = FVar21.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_130);
      local_108.StatData.Pad[4] = '\0';
      local_108.StatData.Pad[5] = '\0';
      local_108.StatData.Pad[6] = '\0';
      local_108.StatData.Pad[7] = '\0';
      local_108.StatData.Pad[0] = local_130.s.LowPart._0_1_;
      local_108.StatData.Pad[1] = local_130.s.LowPart._1_1_;
      local_108.StatData.Pad[2] = local_130.s.LowPart._2_1_;
      local_108.StatData.Pad[3] = local_130.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar16,&local_108);
      piVar1 = &pFVar16->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar16,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar16,false,false);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar23.ReferenceController);
  QueryPerformanceCounter(&local_128);
  GFlushAsyncLoadingCount = GFlushAsyncLoadingCount + 1;
  GFlushAsyncLoadingTime =
       GFlushAsyncLoadingTime +
       ((double)local_128.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar3);
  if (((param_1->ArrayNum == 0) &&
      ((*(int *)((this->PendingRequestsCritical).CriticalSection.Opaque3 + 2) != 0 ||
       (*(int *)((longlong)(this->PendingRequestsCritical).CriticalSection.Opaque3 + 0x14) != 0))))
     && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                            ("RequestIDs.Num() != 0 || !IsAsyncLoadingPackages()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                             ,0x1d99,L""), bVar12)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (!bVar4) {
    return;
  }
  if (FVar10 == (FName)0x0) {
    return;
  }
  if (FThreadStats::bPrimaryDisableForever != false) {
    return;
  }
  if (FThreadStats::TlsSlot == 0xffffffff) {
    return;
  }
  pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
  if (pFVar16 == (FThreadStats *)0x0) {
    pFVar17 = FThreadStatsPool::Get();
    pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
  }
  if (pFVar16->ScopeCount <= pFVar16->bWaitForExplicitFlush) {
    return;
  }
  local_f8.NameAndInfo.Index = FVar10.ComparisonIndex.Value;
  local_f8.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
  QueryPerformanceCounter(&local_120);
  local_f8.StatData.Pad[4] = '\0';
  local_f8.StatData.Pad[5] = '\0';
  local_f8.StatData.Pad[6] = '\0';
  local_f8.StatData.Pad[7] = '\0';
  local_f8.StatData.Pad[0] = local_120.s.LowPart._0_1_;
  local_f8.StatData.Pad[1] = local_120.s.LowPart._1_1_;
  local_f8.StatData.Pad[2] = local_120.s.LowPart._2_1_;
  local_f8.StatData.Pad[3] = local_120.s.LowPart._3_1_;
  pFVar20 = &local_f8;
LAB_141ef5d0e:
  FThreadStats::AddStatMessage(pFVar16,pFVar20);
  piVar1 = &pFVar16->ScopeCount;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FThreadStats::Flush(pFVar16,false,false);
  }
  else if (FThreadStats::bIsRawStatsActive != false) {
    FThreadStats::FlushRawStats(pFVar16,false,false);
  }
  return;
}

// GetAsyncLoadPercentage @ 141ef9160

float __thiscall
FAsyncLoadingThread::GetAsyncLoadPercentage(FAsyncLoadingThread *this,FName *param_1)

{
  int *lpCriticalSection;
  undefined1 *lpCriticalSection_00;
  TTuple<FName,FAsyncPackage_*> *pTVar1;
  float fVar2;
  
  fVar2 = __real_bf800000;
  lpCriticalSection = &(this->AsyncPackagesReadyForTick).ArrayNum;
  if (lpCriticalSection != (int *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar1 = TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
                     *)&(this->AsyncPackages).ArrayNum,*param_1);
    if (pTVar1 == (TTuple<FName,FAsyncPackage_*> *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    else {
      if (*(longlong *)&pTVar1->field_0x8 != 0) {
        fVar2 = *(float *)(*(longlong *)&pTVar1->field_0x8 + 0x138);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (0.0 <= fVar2) {
        return fVar2;
      }
    }
    lpCriticalSection_00 = &(this->LoadedPackagesNameLookup).field_0x48;
    if (lpCriticalSection_00 != (undefined1 *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
      pTVar1 = TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
                       *)&(this->LoadedPackages).ArrayNum,*param_1);
      if (pTVar1 == (TTuple<FName,FAsyncPackage_*> *)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
      }
      else {
        if (*(longlong *)&pTVar1->field_0x8 != 0) {
          fVar2 = *(float *)(*(longlong *)&pTVar1->field_0x8 + 0x138);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
        if (0.0 <= fVar2) {
          return fVar2;
        }
      }
      pTVar1 = TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
                       *)&(this->PackagesToDelete).ArrayNum,*param_1);
      if ((pTVar1 != (TTuple<FName,FAsyncPackage_*> *)0x0) && (*(longlong *)&pTVar1->field_0x8 != 0)
         ) {
        fVar2 = *(float *)(*(longlong *)&pTVar1->field_0x8 + 0x138);
      }
      return fVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetLoaderType @ 141ef9c60

ELoaderType __thiscall FAsyncLoadingThread::GetLoaderType(FAsyncLoadingThread *this)

{
  return LegacyLoader;
}

// GetNumAsyncPackages @ 141efa010

int __thiscall FAsyncLoadingThread::GetNumAsyncPackages(FAsyncLoadingThread *this)

{
  return *(int *)((longlong)(this->PendingRequestsCritical).CriticalSection.Opaque3 + 0x14);
}

// GetNumQueuedPackages @ 141efa020

int __thiscall FAsyncLoadingThread::GetNumQueuedPackages(FAsyncLoadingThread *this)

{
  return *(int *)((this->PendingRequestsCritical).CriticalSection.Opaque3 + 2);
}

// Init @ 141efb560

bool __thiscall FAsyncLoadingThread::Init(FAsyncLoadingThread *this)

{
  return true;
}

// InitializeLoading @ 141efb6a0

void __thiscall FAsyncLoadingThread::InitializeLoading(FAsyncLoadingThread *this)

{
  LOCK();
  (this->QueuedPackagesCounter).Counter = (this->QueuedPackagesCounter).Counter + 1;
  UNLOCK();
  return;
}

// InsertPackage @ 141efb6b0

void __thiscall
FAsyncLoadingThread::InsertPackage
          (FAsyncLoadingThread *this,FAsyncPackage *param_1,bool param_2,
          EAsyncPackageInsertMode param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  TTuple<FName,FAsyncPackage_*> *pTVar6;
  FAsyncPackage *pFVar7;
  uint uVar8;
  int iVar9;
  FName FVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  TArray<FAsyncPackage_*,TSizedDefaultAllocator<32>_> *pTVar14;
  FAsyncPackage *local_res10;
  TPairInitializer<FName_const_&,FAsyncPackage_*_const_&> local_res18;
  FName local_58;
  FName *local_48;
  FAsyncPackage **local_40;
  
  local_res10 = param_1;
  bVar3 = IsInGameThread();
  if (((bVar3) && (bThreadStarted != false)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsInGameThread() || !IsMultithreaded()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                         ,0x1075,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar13 = 0;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  if (GEventDrivenLoaderEnabled != false) {
    uVar8 = 0;
    FVar10.ComparisonIndex.Value = 0;
    FVar10.Number = 0;
    if (local_res10 != (FAsyncPackage *)0x0) {
      FVar10 = (local_res10->Desc).Name;
      iVar13 = local_res10->SerialNumber;
      uVar8 = FVar10.Number;
    }
    local_58.Number = uVar8;
    local_58.ComparisonIndex.Value = FVar10.ComparisonIndex.Value.Value;
    if ((local_res10 == (FAsyncPackage *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Package",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                           ,0x107c,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (!param_2) {
    LOCK();
    (this->ExistingAsyncPackagesCounter).Counter = (this->ExistingAsyncPackagesCounter).Counter + 1;
    UNLOCK();
    NotifyAsyncLoadingStateHasMaybeChanged();
  }
  lpCriticalSection = &this->AsyncPackagesCritical;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (param_2) {
    pFVar12 = (this->AsyncPackages).AllocatorInstance.Data;
    iVar4 = (this->AsyncPackages).ArrayNum;
    for (pFVar11 = pFVar12; pFVar11 != pFVar12 + (longlong)iVar4 * 8; pFVar11 = pFVar11 + 8) {
      if (*(FAsyncPackage **)pFVar11 == local_res10) {
        iVar9 = (int)((longlong)pFVar11 - (longlong)pFVar12 >> 3);
        if (iVar9 != -1) {
          memmove(pFVar12 + (longlong)iVar9 * 8,pFVar12 + (longlong)iVar9 * 8 + 8,
                  (longlong)((iVar4 - iVar9) + -1) << 3);
          piVar1 = &(this->AsyncPackages).ArrayNum;
          *piVar1 = *piVar1 + -1;
        }
        break;
      }
    }
  }
  if (GEventDrivenLoaderEnabled != false) {
    pTVar14 = &this->AsyncPackages;
    pFVar12 = (pTVar14->AllocatorInstance).Data;
    if (((pFVar12 <= (FScriptContainerElement *)&local_res10) &&
        ((FScriptContainerElement *)&local_res10 <
         pFVar12 + (longlong)(this->AsyncPackages).ArrayMax * 8)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar4 = (this->AsyncPackages).ArrayNum;
    piVar1 = &(this->AsyncPackages).ArrayMax;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar14->AllocatorInstance,piVar1);
    }
    (this->AsyncPackages).ArrayNum = iVar4 + 1;
    *(FAsyncPackage **)((pTVar14->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_res10;
    goto LAB_141efb9e4;
  }
  if (param_3 == InsertBeforeMatchingPriorities) {
    pFVar12 = (this->AsyncPackages).AllocatorInstance.Data;
    if (pFVar12 != pFVar12 + (longlong)(this->AsyncPackages).ArrayNum * 8) {
      pFVar11 = pFVar12;
      do {
        if (*(int *)(*(longlong *)pFVar11 + 0x34) <= (local_res10->Desc).Priority)
        goto LAB_141efbb06;
        pFVar11 = pFVar11 + 8;
      } while (pFVar11 != pFVar12 + (longlong)(this->AsyncPackages).ArrayNum * 8);
    }
LAB_141efb925:
    uVar8 = 0xffffffff;
    goto LAB_141efb92a;
  }
  if (param_3 == InsertAfterMatchingPriorities) {
    pFVar12 = (this->AsyncPackages).AllocatorInstance.Data;
    if (pFVar12 != pFVar12 + (longlong)(this->AsyncPackages).ArrayNum * 8) {
      pFVar11 = pFVar12;
      do {
        if (*(int *)(*(longlong *)pFVar11 + 0x34) < (local_res10->Desc).Priority)
        goto LAB_141efbb06;
        pFVar11 = pFVar11 + 8;
      } while (pFVar11 != pFVar12 + (longlong)(this->AsyncPackages).ArrayNum * 8);
    }
    goto LAB_141efb925;
  }
LAB_141efb92f:
  uVar8 = (this->AsyncPackages).ArrayNum;
LAB_141efb93c:
  pTVar14 = &this->AsyncPackages;
  iVar4 = (this->AsyncPackages).ArrayNum;
  piVar1 = &(this->AsyncPackages).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar14->AllocatorInstance,piVar1);
    (this->AsyncPackages).ArrayNum = iVar4;
  }
  (this->AsyncPackages).ArrayNum = iVar4 + 1;
  pFVar12 = (pTVar14->AllocatorInstance).Data + (longlong)(int)uVar8 * 8;
  memmove(pFVar12 + 8,pFVar12,(longlong)(int)(iVar4 - uVar8) << 3);
  pFVar7 = local_res10;
  uVar5 = 0;
  if ((int)uVar8 < (this->AsyncPackages).ArrayNum) {
    uVar5 = ~uVar8 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(FAsyncPackage **)((pTVar14->AllocatorInstance).Data + (longlong)(int)uVar8 * 8) = pFVar7;
LAB_141efb9e4:
  if (!param_2) {
    local_48 = &(local_res10->Desc).Name;
    local_40 = &local_res10;
    TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,FAsyncPackage_*_const_&>_>
              ((TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
                *)&this->AsyncPackageNameLookup,&local_res18,(bool *)&local_48);
    if (GEventDrivenLoaderEnabled != false) {
      QueueEvent_CreateLinker(this,local_res10,0x7fffffff);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (GEventDrivenLoaderEnabled != false) {
    if ((((local_58 == (FName)0x0) || (iVar13 == 0)) ||
        (pTVar6 = TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
                          *)&this->AsyncPackageNameLookup,local_58),
        pTVar6 == (TTuple<FName,FAsyncPackage_*> *)0x0)) ||
       ((pFVar7 = *(FAsyncPackage **)&pTVar6->field_0x8, pFVar7 == (FAsyncPackage *)0x0 ||
        (pFVar7->SerialNumber != iVar13)))) {
      pFVar7 = (FAsyncPackage *)0x0;
    }
    if ((pFVar7 != local_res10) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!GEventDrivenLoaderEnabled || GetPackage(WeakPtr) == Package",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                           ,0x10c2,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
LAB_141efbb06:
  uVar8 = (uint)((longlong)pFVar11 - (longlong)pFVar12 >> 3);
LAB_141efb92a:
  if (uVar8 == 0xffffffff) goto LAB_141efb92f;
  goto LAB_141efb93c;
}

// IsAsyncLoadingPackages @ 141efbb20

bool __thiscall FAsyncLoadingThread::IsAsyncLoadingPackages(FAsyncLoadingThread *this)

{
  if ((*(int *)((this->PendingRequestsCritical).CriticalSection.Opaque3 + 2) == 0) &&
     (*(int *)((longlong)(this->PendingRequestsCritical).CriticalSection.Opaque3 + 0x14) == 0)) {
    return false;
  }
  return true;
}

// IsAsyncLoadingSuspended @ 141efbb40

bool __thiscall FAsyncLoadingThread::IsAsyncLoadingSuspended(FAsyncLoadingThread *this)

{
  return *(int *)((longlong)(this->QueueCritical).CriticalSection.Opaque3 + 0x14) != 0;
}

// IsInAsyncLoadThread @ 141efbf80

bool __thiscall FAsyncLoadingThread::IsInAsyncLoadThread(FAsyncLoadingThread *this)

{
  bool bVar1;
  DWORD DVar2;
  
  if ((bThreadStarted) && (DVar2 = GetCurrentThreadId(), DVar2 == AsyncLoadingThreadID)) {
    return true;
  }
  bVar1 = IsInGameThread();
  if ((bVar1) && (AsyncLoadingTickCounter.Counter != 0)) {
    return true;
  }
  return false;
}

// IsMultithreaded @ 141efbfe0

bool __thiscall FAsyncLoadingThread::IsMultithreaded(FAsyncLoadingThread *this)

{
  return bThreadStarted;
}

// LeaveAsyncLoadingTick @ 141efc000

void __cdecl FAsyncLoadingThread::LeaveAsyncLoadingTick(int param_1)

{
  code *pcVar1;
  int iVar2;
  FThreadSafeCounter FVar3;
  bool bVar4;
  int iVar5;
  
  FVar3.Counter = AsyncLoadingTickCounter.Counter;
  LOCK();
  iVar2 = AsyncLoadingTickCounter.Counter + -1;
  UNLOCK();
  iVar5 = AsyncLoadingTickCounter.Counter + -1;
  AsyncLoadingTickCounter.Counter = iVar2;
  if (iVar5 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("AsyncLoadingTickCounterValue >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoadingThread.h"
                       ,0x1d2,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (CurrentAsyncLoadingTickThreadIndex != param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentAsyncLoadingTickThreadIndex == ThreadIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoadingThread.h"
                       ,0x1d3,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (FVar3.Counter == 1) {
    CurrentAsyncLoadingTickThreadIndex = -1;
  }
  return;
}

// LoadPackage @ 141efe4a0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FAsyncLoadingThread::LoadPackage
          (FAsyncLoadingThread *this,FPackagePath *param_1,FLoadPackageAsyncOptionalParams *param_2)

{
  uint uVar1;
  int iVar2;
  EPackageFlags EVar3;
  TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
  *pTVar4;
  FScriptContainerElement *pFVar5;
  FLinkerInstancingContext *pFVar6;
  int iVar7;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_78;
  ForAnyElementType local_70;
  int local_68;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  
  if (((param_2->ProgressDelegate).Object != (FLoadPackageAsyncProgressDelegate *)0x0) &&
     (2 < (byte)LogStreaming._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
  }
  pTVar4 = (param_2->CompletionDelegate).Ptr;
  local_78.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_70.Data = (FScriptContainerElement *)0x0;
  local_68 = 0;
  if (pTVar4 == (TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
                 *)0x0) goto LAB_141efe5a1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar4,
             (FWriteAccessScope *)&local_60);
  pFVar5 = *(FScriptContainerElement **)&pTVar4->field_0x8;
  *(undefined8 *)&pTVar4->field_0x8 = 0;
  iVar7 = *(int *)&pTVar4->field_0x10;
  *(undefined4 *)&pTVar4->field_0x10 = 0;
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_60);
  if (local_68 == 0) {
LAB_141efe57c:
    if (local_70.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data);
    }
  }
  else if (local_70.Data != (FScriptContainerElement *)0x0) {
    (**(code **)*(atomic<unsigned___int64> *)local_70.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_70,0,0,0x10);
    local_68 = 0;
    goto LAB_141efe57c;
  }
  local_70.Data = pFVar5;
  local_68 = iVar7;
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
LAB_141efe5a1:
  uVar1 = param_2->LoadFlags;
  pFVar6 = param_2->InstancingContext;
  iVar7 = param_2->PackagePriority;
  iVar2 = param_2->PIEInstanceID;
  EVar3 = param_2->PackageFlags;
  local_60.AccessType = Reader;
  local_60._4_4_ = 0;
  local_60.Accessor = (FMRSWRecursiveAccessDetector *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_48);
  if (local_60.Accessor != (FMRSWRecursiveAccessDetector *)0x0) {
    FMemory::Free(local_60.Accessor);
  }
  local_60.Accessor = (FMRSWRecursiveAccessDetector *)local_70.Data;
  local_60._16_4_ = local_68;
  local_68 = 0;
  local_70.Data = (FScriptContainerElement *)0x0;
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  iVar7 = LoadPackage(this,param_1,param_2->CustomPackageName,
                      (TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
                       *)&local_60,EVar3,iVar2,iVar7,pFVar6,uVar1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_48);
  if ((local_68 != 0) && (local_70.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_70.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_70,0,0,0x10);
    local_68 = 0;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (local_70.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_78.AccessDetector);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->ProgressDelegate).SharedReferenceCount.ReferenceController);
  pTVar4 = (param_2->CompletionDelegate).Ptr;
  if (pTVar4 != (TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
                 *)0x0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar4,
               (FWriteAccessScope *)&local_48);
    if ((*(int *)&pTVar4->field_0x10 != 0) &&
       (*(undefined8 **)&pTVar4->field_0x8 != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)&pTVar4->field_0x8)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&pTVar4->field_0x8,0,0,0x10);
      *(undefined4 *)&pTVar4->field_0x10 = 0;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (*(void **)&pTVar4->field_0x8 != (void *)0x0) {
      FMemory::Free(*(void **)&pTVar4->field_0x8);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)pTVar4);
    ::operator_delete(pTVar4,0x18);
  }
  return iVar7;
}

// LoadPackage @ 141efe750

int __thiscall
FAsyncLoadingThread::LoadPackage
          (FAsyncLoadingThread *this,FPackagePath *param_1,FName param_2,
          TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
          *param_3,EPackageFlags param_4,int param_5,int param_6,FLinkerInstancingContext *param_7,
          uint param_8)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>
  TVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  TMulticastDelegate<void___cdecl(TStringView<wchar_t>),FDefaultTSDelegateUserPolicy>
  *lpCriticalSection;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  FString *pFVar10;
  void *this_01;
  TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
  *pTVar11;
  uint uVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  int iVar16;
  undefined1 local_e8 [8];
  FName local_e0;
  undefined8 local_d8;
  FSharedReferencer<1> local_d0;
  FAsyncPackageDesc local_c8;
  FScriptContainerElement *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  FScriptContainerElement *local_78;
  undefined8 uStack_70;
  FString local_68;
  FReadAccessScope local_58 [2];
  
  bVar6 = IsInGameThread();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                         ,0x1d27,
                         L"LoadPackageAsync is only thread-safe when using the zenloader (i.e. AsyncLoading2)."
                        ), bVar6)) {
    pcVar2 = (code *)swi(3);
    iVar8 = (*pcVar2)();
    return iVar8;
  }
  if ((bOnce == false) && (GEventDrivenLoaderEnabled != false)) {
    bOnce = true;
    FGCObject::StaticInit();
  }
  if (param_2 == (FName)0x0) {
    param_2 = param_1->PackageName;
  }
  local_e0 = param_2;
  lpCriticalSection = FCoreDelegates::GetOnAsyncLoadPackage();
  if ((lpCriticalSection ==
       (TMulticastDelegate<void___cdecl(TStringView<wchar_t>),FDefaultTSDelegateUserPolicy> *)0x0)
     && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mutex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                            ,0x1b,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    iVar8 = (*pcVar2)();
    return iVar8;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar8 = *(int *)&lpCriticalSection->field_0x30;
  plVar13 = *(longlong **)&lpCriticalSection->field_0x28;
  plVar14 = plVar13 + (longlong)iVar8 * 2;
  while( true ) {
    if (*(int *)&lpCriticalSection->field_0x30 != iVar8) {
      local_e8[0] = 0;
      `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_e8);
    }
    iVar16 = 0;
    if (plVar13 == plVar14) {
      if (lpCriticalSection !=
          (TMulticastDelegate<void___cdecl(TStringView<wchar_t>),FDefaultTSDelegateUserPolicy> *)0x0
         ) {
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
      goto LAB_141efe9b0;
    }
    if (((int)plVar13[1] != 0) && (*plVar13 != 0)) break;
    plVar13 = plVar13 + 2;
  }
  if (lpCriticalSection !=
      (TMulticastDelegate<void___cdecl(TStringView<wchar_t>),FDefaultTSDelegateUserPolicy> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
            FCoreDelegates::GetOnAsyncLoadPackage();
  pFVar10 = ::FName::ToString(&local_e0,&local_68);
  local_88 = (pFVar10->Data).AllocatorInstance.Data;
  iVar8 = (pFVar10->Data).ArrayNum;
  iStack_80 = iVar8 + -1;
  if (iVar8 == 0) {
    iStack_80 = iVar16;
  }
  if ((this_00 == (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    iVar8 = (*pcVar2)();
    return iVar8;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this_00);
  pFVar5 = local_88;
  this_00->InvocationListLockCount = this_00->InvocationListLockCount + 1;
  uVar12 = (this_00->InvocationList).ArrayNum - 1;
  if (-1 < (int)uVar12) {
    uVar3 = CONCAT44(uStack_7c,iStack_80);
    lVar15 = (longlong)(int)uVar12 << 4;
    iVar16 = 0;
    do {
      uVar9 = 0;
      if ((int)uVar12 < (this_00->InvocationList).ArrayNum) {
        uVar9 = ~uVar12 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        iVar8 = (*pcVar2)();
        return iVar8;
      }
      pFVar1 = (this_00->InvocationList).AllocatorInstance.Data;
      if ((*(int *)(pFVar1 + lVar15 + 8) == 0) ||
         (plVar13 = *(longlong **)(pFVar1 + lVar15), plVar13 == (longlong *)0x0)) {
LAB_141efe96d:
        iVar16 = 1;
      }
      else {
        local_78 = pFVar5;
        uStack_70 = uVar3;
        cVar7 = (**(code **)(*plVar13 + 0x68))();
        if (cVar7 == '\0') goto LAB_141efe96d;
      }
      lVar15 = lVar15 + -0x10;
      uVar12 = uVar12 - 1;
    } while (-1 < (int)uVar12);
  }
  this_00->InvocationListLockCount = this_00->InvocationListLockCount + -1;
  if ((char)iVar16 != '\0') {
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList(this_00,false);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
LAB_141efe9b0:
  pTVar11 = (TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
             *)0x0;
  iVar8 = IAsyncPackageLoader::GetNextRequestId();
  FLoadTimeProfilerTracePrivate::OutputBeginRequest((longlong)iVar8);
  AddPendingRequest((FAsyncLoadingThread *)&this[-1].AsyncLoadingThreadIndex,iVar8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_3,local_58);
  if (((*(int *)&param_3->field_0x10 == 0) || (*(longlong **)&param_3->field_0x8 == (longlong *)0x0)
      ) || (cVar7 = (**(code **)(**(longlong **)&param_3->field_0x8 + 0x38))(), cVar7 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (local_58);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (local_58);
    this_01 = ::operator_new(0x18);
    if (this_01 != (void *)0x0) {
      pTVar11 = TDelegate<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
                ::
                TDelegate<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
                          (this_01,param_3);
    }
  }
  local_c8.Name = local_e0;
  local_c8.PackagePath.PackageName = param_1->PackageName;
  local_c8.PackagePath.HeaderExtension = param_1->HeaderExtension;
  local_c8.PackageFlags = param_4;
  local_c8.Priority = param_6;
  local_c8.PIEInstanceID = param_5;
  local_c8.RequestID = iVar8;
  local_c8.PackageLoadedDelegate.Ptr = pTVar11;
  FLinkerInstancingContext::FLinkerInstancingContext(&local_c8.InstancingContext);
  if ((local_c8.PackagePath.PackageName == (FName)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!PackagePath.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncPackage.h"
                         ,0x3a,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    iVar8 = (*pcVar2)();
    return iVar8;
  }
  if (param_7 != (FLinkerInstancingContext *)0x0) {
    local_c8.InstancingContext.SharedData.Object = (param_7->SharedData).Object;
    local_d0.ReferenceController = (param_7->SharedData).SharedReferenceCount.ReferenceController;
    if (local_d0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_d0.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_d0.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_d8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_c8.InstancingContext.SharedData.SharedReferenceCount,&local_d0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d0.ReferenceController);
  }
  QueuePackage((FAsyncLoadingThread *)&this[-1].AsyncLoadingThreadIndex,&local_c8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.InstancingContext.SharedData.SharedReferenceCount.ReferenceController);
  TVar4.Ptr = local_c8.PackageLoadedDelegate.Ptr;
  if (local_c8.PackageLoadedDelegate.Ptr !=
      (TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
       *)0x0) {
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_c8.PackageLoadedDelegate.Ptr);
    ::operator_delete(TVar4.Ptr,0x18);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3);
  return iVar8;
}

// MapDuplicateRequestID @ 141effb40

void __thiscall
FAsyncLoadingThread::MapDuplicateRequestID(FAsyncLoadingThread *this,int param_1,int param_2)

{
  TPairInitializer<int_const_&,int_const_&> local_res8;
  int local_res18 [4];
  int **local_18;
  int *local_10;
  
  local_18 = &local_res8.Value;
  local_10 = local_res18;
  local_res8.Value._0_4_ = param_1;
  local_res18[0] = param_2;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_const_&,int_const_&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             &this->DuplicateRequestMap,&local_res8,(bool *)&local_18);
  return;
}

// NotifyConstructedDuringAsyncLoading @ 141f00190

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAsyncLoadingThread::NotifyConstructedDuringAsyncLoading
          (FAsyncLoadingThread *this,UObject *param_1,bool param_2)

{
  FTlsAutoCleanup this_00;
  UPackage *pUVar1;
  uint *puVar2;
  FTlsAutoCleanup *pFVar3;
  FUObjectItem *this_01;
  UPackage *pUVar4;
  int local_res20 [2];
  undefined1 local_18 [16];
  
  puVar2 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_18._8_8_ = local_res20;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
       ::Call;
  pFVar3 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)local_18,puVar2);
  if (pFVar3[8] != (FTlsAutoCleanup)0x0) {
    if (!param_2) {
      this_01 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&param_1->field_0xc);
      FUObjectItem::SetRootFlags(this_01,AsyncLoadingPhase2|AsyncLoadingPhase1);
    }
    this_00 = pFVar3[8];
    FAsyncPackage::AddObjectReference((FAsyncPackage *)this_00,param_1);
    if ((((GEventDrivenLoaderEnabled != false) &&
         (pUVar1 = *(UPackage **)((longlong)this_00 + 0x58),
         pUVar4 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)param_1), pUVar4 == pUVar1)
         ) && ((byte)(*(EAsyncPackageLoadingState *)((longlong)this_00 + 0x2d8) -
                     StartImportPackages) < 5)) &&
       (((*(uint *)&param_1->field_0x8 & 0x8200400) == 0 &&
        (FindExportFromObject
                   ((FLinkerLoad *)local_res20,
                    (UObject *)*(FLinkerLoad **)((longlong)this_00 + 0x50)), 0 < local_res20[0]))))
    {
      if (6 < (byte)LogStreaming._0_1_) {
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)param_1,(FString *)local_18,(UObject *)0x0,None);
        UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
        if ((FScriptContainerElement *)local_18._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_18._0_8_);
        }
      }
      UObjectBase::AtomicallySetFlags((UObjectBase *)param_1,RF_WillBeLoaded);
    }
  }
  return;
}

// NotifyRegistrationComplete @ 141f002d0

void __thiscall FAsyncLoadingThread::NotifyRegistrationComplete(FAsyncLoadingThread *this)

{
  FEDLBootNotificationManager::NotifyRegistrationComplete
            ((FEDLBootNotificationManager *)this->_padding_,
             (FAsyncLoadingThread *)&this[-1].AsyncLoadingThreadIndex);
  return;
}

// NotifyRegistrationEvent @ 141f007d0

void __thiscall
FAsyncLoadingThread::NotifyRegistrationEvent
          (FAsyncLoadingThread *this,FName param_1,FName param_2,ENotifyRegistrationType param_3,
          ENotifyRegistrationPhase param_4,_func___cdecl_UObject_ptr *param_5,bool param_6,
          UObject *param_7)

{
  FEDLBootNotificationManager::NotifyRegistrationEvent
            ((FEDLBootNotificationManager *)this->_padding_,param_1,param_2,param_3,param_4,param_5,
             param_6);
  return;
}

// NotifyUnreachableObjects @ 141f00d30

void __thiscall
FAsyncLoadingThread::NotifyUnreachableObjects
          (FAsyncLoadingThread *this,TArrayView<FUObjectItem_*,int> *param_1)

{
  return;
}

// PeekFlushRequest @ 141f00f90

FFlushRequest * __thiscall
FAsyncLoadingThread::PeekFlushRequest
          (FAsyncLoadingThread *this,FFlushRequest *__return_storage_ptr__)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  atomic<int> *paVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  FFlushRequestData *pFVar4;
  undefined1 *puVar5;
  code *pcVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  uint uVar9;
  atomic<int> aVar10;
  FFlushRequest *pFVar11;
  longlong lVar12;
  atomic<int> *paVar13;
  ForElementType<FFlushRequest> FVar14;
  atomic<int> *paVar15;
  undefined1 *puVar16;
  atomic<int> *paVar17;
  
  lpCriticalSection = &this->FlushRequestCritical;
  (__return_storage_ptr__->Data).Object = (FFlushRequestData *)0x0;
  (__return_storage_ptr__->Data).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar2 = (this->FlushRequests).ArrayNum;
  if (iVar2 != 0) {
    uVar9 = 0;
    if ((int)(iVar2 - 1U) < iVar2) {
      uVar9 = ~(iVar2 - 1U) >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      pFVar11 = (FFlushRequest *)(*pcVar6)();
      return pFVar11;
    }
    FVar14 = (this->FlushRequests).AllocatorInstance.SecondaryData;
    lVar12 = (longlong)(this->FlushRequests).ArrayNum;
    if (FVar14 == (ForElementType<FFlushRequest>)0x0) {
      FVar14 = (ForElementType<FFlushRequest>)&this->FlushRequests;
    }
    pTVar3 = ((void **)((longlong)FVar14 + -8))[lVar12 * 2];
    pFVar4 = ((void **)((longlong)FVar14 + -0x10))[lVar12 * 2];
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar7 = (__return_storage_ptr__->Data).SharedReferenceCount.ReferenceController;
    (__return_storage_ptr__->Data).Object = pFVar4;
    (__return_storage_ptr__->Data).SharedReferenceCount.ReferenceController = pTVar3;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar4 = (__return_storage_ptr__->Data).Object;
  if (pFVar4 != (FFlushRequestData *)0x0) {
    iVar2 = pFVar4->NumRequests;
    paVar17 = (pFVar4->RequestIDs).Ptr;
    if ((iVar2 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      pFVar11 = (FFlushRequest *)(*pcVar6)();
      return pFVar11;
    }
    paVar1 = paVar17 + iVar2;
    for (; paVar17 != paVar1; paVar17 = paVar17 + 1) {
      if (*(int *)&(this->DuplicateRequestMap).field_0x8 !=
          *(int *)&(this->DuplicateRequestMap).field_0x34) {
        puVar5 = *(undefined1 **)&(this->DuplicateRequestMap).field_0x40;
        puVar16 = &(this->DuplicateRequestMap).field_0x38;
        if (puVar5 != (undefined1 *)0x0) {
          puVar16 = puVar5;
        }
        aVar10 = *(atomic<int> *)
                  (puVar16 +
                  (ulonglong)(*(int *)&(this->DuplicateRequestMap).field_0x48 - 1U & (uint)*paVar17)
                  * 4);
        if (aVar10 != (atomic<int>)0xffffffff) {
          do {
            paVar13 = (atomic<int> *)
                      ((longlong)(int)aVar10 * 0x10 + *(longlong *)&this->DuplicateRequestMap);
            if (*paVar13 == *paVar17) {
              paVar15 = paVar13 + 1;
              if (paVar13 == (atomic<int> *)0x0) {
                paVar15 = (atomic<int> *)0x0;
              }
              if (paVar15 != (atomic<int> *)0x0) {
                *paVar17 = *paVar15;
              }
              break;
            }
            aVar10 = paVar13[2];
          } while (aVar10 != (atomic<int>)0xffffffff);
        }
      }
    }
  }
  return __return_storage_ptr__;
}

// ProcessAsyncLoading @ 141f04490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

Type __thiscall
FAsyncLoadingThread::ProcessAsyncLoading
          (FAsyncLoadingThread *this,int *param_1,bool param_2,bool param_3,float param_4,
          FFlushRequest *param_5)

{
  int *piVar1;
  FThreadSafeCounter *pFVar2;
  FWindowsRecursiveMutex *pFVar3;
  FScriptContainerElement *pFVar4;
  FAsyncPackage *this_00;
  FName FVar5;
  FPrecacheCallbackHandler *pFVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  double dVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  byte bVar21;
  bool bVar22;
  char cVar23;
  bool bVar24;
  bool bVar25;
  Type TVar26;
  int iVar27;
  uint uVar28;
  FThreadHeartBeat *pFVar29;
  FTrackedActivity *this_01;
  TStringBuilderBase<wchar_t> *this_02;
  undefined8 uVar30;
  FName *pFVar31;
  FThreadSafeStaticStat<FStat_STAT_FAsyncLoadingThread_ProcessAsyncLoading> FVar32;
  FThreadStats *pFVar33;
  FThreadStatsPool *pFVar34;
  wchar_t *pwVar35;
  longlong *plVar36;
  FScriptContainerElement *pFVar37;
  FStatMessage *pFVar38;
  uint uVar39;
  FNameEntryId FVar40;
  FName FVar41;
  longlong lVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined1 auStackY_508 [32];
  UObject *pUVar46;
  Type local_4a4;
  TLess<FAsyncLoadEvent> local_490;
  FIdentityFunctor local_48f [7];
  FAsyncPackage *local_488;
  FName local_480;
  FFlushRequest *local_478;
  FColor_u_0 local_470;
  float local_46c;
  FColor_u_0 local_468 [2];
  FName local_460;
  FName local_458;
  double local_450;
  wchar_t *local_448;
  UObject *pUStack_440;
  float local_438;
  char local_434;
  undefined1 local_433;
  FName local_430;
  FName local_420;
  LARGE_INTEGER local_410;
  TDereferenceWrapper<FAsyncLoadEvent,TLess<FAsyncLoadEvent>_> local_408;
  LARGE_INTEGER local_400;
  LARGE_INTEGER local_3f8;
  LARGE_INTEGER local_3f0;
  LARGE_INTEGER local_3e8;
  FName local_3e0;
  LARGE_INTEGER local_3d8;
  LARGE_INTEGER local_3d0;
  LARGE_INTEGER local_3c8;
  LARGE_INTEGER local_3c0;
  FName local_3b8;
  LARGE_INTEGER local_3b0;
  FStatMessage local_3a8;
  LARGE_INTEGER local_398;
  LARGE_INTEGER local_390;
  FStatMessage local_388;
  FStatMessage local_378;
  LARGE_INTEGER local_368;
  FDestructionSentinel local_360;
  LARGE_INTEGER local_348;
  FName local_340;
  FName local_338 [2];
  undefined8 local_328;
  undefined8 uStack_320;
  code *local_318;
  undefined8 uStack_310;
  longlong local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  longlong *plStack_2f0;
  TStringBuilderBase<wchar_t> local_2e8;
  wchar_t local_2c8 [256];
  ulonglong local_c8 [18];
  
  local_c8[0] = __security_cookie.value ^ (ulonglong)auStackY_508;
  local_478 = param_5;
  if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
    bVar15 = false;
  }
  else {
    bVar15 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId4328,"AsyncLoadingTime",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
               ,0x10e8);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4328);
  }
  bVar18 = IsInGameThread();
  if (((bVar18) && (bThreadStarted != false)) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("!IsInGameThread() || !IsMultithreaded()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                          ,0x10e9,L""), bVar18)) {
    pcVar7 = (code *)swi(3);
    TVar26 = (*pcVar7)();
    return TVar26;
  }
  if ((param_2) || (bVar18 = true, bThreadStarted != false)) {
    bVar18 = false;
  }
  uVar39 = 0;
  local_4a4 = Complete;
  *param_1 = 0;
  QueryPerformanceCounter(&local_398);
  dVar17 = __real_4170000000000000;
  dVar10 = (double)local_398.QuadPart * FGenericPlatformTime::SecondsPerCycle +
           __real_4170000000000000;
  if (GEventDrivenLoaderEnabled != false) {
    LOCK();
    pFVar2 = &this->RecursionNotAllowed;
    iVar27 = pFVar2->Counter;
    pFVar2->Counter = pFVar2->Counter + 1;
    UNLOCK();
    if ((iVar27 != 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("AsyncLoadingThread.RecursionNotAllowed.Increment() == 1",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                            ,0x10dd,L""), bVar19)) {
      pcVar7 = (code *)swi(3);
      TVar26 = (*pcVar7)();
      return TVar26;
    }
    bVar19 = false;
    bVar20 = IsInGameThread();
    if (bVar20) {
      iVar27 = this->AsyncLoadingThreadIndex;
      LOCK();
      AsyncLoadingTickCounter.Counter = AsyncLoadingTickCounter.Counter + 1;
      UNLOCK();
      if (((CurrentAsyncLoadingTickThreadIndex != -1) &&
          (CurrentAsyncLoadingTickThreadIndex != iVar27)) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("CurrentAsyncLoadingTickThreadIndex == INDEX_NONE || CurrentAsyncLoadingTickThreadIndex == ThreadIndex"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoadingThread.h"
                              ,0x1cb,L""), bVar19)) {
        pcVar7 = (code *)swi(3);
        TVar26 = (*pcVar7)();
        return TVar26;
      }
      bVar19 = true;
      CurrentAsyncLoadingTickThreadIndex = iVar27;
    }
    fVar44 = __real_41200000;
    bVar21 = 0;
    fVar45 = param_4;
LAB_141f046d1:
    do {
      do {
        if ((bVar18) && (bVar21 = bVar21 + 1, (bVar21 & 0x1f) == 0x1f)) {
          pFVar29 = FThreadHeartBeat::Get();
          FThreadHeartBeat::HeartBeat(pFVar29);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     &FCoreDelegates::OnAsyncLoadingFlushUpdate,(FWriteAccessScope *)&local_360);
          bVar20 = false;
          FCoreDelegates::OnAsyncLoadingFlushUpdate._28_4_ =
               FCoreDelegates::OnAsyncLoadingFlushUpdate._28_4_ + 1;
          uVar39 = FCoreDelegates::OnAsyncLoadingFlushUpdate._16_4_ - 1;
          if (-1 < (int)uVar39) {
            lVar42 = (longlong)(int)uVar39 << 4;
            bVar20 = false;
            do {
              uVar28 = 0;
              if ((int)uVar39 < (int)FCoreDelegates::OnAsyncLoadingFlushUpdate._16_4_) {
                uVar28 = ~uVar39 >> 0x1f;
              }
              if ((uVar28 == 0) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar22)) {
                pcVar7 = (code *)swi(3);
                TVar26 = (*pcVar7)();
                return TVar26;
              }
              if (((*(int *)(lVar42 + 8 + FCoreDelegates::OnAsyncLoadingFlushUpdate._8_8_) == 0) ||
                  (*(longlong **)(lVar42 + FCoreDelegates::OnAsyncLoadingFlushUpdate._8_8_) ==
                   (longlong *)0x0)) ||
                 (cVar23 = (**(code **)(**(longlong **)
                                          (lVar42 + FCoreDelegates::OnAsyncLoadingFlushUpdate._8_8_)
                                       + 0x68))(), cVar23 == '\0')) {
                bVar20 = true;
              }
              lVar42 = lVar42 + -0x10;
              uVar39 = uVar39 - 1;
              fVar45 = param_4;
            } while (-1 < (int)uVar39);
          }
          FCoreDelegates::OnAsyncLoadingFlushUpdate._28_4_ =
               FCoreDelegates::OnAsyncLoadingFlushUpdate._28_4_ + -1;
          if (bVar20) {
            TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &FCoreDelegates::OnAsyncLoadingFlushUpdate,false);
          }
          if (local_360.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_360.Accessor,&local_360);
          }
        }
        if (ActiveAsyncLoadContext != (FActiveAsyncLoadContext *)0x0) {
          this_01 = FTrackedActivity::GetIOActivity();
          local_2e8.bIsDynamic = false;
          local_2e8.bIsExternal = false;
          local_2e8.Base = local_2c8;
          local_2e8.CurPos = local_2c8;
          local_2e8.End = (wchar_t *)local_c8;
          this_02 = TStringBuilderBase<wchar_t>::AppendfImpl(&local_2e8,L" (%u/%u)");
          if (this_02->End < this_02->CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(this_02,1);
          }
          *this_02->CurPos = L'\0';
          FTrackedActivity::Update(this_01,this_02->Base,0xffffffff);
          TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_2e8);
        }
        bVar20 = FPrecacheCallbackHandler::ProcessIncoming(this->PrecacheHandler);
        *param_1 = *param_1 + (uint)bVar20;
        if (param_2) {
          QueryPerformanceCounter(&local_390);
          dVar8 = (double)local_390.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar17;
          if ((dVar8 - dVar10 <= (double)fVar45) || (GWarnIfTimeLimitExceeded == 0)) {
            LastTestTime = dVar8;
            if (dVar8 - dVar10 <= (double)fVar45) goto LAB_141f04933;
          }
          else {
            pwVar35 = L"ProcessIncoming";
LAB_141f0562f:
            dVar9 = (double)fVar45;
            pUVar46 = (UObject *)0x0;
            dVar11 = dVar10;
LAB_141f0563d:
            IsTimeLimitExceededPrint(dVar11,dVar8,LastTestTime,dVar9,pwVar35,pUVar46);
            LastTestTime = dVar8;
          }
          goto LAB_141f0558a;
        }
LAB_141f04933:
        if ((byte)LogStreaming._0_1_ < 6) {
          if (GGCSingleton->GCWantsToRunCounter != (TAtomic<int>)0x0) goto LAB_141f0558a;
        }
        else if (GGCSingleton->GCWantsToRunCounter != (TAtomic<int>)0x0) goto LAB_141f0494a;
        if ((this->IsLoadingSuspended).Counter != 0) goto LAB_141f0558a;
        QueryPerformanceCounter(&local_368);
        fVar43 = fVar45 - (float)(((double)local_368.QuadPart *
                                   FGenericPlatformTime::SecondsPerCycle + dVar17) - dVar10);
        if (fVar43 <= 0.0) {
          fVar43 = 0.0;
        }
        iVar27 = CreateAsyncPackagesFromQueue(this,param_2,param_3,(double)fVar43);
        *param_1 = *param_1 + iVar27;
        if ((0 < iVar27) || (bVar22 = false, bVar20)) {
          bVar22 = true;
        }
        if (param_2) {
          QueryPerformanceCounter(&local_410);
          dVar8 = (double)local_410.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar17;
          if (((double)fVar45 < dVar8 - dVar10) && (GWarnIfTimeLimitExceeded != 0)) {
            pwVar35 = L"CreateAsyncPackagesFromQueue";
            goto LAB_141f0562f;
          }
          LastTestTime = dVar8;
          if ((double)fVar45 < dVar8 - dVar10) goto LAB_141f0558a;
        }
        if ((byte)LogStreaming._0_1_ < 6) {
          if (GGCSingleton->GCWantsToRunCounter != (TAtomic<int>)0x0) goto LAB_141f0558a;
        }
        else if (GGCSingleton->GCWantsToRunCounter != (TAtomic<int>)0x0) goto LAB_141f0494a;
      } while (bVar22);
      iVar27 = (this->EventQueue).EventQueue.ArrayNum;
      local_433 = 1;
      local_328 = 0;
      uStack_320 = 0;
      local_318 = (code *)0x0;
      plStack_2f0 = (longlong *)0x0;
      local_448 = (wchar_t *)0x0;
      pUStack_440 = (UObject *)0x0;
      local_450 = dVar10;
      local_438 = fVar45;
      local_434 = param_2;
      if (iVar27 == 0) {
        if ((this->AsyncPackagesReadyForTick).ArrayNum == 0) {
          pFVar6 = this->PrecacheHandler;
          if ((*(int *)&(pFVar6->WaitingPackages).field_0x8 ==
               *(int *)&(pFVar6->WaitingPackages).field_0x34) &&
             (*(int *)&(pFVar6->WaitingSummaries).Elements.field_0x8 ==
              *(int *)&(pFVar6->WaitingSummaries).Elements.field_0x34)) {
            local_4a4 = Complete;
            if (bVar19) {
              LeaveAsyncLoadingTick(this->AsyncLoadingThreadIndex);
            }
            LOCK();
            pFVar2 = &this->RecursionNotAllowed;
            iVar27 = pFVar2->Counter;
            pFVar2->Counter = pFVar2->Counter + -1;
            UNLOCK();
            if ((iVar27 != 1) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("AsyncLoadingThread.RecursionNotAllowed.Decrement() == 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                                    ,0x10e1,L""), bVar18)) {
              pcVar7 = (code *)swi(3);
              TVar26 = (*pcVar7)();
              return TVar26;
            }
            goto LAB_141f05b46;
          }
          if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
            bVar20 = false;
          }
          else {
            bVar20 = true;
            FCpuProfilerTrace::GetOrCreateSpecId
                      (&__CpuProfilerEventSpecId4470,"Package_EventIOWait",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                       ,0x1176);
            FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4470);
          }
          QueryPerformanceCounter(&local_348);
          if (param_2) {
            if (param_3) {
              QueryPerformanceCounter(&local_3c8);
              fVar43 = fVar45 - (float)(((double)local_3c8.QuadPart *
                                         FGenericPlatformTime::SecondsPerCycle + dVar17) - dVar10);
              if (fVar43 <= 0.0) {
                fVar43 = 0.0;
              }
              if (0.0 < fVar43) {
                bVar22 = FPrecacheCallbackHandler::WaitForIO(this->PrecacheHandler,fVar43);
                if (bVar22) goto LAB_141f05603;
                FWindowsPlatformTime::Seconds();
              }
            }
            if (bVar20) {
              FCpuProfilerTrace::OutputEndEvent();
            }
            goto LAB_141f0558a;
          }
          bVar22 = FPrecacheCallbackHandler::WaitForIO(this->PrecacheHandler,fVar44);
          if (!bVar22) {
            FGenericPlatformMisc::LowLevelOutputDebugString(L"Waited for 10 seconds on IO....");
          }
LAB_141f05603:
          *param_1 = *param_1 + 1;
          if (bVar20) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          goto LAB_141f046d1;
        }
        FVar32 = StatPtr_STAT_FAsyncLoadingThread_ProcessAsyncLoading;
        if (StatPtr_STAT_FAsyncLoadingThread_ProcessAsyncLoading ==
            (FThreadSafeStaticStat<FStat_STAT_FAsyncLoadingThread_ProcessAsyncLoading>)0x0) {
          pFVar31 = ::FName::FName(local_338,"STAT_FAsyncLoadingThread_ProcessAsyncLoading");
          FVar32 = (FThreadSafeStaticStat<FStat_STAT_FAsyncLoadingThread_ProcessAsyncLoading>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_STAT_FAsyncLoadingThread_ProcessAsyncLoading,*pFVar31,
                              L"ProcessAsyncLoading AsyncLoadingThread","STATGROUP_AsyncLoad",
                              "STATCAT_Advanced",L"Async Load",false,true,ST_int64,true,false,
                              MCR_Invalid);
        }
        FVar41 = *(FName *)FVar32;
        bVar20 = false;
        bVar14 = false;
        local_430.ComparisonIndex.Value = 0;
        local_430.Number = 0;
        bVar22 = false;
        bVar24 = false;
        if ((FVar41.ComparisonIndex.Value.Value == 0) &&
           (bVar25 = bVar20, bVar16 = bVar14, FVar41.Number == 0)) {
LAB_141f04e18:
          bVar14 = bVar24;
          bVar20 = bVar22;
          bVar22 = false;
          FVar41 = local_430;
        }
        else {
          if (GCycleStatsShouldEmitNamedEvents != 0) {
            local_470.Bits = 0;
            FGenericPlatformMisc::BeginNamedEvent
                      ((FColor *)&local_470._s_0,(char *)*(FName *)((longlong)FVar32 + 0x10));
            bVar20 = false;
            bVar14 = true;
            bVar22 = false;
            bVar24 = true;
            if (-1 < CpuChannel->Enabled) {
              local_460.ComparisonIndex.Value = FVar41.ComparisonIndex.Value.Value;
              local_460.Number = FVar41.Number;
              FCpuProfilerTrace::OutputBeginDynamicEventWithId
                        (&local_460,(wchar_t *)*(FName *)((longlong)FVar32 + 8),
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                         ,0x1140);
              bVar20 = true;
              bVar14 = true;
              bVar22 = true;
              bVar24 = true;
            }
          }
          bVar25 = bVar20;
          bVar16 = bVar14;
          if (FThreadStats::bPrimaryEnable == false) goto LAB_141f04e18;
          local_480 = FVar41;
          local_430 = FVar41;
          FThreadStats::AddMessage(FVar41,CycleScopeStart);
          bVar22 = true;
        }
        *param_1 = *param_1 + 1;
        if (((this->AsyncPackagesReadyForTick).ArrayNum < 1) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar7 = (code *)swi(3);
          TVar26 = (*pcVar7)();
          return TVar26;
        }
        this_00 = *(FAsyncPackage **)(this->AsyncPackagesReadyForTick).AllocatorInstance.Data;
        if ((this_00->AsyncPackageLoadingState != PostLoad_Etc) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("Package->AsyncPackageLoadingState == EAsyncPackageLoadingState::PostLoad_Etc"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                                ,0x1145,L""), bVar24)) {
          pcVar7 = (code *)swi(3);
          TVar26 = (*pcVar7)();
          return TVar26;
        }
        if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
          bVar24 = false;
        }
        else {
          bVar24 = true;
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId4422,"ProcessAsyncLoadingTime",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                     ,0x1146);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4422);
        }
        FVar40 = FVar41.ComparisonIndex.Value;
        uVar39 = FVar41.Number;
        if (this_00->bLoadHasFinished == false) {
          QueryPerformanceCounter(&local_3f8);
          local_46c = fVar45 - (float)(((double)local_3f8.QuadPart *
                                        FGenericPlatformTime::SecondsPerCycle + dVar17) - dVar10);
          if (local_46c <= 0.0) {
            local_46c = 0.0;
          }
          TVar26 = FAsyncPackage::TickAsyncPackage(this_00,param_2,param_3,&local_46c);
          if (TVar26 != TimeOut) {
            if (TVar26 == Complete) goto LAB_141f05241;
            goto LAB_141f05300;
          }
          if (param_2) {
            QueryPerformanceCounter(&local_3f0);
            dVar8 = (double)local_3f0.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar17;
            if ((dVar8 - dVar10 <= (double)fVar45) || (GWarnIfTimeLimitExceeded == 0)) {
              LastTestTime = dVar8;
              if (dVar8 - dVar10 <= (double)fVar45) goto LAB_141f04fbf;
              goto LAB_141f04ff6;
            }
            goto LAB_141f0566d;
          }
LAB_141f04fbf:
          if (5 < (byte)LogStreaming._0_1_) {
            if (GGCSingleton->GCWantsToRunCounter == (TAtomic<int>)0x0) {
LAB_141f050db:
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
              goto LAB_141f050ee;
            }
            goto LAB_141f04fe0;
          }
          if (GGCSingleton->GCWantsToRunCounter != (TAtomic<int>)0x0) goto LAB_141f04ff6;
          if (1 < (byte)LogStreaming._0_1_) goto LAB_141f050db;
LAB_141f050ee:
          if (bVar24) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          if (bVar16) {
            FGenericPlatformMisc::EndNamedEvent();
          }
          if (bVar25) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          if ((((!bVar22) || (FVar41 == (FName)0x0)) ||
              (FThreadStats::bPrimaryDisableForever != false)) ||
             (FThreadStats::TlsSlot == 0xffffffff)) goto LAB_141f046d1;
          pFVar33 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar33 == (FThreadStats *)0x0) {
            pFVar34 = FThreadStatsPool::Get();
            pFVar33 = FThreadStatsPool::GetFromPool(pFVar34);
          }
          if (pFVar33->ScopeCount <= pFVar33->bWaitForExplicitFlush) goto LAB_141f046d1;
          local_388.NameAndInfo.Number = uVar39 & 0xffff6fff | 0x6000;
          local_388.NameAndInfo.Index.Value = FVar40.Value;
          QueryPerformanceCounter(&local_3e8);
          local_388.StatData.Pad[4] = '\0';
          local_388.StatData.Pad[5] = '\0';
          local_388.StatData.Pad[6] = '\0';
          local_388.StatData.Pad[7] = '\0';
          local_388.StatData.Pad[0] = local_3e8.s.LowPart._0_1_;
          local_388.StatData.Pad[1] = local_3e8.s.LowPart._1_1_;
          local_388.StatData.Pad[2] = local_3e8.s.LowPart._2_1_;
          local_388.StatData.Pad[3] = local_3e8.s.LowPart._3_1_;
          pFVar38 = &local_388;
        }
        else {
          bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                              ,0x1159,L"");
          if (bVar25) {
            pcVar7 = (code *)swi(3);
            TVar26 = (*pcVar7)();
            return TVar26;
          }
LAB_141f05241:
          pFVar3 = &this->AsyncPackagesCritical;
          if (pFVar3 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::ReportNotNullPtr();
          }
          EnterCriticalSection((LPCRITICAL_SECTION)pFVar3);
          FVar5 = (this_00->Desc).Name;
          local_3e0 = FVar5;
          if (*(int *)&(this->AsyncPackageNameLookup).field_0x8 !=
              *(int *)&(this->AsyncPackageNameLookup).field_0x34) {
            uVar28 = ::GetTypeHash(FVar5.ComparisonIndex.Value);
            TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
            ::RemoveImpl<FName>((TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
                                 *)&this->AsyncPackageNameLookup,FVar5.Number + uVar28,&local_3e0);
          }
          pFVar4 = (this->AsyncPackages).AllocatorInstance.Data;
          for (pFVar37 = pFVar4; pFVar37 != pFVar4 + (longlong)(this->AsyncPackages).ArrayNum * 8;
              pFVar37 = pFVar37 + 8) {
            if (*(FAsyncPackage **)pFVar37 == this_00) {
              iVar27 = (int)((longlong)pFVar37 - (longlong)pFVar4 >> 3);
              goto LAB_141f052c7;
            }
          }
          iVar27 = -1;
LAB_141f052c7:
          TArray<FAsyncPackage_*,TSizedDefaultAllocator<32>_>::RemoveAt
                    (&this->AsyncPackages,iVar27,Default);
          TArray<FAsyncPackage_*,TSizedDefaultAllocator<32>_>::RemoveAt
                    (&this->AsyncPackagesReadyForTick,0,No);
          LeaveCriticalSection((LPCRITICAL_SECTION)pFVar3);
          AddToLoadedPackages(this,this_00);
LAB_141f05300:
          if (param_2) {
            QueryPerformanceCounter(&local_3d8);
            dVar8 = (double)local_3d8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar17;
            if ((dVar8 - dVar10 <= (double)fVar45) || (GWarnIfTimeLimitExceeded == 0)) {
              LastTestTime = dVar8;
              if (dVar8 - dVar10 <= (double)fVar45) goto LAB_141f0535d;
            }
            else {
LAB_141f0566d:
              IsTimeLimitExceededPrint
                        (dVar10,dVar8,LastTestTime,(double)fVar45,L"TickAsyncPackage",(UObject *)0x0
                        );
              LastTestTime = dVar8;
            }
LAB_141f04ff6:
            if (bVar24) {
              FCpuProfilerTrace::OutputEndEvent();
            }
            if (bVar14) {
              FGenericPlatformMisc::EndNamedEvent();
            }
            if (bVar20) {
              FCpuProfilerTrace::OutputEndEvent();
            }
            if (((bVar22) && (FVar41 != (FName)0x0)) &&
               ((FThreadStats::bPrimaryDisableForever == false &&
                (FThreadStats::TlsSlot != 0xffffffff)))) {
              pFVar33 = TlsGetValue(FThreadStats::TlsSlot);
              if (pFVar33 == (FThreadStats *)0x0) {
                pFVar34 = FThreadStatsPool::Get();
                pFVar33 = FThreadStatsPool::GetFromPool(pFVar34);
              }
              if (pFVar33->bWaitForExplicitFlush < pFVar33->ScopeCount) {
                local_378.NameAndInfo.Number = uVar39 & 0xffff6fff | 0x6000;
                local_378.NameAndInfo.Index.Value = FVar40.Value;
                QueryPerformanceCounter(&local_3c0);
                local_378.StatData.Pad[4] = '\0';
                local_378.StatData.Pad[5] = '\0';
                local_378.StatData.Pad[6] = '\0';
                local_378.StatData.Pad[7] = '\0';
                local_378.StatData.Pad[0] = local_3c0.s.LowPart._0_1_;
                local_378.StatData.Pad[1] = local_3c0.s.LowPart._1_1_;
                local_378.StatData.Pad[2] = local_3c0.s.LowPart._2_1_;
                local_378.StatData.Pad[3] = local_3c0.s.LowPart._3_1_;
                FThreadStats::AddStatMessage(pFVar33,&local_378);
                piVar1 = &pFVar33->ScopeCount;
                *piVar1 = *piVar1 + -1;
                if (*piVar1 == 0) {
                  FThreadStats::Flush(pFVar33,false,false);
                }
                else if (FThreadStats::bIsRawStatsActive != false) {
                  FThreadStats::FlushRawStats(pFVar33,false,false);
                }
              }
            }
            goto LAB_141f0558a;
          }
LAB_141f0535d:
          if ((byte)LogStreaming._0_1_ < 6) {
            if (GGCSingleton->GCWantsToRunCounter != (TAtomic<int>)0x0) goto LAB_141f04ff6;
          }
          else if (GGCSingleton->GCWantsToRunCounter != (TAtomic<int>)0x0) {
LAB_141f04fe0:
            UE::Logging::Private::BasicLog<6>
                      ((FStaticBasicLogRecord *)&PTR_u_Timing_out_asyn_1507e7988,
                       (FLogCategoryBase *)&LogStreaming);
            goto LAB_141f04ff6;
          }
          if (bVar24) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          if (bVar14) {
            FGenericPlatformMisc::EndNamedEvent();
          }
          if (bVar20) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          if ((((!bVar22) || (FVar41 == (FName)0x0)) ||
              (FThreadStats::bPrimaryDisableForever != false)) ||
             (FThreadStats::TlsSlot == 0xffffffff)) goto LAB_141f046d1;
          pFVar33 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar33 == (FThreadStats *)0x0) {
            pFVar34 = FThreadStatsPool::Get();
            pFVar33 = FThreadStatsPool::GetFromPool(pFVar34);
          }
          if (pFVar33->ScopeCount <= pFVar33->bWaitForExplicitFlush) goto LAB_141f046d1;
          local_3a8.NameAndInfo.Number = uVar39 & 0xffff6fff | 0x6000;
          local_3a8.NameAndInfo.Index.Value = FVar40.Value;
          QueryPerformanceCounter(&local_3d0);
          local_3a8.StatData.Pad[4] = '\0';
          local_3a8.StatData.Pad[5] = '\0';
          local_3a8.StatData.Pad[6] = '\0';
          local_3a8.StatData.Pad[7] = '\0';
          local_3a8.StatData.Pad[0] = local_3d0.s.LowPart._0_1_;
          local_3a8.StatData.Pad[1] = local_3d0.s.LowPart._1_1_;
          local_3a8.StatData.Pad[2] = local_3d0.s.LowPart._2_1_;
          local_3a8.StatData.Pad[3] = local_3d0.s.LowPart._3_1_;
          pFVar38 = &local_3a8;
        }
        FThreadStats::AddStatMessage(pFVar33,pFVar38);
        piVar1 = &pFVar33->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(pFVar33,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar33,false,false);
        }
        goto LAB_141f046d1;
      }
      if ((iVar27 < 1) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar7 = (code *)swi(3);
        TVar26 = (*pcVar7)();
        return TVar26;
      }
      pFVar4 = (this->EventQueue).EventQueue.AllocatorInstance.Data;
      local_328 = *(undefined8 *)pFVar4;
      uStack_320 = *(undefined8 *)(pFVar4 + 8);
      pcVar7 = *(code **)(pFVar4 + 0x10);
      uVar30 = *(undefined8 *)(pFVar4 + 0x18);
      lVar42 = *(longlong *)(pFVar4 + 0x20);
      uVar12 = *(undefined8 *)(pFVar4 + 0x28);
      uVar13 = *(undefined8 *)(pFVar4 + 0x30);
      plVar36 = *(longlong **)(pFVar4 + 0x38);
      *(code **)(pFVar4 + 0x10) = local_318;
      *(undefined8 *)(pFVar4 + 0x18) = uStack_310;
      *(longlong *)(pFVar4 + 0x20) = local_308;
      *(undefined8 *)(pFVar4 + 0x28) = uStack_300;
      *(undefined8 *)(pFVar4 + 0x30) = local_2f8;
      *(longlong **)(pFVar4 + 0x38) = plStack_2f0;
      local_318 = pcVar7;
      uStack_310 = uVar30;
      local_308 = lVar42;
      uStack_300 = uVar12;
      local_2f8 = uVar13;
      plStack_2f0 = plVar36;
      if (((this->EventQueue).EventQueue.ArrayNum < 1) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar20)) {
        pcVar7 = (code *)swi(3);
        TVar26 = (*pcVar7)();
        return TVar26;
      }
      TArray<FAsyncLoadEvent,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                (&(this->EventQueue).EventQueue,0,1);
      local_408.Predicate = &local_490;
      AlgoImpl::
      HeapSiftDown<FAsyncLoadEvent,int,FIdentityFunctor,TDereferenceWrapper<FAsyncLoadEvent,TLess<FAsyncLoadEvent>_>_>
                ((FAsyncLoadEvent *)(this->EventQueue).EventQueue.AllocatorInstance.Data,0,
                 (this->EventQueue).EventQueue.ArrayNum,local_48f,&local_408);
      UE::Core::Private::Function::CheckCallable(local_318);
      pcVar7 = local_318;
      plVar36 = &local_308;
      if (plStack_2f0 != (longlong *)0x0) {
        plVar36 = plStack_2f0;
      }
      uVar30 = (**(code **)(*plVar36 + 8))();
      (*pcVar7)(uVar30,&local_450);
      if (local_318 != (code *)0x0) {
        plVar36 = &local_308;
        if (plStack_2f0 != (longlong *)0x0) {
          plVar36 = plStack_2f0;
        }
        (**(code **)(*plVar36 + 0x10))();
      }
      pUVar46 = pUStack_440;
      pwVar35 = local_448;
      dVar11 = local_450;
      *param_1 = *param_1 + 1;
      dVar9 = (double)local_438;
      if (local_434 != '\0') {
        QueryPerformanceCounter(&local_400);
        dVar8 = (double)local_400.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar17;
        if ((dVar9 < dVar8 - dVar11) && (GWarnIfTimeLimitExceeded != 0)) goto LAB_141f0563d;
        LastTestTime = dVar8;
        if (dVar9 < dVar8 - dVar11) goto LAB_141f0558a;
      }
      if ((byte)LogStreaming._0_1_ < 6) {
        if (GGCSingleton->GCWantsToRunCounter != (TAtomic<int>)0x0) goto LAB_141f0558a;
        goto LAB_141f046d1;
      }
    } while (GGCSingleton->GCWantsToRunCounter == (TAtomic<int>)0x0);
LAB_141f0494a:
    UE::Logging::Private::BasicLog<6>
              ((FStaticBasicLogRecord *)&PTR_u_Timing_out_asyn_1507e7988,
               (FLogCategoryBase *)&LogStreaming);
LAB_141f0558a:
    local_4a4 = TimeOut;
    if (bVar19) {
      LeaveAsyncLoadingTick(this->AsyncLoadingThreadIndex);
    }
    LOCK();
    pFVar2 = &this->RecursionNotAllowed;
    iVar27 = pFVar2->Counter;
    pFVar2->Counter = pFVar2->Counter + -1;
    UNLOCK();
    if ((iVar27 != 1) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("AsyncLoadingThread.RecursionNotAllowed.Decrement() == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                            ,0x10e1,L""), bVar18)) {
      pcVar7 = (code *)swi(3);
      TVar26 = (*pcVar7)();
      return TVar26;
    }
    goto LAB_141f05b46;
  }
  if ((this->AsyncPackages).ArrayNum == 0) goto LAB_141f05b46;
  FVar32 = StatPtr_STAT_FAsyncLoadingThread_ProcessAsyncLoading;
  if (StatPtr_STAT_FAsyncLoadingThread_ProcessAsyncLoading ==
      (FThreadSafeStaticStat<FStat_STAT_FAsyncLoadingThread_ProcessAsyncLoading>)0x0) {
    pFVar31 = ::FName::FName(&local_340,"STAT_FAsyncLoadingThread_ProcessAsyncLoading");
    FVar32 = (FThreadSafeStaticStat<FStat_STAT_FAsyncLoadingThread_ProcessAsyncLoading>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_FAsyncLoadingThread_ProcessAsyncLoading,*pFVar31,
                        L"ProcessAsyncLoading AsyncLoadingThread","STATGROUP_AsyncLoad",
                        "STATCAT_Advanced",L"Async Load",false,true,ST_int64,true,false,MCR_Invalid)
    ;
  }
  FVar41 = *(FName *)FVar32;
  bVar19 = false;
  bVar22 = false;
  local_420.ComparisonIndex.Value = 0;
  local_420.Number = 0;
  bVar20 = false;
  bVar14 = false;
  if ((FVar41.ComparisonIndex.Value.Value == 0) && (FVar41.Number == 0)) {
LAB_141f05858:
    bVar22 = bVar14;
    bVar19 = bVar20;
    bVar20 = false;
    FVar41 = local_420;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_468[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_468[0]._s_0,(char *)*(FName *)((longlong)FVar32 + 0x10));
      bVar19 = false;
      bVar22 = true;
      bVar20 = false;
      bVar14 = true;
      if (-1 < CpuChannel->Enabled) {
        local_458.ComparisonIndex.Value = FVar41.ComparisonIndex.Value.Value;
        local_458.Number = FVar41.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_458,(wchar_t *)*(FName *)((longlong)FVar32 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                   ,0x11a3);
        bVar19 = true;
        bVar22 = true;
        bVar20 = true;
        bVar14 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_141f05858;
    local_480 = FVar41;
    FThreadStats::AddMessage(FVar41,CycleScopeStart);
    bVar20 = true;
  }
  lVar42 = 0;
  do {
    if ((this->AsyncPackages).ArrayNum <= (int)uVar39) break;
    if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
      bVar14 = false;
    }
    else {
      bVar14 = true;
      FCpuProfilerTrace::GetOrCreateSpecId
                (&DAT_155016bc4,"ProcessAsyncLoadingTime",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                 ,0x11a8);
      FCpuProfilerTrace::OutputBeginEvent(DAT_155016bc4);
    }
    *param_1 = *param_1 + 1;
    uVar28 = 0;
    if ((int)uVar39 < (this->AsyncPackages).ArrayNum) {
      uVar28 = ~uVar39 >> 0x1f;
    }
    if ((uVar28 == 0) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar24)) {
      pcVar7 = (code *)swi(3);
      TVar26 = (*pcVar7)();
      return TVar26;
    }
    local_488 = *(FAsyncPackage **)((this->AsyncPackages).AllocatorInstance.Data + lVar42);
    bVar24 = ShouldProcessPackage(this,local_488,local_478);
    if (bVar24) {
      if (local_488->bLoadHasFinished == false) {
        local_4a4 = FAsyncPackage::TickAsyncPackage(local_488,param_2,param_3,&param_4);
        if (local_4a4 != Complete) goto LAB_141f05a81;
      }
      else {
        local_4a4 = Complete;
      }
      if (local_488->bThreadedLoadingFinished == false) {
        local_488->bThreadedLoadingFinished = true;
        AddToLoadedPackages(this,local_488);
        pFVar3 = &this->AsyncPackagesCritical;
        if (pFVar3 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)pFVar3);
        local_3b8 = (local_488->Desc).Name;
        local_480 = (FName)((ulonglong)local_3b8 >> 0x20);
        if (*(int *)&(this->AsyncPackageNameLookup).field_0x8 !=
            *(int *)&(this->AsyncPackageNameLookup).field_0x34) {
          uVar28 = ::GetTypeHash(local_3b8.ComparisonIndex.Value);
          TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
          ::RemoveImpl<FName>((TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
                               *)&this->AsyncPackageNameLookup,
                              uVar28 + local_480.ComparisonIndex.Value,&local_3b8);
        }
        uVar39 = uVar39 - 1;
        lVar42 = lVar42 + -8;
        TArray<FAsyncPackage_*,TSizedDefaultAllocator<32>_>::Remove(&this->AsyncPackages,&local_488)
        ;
        LeaveCriticalSection((LPCRITICAL_SECTION)pFVar3);
      }
      pFVar37 = (this->AsyncPackages).AllocatorInstance.Data;
      pFVar4 = pFVar37 + (longlong)(this->AsyncPackages).ArrayNum * 8;
      for (; pFVar37 != pFVar4; pFVar37 = pFVar37 + 8) {
        if (*(FAsyncPackage **)pFVar37 == local_488) {
          bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("!AsyncPackages.Contains(Package)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                              ,0x11ce,L"");
          if (bVar24) {
            pcVar7 = (code *)swi(3);
            TVar26 = (*pcVar7)();
            return TVar26;
          }
          break;
        }
      }
    }
    else {
      local_4a4 = PendingImports;
    }
LAB_141f05a81:
    QueryPerformanceCounter(&local_3b0);
    fVar44 = param_4 - (float)(((double)local_3b0.QuadPart * FGenericPlatformTime::SecondsPerCycle +
                               dVar17) - dVar10);
    if (fVar44 <= 0.0) {
      fVar44 = 0.0;
    }
    CreateAsyncPackagesFromQueue(this,param_2,param_3,(double)fVar44);
    if (ActiveAsyncLoadContext != (FActiveAsyncLoadContext *)0x0) {
      FActiveAsyncLoadContext::Update(ActiveAsyncLoadContext,(this->AsyncPackages).ArrayNum);
    }
    if (bVar18) {
      pFVar29 = FThreadHeartBeat::Get();
      FThreadHeartBeat::HeartBeat(pFVar29);
    }
    if (bVar14) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    uVar39 = uVar39 + 1;
    lVar42 = lVar42 + 8;
  } while (local_4a4 != TimeOut);
  if (bVar22) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar19) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar20) {
    FThreadStats::AddMessage(FVar41,CycleScopeEnd);
  }
LAB_141f05b46:
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return local_4a4;
}

// ProcessAsyncPackageRequest @ 141f05bd0

void __thiscall
FAsyncLoadingThread::ProcessAsyncPackageRequest
          (FAsyncLoadingThread *this,FAsyncPackageDesc *param_1,FAsyncPackage *param_2)

{
  FWindowsRecursiveMutex *pFVar1;
  FThreadSafeCounter *pFVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  FAsyncPackage *pFVar6;
  FGCScopeGuard local_res8 [8];
  FAsyncPackage *local_res20;
  
  local_res20 = FindExistingPackageAndAddCompletionCallback
                          (this,param_1,&this->AsyncPackageNameLookup);
  if (local_res20 == (FAsyncPackage *)0x0) {
    pFVar1 = &this->LoadedPackagesCritical;
    if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
LAB_141f05deb:
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
    pFVar6 = FindExistingPackageAndAddCompletionCallback
                       (this,param_1,&this->LoadedPackagesNameLookup);
    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
    if (pFVar6 == (FAsyncPackage *)0x0) {
      pFVar1 = &this->LoadedPackagesToProcessCritical;
      if (pFVar1 == (FWindowsRecursiveMutex *)0x0) goto LAB_141f05deb;
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
      pFVar6 = FindExistingPackageAndAddCompletionCallback
                         (this,param_1,&this->LoadedPackagesToProcessNameLookup);
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
      if (pFVar6 == (FAsyncPackage *)0x0) {
        FGCScopeGuard::FGCScopeGuard(local_res8);
        pFVar6 = ::operator_new(0x608);
        if (pFVar6 == (FAsyncPackage *)0x0) {
          pFVar6 = (FAsyncPackage *)0x0;
        }
        else {
          pFVar6 = FAsyncPackage::FAsyncPackage
                             (pFVar6,this,param_1,this->EDLBootNotificationManager);
        }
        FGCScopeGuard::~FGCScopeGuard(local_res8);
        if ((param_1->PackageLoadedDelegate).Ptr !=
            (TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
             *)0x0) {
          FAsyncPackage::AddCompletionCallback(pFVar6,&param_1->PackageLoadedDelegate,false);
        }
        pFVar6->DependencyRootPackage = param_2;
        InsertPackage(this,pFVar6,false,InsertAfterMatchingPriorities);
        LOCK();
        pFVar2 = &this->QueuedPackagesCounter;
        iVar3 = pFVar2->Counter;
        pFVar2->Counter = pFVar2->Counter + -1;
        UNLOCK();
        NotifyAsyncLoadingStateHasMaybeChanged();
        if ((iVar3 + -1 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("QueuedPackagesCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                               ,0x3b4,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
  }
  else {
    iVar3 = param_1->Priority;
    bVar5 = IsInGameThread();
    if (((bVar5) && (bThreadStarted != false)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsInGameThread() || !IsMultithreaded()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                           ,0x36f,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (GEventDrivenLoaderEnabled != false) {
      (local_res20->Desc).Priority = iVar3;
      return;
    }
    if ((local_res20->Desc).Priority < iVar3) {
      TArray<FAsyncPackage_*,TSizedDefaultAllocator<32>_>::Remove(&this->AsyncPackages,&local_res20)
      ;
      (local_res20->Desc).Priority = iVar3;
      InsertPackage(this,local_res20,false,InsertBeforeMatchingPriorities);
      LOCK();
      (this->ExistingAsyncPackagesCounter).Counter =
           (this->ExistingAsyncPackagesCounter).Counter + -1;
      UNLOCK();
      NotifyAsyncLoadingStateHasMaybeChanged();
      return;
    }
  }
  return;
}

// ProcessLoadedPackages @ 141f06e80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

Type __thiscall
FAsyncLoadingThread::ProcessLoadedPackages
          (FAsyncLoadingThread *this,bool param_1,bool param_2,double param_3,bool *param_4,
          FFlushRequest *param_5)

{
  int *piVar1;
  FWindowsRecursiveMutex *pFVar2;
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<FAsyncPackage_*,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FAsyncPackage_*,TSizedDefaultAllocator<32>_> *pTVar4;
  FThreadSafeCounter *pFVar5;
  FFlushRequestData *pFVar6;
  atomic<int> *paVar7;
  FAsyncPackage *this_00;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  double dVar13;
  bool bVar14;
  char cVar15;
  bool bVar16;
  bool bVar17;
  Type TVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  FTaskGraphInterface *pFVar23;
  ForElementType<FAsyncPackage_*> FVar24;
  FName *pFVar25;
  FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_CreateClustersGameThread> FVar26;
  ForElementType<FAsyncPackage_*> FVar27;
  FName FVar28;
  longlong lVar29;
  ulonglong uVar30;
  FAsyncLoadingThread *pFVar31;
  uint uVar32;
  ulonglong uVar33;
  undefined1 auStackY_268 [32];
  undefined1 local_206 [2];
  Type local_204;
  FAsyncPackage *local_200;
  FName local_1f8;
  FFlushRequest *local_1f0;
  FColor_u_0 local_1e8 [2];
  FAsyncLoadingThread *local_1e0;
  FString local_1d8;
  FAsyncPackage *local_1c8;
  FName local_1c0;
  FName local_1b8;
  LARGE_INTEGER local_1a8;
  LARGE_INTEGER local_1a0;
  FName local_198;
  LARGE_INTEGER local_190;
  atomic<int> *local_188;
  int iStack_180;
  undefined4 uStack_17c;
  FName local_178 [2];
  TArrayView<std::atomic<int>_const_,int> local_168;
  ForElementType<FAsyncPackage_*> local_158;
  int local_130;
  int local_12c;
  TSet<UPackage_*,DefaultKeyFuncs<UPackage_*,0>,FDefaultSetAllocator> local_128;
  TSparseArray<TSparseSetElement<UPackage_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_d8;
  void *local_98;
  undefined4 local_90;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_268;
  local_1f0 = param_5;
  local_1f8 = (FName)param_4;
  local_204 = Complete;
  local_1e0 = this;
  QueryPerformanceCounter(&local_1a8);
  dVar13 = __real_4170000000000000;
  pFVar2 = &this->LoadedPackagesCritical;
  dVar11 = (double)local_1a8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
           __real_4170000000000000;
  if (pFVar2 == (FWindowsRecursiveMutex *)0x0) {
LAB_141f07bc7:
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)pFVar2);
  lpCriticalSection = &this->LoadedPackagesToProcessCritical;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) goto LAB_141f07bc7;
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((this->LoadedPackages).ArrayNum != 0) {
    pTVar3 = &this->LoadedPackagesToProcess;
    pTVar4 = &this->LoadedPackages;
    if ((pTVar3 == pTVar4) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(void*)this != (void*)&Source",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x96e,L""), bVar14)) {
      pcVar9 = (code *)swi(3);
      TVar18 = (*pcVar9)();
      return TVar18;
    }
    iVar21 = (this->LoadedPackages).ArrayNum;
    if (iVar21 != 0) {
      iVar19 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (8,8,iVar21,&pTVar3->AllocatorInstance,
                          &(this->LoadedPackagesToProcess).ArrayNum,
                          &(this->LoadedPackagesToProcess).ArrayMax);
      memcpy((pTVar3->AllocatorInstance).Data + (longlong)iVar19 * 8,
             (pTVar4->AllocatorInstance).Data,(longlong)iVar21 << 3);
    }
    (this->LoadedPackages).ArrayNum = 0;
    param_5 = local_1f0;
    param_4 = (bool *)local_1f8;
    if ((this->LoadedPackages).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&pTVar4->AllocatorInstance,0,&(this->LoadedPackages).ArrayMax);
      param_5 = local_1f0;
      param_4 = (bool *)local_1f8;
    }
  }
  if (*(int *)&(this->LoadedPackagesNameLookup).field_0x8 !=
      *(int *)&(this->LoadedPackagesNameLookup).field_0x34) {
    TMap<FName,FAsyncPackage_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>_>
    ::Append<FDefaultSetAllocator>
              (&this->LoadedPackagesToProcessNameLookup,&this->LoadedPackagesNameLookup);
    TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
             *)&this->LoadedPackagesNameLookup);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  LeaveCriticalSection((LPCRITICAL_SECTION)pFVar2);
  if (((bThreadStarted != false) && (GEventDrivenLoaderEnabled != false)) &&
     (ENamedThreads::FRenderThreadStatics::RenderThread == (TAtomic<ENamedThreads::Type>)0x1)) {
    pFVar23 = FTaskGraphInterface::Get();
    cVar15 = (**(code **)((longlong)*pFVar23 + 0x38))(pFVar23);
    if (cVar15 == '\0') {
      pFVar23 = FTaskGraphInterface::Get();
      (**(code **)((longlong)*pFVar23 + 0x48))(pFVar23);
      if (param_1) {
        QueryPerformanceCounter(&local_1a0);
        dVar10 = (double)local_1a0.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar13;
        if ((param_3 < dVar10 - dVar11) && (GWarnIfTimeLimitExceeded != 0)) {
          IsTimeLimitExceededPrint
                    (dVar11,dVar10,LastTestTime,param_3,L"ProcessRenderThreadCommandsOnGameThread",
                     (UObject *)0x0);
          LastTestTime = dVar10;
          return TimeOut;
        }
        LastTestTime = dVar10;
        if (param_3 < dVar10 - dVar11) {
          return TimeOut;
        }
      }
      if (GGCSingleton->GCWantsToRunCounter != (TAtomic<int>)0x0) {
        if (5 < (byte)LogStreaming._0_1_) {
          UE::Logging::Private::BasicLog<6>
                    ((FStaticBasicLogRecord *)&PTR_u_Timing_out_asyn_1507e7988,
                     (FLogCategoryBase *)&LogStreaming);
        }
        return TimeOut;
      }
    }
  }
  if ((*param_4 == false) && ((this->LoadedPackagesToProcess).ArrayNum < 1)) {
    cVar15 = '\0';
  }
  else {
    cVar15 = '\x01';
  }
  uVar30 = 0;
  *param_4 = (bool)cVar15;
  local_130 = 0;
  local_158.SecondaryData = (ForElementType<FAsyncPackage_*>)0x0;
  local_12c = 4;
  uVar33 = uVar30;
  TVar18 = Complete;
  if (0 < (this->LoadedPackagesToProcess).ArrayNum) {
    while (uVar20 = (uint)uVar30, param_4 = (bool *)local_1f8, TVar18 = local_204,
          (this->IsLoadingSuspended).Counter == 0) {
      uVar32 = 0;
      if ((int)uVar20 < (this->LoadedPackagesToProcess).ArrayNum) {
        uVar32 = ~uVar20 >> 0x1f;
      }
      if ((uVar32 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar9 = (code *)swi(3);
        TVar18 = (*pcVar9)();
        return TVar18;
      }
      local_200 = *(FAsyncPackage **)
                   ((this->LoadedPackagesToProcess).AllocatorInstance.Data + uVar33);
      bVar14 = ShouldProcessPackage(this,local_200,param_5);
      if ((bVar14) || (GEventDrivenLoaderEnabled != false)) {
        if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
          bVar14 = false;
        }
        else {
          bVar14 = true;
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId4790,"ProcessLoadedPackagesTime",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                     ,0x12b6);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4790);
        }
        local_204 = FAsyncPackage::PostLoadDeferredObjects(local_200,dVar11,param_1,param_3);
        if (local_204 != Complete) goto LAB_141f07548;
        if (((local_200->DependencyRefCount).Counter != 0) || (0 < (int)local_200->ReentryCount))
        goto LAB_141f076df;
        EnterCriticalSection((LPCRITICAL_SECTION)&this->LoadedPackagesToProcessCritical);
        uVar32 = uVar20 - 1;
        uVar33 = uVar33 - 8;
        TArray<FAsyncPackage_*,TSizedDefaultAllocator<32>_>::RemoveAt
                  (&this->LoadedPackagesToProcess,uVar20,Default);
        FVar28 = (local_200->Desc).Name;
        local_198 = FVar28;
        if (*(int *)&(this->LoadedPackagesToProcessNameLookup).field_0x8 !=
            *(int *)&(this->LoadedPackagesToProcessNameLookup).field_0x34) {
          uVar20 = ::GetTypeHash(FVar28.ComparisonIndex.Value);
          TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
          ::RemoveImpl<FName>((TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
                               *)&this->LoadedPackagesToProcessNameLookup,FVar28.Number + uVar20,
                              &local_198);
        }
        FAsyncPackage::ResetLoader(local_200);
        FAsyncPackage::CloseDelayedLinkers(local_200);
        LeaveCriticalSection((LPCRITICAL_SECTION)&this->LoadedPackagesToProcessCritical);
        LOCK();
        pFVar5 = &this->ExistingAsyncPackagesCounter;
        iVar21 = pFVar5->Counter;
        pFVar5->Counter = pFVar5->Counter + -1;
        UNLOCK();
        NotifyAsyncLoadingStateHasMaybeChanged();
        if (iVar21 + -1 < 0) {
          UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
        }
        FVar24 = (ForElementType<FAsyncPackage_*>)&local_158;
        if (local_158.SecondaryData != (ForElementType<FAsyncPackage_*>)0x0) {
          FVar24 = local_158.SecondaryData;
        }
        if ((ulonglong)FVar24 <= &local_200) {
          FVar24 = (ForElementType<FAsyncPackage_*>)&local_158;
          if (local_158.SecondaryData != (ForElementType<FAsyncPackage_*>)0x0) {
            FVar24 = local_158.SecondaryData;
          }
          if ((&local_200 < (FAsyncPackage **)((longlong)FVar24 + (longlong)local_12c * 8)) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar16)) {
            pcVar9 = (code *)swi(3);
            TVar18 = (*pcVar9)();
            return TVar18;
          }
        }
        iVar21 = local_130;
        if (local_130 == local_12c) {
          iVar21 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FAsyncPackage_*>_>
                             (0x808,&local_158,&local_12c);
        }
        local_130 = iVar21 + 1;
        FVar24 = (ForElementType<FAsyncPackage_*>)&local_158;
        if (local_158.SecondaryData != (ForElementType<FAsyncPackage_*>)0x0) {
          FVar24 = local_158.SecondaryData;
        }
        *(FAsyncPackage **)((longlong)FVar24 + (longlong)iVar21 * 8) = local_200;
        if (param_1) {
          QueryPerformanceCounter(&local_190);
          dVar10 = (double)local_190.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar13;
          if ((dVar10 - dVar11 <= param_3) || (GWarnIfTimeLimitExceeded == 0)) {
            LastTestTime = dVar10;
            if (dVar10 - dVar11 <= param_3) goto LAB_141f07516;
          }
          else {
            IsTimeLimitExceededPrint
                      (dVar11,dVar10,LastTestTime,param_3,L"ProcessLoadedPackages Misc",
                       (UObject *)0x0);
            LastTestTime = dVar10;
          }
        }
        else {
LAB_141f07516:
          if ((byte)LogStreaming._0_1_ < 6) {
            if (GGCSingleton->GCWantsToRunCounter == (TAtomic<int>)0x0) goto LAB_141f07627;
          }
          else {
            if (GGCSingleton->GCWantsToRunCounter == (TAtomic<int>)0x0) {
LAB_141f07627:
              pFVar6 = (local_1f0->Data).Object;
              uVar20 = uVar32;
              if (pFVar6 != (FFlushRequestData *)0x0) {
                iVar21 = pFVar6->NumRequests;
                paVar7 = (pFVar6->RequestIDs).Ptr;
                if ((iVar21 < 0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("ArrayNum >= 0",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0xfe,L""), bVar16)) {
                  pcVar9 = (code *)swi(3);
                  TVar18 = (*pcVar9)();
                  return TVar18;
                }
                pFVar2 = &this->PendingRequestsCritical;
                local_168._12_4_ = uStack_17c;
                local_168.ArrayNum = iVar21;
                local_188 = paVar7;
                iStack_180 = iVar21;
                local_168.DataPtr = paVar7;
                if ((pFVar2 == (FWindowsRecursiveMutex *)0x0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Mutex",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                                        ,0x1b,L""), bVar16)) {
                  pcVar9 = (code *)swi(3);
                  TVar18 = (*pcVar9)();
                  return TVar18;
                }
                EnterCriticalSection((LPCRITICAL_SECTION)pFVar2);
                bVar16 = Algo::
                         NoneOf<TArrayView<std::atomic<int>_const_,int>,_FAsyncLoadingThread::ContainsAnyRequestInternal_::__l2::<lambda_1>_>
                                   (&local_168,(<lambda_1>)this);
                if (pFVar2 != (FWindowsRecursiveMutex *)0x0) {
                  LeaveCriticalSection((LPCRITICAL_SECTION)pFVar2);
                }
                if (bVar16) goto LAB_141f07548;
              }
LAB_141f076df:
              param_5 = local_1f0;
              if (bVar14) {
                FCpuProfilerTrace::OutputEndEvent();
                param_5 = local_1f0;
              }
              goto LAB_141f076ee;
            }
            UE::Logging::Private::BasicLog<6>
                      ((FStaticBasicLogRecord *)&PTR_u_Timing_out_asyn_1507e7988,
                       (FLogCategoryBase *)&LogStreaming);
          }
        }
LAB_141f07548:
        param_4 = (bool *)local_1f8;
        TVar18 = local_204;
        if (bVar14) {
          FCpuProfilerTrace::OutputEndEvent();
          param_4 = (bool *)local_1f8;
          TVar18 = local_204;
        }
        break;
      }
LAB_141f076ee:
      uVar30 = (ulonglong)(uVar20 + 1);
      uVar33 = uVar33 + 8;
      param_4 = (bool *)local_1f8;
      TVar18 = local_204;
      if ((this->LoadedPackagesToProcess).ArrayNum <= (int)(uVar20 + 1)) break;
    }
  }
  iVar21 = local_130;
  lVar29 = (longlong)local_130;
  uVar20 = 0;
  local_d8._44_4_ = 0x80;
  local_d8._0_8_ = 0;
  local_d8._8_8_ = 0;
  FVar24 = (ForElementType<FAsyncPackage_*>)&local_158;
  if (local_158.SecondaryData != (ForElementType<FAsyncPackage_*>)0x0) {
    FVar24 = local_158.SecondaryData;
  }
  local_d8._32_8_ = 0;
  local_d8._40_4_ = 0;
  FVar27 = (ForElementType<FAsyncPackage_*>)&local_158;
  if (local_158.SecondaryData != (ForElementType<FAsyncPackage_*>)0x0) {
    FVar27 = local_158.SecondaryData;
  }
  local_d8._48_4_ = 0xffffffff;
  local_d8._52_4_ = 0;
  local_98 = (void *)0x0;
  local_90 = 0;
  while( true ) {
    if (local_130 != iVar21) {
      local_206[0] = 0;
      `TCheckedPointerIterator<FAsyncPackage_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_206);
    }
    if (FVar27 == (ForElementType<FAsyncPackage_*>)((longlong)FVar24 + lVar29 * 8)) break;
    local_1c8 = *(FAsyncPackage **)FVar27;
    uVar32 = 4;
    if (local_1c8->bLoadHasFailed != false) {
      uVar32 = uVar20;
    }
    FAsyncPackage::CallCompletionCallbacks(local_1c8,false,(Type)uVar32);
    TArray<FAsyncPackage_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FAsyncPackage_*_const_&>
              (&this->PackagesToDelete,&local_1c8);
    FAsyncPackage::MarkRequestIDsAsComplete(local_1c8);
    FVar27 = (ForElementType<FAsyncPackage_*>)((longlong)FVar27 + 8);
  }
  if ((*param_4 == false) && ((this->PackagesToDelete).ArrayNum < 1)) {
    cVar15 = '\0';
  }
  else {
    cVar15 = '\x01';
  }
  *param_4 = (bool)cVar15;
  pFVar31 = this;
  if (TVar18 == TimeOut) goto LAB_141f07b6e;
  FVar26 = StatPtr_STAT_FAsyncPackage_CreateClustersGameThread;
  if (StatPtr_STAT_FAsyncPackage_CreateClustersGameThread ==
      (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_CreateClustersGameThread>)0x0) {
    pFVar25 = ::FName::FName(local_178,"STAT_FAsyncPackage_CreateClustersGameThread");
    FVar26 = (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_CreateClustersGameThread>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_FAsyncPackage_CreateClustersGameThread,*pFVar25,
                        L"CreateClusters GT","STATGROUP_AsyncLoadGameThread","STATCAT_Advanced",
                        L"Async Load Game Thread",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar28 = *(FName *)FVar26;
  bVar14 = false;
  bVar12 = false;
  local_1b8.ComparisonIndex.Value = 0;
  local_1b8.Number = 0;
  bVar16 = false;
  bVar17 = false;
  if ((FVar28.ComparisonIndex.Value.Value == 0) && (FVar28.Number == 0)) {
LAB_141f07898:
    bVar12 = bVar17;
    bVar14 = bVar16;
    bVar16 = false;
    FVar28 = local_1b8;
  }
  else {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_1e8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1e8[0]._s_0,(char *)*(FName *)((longlong)FVar26 + 0x10));
      bVar14 = false;
      bVar12 = true;
      bVar16 = false;
      bVar17 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1c0.ComparisonIndex.Value = FVar28.ComparisonIndex.Value.Value;
        local_1c0.Number = FVar28.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1c0,(wchar_t *)*(FName *)((longlong)FVar26 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                   ,0x131b);
        bVar14 = true;
        bVar12 = true;
        bVar16 = true;
        bVar17 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_141f07898;
    local_1f8 = FVar28;
    FThreadStats::AddMessage(FVar28,CycleScopeStart);
    bVar16 = true;
  }
  local_128.Elements._0_8_ = 0;
  local_128.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_128.Elements._8_8_ = 0;
  local_128.Elements._32_8_ = 0;
  local_128.Elements._40_4_ = 0;
  local_128.Elements._44_4_ = 0x80;
  local_128.Elements._48_4_ = 0xffffffff;
  local_128.Elements._52_4_ = 0;
  local_128.HashSize = 0;
  if (0 < (this->PackagesToDelete).ArrayNum) {
    lVar29 = 0;
    pTVar3 = &this->PackagesToDelete;
    do {
      local_1f0 = (FFlushRequest *)CONCAT44(local_1f0._4_4_,uVar20);
      uVar32 = 0;
      if ((int)uVar20 < (this->PackagesToDelete).ArrayNum) {
        uVar32 = ~uVar20 >> 0x1f;
      }
      if ((uVar32 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar9 = (code *)swi(3);
        TVar18 = (*pcVar9)();
        return TVar18;
      }
      this_00 = *(FAsyncPackage **)((pTVar3->AllocatorInstance).Data + lVar29);
      uVar32 = uVar20;
      if (((this_00->DependencyRefCount).Counter == 0) && ((int)this_00->ReentryCount < 1)) {
        if (0 < (this_00->DeferredClusterObjects).ArrayNum) {
          if (local_128.Elements._8_4_ != local_128.Elements._52_4_) {
            TSet<UPackage_*,DefaultKeyFuncs<UPackage_*,0>,FDefaultSetAllocator>::UnhashElements
                      (&local_128);
            bVar17 = (longlong)local_128.Elements._8_8_ < 0;
            local_128.Elements._8_8_ = local_128.Elements._8_8_ & 0xffffffff00000000;
            if (bVar17) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,0,(ForAnyElementType *)&local_128,0,
                         (int *)&local_128.Elements.field_0xc);
            }
            local_128.Elements._48_4_ = 0xffffffff;
            local_128.Elements._52_4_ = 0;
            local_128.Elements._40_4_ = 0;
          }
          local_1d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1d8.Data.ArrayNum = 0;
          local_1d8.Data.ArrayMax = 0;
          bVar17 = FAsyncPackage::AreAllDependenciesFullyLoadedInternal
                             (this_00,&local_128,&local_1d8);
          if ((!bVar17) && (5 < (byte)LogStreaming._0_1_)) {
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
          }
          if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
          }
          if (!bVar17) goto LAB_141f07afe;
          TVar18 = FAsyncPackage::CreateClusters(this_00,dVar11,param_1,param_3);
          if (TVar18 != Complete) {
            pFVar31 = local_1e0;
            TVar18 = TimeOut;
            break;
          }
        }
        uVar32 = uVar20 - 1;
        lVar29 = lVar29 + -8;
        uVar22 = 0;
        if ((int)uVar20 < (this->PackagesToDelete).ArrayNum) {
          uVar22 = ~uVar20 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar9 = (code *)swi(3);
          TVar18 = (*pcVar9)();
          return TVar18;
        }
        iVar21 = (this->PackagesToDelete).ArrayNum;
        pFVar8 = (pTVar3->AllocatorInstance).Data;
        iVar19 = ~(uint)local_1f0 + iVar21;
        if (1 < iVar19) {
          iVar19 = 1;
        }
        if (iVar19 != 0) {
          memmove(pFVar8 + (longlong)(int)uVar20 * 8,pFVar8 + (longlong)(iVar21 - iVar19) * 8,
                  (longlong)iVar19 << 3);
        }
        piVar1 = &(this->PackagesToDelete).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&pTVar3->AllocatorInstance,(this->PackagesToDelete).ArrayNum,
                   &(this->PackagesToDelete).ArrayMax);
        (**(code **)this_00->_padding_)(this_00,1);
      }
LAB_141f07afe:
      uVar20 = uVar32 + 1;
      lVar29 = lVar29 + 8;
      pFVar31 = local_1e0;
      TVar18 = local_204;
    } while ((int)uVar20 < (local_1e0->PackagesToDelete).ArrayNum);
  }
  local_128.HashSize = 0;
  if (local_128.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_128.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<UPackage_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UPackage_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_128.Elements);
  if (bVar12) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar16) {
    FThreadStats::AddMessage(FVar28,CycleScopeEnd);
  }
LAB_141f07b6e:
  if (TVar18 == Complete) {
    TVar18 = Complete - ((pFVar31->PackagesToDelete).ArrayNum != 0);
  }
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  TSparseArray<TSparseSetElement<UPackage_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UPackage_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_d8);
  if (local_158.SecondaryData != (ForElementType<FAsyncPackage_*>)0x0) {
    FMemory::Free((void *)local_158.SecondaryData);
  }
  return TVar18;
}

// ProcessLoading @ 141f07be0

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall
FAsyncLoadingThread::ProcessLoading
          (FAsyncLoadingThread *this,bool param_1,bool param_2,double param_3)

{
  int *piVar1;
  FName FVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_AsyncLoadingTime> FVar10;
  FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_TickAsyncLoadingGameThread> FVar11;
  FThreadStats *pFVar12;
  FThreadStatsPool *pFVar13;
  FNameEntryId FVar14;
  FName FVar15;
  Type TVar16;
  FName FVar17;
  bool bVar18;
  LARGE_INTEGER local_res8;
  bool local_res10;
  bool local_res18;
  LARGE_INTEGER local_88;
  FStatMessage local_80;
  FStatMessage local_70;
  FName local_60;
  
  TVar16 = Complete;
  FVar10 = StatPtr_STAT_AsyncLoadingTime;
  local_res8 = (LARGE_INTEGER)this;
  local_res10 = param_1;
  local_res18 = param_2;
  if (StatPtr_STAT_AsyncLoadingTime == (FThreadSafeStaticStat<FStat_STAT_AsyncLoadingTime>)0x0) {
    pFVar9 = ::FName::FName((FName *)&local_80,"STAT_AsyncLoadingTime");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_AsyncLoadingTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AsyncLoadingTime,*pFVar9,
                        L"Async Loading Time","STATGROUP_AsyncLoad","STATCAT_Advanced",L"Async Load"
                        ,false,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar10;
  bVar4 = false;
  bVar7 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  FVar14 = FVar17.ComparisonIndex.Value;
  uVar8 = FVar17.Number;
  if ((FVar14.Value != 0) || (uVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_88.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_88.s,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar4 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_88.s.LowPart = FVar14.Value;
        local_88.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_88.s,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                   ,0x1dcb);
        bVar4 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_88.s.LowPart = FVar14.Value;
      local_88.s.HighPart = uVar8;
      local_60 = FVar17;
      FThreadStats::AddMessage(FVar17,CycleScopeStart);
      bVar5 = true;
      goto LAB_141f07d32;
    }
  }
  bVar5 = false;
  FVar17 = local_60;
LAB_141f07d32:
  if (__CsvProfilerStat7628 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("AsyncLoading");
    __CsvProfilerStat7628 = true;
  }
  FCsvProfiler::BeginExclusiveStat("AsyncLoading","CSV_AsyncLoading");
  if (__CsvProfilerStat7630 == false) {
    FCsvProfilerTrace::OutputInlineStat("EDLEventQueueDepth",_GCsvCategory_FileIO.Index);
    __CsvProfilerStat7630 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("EDLEventQueueDepth",_GCsvCategory_FileIO.Index,
             *(int *)&(this->EventQueue).EventQueue.AllocatorInstance.Data,Set);
  if (__CsvProfilerStat7631 == false) {
    FCsvProfilerTrace::OutputInlineStat("QueuedPackagesQueueDepth",_GCsvCategory_FileIO.Index);
    __CsvProfilerStat7631 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("QueuedPackagesQueueDepth",_GCsvCategory_FileIO.Index,
             *(int *)((this->PendingRequestsCritical).CriticalSection.Opaque3 + 2),Set);
  FCsvProfiler::RecordCustomStatMinimal
            ("ExistingQueuedPackagesQueueDepth",_GCsvCategory_FileIO.Index,
             *(int *)((longlong)(this->PendingRequestsCritical).CriticalSection.Opaque3 + 0x14),Set)
  ;
  FVar11 = StatPtr_STAT_FAsyncPackage_TickAsyncLoadingGameThread;
  if (StatPtr_STAT_FAsyncPackage_TickAsyncLoadingGameThread ==
      (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_TickAsyncLoadingGameThread>)0x0) {
    pFVar9 = ::FName::FName((FName *)&local_80,"STAT_FAsyncPackage_TickAsyncLoadingGameThread");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_TickAsyncLoadingGameThread>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_FAsyncPackage_TickAsyncLoadingGameThread,*pFVar9,
                        L"TickAsyncLoading GT","STATGROUP_AsyncLoadGameThread","STATCAT_Advanced",
                        L"Async Load Game Thread",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar2 = *(FName *)FVar11;
  bVar6 = false;
  bVar3 = false;
  local_70.StatData.Pad = (uchar  [8])0x0;
  FVar14 = FVar2.ComparisonIndex.Value;
  uVar8 = FVar2.Number;
  if ((FVar14.Value == 0) && (uVar8 == 0)) {
    local_80.StatData.Pad[0] = '\0';
    local_80.StatData.Pad[1] = '\0';
    local_80.StatData.Pad[2] = '\0';
    local_80.StatData.Pad[3] = '\0';
    local_80.StatData.Pad[4] = '\0';
    local_80.StatData.Pad[5] = '\0';
    local_80.StatData.Pad[6] = '\0';
    local_80.StatData.Pad[7] = '\0';
    local_80.NameAndInfo.Index.Value = 0;
    local_80.NameAndInfo.Number = 0;
    TickAsyncLoading((FAsyncLoadingThread *)&this[-1].AsyncLoadingThreadIndex,local_res10,
                     local_res18,param_3,(FFlushRequest *)&local_80);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_88.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_88.s,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar6 = true;
      bVar3 = false;
      if (-1 < CpuChannel->Enabled) {
        local_88.s.LowPart = FVar14.Value;
        local_88.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_88.s,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                   ,0x1dd3);
        bVar6 = true;
        bVar3 = true;
      }
    }
    bVar18 = FThreadStats::bPrimaryEnable != false;
    FVar15 = (FName)local_70.StatData;
    if (bVar18) {
      local_88.s.LowPart = FVar14.Value;
      local_88.s.HighPart = uVar8;
      local_70.StatData.Pad = (uchar  [8])FVar2;
      FThreadStats::AddMessage(FVar2,CycleScopeStart);
      FVar15 = FVar2;
    }
    local_80.StatData.Pad[0] = '\0';
    local_80.StatData.Pad[1] = '\0';
    local_80.StatData.Pad[2] = '\0';
    local_80.StatData.Pad[3] = '\0';
    local_80.StatData.Pad[4] = '\0';
    local_80.StatData.Pad[5] = '\0';
    local_80.StatData.Pad[6] = '\0';
    local_80.StatData.Pad[7] = '\0';
    local_80.NameAndInfo.Index.Value = 0;
    local_80.NameAndInfo.Number = 0;
    TickAsyncLoading((FAsyncLoadingThread *)&this[-1].AsyncLoadingThreadIndex,local_res10,
                     local_res18,param_3,(FFlushRequest *)&local_80);
    if (bVar6) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar3) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar18) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar12 == (FThreadStats *)0x0) {
        pFVar13 = FThreadStatsPool::Get();
        pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
      }
      if (pFVar12->bWaitForExplicitFlush < pFVar12->ScopeCount) {
        local_80.NameAndInfo =
             (FStatNameAndInfo)
             (CONCAT44(FVar15.Number,local_70.StatData.Pad._0_4_) & 0xffff6fffffffffff |
             0x600000000000);
        QueryPerformanceCounter(&local_88);
        local_80.StatData.Pad[4] = '\0';
        local_80.StatData.Pad[5] = '\0';
        local_80.StatData.Pad[6] = '\0';
        local_80.StatData.Pad[7] = '\0';
        local_80.StatData.Pad[0] = local_88.s.LowPart._0_1_;
        local_80.StatData.Pad[1] = local_88.s.LowPart._1_1_;
        local_80.StatData.Pad[2] = local_88.s.LowPart._2_1_;
        local_80.StatData.Pad[3] = local_88.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar12,&local_80);
        piVar1 = &pFVar12->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(pFVar12,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar12,false,false);
        }
      }
    }
  }
  if ((*(int *)(local_res8.QuadPart + 0x378) != 0) || (*(int *)(local_res8.QuadPart + 0x37c) != 0))
  {
    TVar16 = TimeOut;
  }
  FCsvProfiler::EndExclusiveStat("AsyncLoading");
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar5) && (FVar17 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar12 == (FThreadStats *)0x0) {
      pFVar13 = FThreadStatsPool::Get();
      pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
    }
    if (pFVar12->bWaitForExplicitFlush < pFVar12->ScopeCount) {
      local_70.NameAndInfo.Index.Value = local_60.ComparisonIndex.Value;
      local_70.NameAndInfo.Number = FVar17.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res8);
      local_70.StatData.Pad = (uchar  [8])(local_res8.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar12,&local_70);
      piVar1 = &pFVar12->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar12,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar12,false,false);
      }
    }
  }
  return TVar16;
}

// ProcessLoadingUntilComplete @ 141f08160

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall
FAsyncLoadingThread::ProcessLoadingUntilComplete
          (FAsyncLoadingThread *this,TFunctionRef<bool___cdecl(void)> *param_1,double param_2)

{
  int *piVar1;
  double dVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  float fVar6;
  char cVar7;
  Type TVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_FlushAsyncLoadingGameThread> FVar10;
  FThreadHeartBeat *this_00;
  FTrackedActivity *pFVar11;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar12;
  FNameEntryId FVar13;
  FNameEntryId FVar14;
  FName FVar15;
  Type TVar16;
  LARGE_INTEGER local_res8;
  FActiveAsyncLoadContext local_res20 [2];
  LARGE_INTEGER local_98;
  uint local_90;
  uint local_8c;
  FName local_88;
  
  TVar16 = Complete;
  if ((*(int *)((this->PendingRequestsCritical).CriticalSection.Opaque3 + 2) == 0) &&
     (*(int *)((longlong)(this->PendingRequestsCritical).CriticalSection.Opaque3 + 0x14) == 0)) {
    return Complete;
  }
  FVar13.Value = 0;
  FVar10 = StatPtr_STAT_FAsyncPackage_FlushAsyncLoadingGameThread;
  if (StatPtr_STAT_FAsyncPackage_FlushAsyncLoadingGameThread ==
      (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_FlushAsyncLoadingGameThread>)0x0) {
    pFVar9 = ::FName::FName((FName *)&local_98.s,"STAT_FAsyncPackage_FlushAsyncLoadingGameThread");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_FlushAsyncLoadingGameThread>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_FAsyncPackage_FlushAsyncLoadingGameThread,*pFVar9,
                        L"Flush Async Loading GT","STATGROUP_AsyncLoadGameThread","STATCAT_Advanced"
                        ,L"Async Load Game Thread",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_88.ComparisonIndex.Value = 0;
  local_88.Number = 0;
  FVar15 = *(FName *)FVar10;
  bVar3 = false;
  bVar5 = false;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar12 = FVar15.Number;
  if ((FVar14.Value != 0) || (uVar12 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar14.Value;
        local_res8.s.HighPart = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                   ,0x1da5);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar14.Value;
      local_res8.s.HighPart = uVar12;
      local_88 = FVar15;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar4 = true;
      FVar13.Value = local_88.ComparisonIndex.Value;
      goto LAB_141f082db;
    }
  }
  bVar4 = false;
  FVar15 = local_88;
LAB_141f082db:
  if (*(int *)((longlong)(this->QueueCritical).CriticalSection.Opaque3 + 0x14) != 0) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
  }
  if (param_2 <= 0.0) {
    param_2 = __real_40ac200000000000;
  }
  FActiveAsyncLoadContext::FActiveAsyncLoadContext
            (local_res20,
             (TArray<FAsyncPackageDesc_*,TSizedDefaultAllocator<32>_> *)&this->ThreadResumedEvent);
  fVar6 = __real_38d1b717;
  while ((((*(int *)((this->PendingRequestsCritical).CriticalSection.Opaque3 + 2) != 0 ||
           (*(int *)((longlong)(this->PendingRequestsCritical).CriticalSection.Opaque3 + 0x14) != 0)
           ) && (0.0 < param_2)) &&
         (cVar7 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8), cVar7 == '\0'))) {
    QueryPerformanceCounter(&local_res8);
    dVar2 = (double)CONCAT44(local_res8.s.HighPart,local_res8.s.LowPart) *
            FGenericPlatformTime::SecondsPerCycle;
    TVar8 = ProcessLoading(this,true,true,param_2);
    if (TVar8 == Complete) {
      ActiveAsyncLoadContext = (FActiveAsyncLoadContext *)0x0;
      pFVar11 = FTrackedActivity::GetIOActivity();
      FTrackedActivity::Pop(pFVar11);
      pFVar11 = FTrackedActivity::GetIOActivity();
      FTrackedActivity::Pop(pFVar11);
      if (bVar5) {
        FGenericPlatformMisc::EndNamedEvent();
      }
LAB_141f08452:
      if (bVar3) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (((bVar4) && (FVar15 != (FName)0x0)) &&
         ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff))))
      {
        this_01 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_01 == (FThreadStats *)0x0) {
          this_02 = FThreadStatsPool::Get();
          this_01 = FThreadStatsPool::GetFromPool(this_02);
        }
        if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
          local_8c = FVar15.Number & 0xffff6fff | 0x6000;
          local_90 = FVar13.Value;
          QueryPerformanceCounter(&local_res8);
          local_98.s.HighPart = 0;
          local_98.s.LowPart = local_res8.s.LowPart;
          FThreadStats::AddStatMessage(this_01,(FStatMessage *)&local_98.s);
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
      return TVar16;
    }
    if (bThreadStarted != false) {
      this_00 = FThreadHeartBeat::Get();
      FThreadHeartBeat::HeartBeat(this_00);
      FWindowsPlatformProcess::SleepNoStats(fVar6);
    }
    QueryPerformanceCounter(&local_98);
    param_2 = param_2 - ((double)local_98.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar2);
  }
  TVar16 = Complete;
  if (param_2 <= 0.0) {
    TVar16 = TimeOut;
  }
  ActiveAsyncLoadContext = (FActiveAsyncLoadContext *)0x0;
  pFVar11 = FTrackedActivity::GetIOActivity();
  FTrackedActivity::Pop(pFVar11);
  pFVar11 = FTrackedActivity::GetIOActivity();
  FTrackedActivity::Pop(pFVar11);
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  goto LAB_141f08452;
}

// QueueEvent_CreateLinker @ 141f08570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EEventLoadNode": Some values do not have unique names */

void __thiscall
FAsyncLoadingThread::QueueEvent_CreateLinker
          (FAsyncLoadingThread *this,FAsyncPackage *param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong *plVar5;
  undefined1 auStack_108 [32];
  TLess<FAsyncLoadEvent> local_e8 [8];
  FEventLoadNodePtr local_e0;
  int iStack_c8;
  undefined4 uStack_c4;
  FAsyncLoadingThread *local_c0;
  FName local_b8;
  code *local_a8;
  longlong local_98 [3];
  longlong *local_80;
  undefined1 local_78 [32];
  longlong local_58 [3];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_108;
  if ((::_TSS0 <=
       *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c)) || (_Init_thread_header(&::_TSS0), ::_TSS0 != -1)) goto LAB_141f085cf;
  bVar3 = CheckForFileOpenLogCommandLine();
  if (bVar3) {
LAB_141f08799:
    bDoingLoadOrder = true;
  }
  else {
    bVar3 = CheckForFilePackageOpenLogCommandLine();
    bDoingLoadOrder = false;
    if (bVar3) goto LAB_141f08799;
  }
  _Init_thread_footer(&::_TSS0);
LAB_141f085cf:
  if ((param_1 == (FAsyncPackage *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Package",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                         ,0x6ff,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_e0.ImportOrExportIndex.Index = 0;
  local_e0.Phase = ImportOrExport_Create;
  local_e0.WaitingPackage.Package = param_1;
  FEventLoadGraph::AddNode(&param_1->AsyncLoadingThread->EventGraph,&local_e0,false,0);
  local_b8 = (param_1->Desc).Name;
  iStack_c8 = param_1->SerialNumber;
  iVar1 = (param_1->Desc).Priority;
  iVar4 = iStack_c8;
  if (GRandomizeLoadOrder != 0) {
    iVar4 = GetRandomSerialNumber(0x7fffffff);
  }
  local_a8 = (code *)0x0;
  local_c0 = this;
  local_40 = FMemory::Malloc(0x20,8);
  *local_40 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_CreateLinker'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  *(uint *)(local_40 + 1) = local_b8.ComparisonIndex.Value;
  *(uint *)((longlong)local_40 + 0xc) = local_b8.Number;
  *(int *)(local_40 + 2) = iStack_c8;
  *(undefined4 *)((longlong)local_40 + 0x14) = uStack_c4;
  local_40[3] = (longlong)local_c0;
  local_78._16_8_ = local_a8;
  if ((uint *)(local_40 + 1) != (uint *)0x0) {
    local_78._16_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FAsyncLoadingThread::QueueEvent_CreateLinker'::__l2::<lambda_1>,void,FAsyncLoadEventArgs_&>
         ::Call;
  }
  (this->EventQueue).RunningSerialNumber = (this->EventQueue).RunningSerialNumber + 1;
  local_78._12_4_ = (this->EventQueue).RunningSerialNumber;
  local_80 = (longlong *)0x0;
  local_58[0] = local_98[0];
  local_58[1] = local_98[1];
  local_58[2] = local_98[2];
  local_a8 = (code *)0x0;
  local_78._0_4_ = iVar1;
  local_78._4_4_ = iVar4;
  local_78._8_4_ = param_2;
  TArray<FAsyncLoadEvent,TSizedDefaultAllocator<32>_>::HeapPush<TLess<FAsyncLoadEvent>_>
            (&(this->EventQueue).EventQueue,(FAsyncLoadEvent *)local_78,local_e8);
  if ((code *)local_78._16_8_ != (code *)0x0) {
    plVar5 = (longlong *)(local_78 + 0x20);
    if (local_40 != (longlong *)0x0) {
      plVar5 = local_40;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (local_a8 != (code *)0x0) {
    plVar5 = local_98;
    if (local_80 != (longlong *)0x0) {
      plVar5 = local_80;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  return;
}

// QueueEvent_ExportsDone @ 141f087b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FAsyncLoadingThread::QueueEvent_ExportsDone
          (FAsyncLoadingThread *this,FAsyncPackage *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  longlong *plVar5;
  undefined1 auStack_e8 [32];
  TLess<FAsyncLoadEvent> local_c8 [16];
  int iStack_b8;
  undefined4 uStack_b4;
  FAsyncLoadingThread *local_b0;
  FName local_a8;
  code *local_98;
  longlong local_88 [3];
  longlong *local_70;
  undefined1 local_68 [32];
  longlong local_48 [3];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if ((param_1->AsyncPackageLoadingState != ProcessNewImportsAndExports) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Package->AsyncPackageLoadingState == EAsyncPackageLoadingState::ProcessNewImportsAndExports"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                         ,0xaa2,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_a8 = (param_1->Desc).Name;
  iVar1 = param_1->SerialNumber;
  iVar2 = (param_1->Desc).Priority;
  local_68._4_4_ = iVar1;
  if (GRandomizeLoadOrder != 0) {
    local_68._4_4_ = GetRandomSerialNumber(0x7fffffff);
  }
  local_98 = (code *)0x0;
  iStack_b8 = iVar1;
  local_b0 = this;
  local_30 = FMemory::Malloc(0x20,8);
  *local_30 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_ExportsDone'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  *(uint *)(local_30 + 1) = local_a8.ComparisonIndex.Value;
  *(uint *)((longlong)local_30 + 0xc) = local_a8.Number;
  *(int *)(local_30 + 2) = iStack_b8;
  *(undefined4 *)((longlong)local_30 + 0x14) = uStack_b4;
  local_30[3] = (longlong)local_b0;
  local_68._16_8_ = local_98;
  if ((uint *)(local_30 + 1) != (uint *)0x0) {
    local_68._16_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FAsyncLoadingThread::QueueEvent_ExportsDone'::__l2::<lambda_1>,void,FAsyncLoadEventArgs_&>
         ::Call;
  }
  (this->EventQueue).RunningSerialNumber = (this->EventQueue).RunningSerialNumber + 1;
  local_68._12_4_ = (this->EventQueue).RunningSerialNumber;
  local_70 = (longlong *)0x0;
  local_48[0] = local_88[0];
  local_48[1] = local_88[1];
  local_48[2] = local_88[2];
  local_98 = (code *)0x0;
  local_68._0_4_ = iVar2;
  local_68._8_4_ = param_2;
  TArray<FAsyncLoadEvent,TSizedDefaultAllocator<32>_>::HeapPush<TLess<FAsyncLoadEvent>_>
            (&(this->EventQueue).EventQueue,(FAsyncLoadEvent *)local_68,local_c8);
  if ((code *)local_68._16_8_ != (code *)0x0) {
    plVar5 = (longlong *)(local_68 + 0x20);
    if (local_30 != (longlong *)0x0) {
      plVar5 = local_30;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (local_98 != (code *)0x0) {
    plVar5 = local_88;
    if (local_70 != (longlong *)0x0) {
      plVar5 = local_70;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  return;
}

// QueueEvent_FinishLinker @ 141f08960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FAsyncLoadingThread::QueueEvent_FinishLinker
          (FAsyncLoadingThread *this,FWeakAsyncPackagePtr *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  TTuple<FName,FAsyncPackage_*> *pTVar5;
  longlong *plVar6;
  undefined1 auStack_f8 [32];
  TLess<FAsyncLoadEvent> local_d8 [16];
  FName local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  FAsyncLoadingThread *local_b8;
  code *local_a8;
  longlong local_98 [3];
  longlong *local_80;
  undefined1 local_78 [32];
  longlong local_58 [3];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_c8 = param_1->PackageName;
  iVar1 = param_1->SerialNumber;
  if ((((local_c8 != (FName)0x0) && (iVar1 != 0)) &&
      (pTVar5 = TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
                        *)&this->AsyncPackageNameLookup,local_c8),
      pTVar5 != (TTuple<FName,FAsyncPackage_*> *)0x0)) &&
     ((lVar2 = *(longlong *)&pTVar5->field_0x8, lVar2 != 0 &&
      (local_78._4_4_ = *(int *)(lVar2 + 0x2dc), local_78._4_4_ == iVar1)))) {
    iVar1 = *(int *)(lVar2 + 0x34);
    if (GRandomizeLoadOrder != 0) {
      local_78._4_4_ = GetRandomSerialNumber(0x7fffffff);
    }
    iStack_c0 = param_1->SerialNumber;
    local_a8 = (code *)0x0;
    local_b8 = this;
    local_40 = FMemory::Malloc(0x20,8);
    uVar3 = (param_1->PackageName).ComparisonIndex.Value;
    uVar4 = (param_1->PackageName).Number;
    *local_40 = (longlong)
                &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_FinishLinker'::`5'::<lambda_1>,0,1>
                 ::_vftable_;
    *(uint *)(local_40 + 1) = uVar3;
    *(uint *)((longlong)local_40 + 0xc) = uVar4;
    *(int *)(local_40 + 2) = iStack_c0;
    *(undefined4 *)((longlong)local_40 + 0x14) = uStack_bc;
    local_40[3] = (longlong)local_b8;
    local_78._16_8_ = local_a8;
    if ((uint *)(local_40 + 1) != (uint *)0x0) {
      local_78._16_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`FAsyncLoadingThread::QueueEvent_FinishLinker'::__l5::<lambda_1>,void,FAsyncLoadEventArgs_&>
           ::Call;
    }
    (this->EventQueue).RunningSerialNumber = (this->EventQueue).RunningSerialNumber + 1;
    local_78._12_4_ = (this->EventQueue).RunningSerialNumber;
    local_80 = (longlong *)0x0;
    local_58[0] = local_98[0];
    local_58[1] = local_98[1];
    local_58[2] = local_98[2];
    local_a8 = (code *)0x0;
    local_78._0_4_ = iVar1;
    local_78._8_4_ = param_2;
    TArray<FAsyncLoadEvent,TSizedDefaultAllocator<32>_>::HeapPush<TLess<FAsyncLoadEvent>_>
              (&(this->EventQueue).EventQueue,(FAsyncLoadEvent *)local_78,local_d8);
    if ((code *)local_78._16_8_ != (code *)0x0) {
      plVar6 = (longlong *)(local_78 + 0x20);
      if (local_40 != (longlong *)0x0) {
        plVar6 = local_40;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    if (local_a8 != (code *)0x0) {
      plVar6 = local_98;
      if (local_80 != (longlong *)0x0) {
        plVar6 = local_80;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  return;
}

// QueueEvent_ProcessImportsAndExports @ 141f08b20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FAsyncLoadingThread::QueueEvent_ProcessImportsAndExports
          (FAsyncLoadingThread *this,FAsyncPackage *param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  undefined1 auStack_e8 [32];
  TLess<FAsyncLoadEvent> local_c8 [16];
  int iStack_b8;
  undefined4 uStack_b4;
  FAsyncLoadingThread *local_b0;
  FName local_a8;
  code *local_98;
  longlong local_88 [3];
  longlong *local_70;
  undefined1 local_68 [32];
  longlong local_48 [3];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_1->AsyncPackageLoadingState != ProcessNewImportsAndExports) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Package->AsyncPackageLoadingState == EAsyncPackageLoadingState::ProcessNewImportsAndExports"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                       ,0xa78,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_a8 = (param_1->Desc).Name;
  iVar1 = param_1->SerialNumber;
  if (GRandomizeLoadOrder != 0) {
    GetRandomSerialNumber(0x7fffffff);
  }
  local_98 = (code *)0x0;
  iStack_b8 = iVar1;
  local_b0 = this;
  local_70 = FMemory::Malloc(0x20,8);
  *local_70 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_ProcessImportsAndExports'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  *(uint *)(local_70 + 1) = local_a8.ComparisonIndex.Value;
  *(uint *)((longlong)local_70 + 0xc) = local_a8.Number;
  *(int *)(local_70 + 2) = iStack_b8;
  *(undefined4 *)((longlong)local_70 + 0x14) = uStack_b4;
  local_70[3] = (longlong)local_b0;
  local_68._16_8_ = local_98;
  if (local_70 != (longlong *)&DAT_fffffffffffffff8) {
    local_68._16_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FAsyncLoadingThread::QueueEvent_ProcessImportsAndExports'::__l2::<lambda_1>,void,FAsyncLoadEventArgs_&>
         ::Call;
  }
  if (GRandomizeLoadOrder == 0) {
    local_68._4_4_ = param_1->SerialNumber;
  }
  else {
    local_98 = (code *)local_68._16_8_;
    local_68._4_4_ = GetRandomSerialNumber(0x7fffffff);
    local_68._16_8_ = local_98;
  }
  local_68._0_4_ = (param_1->Desc).Priority;
  (this->EventQueue).RunningSerialNumber = (this->EventQueue).RunningSerialNumber + 1;
  local_68._12_4_ = (this->EventQueue).RunningSerialNumber;
  local_30 = local_70;
  local_70 = (longlong *)0x0;
  local_48[0] = local_88[0];
  local_48[1] = local_88[1];
  local_48[2] = local_88[2];
  local_98 = (code *)0x0;
  local_68._8_4_ = param_2;
  TArray<FAsyncLoadEvent,TSizedDefaultAllocator<32>_>::HeapPush<TLess<FAsyncLoadEvent>_>
            (&(this->EventQueue).EventQueue,(FAsyncLoadEvent *)local_68,local_c8);
  if ((code *)local_68._16_8_ != (code *)0x0) {
    plVar4 = (longlong *)(local_68 + 0x20);
    if (local_30 != (longlong *)0x0) {
      plVar4 = local_30;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (local_98 != (code *)0x0) {
    plVar4 = local_88;
    if (local_70 != (longlong *)0x0) {
      plVar4 = local_70;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return;
}

// QueueEvent_ProcessPostloadWait @ 141f08ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FAsyncLoadingThread::QueueEvent_ProcessPostloadWait
          (FAsyncLoadingThread *this,FAsyncPackage *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  longlong *plVar5;
  undefined1 auStack_e8 [32];
  TLess<FAsyncLoadEvent> local_c8 [16];
  int iStack_b8;
  undefined4 uStack_b4;
  FAsyncLoadingThread *local_b0;
  FName local_a8;
  code *local_98;
  longlong local_88 [3];
  longlong *local_70;
  undefined1 local_68 [32];
  longlong local_48 [3];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if ((param_1->AsyncPackageLoadingState != WaitingForPostLoad) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Package->AsyncPackageLoadingState == EAsyncPackageLoadingState::WaitingForPostLoad"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                         ,0xa8d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_a8 = (param_1->Desc).Name;
  iVar1 = param_1->SerialNumber;
  iVar2 = (param_1->Desc).Priority;
  local_68._4_4_ = iVar1;
  if (GRandomizeLoadOrder != 0) {
    local_68._4_4_ = GetRandomSerialNumber(0x7fffffff);
  }
  local_98 = (code *)0x0;
  iStack_b8 = iVar1;
  local_b0 = this;
  local_30 = FMemory::Malloc(0x20,8);
  *local_30 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_ProcessPostloadWait'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  *(uint *)(local_30 + 1) = local_a8.ComparisonIndex.Value;
  *(uint *)((longlong)local_30 + 0xc) = local_a8.Number;
  *(int *)(local_30 + 2) = iStack_b8;
  *(undefined4 *)((longlong)local_30 + 0x14) = uStack_b4;
  local_30[3] = (longlong)local_b0;
  local_68._16_8_ = local_98;
  if ((uint *)(local_30 + 1) != (uint *)0x0) {
    local_68._16_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FAsyncLoadingThread::QueueEvent_ProcessPostloadWait'::__l2::<lambda_1>,void,FAsyncLoadEventArgs_&>
         ::Call;
  }
  (this->EventQueue).RunningSerialNumber = (this->EventQueue).RunningSerialNumber + 1;
  local_68._12_4_ = (this->EventQueue).RunningSerialNumber;
  local_70 = (longlong *)0x0;
  local_48[0] = local_88[0];
  local_48[1] = local_88[1];
  local_48[2] = local_88[2];
  local_98 = (code *)0x0;
  local_68._0_4_ = iVar2;
  local_68._8_4_ = param_2;
  TArray<FAsyncLoadEvent,TSizedDefaultAllocator<32>_>::HeapPush<TLess<FAsyncLoadEvent>_>
            (&(this->EventQueue).EventQueue,(FAsyncLoadEvent *)local_68,local_c8);
  if ((code *)local_68._16_8_ != (code *)0x0) {
    plVar5 = (longlong *)(local_68 + 0x20);
    if (local_30 != (longlong *)0x0) {
      plVar5 = local_30;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (local_98 != (code *)0x0) {
    plVar5 = local_88;
    if (local_70 != (longlong *)0x0) {
      plVar5 = local_70;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  return;
}

// QueueEvent_SetupExports @ 141f08e90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FAsyncLoadingThread::QueueEvent_SetupExports
          (FAsyncLoadingThread *this,FAsyncPackage *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  longlong *plVar5;
  undefined1 auStack_e8 [32];
  TLess<FAsyncLoadEvent> local_c8 [16];
  int iStack_b8;
  undefined4 uStack_b4;
  FAsyncLoadingThread *local_b0;
  FName local_a8;
  code *local_98;
  longlong local_88 [3];
  longlong *local_70;
  undefined1 local_68 [32];
  longlong local_48 [3];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if ((param_1->AsyncPackageLoadingState != SetupExports) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Package->AsyncPackageLoadingState == EAsyncPackageLoadingState::SetupExports"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                         ,0xa54,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_a8 = (param_1->Desc).Name;
  iVar1 = param_1->SerialNumber;
  iVar2 = (param_1->Desc).Priority;
  local_68._4_4_ = iVar1;
  if (GRandomizeLoadOrder != 0) {
    local_68._4_4_ = GetRandomSerialNumber(0x7fffffff);
  }
  local_98 = (code *)0x0;
  iStack_b8 = iVar1;
  local_b0 = this;
  local_30 = FMemory::Malloc(0x20,8);
  *local_30 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_SetupExports'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  *(uint *)(local_30 + 1) = local_a8.ComparisonIndex.Value;
  *(uint *)((longlong)local_30 + 0xc) = local_a8.Number;
  *(int *)(local_30 + 2) = iStack_b8;
  *(undefined4 *)((longlong)local_30 + 0x14) = uStack_b4;
  local_30[3] = (longlong)local_b0;
  local_68._16_8_ = local_98;
  if ((uint *)(local_30 + 1) != (uint *)0x0) {
    local_68._16_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FAsyncLoadingThread::QueueEvent_SetupExports'::__l2::<lambda_1>,void,FAsyncLoadEventArgs_&>
         ::Call;
  }
  (this->EventQueue).RunningSerialNumber = (this->EventQueue).RunningSerialNumber + 1;
  local_68._12_4_ = (this->EventQueue).RunningSerialNumber;
  local_70 = (longlong *)0x0;
  local_48[0] = local_88[0];
  local_48[1] = local_88[1];
  local_48[2] = local_88[2];
  local_98 = (code *)0x0;
  local_68._0_4_ = iVar2;
  local_68._8_4_ = param_2;
  TArray<FAsyncLoadEvent,TSizedDefaultAllocator<32>_>::HeapPush<TLess<FAsyncLoadEvent>_>
            (&(this->EventQueue).EventQueue,(FAsyncLoadEvent *)local_68,local_c8);
  if ((code *)local_68._16_8_ != (code *)0x0) {
    plVar5 = (longlong *)(local_68 + 0x20);
    if (local_30 != (longlong *)0x0) {
      plVar5 = local_30;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (local_98 != (code *)0x0) {
    plVar5 = local_88;
    if (local_70 != (longlong *)0x0) {
      plVar5 = local_70;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  return;
}

// QueueEvent_SetupImports @ 141f09040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FAsyncLoadingThread::QueueEvent_SetupImports
          (FAsyncLoadingThread *this,FAsyncPackage *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  longlong *plVar5;
  undefined1 auStack_f8 [32];
  TLess<FAsyncLoadEvent> local_d8 [16];
  int iStack_c8;
  undefined4 uStack_c4;
  FAsyncLoadingThread *local_c0;
  FName local_b8;
  code *local_a8;
  longlong local_98 [3];
  longlong *local_80;
  undefined1 local_78 [32];
  longlong local_58 [3];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  if ((param_1->AsyncPackageLoadingState != WaitingForImportPackages) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Package->AsyncPackageLoadingState == EAsyncPackageLoadingState::WaitingForImportPackages"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                         ,0x901,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar1 = param_1->SerialNumber;
  iVar2 = (param_1->Desc).Priority;
  param_1->AsyncPackageLoadingState = SetupImports;
  local_b8 = (param_1->Desc).Name;
  local_78._4_4_ = iVar1;
  if (GRandomizeLoadOrder != 0) {
    local_78._4_4_ = GetRandomSerialNumber(0x7fffffff);
  }
  local_a8 = (code *)0x0;
  iStack_c8 = iVar1;
  local_c0 = this;
  local_40 = FMemory::Malloc(0x20,8);
  *local_40 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_SetupImports'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  *(uint *)(local_40 + 1) = local_b8.ComparisonIndex.Value;
  *(uint *)((longlong)local_40 + 0xc) = local_b8.Number;
  *(int *)(local_40 + 2) = iStack_c8;
  *(undefined4 *)((longlong)local_40 + 0x14) = uStack_c4;
  local_40[3] = (longlong)local_c0;
  local_78._16_8_ = local_a8;
  if ((uint *)(local_40 + 1) != (uint *)0x0) {
    local_78._16_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FAsyncLoadingThread::QueueEvent_SetupImports'::__l2::<lambda_1>,void,FAsyncLoadEventArgs_&>
         ::Call;
  }
  (this->EventQueue).RunningSerialNumber = (this->EventQueue).RunningSerialNumber + 1;
  local_78._12_4_ = (this->EventQueue).RunningSerialNumber;
  local_80 = (longlong *)0x0;
  local_58[0] = local_98[0];
  local_58[1] = local_98[1];
  local_58[2] = local_98[2];
  local_a8 = (code *)0x0;
  local_78._0_4_ = iVar2;
  local_78._8_4_ = param_2;
  TArray<FAsyncLoadEvent,TSizedDefaultAllocator<32>_>::HeapPush<TLess<FAsyncLoadEvent>_>
            (&(this->EventQueue).EventQueue,(FAsyncLoadEvent *)local_78,local_d8);
  if ((code *)local_78._16_8_ != (code *)0x0) {
    plVar5 = (longlong *)(local_78 + 0x20);
    if (local_40 != (longlong *)0x0) {
      plVar5 = local_40;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (local_a8 != (code *)0x0) {
    plVar5 = local_98;
    if (local_80 != (longlong *)0x0) {
      plVar5 = local_80;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  return;
}

// QueueEvent_StartImportPackages @ 141f091e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FAsyncLoadingThread::QueueEvent_StartImportPackages
          (FAsyncLoadingThread *this,FAsyncPackage *param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  int iVar5;
  undefined1 auStack_f8 [32];
  TLess<FAsyncLoadEvent> local_d8 [8];
  FName local_d0;
  int iStack_b8;
  undefined4 uStack_b4;
  FAsyncLoadingThread *local_b0;
  code *local_a8;
  longlong local_98 [3];
  longlong *local_80;
  undefined1 local_78 [32];
  longlong local_58 [3];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  if (param_1 == (FAsyncPackage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Package",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                       ,0x7d7,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_d0.ComparisonIndex.Value = 0;
  local_d0.Number = 0;
  iVar5 = 0;
  if (param_1 != (FAsyncPackage *)0x0) {
    local_d0 = (param_1->Desc).Name;
    iVar5 = param_1->SerialNumber;
  }
  iVar1 = (param_1->Desc).Priority;
  if (GRandomizeLoadOrder == 0) {
    local_78._4_4_ = param_1->SerialNumber;
  }
  else {
    local_78._4_4_ = GetRandomSerialNumber(0x7fffffff);
  }
  local_a8 = (code *)0x0;
  iStack_b8 = iVar5;
  local_b0 = this;
  local_40 = FMemory::Malloc(0x20,8);
  *local_40 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_StartImportPackages'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  *(uint *)(local_40 + 1) = local_d0.ComparisonIndex.Value;
  *(uint *)((longlong)local_40 + 0xc) = local_d0.Number;
  *(int *)(local_40 + 2) = iStack_b8;
  *(undefined4 *)((longlong)local_40 + 0x14) = uStack_b4;
  local_40[3] = (longlong)local_b0;
  local_78._16_8_ = local_a8;
  if ((uint *)(local_40 + 1) != (uint *)0x0) {
    local_78._16_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FAsyncLoadingThread::QueueEvent_StartImportPackages'::__l2::<lambda_1>,void,FAsyncLoadEventArgs_&>
         ::Call;
  }
  (this->EventQueue).RunningSerialNumber = (this->EventQueue).RunningSerialNumber + 1;
  local_78._12_4_ = (this->EventQueue).RunningSerialNumber;
  local_80 = (longlong *)0x0;
  local_58[0] = local_98[0];
  local_58[1] = local_98[1];
  local_58[2] = local_98[2];
  local_a8 = (code *)0x0;
  local_78._0_4_ = iVar1;
  local_78._8_4_ = param_2;
  TArray<FAsyncLoadEvent,TSizedDefaultAllocator<32>_>::HeapPush<TLess<FAsyncLoadEvent>_>
            (&(this->EventQueue).EventQueue,(FAsyncLoadEvent *)local_78,local_d8);
  if ((code *)local_78._16_8_ != (code *)0x0) {
    plVar4 = (longlong *)(local_78 + 0x20);
    if (local_40 != (longlong *)0x0) {
      plVar4 = local_40;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (local_a8 != (code *)0x0) {
    plVar4 = local_98;
    if (local_80 != (longlong *)0x0) {
      plVar4 = local_80;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return;
}

// QueueEvent_StartPostLoad @ 141f093a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FAsyncLoadingThread::QueueEvent_StartPostLoad
          (FAsyncLoadingThread *this,FAsyncPackage *param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  undefined1 auStack_e8 [32];
  TLess<FAsyncLoadEvent> local_c8 [16];
  int iStack_b8;
  undefined4 uStack_b4;
  FAsyncLoadingThread *local_b0;
  FName local_a8;
  code *local_98;
  longlong local_88 [3];
  longlong *local_70;
  undefined1 local_68 [32];
  longlong local_48 [3];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_1->AsyncPackageLoadingState != ReadyForPostLoad) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Package->AsyncPackageLoadingState == EAsyncPackageLoadingState::ReadyForPostLoad"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                       ,0xab7,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_a8 = (param_1->Desc).Name;
  iVar1 = param_1->SerialNumber;
  if (GRandomizeLoadOrder != 0) {
    GetRandomSerialNumber(0x7fffffff);
  }
  local_98 = (code *)0x0;
  iStack_b8 = iVar1;
  local_b0 = this;
  local_70 = FMemory::Malloc(0x20,8);
  *local_70 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_StartPostLoad'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  *(uint *)(local_70 + 1) = local_a8.ComparisonIndex.Value;
  *(uint *)((longlong)local_70 + 0xc) = local_a8.Number;
  *(int *)(local_70 + 2) = iStack_b8;
  *(undefined4 *)((longlong)local_70 + 0x14) = uStack_b4;
  local_70[3] = (longlong)local_b0;
  local_68._16_8_ = local_98;
  if (local_70 != (longlong *)&DAT_fffffffffffffff8) {
    local_68._16_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FAsyncLoadingThread::QueueEvent_StartPostLoad'::__l2::<lambda_1>,void,FAsyncLoadEventArgs_&>
         ::Call;
  }
  if (GRandomizeLoadOrder == 0) {
    local_68._4_4_ = param_1->SerialNumber;
  }
  else {
    local_98 = (code *)local_68._16_8_;
    local_68._4_4_ = GetRandomSerialNumber(0x7fffffff);
    local_68._16_8_ = local_98;
  }
  local_68._0_4_ = (param_1->Desc).Priority;
  (this->EventQueue).RunningSerialNumber = (this->EventQueue).RunningSerialNumber + 1;
  local_68._12_4_ = (this->EventQueue).RunningSerialNumber;
  local_30 = local_70;
  local_70 = (longlong *)0x0;
  local_48[0] = local_88[0];
  local_48[1] = local_88[1];
  local_48[2] = local_88[2];
  local_98 = (code *)0x0;
  local_68._8_4_ = param_2;
  TArray<FAsyncLoadEvent,TSizedDefaultAllocator<32>_>::HeapPush<TLess<FAsyncLoadEvent>_>
            (&(this->EventQueue).EventQueue,(FAsyncLoadEvent *)local_68,local_c8);
  if ((code *)local_68._16_8_ != (code *)0x0) {
    plVar4 = (longlong *)(local_68 + 0x20);
    if (local_30 != (longlong *)0x0) {
      plVar4 = local_30;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (local_98 != (code *)0x0) {
    plVar4 = local_88;
    if (local_70 != (longlong *)0x0) {
      plVar4 = local_70;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return;
}

// QueuePackage @ 141f09560

void __thiscall
FAsyncLoadingThread::QueuePackage(FAsyncLoadingThread *this,FAsyncPackageDesc *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>
  *pTVar1;
  int *piVar2;
  TReferenceControllerBase<1> *pTVar3;
  TDelegateBase<FNotThreadSafeDelegateMode> *this_00;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FPlatformFileManager *this_01;
  FPlatformFileOpenLog *this_02;
  FString *pFVar8;
  wchar_t *pwVar9;
  int *local_38;
  FString local_30;
  
  lpCriticalSection = &this->QueueCritical;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  bVar6 = CheckForFilePackageOpenLogCommandLine();
  if (bVar6) {
    this_01 = FPlatformFileManager::Get();
    this_02 = (FPlatformFileOpenLog *)FPlatformFileManager::FindPlatformFile(this_01,L"FileOpenLog")
    ;
    if (this_02 != (FPlatformFileOpenLog *)0x0) {
      pFVar8 = ::FName::ToString(&param_1->Name,&local_30);
      if ((pFVar8->Data).ArrayNum == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
      FPlatformFileOpenLog::AddToOpenLog(this_02,pwVar9);
      if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_30.Data.AllocatorInstance.Data);
      }
    }
  }
  LOCK();
  (this->QueuedPackagesCounter).Counter = (this->QueuedPackagesCounter).Counter + 1;
  UNLOCK();
  local_38 = ::operator_new(0x40);
  if (local_38 == (int *)0x0) {
    local_38 = (int *)0x0;
  }
  else {
    pTVar1 = &param_1->PackageLoadedDelegate;
    *local_38 = param_1->RequestID;
    *(FName *)(local_38 + 1) = param_1->Name;
    piVar2 = local_38 + 6;
    local_38[3] = 0;
    local_38[4] = 0;
    *(undefined1 *)(local_38 + 5) = 0;
    *(FName *)(local_38 + 3) = (param_1->PackagePath).PackageName;
    *(EPackageExtension *)(local_38 + 5) = (param_1->PackagePath).HeaderExtension;
    piVar2[0] = 0;
    piVar2[1] = 0;
    local_38[8] = param_1->PackageFlags;
    local_38[9] = param_1->Priority;
    local_38[10] = param_1->PIEInstanceID;
    *(FSharedLinkerInstancingContextData **)(local_38 + 0xc) =
         (param_1->InstancingContext).SharedData.Object;
    pTVar3 = (param_1->InstancingContext).SharedData.SharedReferenceCount.ReferenceController;
    *(TReferenceControllerBase<1> **)(local_38 + 0xe) = pTVar3;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>
         *)piVar2 != pTVar1) {
      this_00 = *(TDelegateBase<FNotThreadSafeDelegateMode> **)piVar2;
      *(TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
        **)piVar2 = pTVar1->Ptr;
      pTVar1->Ptr = (TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
                     *)0x0;
      if (this_00 != (TDelegateBase<FNotThreadSafeDelegateMode> *)0x0) {
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  (this_00);
        ::operator_delete(this_00,0x18);
      }
    }
  }
  pFVar4 = (this->QueuedPackages).AllocatorInstance.Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_38) &&
      ((FScriptContainerElement *)&local_38 < pFVar4 + (longlong)(this->QueuedPackages).ArrayMax * 8
      )) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar7 = (this->QueuedPackages).ArrayNum;
  piVar2 = &(this->QueuedPackages).ArrayMax;
  if (iVar7 == *piVar2) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->QueuedPackages).AllocatorInstance,piVar2);
  }
  (this->QueuedPackages).ArrayNum = iVar7 + 1;
  *(int **)((this->QueuedPackages).AllocatorInstance.Data + (longlong)iVar7 * 8) = local_38;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  NotifyAsyncLoadingStateHasMaybeChanged();
                    /* WARNING: Could not recover jumptable at 0x000141f09777. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->QueuedRequestsEvent->_padding_ + 0x10))();
  return;
}

// ResumeLoading @ 141f0e4f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAsyncLoadingThread::ResumeLoading(FAsyncLoadingThread *this)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  
  bVar4 = IsInGameThread();
  if (bVar4) {
    bVar4 = IsInSlateThread();
    if (!bVar4) goto LAB_141f0e535;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsInGameThread() && !IsInSlateThread()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                     ,0x157c,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_141f0e535:
  LOCK();
  piVar1 = (int *)((longlong)(this->QueueCritical).CriticalSection.Opaque3 + 0x14);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (3 < (byte)LogStreaming._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
  }
  if (iVar2 + -1 < 0) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
  }
  if ((bThreadStarted != false) && (iVar2 == 1)) {
    (**(code **)(this->ThreadSuspendedEvent->_padding_ + 0x20))
              (this->ThreadSuspendedEvent,0xffffffff,0);
    FLoadTimeProfilerTracePrivate::OutputResumeAsyncLoading();
  }
  return;
}

// Run @ 141f0e5b0

uint __thiscall FAsyncLoadingThread::Run(FAsyncLoadingThread *this)

{
  int iVar1;
  float fVar2;
  double dVar3;
  bool bVar4;
  bool local_res8 [8];
  FLLMScope local_res10 [2];
  FMemScope local_res18;
  FFlushRequest local_38 [3];
  
  FLLMScope::FLLMScope(local_res10,AsyncLoading,false,None,Default,true);
  FMemScope::FMemScope(&local_res18,AsyncLoading,true);
  AsyncLoadingThreadID = GetCurrentThreadId();
  FLoadTimeProfilerTracePrivate::OutputStartAsyncLoading();
  bVar4 = IsInGameThread();
  if (!bVar4) {
    FWindowsPlatformProcess::SetThreadAffinityMask(0xffffffffffffffff);
    FMemory::SetupTLSCachesOnCurrentThread();
  }
  dVar3 = __real_3fa0e5604189374c;
  fVar2 = __real_3a83126f;
  bVar4 = false;
  iVar1 = (this->StopTaskCounter).Counter;
  while (iVar1 == 0) {
    if ((this->IsLoadingSuspended).Counter == 0) {
      if (bVar4) {
        bVar4 = false;
        (**(code **)(this->ThreadResumedEvent->_padding_ + 0x10))();
      }
      if (GGCSingleton->GCWantsToRunCounter == (TAtomic<int>)0x0) {
        local_res8[0] = false;
        PeekFlushRequest(this,local_38);
        TickAsyncThread(this,true,false,dVar3,local_res8,local_38);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_38[0].Data.SharedReferenceCount.ReferenceController);
      }
    }
    else if (bVar4) {
      FWindowsPlatformProcess::SleepNoStats(fVar2);
    }
    else {
      bVar4 = true;
      (**(code **)(this->ThreadSuspendedEvent->_padding_ + 0x10))();
    }
    iVar1 = (this->StopTaskCounter).Counter;
  }
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res10);
  return 0;
}

// ShouldAlwaysLoadPackageAsync @ 141f13600

bool __thiscall
FAsyncLoadingThread::ShouldAlwaysLoadPackageAsync(FAsyncLoadingThread *this,FPackagePath *param_1)

{
  return GEventDrivenLoaderEnabled;
}

// ShouldProcessPackage @ 141f137d0

bool __thiscall
FAsyncLoadingThread::ShouldProcessPackage
          (FAsyncLoadingThread *this,FAsyncPackage *param_1,FFlushRequest *param_2)

{
  atomic<int> *paVar1;
  int iVar2;
  FFlushRequestData *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  atomic<int> *paVar7;
  FAsyncPackage *local_res18 [2];
  
  pFVar3 = (param_2->Data).Object;
  if ((pFVar3 == (FFlushRequestData *)0x0) || (GAsyncLoadingAlwaysProcessPackages != 0)) {
    return true;
  }
  paVar7 = (pFVar3->RequestIDs).Ptr;
  iVar2 = pFVar3->NumRequests;
  if ((iVar2 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  paVar1 = paVar7 + iVar2;
  local_res18[0] = param_1;
  while( true ) {
    if (paVar7 == paVar1) {
      return false;
    }
    bVar5 = `FAsyncLoadingThread::ShouldProcessPackage'::__l2::<lambda_1>::operator()
                      (local_res18,paVar7);
    if (bVar5) break;
    paVar7 = paVar7 + 1;
  }
  return true;
}

// ShutdownLoading @ 141f13960

void __thiscall FAsyncLoadingThread::ShutdownLoading(FAsyncLoadingThread *this)

{
  FEDLBootNotificationManager *pFVar1;
  code *pcVar2;
  bool bVar3;
  FAsyncLoadEventArgs local_28;
  
  local_28.TimeLimit = 0.0;
  local_28.bUseTimeLimit = false;
  local_28.bUseFullTimeLimit = true;
  local_28.TickStartTime = 0.0;
  local_28.OutLastTypeOfWorkPerformed = (wchar_t *)0x0;
  local_28.OutLastObjectWorkWasPerformedOn = (UObject *)0x0;
  bVar3 = FAsyncLoadEventQueue::PopAndExecute
                    ((FAsyncLoadEventQueue *)&this->IoStorePackageLoader,&local_28);
  if (bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!EventQueue.PopAndExecute(Args)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                       ,0x1429,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = this->EDLBootNotificationManager;
  if (pFVar1 != (FEDLBootNotificationManager *)0x0) {
    (**(code **)(*(longlong *)&pFVar1->PathToState + 0x30))(pFVar1,1);
  }
  this->EDLBootNotificationManager = (FEDLBootNotificationManager *)0x0;
  FGenericPlatformProcess::ReturnSynchEventToPool(*(FEvent **)&this->StopTaskCounter);
  *(undefined8 *)&this->StopTaskCounter = 0;
  FGenericPlatformProcess::ReturnSynchEventToPool(this->QueuedRequestsEvent);
  this->QueuedRequestsEvent = (FEvent *)0x0;
  FGenericPlatformProcess::ReturnSynchEventToPool(this->CancelLoadingEvent);
  this->CancelLoadingEvent = (FEvent *)0x0;
  FGenericPlatformProcess::ReturnSynchEventToPool(this->ThreadSuspendedEvent);
  this->ThreadSuspendedEvent = (FEvent *)0x0;
  return;
}

// StartThread @ 141f14620

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAsyncLoadingThread::StartThread(FAsyncLoadingThread *this)

{
  FAsyncLoadingThreadSettings *pFVar1;
  FEDLBootNotificationManager *pFVar2;
  
  FGCCSyncObject::Create();
  if (this->EDLBootNotificationManager == (FEDLBootNotificationManager *)0x0) {
    pFVar1 = FAsyncLoadingThreadSettings::Get();
    if (pFVar1->bAsyncLoadingThreadEnabled != false) {
      UE::Trace::ThreadGroupBegin(L"AsyncLoading");
      if (4 < (byte)LogStreaming._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
      }
      bThreadStarted = true;
      pFVar2 = (FEDLBootNotificationManager *)
               FRunnableThread::Create
                         ((FRunnable *)&this[-1].AsyncLoadingThreadIndex,L"FAsyncLoadingThread",0,
                          TPri_Normal,0xffffffffffffffff,None);
      this->EDLBootNotificationManager = pFVar2;
      UE::Trace::ThreadGroupEnd();
    }
  }
  return;
}

// Stop @ 141f146d0

void __thiscall FAsyncLoadingThread::Stop(FAsyncLoadingThread *this)

{
  LOCK();
  (this->StopTaskCounter).Counter = (this->StopTaskCounter).Counter + 1;
  UNLOCK();
  return;
}

// SuspendLoading @ 141f14c10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAsyncLoadingThread::SuspendLoading(FAsyncLoadingThread *this)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = IsInGameThread();
  if (bVar3) {
    bVar3 = IsInSlateThread();
    if (!bVar3) goto LAB_141f14c42;
  }
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
LAB_141f14c42:
  LOCK();
  piVar1 = (int *)((longlong)(this->QueueCritical).CriticalSection.Opaque3 + 0x14);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if (3 < (byte)LogStreaming._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
  }
  if ((bThreadStarted != false) && (iVar2 == 0)) {
    FLoadTimeProfilerTracePrivate::OutputSuspendAsyncLoading();
    (**(code **)(this->CancelLoadingEvent->_padding_ + 0x20))(this->CancelLoadingEvent,0xffffffff,0)
    ;
  }
  return;
}

// TickAsyncLoading @ 141f14d10

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall
FAsyncLoadingThread::TickAsyncLoading
          (FAsyncLoadingThread *this,bool param_1,bool param_2,double param_3,FFlushRequest *param_4
          )

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FWindowsRecursiveMutex *lpCriticalSection_00;
  int iVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  Type TVar7;
  wchar_t *pwVar8;
  char cVar9;
  double dVar10;
  bool local_res8 [8];
  FLLMScope local_d8 [2];
  LARGE_INTEGER local_d0;
  LARGE_INTEGER local_c8;
  LARGE_INTEGER local_c0;
  LARGE_INTEGER local_b8;
  LARGE_INTEGER local_b0;
  LARGE_INTEGER local_a8;
  LARGE_INTEGER local_a0;
  LARGE_INTEGER local_98;
  LARGE_INTEGER local_90;
  FMemScope local_88 [12];
  
  FLLMScope::FLLMScope(local_d8,AsyncLoading,false,None,Default,true);
  FMemScope::FMemScope(local_88,AsyncLoading,true);
  bVar6 = IsInGameThread();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                         ,0x1373,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    TVar7 = (*pcVar2)();
    return TVar7;
  }
  if ((GIsGarbageCollecting != false) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsGarbageCollecting()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                         ,0x1374,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    TVar7 = (*pcVar2)();
    return TVar7;
  }
  iVar1 = (this->IsLoadingSuspended).Counter;
  TVar7 = Complete - (iVar1 != 0);
  if (iVar1 != 0) goto LAB_141f15241;
  QueryPerformanceCounter(&local_d0);
  bVar6 = bThreadStarted;
  dVar5 = __real_4170000000000000;
  local_res8[0] = false;
  dVar4 = (double)local_d0.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  TVar7 = ProcessLoadedPackages(this,param_1,param_2,param_3,local_res8,param_4);
  QueryPerformanceCounter(&local_c8);
  dVar10 = ((double)local_c8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar5) - dVar4;
  if (((2 < (byte)LogStreaming._0_1_) && (param_1)) && (__real_3fb99999a0000000 < dVar10)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
  }
  if (bVar6 == false) {
    if (TVar7 != TimeOut) {
      if (!param_1) {
LAB_141f14f73:
        if ((byte)LogStreaming._0_1_ < 6) {
          if (GGCSingleton->GCWantsToRunCounter == (TAtomic<int>)0x0) goto LAB_141f14fa3;
        }
        else {
          if (GGCSingleton->GCWantsToRunCounter == (TAtomic<int>)0x0) {
LAB_141f14fa3:
            AdjustFlushRequest(this,param_4);
            dVar10 = param_3 - dVar10;
            if (dVar10 <= 0.0) {
              dVar10 = 0.0;
            }
            TVar7 = TickAsyncThread(this,param_1,param_2,dVar10,local_res8,param_4);
            goto LAB_141f14fdf;
          }
          UE::Logging::Private::BasicLog<6>
                    ((FStaticBasicLogRecord *)&PTR_u_Timing_out_asyn_1507e7988,
                     (FLogCategoryBase *)&LogStreaming);
        }
        goto LAB_141f14fe8;
      }
      QueryPerformanceCounter(&local_c0);
      dVar3 = (double)local_c0.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar5;
      if ((dVar3 - dVar4 <= param_3) || (GWarnIfTimeLimitExceeded == 0)) {
        LastTestTime = dVar3;
        if (dVar3 - dVar4 <= param_3) goto LAB_141f14f73;
      }
      else {
        IsTimeLimitExceededPrint
                  (dVar4,dVar3,LastTestTime,param_3,L"ProcessLoadedPackages",(UObject *)0x0);
        LastTestTime = dVar3;
      }
LAB_141f14fed:
      QueryPerformanceCounter(&local_b8);
      dVar10 = (double)local_b8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar5;
      if ((dVar10 - dVar4 <= param_3) || (GWarnIfTimeLimitExceeded == 0)) {
        LastTestTime = dVar10;
        if (dVar10 - dVar4 <= param_3) goto LAB_141f1504a;
      }
      else {
        pwVar8 = L"TickAsyncThread";
LAB_141f154ad:
        IsTimeLimitExceededPrint(dVar4,dVar10,LastTestTime,param_3,pwVar8,(UObject *)0x0);
        LastTestTime = dVar10;
      }
    }
  }
  else {
LAB_141f14fdf:
    if (TVar7 != TimeOut) {
LAB_141f14fe8:
      if (param_1) goto LAB_141f14fed;
LAB_141f1504a:
      if ((byte)LogStreaming._0_1_ < 6) {
        if (GGCSingleton->GCWantsToRunCounter == (TAtomic<int>)0x0) goto LAB_141f15071;
      }
      else if (GGCSingleton->GCWantsToRunCounter == (TAtomic<int>)0x0) {
LAB_141f15071:
        lpCriticalSection = &this->QueueCritical;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
LAB_141f154d6:
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        lpCriticalSection_00 = &this->LoadedPackagesCritical;
        if (lpCriticalSection_00 == (FWindowsRecursiveMutex *)0x0) goto LAB_141f154d6;
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
        cVar9 = local_res8[0];
        if ((this->ExistingAsyncPackagesCounter).Counter == 0) {
          cVar9 = '\x01';
          FDeferredMessageLog::Flush();
          if (param_1) {
            QueryPerformanceCounter(&local_b0);
            dVar10 = (double)local_b0.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar5;
            if ((dVar10 - dVar4 <= param_3) || (GWarnIfTimeLimitExceeded == 0)) {
              LastTestTime = dVar10;
              if (dVar10 - dVar4 <= param_3) goto LAB_141f1513a;
            }
            else {
              IsTimeLimitExceededPrint
                        (dVar4,dVar10,LastTestTime,param_3,L"FDeferredMessageLog::Flush()",
                         (UObject *)0x0);
              LastTestTime = dVar10;
            }
          }
          else {
LAB_141f1513a:
            if ((5 < (byte)LogStreaming._0_1_) &&
               (GGCSingleton->GCWantsToRunCounter != (TAtomic<int>)0x0)) {
              UE::Logging::Private::BasicLog<6>
                        ((FStaticBasicLogRecord *)&PTR_u_Timing_out_asyn_1507e7988,
                         (FLogCategoryBase *)&LogStreaming);
            }
          }
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if ((cVar9 == '\0') && (GEventDrivenLoaderEnabled != false)) {
          if (bVar6 == false) {
            if (GIsInitialLoad == false) {
LAB_141f15448:
              CheckForCycles(this);
            }
            else {
              bVar6 = FEDLBootNotificationManager::FireCompletedCompiledInImports
                                (this->EDLBootNotificationManager,this,false);
              if (param_1) {
                QueryPerformanceCounter(&local_a0);
                dVar10 = (double)local_a0.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar5;
                if ((dVar10 - dVar4 <= param_3) || (GWarnIfTimeLimitExceeded == 0)) {
                  LastTestTime = dVar10;
                  if (dVar10 - dVar4 <= param_3) goto LAB_141f15357;
                }
                else {
                  IsTimeLimitExceededPrint
                            (dVar4,dVar10,LastTestTime,param_3,L"FireCompletedCompiledInImports",
                             (UObject *)0x0);
                  LastTestTime = dVar10;
                }
              }
              else {
LAB_141f15357:
                if ((5 < (byte)LogStreaming._0_1_) &&
                   (GGCSingleton->GCWantsToRunCounter != (TAtomic<int>)0x0)) {
                  UE::Logging::Private::BasicLog<6>
                            ((FStaticBasicLogRecord *)&PTR_u_Timing_out_asyn_1507e7988,
                             (FLogCategoryBase *)&LogStreaming);
                }
              }
              if (!bVar6) {
                bVar6 = FEDLBootNotificationManager::ConstructWaitingBootObjects
                                  (this->EDLBootNotificationManager);
                if (param_1) {
                  QueryPerformanceCounter(&local_98);
                  dVar10 = (double)local_98.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar5
                  ;
                  if ((dVar10 - dVar4 <= param_3) || (GWarnIfTimeLimitExceeded == 0)) {
                    LastTestTime = dVar10;
                    if (dVar10 - dVar4 <= param_3) goto LAB_141f15419;
                  }
                  else {
                    IsTimeLimitExceededPrint
                              (dVar4,dVar10,LastTestTime,param_3,L"ConstructWaitingBootObjects",
                               (UObject *)0x0);
                    LastTestTime = dVar10;
                  }
                }
                else {
LAB_141f15419:
                  if ((5 < (byte)LogStreaming._0_1_) &&
                     (GGCSingleton->GCWantsToRunCounter != (TAtomic<int>)0x0)) {
                    UE::Logging::Private::BasicLog<6>
                              ((FStaticBasicLogRecord *)&PTR_u_Timing_out_asyn_1507e7988,
                               (FLogCategoryBase *)&LogStreaming);
                  }
                }
                if (!bVar6) goto LAB_141f15448;
              }
            }
            if (param_1) {
              QueryPerformanceCounter(&local_90);
              dVar10 = (double)local_90.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar5;
              bVar6 = param_3 < dVar10 - dVar4;
              if ((param_3 < dVar10 - dVar4) && (GWarnIfTimeLimitExceeded != 0)) {
                pwVar8 = L"CheckForCycles (non-shipping)";
                goto LAB_141f154ad;
              }
LAB_141f151ff:
              LastTestTime = dVar10;
              if (bVar6) goto LAB_141f15235;
            }
          }
          else {
            if (GIsInitialLoad == false) goto LAB_141f15235;
            FEDLBootNotificationManager::ConstructWaitingBootObjects
                      (this->EDLBootNotificationManager);
            if (param_1) {
              QueryPerformanceCounter(&local_a8);
              dVar10 = (double)local_a8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar5;
              bVar6 = param_3 < dVar10 - dVar4;
              if ((param_3 < dVar10 - dVar4) && (GWarnIfTimeLimitExceeded != 0)) {
                pwVar8 = L"ConstructWaitingBootObjects";
                goto LAB_141f154ad;
              }
              goto LAB_141f151ff;
            }
          }
          if ((5 < (byte)LogStreaming._0_1_) &&
             (GGCSingleton->GCWantsToRunCounter != (TAtomic<int>)0x0)) goto LAB_141f15222;
        }
      }
      else {
LAB_141f15222:
        UE::Logging::Private::BasicLog<6>
                  ((FStaticBasicLogRecord *)&PTR_u_Timing_out_asyn_1507e7988,
                   (FLogCategoryBase *)&LogStreaming);
      }
    }
  }
LAB_141f15235:
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&FCoreDelegates::OnAsyncLoadingFlushUpdate);
LAB_141f15241:
  FMemScope::~FMemScope(local_88);
  FLLMScope::~FLLMScope(local_d8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->Data).SharedReferenceCount.ReferenceController);
  return TVar7;
}

// TickAsyncThread @ 141f16290

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall
FAsyncLoadingThread::TickAsyncThread
          (FAsyncLoadingThread *this,bool param_1,bool param_2,double param_3,bool *param_4,
          FFlushRequest *param_5)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  int iVar2;
  FEDLBootNotificationManager *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  Type TVar8;
  undefined8 uVar9;
  double dVar10;
  float fVar11;
  FGCScopeGuard local_res8 [8];
  FGCScopeGuard local_98 [4];
  int local_94;
  LARGE_INTEGER local_90;
  LARGE_INTEGER local_88;
  LARGE_INTEGER local_80;
  LARGE_INTEGER local_78;
  LARGE_INTEGER local_70 [9];
  
  bVar7 = IsInGameThread();
  if (((bVar7) && (bThreadStarted != false)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsInGameThread() || !IsMultithreaded()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                         ,0x149e,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    TVar8 = (*pcVar4)();
    return TVar8;
  }
  if (this->bShouldCancelLoading == (FThreadSafeBool)0x0) {
    local_94 = 0;
    QueryPerformanceCounter(&local_90);
    dVar5 = __real_4170000000000000;
    dVar6 = (double)local_90.QuadPart * FGenericPlatformTime::SecondsPerCycle +
            __real_4170000000000000;
    TVar8 = Complete;
    if ((this->AsyncThreadReady).Counter != 0) {
      if ((GIsInitialLoad != false) && (GEventDrivenLoaderEnabled != false)) {
        FEDLBootNotificationManager::FireCompletedCompiledInImports
                  (this->EDLBootNotificationManager,this,false);
      }
      FGCScopeGuard::FGCScopeGuard(local_res8);
      CreateAsyncPackagesFromQueue(this,param_1,param_2,param_3);
      FGCScopeGuard::~FGCScopeGuard(local_res8);
      QueryPerformanceCounter(&local_88);
      fVar11 = (float)param_3 -
               (float)(((double)local_88.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar5) -
                      dVar6);
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
      TVar8 = TimeOut;
      if ((GGCSingleton->GCWantsToRunCounter == (TAtomic<int>)0x0) &&
         (((0.0 < fVar11 || (!param_1)) || (bThreadStarted != false)))) {
        FGCScopeGuard::FGCScopeGuard(local_98);
        TVar8 = ProcessAsyncLoading(this,&local_94,param_1,param_2,fVar11,param_5);
        iVar1 = local_94;
        if ((*param_4 == false) && (local_94 < 1)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        *param_4 = bVar7;
        FGCScopeGuard::~FGCScopeGuard(local_98);
        if (iVar1 != 0) {
          return TVar8;
        }
      }
    }
    if (bThreadStarted == false) {
      return TVar8;
    }
    if (TVar8 != Complete) {
      return TVar8;
    }
    pFVar3 = this->EDLBootNotificationManager;
    uVar9 = 0x1e;
    lpCriticalSection = &pFVar3->EDLBootNotificationManagerLock;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar1 = *(int *)&(pFVar3->PathToWaitingPackageNodes).field_0x8;
    iVar2 = *(int *)&(pFVar3->PathToWaitingPackageNodes).field_0x34;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (((0 < iVar1 - iVar2) || (GGCSingleton->GCWantsToRunCounter != (TAtomic<int>)0x0)) ||
       (GIsGarbageCollecting != false)) {
      uVar9 = 1;
      goto LAB_141f165b9;
    }
    CheckForCycles(this);
    if (param_1) {
      QueryPerformanceCounter(&local_80);
      dVar5 = (double)local_80.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar5;
      if ((param_3 < dVar5 - dVar6) && (GWarnIfTimeLimitExceeded != 0)) {
        IsTimeLimitExceededPrint
                  (dVar6,dVar5,LastTestTime,param_3,L"CheckForCycles (non-shipping)",(UObject *)0x0)
        ;
        LastTestTime = dVar5;
        goto LAB_141f165b9;
      }
      LastTestTime = dVar5;
      if (param_3 < dVar5 - dVar6) goto LAB_141f165b9;
    }
    if ((5 < (byte)LogStreaming._0_1_) && (GGCSingleton->GCWantsToRunCounter != (TAtomic<int>)0x0))
    {
      UE::Logging::Private::BasicLog<6>
                ((FStaticBasicLogRecord *)&PTR_u_Timing_out_asyn_1507e7988,
                 (FLogCategoryBase *)&LogStreaming);
    }
LAB_141f165b9:
    if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId5325,"Package_Temp3",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                 ,0x14cd);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId5325);
    }
    (**(code **)(this->QueuedRequestsEvent->_padding_ + 0x20))(this->QueuedRequestsEvent,uVar9,1);
    if (!bVar7) {
      return Complete;
    }
    FCpuProfilerTrace::OutputEndEvent();
    return Complete;
  }
  QueryPerformanceCounter(&local_78);
  dVar5 = __real_4170000000000000;
  dVar6 = (double)local_78.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  CancelAsyncLoadingInternal(this);
  if (param_1) {
    QueryPerformanceCounter(local_70);
    dVar5 = (double)local_70[0].QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar5;
    dVar10 = dVar5 - dVar6;
    if ((param_3 < dVar10) && (GWarnIfTimeLimitExceeded != 0)) {
      IsTimeLimitExceededPrint
                (dVar6,dVar5,LastTestTime,param_3,L"CancelAsyncLoadingInternal",(UObject *)0x0);
      LastTestTime = dVar5;
      goto LAB_141f1670d;
    }
    LastTestTime = dVar5;
    if (param_3 < dVar10) goto LAB_141f1670d;
  }
  if ((5 < (byte)LogStreaming._0_1_) && (GGCSingleton->GCWantsToRunCounter != (TAtomic<int>)0x0)) {
    UE::Logging::Private::BasicLog<6>
              ((FStaticBasicLogRecord *)&PTR_u_Timing_out_asyn_1507e7988,
               (FLogCategoryBase *)&LogStreaming);
  }
LAB_141f1670d:
  LOCK();
  this->bShouldCancelLoading = (FThreadSafeBool)0x0;
  UNLOCK();
  return Complete;
}

// UpdateExistingPackagePriorities @ 141f19280

void __thiscall
FAsyncLoadingThread::UpdateExistingPackagePriorities
          (FAsyncLoadingThread *this,FAsyncPackage *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  FAsyncPackage *local_res10 [3];
  
  local_res10[0] = param_1;
  bVar2 = IsInGameThread();
  if ((bVar2) && (bThreadStarted != false)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsInGameThread() || !IsMultithreaded()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                       ,0x36f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (GEventDrivenLoaderEnabled != false) {
    (local_res10[0]->Desc).Priority = param_2;
    return;
  }
  if ((local_res10[0]->Desc).Priority < param_2) {
    TArray<FAsyncPackage_*,TSizedDefaultAllocator<32>_>::Remove(&this->AsyncPackages,local_res10);
    (local_res10[0]->Desc).Priority = param_2;
    InsertPackage(this,local_res10[0],false,InsertBeforeMatchingPriorities);
    LOCK();
    (this->ExistingAsyncPackagesCounter).Counter = (this->ExistingAsyncPackagesCounter).Counter + -1
    ;
    UNLOCK();
    NotifyAsyncLoadingStateHasMaybeChanged();
  }
  return;
}

