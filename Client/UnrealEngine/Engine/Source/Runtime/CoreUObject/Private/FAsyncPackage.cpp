// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 83

// <lambda_invoker_cdecl> @ 141ec54f0

void __cdecl `FAsyncPackage::CreateLinker'::__l237::<lambda_2>::<lambda_invoker_cdecl>(void)

{
  return;
}

// FAsyncPackage @ 141ed2e10

FAsyncPackage * __thiscall
FAsyncPackage::FAsyncPackage
          (FAsyncPackage *this,FAsyncLoadingThread *param_1,FAsyncPackageDesc *param_2,
          FEDLBootNotificationManager *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  FThreadSafeCounter FVar2;
  TArrayView<int_const_,int> local_18;
  
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::RegisterGCObject((FGCObject *)this);
  this->_padding_ = (longlong)&___7FAsyncPackage__6B_;
  (this->Desc).RequestID = param_2->RequestID;
  (this->Desc).Name = param_2->Name;
  (this->Desc).PackagePath.PackageName.ComparisonIndex = 0;
  (this->Desc).PackagePath.PackageName.Number = 0;
  (this->Desc).PackagePath.HeaderExtension = Unspecified;
  (this->Desc).PackagePath.PackageName = (param_2->PackagePath).PackageName;
  (this->Desc).PackagePath.HeaderExtension = (param_2->PackagePath).HeaderExtension;
  (this->Desc).PackageLoadedDelegate.Ptr =
       (TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
        *)0x0;
  (this->Desc).PackageFlags = param_2->PackageFlags;
  (this->Desc).Priority = param_2->Priority;
  (this->Desc).PIEInstanceID = param_2->PIEInstanceID;
  (this->Desc).InstancingContext.SharedData.Object = (param_2->InstancingContext).SharedData.Object;
  pTVar1 = (param_2->InstancingContext).SharedData.SharedReferenceCount.ReferenceController;
  (this->Desc).InstancingContext.SharedData.SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->CompletionCallbacks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CompletionCallbacks).ArrayNum = 0;
  (this->CompletionCallbacks).ArrayMax = 0;
  *(undefined8 *)&this->PendingImportedPackages = 0;
  *(undefined8 *)&(this->PendingImportedPackages).field_0x8 = 0;
  *(undefined8 *)&(this->PendingImportedPackages).field_0x20 = 0;
  this->Linker = (FLinkerLoad *)0x0;
  this->LinkerRoot = (UPackage *)0x0;
  *(undefined4 *)&(this->PendingImportedPackages).field_0x28 = 0;
  *(undefined4 *)&(this->PendingImportedPackages).field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingImportedPackages).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PendingImportedPackages).field_0x34 = 0;
  *(undefined8 *)&(this->PendingImportedPackages).field_0x40 = 0;
  *(undefined4 *)&(this->PendingImportedPackages).field_0x48 = 0;
  (this->ReferencedImports).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReferencedImports).ArrayNum = 0;
  (this->ReferencedImports).ArrayMax = 0;
  this->DependencyRootPackage = (FAsyncPackage *)0x0;
  (this->DependencyRefCount).Counter = 0;
  this->LoadImportIndex = 0;
  this->ImportIndex = 0;
  this->ExportIndex = 0;
  this->PreLoadIndex = 0;
  this->PreLoadSortIndex = 0;
  this->FinishExternalReadDependenciesIndex = 0;
  this->PostLoadIndex = 0;
  this->DeferredPostLoadIndex = 0;
  this->PostLoadInstanceIndex = 0;
  this->DeferredFinalizeIndex = 0;
  this->DeferredClusterIndex = 0;
  this->TimeLimit = 3.4028235e+38;
  this->bUseTimeLimit = false;
  this->bUseFullTimeLimit = false;
  this->bTimeLimitExceeded = false;
  this->bLoadHasFailed = false;
  this->bLoadHasFinished = false;
  this->bThreadedLoadingFinished = false;
  this->bCreatedLinkerRoot = false;
  this->TickStartTime = 0.0;
  this->LastObjectWorkWasPerformedOn = (UObject *)0x0;
  this->LastTypeOfWorkPerformed = (wchar_t *)0x0;
  this->LoadStartTime = 0.0;
  this->LoadPercentage = 0.0;
  (this->DeferredPostLoadObjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeferredPostLoadObjects).ArrayNum = 0;
  (this->DeferredPostLoadObjects).ArrayMax = 0;
  (this->DeferredFinalizeObjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeferredFinalizeObjects).ArrayNum = 0;
  (this->DeferredFinalizeObjects).ArrayMax = 0;
  (this->PackageObjLoaded).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PackageObjLoaded).ArrayNum = 0;
  (this->PackageObjLoaded).ArrayMax = 0;
  (this->DelayedLinkerClosePackages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DelayedLinkerClosePackages).ArrayNum = 0;
  (this->DelayedLinkerClosePackages).ArrayMax = 0;
  (this->DeferredClusterObjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeferredClusterObjects).ArrayNum = 0;
  (this->DeferredClusterObjects).ArrayMax = 0;
  (this->RequestIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RequestIDs).ArrayNum = 0;
  (this->RequestIDs).ArrayMax = 0;
  (this->DependentRequestsLock).Mutex.Mutex.Ptr = (void *)0x0;
  *(undefined8 *)&(this->DependentRequests).Elements = 0;
  *(undefined8 *)&(this->DependentRequests).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->DependentRequests).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->DependentRequests).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->DependentRequests).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->DependentRequests).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DependentRequests).Elements.field_0x34 = 0;
  (this->DependentRequests).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->DependentRequests).HashSize = 0;
  this->ReentryCount = (atomic<int>)0x0;
  *(undefined8 *)&(this->ReferencedObjects).Elements = 0;
  *(undefined8 *)&(this->ReferencedObjects).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ReferencedObjects).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ReferencedObjects).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ReferencedObjects).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ReferencedObjects).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ReferencedObjects).Elements.field_0x34 = 0;
  (this->ReferencedObjects).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ReferencedObjects).HashSize = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->ReferencedObjectsCritical,4000);
  *(undefined8 *)&(this->ImportedPackages).Elements = 0;
  *(undefined8 *)&(this->ImportedPackages).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ImportedPackages).Elements.field_0x20 = 0;
  this->AsyncLoadingThread = param_1;
  this->EDLBootNotificationManager = param_3;
  *(undefined4 *)&(this->ImportedPackages).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ImportedPackages).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ImportedPackages).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ImportedPackages).Elements.field_0x34 = 0;
  (this->ImportedPackages).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ImportedPackages).HashSize = 0;
  this->AsyncPackageLoadingState = NewPackage;
  FVar2 = AsyncPackageSerialNumber;
  LOCK();
  AsyncPackageSerialNumber.Counter = AsyncPackageSerialNumber.Counter + 1;
  UNLOCK();
  *(undefined8 *)&this->ImportsThatAreNowCreated = 0;
  *(undefined8 *)&(this->ImportsThatAreNowCreated).field_0x8 = 0;
  *(undefined8 *)&this->ImportsThatAreNowSerialized = 0;
  *(undefined8 *)&(this->ImportsThatAreNowSerialized).field_0x8 = 0;
  *(undefined8 *)&this->ExportsThatCanBeCreated = 0;
  *(undefined8 *)&(this->ExportsThatCanBeCreated).field_0x8 = 0;
  *(undefined8 *)&this->ExportsThatCanHaveIOStarted = 0;
  *(undefined8 *)&(this->ExportsThatCanHaveIOStarted).field_0x8 = 0;
  *(undefined8 *)&this->ExportsThatCanBeSerialized = 0;
  *(undefined8 *)&(this->ExportsThatCanBeSerialized).field_0x8 = 0;
  (this->ReadyPrecacheRequests).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReadyPrecacheRequests).ArrayNum = 0;
  (this->ReadyPrecacheRequests).ArrayMax = 0;
  *(undefined8 *)&this->PrecacheRequests = 0;
  *(undefined8 *)&(this->PrecacheRequests).field_0x8 = 0;
  *(undefined8 *)&(this->PrecacheRequests).field_0x20 = 0;
  this->SerialNumber = FVar2.Counter + 1;
  *(undefined4 *)&(this->PrecacheRequests).field_0x28 = 0;
  *(undefined4 *)&(this->PrecacheRequests).field_0x2c = 0x80;
  *(undefined4 *)&(this->PrecacheRequests).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PrecacheRequests).field_0x34 = 0;
  *(undefined8 *)&(this->PrecacheRequests).field_0x40 = 0;
  *(undefined4 *)&(this->PrecacheRequests).field_0x48 = 0;
  *(undefined8 *)&this->ExportIndexToPrecacheRequest = 0;
  *(undefined8 *)&(this->ExportIndexToPrecacheRequest).field_0x8 = 0;
  *(undefined8 *)&(this->ExportIndexToPrecacheRequest).field_0x20 = 0;
  *(undefined4 *)&(this->ExportIndexToPrecacheRequest).field_0x28 = 0;
  *(undefined4 *)&(this->ExportIndexToPrecacheRequest).field_0x2c = 0x80;
  *(undefined4 *)&(this->ExportIndexToPrecacheRequest).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ExportIndexToPrecacheRequest).field_0x34 = 0;
  *(undefined8 *)&(this->ExportIndexToPrecacheRequest).field_0x40 = 0;
  *(undefined4 *)&(this->ExportIndexToPrecacheRequest).field_0x48 = 0;
  this->CurrentBlockOffset = -1;
  this->CurrentBlockBytes = -1;
  *(undefined8 *)&(this->ExportsInThisBlock).Elements = 0;
  *(undefined8 *)&(this->ExportsInThisBlock).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ExportsInThisBlock).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ExportsInThisBlock).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ExportsInThisBlock).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ExportsInThisBlock).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ExportsInThisBlock).Elements.field_0x34 = 0;
  (this->ExportsInThisBlock).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ExportsInThisBlock).HashSize = 0;
  *(undefined8 *)&this->ObjectNameWithOuterToExport = 0;
  *(undefined8 *)&(this->ObjectNameWithOuterToExport).field_0x8 = 0;
  *(undefined8 *)&(this->ObjectNameWithOuterToExport).field_0x20 = 0;
  *(undefined4 *)&(this->ObjectNameWithOuterToExport).field_0x28 = 0;
  *(undefined4 *)&(this->ObjectNameWithOuterToExport).field_0x2c = 0x80;
  *(undefined4 *)&(this->ObjectNameWithOuterToExport).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ObjectNameWithOuterToExport).field_0x34 = 0;
  *(undefined8 *)&(this->ObjectNameWithOuterToExport).field_0x40 = 0;
  *(undefined4 *)&(this->ObjectNameWithOuterToExport).field_0x48 = 0;
  *(undefined8 *)&(this->PackagesIMayBeWaitingForBeforePostload).Elements = 0;
  *(undefined8 *)&(this->PackagesIMayBeWaitingForBeforePostload).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PackagesIMayBeWaitingForBeforePostload).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PackagesIMayBeWaitingForBeforePostload).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PackagesIMayBeWaitingForBeforePostload).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PackagesIMayBeWaitingForBeforePostload).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PackagesIMayBeWaitingForBeforePostload).Elements.field_0x34 = 0;
  (this->PackagesIMayBeWaitingForBeforePostload).Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->PackagesIMayBeWaitingForBeforePostload).HashSize = 0;
  *(undefined8 *)&(this->PackagesIAmWaitingForBeforePostload).Elements = 0;
  *(undefined8 *)&(this->PackagesIAmWaitingForBeforePostload).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PackagesIAmWaitingForBeforePostload).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PackagesIAmWaitingForBeforePostload).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PackagesIAmWaitingForBeforePostload).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PackagesIAmWaitingForBeforePostload).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PackagesIAmWaitingForBeforePostload).Elements.field_0x34 = 0;
  (this->PackagesIAmWaitingForBeforePostload).Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->PackagesIAmWaitingForBeforePostload).HashSize = 0;
  *(undefined8 *)&(this->OtherPackagesWaitingForMeBeforePostload).Elements = 0;
  *(undefined8 *)&(this->OtherPackagesWaitingForMeBeforePostload).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->OtherPackagesWaitingForMeBeforePostload).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->OtherPackagesWaitingForMeBeforePostload).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->OtherPackagesWaitingForMeBeforePostload).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->OtherPackagesWaitingForMeBeforePostload).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OtherPackagesWaitingForMeBeforePostload).Elements.field_0x34 = 0;
  (this->OtherPackagesWaitingForMeBeforePostload).Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->OtherPackagesWaitingForMeBeforePostload).HashSize = 0;
  (this->PackagesWaitingToLinkImports).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PackagesWaitingToLinkImports).ArrayNum = 0;
  (this->PackagesWaitingToLinkImports).ArrayMax = 0;
  this->ImportAddNodeIndex = 0;
  this->ExportAddNodeIndex = 0;
  this->bProcessImportsAndExportsInFlight = false;
  this->bProcessPostloadWaitInFlight = false;
  this->bAllExportsSerialized = false;
  (this->EventNodeArray).PackageNodes[0].NodesWaitingForMe.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EventNodeArray).PackageNodes[0].NodesWaitingForMe.ArrayNum = 0;
  (this->EventNodeArray).PackageNodes[0].NodesWaitingForMe.ArrayMax = 0;
  (this->EventNodeArray).PackageNodes[0].NumPrerequistes = 0;
  (this->EventNodeArray).PackageNodes[0].bFired = false;
  (this->EventNodeArray).PackageNodes[0].bAddedToGraph = false;
  (this->EventNodeArray).PackageNodes[1].NodesWaitingForMe.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EventNodeArray).PackageNodes[1].NodesWaitingForMe.ArrayNum = 0;
  (this->EventNodeArray).PackageNodes[1].NodesWaitingForMe.ArrayMax = 0;
  (this->EventNodeArray).PackageNodes[1].NumPrerequistes = 0;
  (this->EventNodeArray).PackageNodes[1].bFired = false;
  (this->EventNodeArray).PackageNodes[1].bAddedToGraph = false;
  (this->EventNodeArray).PackageNodes[2].NodesWaitingForMe.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EventNodeArray).PackageNodes[2].NodesWaitingForMe.ArrayNum = 0;
  (this->EventNodeArray).PackageNodes[2].NodesWaitingForMe.ArrayMax = 0;
  (this->EventNodeArray).PackageNodes[2].NumPrerequistes = 0;
  (this->EventNodeArray).PackageNodes[2].bFired = false;
  (this->EventNodeArray).PackageNodes[2].bAddedToGraph = false;
  (this->EventNodeArray).Array = (FEventLoadNode *)0x0;
  (this->EventNodeArray).TotalNumberOfImportExportNodes = 0;
  (this->EventNodeArray).TotalNumberOfNodesAdded = 0;
  (this->EventNodeArray).NumImports = 0;
  (this->EventNodeArray).NumExports = 0;
  (this->EventNodeArray).OffsetToImports = 0;
  (this->EventNodeArray).OffsetToExports = 0;
  FLoadTimeProfilerTracePrivate::OutputNewAsyncPackage(this);
  AddRequestID(this,param_2->RequestID);
  local_18.ArrayNum = 1;
  local_18.DataPtr = &param_2->RequestID;
  AddDependentRequests(this,&local_18);
  return this;
}

// ~FAsyncPackage @ 141ed56f0

void __thiscall FAsyncPackage::~FAsyncPackage(FAsyncPackage *this)

{
  int iVar1;
  ForElementType<FSetElementId> FVar2;
  void *pvVar3;
  TDelegateBase<FNotThreadSafeDelegateMode> *this_00;
  code *pcVar4;
  bool bVar5;
  BOOLEAN BVar6;
  FScriptContainerElement *pFVar7;
  FEventLoadNode *pFVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  undefined1 local_res8 [8];
  
  this->_padding_ = (longlong)&___7FAsyncPackage__6B_;
  if (GEventDrivenLoaderEnabled != false) {
    iVar1 = (this->CompletionCallbacks).ArrayNum;
    pFVar9 = (this->CompletionCallbacks).AllocatorInstance.Data;
    pFVar7 = pFVar9 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((this->CompletionCallbacks).ArrayNum != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FAsyncPackage::FCompletionCallback,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar9 == pFVar7) break;
      if (pFVar9[1] == (FScriptContainerElement)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                           ,0x163e,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pFVar9 = pFVar9 + 0x10;
    }
  }
  if ((this->bLoadHasFailed == false) && ((this->DeferredClusterObjects).ArrayNum != 0)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("bLoadHasFailed || DeferredClusterObjects.Num() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                       ,0x1642,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  MarkRequestIDsAsComplete(this);
  DetachLinker(this);
  pFVar8 = (FEventLoadNode *)&(this->EventNodeArray).Array;
  if (GEventDrivenLoaderEnabled != false) {
    this->SerialNumber = 0;
    if ((*(FEventLoadNode **)pFVar8 != (FEventLoadNode *)0x0) ||
       ((this->EventNodeArray).TotalNumberOfNodesAdded != 0)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!EventNodeArray.Array && !EventNodeArray.TotalNumberOfNodesAdded",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                         ,0x164a,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    RemoveAllNodes(this);
  }
  EmptyReferencedObjects(this);
  FLoadTimeProfilerTracePrivate::OutputDestroyAsyncPackage(this);
  lVar10 = 3;
  do {
    pFVar9 = pFVar8[-1].NodesWaitingForMe.AllocatorInstance.Data;
    pFVar8 = pFVar8 + -1;
    lVar10 = lVar10 + -1;
    if (pFVar9 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar9);
    }
  } while (lVar10 != 0);
  pFVar9 = (this->PackagesWaitingToLinkImports).AllocatorInstance.Data;
  if (pFVar9 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar9);
  }
  (this->OtherPackagesWaitingForMeBeforePostload).HashSize = 0;
  FVar2 = (this->OtherPackagesWaitingForMeBeforePostload).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FWeakAsyncPackagePtr>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FWeakAsyncPackagePtr>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->OtherPackagesWaitingForMeBeforePostload).Elements);
  (this->PackagesIAmWaitingForBeforePostload).HashSize = 0;
  FVar2 = (this->PackagesIAmWaitingForBeforePostload).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FWeakAsyncPackagePtr>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FWeakAsyncPackagePtr>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->PackagesIAmWaitingForBeforePostload).Elements);
  (this->PackagesIMayBeWaitingForBeforePostload).HashSize = 0;
  FVar2 = (this->PackagesIMayBeWaitingForBeforePostload).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FWeakAsyncPackagePtr>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FWeakAsyncPackagePtr>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->PackagesIMayBeWaitingForBeforePostload).Elements);
  *(undefined4 *)&(this->ObjectNameWithOuterToExport).field_0x48 = 0;
  pvVar3 = *(void **)&(this->ObjectNameWithOuterToExport).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FPackageIndex>,FPackageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FPackageIndex>,FPackageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FPackageIndex>,FPackageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ObjectNameWithOuterToExport);
  (this->ExportsInThisBlock).HashSize = 0;
  FVar2 = (this->ExportsInThisBlock).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ExportsInThisBlock).Elements);
  *(undefined4 *)&(this->ExportIndexToPrecacheRequest).field_0x48 = 0;
  pvVar3 = *(void **)&(this->ExportIndexToPrecacheRequest).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<int,IAsyncReadRequest_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,IAsyncReadRequest_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,IAsyncReadRequest_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ExportIndexToPrecacheRequest);
  *(undefined4 *)&(this->PrecacheRequests).field_0x48 = 0;
  pvVar3 = *(void **)&(this->PrecacheRequests).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PrecacheRequests);
  pFVar9 = (this->ReadyPrecacheRequests).AllocatorInstance.Data;
  if (pFVar9 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar9);
  }
  if (*(void **)&this->ExportsThatCanBeSerialized != (void *)0x0) {
    FMemory::Free(*(void **)&this->ExportsThatCanBeSerialized);
  }
  if (*(void **)&this->ExportsThatCanHaveIOStarted != (void *)0x0) {
    FMemory::Free(*(void **)&this->ExportsThatCanHaveIOStarted);
  }
  if (*(void **)&this->ExportsThatCanBeCreated != (void *)0x0) {
    FMemory::Free(*(void **)&this->ExportsThatCanBeCreated);
  }
  if (*(void **)&this->ImportsThatAreNowSerialized != (void *)0x0) {
    FMemory::Free(*(void **)&this->ImportsThatAreNowSerialized);
  }
  if (*(void **)&this->ImportsThatAreNowCreated != (void *)0x0) {
    FMemory::Free(*(void **)&this->ImportsThatAreNowCreated);
  }
  (this->ImportedPackages).HashSize = 0;
  FVar2 = (this->ImportedPackages).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<UPackage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<UPackage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ImportedPackages).Elements);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ReferencedObjectsCritical);
  (this->ReferencedObjects).HashSize = 0;
  FVar2 = (this->ReferencedObjects).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ReferencedObjects).Elements);
  (this->DependentRequests).HashSize = 0;
  FVar2 = (this->DependentRequests).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->DependentRequests).Elements);
  BVar6 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->DependentRequestsLock);
  if (BVar6 == '\0') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->DependentRequestsLock);
  }
  pFVar9 = (this->RequestIDs).AllocatorInstance.Data;
  if (pFVar9 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar9);
  }
  pFVar9 = (this->DeferredClusterObjects).AllocatorInstance.Data;
  if (pFVar9 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar9);
  }
  pFVar9 = (this->DelayedLinkerClosePackages).AllocatorInstance.Data;
  if (pFVar9 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar9);
  }
  pFVar9 = (this->PackageObjLoaded).AllocatorInstance.Data;
  if (pFVar9 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar9);
  }
  pFVar9 = (this->DeferredFinalizeObjects).AllocatorInstance.Data;
  if (pFVar9 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar9);
  }
  pFVar9 = (this->DeferredPostLoadObjects).AllocatorInstance.Data;
  if (pFVar9 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar9);
  }
  pFVar9 = (this->ReferencedImports).AllocatorInstance.Data;
  if (pFVar9 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar9);
  }
  *(undefined4 *)&(this->PendingImportedPackages).field_0x48 = 0;
  pvVar3 = *(void **)&(this->PendingImportedPackages).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FAsyncPackage_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FAsyncPackage_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FAsyncPackage_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PendingImportedPackages);
  DestructItems<FAsyncPackage::FCompletionCallback,int>
            ((FCompletionCallback *)(this->CompletionCallbacks).AllocatorInstance.Data,
             (this->CompletionCallbacks).ArrayNum);
  pFVar9 = (this->CompletionCallbacks).AllocatorInstance.Data;
  if (pFVar9 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar9);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Desc).InstancingContext.SharedData.SharedReferenceCount.ReferenceController);
  this_00 = (TDelegateBase<FNotThreadSafeDelegateMode> *)(this->Desc).PackageLoadedDelegate.Ptr;
  if (this_00 != (TDelegateBase<FNotThreadSafeDelegateMode> *)0x0) {
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(this_00);
    ::operator_delete(this_00,0x18);
  }
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)this);
  return;
}

// AddArc @ 141eda210

/* WARNING: Enum "EEventLoadNode": Some values do not have unique names */

void __thiscall
FAsyncPackage::AddArc(FAsyncPackage *this,FEventLoadNodePtr *param_1,FEventLoadNodePtr *param_2)

{
  FEventLoadGraph::AddArc(&this->AsyncLoadingThread->EventGraph,param_1,param_2);
  return;
}

// AddCompletionCallback @ 141eda7f0

void __thiscall
FAsyncPackage::AddCompletionCallback
          (FAsyncPackage *this,
          TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>
          *param_1,bool param_2)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  iVar2 = (this->CompletionCallbacks).ArrayNum;
  piVar1 = &(this->CompletionCallbacks).ArrayMax;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->CompletionCallbacks).AllocatorInstance,piVar1);
  }
  (this->CompletionCallbacks).ArrayNum = iVar2 + 1;
  pFVar3 = (this->CompletionCallbacks).AllocatorInstance.Data + (longlong)iVar2 * 0x10;
  *pFVar3 = (FScriptContainerElement)param_2;
  pFVar3[1] = (FScriptContainerElement)0x0;
  *(TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
    **)(pFVar3 + 8) = param_1->Ptr;
  param_1->Ptr = (TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
                  *)0x0;
  return;
}

// AddDependencyTree @ 141eda860

void __thiscall
FAsyncPackage::AddDependencyTree
          (FAsyncPackage *this,FAsyncPackage *param_1,
          TSet<FAsyncPackage_*,DefaultKeyFuncs<FAsyncPackage_*,0>,FDefaultSetAllocator> *param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  uint uVar3;
  FAsyncPackage *pFVar4;
  code *pcVar5;
  TMap<FName,FAsyncPackage_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>_>
  *pTVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  ForElementType<FSetElementId> FVar10;
  int iVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint uVar14;
  uint *puVar15;
  undefined1 local_res10 [8];
  int local_res18;
  FAsyncPackage *local_res20;
  FAsyncPackage *local_b8;
  TMap<FName,FAsyncPackage_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>_>
  *local_b0;
  int iStack_a8;
  uint uStack_a4;
  undefined1 *local_a0;
  undefined4 uStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  TMap<FName,FAsyncPackage_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>_>
  *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  
  uVar14 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
           -0x7a143595;
  uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
  if (*(int *)&(param_2->Elements).field_0x8 != *(int *)&(param_2->Elements).field_0x34) {
    FVar10 = (param_2->Hash).SecondaryData;
    if (FVar10 == (ForElementType<FSetElementId>)0x0) {
      FVar10 = (ForElementType<FSetElementId>)&param_2->Hash;
    }
    iVar8 = *(int *)((longlong)FVar10 +
                    (ulonglong)(param_2->HashSize - 1U & (uVar14 >> 0x10 ^ uVar14)) * 4);
    if (iVar8 != -1) {
      do {
        if (*(FAsyncPackage **)(*(longlong *)&param_2->Elements + (longlong)iVar8 * 0x10) == param_1
           ) {
          return;
        }
        iVar8 = *(int *)(*(longlong *)&param_2->Elements + 8 + (longlong)iVar8 * 0x10);
      } while (iVar8 != -1);
    }
  }
  iStack_a8 = 0;
  local_b0 = &param_1->PendingImportedPackages;
  uStack_a4 = 1;
  puVar2 = &(param_1->PendingImportedPackages).field_0x10;
  iVar8 = *(int *)&(param_1->PendingImportedPackages).field_0x28;
  iStack_94 = iStack_a8;
  local_90 = iStack_a8;
  if (iVar8 != 0) {
    puVar15 = *(uint **)&(param_1->PendingImportedPackages).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar2;
    }
    uVar14 = *puVar15;
    while (uVar14 == 0) {
      lVar9 = (longlong)iStack_a8;
      local_90 = local_90 + 0x20;
      iStack_a8 = iStack_a8 + 1;
      iStack_94 = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a8) goto LAB_141eda9ae;
      uVar14 = puVar15[lVar9 + 1];
    }
    uStack_a4 = -uVar14 & uVar14;
    uVar1 = (ulonglong)uStack_a4 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res18 = (int)lVar9;
    iStack_94 = local_90 + -1 + local_res18;
    if (iVar8 < iStack_94) {
      iStack_94 = iVar8;
    }
  }
LAB_141eda9ae:
  uVar14 = *(uint *)&(param_1->PendingImportedPackages).field_0x28;
  uVar12 = uVar14 & 0xffffffe0;
  iStack_88 = *(int *)&(param_1->PendingImportedPackages).field_0x8 -
              *(int *)&(param_1->PendingImportedPackages).field_0x34;
  uStack_98 = 0xffffffff;
  TStack_78._padding_ = CONCAT44(uStack_a4,iStack_a8);
  TStack_78.CurrentBitIndex = iStack_94;
  TStack_78.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar14 >> 5;
  TStack_78._28_4_ = iStack_94;
  TStack_78.BaseBitIndex = local_90;
  uStack_58 = CONCAT44(uStack_84,iStack_88);
  local_a0 = puVar2;
  iStack_8c = iStack_94;
  local_80 = local_b0;
  TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar14 < 0) || (iVar8 < (int)uVar14)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar3 = *(uint *)&(param_1->PendingImportedPackages).field_0x28;
  if (uVar14 != uVar3) {
    puVar13 = *(undefined1 **)&(param_1->PendingImportedPackages).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar2;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar11 * 4);
    while (uVar14 == 0) {
      lVar9 = (longlong)iVar11;
      uVar12 = uVar12 + 0x20;
      iVar11 = iVar11 + 1;
      uVar14 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_141edaaa9;
      uVar14 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar14 = (int)lVar9 + -1 + uVar12;
    if ((int)uVar3 < (int)uVar14) {
      uVar14 = uVar3;
    }
  }
LAB_141edaaa9:
  while( true ) {
    pTVar6 = local_80;
    if (*(int *)&local_80->field_0x8 - *(int *)&local_80->field_0x34 != (int)uStack_58) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FAsyncPackage_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_78.CurrentBitIndex == uVar14) &&
        (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
       (pTVar6 == &param_1->PendingImportedPackages)) break;
    pFVar4 = *(FAsyncPackage **)
              (*(longlong *)pTVar6 + 8 + (longlong)TStack_78.CurrentBitIndex * 0x18);
    bVar7 = AddUniqueLinkerDependencyPackage(this,pFVar4);
    if (!bVar7) {
      AddDependencyTree(this,pFVar4,param_2);
    }
    TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
  }
  local_b8 = param_1;
  TSet<FAsyncPackage_*,DefaultKeyFuncs<FAsyncPackage_*,0>,FDefaultSetAllocator>::
  Emplace<FAsyncPackage_*>(param_2,&local_res20,(bool *)&local_b8);
  return;
}

// AddDependentRequests @ 141edab80

void __thiscall
FAsyncPackage::AddDependentRequests(FAsyncPackage *this,TArrayView<int_const_,int> *param_1)

{
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_00;
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int local_res8 [2];
  int local_res10 [2];
  
  AcquireSRWLockExclusive((PSRWLOCK)&this->DependentRequestsLock);
  this_00 = &this->DependentRequests;
  uVar6 = *(int *)&(this->DependentRequests).Elements.field_0x8 -
          *(int *)&(this->DependentRequests).Elements.field_0x34;
  iVar3 = param_1->ArrayNum;
  uVar8 = iVar3 + uVar6;
  if (uVar6 < uVar8) {
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar8);
    }
    TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this_00,uVar8);
    if (uVar8 < 4) {
      iVar7 = 1;
    }
    else {
      uVar2 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
      lVar5 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar5 & 0x1f);
    }
    iVar4 = (this->DependentRequests).HashSize;
    if ((iVar4 == 0) || (iVar4 < iVar7)) {
      (this->DependentRequests).HashSize = iVar7;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash(this_00);
    }
  }
  piVar9 = param_1->DataPtr;
  piVar1 = piVar9 + iVar3;
  for (; piVar9 != piVar1; piVar9 = piVar9 + 1) {
    local_res8[0] = *piVar9;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (this_00,local_res10,(bool *)local_res8);
  }
                    /* WARNING: Could not recover jumptable at 0x000141edac57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&this->DependentRequestsLock);
  return;
}

// AddDependentRequestsTo @ 141edac70

void __thiscall FAsyncPackage::AddDependentRequestsTo(FAsyncPackage *this,FAsyncPackage *param_1)

{
  code *pcVar1;
  bool bVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  undefined4 uStack_3c;
  TArray<int,TSizedDefaultAllocator<32>_> local_38;
  TArrayView<int_const_,int> local_28;
  TArray<int,TSizedDefaultAllocator<32>_> local_18;
  
  pFVar4 = (FScriptContainerElement *)0x0;
  iVar5 = 0;
  AcquireSRWLockShared((PSRWLOCK)&this->DependentRequestsLock);
  pTVar3 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array
                     (&this->DependentRequests,&local_38);
  if (&local_18 != pTVar3) {
    pFVar4 = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    iVar5 = pTVar3->ArrayNum;
    pTVar3->ArrayNum = 0;
    pTVar3->ArrayMax = 0;
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  ReleaseSRWLockShared((PSRWLOCK)&this->DependentRequestsLock);
  if (iVar5 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_28._12_4_ = uStack_3c;
  local_28.ArrayNum = iVar5;
  local_28.DataPtr = (int *)pFVar4;
  AddDependentRequests(param_1,&local_28);
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return;
}

// AddImportDependency @ 141edb010

void __thiscall
FAsyncPackage::AddImportDependency
          (FAsyncPackage *this,FName *param_1,FName *param_2,FLinkerInstancingContext *param_3)

{
  int *piVar1;
  TArray<FAsyncPackage_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>
  TVar5;
  bool bVar6;
  int iVar7;
  TTuple<FName,FAsyncPackage_*> *pTVar8;
  FAsyncPackage *this_00;
  FAsyncPackage *pFVar9;
  undefined8 *puVar10;
  ulong64 uVar11;
  FName FVar12;
  FAsyncPackage *local_108;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_100;
  FDelegateAllocation local_f8;
  FPackagePath local_e8;
  undefined8 local_d8;
  FSharedReferencer<1> local_d0;
  FAsyncPackageDesc local_c8;
  FName *local_88;
  FAsyncPackage **local_80;
  FDestructionSentinel local_78;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  pTVar8 = TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
                   *)&this->AsyncLoadingThread->AsyncPackageNameLookup,*param_1);
  pFVar9 = (FAsyncPackage *)0x0;
  local_108 = pFVar9;
  if (pTVar8 != (TTuple<FName,FAsyncPackage_*> *)0x0) {
    local_108 = *(FAsyncPackage **)&pTVar8->field_0x8;
  }
  if (local_108 == (FAsyncPackage *)0x0) {
    FVar12 = *param_2;
    if (FVar12 == (FName)0x0) {
      FVar12 = *param_1;
    }
    FPackagePath::FromPackageNameChecked(&local_e8,FVar12);
    local_c8.Name = *param_1;
    local_c8.PackagePath.PackageName = local_e8.PackageName;
    local_c8.PackagePath.HeaderExtension = local_e8.HeaderExtension;
    local_c8.RequestID = -1;
    local_c8.PackageLoadedDelegate.Ptr =
         (TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
          *)0x0;
    local_c8.PackageFlags = PKG_None;
    local_c8.Priority = 0;
    local_c8.PIEInstanceID = -1;
    FLinkerInstancingContext::FLinkerInstancingContext(&local_c8.InstancingContext);
    if ((local_c8.PackagePath.PackageName == (FName)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!PackagePath.IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncPackage.h"
                           ,0x3a,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_c8.InstancingContext.SharedData.Object = (param_3->SharedData).Object;
    local_d0.ReferenceController = (param_3->SharedData).SharedReferenceCount.ReferenceController;
    (param_3->SharedData).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (param_3->SharedData).Object = (FSharedLinkerInstancingContextData *)0x0;
    local_d8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_c8.InstancingContext.SharedData.SharedReferenceCount,&local_d0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d0.ReferenceController);
    this_00 = ::operator_new(0x608);
    if (this_00 != (FAsyncPackage *)0x0) {
      pFVar9 = FAsyncPackage(this_00,this->AsyncLoadingThread,&local_c8,
                             this->EDLBootNotificationManager);
    }
    if ((pFVar9->Desc).Priority == 0) {
      (pFVar9->Desc).Priority = (this->Desc).Priority;
    }
    local_108 = pFVar9;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c8.InstancingContext.SharedData.SharedReferenceCount.ReferenceController);
    TVar5.Ptr = local_c8.PackageLoadedDelegate.Ptr;
    if (local_c8.PackageLoadedDelegate.Ptr !=
        (TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
         *)0x0) {
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_c8.PackageLoadedDelegate.Ptr);
      ::operator_delete(TVar5.Ptr,0x18);
    }
    FLoadTimeProfilerTracePrivate::OutputAsyncPackageImportDependency(this,local_108);
    FAsyncLoadingThread::InsertPackage
              (this->AsyncLoadingThread,local_108,false,InsertBeforeMatchingPriorities);
  }
  AddDependentRequestsTo(this,local_108);
  if ((local_108->bLoadHasFinished == false) && (local_108->bLoadHasFailed == false)) {
    local_100.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_f8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_f8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_100,(FWriteAccessScope *)&local_48);
    local_30 = &local_f8;
    puVar10 = UE::Core::Private::DelegateAllocate(0x28,&local_f8);
    if (puVar10 != (undefined8 *)0x0) {
      *puVar10 = &
                 ___7__TCommonDelegateInstanceState___A6AXAEBVFName__PEAVUPackage__W4Type_EAsyncLoadingResult___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar11 = FDelegateHandle::GenerateNewID();
      puVar10[2] = uVar11;
      *puVar10 = &
                 ___7__TBaseRawMethodDelegateInstance__0A_UFAsyncPackage____A6AXAEBVFName__PEAVUPackage__W4Type_EAsyncLoadingResult___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar10[4] = ImportPreLoadedAsyncCallback;
      puVar10[3] = this;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    puVar10 = ::operator_new(0x18);
    if (puVar10 == (undefined8 *)0x0) {
      puVar10 = (undefined8 *)0x0;
    }
    else {
      *puVar10 = 0;
      puVar10[1] = 0;
      *(undefined4 *)(puVar10 + 2) = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_100,(FWriteAccessScope *)&local_78);
      if ((void *)puVar10[1] != (void *)0x0) {
        FMemory::Free((void *)puVar10[1]);
      }
      *(ForElementType<TAlignedBytes<16,16>_> *)(puVar10 + 1) = local_f8.DelegateAllocator;
      local_f8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      *(int *)(puVar10 + 2) = local_f8.DelegateSize;
      local_f8.DelegateSize = 0;
      if (local_78.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_100,(FWriteAccessScope *)&local_60);
    if ((local_f8.DelegateSize != 0) &&
       (local_f8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_f8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_f8,0,0,0x10);
      local_f8.DelegateSize = 0;
    }
    if (local_60.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
    }
    if (local_f8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_f8.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_100.AccessDetector);
    pFVar9 = local_108;
    piVar1 = &(local_108->CompletionCallbacks).ArrayMax;
    iVar7 = (local_108->CompletionCallbacks).ArrayNum;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(local_108->CompletionCallbacks).AllocatorInstance,piVar1);
    }
    (pFVar9->CompletionCallbacks).ArrayNum = iVar7 + 1;
    pFVar3 = (pFVar9->CompletionCallbacks).AllocatorInstance.Data;
    *(undefined2 *)(pFVar3 + (longlong)iVar7 * 0x10) = 1;
    *(undefined8 **)(pFVar3 + (longlong)iVar7 * 0x10 + 8) = puVar10;
    LOCK();
    (local_108->DependencyRefCount).Counter = (local_108->DependencyRefCount).Counter + 1;
    UNLOCK();
    local_88 = &(local_108->Desc).Name;
    local_80 = &local_108;
    TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,FAsyncPackage_*_&>_>
              ((TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
                *)&this->PendingImportedPackages,
               (TPairInitializer<FName_const_&,FAsyncPackage_*_&> *)&stack0x00000008,
               (bool *)&local_88);
  }
  else {
    LOCK();
    (local_108->DependencyRefCount).Counter = (local_108->DependencyRefCount).Counter + 1;
    UNLOCK();
    pTVar2 = &this->ReferencedImports;
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if ((pFVar3 <= (FScriptContainerElement *)&local_108) &&
       (((FScriptContainerElement *)&local_108 <
         pFVar3 + (longlong)(this->ReferencedImports).ArrayMax * 8 &&
        (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar6)))) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar7 = (this->ReferencedImports).ArrayNum;
    piVar1 = &(this->ReferencedImports).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->ReferencedImports).ArrayNum = iVar7 + 1;
    *(FAsyncPackage **)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_108;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedData).SharedReferenceCount.ReferenceController);
  return;
}

// AddNode @ 141edb480

/* WARNING: Enum "EEventLoadNode": Some values do not have unique names */

FEventLoadNodePtr * __thiscall
FAsyncPackage::AddNode
          (FAsyncPackage *this,FEventLoadNodePtr *__return_storage_ptr__,EEventLoadNode param_1,
          FPackageIndex param_2,bool param_3,int param_4)

{
  (__return_storage_ptr__->WaitingPackage).Package = this;
  (__return_storage_ptr__->ImportOrExportIndex).Index = param_2.Index;
  __return_storage_ptr__->Phase = param_1;
  FEventLoadGraph::AddNode
            (&this->AsyncLoadingThread->EventGraph,__return_storage_ptr__,param_3,param_4);
  return __return_storage_ptr__;
}

// AddObjectReference @ 141edbaa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAsyncPackage::AddObjectReference(FAsyncPackage *this,UObject *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar1;
  int iVar2;
  FUObjectItem *pFVar3;
  uint uVar4;
  TObjectPtr<UObject_const_>_u_0 local_res10;
  UObject *local_res18;
  FString local_38;
  FString local_28;
  
  if (param_1 != (UObject *)0x0) {
    bVar1 = IsInGameThread();
    if ((!bVar1) && (bVar1 = IsGarbageCollectionLocked(), !bVar1)) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_38,(UObject *)0x0,None);
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    lpCriticalSection = &this->ReferencedObjectsCritical;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_res10.DebugPtr = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (UE::GC::MarkAsReachable(param_1), UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable(param_1);
    }
    uVar4 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    iVar2 = TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
            FindIndexByHash<TObjectPtr<UObject_const_>_>
                      (&this->ReferencedObjects,uVar4 >> 0x10 ^ uVar4,
                       (TObjectPtr<UObject_const_> *)&local_res10.ObjectPtr);
    if (iVar2 == -1) {
      local_res18 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(param_1);
      }
      TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
      Emplace<TObjectPtr<UObject>_>
                (&this->ReferencedObjects,(TObjectPtr<UObject> *)&local_res10.ObjectPtr,
                 (bool *)&local_res18);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar3 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&param_1->field_0xc);
    if (((uint)((ulonglong)(pFVar3->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) != 0) {
      ::FName::ToString(&(this->Desc).Name,&local_28);
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_38,(UObject *)0x0,None);
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// AddReferencedObjects @ 141edbd70

void __thiscall
FAsyncPackage::AddReferencedObjects(FAsyncPackage *this,FReferenceCollector *param_1)

{
  (**(code **)(param_1->_padding_ + 0x50))(param_1,0);
  FReferenceCollector::AddReferencedObjects<UObject>
            (param_1,&this->ReferencedObjects,(UObject *)0x0,(FProperty *)0x0);
  (**(code **)(param_1->_padding_ + 0x90))
            (param_1,(this->DeferredFinalizeObjects).AllocatorInstance.Data,
             (this->DeferredFinalizeObjects).ArrayNum,0,0);
  (**(code **)(param_1->_padding_ + 0x90))
            (param_1,(this->PackageObjLoaded).AllocatorInstance.Data,
             (this->PackageObjLoaded).ArrayNum,0,0);
  FReferenceCollector::AddReferencedObjects<UPackage>
            (param_1,&this->ImportedPackages,(UObject *)0x0,(FProperty *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000141edbe13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x50))(param_1,1);
  return;
}

// AddRequestID @ 141edbe20

void __thiscall FAsyncPackage::AddRequestID(FAsyncPackage *this,int param_1)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  TPairInitializer<int_const_&,int_const_&> local_28;
  int *local_18;
  
  if (0 < param_1) {
    iVar6 = (this->Desc).RequestID;
    local_res10[0] = param_1;
    if (iVar6 == -1) {
      (this->Desc).RequestID = param_1;
    }
    else if (iVar6 != param_1) {
      local_28.Value = local_res18;
      local_18 = local_res20;
      local_res18[0] = param_1;
      local_res20[0] = iVar6;
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<int_const_&,int_const_&>_>
                ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                  *)&this->AsyncLoadingThread->DuplicateRequestMap,&local_28,(bool *)&local_28.Value
                );
    }
    pTVar2 = &this->RequestIDs;
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)local_res10) &&
        ((FScriptContainerElement *)local_res10 < pFVar3 + (longlong)(this->RequestIDs).ArrayMax * 4
        )) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = (this->RequestIDs).ArrayNum;
    piVar1 = &(this->RequestIDs).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->RequestIDs).ArrayNum = iVar6 + 1;
    *(int *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_res10[0];
    FAsyncLoadingThread::AddPendingRequest(this->AsyncLoadingThread,local_res10[0]);
    FLoadTimeProfilerTracePrivate::OutputAsyncPackageRequestAssociation
              (this,(longlong)local_res10[0]);
  }
  return;
}

// AddUniqueLinkerDependencyPackage @ 141edc3c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FAsyncPackage::AddUniqueLinkerDependencyPackage(FAsyncPackage *this,FAsyncPackage *param_1)

{
  FName FVar1;
  uint uVar2;
  int iVar3;
  FLinkerInstancingContext *pFVar4;
  undefined1 *puVar5;
  bool bVar6;
  FName local_res8;
  FString local_18;
  
  FVar1 = (param_1->Desc).Name;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)&(this->PendingImportedPackages).field_0x8 !=
      *(int *)&(this->PendingImportedPackages).field_0x34) {
    puVar5 = *(undefined1 **)&(this->PendingImportedPackages).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->PendingImportedPackages).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->PendingImportedPackages).field_0x48 - 1U &
                              FVar1.Number + uVar2) * 4);
    if (iVar3 != -1) {
      do {
        if (*(FName *)(*(longlong *)&this->PendingImportedPackages + (longlong)iVar3 * 0x18) ==
            FVar1) goto LAB_141edc4d3;
        iVar3 = *(int *)(*(longlong *)&this->PendingImportedPackages + 0x10 + (longlong)iVar3 * 0x18
                        );
      } while (iVar3 != -1);
    }
  }
  if ((param_1->Linker == (FLinkerLoad *)0x0) || (!param_1->Linker->bHasFinishedInitialization)) {
    pFVar4 = FLinkerInstancingContext::FLinkerInstancingContext
                       ((FLinkerInstancingContext *)&local_18);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    AddImportDependency(this,&(param_1->Desc).Name,&local_res8,pFVar4);
    if (5 < (byte)LogStreaming._0_1_) {
      ::FName::ToString(&(param_1->Desc).Name,&local_18);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
LAB_141edc4d3:
    bVar6 = true;
  }
  else {
    bVar6 = this == param_1;
  }
  return bVar6;
}

// AnyImportsAndExportWorkOutstanding @ 141edca40

bool __thiscall FAsyncPackage::AnyImportsAndExportWorkOutstanding(FAsyncPackage *this)

{
  if ((((*(int *)&(this->ImportsThatAreNowCreated).field_0x8 == 0) &&
       (*(int *)&(this->ImportsThatAreNowSerialized).field_0x8 == 0)) &&
      (*(int *)&(this->ExportsThatCanBeCreated).field_0x8 == 0)) &&
     (((*(int *)&(this->ExportsThatCanHaveIOStarted).field_0x8 == 0 &&
       (*(int *)&(this->ExportsThatCanBeSerialized).field_0x8 == 0)) &&
      ((this->ReadyPrecacheRequests).ArrayNum == 0)))) {
    return false;
  }
  return true;
}

// AreAllDependenciesFullyLoaded @ 141edcfb0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FAsyncPackage::AreAllDependenciesFullyLoaded
          (FAsyncPackage *this,
          TSet<UPackage_*,DefaultKeyFuncs<UPackage_*,0>,FDefaultSetAllocator> *param_1)

{
  bool bVar1;
  FString local_18;
  
  if (*(int *)&(param_1->Elements).field_0x8 != *(int *)&(param_1->Elements).field_0x34) {
    TSet<UPackage_*,DefaultKeyFuncs<UPackage_*,0>,FDefaultSetAllocator>::UnhashElements(param_1);
    *(undefined4 *)&(param_1->Elements).field_0x8 = 0;
    if (*(int *)&(param_1->Elements).field_0xc < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)param_1,0,(int *)&(param_1->Elements).field_0xc);
    }
    *(undefined4 *)&(param_1->Elements).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->Elements).field_0x34 = 0;
    *(undefined4 *)&(param_1->Elements).field_0x28 = 0;
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  bVar1 = AreAllDependenciesFullyLoadedInternal(this,param_1,&local_18);
  if ((!bVar1) && (5 < (byte)LogStreaming._0_1_)) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// AreAllDependenciesFullyLoadedInternal @ 141edd090

bool __cdecl
FAsyncPackage::AreAllDependenciesFullyLoadedInternal
          (FAsyncPackage *param_1,
          TSet<UPackage_*,DefaultKeyFuncs<UPackage_*,0>,FDefaultSetAllocator> *param_2,
          FString *param_3)

{
  ulonglong uVar1;
  uint uVar2;
  UPackage *pUVar3;
  ForElementType<FSetElementId> FVar4;
  void *pvVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  TSet<TObjectPtr<UPackage>,DefaultKeyFuncs<TObjectPtr<UPackage>,0>,FDefaultSetAllocator> *pTVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  FLinkerLoad *pFVar12;
  FString *pFVar13;
  longlong lVar14;
  ForElementType<FSetElementId> FVar15;
  int iVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  ForElementType<unsigned_int> FVar20;
  uint *puVar21;
  undefined1 local_res20 [8];
  undefined1 local_158 [4];
  uint local_154;
  ForElementType<unsigned_int> local_150;
  FString local_148;
  FString local_138;
  FString local_128;
  TSet<TObjectPtr<UPackage>,DefaultKeyFuncs<TObjectPtr<UPackage>,0>,FDefaultSetAllocator> *local_118
  ;
  int iStack_110;
  uint uStack_10c;
  undefined1 *local_108;
  undefined4 uStack_100;
  int iStack_fc;
  int local_f8;
  int iStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  int local_e8;
  undefined1 local_e4 [12];
  UPackage *local_d8;
  TSet<TObjectPtr<UPackage>,DefaultKeyFuncs<TObjectPtr<UPackage>,0>,FDefaultSetAllocator> *local_d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c8;
  undefined8 uStack_a8;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  
  local_150 = (ForElementType<unsigned_int>)&(param_1->ImportedPackages).Elements.field_0x10;
  iVar11 = *(int *)&(param_1->ImportedPackages).Elements.field_0x28;
  local_118 = &param_1->ImportedPackages;
  iStack_110 = 0;
  uStack_10c = 1;
  iStack_fc = iStack_110;
  local_f8 = iStack_110;
  if (iVar11 != 0) {
    puVar21 = *(uint **)&(param_1->ImportedPackages).Elements.field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)local_150;
    }
    uVar19 = *puVar21;
    iStack_110 = 0;
    local_f8 = 0;
    while (uVar19 == 0) {
      lVar14 = (longlong)iStack_110;
      local_f8 = local_f8 + 0x20;
      iStack_110 = iStack_110 + 1;
      iStack_fc = iVar11;
      if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_110) goto LAB_141edd152;
      uVar19 = (puVar21 + 1)[lVar14];
    }
    uStack_10c = -uVar19 & uVar19;
    uVar1 = (ulonglong)uStack_10c * 2 + 1;
    lVar14 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_e8 = (int)lVar14;
    iStack_fc = local_f8 + -1 + local_e8;
    if (iVar11 < iStack_fc) {
      iStack_fc = iVar11;
    }
  }
LAB_141edd152:
  iStack_f0 = *(int *)&(param_1->ImportedPackages).Elements.field_0x8 -
              *(int *)&(param_1->ImportedPackages).Elements.field_0x34;
  uVar19 = *(uint *)&(param_1->ImportedPackages).Elements.field_0x28;
  uStack_100 = 0xffffffff;
  TStack_c8._padding_ = CONCAT44(uStack_10c,iStack_110);
  uVar17 = uVar19 & 0xffffffe0;
  TStack_c8.CurrentBitIndex = iStack_fc;
  TStack_c8.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar19 >> 5;
  TStack_c8._28_4_ = iStack_fc;
  TStack_c8.BaseBitIndex = local_f8;
  uStack_a8 = CONCAT44(uStack_ec,iStack_f0);
  local_154 = uVar19;
  local_108 = (undefined1 *)local_150;
  iStack_f4 = iStack_fc;
  local_e4._4_8_ = local_118;
  local_d0 = local_118;
  TStack_c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_150;
  if ((((int)uVar19 < 0) || (iVar11 < (int)uVar19)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    uVar10 = (*pcVar7)();
    return (bool)uVar10;
  }
  uVar2 = *(int *)((longlong)local_150 + 0x18);
  if (uVar19 != uVar2) {
    FVar20 = *(ForElementType<unsigned_int> *)((longlong)local_150 + 0x10);
    if (*(ForElementType<unsigned_int> *)((longlong)local_150 + 0x10) ==
        (ForElementType<unsigned_int>)0x0) {
      FVar20 = local_150;
    }
    uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)((longlong)FVar20 + (longlong)iVar16 * 4);
    while (uVar19 == 0) {
      lVar14 = (longlong)iVar16;
      uVar17 = uVar17 + 0x20;
      iVar16 = iVar16 + 1;
      uVar19 = uVar2;
      local_154 = uVar2;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_141edd270;
      uVar19 = *(uint *)((undefined1 *)((longlong)FVar20 + 4) + lVar14 * 4);
    }
    uVar1 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar19 = (int)lVar14 + -1 + uVar17;
    local_154 = uVar19;
    if ((int)uVar2 < (int)uVar19) {
      uVar19 = uVar2;
      local_154 = uVar2;
    }
  }
LAB_141edd270:
  do {
    pTVar8 = local_d0;
    if (*(int *)&(local_d0->Elements).field_0x8 - *(int *)&(local_d0->Elements).field_0x34 !=
        (int)uStack_a8) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UPackage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_c8.CurrentBitIndex == uVar19) &&
        ((ForElementType<unsigned_int>)TStack_c8.Array == local_150)) &&
       (pTVar8 == (TSet<TObjectPtr<UPackage>,DefaultKeyFuncs<TObjectPtr<UPackage>,0>,FDefaultSetAllocator>
                   *)local_e4._4_8_)) {
      return true;
    }
    pUVar3 = *(UPackage **)
              (*(longlong *)&pTVar8->Elements + (longlong)TStack_c8.CurrentBitIndex * 0x10);
    local_d8 = pUVar3;
    if (pUVar3 != (UPackage *)0x0) {
      uVar17 = ((uint)((ulonglong)pUVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar3 >> 4)) *
               -0x7a143595;
      uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
      if (*(int *)&(param_2->Elements).field_0x8 != *(int *)&(param_2->Elements).field_0x34) {
        FVar4 = (param_2->Hash).SecondaryData;
        FVar15 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar15 = FVar4;
        }
        iVar11 = *(int *)((longlong)FVar15 +
                         (ulonglong)(param_2->HashSize - 1U & (uVar17 >> 0x10 ^ uVar17)) * 4);
        if (iVar11 != -1) {
          do {
            if (*(UPackage **)(*(longlong *)&param_2->Elements + (longlong)iVar11 * 0x10) == pUVar3)
            goto LAB_141edd3ed;
            iVar11 = *(int *)(*(longlong *)&param_2->Elements + 8 + (longlong)iVar11 * 0x10);
          } while (iVar11 != -1);
        }
      }
      TSet<UPackage_*,DefaultKeyFuncs<UPackage_*,0>,FDefaultSetAllocator>::
      Emplace<UPackage_*_const_&>(param_2,(UPackage **)local_e4,(bool *)&local_d8);
      pFVar12 = FLinkerLoad::FindExistingLinkerForPackage(pUVar3);
      if ((pFVar12 != (FLinkerLoad *)0x0) && (pvVar5 = pFVar12->AsyncRoot, pvVar5 != (void *)0x0)) {
        if (*(char *)((longlong)pvVar5 + 0x59a) == '\0') {
          ::FName::ToString(&(param_1->Desc).Name,&local_50);
          ::FString::PrintfImpl(&local_128,L"%s Doesn\'t have all exports Serialized");
          if (param_3 != &local_128) {
            pFVar6 = (param_3->Data).AllocatorInstance.Data;
            if (pFVar6 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar6);
            }
            (param_3->Data).AllocatorInstance.Data = local_128.Data.AllocatorInstance.Data;
            (param_3->Data).ArrayNum = local_128.Data.ArrayNum;
            (param_3->Data).ArrayMax = local_128.Data.ArrayMax;
            local_128.Data.ArrayNum = 0;
            local_128.Data.ArrayMax = 0;
            local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          }
          if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_128.Data.AllocatorInstance.Data);
          }
          goto LAB_141edd644;
        }
        if (*(int *)((longlong)pvVar5 + 0xf8) < *(int *)((longlong)pvVar5 + 0x148)) {
          ::FName::ToString(&(param_1->Desc).Name,&local_60);
          ::FString::PrintfImpl
                    (&local_90,L"%s Doesn\'t have all objects processed by DeferredPostLoad");
          ::FString::operator=(param_3,&local_90);
          local_50.Data.AllocatorInstance.Data = local_60.Data.AllocatorInstance.Data;
          if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_90.Data.AllocatorInstance.Data);
            local_50.Data.AllocatorInstance.Data = local_60.Data.AllocatorInstance.Data;
          }
          goto LAB_141edd644;
        }
        iVar11 = (int)pFVar12->_padding_;
        lVar14 = pFVar12->_padding_;
        lVar18 = (longlong)iVar11 * 0x68 + lVar14;
        while( true ) {
          if ((int)pFVar12->_padding_ != iVar11) {
            `TCheckedPointerIterator<FObjectExport,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_158);
          }
          if (lVar14 == lVar18) break;
          if ((*(longlong *)(lVar14 + 0x40) != 0) &&
             ((*(uint *)(*(longlong *)(lVar14 + 0x40) + 8) & 0x1400) != 0)) {
            UObjectBaseUtility::GetFullName
                      (*(UObjectBaseUtility **)(lVar14 + 0x40),&local_80,(UObject *)0x0,None);
            ::FString::PrintfImpl(&local_148,L"%s has not been %s");
            if (param_3 != &local_148) {
              pFVar6 = (param_3->Data).AllocatorInstance.Data;
              if (pFVar6 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar6);
              }
              (param_3->Data).AllocatorInstance.Data = local_148.Data.AllocatorInstance.Data;
              (param_3->Data).ArrayNum = local_148.Data.ArrayNum;
              (param_3->Data).ArrayMax = local_148.Data.ArrayMax;
              local_148.Data.ArrayNum = 0;
              local_148.Data.ArrayMax = 0;
              local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            }
            local_50.Data.AllocatorInstance.Data = local_80.Data.AllocatorInstance.Data;
            if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_148.Data.AllocatorInstance.Data);
              local_50.Data.AllocatorInstance.Data = local_80.Data.AllocatorInstance.Data;
            }
            goto LAB_141edd644;
          }
          lVar14 = lVar14 + 0x68;
        }
        bVar9 = AreAllDependenciesFullyLoadedInternal(pFVar12->AsyncRoot,param_2,param_3);
        uVar19 = local_154;
        if (!bVar9) {
          pFVar13 = ::FName::ToString(&(param_1->Desc).Name,&local_70);
          ::FString::ConcatFC(&local_a0,pFVar13,L"->");
          ::FString::ConcatFF(&local_138,&local_a0,param_3);
          if (param_3 != &local_138) {
            pFVar6 = (param_3->Data).AllocatorInstance.Data;
            if (pFVar6 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar6);
            }
            (param_3->Data).AllocatorInstance.Data = local_138.Data.AllocatorInstance.Data;
            (param_3->Data).ArrayNum = local_138.Data.ArrayNum;
            (param_3->Data).ArrayMax = local_138.Data.ArrayMax;
            local_138.Data.ArrayNum = 0;
            local_138.Data.ArrayMax = 0;
            local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          }
          if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_138.Data.AllocatorInstance.Data);
          }
          local_50.Data.AllocatorInstance.Data = local_70.Data.AllocatorInstance.Data;
          if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a0.Data.AllocatorInstance.Data);
            local_50.Data.AllocatorInstance.Data = local_70.Data.AllocatorInstance.Data;
          }
LAB_141edd644:
          if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_50.Data.AllocatorInstance.Data);
          }
          return false;
        }
      }
    }
LAB_141edd3ed:
    TStack_c8.UnvisitedBitMask = TStack_c8.UnvisitedBitMask & ~TStack_c8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c8);
  } while( true );
}

// BeginAsyncLoad @ 141edd9f0

void __thiscall FAsyncPackage::BeginAsyncLoad(FAsyncPackage *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint *puVar4;
  FTlsAutoCleanup *pFVar5;
  undefined1 local_res10 [24];
  code *local_18;
  undefined1 *local_10;
  
  bVar3 = IsInGameThread();
  iVar1 = FAsyncLoadingThread::CurrentAsyncLoadingTickThreadIndex;
  if (bVar3) {
    iVar1 = this->AsyncLoadingThread->AsyncLoadingThreadIndex;
    LOCK();
    FAsyncLoadingThread::AsyncLoadingTickCounter.Counter =
         FAsyncLoadingThread::AsyncLoadingTickCounter.Counter + 1;
    UNLOCK();
    if (((FAsyncLoadingThread::CurrentAsyncLoadingTickThreadIndex != -1) &&
        (FAsyncLoadingThread::CurrentAsyncLoadingTickThreadIndex != iVar1)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("CurrentAsyncLoadingTickThreadIndex == INDEX_NONE || CurrentAsyncLoadingTickThreadIndex == ThreadIndex"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoadingThread.h"
                           ,0x1cb,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FAsyncLoadingThread::CurrentAsyncLoadingTickThreadIndex = iVar1;
  puVar4 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar5 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,puVar4);
  BeginLoad((FUObjectSerializeContext *)pFVar5[0x2f],(wchar_t *)0x0);
  return;
}

// CallCompletionCallbacks @ 141eddce0

void __thiscall
FAsyncPackage::CallCompletionCallbacks(FAsyncPackage *this,bool param_1,Type param_2)

{
  int iVar1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this_00;
  atomic<unsigned___int64> aVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  UPackage *pUVar5;
  undefined1 local_res8 [8];
  FReadAccessScope local_48;
  
  if (this->bLoadHasFailed == false) {
    pUVar5 = this->LinkerRoot;
  }
  else {
    pUVar5 = (UPackage *)0x0;
  }
  iVar1 = (this->CompletionCallbacks).ArrayNum;
  pFVar3 = (this->CompletionCallbacks).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->CompletionCallbacks).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FAsyncPackage::FCompletionCallback,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    if ((*pFVar3 == (FScriptContainerElement)param_1) && (pFVar3[1] == (FScriptContainerElement)0x0)
       ) {
      this_00 = *(TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> **)(pFVar3 + 8);
      pFVar3[1] = (FScriptContainerElement)0x1;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this_00,&local_48);
      if ((*(int *)&this_00[2].AccessDetector.State != 0) &&
         (aVar2 = this_00[1].AccessDetector.State, aVar2 != (atomic<unsigned___int64>)0x0)) {
        (**(code **)(*(longlong *)aVar2 + 0x68))(aVar2,&(this->Desc).Name,pUVar5,param_2);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_48);
    }
    pFVar3 = pFVar3 + 0x10;
  }
  return;
}

// Cancel @ 141edddc0

void __thiscall FAsyncPackage::Cancel(FAsyncPackage *this)

{
  int *piVar1;
  undefined1 *puVar2;
  TMap<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest,0>_>
  *this_00;
  TMap<int,IAsyncReadRequest_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,IAsyncReadRequest_*,0>_>
  *this_01;
  TSet<FWeakAsyncPackagePtr,DefaultKeyFuncs<FWeakAsyncPackagePtr,0>,FDefaultSetAllocator> *pTVar3;
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *pTVar4;
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar5;
  undefined8 *puVar6;
  void *_Src;
  FEventLoadNode *pFVar7;
  FScriptContainerElement *pFVar8;
  FTlsAutoCleanup FVar9;
  UPackage *pUVar10;
  code *pcVar11;
  FEventLoadNode *pFVar12;
  TMap<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest,0>_>
  *pTVar13;
  bool bVar14;
  uint uVar15;
  int iVar16;
  uint *puVar17;
  FTlsAutoCleanup *pFVar18;
  FName FVar19;
  UClass *pUVar20;
  FString *pFVar21;
  longlong lVar22;
  longlong *plVar23;
  ForAnyElementType *pFVar24;
  int iVar25;
  undefined1 *puVar26;
  int iVar27;
  uint uVar28;
  uint uVar29;
  wchar_t *pwVar30;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  int *in_stack_fffffffffffffee8;
  ulonglong uVar31;
  undefined8 uStack_f0;
  undefined8 local_d8;
  int iStack_d0;
  int iStack_cc;
  undefined8 local_c8;
  TMap<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest,0>_>
  *local_c0;
  undefined1 auStack_b8 [32];
  undefined8 uStack_98;
  code *local_90;
  undefined1 *local_88;
  undefined1 local_80 [8];
  FString local_78 [2];
  undefined4 local_4c;
  
  this->bLoadHasFailed = true;
  CallCompletionCallbacks(this,true,Canceled);
  CallCompletionCallbacks(this,false,Canceled);
  puVar2 = &(this->PrecacheRequests).field_0x10;
  iVar25 = 0;
  iVar5 = *(int *)&(this->PrecacheRequests).field_0x28;
  this_00 = &this->PrecacheRequests;
  iVar27 = 0;
  uVar15 = 1;
  iVar16 = 0;
  if (iVar5 != 0) {
    puVar17 = *(uint **)&(this->PrecacheRequests).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar2;
    }
    uVar28 = *puVar17;
    while (uVar28 == 0) {
      lVar22 = (longlong)iVar25;
      iVar27 = iVar27 + 0x20;
      iVar25 = iVar25 + 1;
      iVar16 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar25) goto LAB_141edde7f;
      uVar28 = puVar17[lVar22 + 1];
    }
    uVar15 = -uVar28 & uVar28;
    uVar31 = (ulonglong)uVar15 * 2 + 1;
    lVar22 = 0x3f;
    if (uVar31 != 0) {
      for (; uVar31 >> lVar22 == 0; lVar22 = lVar22 + -1) {
      }
    }
    local_res18 = (int)lVar22;
    iVar16 = iVar27 + -1 + local_res18;
    if (iVar5 < iVar16) {
      iVar16 = iVar5;
    }
  }
LAB_141edde7f:
  uVar28 = *(uint *)&(this->PrecacheRequests).field_0x28;
  uVar29 = uVar28 & 0xffffffe0;
  iStack_d0 = *(int *)&(this->PrecacheRequests).field_0x8 -
              *(int *)&(this->PrecacheRequests).field_0x34;
  uStack_f0 = CONCAT44(uVar15,iVar25);
  auStack_b8._20_4_ = iVar16;
  auStack_b8._16_4_ = 0xffffffff;
  local_d8 = (void *)CONCAT44(local_4c,iVar27);
  auStack_b8._0_8_ = uStack_f0;
  iVar25 = (int)uVar28 >> 5;
  uStack_98 = CONCAT44(iStack_cc,iStack_d0);
  auStack_b8._24_8_ = local_d8;
  local_c0 = this_00;
  auStack_b8._8_8_ = puVar2;
  if ((((int)uVar28 < 0) || (iVar5 < (int)uVar28)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar14)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  uVar15 = *(uint *)&(this->PrecacheRequests).field_0x28;
  if (uVar28 != uVar15) {
    puVar26 = *(undefined1 **)&(this->PrecacheRequests).field_0x20;
    if (puVar26 == (undefined1 *)0x0) {
      puVar26 = puVar2;
    }
    uVar28 = -1 << ((byte)uVar28 & 0x1f) & *(uint *)(puVar26 + (longlong)iVar25 * 4);
    while (uVar28 == 0) {
      lVar22 = (longlong)iVar25;
      uVar29 = uVar29 + 0x20;
      iVar25 = iVar25 + 1;
      uVar28 = uVar15;
      if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar25)
      goto LAB_141eddfa0;
      uVar28 = *(uint *)(puVar26 + lVar22 * 4 + 4);
    }
    uVar31 = (ulonglong)(-uVar28 & uVar28) * 2 + 1;
    lVar22 = 0x3f;
    if (uVar31 != 0) {
      for (; uVar31 >> lVar22 == 0; lVar22 = lVar22 + -1) {
      }
    }
    local_res20 = (int)lVar22;
    uVar28 = (uVar29 - 1) + local_res20;
    if ((int)uVar15 < (int)uVar28) {
      uVar28 = uVar15;
    }
  }
LAB_141eddfa0:
  while( true ) {
    pTVar13 = local_c0;
    if (*(int *)(&local_c0->field_0x0 + 8) - *(int *)(&local_c0->field_0x0 + 0x34) != (int)uStack_98
       ) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((auStack_b8._20_4_ == uVar28) && ((undefined1 *)auStack_b8._8_8_ == puVar2)) &&
       (pTVar13 == this_00)) break;
    plVar23 = (longlong *)
              ((longlong)(int)auStack_b8._20_4_ * 0x38 + *(longlong *)&pTVar13->field_0x0);
    puVar6 = (undefined8 *)*plVar23;
    local_d8 = (void *)0x0;
    iStack_d0 = (int)plVar23[5];
    lVar22 = (longlong)iStack_d0;
    _Src = (void *)plVar23[4];
    if (iStack_d0 == 0) {
      iStack_cc = 0;
    }
    else {
      in_stack_fffffffffffffee8 = (int *)&local_d8;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iStack_d0,0,(ForAnyElementType *)in_stack_fffffffffffffee8,iStack_d0,&iStack_cc
                );
      memcpy(local_d8,_Src,lVar22 << 2);
    }
    if (puVar6 != (undefined8 *)0x0) {
      (**(code **)*puVar6)(puVar6);
    }
    if (local_d8 != (void *)0x0) {
      FMemory::Free(local_d8);
    }
    auStack_b8._16_4_ = auStack_b8._16_4_ & ~auStack_b8._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
              ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_b8);
  }
  bVar14 = 1 < *(int *)&(this->PrecacheRequests).field_0x48;
  if (!bVar14) {
    TSet<TTuple<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->PrecacheRequests).field_0x8);
  puVar2 = &(this->PrecacheRequests).field_0xc;
  *(undefined4 *)&(this->PrecacheRequests).field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    in_stack_fffffffffffffee8 = (int *)((ulonglong)in_stack_fffffffffffffee8 & 0xffffffff00000000);
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,(ForAnyElementType *)this_00,0,(int *)puVar2);
  }
  *(undefined4 *)&(this->PrecacheRequests).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PrecacheRequests).field_0x34 = 0;
  iVar5 = *(int *)&(this->PrecacheRequests).field_0x2c;
  *(undefined4 *)&(this->PrecacheRequests).field_0x28 = 0;
  if ((iVar5 < 0) || (0x80 < iVar5)) {
    *(undefined4 *)&(this->PrecacheRequests).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->PrecacheRequests).field_0x10,0);
  }
  if (bVar14) {
    *(undefined4 *)&(this->PrecacheRequests).field_0x48 = 1;
    TSet<TTuple<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest,0>,FDefaultSetAllocator>
              *)this_00);
  }
  this_01 = &this->ExportIndexToPrecacheRequest;
  bVar14 = 1 < *(int *)&(this->ExportIndexToPrecacheRequest).field_0x48;
  if (!bVar14) {
    TSet<TTuple<int,IAsyncReadRequest_*>,TDefaultMapHashableKeyFuncs<int,IAsyncReadRequest_*,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<int,IAsyncReadRequest_*>,TDefaultMapHashableKeyFuncs<int,IAsyncReadRequest_*,0>,FDefaultSetAllocator>
                      *)this_01);
  }
  puVar2 = &(this->ExportIndexToPrecacheRequest).field_0xc;
  *(undefined4 *)&(this->ExportIndexToPrecacheRequest).field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    in_stack_fffffffffffffee8 = (int *)((ulonglong)in_stack_fffffffffffffee8 & 0xffffffff00000000);
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_01,0,(int *)puVar2);
  }
  *(undefined4 *)&(this->ExportIndexToPrecacheRequest).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ExportIndexToPrecacheRequest).field_0x34 = 0;
  iVar5 = *(int *)&(this->ExportIndexToPrecacheRequest).field_0x2c;
  *(undefined4 *)&(this->ExportIndexToPrecacheRequest).field_0x28 = 0;
  if ((iVar5 < 0) || (0x80 < iVar5)) {
    *(undefined4 *)&(this->ExportIndexToPrecacheRequest).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->ExportIndexToPrecacheRequest).field_0x10,0);
  }
  if (bVar14) {
    *(undefined4 *)&(this->ExportIndexToPrecacheRequest).field_0x48 = 1;
    TSet<TTuple<int,IAsyncReadRequest_*>,TDefaultMapHashableKeyFuncs<int,IAsyncReadRequest_*,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<int,IAsyncReadRequest_*>,TDefaultMapHashableKeyFuncs<int,IAsyncReadRequest_*,0>,FDefaultSetAllocator>
              *)this_01);
  }
  pTVar3 = &this->PackagesIMayBeWaitingForBeforePostload;
  bVar14 = 1 < (this->PackagesIMayBeWaitingForBeforePostload).HashSize;
  if (!bVar14) {
    TSet<FWeakAsyncPackagePtr,DefaultKeyFuncs<FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>::
    UnhashElements(pTVar3);
  }
  puVar2 = &(this->PackagesIMayBeWaitingForBeforePostload).Elements.field_0xc;
  *(undefined4 *)&(this->PackagesIMayBeWaitingForBeforePostload).Elements.field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    in_stack_fffffffffffffee8 = (int *)((ulonglong)in_stack_fffffffffffffee8 & 0xffffffff00000000);
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,(ForAnyElementType *)pTVar3,0,(int *)puVar2);
  }
  *(undefined4 *)&(this->PackagesIMayBeWaitingForBeforePostload).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PackagesIMayBeWaitingForBeforePostload).Elements.field_0x34 = 0;
  iVar5 = *(int *)&(this->PackagesIMayBeWaitingForBeforePostload).Elements.field_0x2c;
  *(undefined4 *)&(this->PackagesIMayBeWaitingForBeforePostload).Elements.field_0x28 = 0;
  if ((iVar5 < 0) || (0x80 < iVar5)) {
    *(undefined4 *)&(this->PackagesIMayBeWaitingForBeforePostload).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->PackagesIMayBeWaitingForBeforePostload).Elements.field_0x10,0);
  }
  if (bVar14) {
    (this->PackagesIMayBeWaitingForBeforePostload).HashSize = 1;
    TSet<FWeakAsyncPackagePtr,DefaultKeyFuncs<FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>::Rehash
              (pTVar3);
  }
  pTVar3 = &this->PackagesIAmWaitingForBeforePostload;
  bVar14 = 1 < (this->PackagesIAmWaitingForBeforePostload).HashSize;
  if (!bVar14) {
    TSet<FWeakAsyncPackagePtr,DefaultKeyFuncs<FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>::
    UnhashElements(pTVar3);
  }
  puVar2 = &(this->PackagesIAmWaitingForBeforePostload).Elements.field_0xc;
  *(undefined4 *)&(this->PackagesIAmWaitingForBeforePostload).Elements.field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    in_stack_fffffffffffffee8 = (int *)((ulonglong)in_stack_fffffffffffffee8 & 0xffffffff00000000);
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,(ForAnyElementType *)pTVar3,0,(int *)puVar2);
  }
  *(undefined4 *)&(this->PackagesIAmWaitingForBeforePostload).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PackagesIAmWaitingForBeforePostload).Elements.field_0x34 = 0;
  iVar5 = *(int *)&(this->PackagesIAmWaitingForBeforePostload).Elements.field_0x2c;
  *(undefined4 *)&(this->PackagesIAmWaitingForBeforePostload).Elements.field_0x28 = 0;
  if ((iVar5 < 0) || (0x80 < iVar5)) {
    *(undefined4 *)&(this->PackagesIAmWaitingForBeforePostload).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->PackagesIAmWaitingForBeforePostload).Elements.field_0x10,0);
  }
  if (bVar14) {
    (this->PackagesIAmWaitingForBeforePostload).HashSize = 1;
    TSet<FWeakAsyncPackagePtr,DefaultKeyFuncs<FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>::Rehash
              (pTVar3);
  }
  pTVar3 = &this->OtherPackagesWaitingForMeBeforePostload;
  bVar14 = 1 < (this->OtherPackagesWaitingForMeBeforePostload).HashSize;
  if (!bVar14) {
    TSet<FWeakAsyncPackagePtr,DefaultKeyFuncs<FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>::
    UnhashElements(pTVar3);
  }
  puVar2 = &(this->OtherPackagesWaitingForMeBeforePostload).Elements.field_0xc;
  *(undefined4 *)&(this->OtherPackagesWaitingForMeBeforePostload).Elements.field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    in_stack_fffffffffffffee8 = (int *)((ulonglong)in_stack_fffffffffffffee8 & 0xffffffff00000000);
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,(ForAnyElementType *)pTVar3,0,(int *)puVar2);
  }
  *(undefined4 *)&(this->OtherPackagesWaitingForMeBeforePostload).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OtherPackagesWaitingForMeBeforePostload).Elements.field_0x34 = 0;
  iVar5 = *(int *)&(this->OtherPackagesWaitingForMeBeforePostload).Elements.field_0x2c;
  *(undefined4 *)&(this->OtherPackagesWaitingForMeBeforePostload).Elements.field_0x28 = 0;
  if ((iVar5 < 0) || (0x80 < iVar5)) {
    *(undefined4 *)&(this->OtherPackagesWaitingForMeBeforePostload).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->OtherPackagesWaitingForMeBeforePostload).Elements.field_0x10,0);
  }
  if (bVar14) {
    (this->OtherPackagesWaitingForMeBeforePostload).HashSize = 1;
    TSet<FWeakAsyncPackagePtr,DefaultKeyFuncs<FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>::Rehash
              (pTVar3);
  }
  piVar1 = &(this->PackagesWaitingToLinkImports).ArrayMax;
  (this->PackagesWaitingToLinkImports).ArrayNum = 0;
  if (*piVar1 != 0) {
    in_stack_fffffffffffffee8 = (int *)((ulonglong)in_stack_fffffffffffffee8 & 0xffffffff00000000);
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->PackagesWaitingToLinkImports).AllocatorInstance,0,piVar1);
  }
  (this->EventNodeArray).TotalNumberOfImportExportNodes = 0;
  (this->EventNodeArray).TotalNumberOfNodesAdded = 0;
  pFVar7 = (this->EventNodeArray).Array;
  if (pFVar7 != (FEventLoadNode *)0x0) {
    lVar22 = *(longlong *)&pFVar7[-1].NumPrerequistes;
    pFVar12 = pFVar7 + lVar22;
    while (lVar22 != 0) {
      pFVar8 = pFVar12[-1].NodesWaitingForMe.AllocatorInstance.Data;
      pFVar12 = pFVar12 + -1;
      lVar22 = lVar22 + -1;
      if (pFVar8 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar8);
      }
    }
    operator_delete__(&pFVar7[-1].NumPrerequistes,
                      *(longlong *)&pFVar7[-1].NumPrerequistes * 0x18 + 8);
  }
  (this->EventNodeArray).Array = (FEventLoadNode *)0x0;
  puVar17 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_88 = local_res10;
  local_90 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar18 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_90,puVar17);
  pwVar30 = L"";
  FVar9 = pFVar18[0x2f];
  if ((FVar9 != (FTlsAutoCleanup)0x0) &&
     (pFVar24 = (ForAnyElementType *)((longlong)FVar9 + 0x10), *(int *)((longlong)FVar9 + 0x18) != 0
     )) {
    pTVar4 = &this->PackageObjLoaded;
    if ((pTVar4 == (TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *)pFVar24) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(void*)this != (void*)&Source",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x96e,L""), bVar14)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    iVar5 = *(int *)((longlong)FVar9 + 0x18);
    if (iVar5 != 0) {
      in_stack_fffffffffffffee8 = &(this->PackageObjLoaded).ArrayNum;
      iVar25 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (8,8,iVar5,&pTVar4->AllocatorInstance,in_stack_fffffffffffffee8,
                          &(this->PackageObjLoaded).ArrayMax);
      ConstructItems<TObjectPtr<UObject>,UObject_*,int>
                ((pTVar4->AllocatorInstance).Data + (longlong)iVar25 * 8,(UObject **)pFVar24->Data,
                 iVar5);
    }
    *(undefined4 *)((longlong)FVar9 + 0x18) = 0;
    if (*(int *)((longlong)FVar9 + 0x1c) < 0) {
      in_stack_fffffffffffffee8 = (int *)((ulonglong)in_stack_fffffffffffffee8 & 0xffffffff00000000)
      ;
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,pFVar24,0,(int *)((longlong)FVar9 + 0x1c));
    }
  }
  lpCriticalSection = &this->ReferencedObjectsCritical;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  ClearFlagsAndDissolveClustersFromLoadedObjects<TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>_>
            (&this->ReferencedObjects);
  ClearFlagsAndDissolveClustersFromLoadedObjects<TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>_>
            (&this->PackageObjLoaded);
  ClearFlagsAndDissolveClustersFromLoadedObjects<TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>_>
            (&this->DeferredFinalizeObjects);
  EmptyReferencedObjects(this);
  piVar1 = &(this->PackageObjLoaded).ArrayMax;
  (this->PackageObjLoaded).ArrayNum = 0;
  if (*piVar1 != 0) {
    in_stack_fffffffffffffee8 = (int *)((ulonglong)in_stack_fffffffffffffee8 & 0xffffffff00000000);
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->PackageObjLoaded).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->DeferredFinalizeObjects).ArrayMax;
  (this->DeferredFinalizeObjects).ArrayNum = 0;
  if (*piVar1 != 0) {
    in_stack_fffffffffffffee8 = (int *)((ulonglong)in_stack_fffffffffffffee8 & 0xffffffff00000000);
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->DeferredFinalizeObjects).AllocatorInstance,0,piVar1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (this->LinkerRoot != (UPackage *)0x0) {
    if (this->Linker != (FLinkerLoad *)0x0) {
      FLinkerLoad::FlushCache((FLinkerLoad *)&this->Linker->_padding_);
    }
    if (this->bCreatedLinkerRoot != false) {
      UObjectBase::AtomicallyClearFlags((UObjectBase *)this->LinkerRoot,RF_WasLoaded);
      local_c8 = 0;
      this->LinkerRoot->bHasBeenFullyLoaded = '\0';
      pUVar10 = this->LinkerRoot;
      pcVar11 = *(code **)(pUVar10->_padding_ + 0x170);
      FVar19 = (FName)Z_Construct_UClass_UPackage_NoRegister();
      pUVar20 = (UClass *)GetTransientPackage();
      uVar31 = (ulonglong)in_stack_fffffffffffffee8 & 0xffffffff00000000;
      FVar19 = MakeUniqueObjectName((UObject *)local_80,pUVar20,FVar19,None);
      pFVar21 = ::FName::ToString((FName *)FVar19,local_78);
      if ((pFVar21->Data).ArrayNum != 0) {
        pwVar30 = (wchar_t *)(pFVar21->Data).AllocatorInstance.Data;
      }
      (*pcVar11)(pUVar10,pwVar30,0,0x34,uVar31);
      if (local_78[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78[0].Data.AllocatorInstance.Data);
      }
    }
    ResetLoader(this);
  }
  this->PreLoadIndex = 0;
  this->PreLoadSortIndex = 0;
  this->FinishExternalReadDependenciesIndex = 0;
  return;
}

// CloseDelayedLinkers @ 141ee0b60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAsyncPackage::CloseDelayedLinkers(FAsyncPackage *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FLinkerLoad *this_00;
  code *pcVar3;
  bool bVar4;
  FLinkerLoad *pFVar5;
  FLinkerManager *this_01;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  pFVar6 = (this->DelayedLinkerClosePackages).AllocatorInstance.Data;
  iVar2 = (this->DelayedLinkerClosePackages).ArrayNum;
  pFVar1 = pFVar6 + (longlong)iVar2 * 8;
LAB_141ee0b90:
  if ((this->DelayedLinkerClosePackages).ArrayNum != iVar2) {
    local_res8[0] = 0;
    `TCheckedPointerIterator<FLinkerLoad_*,int,0>::operator!='::__l2::<lambda_1>::operator()
              (local_res8);
  }
  if (pFVar6 == pFVar1) {
    return;
  }
  this_00 = *(FLinkerLoad **)pFVar6;
  if ((UPackage *)this_00->_padding_ == (UPackage *)0x0) {
LAB_141ee0c96:
    if ((this_00->_padding_ != 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("LinkerToClose->LinkerRoot == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                           ,0x1c97,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((this_00->AsyncRoot != (void *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("LinkerToClose->AsyncRoot == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                           ,0x1c98,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    if (GEventDrivenLoaderEnabled == false) {
      bVar4 = FLinkerLoad::HasAnyObjectsPendingLoad(this_00);
      if (!bVar4) {
        this_01 = FLinkerManager::Get();
        FLinkerManager::ResetLoaders(this_01,(UObject *)this_00->_padding_);
        goto LAB_141ee0c96;
      }
      if ((byte)LogStreaming._0_1_ < 3) goto LAB_141ee0cf6;
      FLinkerLoad::GetArchiveName((FLinkerLoad *)&this_00->_padding_,&local_28);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
      if (local_28.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
      goto LAB_141ee0cf6;
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
      pFVar6 = pFVar6 + 8;
      goto LAB_141ee0b90;
    }
    pFVar5 = FLinkerLoad::FindExistingLinkerForPackage((UPackage *)this_00->_padding_);
    if ((pFVar5 != this_00) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("LinkerToReset == LinkerToClose",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                           ,0x1c82,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((pFVar5 == (FLinkerLoad *)0x0) || (pFVar5->AsyncRoot == (void *)0x0)) goto LAB_141ee0c96;
    if (1 < (byte)LogStreaming._0_1_) {
      FLinkerLoad::GetArchiveName((FLinkerLoad *)&pFVar5->_padding_,&local_38);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
      if (local_38.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
      goto LAB_141ee0cf6;
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
      pFVar6 = pFVar6 + 8;
      goto LAB_141ee0b90;
    }
  }
LAB_141ee0cf6:
  pFVar6 = pFVar6 + 8;
  goto LAB_141ee0b90;
}

// ConditionalQueueProcessImportsAndExports @ 141ee3020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FAsyncPackage::ConditionalQueueProcessImportsAndExports(FAsyncPackage *this,bool param_1)

{
  int iVar1;
  FAsyncLoadingThread *pFVar2;
  longlong *plVar3;
  int iVar4;
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
  if (((this->AsyncPackageLoadingState == ProcessNewImportsAndExports) &&
      (this->bProcessImportsAndExportsInFlight == false)) &&
     (((*(int *)&(this->ImportsThatAreNowCreated).field_0x8 != 0 ||
       (((*(int *)&(this->ImportsThatAreNowSerialized).field_0x8 != 0 ||
         (*(int *)&(this->ExportsThatCanBeCreated).field_0x8 != 0)) ||
        (*(int *)&(this->ExportsThatCanHaveIOStarted).field_0x8 != 0)))) ||
      ((*(int *)&(this->ExportsThatCanBeSerialized).field_0x8 != 0 ||
       ((this->ReadyPrecacheRequests).ArrayNum != 0)))))) {
    iVar4 = (this->ReadyPrecacheRequests).ArrayNum;
    this->bProcessImportsAndExportsInFlight = true;
    if (iVar4 == 0) {
      iVar4 = -1;
      if (*(int *)&(this->ExportsThatCanHaveIOStarted).field_0x8 != 0) {
        iVar4 = -1;
        if (*(int *)&(this->PrecacheRequests).field_0x8 -
            *(int *)&(this->PrecacheRequests).field_0x34 < 2) {
          iVar4 = -3;
        }
      }
    }
    else {
      iVar4 = -2;
    }
    local_a8 = (this->Desc).Name;
    pFVar2 = this->AsyncLoadingThread;
    iVar1 = this->SerialNumber;
    if (GRandomizeLoadOrder != 0) {
      GetRandomSerialNumber(0x7fffffff);
    }
    local_98 = (code *)0x0;
    iStack_b8 = iVar1;
    local_b0 = pFVar2;
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
      local_68._4_4_ = this->SerialNumber;
    }
    else {
      local_98 = (code *)local_68._16_8_;
      local_68._4_4_ = GetRandomSerialNumber(0x7fffffff);
      local_68._16_8_ = local_98;
    }
    local_68._0_4_ = (this->Desc).Priority;
    (pFVar2->EventQueue).RunningSerialNumber = (pFVar2->EventQueue).RunningSerialNumber + 1;
    local_68._12_4_ = (pFVar2->EventQueue).RunningSerialNumber;
    local_30 = local_70;
    local_70 = (longlong *)0x0;
    local_48[0] = local_88[0];
    local_48[1] = local_88[1];
    local_48[2] = local_88[2];
    local_98 = (code *)0x0;
    local_68._8_4_ = iVar4;
    TArray<FAsyncLoadEvent,TSizedDefaultAllocator<32>_>::HeapPush<TLess<FAsyncLoadEvent>_>
              (&(pFVar2->EventQueue).EventQueue,(FAsyncLoadEvent *)local_68,local_c8);
    if ((code *)local_68._16_8_ != (code *)0x0) {
      plVar3 = (longlong *)(local_68 + 0x20);
      if (local_30 != (longlong *)0x0) {
        plVar3 = local_30;
      }
      (**(code **)(*plVar3 + 0x10))();
    }
    if (local_98 != (code *)0x0) {
      plVar3 = local_88;
      if (local_70 != (longlong *)0x0) {
        plVar3 = local_70;
      }
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  return;
}

// ConditionalQueueProcessPostloadWait @ 141ee3260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FAsyncPackage::ConditionalQueueProcessPostloadWait(FAsyncPackage *this)

{
  int iVar1;
  int iVar2;
  FAsyncLoadingThread *pFVar3;
  code *pcVar4;
  bool bVar5;
  longlong *plVar6;
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
  if ((this->AsyncPackageLoadingState != WaitingForPostLoad) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("AsyncPackageLoadingState == EAsyncPackageLoadingState::WaitingForPostLoad"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                         ,0xaeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((this->bProcessPostloadWaitInFlight == false) &&
     (*(int *)&(this->PackagesIAmWaitingForBeforePostload).Elements.field_0x8 ==
      *(int *)&(this->PackagesIAmWaitingForBeforePostload).Elements.field_0x34)) {
    pFVar3 = this->AsyncLoadingThread;
    this->bProcessPostloadWaitInFlight = true;
    if ((this->AsyncPackageLoadingState != WaitingForPostLoad) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Package->AsyncPackageLoadingState == EAsyncPackageLoadingState::WaitingForPostLoad"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                           ,0xa8d,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_a8 = (this->Desc).Name;
    iVar1 = this->SerialNumber;
    iVar2 = (this->Desc).Priority;
    local_68._4_4_ = iVar1;
    if (GRandomizeLoadOrder != 0) {
      local_68._4_4_ = GetRandomSerialNumber(0x7fffffff);
    }
    local_98 = (code *)0x0;
    iStack_b8 = iVar1;
    local_b0 = pFVar3;
    local_30 = FMemory::Malloc(0x20,8);
    *local_30 = (longlong)
                &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_ProcessPostloadWait'::`2'::<lambda_1>,0,1>
                 ::_vftable_;
    local_68._8_4_ = 0;
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
    (pFVar3->EventQueue).RunningSerialNumber = (pFVar3->EventQueue).RunningSerialNumber + 1;
    local_68._12_4_ = (pFVar3->EventQueue).RunningSerialNumber;
    local_70 = (longlong *)0x0;
    local_48[0] = local_88[0];
    local_48[1] = local_88[1];
    local_48[2] = local_88[2];
    local_98 = (code *)0x0;
    local_68._0_4_ = iVar2;
    TArray<FAsyncLoadEvent,TSizedDefaultAllocator<32>_>::HeapPush<TLess<FAsyncLoadEvent>_>
              (&(pFVar3->EventQueue).EventQueue,(FAsyncLoadEvent *)local_68,local_c8);
    if ((code *)local_68._16_8_ != (code *)0x0) {
      plVar6 = (longlong *)(local_68 + 0x20);
      if (local_30 != (longlong *)0x0) {
        plVar6 = local_30;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    if (local_98 != (code *)0x0) {
      plVar6 = local_88;
      if (local_70 != (longlong *)0x0) {
        plVar6 = local_70;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  return;
}

// CreateClusters @ 141ee53e0

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall
FAsyncPackage::CreateClusters(FAsyncPackage *this,double param_1,bool param_2,double param_3)

{
  int iVar1;
  uint uVar2;
  UObject *pUVar3;
  wchar_t *pwVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  uint uVar9;
  Type TVar10;
  LARGE_INTEGER local_res8;
  
  this->LastTypeOfWorkPerformed = L"CreateClusters";
  iVar1 = (this->DeferredClusterObjects).ArrayNum;
  this->LastObjectWorkWasPerformedOn = (UObject *)0x0;
  dVar7 = __real_4170000000000000;
  if (this->DeferredClusterIndex < iVar1) {
    do {
      if ((this->AsyncLoadingThread->IsLoadingSuspended).Counter != 0) break;
      pUVar3 = this->LastObjectWorkWasPerformedOn;
      pwVar4 = this->LastTypeOfWorkPerformed;
      if (param_2) {
        QueryPerformanceCounter(&local_res8);
        dVar6 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar7;
        if ((param_3 < dVar6 - param_1) && (GWarnIfTimeLimitExceeded != 0)) {
          IsTimeLimitExceededPrint(param_1,dVar6,LastTestTime,param_3,pwVar4,pUVar3);
          LastTestTime = dVar6;
          break;
        }
        LastTestTime = dVar6;
        if (param_3 < dVar6 - param_1) break;
      }
      if ((byte)LogStreaming._0_1_ < 6) {
        if (GGCSingleton->GCWantsToRunCounter != (TAtomic<int>)0x0) break;
      }
      else if (GGCSingleton->GCWantsToRunCounter != (TAtomic<int>)0x0) {
        UE::Logging::Private::BasicLog<6>
                  ((FStaticBasicLogRecord *)&PTR_u_Timing_out_asyn_1507e7988,
                   (FLogCategoryBase *)&LogStreaming);
        break;
      }
      uVar2 = this->DeferredClusterIndex;
      this->DeferredClusterIndex = uVar2 + 1;
      uVar9 = 0;
      if ((int)uVar2 < (this->DeferredClusterObjects).ArrayNum) {
        uVar9 = ~uVar2 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        TVar10 = (*pcVar5)();
        return TVar10;
      }
      pUVar3 = *(UObject **)
                ((this->DeferredClusterObjects).AllocatorInstance.Data + (longlong)(int)uVar2 * 8);
      this->LastObjectWorkWasPerformedOn = pUVar3;
      (**(code **)(*(longlong *)pUVar3 + 0x30))();
    } while (this->DeferredClusterIndex < (this->DeferredClusterObjects).ArrayNum);
  }
  if (this->DeferredClusterIndex != (this->DeferredClusterObjects).ArrayNum) {
    this->LastObjectWorkWasPerformedOn = (UObject *)0x0;
    return TimeOut;
  }
  this->DeferredClusterIndex = 0;
  (this->DeferredClusterObjects).ArrayNum = 0;
  if ((this->DeferredClusterObjects).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->DeferredClusterObjects).AllocatorInstance,0,
               &(this->DeferredClusterObjects).ArrayMax);
  }
  this->LastObjectWorkWasPerformedOn = (UObject *)0x0;
  return Complete;
}

// CreateExports @ 141ee57f0

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall FAsyncPackage::CreateExports(FAsyncPackage *this)

{
  int *piVar1;
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *pTVar2;
  double dVar3;
  bool bVar4;
  ELoadPhase EVar5;
  int iVar6;
  wchar_t *pwVar7;
  FLinkerLoad *pFVar8;
  FLinkerLoad *pFVar9;
  longlong lVar10;
  FAsyncArchive *this_00;
  long64 lVar11;
  FScriptContainerElement *pFVar12;
  FName FVar13;
  code *pcVar14;
  double dVar15;
  uchar auVar16 [8];
  float fVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  double dVar21;
  float fVar22;
  double dVar23;
  bool bVar24;
  bool bVar25;
  char cVar26;
  uint uVar27;
  Type TVar28;
  int iVar29;
  int iVar30;
  uint uVar31;
  FName *pFVar32;
  FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_CreateExports> FVar33;
  FThreadStats *pFVar34;
  FThreadStatsPool *pFVar35;
  UObject *pUVar36;
  FThreadSafeStaticStat<FStat_STAT_AsyncIO_AsyncPackagePrecacheWaitTime> FVar37;
  longlong lVar38;
  FName FVar39;
  FColor_u_0 FVar40;
  double dVar41;
  double dVar42;
  float fVar43;
  FGCScopeGuard local_res10 [8];
  FColor_u_0 local_res18;
  uint uStackX_1c;
  FName local_res20;
  UObject *local_128;
  FName local_120;
  LARGE_INTEGER local_110;
  long64 local_108;
  FName local_100;
  LARGE_INTEGER local_f8;
  FStatMessage local_f0;
  FStatMessage local_e0;
  FName local_d0;
  FName local_c8 [17];
  
  if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
    bVar18 = false;
  }
  else {
    bVar18 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId6738,"CreateExportsTime",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
               ,0x1a52);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId6738);
  }
  FVar33 = StatPtr_STAT_FAsyncPackage_CreateExports;
  if (StatPtr_STAT_FAsyncPackage_CreateExports ==
      (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_CreateExports>)0x0) {
    pFVar32 = ::FName::FName(&local_d0,"STAT_FAsyncPackage_CreateExports");
    FVar33 = (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_CreateExports>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FAsyncPackage_CreateExports,
                        *pFVar32,L"CreateExports AsyncPackage","STATGROUP_AsyncLoad",
                        "STATCAT_Advanced",L"Async Load",false,true,ST_int64,true,false,MCR_Invalid)
    ;
  }
  FVar39 = *(FName *)FVar33;
  bVar20 = false;
  bVar19 = false;
  local_120.ComparisonIndex.Value = 0;
  local_120.Number = 0;
  bVar25 = false;
  bVar24 = false;
  if ((FVar39.ComparisonIndex.Value.Value != 0) || (FVar39.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18._s_0,(char *)*(FName *)((longlong)FVar33 + 0x10));
      bVar20 = false;
      bVar19 = true;
      bVar25 = false;
      bVar24 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar39.ComparisonIndex.Value.Value;
        local_res20.Number = FVar39.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar33 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                   ,0x1a53);
        bVar20 = true;
        bVar19 = true;
        bVar25 = true;
        bVar24 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar39,CycleScopeStart);
      bVar24 = true;
      goto LAB_141ee59bf;
    }
  }
  bVar20 = bVar25;
  bVar19 = bVar24;
  bVar24 = false;
  FVar39 = local_120;
LAB_141ee59bf:
  FGCScopeGuard::FGCScopeGuard(local_res10);
  dVar23 = __real_3f508c3f40000000;
  fVar22 = __real_42c80000;
  dVar21 = __real_4170000000000000;
  if (this->ExportIndex < (int)this->Linker->_padding_) {
    while ((this->AsyncLoadingThread->IsLoadingSuspended).Counter == 0) {
      pUVar36 = this->LastObjectWorkWasPerformedOn;
      pwVar7 = this->LastTypeOfWorkPerformed;
      dVar3 = this->TickStartTime;
      dVar42 = (double)this->TimeLimit;
      if (this->bUseTimeLimit != false) {
        QueryPerformanceCounter(&local_110);
        dVar15 = (double)local_110.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar21;
        dVar41 = dVar15 - dVar3;
        if ((dVar42 < dVar41) && (GWarnIfTimeLimitExceeded != 0)) {
          IsTimeLimitExceededPrint(dVar3,dVar15,LastTestTime,dVar42,pwVar7,pUVar36);
          LastTestTime = dVar15;
          break;
        }
        LastTestTime = dVar15;
        if (dVar42 < dVar41) break;
      }
      if ((byte)LogStreaming._0_1_ < 6) {
        if (GGCSingleton->GCWantsToRunCounter != (TAtomic<int>)0x0) break;
      }
      else if (GGCSingleton->GCWantsToRunCounter != (TAtomic<int>)0x0) {
        UE::Logging::Private::BasicLog<6>
                  ((FStaticBasicLogRecord *)&PTR_u_Timing_out_asyn_1507e7988,
                   (FLogCategoryBase *)&LogStreaming);
        break;
      }
      uVar31 = this->ExportIndex;
      pFVar8 = this->Linker;
      uVar27 = 0;
      if ((int)uVar31 < (int)pFVar8->_padding_) {
        uVar27 = ~uVar31 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar14 = (code *)swi(3);
        TVar28 = (*pcVar14)();
        return TVar28;
      }
      pFVar9 = this->Linker;
      lVar10 = pFVar8->_padding_;
      lVar38 = (longlong)(int)uVar31 * 0x68;
      if ((pFVar9->bIsAsyncLoader == false) ||
         (this_00 = (FAsyncArchive *)pFVar9->Loader, this_00 == (FAsyncArchive *)0x0)) {
        cVar26 = (**(code **)(*(longlong *)pFVar9->Loader + 0x1f0))
                           (pFVar9->Loader,*(undefined8 *)(lVar38 + 0x28 + lVar10));
      }
      else {
        lVar11 = *(long64 *)(lVar38 + 0x20 + lVar10);
        local_108 = *(long64 *)(lVar38 + 0x28 + lVar10);
        fVar43 = this->TimeLimit;
        EVar5 = this_00->LoadPhase;
        dVar3 = this->TickStartTime;
        bVar25 = this->bUseFullTimeLimit;
        bVar4 = this->bUseTimeLimit;
        if ((EVar5 == WaitingForSize) || (EVar5 - WaitingForSummary < 2)) {
          bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                              ,0x20bd,L"");
          if (bVar25) {
            pcVar14 = (code *)swi(3);
            TVar28 = (*pcVar14)();
            return TVar28;
          }
          cVar26 = '\0';
        }
        else {
          if (EVar5 == WaitingForFirstExport) {
            FAsyncArchive::FirstExportStarting(this_00);
          }
          if (bVar4 == false) {
            cVar26 = '\x01';
          }
          else {
            cVar26 = FAsyncArchive::PrecacheInternal
                               (this_00,local_108,lVar11,true,(IAsyncReadRequest *)0x0);
            if ((!(bool)cVar26) && (bVar25 != false)) {
              dVar42 = FWindowsPlatformTime::Seconds();
              dVar3 = (double)fVar43 - (dVar42 - dVar3);
              if ((dVar23 < dVar3) && (bVar25 = FAsyncArchive::WaitRead(this_00,dVar3), bVar25)) {
                cVar26 = '\x01';
              }
            }
          }
        }
      }
      TVar28 = TimeOut;
      if (cVar26 == '\0') {
        if ((this->bUseTimeLimit != false) && (this->bUseFullTimeLimit == false)) {
          this->bTimeLimitExceeded = true;
        }
        if (this->bTimeLimitExceeded != false) {
          auVar16 = (uchar  [8])(double)(float)(double)FApp::DeltaTime;
          if ((double)auVar16 != 0.0) {
            FVar37 = StatPtr_STAT_AsyncIO_AsyncPackagePrecacheWaitTime;
            if (StatPtr_STAT_AsyncIO_AsyncPackagePrecacheWaitTime ==
                (FThreadSafeStaticStat<FStat_STAT_AsyncIO_AsyncPackagePrecacheWaitTime>)0x0) {
              pFVar32 = ::FName::FName(local_c8,"STAT_AsyncIO_AsyncPackagePrecacheWaitTime");
              FVar37 = (FThreadSafeStaticStat<FStat_STAT_AsyncIO_AsyncPackagePrecacheWaitTime>)
                       FThreadSafeStaticStatBase::DoSetup
                                 ((FThreadSafeStaticStatBase *)
                                  &StatPtr_STAT_AsyncIO_AsyncPackagePrecacheWaitTime,*pFVar32,
                                  L"Async package precache wait time","STATGROUP_AsyncIO",
                                  "STATCAT_Advanced",L"Async I/O",true,false,NumBits,false,false,
                                  MCR_Invalid);
            }
            FVar13 = *(FName *)FVar37;
            FVar40.Bits = (uint)FVar13.ComparisonIndex.Value;
            uVar31 = FVar13.Number;
            local_res18.Bits = FVar40.Bits;
            uStackX_1c = uVar31;
            if (((FVar13 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
               (FThreadStats::TlsSlot != 0xffffffff)) {
              pFVar34 = TlsGetValue(FThreadStats::TlsSlot);
              if (pFVar34 == (FThreadStats *)0x0) {
                pFVar35 = FThreadStatsPool::Get();
                pFVar34 = FThreadStatsPool::GetFromPool(pFVar35);
              }
              local_f0.NameAndInfo.Number = uVar31 & 0xffffafff | 0xa000;
              local_100 = FVar13;
              local_f0.StatData.Pad = auVar16;
              local_f0.NameAndInfo.Index.Value = FVar40.Bits;
              FThreadStats::AddStatMessage(pFVar34,&local_f0);
              FStatsTrace::Add(&local_100,(double)auVar16);
              if (pFVar34->ScopeCount == 0) {
                FThreadStats::Flush(pFVar34,false,false);
              }
              else if (FThreadStats::bIsRawStatsActive != false) {
                FThreadStats::FlushRawStats(pFVar34,false,false);
              }
            }
          }
          goto LAB_141ee5b37;
        }
      }
      else {
        iVar29 = this->ExportIndex;
        this->ExportIndex = iVar29 + 1;
        pUVar36 = FLinkerLoad::CreateExport(this->Linker,iVar29);
        if (pUVar36 != (UObject *)0x0) {
          FLinkerLoad::Preload((FLinkerLoad *)&this->Linker->_padding_,pUVar36);
          pTVar2 = &this->PackageObjLoaded;
          local_128 = pUVar36;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar36);
          }
          pFVar12 = (pTVar2->AllocatorInstance).Data;
          if (((pFVar12 <= (FScriptContainerElement *)&local_128) &&
              ((FScriptContainerElement *)&local_128 <
               pFVar12 + (longlong)(this->PackageObjLoaded).ArrayMax * 8)) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar25)) {
            pcVar14 = (code *)swi(3);
            TVar28 = (*pcVar14)();
            return TVar28;
          }
          iVar29 = (this->PackageObjLoaded).ArrayNum;
          piVar1 = &(this->PackageObjLoaded).ArrayMax;
          if (iVar29 == *piVar1) {
            iVar29 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&pTVar2->AllocatorInstance,piVar1);
          }
          (this->PackageObjLoaded).ArrayNum = iVar29 + 1;
          *(UObject **)((pTVar2->AllocatorInstance).Data + (longlong)iVar29 * 8) = local_128;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_128 != (UObject *)0x0))
          {
            UE::GC::MarkAsReachable(local_128);
          }
        }
        pFVar8 = this->Linker;
        fVar43 = 0.0;
        this->LastObjectWorkWasPerformedOn = pUVar36;
        this->LastTypeOfWorkPerformed = L"creating exports for";
        if (pFVar8 == (FLinkerLoad *)0x0) {
          iVar29 = (this->DeferredPostLoadObjects).ArrayNum;
          if (0 < iVar29) {
            fVar43 = (float)this->DeferredPostLoadIndex;
            goto LAB_141ee5f77;
          }
        }
        else {
          iVar29 = (int)pFVar8->_padding_;
          iVar6 = (this->DeferredPostLoadObjects).ArrayNum;
          iVar30 = iVar29;
          if (iVar29 < iVar6) {
            iVar30 = iVar6;
          }
          iVar29 = iVar30 + (int)pFVar8->_padding_ + iVar29;
          fVar43 = (float)(this->DeferredPostLoadIndex + this->LoadImportIndex + this->ExportIndex)
                   * fVar22;
LAB_141ee5f77:
          fVar43 = fVar43 / (float)iVar29;
        }
        fVar17 = this->LoadPercentage;
        if (this->LoadPercentage <= fVar43) {
          fVar17 = fVar43;
        }
        this->LoadPercentage = fVar17;
      }
      if ((int)this->Linker->_padding_ <= this->ExportIndex) break;
    }
  }
  TVar28 = TimeOut;
  FreeReferencedImports(this);
  if (this->ExportIndex == (int)this->Linker->_padding_) {
    TVar28 = Complete;
    this->bAllExportsSerialized = true;
  }
LAB_141ee5b37:
  FGCScopeGuard::~FGCScopeGuard(local_res10);
  if (bVar19) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar20) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar24) && (FVar39 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar34 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar34 == (FThreadStats *)0x0) {
      pFVar35 = FThreadStatsPool::Get();
      pFVar34 = FThreadStatsPool::GetFromPool(pFVar35);
    }
    if (pFVar34->bWaitForExplicitFlush < pFVar34->ScopeCount) {
      local_e0.NameAndInfo.Index = FVar39.ComparisonIndex.Value;
      local_e0.NameAndInfo.Number = FVar39.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_f8);
      local_e0.StatData.Pad[4] = '\0';
      local_e0.StatData.Pad[5] = '\0';
      local_e0.StatData.Pad[6] = '\0';
      local_e0.StatData.Pad[7] = '\0';
      local_e0.StatData.Pad[0] = local_f8.s.LowPart._0_1_;
      local_e0.StatData.Pad[1] = local_f8.s.LowPart._1_1_;
      local_e0.StatData.Pad[2] = local_f8.s.LowPart._2_1_;
      local_e0.StatData.Pad[3] = local_f8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar34,&local_e0);
      piVar1 = &pFVar34->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar34,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar34,false,false);
      }
    }
  }
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return TVar28;
}

// CreateImports @ 141ee62a0

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall FAsyncPackage::CreateImports(FAsyncPackage *this)

{
  int *piVar1;
  double dVar2;
  int iVar3;
  FName FVar4;
  UObject *pUVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  double dVar11;
  undefined4 uVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_CreateImports> FVar14;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uchar auVar15 [8];
  UClass *pUVar16;
  uint uVar17;
  FName FVar18;
  FNameEntryId FVar19;
  Type TVar20;
  undefined1 uVar21;
  double dVar22;
  LARGE_INTEGER local_res8;
  FGCScopeGuard local_res10 [8];
  FName local_res18;
  LARGE_INTEGER local_res20;
  FStatMessage local_a8;
  FName local_98;
  
  if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId6668,"CreateImportsTime",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
               ,0x1a0c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId6668);
  }
  TVar20 = TimeOut;
  FVar14 = StatPtr_STAT_FAsyncPackage_CreateImports;
  if (StatPtr_STAT_FAsyncPackage_CreateImports ==
      (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_CreateImports>)0x0) {
    pFVar13 = ::FName::FName(&local_res18,"STAT_FAsyncPackage_CreateImports");
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_CreateImports>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FAsyncPackage_CreateImports,
                        *pFVar13,L"CreateImports AsyncPackage","STATGROUP_AsyncLoad",
                        "STATCAT_Advanced",L"Async Load",false,true,ST_int64,true,false,MCR_Invalid)
    ;
  }
  FVar4 = *(FName *)FVar14;
  uVar21 = 0;
  local_98.ComparisonIndex.Value = 0;
  local_98.Number = 0;
  local_res8.s.LowPart = local_res8.s.LowPart & 0xffffff00;
  FVar19 = FVar4.ComparisonIndex.Value;
  uVar17 = FVar4.Number;
  if ((FVar19.Value != 0) || (FVar18 = local_98, uVar17 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar14 + 0x10));
      uVar21 = 1;
      local_res8.s.LowPart._0_1_ = 1;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar19.Value;
        local_res8.s.HighPart = uVar17;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                   ,0x1a0d);
        uVar21 = 3;
        local_res8.s.LowPart._0_1_ = 3;
      }
    }
    FVar18 = local_98;
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar19.Value;
      local_res8.s.HighPart = uVar17;
      local_98 = FVar4;
      FThreadStats::AddMessage(FVar4,CycleScopeStart);
      local_res8.s.LowPart = CONCAT31(local_res8.s.LowPart._1_3_,uVar21) | 4;
      FVar18 = FVar4;
    }
  }
  FGCScopeGuard::FGCScopeGuard(local_res10);
  dVar11 = __real_4170000000000000;
  if (this->ImportIndex < (int)this->Linker->_padding_) {
    do {
      if ((this->AsyncLoadingThread->IsLoadingSuspended).Counter != 0) break;
      pUVar5 = this->LastObjectWorkWasPerformedOn;
      pwVar6 = this->LastTypeOfWorkPerformed;
      dVar2 = this->TickStartTime;
      dVar9 = (double)this->TimeLimit;
      if (this->bUseTimeLimit != false) {
        QueryPerformanceCounter(&local_res20);
        dVar8 = (double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar11;
        dVar22 = dVar8 - dVar2;
        if ((dVar9 < dVar22) && (GWarnIfTimeLimitExceeded != 0)) {
          IsTimeLimitExceededPrint(dVar2,dVar8,LastTestTime,dVar9,pwVar6,pUVar5);
          LastTestTime = dVar8;
          break;
        }
        LastTestTime = dVar8;
        if (dVar9 < dVar22) break;
      }
      if ((byte)LogStreaming._0_1_ < 6) {
        if (GGCSingleton->GCWantsToRunCounter != (TAtomic<int>)0x0) break;
      }
      else if (GGCSingleton->GCWantsToRunCounter != (TAtomic<int>)0x0) {
        UE::Logging::Private::BasicLog<6>
                  ((FStaticBasicLogRecord *)&PTR_u_Timing_out_asyn_1507e7988,
                   (FLogCategoryBase *)&LogStreaming);
        break;
      }
      iVar3 = this->ImportIndex;
      this->ImportIndex = iVar3 + 1;
      auVar15 = (uchar  [8])FLinkerLoad::CreateImport(this->Linker,iVar3);
      this->LastObjectWorkWasPerformedOn = (UObject *)auVar15;
      this->LastTypeOfWorkPerformed = L"creating imports for";
      AddObjectReference(this,(UObject *)auVar15);
      if (auVar15 != (uchar  [8])0x0) {
        pUVar16 = Z_Construct_UClass_UPackage_NoRegister();
        iVar3 = (int)pUVar16->_padding_;
        if ((((iVar3 <= *(int *)(*(longlong *)((longlong)auVar15 + 0x10) + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)((longlong)auVar15 + 0x10) + 0x30) + (longlong)iVar3 * 8)
              == &pUVar16->_padding_)) && (*(longlong *)((longlong)auVar15 + 0x48) != 0)) &&
           ((lVar7 = *(longlong *)(*(longlong *)((longlong)auVar15 + 0x48) + 0x20), lVar7 != 0 &&
            (*(longlong *)(lVar7 + 0x420) != 0)))) {
          local_a8.StatData.Pad = auVar15;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)auVar15);
          }
          TSet<TObjectPtr<UPackage>,DefaultKeyFuncs<TObjectPtr<UPackage>,0>,FDefaultSetAllocator>::
          Emplace<TObjectPtr<UPackage>_>
                    (&this->ImportedPackages,(TObjectPtr<UPackage> *)&local_res18,(bool *)&local_a8)
          ;
        }
      }
    } while (this->ImportIndex < (int)this->Linker->_padding_);
  }
  if (this->ImportIndex == (int)this->Linker->_padding_) {
    TVar20 = Complete;
  }
  FGCScopeGuard::~FGCScopeGuard(local_res10);
  uVar12 = local_res8.s.LowPart;
  if ((local_res8.s.LowPart & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((uVar12 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((uVar12 & 4) != 0) && (FVar18 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_a8.NameAndInfo.Index.Value = local_98.ComparisonIndex.Value;
      local_a8.NameAndInfo.Number = FVar18.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res8);
      local_a8.StatData.Pad[4] = '\0';
      local_a8.StatData.Pad[5] = '\0';
      local_a8.StatData.Pad[6] = '\0';
      local_a8.StatData.Pad[7] = '\0';
      local_a8.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_a8.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_a8.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_a8.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_a8);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return TVar20;
}

// CreateLinker @ 141ee6820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */
/* WARNING: Enum "EPackageLocationFilter": Some values do not have unique names */

Type __thiscall FAsyncPackage::CreateLinker(FAsyncPackage *this)

{
  int *piVar1;
  FEventLoadNodeArray *this_00;
  EPackageFlags EVar2;
  FAsyncPackage *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  longlong *plVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  EPackageLocationFilter EVar11;
  bool bVar12;
  bool bVar13;
  Type TVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_CreateLinker> FVar16;
  FString *pFVar17;
  UPackage *this_01;
  FName *pFVar18;
  TStatId TVar19;
  FPackagePath *pFVar20;
  FLinkerLoad *pFVar21;
  ulonglong uVar22;
  FUObjectSerializeContext *pFVar23;
  FThreadStats *this_02;
  FThreadStatsPool *this_03;
  byte bVar24;
  wchar_t *pwVar25;
  char *pcVar26;
  ulonglong uVar27;
  longlong lVar28;
  code **ppcVar29;
  undefined ***pppuVar30;
  char cVar31;
  FNameEntryId FVar32;
  ForAnyElementType FVar33;
  FName FVar34;
  FName FVar35;
  int iVar36;
  uint *puVar37;
  FEventLoadNode *pFVar38;
  uint uVar39;
  FScriptContainerElement *pFVar40;
  int iVar41;
  uint uVar42;
  FScriptContainerElement *pFVar43;
  undefined1 auStackY_4c8 [32];
  FGCScopeGuard local_466;
  char local_465;
  undefined1 local_464;
  undefined1 local_463 [3];
  uint local_460;
  FString local_458;
  FString local_448;
  undefined1 local_438 [8];
  FPackagePath local_430;
  FAsyncPackage *local_420;
  FName local_418;
  byte local_410;
  uint local_408;
  uint uStack_404;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  FColor_u_0 local_3e8 [2];
  TArray<FEventLoadNodePtr,TSizedDefaultAllocator<32>_> local_3e0;
  undefined8 local_3d0;
  longlong local_3c8;
  FScriptContainerElement *local_3c0;
  FName local_3b8;
  FName local_3b0;
  FName local_3a8;
  undefined8 local_3a0;
  FName local_398;
  FWeakAsyncPackagePtr local_388;
  undefined1 local_378 [8];
  FName local_370;
  FName local_368;
  int local_360;
  FWeakAsyncPackagePtr local_358;
  LARGE_INTEGER local_348;
  FScriptContainerElement *local_340;
  FString local_338;
  FString local_328;
  FStatMessage local_318;
  longlong *local_308;
  int iStack_300;
  uint uStack_2fc;
  TBitArray<FDefaultBitArrayAllocator> *local_2f8;
  undefined4 uStack_2f0;
  uint uStack_2ec;
  int local_2e8;
  undefined4 uStack_2e4;
  int iStack_2e0;
  undefined4 uStack_2dc;
  longlong *local_2d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2d0;
  undefined8 uStack_2b0;
  uint local_2a8;
  uint uStack_2a4;
  int iStack_2a0;
  undefined4 uStack_29c;
  FPrecacheCallbackHandler *local_298;
  FScriptContainerElement *local_288;
  int iStack_280;
  undefined4 uStack_27c;
  FScriptContainerElement *local_278;
  int iStack_270;
  undefined4 uStack_26c;
  FAssetLog local_268;
  FCoreRedirectObjectName local_250;
  FString local_238;
  TStringView<wchar_t> local_228;
  FString local_218;
  FString local_208;
  FName local_1f8 [2];
  TStringView<wchar_t> local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FName local_198;
  FString local_190;
  FString local_180;
  FCoreRedirectObjectName local_170;
  FAssetLog local_158;
  FString local_140;
  FString local_130 [2];
  undefined4 local_104;
  undefined1 local_f8 [32];
  uint *local_d8;
  uint local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  int local_c4;
  ForElementType<FSetElementId> local_b8;
  int local_b0;
  code *local_a8 [2];
  code *local_98 [3];
  code **local_80;
  code *local_78 [2];
  undefined **local_68;
  code *local_60;
  undefined ***local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_4c8;
  local_420 = this;
  if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
    bVar12 = false;
    bVar13 = false;
  }
  else {
    bVar12 = true;
    bVar13 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId6134,"CreateLinkerTime",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
               ,0x17f6);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId6134);
  }
  if (this->Linker != (FLinkerLoad *)0x0) {
LAB_141ee7f76:
    TVar14 = Complete;
    goto LAB_141ee7f7b;
  }
  FVar16 = StatPtr_STAT_FAsyncPackage_CreateLinker;
  if (StatPtr_STAT_FAsyncPackage_CreateLinker ==
      (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_CreateLinker>)0x0) {
    pFVar15 = ::FName::FName(&local_198,"STAT_FAsyncPackage_CreateLinker");
    FVar16 = (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_CreateLinker>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FAsyncPackage_CreateLinker,
                        *pFVar15,L"CreateLinker AsyncPackage","STATGROUP_AsyncLoad",
                        "STATCAT_Advanced",L"Async Load",false,true,ST_int64,true,false,MCR_Invalid)
    ;
  }
  FVar35 = *(FName *)FVar16;
  bVar5 = false;
  bVar6 = false;
  local_398.ComparisonIndex.Value = 0;
  local_398.Number = 0;
  bVar8 = false;
  bVar10 = false;
  FVar32 = FVar35.ComparisonIndex.Value;
  uVar39 = FVar35.Number;
  if ((FVar32.Value == 0) && (uVar39 == 0)) {
LAB_141ee6a13:
    bVar6 = bVar10;
    bVar5 = bVar8;
    bVar8 = false;
    local_3b8 = local_398;
    FVar35 = local_398;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_3e8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_3e8[0]._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar5 = false;
      bVar6 = true;
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_3a8.ComparisonIndex.Value = FVar32.Value;
        local_3a8.Number = uVar39;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_3a8,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                   ,0x17f9);
        bVar5 = true;
        bVar6 = true;
        bVar8 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_141ee6a13;
    local_408 = FVar32.Value;
    uStack_404 = uVar39;
    local_3b8 = FVar35;
    FThreadStats::AddMessage(FVar35,CycleScopeStart);
    bVar8 = true;
  }
  this->LastObjectWorkWasPerformedOn = (UObject *)0x0;
  this->LastTypeOfWorkPerformed = L"creating Linker";
  if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId6145,"CreateLinker_CreatePackage",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
               ,0x1801);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId6145);
  }
  FGCScopeGuard::FGCScopeGuard(&local_466);
  pFVar15 = &(this->Desc).Name;
  pFVar17 = ::FName::ToString(pFVar15,&local_190);
  if ((pFVar17->Data).ArrayNum == 0) {
    pwVar25 = L"";
  }
  else {
    pwVar25 = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
  }
  this_01 = CreatePackage(pwVar25);
  if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_190.Data.AllocatorInstance.Data);
  }
  if (this_01 == (UPackage *)0x0) {
    if (1 < (byte)LogStreaming._0_1_) {
      ::FName::ToString(&(this->Desc).PackagePath.PackageName,&local_338);
      ::FName::ToString(pFVar15,&local_140);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
      if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.Data.AllocatorInstance.Data);
      }
      if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_338.Data.AllocatorInstance.Data);
      }
    }
LAB_141ee6b71:
    this->bLoadHasFailed = true;
    FGCScopeGuard::~FGCScopeGuard(&local_466);
    if (bVar10) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  else {
    bVar9 = IsNativeCodePackage(this_01);
    if (bVar9) goto LAB_141ee6b71;
    AddObjectReference(this,(UObject *)this_01);
    this->LinkerRoot = this_01;
    FGCScopeGuard::~FGCScopeGuard(&local_466);
    if (bVar10) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    TVar19.StatIdPtr = (TStatIdData *)StatPtr_STAT_FAsyncPackage_CreateLinker;
    if (StatPtr_STAT_FAsyncPackage_CreateLinker ==
        (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_CreateLinker>)0x0) {
      pFVar18 = ::FName::FName(local_1f8,"STAT_FAsyncPackage_CreateLinker");
      TVar19.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FAsyncPackage_CreateLinker,*pFVar18
                      ,L"CreateLinker AsyncPackage","STATGROUP_AsyncLoad","STATCAT_Advanced",
                      L"Async Load",false,true,ST_int64,true,false,MCR_Invalid);
    }
    FScopeCycleCounterUObject::FScopeCycleCounterUObject
              ((FScopeCycleCounterUObject *)&local_418,(UObjectBaseUtility *)this_01,TVar19);
    pFVar20 = UPackage::GetLoadedPath(this_01);
    if ((pFVar20->PackageName == (FName)0x0) && (this_01->bHasBeenFullyLoaded == '\0')) {
      if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
        bVar10 = false;
      }
      else {
        bVar10 = true;
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId6177,"CreateLinker_SetFlags",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                   ,0x1821);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId6177);
      }
      EVar2 = (this->Desc).PackageFlags;
      this->bCreatedLinkerRoot = true;
      if ((atomic<unsigned_int>)(EVar2 | (uint)this_01->PackageFlagsPrivate) !=
          this_01->PackageFlagsPrivate) {
        LOCK();
        this_01->PackageFlagsPrivate =
             (atomic<unsigned_int>)((uint)this_01->PackageFlagsPrivate | EVar2);
        UNLOCK();
      }
      UPackage::SetLoadedPath(this_01,&(this->Desc).PackagePath);
      if (bVar10) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    this->LastObjectWorkWasPerformedOn = (UObject *)this_01;
    if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
      pFVar21 = FLinkerLoad::FindExistingLinkerForPackage(this_01);
      this->Linker = pFVar21;
    }
    else {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId6193,"CreateLinker_FindLinker",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                 ,0x1831);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId6193);
      pFVar21 = FLinkerLoad::FindExistingLinkerForPackage(this_01);
      this->Linker = pFVar21;
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (this->Linker != (FLinkerLoad *)0x0) {
      if (GEventDrivenLoaderEnabled != false) {
        ::FName::ToString(pFVar15,local_130);
        UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
        if (local_130[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_130[0].Data.AllocatorInstance.Data);
        }
        local_360 = this->SerialNumber;
        local_368 = *pFVar15;
        local_358.PackageName = local_368;
        local_358.SerialNumber = local_360;
        TSet<FWeakAsyncPackagePtr,DefaultKeyFuncs<FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>::
        Emplace<FWeakAsyncPackagePtr>
                  (&this->AsyncLoadingThread->PrecacheHandler->WaitingSummaries,
                   (FWeakAsyncPackagePtr *)(local_378 + 4),(bool *)&local_368);
        FPrecacheCallbackHandler::SummaryComplete
                  (this->AsyncLoadingThread->PrecacheHandler,&local_358);
      }
      if (this->Linker == (FLinkerLoad *)0x0) goto LAB_141ee6e15;
LAB_141ee7dbe:
      pFVar3 = this->Linker->AsyncRoot;
      if (((pFVar3 != (FAsyncPackage *)0x0) && (pFVar3 != this)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Linker->AsyncRoot == nullptr || Linker->AsyncRoot == this",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                              ,0x18cf,L""), bVar13)) {
        pcVar4 = (code *)swi(3);
        TVar14 = (*pcVar4)();
        return TVar14;
      }
      this->Linker->AsyncRoot = this;
      if (5 < (byte)LogStreaming._0_1_) {
        ::FName::ToString(&(this->Desc).PackagePath.PackageName,&local_328);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
        if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_328.Data.AllocatorInstance.Data);
        }
      }
      FLoadTimeProfilerTracePrivate::OutputAsyncPackageLinkerAssociation(this,this->Linker);
      if ((local_410 & 1) != 0) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if ((local_410 & 2) != 0) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((local_410 & 4) != 0) {
        FThreadStats::AddMessage(local_418,CycleScopeEnd);
      }
      local_410 = 0;
      if (bVar6) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar5) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (((bVar8) && (FVar35 != (FName)0x0)) &&
         ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff))))
      {
        this_02 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_02 == (FThreadStats *)0x0) {
          this_03 = FThreadStatsPool::Get();
          this_02 = FThreadStatsPool::GetFromPool(this_03);
        }
        if (this_02->bWaitForExplicitFlush < this_02->ScopeCount) {
          local_318.NameAndInfo.Index = FVar35.ComparisonIndex.Value;
          local_318.NameAndInfo.Number = FVar35.Number & 0xffff6fff | 0x6000;
          QueryPerformanceCounter(&local_348);
          local_318.StatData.Pad[4] = '\0';
          local_318.StatData.Pad[5] = '\0';
          local_318.StatData.Pad[6] = '\0';
          local_318.StatData.Pad[7] = '\0';
          local_318.StatData.Pad[0] = local_348.s.LowPart._0_1_;
          local_318.StatData.Pad[1] = local_348.s.LowPart._1_1_;
          local_318.StatData.Pad[2] = local_348.s.LowPart._2_1_;
          local_318.StatData.Pad[3] = local_348.s.LowPart._3_1_;
          FThreadStats::AddStatMessage(this_02,&local_318);
          piVar1 = &this_02->ScopeCount;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FThreadStats::Flush(this_02,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(this_02,false,false);
          }
        }
      }
      goto LAB_141ee7f76;
    }
LAB_141ee6e15:
    local_430.PackageName = (this->Desc).PackagePath.PackageName;
    pFVar20 = &(this->Desc).PackagePath;
    local_430.HeaderExtension = (this->Desc).PackagePath.HeaderExtension;
    FPackagePath::GetPackageName(&local_430,&local_458);
    if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
      cVar31 = '\0';
    }
    else {
      cVar31 = '\x01';
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId6215,"CreateLinker_GetRedirectedName",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                 ,0x1847);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId6215);
    }
    FVar33.Data = (FScriptContainerElement *)L"";
    if (local_458.Data.ArrayNum != 0) {
      FVar33.Data = local_458.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_3b0,(wchar_t *)FVar33.Data);
    local_3d0 = 0;
    local_3a0 = 0;
    local_250.ObjectName.ComparisonIndex.Value = 0;
    local_250.ObjectName.Number = 0;
    local_250.OuterName.ComparisonIndex.Value = 0;
    local_250.OuterName.Number = 0;
    local_250.PackageName = local_3b0;
    FCoreRedirects::GetRedirectedName(&local_170,Type_Package,&local_250,None);
    if (local_170.PackageName == local_3b0) {
LAB_141ee703f:
      if (cVar31 != '\0') {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
        cVar31 = '\0';
      }
      else {
        cVar31 = '\x01';
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId6233,"CreateLinker_MassagePath",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                   ,0x1859);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId6233);
      }
      FPackageName::GetDelegateResolvedPackagePath(&local_448,&local_458);
      pFVar17 = FPackageName::GetLocalizedPackagePath(&local_180,&local_448);
      if (&local_448 != pFVar17) {
        if (local_448.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_448.Data.AllocatorInstance.Data);
        }
        local_448.Data.AllocatorInstance.Data = (pFVar17->Data).AllocatorInstance.Data;
        (pFVar17->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_448.Data.ArrayNum = (pFVar17->Data).ArrayNum;
        local_448.Data.ArrayMax = (pFVar17->Data).ArrayMax;
        (pFVar17->Data).ArrayNum = 0;
        (pFVar17->Data).ArrayMax = 0;
      }
      if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_180.Data.AllocatorInstance.Data);
      }
      if (local_448.Data.ArrayNum == local_458.Data.ArrayNum) {
        if (1 < local_448.Data.ArrayNum) {
          iVar41 = FGenericPlatformStricmp::Stricmp
                             ((wchar_t *)local_448.Data.AllocatorInstance.Data,
                              (wchar_t *)local_458.Data.AllocatorInstance.Data);
          bVar10 = iVar41 == 0;
          goto LAB_141ee712e;
        }
LAB_141ee7264:
        if (local_448.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_448.Data.AllocatorInstance.Data);
        }
        if (cVar31 != '\0') {
          FCpuProfilerTrace::OutputEndEvent();
        }
        FVar34 = local_430.PackageName;
        local_370 = local_430.PackageName;
        if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
          EVar11 = FPackageName::DoesPackageExistEx(&local_430,FileSystem,false,&local_430);
        }
        else {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId6253,"CreateLinker_DoesExist",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                     ,0x186d);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId6253);
          EVar11 = FPackageName::DoesPackageExistEx(&local_430,FileSystem,false,&local_430);
          FCpuProfilerTrace::OutputEndEvent();
        }
        if (EVar11 != None) {
          if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
            bVar13 = false;
          }
          else {
            bVar13 = true;
            FCpuProfilerTrace::GetOrCreateSpecId
                      (&__CpuProfilerEventSpecId6319,"CreateLinker_CreateLinkerAsync",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                       ,0x18af);
            FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId6319);
          }
          this = local_420;
          pFVar23 = GetSerializeContext(local_420);
          if (GEventDrivenLoaderEnabled == false) {
            local_50 = (undefined ***)0x0;
            local_68 = &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
            local_60 = `FAsyncPackage::CreateLinker'::__l237::<lambda_2>::<lambda_invoker_cdecl>;
            local_78[0] = UE::Core::Private::Function::
                          TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
            pFVar21 = FLinkerLoad::CreateLinkerAsync
                                (pFVar23,this_01,&local_430,0x81,&(this->Desc).InstancingContext,
                                 (TFunction<void___cdecl(void)> *)local_78);
            this->Linker = pFVar21;
            if (local_78[0] != (code *)0x0) {
              pppuVar30 = &local_68;
              if (local_50 != (undefined ***)0x0) {
                pppuVar30 = local_50;
              }
              (*(code *)(*pppuVar30)[2])();
            }
          }
          else {
            local_388.PackageName = *pFVar15;
            local_388.SerialNumber = this->SerialNumber;
            FVar32.Value = local_388.PackageName.ComparisonIndex.Value;
            uVar39 = local_388.PackageName.Number;
            local_a8[0] = (code *)0x0;
            local_298 = this->AsyncLoadingThread->PrecacheHandler;
            iStack_2a0 = local_388.SerialNumber;
            local_80 = FMemory::Malloc(0x20,8);
            *local_80 = (code *)&UE::Core::Private::Function::
                                 TFunction_OwnedObject<`FAsyncPackage::CreateLinker'::`222'::<lambda_1>,0,1>
                                 ::_vftable_;
            *(uint *)(local_80 + 1) = FVar32.Value;
            *(uint *)((longlong)local_80 + 0xc) = uVar39;
            *(int *)(local_80 + 2) = iStack_2a0;
            *(undefined4 *)((longlong)local_80 + 0x14) = uStack_29c;
            local_2a8 = FVar32.Value;
            uStack_2a4 = uVar39;
            local_80[3] = (code *)local_298;
            if (local_80 + 1 != (code **)0x0) {
              local_a8[0] = UE::Core::Private::Function::
                            TFunctionRefCaller<`FAsyncPackage::CreateLinker'::__l222::<lambda_1>,void>
                            ::Call;
            }
            pFVar21 = FLinkerLoad::CreateLinkerAsync
                                (pFVar23,this_01,&local_430,0x81,&(this->Desc).InstancingContext,
                                 (TFunction<void___cdecl(void)> *)local_a8);
            this->Linker = pFVar21;
            if (local_a8[0] != (code *)0x0) {
              ppcVar29 = local_a8 + 2;
              if (local_80 != (code **)0x0) {
                ppcVar29 = local_80;
              }
              (**(code **)(*ppcVar29 + 0x10))();
            }
            if ((this->Linker != (FLinkerLoad *)0x0) &&
               (FPrecacheCallbackHandler::RegisterNewSummaryRequest
                          (this->AsyncLoadingThread->PrecacheHandler,this),
               this->Linker->Loader == (FArchive *)0x0)) {
              FPrecacheCallbackHandler::SummaryComplete
                        (this->AsyncLoadingThread->PrecacheHandler,&local_388);
              this->bLoadHasFailed = true;
            }
          }
          if (bVar13) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          if (local_458.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_458.Data.AllocatorInstance.Data);
          }
          if ((this->Linker == (FLinkerLoad *)0x0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Linker",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                                  ,0x18ce,L""), bVar13)) {
            pcVar4 = (code *)swi(3);
            TVar14 = (*pcVar4)();
            return TVar14;
          }
          goto LAB_141ee7dbe;
        }
        if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
          cVar31 = '\0';
          local_465 = '\0';
        }
        else {
          cVar31 = '\x01';
          local_465 = '\x01';
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId6260,"CreateLinker_MissingPackage",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                     ,0x1874);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId6260);
        }
        bVar10 = FLinkerLoad::IsKnownMissingPackage(FVar34);
        if (!bVar10) {
          if (1 < (byte)LogStreaming._0_1_) {
            local_268.Path = (wchar_t *)0x0;
            local_268.Object = (UObject *)0x0;
            local_268.PackagePath = pFVar20;
            pFVar17 = ::FName::ToString(pFVar15,&local_1b8);
            if ((pFVar17->Data).ArrayNum == 0) {
              local_158.Path = L"";
            }
            else {
              local_158.Path = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
            }
            local_158.PackagePath = (FPackagePath *)0x0;
            local_158.Object = (UObject *)0x0;
            UE::Logging::Private::
            LogWithFields<UE::Logging::Private::FStaticLogRecord,UE::FAssetLog,UE::FAssetLog>
                      ((FLogCategoryBase *)&LogStreaming,
                       (FStaticLogRecord *)&PTR_u_Couldn_t_find_f_1507ed6a8,&local_158,&local_268);
            if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
            }
          }
          if ((1 < (byte)LogStreaming._0_1_) && (local_420->bUseTimeLimit != false)) {
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
          }
          pFVar3 = local_420;
          if (GEventDrivenLoaderEnabled != false) {
            this_00 = &local_420->EventNodeArray;
            local_f8._0_8_ = 0;
            local_f8._8_8_ = 0;
            local_d8 = (uint *)0x0;
            local_d0 = 0;
            local_cc = 0x80;
            local_c8 = 0xffffffff;
            local_c4 = 0;
            local_b8 = (ForElementType<FSetElementId>)0x0;
            local_b0 = 0;
            local_3e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_3e0.ArrayNum = 0;
            local_3e0.ArrayMax = 0;
            FEventLoadNodeArray::GetAddedNodes(this_00,&local_3e0,local_420);
            uVar22 = (ulonglong)local_3e0.ArrayNum;
            local_340 = local_3e0.AllocatorInstance.Data + uVar22 * 0x10;
            local_460 = local_3e0.ArrayNum;
            uVar27 = uVar22;
            FVar33.Data = local_3e0.AllocatorInstance.Data;
            while( true ) {
              pFVar43 = local_340;
              local_3c0 = FVar33.Data;
              if ((int)uVar22 != (int)uVar27) {
                local_464 = 0;
                `TCheckedPointerIterator<FEventLoadNodePtr,int,0>::operator!='::__l2::<lambda_1>::
                operator()(&local_464);
              }
              FVar34 = local_370;
              FVar35 = local_3b8;
              cVar31 = local_465;
              if (FVar33.Data == pFVar43) break;
              local_3f8 = *(undefined8 *)FVar33.Data;
              uStack_3f0 = *(undefined8 *)(FVar33.Data + 8);
              uVar27 = *(ulonglong *)(FVar33.Data + 8);
              uVar39 = (uint)uVar27;
              if (uVar39 == 0) {
                uVar39 = (uint)(uVar27 >> 0x20);
                if ((2 < uVar39) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Index < int32(EEventLoadNode::Package_NumPhases) && Index >= 0"
                                        ,
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                                        ,0x10a,L""), bVar12)) {
                  pcVar4 = (code *)swi(3);
                  TVar14 = (*pcVar4)();
                  return TVar14;
                }
                pFVar38 = this_00->PackageNodes + (int)uVar39;
              }
              else {
                if (((pFVar3->EventNodeArray).TotalNumberOfImportExportNodes == 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("TotalNumberOfImportExportNodes",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                                        ,0x10d,L""), bVar12)) {
                  pcVar4 = (code *)swi(3);
                  TVar14 = (*pcVar4)();
                  return TVar14;
                }
                if ((int)uVar39 < 0) {
                  if ((1 < uStack_3f0._4_4_) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("int32(Node.Phase) < int32(EEventLoadNode::Import_NumPhases)"
                                          ,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                                          ,0x110,L""), bVar12)) {
                    pcVar4 = (code *)swi(3);
                    TVar14 = (*pcVar4)();
                    return TVar14;
                  }
                  if (((uVar27 >> 0x1f & 1) == 0) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsImport()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                                          ,0x55,L""), bVar12)) {
                    pcVar4 = (code *)swi(3);
                    TVar14 = (*pcVar4)();
                    return TVar14;
                  }
                  iVar41 = uStack_3f0._4_4_ + ~uVar39 * 2 + (pFVar3->EventNodeArray).OffsetToImports
                  ;
                  if ((iVar41 < (pFVar3->EventNodeArray).OffsetToImports) ||
                     ((pFVar3->EventNodeArray).OffsetToExports <= iVar41)) {
                    iVar36 = 0x112;
                    pcVar26 = "Index >= OffsetToImports && Index < OffsetToExports";
LAB_141ee767a:
                    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       (pcVar26,
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                                        ,iVar36,L"");
                    if (bVar12) {
                      pcVar4 = (code *)swi(3);
                      TVar14 = (*pcVar4)();
                      return TVar14;
                    }
                  }
                }
                else {
                  if ((2 < uStack_3f0._4_4_) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("int32(Node.Phase) < int32(EEventLoadNode::Export_NumPhases)"
                                          ,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                                          ,0x116,L""), bVar12)) {
                    pcVar4 = (code *)swi(3);
                    TVar14 = (*pcVar4)();
                    return TVar14;
                  }
                  if (((int)uVar39 < 1) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsExport()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                                          ,0x5b,L""), bVar12)) {
                    pcVar4 = (code *)swi(3);
                    TVar14 = (*pcVar4)();
                    return TVar14;
                  }
                  iVar41 = uVar39 * 3 + -3 + uStack_3f0._4_4_ +
                           (pFVar3->EventNodeArray).OffsetToExports;
                  if (iVar41 < (pFVar3->EventNodeArray).OffsetToExports) {
                    iVar36 = 0x118;
                    pcVar26 = "Index >= OffsetToExports";
                    goto LAB_141ee767a;
                  }
                }
                if (((((pFVar3->EventNodeArray).Array == (FEventLoadNode *)0x0) ||
                     ((pFVar3->EventNodeArray).TotalNumberOfImportExportNodes <= iVar41)) ||
                    (iVar41 < 0)) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Array && Index < TotalNumberOfImportExportNodes && Index >= 0"
                                        ,
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                                        ,0x11a,L""), bVar12)) {
                  pcVar4 = (code *)swi(3);
                  TVar14 = (*pcVar4)();
                  return TVar14;
                }
                pFVar38 = (pFVar3->EventNodeArray).Array + iVar41;
              }
              if ((pFVar38->bAddedToGraph == false) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("!bCheckAdded || NodeRef.bAddedToGraph",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                                      ,0xfc,L""), bVar12)) {
                pcVar4 = (code *)swi(3);
                TVar14 = (*pcVar4)();
                return TVar14;
              }
              iVar41 = (pFVar38->NodesWaitingForMe).ArrayNum;
              pFVar43 = (pFVar38->NodesWaitingForMe).AllocatorInstance.Data;
              pFVar40 = pFVar43 + (longlong)iVar41 * 0x10;
              while( true ) {
                if ((pFVar38->NodesWaitingForMe).ArrayNum != iVar41) {
                  local_463[0] = 0;
                  `TCheckedPointerIterator<FEventLoadNodePtr_const_,int,0>::operator!='::__l2::
                  <lambda_1>::operator()(local_463);
                }
                if (pFVar43 == pFVar40) break;
                if (*(longlong *)pFVar43 == 0) {
                  local_3c8 = 0;
LAB_141ee7761:
                  pFVar43 = pFVar43 + 0x10;
                }
                else {
                  local_3c8 = *(longlong *)(*(longlong *)pFVar43 + 0x14);
                  if (local_3c8 == 0) goto LAB_141ee7761;
                  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                            ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_f8,
                             (FName *)local_378,(bool *)&local_3c8);
                  pFVar43 = pFVar43 + 0x10;
                }
              }
              uVar22 = local_3e0._8_8_ & 0xffffffff;
              FVar33.Data = local_3c0 + 0x10;
              uVar27 = (ulonglong)local_460;
            }
            if (1 < (byte)LogStreaming._0_1_) {
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
            }
            iStack_300 = 0;
            uStack_2fc = 1;
            local_2e8 = 0;
            uStack_2ec = 0;
            if (local_d0 != 0) {
              puVar37 = (uint *)(local_f8 + 0x10);
              if (local_d8 != (uint *)0x0) {
                puVar37 = local_d8;
              }
              uVar39 = *puVar37;
              local_2e8 = 0;
              while (uVar39 == 0) {
                lVar28 = (longlong)iStack_300;
                local_2e8 = local_2e8 + 0x20;
                iStack_300 = iStack_300 + 1;
                uStack_2ec = local_d0;
                if ((int)((local_d0 - 1) + ((int)(local_d0 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_300)
                goto LAB_141ee7841;
                uVar39 = puVar37[lVar28 + 1];
              }
              uStack_2fc = -uVar39 & uVar39;
              uVar27 = (ulonglong)uStack_2fc * 2 + 1;
              lVar28 = 0x3f;
              if (uVar27 != 0) {
                for (; uVar27 >> lVar28 == 0; lVar28 = lVar28 + -1) {
                }
              }
              local_408 = (uint)lVar28;
              uStack_2ec = local_2e8 + -1 + local_408;
              if ((int)local_d0 < (int)uStack_2ec) {
                uStack_2ec = local_d0;
              }
            }
LAB_141ee7841:
            local_308 = (longlong *)local_f8;
            uStack_2e4 = local_104;
            uVar39 = local_d0 & 0xffffffe0;
            iStack_2e0 = local_f8._8_4_ - local_c4;
            local_2f8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10);
            uStack_2f0 = 0xffffffff;
            TStack_2d0.CurrentBitIndex = uStack_2ec;
            TStack_2d0.UnvisitedBitMask = 0xffffffff;
            TStack_2d0._padding_ = CONCAT44(uStack_2fc,iStack_300);
            iVar41 = (int)local_d0 >> 5;
            bVar24 = (byte)local_d0;
            local_460 = local_d0;
            TStack_2d0._28_4_ = local_104;
            TStack_2d0.BaseBitIndex = local_2e8;
            uStack_2b0 = CONCAT44(uStack_2dc,iStack_2e0);
            local_2d8 = local_308;
            TStack_2d0.Array = local_2f8;
            if (((int)local_d0 < 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x7af,L""), bVar12)) {
              pcVar4 = (code *)swi(3);
              TVar14 = (*pcVar4)();
              return TVar14;
            }
            uVar42 = local_460;
            if (local_460 != local_d0) {
              puVar37 = (uint *)(local_f8 + 0x10);
              if (local_d8 != (uint *)0x0) {
                puVar37 = local_d8;
              }
              uVar42 = -1 << (bVar24 & 0x1f) & puVar37[iVar41];
              while (uVar42 == 0) {
                lVar28 = (longlong)iVar41;
                uVar39 = uVar39 + 0x20;
                iVar41 = iVar41 + 1;
                uVar42 = local_d0;
                if ((int)((local_d0 - 1) + ((int)(local_d0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar41)
                goto LAB_141ee79a3;
                uVar42 = puVar37[lVar28 + 1];
              }
              uVar27 = (ulonglong)(-uVar42 & uVar42) * 2 + 1;
              lVar28 = 0x3f;
              if (uVar27 != 0) {
                for (; uVar27 >> lVar28 == 0; lVar28 = lVar28 + -1) {
                }
              }
              uVar42 = (uVar39 - 1) + (int)lVar28;
              if ((int)local_d0 < (int)uVar42) {
                uVar42 = local_d0;
              }
            }
LAB_141ee79a3:
            while( true ) {
              plVar7 = local_2d8;
              if ((int)local_2d8[1] - *(int *)((longlong)local_2d8 + 0x34) != (int)uStack_2b0) {
                `TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_438);
              }
              if (((TStack_2d0.CurrentBitIndex == uVar42) &&
                  (TStack_2d0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10)))
                 && (plVar7 == (longlong *)local_f8)) break;
              if (1 < (byte)LogStreaming._0_1_) {
                ::FName::ToString((FName *)((longlong)TStack_2d0.CurrentBitIndex * 0x10 + *plVar7),
                                  &local_1a8);
                UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
                if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
                }
              }
              TStack_2d0.UnvisitedBitMask =
                   TStack_2d0.UnvisitedBitMask & ~TStack_2d0._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2d0);
            }
            if (local_3e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_3e0.AllocatorInstance.Data);
            }
            local_b0 = 0;
            if (local_b8 != (ForElementType<FSetElementId>)0x0) {
              FMemory::Free((void *)local_b8);
            }
            TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)local_f8);
            bVar12 = bVar13;
          }
          FLinkerLoad::AddKnownMissingPackage(FVar34);
        }
        goto LAB_141ee7aa5;
      }
      bVar10 = local_458.Data.ArrayNum + local_448.Data.ArrayNum == 1;
LAB_141ee712e:
      if (bVar10) goto LAB_141ee7264;
      iVar41 = local_448.Data.ArrayNum;
      if (local_458.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_458.Data.AllocatorInstance.Data);
        iVar41 = local_448.Data.ArrayNum;
      }
      local_458.Data.ArrayMax = local_448.Data.ArrayMax;
      iStack_270 = iVar41 + -1;
      local_278 = local_448.Data.AllocatorInstance.Data;
      if (iVar41 == 0) {
        iStack_270 = 0;
      }
      local_1e8._12_4_ = uStack_26c;
      local_1e8.Size = iStack_270;
      local_458.Data.AllocatorInstance.Data = local_448.Data.AllocatorInstance.Data;
      local_1e8.DataPtr = (wchar_t *)local_448.Data.AllocatorInstance.Data;
      local_448.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_448.Data.ArrayNum = 0;
      local_448.Data.ArrayMax = 0;
      local_458.Data.ArrayNum = iVar41;
      bVar10 = FPackagePath::TryFromMountedName(&local_1e8,&local_430);
      if (bVar10) goto LAB_141ee7264;
      if (1 < (byte)LogStreaming._0_1_) {
        ::FName::ToString(pFVar15,&local_1c8);
        FPackagePath::GetPackageName(pFVar20,&local_1d8);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
        if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
        }
        if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
        }
      }
      local_420->bLoadHasFailed = true;
      if (local_448.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_448.Data.AllocatorInstance.Data);
      }
    }
    else {
      pFVar17 = ::FName::ToString(&local_170.PackageName,&local_238);
      if (&local_458 != pFVar17) {
        if (local_458.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_458.Data.AllocatorInstance.Data);
        }
        local_458.Data.AllocatorInstance.Data = (pFVar17->Data).AllocatorInstance.Data;
        (pFVar17->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_458.Data.ArrayNum = (pFVar17->Data).ArrayNum;
        local_458.Data.ArrayMax = (pFVar17->Data).ArrayMax;
        (pFVar17->Data).ArrayNum = 0;
        (pFVar17->Data).ArrayMax = 0;
      }
      if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_238.Data.AllocatorInstance.Data);
      }
      local_288 = local_458.Data.AllocatorInstance.Data;
      iStack_280 = local_458.Data.ArrayNum + -1;
      if (local_458.Data.ArrayNum == 0) {
        iStack_280 = 0;
      }
      local_228._12_4_ = uStack_27c;
      local_228.Size = iStack_280;
      local_228.DataPtr = (wchar_t *)local_458.Data.AllocatorInstance.Data;
      bVar10 = FPackagePath::TryFromMountedName(&local_228,&local_430);
      if (bVar10) goto LAB_141ee703f;
      if (1 < (byte)LogStreaming._0_1_) {
        ::FName::ToString(pFVar15,&local_208);
        FPackagePath::GetPackageName(pFVar20,&local_218);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
        if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_218.Data.AllocatorInstance.Data);
        }
        if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_208.Data.AllocatorInstance.Data);
        }
      }
LAB_141ee7aa5:
      local_420->bLoadHasFailed = true;
    }
    if (cVar31 != '\0') {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (local_458.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_458.Data.AllocatorInstance.Data);
    }
    if ((local_410 & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((local_410 & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((local_410 & 4) != 0) {
      FThreadStats::AddMessage(local_418,CycleScopeEnd);
    }
    local_410 = 0;
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar8) {
    FThreadStats::AddMessage(FVar35,CycleScopeEnd);
  }
  TVar14 = TimeOut;
LAB_141ee7f7b:
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return TVar14;
}

// DetachLinker @ 141ee8970

void __thiscall FAsyncPackage::DetachLinker(FAsyncPackage *this)

{
  FAsyncPackage *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString local_18;
  
  if (this->Linker != (FLinkerLoad *)0x0) {
    FLinkerLoad::FlushCache((FLinkerLoad *)&this->Linker->_padding_);
    if ((this->bLoadHasFinished == false) && (this->bLoadHasFailed == false)) {
      ::FName::ToString(&(this->Desc).Name,&local_18);
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("bLoadHasFinished || bLoadHasFailed",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                         ,0x16bc,
                         L"FAsyncPackage::DetachLinker called before load finished on package \"%s\""
                        );
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = this->Linker->AsyncRoot;
    if (((pFVar1 != this) && (pFVar1 != (FAsyncPackage *)0x0)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Linker->AsyncRoot == this || Linker->AsyncRoot == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                           ,0x16bd,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    this->Linker->AsyncRoot = (void *)0x0;
    this->Linker = (FLinkerLoad *)0x0;
  }
  return;
}

// DoneAddingPrerequistesFireIfNone @ 141eea1e0

/* WARNING: Enum "EEventLoadNode": Some values do not have unique names */

void __thiscall
FAsyncPackage::DoneAddingPrerequistesFireIfNone
          (FAsyncPackage *this,EEventLoadNode param_1,FPackageIndex param_2,bool param_3)

{
  FEventLoadNodePtr local_18;
  
  local_18.WaitingPackage.Package = this;
  local_18.ImportOrExportIndex.Index = param_2.Index;
  local_18.Phase = param_1;
  FEventLoadGraph::DoneAddingPrerequistesFireIfNone
            (&this->AsyncLoadingThread->EventGraph,&local_18,param_3);
  return;
}

// DumpDependencies @ 141eea560

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAsyncPackage::DumpDependencies
          (FAsyncPackage *this,wchar_t *param_1,FLinkerLoad *param_2,FPackageIndex param_3)

{
  longlong *this_00;
  longlong *plVar1;
  FPackageIndex FVar2;
  code *pcVar3;
  ulonglong uVar4;
  bool bVar5;
  uint uVar6;
  FObjectExport *pFVar7;
  FObjectExport *pFVar8;
  FObjectResource *pFVar9;
  ForAnyElementType FVar10;
  bool bVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  this_00 = &param_2->_padding_;
  bVar11 = false;
  pFVar7 = FLinkerTables::Exp((FLinkerTables *)this_00,param_3);
  if (*param_1 != L'\0') {
    if ((byte)LogStreaming._0_1_ < 2) goto LAB_141eea6af;
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
  }
  if (1 < (byte)LogStreaming._0_1_) {
    if (param_3.Index < 0) {
      FLinkerTables::GetImportPathName((FLinkerTables *)this_00,&local_118,~param_3.Index);
    }
    else if (param_3.Index < 1) {
      local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_118.Data.ArrayNum = 0;
      local_118.Data.ArrayMax = 0;
    }
    else {
      FLinker::GetExportPathName
                ((FLinker *)param_2,&local_118,param_3.Index + -1,(wchar_t *)0x0,false);
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
    if (1 < (byte)LogStreaming._0_1_) {
      FLinkerLoad::GetArchiveName((FLinkerLoad *)&param_2->_padding_,&local_88);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
    }
  }
LAB_141eea6af:
  uVar13 = (ulonglong)pFVar7->FirstExportDependency;
  if (-1 < pFVar7->FirstExportDependency) {
    uVar4 = uVar13;
    for (iVar14 = pFVar7->SerializationBeforeSerializationDependencies; uVar6 = (uint)uVar13,
        0 < iVar14; iVar14 = iVar14 + -1) {
      uVar12 = 0;
      if ((int)uVar6 < (param_2->PreloadDependencies).ArrayNum) {
        uVar12 = ~uVar6 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar13 = (ulonglong)(uVar6 + 1);
      FVar2.Index = *(int *)((param_2->PreloadDependencies).AllocatorInstance.Data + uVar4 * 4);
      if (FVar2.Index == 0) {
        if (1 < (byte)LogStreaming._0_1_) {
          UE::Logging::Private::BasicLog<2>
                    ((FStaticBasicLogRecord *)&PTR_u_________Dep__s__1507e9fc0,
                     (FLogCategoryBase *)&LogStreaming);
        }
      }
      else if (FVar2.Index < 0) {
        if (1 < (byte)LogStreaming._0_1_) {
          FLinkerTables::GetImportPathName
                    ((FLinkerTables *)&param_2->_padding_,&local_c8,-1 - FVar2.Index);
          UE::Logging::Private::BasicLog<2>
                    ((FStaticBasicLogRecord *)&PTR_u_________Dep__s__1507ea008,
                     (FLogCategoryBase *)&LogStreaming);
          if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c8.Data.AllocatorInstance.Data);
          }
        }
      }
      else if (1 < (byte)LogStreaming._0_1_) {
        pFVar8 = FLinkerTables::Exp((FLinkerTables *)this_00,FVar2);
        if ((pFVar8->ClassIndex).Index != 0) {
          pFVar8 = FLinkerTables::Exp((FLinkerTables *)this_00,FVar2);
          pFVar9 = FLinkerTables::ImpExp
                             ((FLinkerTables *)this_00,(FPackageIndex)(pFVar8->ClassIndex).Index);
          bVar11 = true;
          ::FName::ToString(&pFVar9->ObjectName,&local_78);
        }
        if (FVar2.Index < 1) {
          local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_108.Data.ArrayNum = 0;
          local_108.Data.ArrayMax = 0;
LAB_141eea875:
          if ((FVar2.Index < 1) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsExport()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                                 ,0x5b,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        else {
          FLinker::GetExportPathName
                    ((FLinker *)param_2,&local_108,FVar2.Index + -1,(wchar_t *)0x0,false);
          if (local_108.Data.ArrayNum == 0) goto LAB_141eea875;
        }
        UE::Logging::Private::BasicLog<2>
                  ((FStaticBasicLogRecord *)&PTR_u_________Dep__s__1507ea068,
                   (FLogCategoryBase *)&LogStreaming);
        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
        }
        if ((bVar11) &&
           (bVar11 = false, local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
        {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
      }
      uVar4 = uVar4 + 1;
    }
    bVar11 = false;
    iVar14 = pFVar7->CreateBeforeSerializationDependencies;
    if (0 < iVar14) {
      plVar1 = &param_2->_padding_;
      lVar15 = (longlong)(int)uVar6;
      do {
        uVar12 = (uint)uVar13;
        uVar6 = 0;
        if ((int)uVar12 < (param_2->PreloadDependencies).ArrayNum) {
          uVar6 = ~uVar12 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar13 = (ulonglong)(uVar12 + 1);
        FVar2.Index = *(int *)((param_2->PreloadDependencies).AllocatorInstance.Data + lVar15 * 4);
        if (FVar2.Index == 0) {
          if (1 < (byte)LogStreaming._0_1_) {
            UE::Logging::Private::BasicLog<2>
                      ((FStaticBasicLogRecord *)&PTR_u_________Dep__s__1507e9fc0,
                       (FLogCategoryBase *)&LogStreaming);
          }
        }
        else {
          if (FVar2.Index < 0) {
            if ((byte)LogStreaming._0_1_ < 2) goto LAB_141eeab64;
            FLinkerTables::GetImportPathName((FLinkerTables *)this_00,&local_b8,-1 - FVar2.Index);
            UE::Logging::Private::BasicLog<2>
                      ((FStaticBasicLogRecord *)&PTR_u_________Dep__s__1507ea008,
                       (FLogCategoryBase *)&LogStreaming);
            FVar10.Data = local_b8.Data.AllocatorInstance.Data;
          }
          else {
            if ((byte)LogStreaming._0_1_ < 2) goto LAB_141eeab64;
            pFVar8 = FLinkerTables::Exp((FLinkerTables *)plVar1,FVar2);
            if ((pFVar8->ClassIndex).Index != 0) {
              pFVar8 = FLinkerTables::Exp((FLinkerTables *)plVar1,FVar2);
              pFVar9 = FLinkerTables::ImpExp
                                 ((FLinkerTables *)plVar1,(FPackageIndex)(pFVar8->ClassIndex).Index)
              ;
              bVar11 = true;
              ::FName::ToString(&pFVar9->ObjectName,&local_68);
            }
            if (FVar2.Index < 1) {
              local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_f8.Data.ArrayNum = 0;
              local_f8.Data.ArrayMax = 0;
LAB_141eeaad1:
              if ((FVar2.Index < 1) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsExport()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                                     ,0x5b,L""), bVar5)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            else {
              FLinker::GetExportPathName
                        ((FLinker *)param_2,&local_f8,FVar2.Index + -1,(wchar_t *)0x0,false);
              if (local_f8.Data.ArrayNum == 0) goto LAB_141eeaad1;
            }
            UE::Logging::Private::BasicLog<2>
                      ((FStaticBasicLogRecord *)&PTR_u_________Dep__s__1507ea068,
                       (FLogCategoryBase *)&LogStreaming);
            if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_f8.Data.AllocatorInstance.Data);
            }
            if (!bVar11) goto LAB_141eeab64;
            bVar11 = false;
            FVar10.Data = local_68.Data.AllocatorInstance.Data;
          }
          if (FVar10.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar10.Data);
          }
        }
LAB_141eeab64:
        iVar14 = iVar14 + -1;
        lVar15 = lVar15 + 1;
      } while (0 < iVar14);
    }
    bVar11 = false;
    iVar14 = pFVar7->SerializationBeforeCreateDependencies;
    if (0 < iVar14) {
      plVar1 = &param_2->_padding_;
      lVar15 = (longlong)(int)uVar13;
      do {
        uVar12 = (uint)uVar13;
        uVar6 = 0;
        if ((int)uVar12 < (param_2->PreloadDependencies).ArrayNum) {
          uVar6 = ~uVar12 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar13 = (ulonglong)(uVar12 + 1);
        FVar2.Index = *(int *)((param_2->PreloadDependencies).AllocatorInstance.Data + lVar15 * 4);
        if (FVar2.Index == 0) {
          if (1 < (byte)LogStreaming._0_1_) {
            UE::Logging::Private::BasicLog<2>
                      ((FStaticBasicLogRecord *)&PTR_u_________Dep__s__1507e9fc0,
                       (FLogCategoryBase *)&LogStreaming);
          }
        }
        else {
          if (FVar2.Index < 0) {
            if ((byte)LogStreaming._0_1_ < 2) goto LAB_141eeadb5;
            FLinkerTables::GetImportPathName((FLinkerTables *)this_00,&local_a8,-1 - FVar2.Index);
            UE::Logging::Private::BasicLog<2>
                      ((FStaticBasicLogRecord *)&PTR_u_________Dep__s__1507ea008,
                       (FLogCategoryBase *)&LogStreaming);
            FVar10.Data = local_a8.Data.AllocatorInstance.Data;
          }
          else {
            if ((byte)LogStreaming._0_1_ < 2) goto LAB_141eeadb5;
            pFVar8 = FLinkerTables::Exp((FLinkerTables *)plVar1,FVar2);
            if ((pFVar8->ClassIndex).Index != 0) {
              pFVar8 = FLinkerTables::Exp((FLinkerTables *)plVar1,FVar2);
              pFVar9 = FLinkerTables::ImpExp
                                 ((FLinkerTables *)plVar1,(FPackageIndex)(pFVar8->ClassIndex).Index)
              ;
              bVar11 = true;
              ::FName::ToString(&pFVar9->ObjectName,&local_58);
            }
            if (FVar2.Index < 1) {
              local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_e8.Data.ArrayNum = 0;
              local_e8.Data.ArrayMax = 0;
LAB_141eead22:
              if ((FVar2.Index < 1) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsExport()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                                     ,0x5b,L""), bVar5)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            else {
              FLinker::GetExportPathName
                        ((FLinker *)param_2,&local_e8,FVar2.Index + -1,(wchar_t *)0x0,false);
              if (local_e8.Data.ArrayNum == 0) goto LAB_141eead22;
            }
            UE::Logging::Private::BasicLog<2>
                      ((FStaticBasicLogRecord *)&PTR_u_________Dep__s__1507ea068,
                       (FLogCategoryBase *)&LogStreaming);
            if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_e8.Data.AllocatorInstance.Data);
            }
            if (!bVar11) goto LAB_141eeadb5;
            bVar11 = false;
            FVar10.Data = local_58.Data.AllocatorInstance.Data;
          }
          if (FVar10.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar10.Data);
          }
        }
LAB_141eeadb5:
        iVar14 = iVar14 + -1;
        lVar15 = lVar15 + 1;
      } while (0 < iVar14);
    }
    bVar11 = false;
    iVar14 = pFVar7->CreateBeforeCreateDependencies;
    if (0 < iVar14) {
      plVar1 = &param_2->_padding_;
      lVar15 = (longlong)(int)uVar13;
      do {
        uVar12 = (uint)uVar13;
        uVar6 = 0;
        if ((int)uVar12 < (param_2->PreloadDependencies).ArrayNum) {
          uVar6 = ~uVar12 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar13 = (ulonglong)(uVar12 + 1);
        FVar2.Index = *(int *)((param_2->PreloadDependencies).AllocatorInstance.Data + lVar15 * 4);
        if (FVar2.Index == 0) {
          if (1 < (byte)LogStreaming._0_1_) {
            UE::Logging::Private::BasicLog<2>
                      ((FStaticBasicLogRecord *)&PTR_u_________Dep__s__1507e9fc0,
                       (FLogCategoryBase *)&LogStreaming);
          }
        }
        else {
          if (FVar2.Index < 0) {
            if ((byte)LogStreaming._0_1_ < 2) goto LAB_141eeb00e;
            FLinkerTables::GetImportPathName((FLinkerTables *)this_00,&local_98,-1 - FVar2.Index);
            UE::Logging::Private::BasicLog<2>
                      ((FStaticBasicLogRecord *)&PTR_u_________Dep__s__1507ea008,
                       (FLogCategoryBase *)&LogStreaming);
            FVar10.Data = local_98.Data.AllocatorInstance.Data;
          }
          else {
            if ((byte)LogStreaming._0_1_ < 2) goto LAB_141eeb00e;
            pFVar7 = FLinkerTables::Exp((FLinkerTables *)plVar1,FVar2);
            if ((pFVar7->ClassIndex).Index != 0) {
              pFVar7 = FLinkerTables::Exp((FLinkerTables *)plVar1,FVar2);
              pFVar9 = FLinkerTables::ImpExp
                                 ((FLinkerTables *)plVar1,(FPackageIndex)(pFVar7->ClassIndex).Index)
              ;
              bVar11 = true;
              ::FName::ToString(&pFVar9->ObjectName,&local_48);
            }
            if (FVar2.Index < 1) {
              local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_d8.Data.ArrayNum = 0;
              local_d8.Data.ArrayMax = 0;
LAB_141eeaf7c:
              if ((FVar2.Index < 1) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsExport()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                                     ,0x5b,L""), bVar5)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            else {
              FLinker::GetExportPathName
                        ((FLinker *)param_2,&local_d8,FVar2.Index + -1,(wchar_t *)0x0,false);
              if (local_d8.Data.ArrayNum == 0) goto LAB_141eeaf7c;
            }
            UE::Logging::Private::BasicLog<2>
                      ((FStaticBasicLogRecord *)&PTR_u_________Dep__s__1507ea068,
                       (FLogCategoryBase *)&LogStreaming);
            if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_d8.Data.AllocatorInstance.Data);
            }
            if (!bVar11) goto LAB_141eeb00e;
            bVar11 = false;
            FVar10.Data = local_48.Data.AllocatorInstance.Data;
          }
          if (FVar10.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar10.Data);
          }
        }
LAB_141eeb00e:
        iVar14 = iVar14 + -1;
        lVar15 = lVar15 + 1;
      } while (0 < iVar14);
    }
  }
  return;
}

// DumpDependencies @ 141eeb040

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAsyncPackage::DumpDependencies(FAsyncPackage *this,wchar_t *param_1,UObject *param_2)

{
  FAdditionalInfo *pFVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UPackage *this_00;
  FLinkerLoad *pFVar6;
  uint uVar7;
  longlong lVar8;
  FString local_48;
  FString local_38;
  
  if (1 < (byte)LogStreaming._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
  }
  if (param_2 == (UObject *)0x0) {
    if (1 < (byte)LogStreaming._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
      return;
    }
  }
  else {
    if (1 < (byte)LogStreaming._0_1_) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_2,&local_48,(UObject *)0x0,None);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    this_00 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)param_2);
    pFVar1 = (this_00->AdditionalInfo).Ptr;
    if ((pFVar1 == (FAdditionalInfo *)0x0) || (pFVar1->LinkerLoad == (FLinkerLoad *)0x0)) {
      if (1 < (byte)LogStreaming._0_1_) {
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this_00,&local_38,(UObject *)0x0,None)
        ;
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
          return;
        }
      }
    }
    else {
      uVar7 = 0;
      lVar8 = 0;
      while( true ) {
        pFVar1 = (this_00->AdditionalInfo).Ptr;
        if (pFVar1 == (FAdditionalInfo *)0x0) {
          pFVar6 = (FLinkerLoad *)0x0;
        }
        else {
          pFVar6 = pFVar1->LinkerLoad;
        }
        if ((int)pFVar6->_padding_ <= (int)uVar7) break;
        if (pFVar1 == (FAdditionalInfo *)0x0) {
          pFVar6 = (FLinkerLoad *)0x0;
        }
        else {
          pFVar6 = pFVar1->LinkerLoad;
        }
        uVar5 = 0;
        if ((int)uVar7 < (int)pFVar6->_padding_) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pUVar2 = *(UObject **)(pFVar6->_padding_ + 0x40 + lVar8);
        if (((pUVar2 == param_2) || (pUVar2 == (UObject *)0x0)) &&
           (*(longlong *)(pFVar6->_padding_ + lVar8) == *(longlong *)&param_2->field_0x18)) {
          if (((int)uVar7 < 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("ExportIndex >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                                 ,0x6d,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar1 = (this_00->AdditionalInfo).Ptr;
          if (pFVar1 == (FAdditionalInfo *)0x0) {
            pFVar6 = (FLinkerLoad *)0x0;
          }
          else {
            pFVar6 = pFVar1->LinkerLoad;
          }
          DumpDependencies(this,L"",pFVar6,(FPackageIndex)(uVar7 + 1));
        }
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 0x68;
      }
    }
  }
  return;
}

// EmptyReferencedObjects @ 141eebb70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall FAsyncPackage::EmptyReferencedObjects(FAsyncPackage *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined1 *puVar1;
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> *this_00;
  ulonglong uVar2;
  int iVar3;
  UObjectBase *this_01;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FUObjectItem *pFVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lpCriticalSection = &this->ReferencedObjectsCritical;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  puVar1 = &(this->ReferencedObjects).Elements.field_0x10;
  iVar11 = 0;
  iVar3 = *(int *)&(this->ReferencedObjects).Elements.field_0x28;
  this_00 = &this->ReferencedObjects;
  iVar13 = 0;
  uVar6 = 1;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->ReferencedObjects).Elements.field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_141eebc3f;
      uVar10 = puVar14[lVar9 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res10 = (int)lVar9;
    iVar7 = iVar13 + -1 + local_res10;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_141eebc3f:
  uVar10 = *(uint *)&(this->ReferencedObjects).Elements.field_0x28;
  uVar15 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->ReferencedObjects).Elements.field_0x8 -
                       *(int *)&(this->ReferencedObjects).Elements.field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->ReferencedObjects).Elements.field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->ReferencedObjects).Elements.field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar11;
      uVar15 = uVar15 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_141eebd50;
      uVar10 = *(uint *)(puVar12 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res18 = (int)lVar9;
    uVar10 = local_res18 + -1 + uVar15;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_141eebd50:
  do {
    if (*(int *)&(this->ReferencedObjects).Elements.field_0x8 -
        *(int *)&(this->ReferencedObjects).Elements.field_0x34 != (int)uStack_40) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      if (*(int *)&(this->ReferencedObjects).Elements.field_0x8 !=
          *(int *)&(this->ReferencedObjects).Elements.field_0x34) {
        TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
        UnhashElements(this_00);
        iVar3 = *(int *)&(this->ReferencedObjects).Elements.field_0xc;
        *(undefined4 *)&(this->ReferencedObjects).Elements.field_0x8 = 0;
        if (iVar3 < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,(ForAnyElementType *)this_00,0,
                     (int *)&(this->ReferencedObjects).Elements.field_0xc);
        }
        *(undefined4 *)&(this->ReferencedObjects).Elements.field_0x30 = 0xffffffff;
        *(undefined4 *)&(this->ReferencedObjects).Elements.field_0x34 = 0;
        *(undefined4 *)&(this->ReferencedObjects).Elements.field_0x28 = 0;
      }
                    /* WARNING: Could not recover jumptable at 0x000141eebeab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return;
    }
    this_01 = *(UObjectBase **)
               (*(longlong *)&this_00->Elements + (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (this_01 != (UObjectBase *)0x0) {
      bVar5 = UObjectBase::IsValidLowLevelFast(this_01,true);
      if (!bVar5) {
        UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
      }
      pFVar8 = FUObjectArray::IndexToObject(&GUObjectArray,this_01->InternalIndex);
      FUObjectItem::ClearRootFlags(pFVar8,AsyncLoadingPhase2|Async|AsyncLoadingPhase1);
      pFVar8 = FUObjectArray::IndexToObject(&GUObjectArray,this_01->InternalIndex);
      if ((((pFVar8->field0_0x0).FlagsAndRefCount >> 0x20 & 0xc400000U) != 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!Obj->HasAnyInternalFlags(AsyncFlags)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                             ,0x1679,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  } while( true );
}

// EndAsyncLoad @ 141eebec0

void __thiscall FAsyncPackage::EndAsyncLoad(FAsyncPackage *this)

{
  code *pcVar1;
  bool bVar2;
  uint *puVar3;
  FTlsAutoCleanup *pFVar4;
  undefined1 local_res8 [32];
  code *local_18;
  undefined1 *local_10;
  
  bVar2 = (*IsAsyncLoading)();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsAsyncLoading()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                       ,0x1712,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  puVar3 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar4 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,puVar3);
  EndLoad((FUObjectSerializeContext *)pFVar4[0x2f]);
  bVar2 = IsInGameThread();
  if (bVar2) {
    FAsyncLoadingThread::LeaveAsyncLoadingTick(this->AsyncLoadingThread->AsyncLoadingThreadIndex);
  }
  if (this->bLoadHasFailed == false) {
    UObjectBase::AtomicallySetFlags((UObjectBase *)this->LinkerRoot,RF_WasLoaded);
    return;
  }
  return;
}

// EventDrivenCreateExport @ 141eec110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall FAsyncPackage::EventDrivenCreateExport(FAsyncPackage *this,int param_1)

{
  FName *pFVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  FAsyncArchive *this_00;
  UObjectBaseUtility *pUVar7;
  longlong lVar8;
  code *pcVar9;
  bool bVar10;
  double dVar11;
  bool bVar12;
  uint uVar13;
  UObject *pUVar14;
  TEventRef<unsigned_int> TVar15;
  uint *puVar16;
  FTlsAutoCleanup *pFVar17;
  FTlsAutoCleanup FVar18;
  FObjectResource *pFVar19;
  UClass *pUVar20;
  FName FVar21;
  FUObjectItem *pFVar22;
  FWriteBuffer *pFVar23;
  FName FVar24;
  FLinkerLoad *pFVar25;
  ulonglong uVar26;
  longlong *plVar27;
  ulonglong uVar28;
  FPackageIndex FVar29;
  FTlsAutoCleanup FVar30;
  ForAnyElementType FVar31;
  FName *this_01;
  UClass *pUVar32;
  undefined1 auStackY_3c8 [32];
  undefined1 local_380 [8];
  FTlsAutoCleanup local_378;
  int local_370;
  FTlsAutoCleanup local_368;
  undefined1 local_35f [7];
  FName local_358;
  FLLMScope local_350 [2];
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_348;
  uint local_338;
  EObjectFlags local_334;
  FTlsAutoCleanup local_330;
  FString local_328;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  FString local_2f8;
  longlong local_2e8;
  longlong local_2e0;
  LARGE_INTEGER local_2d8;
  LARGE_INTEGER local_2d0;
  FName local_2c8;
  FName local_2c0;
  FName local_2b8;
  FName *local_2b0;
  FCreateExportScope local_2a8;
  FMemScope local_2a0;
  FString local_298;
  FString local_288;
  FString local_278;
  code *local_268;
  undefined1 *local_260;
  FName local_258;
  FName local_250;
  FName local_248;
  FString local_240;
  FString local_230;
  FString local_220;
  FString local_210;
  FString local_200;
  FString local_1f0;
  FString local_1e0;
  FString local_1d0;
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  FString local_190;
  FString local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  undefined1 local_e8 [128];
  undefined4 *local_68;
  longlong local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_3c8;
  local_370 = param_1;
  FLLMScope::FLLMScope(local_350,AsyncLoading,false,None,Default,true);
  FMemScope::FMemScope(&local_2a0,AsyncLoading,true);
  if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3171,"Package_CreateExports",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
               ,0xc63);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3171);
  }
  pFVar25 = this->Linker;
  pUVar32 = (UClass *)0x0;
  uVar13 = 0;
  if (param_1 < (int)pFVar25->_padding_) {
    uVar13 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  this_01 = (FName *)((longlong)param_1 * 0x68 + pFVar25->_padding_);
  pFVar1 = this_01 + 8;
  local_2b0 = pFVar1;
  FLoadTimeProfilerTracePrivate::FCreateExportScope::FCreateExportScope
            (&local_2a8,this,(UObject **)pFVar1);
  if (*pFVar1 == (FName)0x0) {
LAB_141eec27c:
    if (-1 < (char)this_01[9].Number) {
      pUVar14 = EventDrivenIndexToObject
                          (this,(FPackageIndex)this_01[1].Number,false,(FPackageIndex)0x0);
      pUVar20 = pUVar32;
      if (pUVar14 != (UObject *)0x0) {
        pUVar20 = CastChecked<UClass,UObject>(pUVar14);
      }
      if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
        local_318 = 0;
        TVar15 = (TEventRef<unsigned_int>)&local_318;
      }
      else {
        TVar15 = FStringTrace::GetNameRef(&local_258);
      }
      uVar4 = *(undefined8 *)TVar15;
      if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
        local_310 = 0;
        TVar15 = (TEventRef<unsigned_int>)&local_310;
      }
      else {
        local_2e8 = pUVar20->_padding_;
        TVar15 = FStringTrace::GetNameRef(&local_250);
      }
      uVar5 = *(undefined8 *)TVar15;
      if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
        local_308 = 0;
        TVar15 = (TEventRef<unsigned_int>)&local_308;
      }
      else {
        local_2e0 = this->LinkerRoot->_padding_;
        TVar15 = FStringTrace::GetNameRef(&local_248);
      }
      uVar6 = *(undefined8 *)TVar15;
      if ((-1 < MetadataChannel->Enabled) && (-1 < AssetMetadataChannel->Enabled)) {
        UE::Trace::Private::FLogScope::ScopedEnter<FMetadataAssetFields>((TLogScope<0> *)&local_68);
        pUVar32 = (UClass *)&DAT_00000001;
        *local_68 = (int)uVar4;
        local_68[1] = (int)uVar5;
        local_68[2] = (int)uVar6;
        *(undefined8 *)(local_60 + 0x28) = *(undefined8 *)(local_60 + 0x20);
      }
      puVar16 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
      local_260 = local_35f;
      local_268 = UE::Core::Private::Function::
                  TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                  ::Call;
      pFVar17 = FThreadSingletonInitializer::Get
                          ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_268,puVar16);
      bVar2 = (byte)this_01[9].Number;
      local_378 = pFVar17[0x2f];
      pFVar25 = this->Linker;
      if ((((-1 < (char)bVar2) && ((this_01[9].Number & 0x100) == 0)) &&
          (((char)pFVar25->_padding_ == '\0' || ((bVar2 & 4) == 0)))) &&
         (((*(char *)((longlong)&pFVar25->_padding_ + 1) == '\0' || ((bVar2 & 2) == 0)) &&
          (this_01[2].ComparisonIndex.Value != 0)))) {
        if ((pFVar25->bIsAsyncLoader != false) &&
           (this_00 = (FAsyncArchive *)pFVar25->Loader, this_00 != (FAsyncArchive *)0x0)) {
          local_358 = this_01[5];
          FVar21 = this_01[4];
          if (5 < (byte)LogAsyncArchive._0_1_) {
            FPackagePath::GetLocalFullPath(&this_00->PackagePath,&local_2f8);
            dVar11 = __real_4170000000000000;
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                         0x9d4c) <
                 `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
                 ::__l5::_thread_safe_static_guard_0__) &&
               (_Init_thread_header(&`public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
                                     ::__l5::_thread_safe_static_guard_0__),
               `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
               ::__l5::_thread_safe_static_guard_0__ == -1)) {
              QueryPerformanceCounter(&local_2d8);
              `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
              ::__l5::GlobalStartTime =
                   (double)local_2d8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar11;
              _Init_thread_footer(&`public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
                                   ::__l5::_thread_safe_static_guard_0__);
            }
            QueryPerformanceCounter(&local_2d0);
            if ((byte)LogAsyncArchive._0_1_ < 7) {
              if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
              }
            }
            else {
              if (FVar21 == (FName)0x7fffffffffffffff) {
                FAsyncArchive::TotalSize(this_00);
              }
              FGenericPlatformMisc::LowLevelOutputDebugStringf
                        (L"%32s%3s    %12lld %12lld    %6.2fms    (+%9.2fms)      %s\r\n");
              if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
              }
            }
          }
        }
        FVar18 = local_378;
        this->LastTypeOfWorkPerformed = L"EventDrivenCreateExport";
        this->LastObjectWorkWasPerformedOn = (UObject *)0x0;
        local_300 = 0;
        if (((*this_01 == (FName)0x0) && ((this_01[3].Number & 1) != 0)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Export.ObjectName != NAME_None || !(Export.ObjectFlags&RF_Public)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                                ,0xc80,L""), bVar12)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if ((*(int *)((longlong)FVar18 + 0xc) < 1) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("LoadContext->HasStartedLoading()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                                ,0xc81,L""), bVar12)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar3 = local_370;
        if (this_01[1].Number == 0) {
          FVar18 = (FTlsAutoCleanup)Z_Construct_UClass_UClass_NoRegister();
          FVar29.Index = local_370 + 1;
        }
        else {
          if ((local_370 < 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ExportIndex >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                                  ,0x6d,L""), bVar12)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          FVar29.Index = iVar3 + 1;
          pUVar14 = EventDrivenIndexToObject(this,(FPackageIndex)this_01[1].Number,true,FVar29);
          FVar18 = (FTlsAutoCleanup)0x0;
          if (pUVar14 != (UObject *)0x0) {
            FVar18 = (FTlsAutoCleanup)CastChecked<UClass,UObject>(pUVar14);
          }
        }
        local_378 = FVar18;
        if (FVar18 == (FTlsAutoCleanup)0x0) {
          if (1 < (byte)LogStreaming._0_1_) {
            ::FName::ToString(this_01,&local_230);
            pFVar19 = FLinkerTables::ImpExp
                                ((FLinkerTables *)&this->Linker->_padding_,
                                 (FPackageIndex)this_01[1].Number);
            ::FName::ToString(&pFVar19->ObjectName,&local_240);
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
            local_210.Data.AllocatorInstance.Data = local_230.Data.AllocatorInstance.Data;
            if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_240.Data.AllocatorInstance.Data);
              local_210.Data.AllocatorInstance.Data = local_230.Data.AllocatorInstance.Data;
            }
            goto LAB_141eed2c3;
          }
LAB_141eed2cd:
          *(byte *)&this_01[9].Number = (byte)this_01[9].Number | 0x80;
        }
        else {
          if (this_01[1].ComparisonIndex.Value == 0) {
            if ((this_01[9].Number & 1) == 0) {
              if ((this->LinkerRoot == (UPackage *)0x0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("LinkerRoot",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                                      ,0xc9e,L""), bVar12)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              local_368 = (FTlsAutoCleanup)this->LinkerRoot;
              goto LAB_141eec801;
            }
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("!Export.bForcedExport",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                                ,0xc9a,L"");
            local_368 = (FTlsAutoCleanup)0x0;
            if (bVar12) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
LAB_141eec790:
            if (local_368 == (FTlsAutoCleanup)0x0) {
              if (1 < (byte)LogStreaming._0_1_) {
                ::FName::ToString(this_01,&local_210);
                pFVar19 = FLinkerTables::ImpExp
                                    ((FLinkerTables *)&this->Linker->_padding_,
                                     (FPackageIndex)this_01[1].ComparisonIndex.Value);
                ::FName::ToString(&pFVar19->ObjectName,&local_220);
                UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
                if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_220.Data.AllocatorInstance.Data);
                }
                goto LAB_141eed2c3;
              }
              goto LAB_141eed2cd;
            }
          }
          else {
            if ((local_370 < 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ExportIndex >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                                    ,0x6d,L""), bVar12)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            local_368 = (FTlsAutoCleanup)
                        EventDrivenIndexToObject
                                  (this,(FPackageIndex)this_01[1].ComparisonIndex.Value,false,FVar29
                                  );
LAB_141eec801:
            if (local_368 == (FTlsAutoCleanup)0x0) goto LAB_141eec790;
            pUVar20 = UObjectRedirector::GetPrivateStaticClass();
            iVar3 = (int)pUVar20->_padding_;
            if ((*(int *)(*(longlong *)((longlong)local_368 + 0x10) + 0x38) < iVar3) ||
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)((longlong)local_368 + 0x10) + 0x30) +
                 (longlong)iVar3 * 8) != &pUVar20->_padding_)) goto LAB_141eec790;
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("!UE::CoreUObject::Private::DynamicCast<UObjectRedirector*>(ThisParent)"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                                ,0xca1,L"");
            if (bVar12) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
          FVar21 = (FName)StaticFindObjectFastInternal
                                    ((UClass *)0x0,(UObject *)local_368,*this_01,ExactClass,
                                     RF_NoFlags,Borrowed);
          FVar30 = local_368;
          if ((FVar21 != (FName)0x0) && (*(FTlsAutoCleanup *)((longlong)FVar21 + 0x10) == FVar18)) {
            this_01[8] = FVar21;
          }
          if (this_01[8] != (FName)0x0) {
            if ((this_01[9].Number & 1) == 0) {
              UObject::SetLinker((UObject *)this_01[8],this->Linker,local_370,true,false);
              pFVar1 = this_01 + 8;
              if ((*(uint *)((longlong)this_01[8] + 8) >> 0x15 & 1) == 0) {
                if (6 < (byte)LogStreaming._0_1_) {
                  UObjectBaseUtility::GetFullName
                            ((UObjectBaseUtility *)*pFVar1,&local_200,(UObject *)0x0,None);
                  UE::Logging::Private::BasicLog<7>
                            ((FStaticBasicLogRecord *)&PTR_u_Note2___s_was_c_1507ea5f0,
                             (FLogCategoryBase *)&LogStreaming);
                  if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_200.Data.AllocatorInstance.Data);
                  }
                }
                if ((*(uint *)((longlong)*pFVar1 + 8) >> 0x1b & 1) == 0) {
                  UObjectBaseUtility::GetFullName
                            ((UObjectBaseUtility *)*pFVar1,&local_1f0,(UObject *)0x0,None);
                  UE::Logging::Private::BasicFatalLog
                            (&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
                  if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
                  }
                }
                UObjectBaseUtility::SetFlags
                          ((UObjectBaseUtility *)*pFVar1,
                           ((byte)(*(uint *)((longlong)*pFVar1 + 8) >> 4) & 1 ^ 1) * 0x2000 +
                           (RF_WasLoaded|RF_NeedPostLoad|RF_NeedLoad));
                UObjectBase::AtomicallyClearFlags((UObjectBase *)*pFVar1,RF_WillBeLoaded);
              }
            }
            else {
              bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!Export.bForcedExport",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                                  ,0xcbb,L"");
              if (bVar12) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
            }
            goto LAB_141eec8d1;
          }
          if (FVar21 != (FName)0x0) {
            lVar8 = *(longlong *)((longlong)FVar21 + 0x10);
            if ((*(int *)(lVar8 + 0x38) < *(int *)((longlong)FVar18 + 0x38)) ||
               (*(undefined8 **)
                 (*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)((longlong)FVar18 + 0x38) * 8) !=
                (undefined8 *)((longlong)FVar18 + 0x30))) {
              if (1 < (byte)LogLinker._0_1_) {
                local_2c8 = *(FName *)(lVar8 + 0x18);
                ::FName::ToString(&local_2c8,&local_278);
                local_2c0 = *(FName *)((longlong)local_368 + 0x18);
                ::FName::ToString(&local_2c0,&local_288);
                ::FName::ToString(this_01,&local_1e0);
                local_2b8 = *(FName *)((longlong)local_378 + 0x18);
                ::FName::ToString(&local_2b8,&local_298);
                UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogLinker);
                if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_298.Data.AllocatorInstance.Data);
                }
                if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
                }
                local_210.Data.AllocatorInstance.Data = local_278.Data.AllocatorInstance.Data;
                if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_288.Data.AllocatorInstance.Data);
                  local_210.Data.AllocatorInstance.Data = local_278.Data.AllocatorInstance.Data;
                }
                goto LAB_141eed2c3;
              }
              goto LAB_141eed2cd;
            }
          }
          local_330 = local_368;
          if ((this_01[3].ComparisonIndex.Value == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!Export.TemplateIndex.IsNull()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                                  ,0xce2,L""), bVar12)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          if ((local_370 < 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ExportIndex >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                                  ,0x6d,L""), bVar12)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          local_358 = (FName)EventDrivenIndexToObject
                                       (this,(FPackageIndex)this_01[3].ComparisonIndex.Value,true,
                                        FVar29);
          if (local_358 == (FName)0x0) {
            if (1 < (byte)LogStreaming._0_1_) {
              uVar13 = this_01[3].ComparisonIndex.Value;
              pFVar25 = this->Linker;
              if ((int)uVar13 < 0) {
                FLinkerTables::GetImportPathName
                          ((FLinkerTables *)&pFVar25->_padding_,&local_328,-1 - uVar13);
                pFVar25 = this->Linker;
              }
              else {
                local_328.Data.ArrayNum = 0;
                local_328.Data.ArrayMax = 0;
                local_328.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              }
              FLinkerLoad::GetArchiveName((FLinkerLoad *)&pFVar25->_padding_,&local_1c0);
              ::FName::ToString(this_01,&local_1d0);
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
              if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
              }
              local_210.Data.AllocatorInstance.Data = local_328.Data.AllocatorInstance.Data;
              if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
                local_210.Data.AllocatorInstance.Data = local_328.Data.AllocatorInstance.Data;
              }
              goto LAB_141eed2c3;
            }
            goto LAB_141eed2cd;
          }
          UObject::ConditionalPostLoadSubobjects((UObject *)local_358,(FObjectInstancingGraph *)0x0)
          ;
          if ((GVerifyObjectReferencesOnly != false) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!GVerifyObjectReferencesOnly",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                                  ,0xcee,L""), bVar12)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          FVar21 = *this_01;
          local_334 = this_01[3].Number |
                      (RF_WasLoaded|RF_NeedPostLoadSubobjects|RF_NeedPostLoad|RF_NeedLoad);
          if ((this_01[3].Number & RF_ClassDefaultObject) == RF_NoFlags) {
LAB_141eed133:
            FVar18 = local_378;
            if ((*(uint *)((longlong)local_378 + 8) >> 10 & 1) == 0) {
              if (*(longlong *)((longlong)local_378 + 0x110) == 0) {
                UClass::InternalCreateDefaultObjectWrapper((UClass *)local_378);
              }
              FVar24 = local_358;
              FVar30 = local_378;
              pUVar7 = *(UObjectBaseUtility **)((longlong)FVar18 + 0x110);
              if ((*(uint *)&pUVar7->field_0x8 >> 10 & 1) == 0) {
                if ((*(EObjectFlags *)((longlong)local_358 + 8) >> 10 & 1) == 0) {
                  FStaticConstructObjectParameters::FStaticConstructObjectParameters
                            ((FStaticConstructObjectParameters *)local_e8,(UClass *)local_378);
                  local_e8._8_8_ = local_368;
                  local_e8._24_4_ = local_334;
                  local_e8._40_4_ = local_358.ComparisonIndex.Value;
                  local_e8._44_4_ = local_358.Number;
                  local_e8[0x21] = true;
                  if ((int)this_01[1].ComparisonIndex.Value < 0) {
                    local_e8._56_8_ = this->LinkerRoot;
                  }
                  else {
                    local_e8._56_8_ = (UPackage *)0x0;
                  }
                  local_e8._16_8_ = FVar21;
                  FVar24 = (FName)StaticConstructObject_Internal
                                            ((FStaticConstructObjectParameters *)local_e8);
                  this_01[8] = FVar24;
                  if ((GIsInitialLoad != false) || (GUObjectArray.OpenForDisregardForGC != false)) {
                    pFVar22 = FUObjectArray::IndexToObject
                                        (&GUObjectArray,*(int *)((longlong)FVar24 + 0xc));
                    FUObjectItem::SetRootFlags(pFVar22,RootSet);
                  }
                  UObject::SetLinker((UObject *)this_01[8],this->Linker,local_370,true,false);
                  if ((*(FTlsAutoCleanup *)((longlong)this_01[8] + 0x10) != FVar30) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Export.Object->GetClass() == LoadClass",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                                          ,0xd45,L""), bVar12)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  if ((FVar21 != *this_01) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("NewName == Export.ObjectName",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                                          ,0xd46,L""), bVar12)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  if (local_e8._64_8_ != 0) {
                    plVar27 = (longlong *)(local_e8 + 0x50);
                    if ((longlong *)local_e8._104_8_ != (longlong *)0x0) {
                      plVar27 = (longlong *)local_e8._104_8_;
                    }
                    (**(code **)(*plVar27 + 0x10))();
                  }
                  goto LAB_141eec8d1;
                }
                ::FName::ToString(this_01,&local_100);
                UObjectBaseUtility::GetFullName
                          ((UObjectBaseUtility *)FVar24,&local_110,(UObject *)0x0,None);
                UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogStreaming)
                ;
                local_210.Data.AllocatorInstance.Data = local_100.Data.AllocatorInstance.Data;
                if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_110.Data.AllocatorInstance.Data);
                  local_210.Data.AllocatorInstance.Data = local_100.Data.AllocatorInstance.Data;
                }
              }
              else {
                ::FName::ToString(this_01,&local_120);
                UObjectBaseUtility::GetFullName(pUVar7,&local_130,(UObject *)0x0,None);
                UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogStreaming)
                ;
                local_210.Data.AllocatorInstance.Data = local_120.Data.AllocatorInstance.Data;
                if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_130.Data.AllocatorInstance.Data);
                  local_210.Data.AllocatorInstance.Data = local_120.Data.AllocatorInstance.Data;
                }
              }
            }
            else {
              ::FName::ToString(this_01,&local_140);
              UObjectBaseUtility::GetFullName
                        ((UObjectBaseUtility *)FVar18,&local_150,(UObject *)0x0,None);
              UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
              local_210.Data.AllocatorInstance.Data = local_140.Data.AllocatorInstance.Data;
              if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_150.Data.AllocatorInstance.Data);
                local_210.Data.AllocatorInstance.Data = local_140.Data.AllocatorInstance.Data;
              }
            }
LAB_141eed2c3:
            if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_210.Data.AllocatorInstance.Data);
            }
            goto LAB_141eed2cd;
          }
          pUVar20 = *(UClass **)((longlong)local_378 + 0x40);
          if (pUVar20 == (UClass *)0x0) {
LAB_141eed0e0:
            pUVar20 = (((TNonAccessTrackedObjectPtr<UClass> *)((longlong)local_358 + 0x10))->
                      ObjectPtr).field0_0x0.DebugPtr;
            if ((((int)pUVar20->_padding_ < *(int *)((longlong)local_378 + 0x38)) ||
                (*(undefined8 **)
                  (pUVar20->_padding_ + (longlong)*(int *)((longlong)local_378 + 0x38) * 8) !=
                 (undefined8 *)((longlong)local_378 + 0x30))) &&
               (local_368 = FVar30,
               bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Template->IsA(LoadClass)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                                   ,0xd1c,L""), bVar12)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            goto LAB_141eed133;
          }
          if ((pUVar20->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
            UClass::InternalCreateDefaultObjectWrapper(pUVar20);
          }
          FVar24 = (FName)(pUVar20->ClassDefaultObject).field0_0x0.DebugPtr;
          if (((FVar24 != (FName)0x0) && (local_358 != FVar24)) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!SuperCDO || Template == SuperCDO",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                                  ,0xcfd,L""), bVar12)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pFVar22 = FUObjectArray::IndexToObject
                              (&GUObjectArray,*(int *)((longlong)&pUVar20->_padding_ + 4));
          FVar30 = local_330;
          if (((ulonglong)((pFVar22->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x19 & 1) != 0)
          goto LAB_141eed0e0;
          if ((FVar24 == (FName)0x0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("SuperCDO",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                                  ,0xd00,L""), bVar12)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          if (((uint)pUVar20->_padding_ >> 10 & 1) != 0) {
            ::FName::ToString(this_01,&local_1a0);
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)pUVar20,&local_1b0,(UObject *)0x0,None);
            UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
            local_210.Data.AllocatorInstance.Data = local_1a0.Data.AllocatorInstance.Data;
            if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
              local_210.Data.AllocatorInstance.Data = local_1a0.Data.AllocatorInstance.Data;
            }
            goto LAB_141eed2c3;
          }
          if ((*(EObjectFlags *)((longlong)FVar24 + 8) >> 10 & 1) != 0) {
            ::FName::ToString(this_01,&local_180);
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)FVar24,&local_190,(UObject *)0x0,None);
            UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
            local_210.Data.AllocatorInstance.Data = local_180.Data.AllocatorInstance.Data;
            if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_190.Data.AllocatorInstance.Data);
              local_210.Data.AllocatorInstance.Data = local_180.Data.AllocatorInstance.Data;
            }
            goto LAB_141eed2c3;
          }
          local_348.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_348.ArrayNum = 0;
          local_348.ArrayMax = 0;
          GetObjectsWithOuter((UObjectBase *)FVar24,&local_348,false,RF_NoFlags,Native);
          uVar26 = (ulonglong)local_348.ArrayNum;
          local_338 = local_348.ArrayNum;
          local_330 = (FTlsAutoCleanup)((longlong)local_348.AllocatorInstance.Data + uVar26 * 8);
          uVar28 = uVar26;
          FVar31.Data = local_348.AllocatorInstance.Data;
          while( true ) {
            FVar18 = local_330;
            if ((int)uVar26 != (int)uVar28) {
              local_380[0] = 0;
              `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_380);
              uVar28 = (ulonglong)local_338;
            }
            if ((FTlsAutoCleanup)FVar31.Data == FVar18) {
              if ((FTlsAutoCleanup)local_348.AllocatorInstance.Data != (FTlsAutoCleanup)0x0) {
                FMemory::Free(local_348.AllocatorInstance.Data);
              }
              goto LAB_141eed133;
            }
            pUVar7 = *(UObjectBaseUtility **)FVar31.Data;
            if ((*(uint *)&pUVar7->field_0x8 >> 10 & 1) != 0) break;
            uVar26 = local_348._8_8_ & 0xffffffff;
            FVar31.Data = FVar31.Data + 8;
          }
          ::FName::ToString(this_01,&local_160);
          UObjectBaseUtility::GetFullName(pUVar7,&local_170,(UObject *)0x0,None);
          UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
          if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_170.Data.AllocatorInstance.Data);
          }
          if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_160.Data.AllocatorInstance.Data);
          }
          *(byte *)&this_01[9].Number = (byte)this_01[9].Number | 0x80;
          if ((FTlsAutoCleanup)local_348.AllocatorInstance.Data != (FTlsAutoCleanup)0x0) {
            FMemory::Free(local_348.AllocatorInstance.Data);
          }
        }
        if (*local_2b0 != (FName)0x0) {
          AddObjectReference(this,(UObject *)*local_2b0);
        }
        if ((char)pUVar32 != '\0') {
          lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          if (*(char *)(lVar8 + 0x9d48) == '\0') {
            __dyn_tls_on_demand_init();
          }
          pFVar23 = *(FWriteBuffer **)(lVar8 + 0x20);
          if ((int)pFVar23 - *(int *)&pFVar23->Cursor < 1) {
            pFVar23 = UE::Trace::Private::Writer_NextBuffer();
          }
          *pFVar23->Cursor = '\n';
          pFVar23->Cursor = pFVar23->Cursor + 1;
          pFVar23->Committed = pFVar23->Cursor;
        }
        goto LAB_141eec97d;
      }
LAB_141eec8d1:
      if (this_01[8] != (FName)0x0) {
        AddObjectReference(this,(UObject *)this_01[8]);
      }
      if ((char)pUVar32 != '\0') {
        lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        if (*(char *)(lVar8 + 0x9d48) == '\0') {
          __dyn_tls_on_demand_init();
        }
        pFVar23 = *(FWriteBuffer **)(lVar8 + 0x20);
        if ((int)pFVar23 - *(int *)&pFVar23->Cursor < 1) {
          pFVar23 = UE::Trace::Private::Writer_NextBuffer();
        }
        *pFVar23->Cursor = '\n';
        pFVar23->Cursor = pFVar23->Cursor + 1;
        pFVar23->Committed = pFVar23->Cursor;
      }
    }
  }
  else {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("!Export.Object",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                        ,0xc6b,L"");
    if (bVar12) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (*pFVar1 == (FName)0x0) goto LAB_141eec27c;
  }
  FVar21 = this_01[8];
  if (FVar21 == (FName)0x0) {
    *(byte *)&this_01[9].Number = (byte)this_01[9].Number | 0x80;
  }
  this->LastObjectWorkWasPerformedOn = (UObject *)FVar21;
  if (((this_01[8] == (FName)0x0) && (-1 < (char)this_01[9].Number)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Export.Object || Export.bExportLoadFailed",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                          ,0xd50,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_141eec97d:
  FLoadTimeProfilerTracePrivate::FCreateExportScope::~FCreateExportScope(&local_2a8);
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(&local_2a0);
  FLLMScope::~FLLMScope(local_350);
  return;
}

// EventDrivenIndexToObject @ 141eed4f0

/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __thiscall
FAsyncPackage::EventDrivenIndexToObject
          (FAsyncPackage *this,FPackageIndex param_1,bool param_2,FPackageIndex param_3)

{
  FTlsAutoCleanup FVar1;
  UClass *this_00;
  code *pcVar2;
  bool bVar3;
  FObjectExport *pFVar4;
  FObjectImport *pFVar5;
  UObject *pUVar6;
  uint *puVar7;
  FTlsAutoCleanup *pFVar8;
  UClass *pUVar9;
  FName FVar10;
  FObjectResource *pFVar11;
  FUObjectSerializeContext *pFVar12;
  FUObjectItem *pFVar13;
  char *pcVar14;
  int iVar15;
  int iVar16;
  undefined1 local_res10 [8];
  char local_res18;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  code *local_60;
  undefined1 *local_58;
  FString local_50;
  
  pUVar6 = (UObject *)0x0;
  if (param_1.Index == 0) {
    return (UObject *)0x0;
  }
  local_res18 = param_2;
  if (param_1.Index < 1) {
    if (param_1.Index < 0) {
      pFVar5 = FLinkerTables::Imp((FLinkerTables *)&this->Linker->_padding_,param_1);
      pUVar6 = pFVar5->XObject;
      goto LAB_141eed561;
    }
LAB_141eed56a:
    if (((this->EventNodeArray).TotalNumberOfImportExportNodes == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TotalNumberOfImportExportNodes",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                           ,0x10d,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pUVar6 = (UObject *)(*pcVar2)();
      return pUVar6;
    }
    if (param_1.Index < 0) {
      iVar16 = (this->EventNodeArray).OffsetToImports;
      iVar15 = iVar16 - (param_1.Index * 2 + 2);
      if ((iVar15 < iVar16) || ((this->EventNodeArray).OffsetToExports <= iVar15)) {
        iVar16 = 0x112;
        pcVar14 = "Index >= OffsetToImports && Index < OffsetToExports";
LAB_141eed5f3:
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          (pcVar14,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                           ,iVar16,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pUVar6 = (UObject *)(*pcVar2)();
          return pUVar6;
        }
      }
    }
    else {
      iVar16 = (this->EventNodeArray).OffsetToExports;
      iVar15 = param_1.Index * 3 + -3 + iVar16;
      if (iVar15 < iVar16) {
        iVar16 = 0x118;
        pcVar14 = "Index >= OffsetToExports";
        goto LAB_141eed5f3;
      }
    }
    if (((((this->EventNodeArray).Array == (FEventLoadNode *)0x0) ||
         ((this->EventNodeArray).TotalNumberOfImportExportNodes <= iVar15)) || (iVar15 < 0)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Array && Index < TotalNumberOfImportExportNodes && Index >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                           ,0x11a,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pUVar6 = (UObject *)(*pcVar2)();
      return pUVar6;
    }
    if ((this->EventNodeArray).Array[iVar15].bAddedToGraph == false) {
      if (((this->EventNodeArray).TotalNumberOfImportExportNodes == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("TotalNumberOfImportExportNodes",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                             ,0x10d,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pUVar6 = (UObject *)(*pcVar2)();
        return pUVar6;
      }
      if (param_1.Index < 0) {
        iVar16 = (this->EventNodeArray).OffsetToImports;
        iVar15 = iVar16 - (param_1.Index * 2 + 2);
        if ((iVar15 < iVar16) || ((this->EventNodeArray).OffsetToExports <= iVar15)) {
          iVar16 = 0x112;
          pcVar14 = "Index >= OffsetToImports && Index < OffsetToExports";
LAB_141eed6db:
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            (pcVar14,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                             ,iVar16,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            pUVar6 = (UObject *)(*pcVar2)();
            return pUVar6;
          }
        }
      }
      else {
        iVar16 = (this->EventNodeArray).OffsetToExports;
        iVar15 = param_1.Index * 3 + -3 + iVar16;
        if (iVar15 < iVar16) {
          iVar16 = 0x118;
          pcVar14 = "Index >= OffsetToExports";
          goto LAB_141eed6db;
        }
      }
      if (((((this->EventNodeArray).Array == (FEventLoadNode *)0x0) ||
           ((this->EventNodeArray).TotalNumberOfImportExportNodes <= iVar15)) || (iVar15 < 0)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Array && Index < TotalNumberOfImportExportNodes && Index >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                             ,0x11a,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pUVar6 = (UObject *)(*pcVar2)();
        return pUVar6;
      }
      if ((this->EventNodeArray).Array[iVar15].bFired != false) goto LAB_141eed846;
    }
    puVar7 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
    local_58 = local_res10;
    local_60 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pFVar8 = FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_60,puVar7);
    FVar1 = pFVar8[0x2f];
    this_00 = *(UClass **)((longlong)FVar1 + 0x30);
    if (this_00 != (UClass *)0x0) {
      pUVar9 = Z_Construct_UClass_UClass_NoRegister();
      iVar16 = (int)pUVar9->_padding_;
      if ((iVar16 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar16 * 8) ==
          &pUVar9->_padding_)) {
        FVar10 = UClass::GetDefaultObjectName(this_00);
        pFVar11 = FLinkerTables::ImpExp((FLinkerTables *)&this->Linker->_padding_,param_1);
        if (pFVar11->ObjectName == *(FName *)FVar10) goto LAB_141eed846;
      }
    }
    DumpDependencies(this,L"Dependencies",*(UObject **)((longlong)FVar1 + 0x30));
    if (param_1.Index < 0) {
      FLinkerTables::GetImportPathName
                ((FLinkerTables *)&this->Linker->_padding_,&local_a0,~param_1.Index);
    }
    else {
      FLinker::GetExportPathName
                ((FLinker *)this->Linker,&local_a0,param_1.Index + -1,(wchar_t *)0x0,false);
    }
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
  }
  else {
    pFVar4 = FLinkerTables::Exp((FLinkerTables *)&this->Linker->_padding_,param_1);
    pUVar6 = pFVar4->Object;
LAB_141eed561:
    if (pUVar6 == (UObject *)0x0) goto LAB_141eed56a;
  }
LAB_141eed846:
  if ((local_res18 == '\0') || (bVar3 = IsFullyLoadedObj(this,pUVar6), bVar3)) {
    if (pUVar6 == (UObject *)0x0) {
      return (UObject *)0x0;
    }
  }
  else {
    if (param_3.Index == 0) {
      pFVar12 = GetSerializeContext(this);
      DumpDependencies(this,L"Dependencies",pFVar12->SerializedObject);
    }
    else {
      DumpDependencies(this,L"Dependencies",this->Linker,param_3);
    }
    if (pUVar6 == (UObject *)0x0) {
      if ((byte)LogStreaming._0_1_ < 2) {
        return (UObject *)0x0;
      }
      if (param_1.Index < 0) {
        FLinkerTables::GetImportPathName
                  ((FLinkerTables *)&this->Linker->_padding_,&local_90,~param_1.Index);
      }
      else {
        FLinker::GetExportPathName
                  ((FLinker *)this->Linker,&local_90,param_1.Index + -1,(wchar_t *)0x0,false);
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
      goto LAB_141eedbd4;
    }
    if (((this->EventNodeArray).TotalNumberOfImportExportNodes == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TotalNumberOfImportExportNodes",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                           ,0x10d,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pUVar6 = (UObject *)(*pcVar2)();
      return pUVar6;
    }
    if (param_1.Index < 0) {
      iVar15 = (this->EventNodeArray).OffsetToImports;
      iVar16 = iVar15 + param_1.Index * -2 + -1;
      if ((iVar16 < iVar15) || ((this->EventNodeArray).OffsetToExports <= iVar16)) {
        iVar15 = 0x112;
        pcVar14 = "Index >= OffsetToImports && Index < OffsetToExports";
LAB_141eed97a:
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          (pcVar14,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                           ,iVar15,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pUVar6 = (UObject *)(*pcVar2)();
          return pUVar6;
        }
      }
    }
    else {
      iVar15 = (this->EventNodeArray).OffsetToExports;
      iVar16 = iVar15 + param_1.Index * 3 + -2;
      if (iVar16 < iVar15) {
        iVar15 = 0x118;
        pcVar14 = "Index >= OffsetToExports";
        goto LAB_141eed97a;
      }
    }
    if (((((this->EventNodeArray).Array == (FEventLoadNode *)0x0) ||
         ((this->EventNodeArray).TotalNumberOfImportExportNodes <= iVar16)) || (iVar16 < 0)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Array && Index < TotalNumberOfImportExportNodes && Index >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                           ,0x11a,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pUVar6 = (UObject *)(*pcVar2)();
      return pUVar6;
    }
    if ((this->EventNodeArray).Array[iVar16].bAddedToGraph == false) {
      if (((this->EventNodeArray).TotalNumberOfImportExportNodes == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("TotalNumberOfImportExportNodes",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                             ,0x10d,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pUVar6 = (UObject *)(*pcVar2)();
        return pUVar6;
      }
      if (param_1.Index < 0) {
        iVar15 = (this->EventNodeArray).OffsetToImports;
        iVar16 = iVar15 + param_1.Index * -2 + -1;
        if ((iVar16 < iVar15) || ((this->EventNodeArray).OffsetToExports <= iVar16)) {
          iVar15 = 0x112;
          pcVar14 = "Index >= OffsetToImports && Index < OffsetToExports";
LAB_141eeda5f:
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            (pcVar14,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                             ,iVar15,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            pUVar6 = (UObject *)(*pcVar2)();
            return pUVar6;
          }
        }
      }
      else {
        iVar15 = (this->EventNodeArray).OffsetToExports;
        iVar16 = iVar15 + param_1.Index * 3 + -2;
        if (iVar16 < iVar15) {
          iVar15 = 0x118;
          pcVar14 = "Index >= OffsetToExports";
          goto LAB_141eeda5f;
        }
      }
      if (((((this->EventNodeArray).Array == (FEventLoadNode *)0x0) ||
           ((this->EventNodeArray).TotalNumberOfImportExportNodes <= iVar16)) || (iVar16 < 0)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Array && Index < TotalNumberOfImportExportNodes && Index >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.h"
                             ,0x11a,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pUVar6 = (UObject *)(*pcVar2)();
        return pUVar6;
      }
      if ((this->EventNodeArray).Array[iVar16].bFired != false) {
        if (param_1.Index < 0) {
          FLinkerTables::GetImportPathName
                    ((FLinkerTables *)&this->Linker->_padding_,&local_80,~param_1.Index);
        }
        else {
          FLinker::GetExportPathName
                    ((FLinker *)this->Linker,&local_80,param_1.Index + -1,(wchar_t *)0x0,false);
        }
        UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
        if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80.Data.AllocatorInstance.Data);
        }
        goto LAB_141eedb7f;
      }
    }
    if (param_1.Index < 0) {
      FLinkerTables::GetImportPathName
                ((FLinkerTables *)&this->Linker->_padding_,&local_70,~param_1.Index);
    }
    else {
      FLinker::GetExportPathName
                ((FLinker *)this->Linker,&local_70,param_1.Index + -1,(wchar_t *)0x0,false);
    }
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
  }
LAB_141eedb7f:
  pFVar13 = FUObjectArray::IndexToObject
                      (&GUObjectArray,*(int *)&((UObjectBaseUtility *)pUVar6)->field_0xc);
  if (((ulonglong)((pFVar13->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x1c & 1) == 0) {
    return pUVar6;
  }
  UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pUVar6,&local_50,(UObject *)0x0,None);
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
  local_90.Data.AllocatorInstance.Data = local_50.Data.AllocatorInstance.Data;
LAB_141eedbd4:
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  return pUVar6;
}

// EventDrivenLoadingComplete @ 141eedc00

/* WARNING: Enum "EEventLoadNode": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAsyncPackage::EventDrivenLoadingComplete(FAsyncPackage *this)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  FEventLoadNodePtr *pFVar5;
  ForAnyElementType this_00;
  undefined1 local_res8 [8];
  TArray<FEventLoadNodePtr,TSizedDefaultAllocator<32>_> local_38;
  FString local_28;
  
  if (((((*(int *)&(this->ImportsThatAreNowCreated).field_0x8 != 0) ||
        (*(int *)&(this->ImportsThatAreNowSerialized).field_0x8 != 0)) ||
       (*(int *)&(this->ExportsThatCanBeCreated).field_0x8 != 0)) ||
      (((*(int *)&(this->ExportsThatCanHaveIOStarted).field_0x8 != 0 ||
        (*(int *)&(this->ExportsThatCanBeSerialized).field_0x8 != 0)) ||
       ((this->ReadyPrecacheRequests).ArrayNum != 0)))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!AnyImportsAndExportWorkOutstanding()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                         ,0xfe8,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  bVar4 = false;
  FEventLoadNodeArray::GetAddedNodes(&this->EventNodeArray,&local_38,this);
  iVar3 = local_38.ArrayNum;
  pFVar5 = (FEventLoadNodePtr *)
           (local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 0x10);
  this_00.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if (local_38.ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FEventLoadNodePtr,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if ((FEventLoadNodePtr *)this_00.Data == pFVar5) break;
    bVar4 = true;
    if (1 < (byte)LogStreaming._0_1_) {
      FEventLoadNodePtr::HumanReadableStringForDebugging
                ((FEventLoadNodePtr *)this_00.Data,&local_28);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    this_00.Data = this_00.Data + 0x10;
  }
  if (bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bAny",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                       ,0xff5,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    RemoveAllNodes(this);
  }
  if ((((*(int *)&(this->ImportsThatAreNowCreated).field_0x8 != 0) ||
       (*(int *)&(this->ImportsThatAreNowSerialized).field_0x8 != 0)) ||
      ((*(int *)&(this->ExportsThatCanBeCreated).field_0x8 != 0 ||
       (((*(int *)&(this->ExportsThatCanHaveIOStarted).field_0x8 != 0 ||
         (*(int *)&(this->ExportsThatCanBeSerialized).field_0x8 != 0)) ||
        ((this->ReadyPrecacheRequests).ArrayNum != 0)))))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!AnyImportsAndExportWorkOutstanding()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                         ,0xff8,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  piVar1 = &(this->PackagesWaitingToLinkImports).ArrayMax;
  (this->PackagesWaitingToLinkImports).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->PackagesWaitingToLinkImports).AllocatorInstance,0,piVar1);
  }
  if ((FEventLoadNodePtr *)local_38.AllocatorInstance.Data != (FEventLoadNodePtr *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// EventDrivenSerializeExport @ 141eede10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAsyncPackage::EventDrivenSerializeExport(FAsyncPackage *this,int param_1)

{
  FLinkerLoad *pFVar1;
  FName this_00;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  FName FVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  double dVar9;
  int iVar10;
  FName *this_01;
  bool bVar11;
  uint uVar12;
  int iVar13;
  UObject *pUVar14;
  TEventRef<unsigned_int> TVar15;
  FLinkerLoad *pFVar16;
  UClass *pUVar17;
  UClass *pUVar18;
  FObjectResource *this_02;
  uint *puVar19;
  FTlsAutoCleanup *pFVar20;
  FName FVar21;
  FStructuredArchiveFromArchive *this_03;
  FStructuredArchiveSlot FVar22;
  FTrackedActivity *pFVar23;
  FWriteBuffer *pFVar24;
  FString *pFVar25;
  FAsyncArchive *pFVar26;
  ForAnyElementType FVar27;
  wchar_t *pwVar28;
  wchar_t *pwVar29;
  UClass *pUVar30;
  undefined1 auStackY_468 [32];
  FSerializeExportScope local_428 [2];
  undefined1 local_426 [6];
  FName local_420;
  FAsyncArchive *local_418;
  FLLMScope local_410;
  FLLMScope local_40c;
  FName *local_408;
  FLinkerLoad *local_400;
  FName local_3f8;
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined8 local_3e0;
  longlong local_3d8;
  FString local_3d0;
  FName local_3c0;
  longlong local_3b8;
  longlong local_3b0;
  LARGE_INTEGER local_3a8;
  LARGE_INTEGER local_3a0;
  FName local_398;
  FTrackedActivityScope local_390;
  undefined8 local_388;
  FMemScope local_380;
  FMemScope local_378;
  FString local_370;
  FString local_360;
  FString local_350;
  code *local_340;
  undefined1 *local_338;
  FName local_330;
  FName local_328;
  FName local_320 [2];
  FString local_310;
  FString local_300;
  FString local_2f0;
  FString local_2e0;
  FArchiveProxy local_2c8;
  FName local_230;
  FName local_228;
  undefined1 local_220;
  FString local_218;
  FString local_208;
  undefined4 *local_1f8;
  longlong local_1f0;
  FStructuredArchiveFromArchive local_1e8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_468;
  local_418 = (FAsyncArchive *)CONCAT44(local_418._4_4_,param_1);
  FLLMScope::FLLMScope(&local_40c,UObject,false,None,Default,true);
  FMemScope::FMemScope(&local_378,UObject,true);
  FLLMScope::FLLMScope
            (&local_410,LLMTagDeclaration_UObject_FAsyncPackage.UniqueName,false,None,Default,true);
  local_3c0 = LLMTagDeclaration_UObject_FAsyncPackage.UniqueName;
  FMemScope::FMemScope(&local_380,&local_3c0,true);
  if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3461,"Package_PreLoadObjects",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
               ,0xd85);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3461);
  }
  pFVar1 = this->Linker;
  pUVar30 = (UClass *)0x0;
  uVar12 = 0;
  if (param_1 < (int)pFVar1->_padding_) {
    uVar12 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_408 = (FName *)((longlong)param_1 * 0x68 + pFVar1->_padding_);
  this_00 = local_408[8];
  if ((this_00 == (FName)0x0) || ((*(EObjectFlags *)((longlong)this_00 + 8) >> 10 & 1) == 0))
  goto LAB_141eee9b5;
  pUVar14 = EventDrivenIndexToObject
                      (this,(FPackageIndex)local_408[1].Number,false,(FPackageIndex)0x0);
  pUVar18 = pUVar30;
  if (pUVar14 != (UObject *)0x0) {
    pUVar18 = CastChecked<UClass,UObject>(pUVar14);
  }
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_3f0 = 0;
    TVar15 = (TEventRef<unsigned_int>)&local_3f0;
  }
  else {
    TVar15 = FStringTrace::GetNameRef(&local_330);
  }
  uVar2 = *(undefined8 *)TVar15;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_3e8 = 0;
    TVar15 = (TEventRef<unsigned_int>)&local_3e8;
  }
  else {
    local_3b8 = pUVar18->_padding_;
    TVar15 = FStringTrace::GetNameRef(&local_328);
  }
  uVar3 = *(undefined8 *)TVar15;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_3e0 = 0;
    TVar15 = (TEventRef<unsigned_int>)&local_3e0;
  }
  else {
    local_3b0 = this->LinkerRoot->_padding_;
    TVar15 = FStringTrace::GetNameRef(local_320);
  }
  uVar4 = *(undefined8 *)TVar15;
  if ((-1 < MetadataChannel->Enabled) && (-1 < AssetMetadataChannel->Enabled)) {
    UE::Trace::Private::FLogScope::ScopedEnter<FMetadataAssetFields>((TLogScope<0> *)&local_1f8);
    pUVar30 = (UClass *)&DAT_00000001;
    *local_1f8 = (int)uVar2;
    local_1f8[1] = (int)uVar3;
    local_1f8[2] = (int)uVar4;
    *(undefined8 *)(local_1f0 + 0x28) = *(undefined8 *)(local_1f0 + 0x20);
  }
  this_01 = local_408;
  if (this->Linker->bIsAsyncLoader == false) {
    pFVar26 = (FAsyncArchive *)0x0;
  }
  else {
    pFVar26 = (FAsyncArchive *)this->Linker->Loader;
  }
  pwVar29 = L"";
  local_3f8 = local_408[4];
  local_420 = local_408[5];
  if (5 < (byte)LogAsyncArchive._0_1_) {
    FPackagePath::GetLocalFullPath(&pFVar26->PackagePath,&local_3d0);
    dVar9 = __real_4170000000000000;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
         ::__l5::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
                             ::__l5::_thread_safe_static_guard_0__),
       `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
       ::__l5::_thread_safe_static_guard_0__ == -1)) {
      QueryPerformanceCounter(&local_3a8);
      `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
      ::__l5::GlobalStartTime =
           (double)local_3a8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar9;
      _Init_thread_footer(&`public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
                           ::__l5::_thread_safe_static_guard_0__);
    }
    QueryPerformanceCounter(&local_3a0);
    if (6 < (byte)LogAsyncArchive._0_1_) {
      local_400 = (FLinkerLoad *)L"";
      if (local_3d0.Data.ArrayNum != 0) {
        local_400 = (FLinkerLoad *)local_3d0.Data.AllocatorInstance.Data;
      }
      if (local_3f8 == (FName)0x7fffffffffffffff) {
        FAsyncArchive::TotalSize(pFVar26);
      }
      FGenericPlatformMisc::LowLevelOutputDebugStringf
                (L"%32s%3s    %12lld %12lld    %6.2fms    (+%9.2fms)      %s\r\n");
    }
    if ((FLinkerLoad *)local_3d0.Data.AllocatorInstance.Data != (FLinkerLoad *)0x0) {
      FMemory::Free(local_3d0.Data.AllocatorInstance.Data);
    }
  }
  this->LastObjectWorkWasPerformedOn = (UObject *)this_00;
  this->LastTypeOfWorkPerformed = L"EventDrivenSerializeExport";
  pFVar1 = this->Linker;
  pFVar16 = UObjectBaseUtility::GetLinker((UObjectBaseUtility *)this_00);
  if ((pFVar16 != pFVar1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Object->GetLinker() == Linker",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                          ,0xd95,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar13 = UObjectBaseUtility::GetLinkerIndex((UObjectBaseUtility *)this_00);
  iVar10 = (int)local_418;
  if ((iVar13 != (int)local_418) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Object->GetLinkerIndex() == LocalExportIndex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                          ,0xd96,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pUVar17 = Z_Construct_UClass_UStruct_NoRegister();
  pUVar18 = (((TNonAccessTrackedObjectPtr<UClass> *)((longlong)this_00 + 0x10))->ObjectPtr).
            field0_0x0.DebugPtr;
  iVar13 = (int)pUVar17->_padding_;
  if ((((int)pUVar18->_padding_ < iVar13) ||
      ((longlong *)*(undefined1 **)(pUVar18->_padding_ + (longlong)iVar13 * 8) !=
       &pUVar17->_padding_)) || (this_01[2].Number == 0)) {
LAB_141eee360:
    if ((((longlong)this_01[5] < this->CurrentBlockOffset) ||
        (this->CurrentBlockOffset + this->CurrentBlockBytes <
         (longlong)this_01[5] + (longlong)this_01[4])) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Export.SerialOffset >= CurrentBlockOffset && Export.SerialOffset + Export.SerialSize <= CurrentBlockOffset + CurrentBlockBytes"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                            ,0xdb0,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (this->Linker->bIsAsyncLoader == false) {
      local_418 = (FAsyncArchive *)0x0;
LAB_141eee453:
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("AsyncLoader",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                          ,0xdb3,L"");
      if (bVar11) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    else {
      local_418 = (FAsyncArchive *)this->Linker->Loader;
      if (local_418 == (FAsyncArchive *)0x0) goto LAB_141eee453;
    }
    local_3d8 = (local_418->CurrentPos - (*(longlong **)&local_418->field_0x8)[2]) +
                **(longlong **)&local_418->field_0x8;
    FAsyncArchive::Seek(local_418,(long64)this_01[5]);
    UObjectBase::AtomicallyClearFlags((UObjectBase *)this_00,RF_NeedLoad);
    FLoadTimeProfilerTracePrivate::FSerializeExportScope::FSerializeExportScope
              (local_428,(UObject *)this_00,(ulong64)this_01[4]);
    puVar19 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
    local_338 = local_426;
    local_340 = UE::Core::Private::Function::
                TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                ::Call;
    pFVar20 = FThreadSingletonInitializer::Get
                        ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_340,puVar19);
    local_420 = *(FName *)(pFVar20 + 0x2f);
    local_388 = *(undefined8 *)((longlong)local_420 + 0x30);
    *(FName *)((longlong)local_420 + 0x30) = this_00;
    this->Linker->bForceSimpleIndexToObject = true;
    if ((this_01[3].ComparisonIndex.Value == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("!Export.TemplateIndex.IsNull()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                            ,0xdc2,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((iVar10 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("ExportIndex >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                            ,0x6d,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    FVar21 = (FName)EventDrivenIndexToObject
                              (this,(FPackageIndex)this_01[3].ComparisonIndex.Value,true,
                               (FPackageIndex)(iVar10 + 1));
    local_3f8 = FVar21;
    if ((FVar21 == (FName)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Template",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                            ,0xdc4,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((this->Linker->TemplateForGetArchetypeFromLoader != (UObject *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("!Linker->TemplateForGetArchetypeFromLoader",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                            ,0xdc6,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    this->Linker->TemplateForGetArchetypeFromLoader = (UObject *)FVar21;
    local_400 = this->Linker;
    FVar21 = this_01[4];
    FVar5 = local_408[5];
    FArchiveProxy::FArchiveProxy(&local_2c8,(FArchive *)&local_400->_padding_);
    local_2c8._padding_ = (longlong)&___7FLinkerExportArchive__6B_;
    if (((local_400->_padding_ & 2) == 0) ||
       (local_220 = 1,
       (int)((ulonglong)*(undefined8 *)((longlong)&local_400->_padding_ + 4) >> 0x20) < 0x3f1)) {
      local_220 = 0;
    }
    local_2c8._padding_._3_1_ =
         local_2c8._padding_._3_1_ & 0xef |
         (*(byte *)((longlong)&this->Linker->_padding_ + 3) >> 4 & 1) << 4;
    local_230 = FVar5;
    local_228 = FVar21;
    (**(code **)(*(longlong *)local_2c8.InnerArchive + 0x80))();
    if ((*(EObjectFlags *)((longlong)this_00 + 8) >> 4 & 1) == 0) {
      local_398 = *(FName *)((longlong)this_00 + 0x18);
      ::FName::ToString(&local_398,&local_370);
      FVar27.Data = (FScriptContainerElement *)L"";
      if (local_370.Data.ArrayNum != 0) {
        FVar27.Data = local_370.Data.AllocatorInstance.Data;
      }
      pFVar23 = FTrackedActivity::GetIOActivity();
      FTrackedActivityScope::FTrackedActivityScope
                (&local_390,pFVar23,(wchar_t *)FVar27.Data,false,Inherit);
      if (local_370.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_370.Data.AllocatorInstance.Data);
      }
      (**(code **)(*(longlong *)this_00 + 200))(this_00,&local_2c8);
      FTrackedActivityScope::~FTrackedActivityScope(&local_390);
    }
    else {
      pUVar18 = (((TNonAccessTrackedObjectPtr<UClass> *)((longlong)this_00 + 0x10))->ObjectPtr).
                field0_0x0.DebugPtr;
      pcVar7 = *(code **)(pUVar18->_padding_ + 0x3c0);
      this_03 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive
                          (&local_1e8,(FArchive *)&local_2c8);
      FVar22 = FStructuredArchiveFromArchive::GetSlot(this_03);
      (*pcVar7)(pUVar18,this_00,*(undefined8 *)FVar22);
      FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1e8);
    }
    FArchiveProxy::~FArchiveProxy(&local_2c8);
    if (((FName)this->Linker->TemplateForGetArchetypeFromLoader != local_3f8) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Linker->TemplateForGetArchetypeFromLoader == Template",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                            ,0xddc,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    this->Linker->TemplateForGetArchetypeFromLoader = (UObject *)0x0;
    UObjectBase::AtomicallySetFlags((UObjectBase *)this_00,RF_LoadCompleted);
    pFVar26 = local_418;
    *(undefined8 *)((longlong)local_420 + 0x30) = local_388;
    this->Linker->bForceSimpleIndexToObject = false;
    if ((FName)(((**(longlong **)&local_418->field_0x8 - (longlong)local_408[5]) -
                (*(longlong **)&local_418->field_0x8)[2]) + local_418->CurrentPos) != local_408[4])
    {
      if ((((((TNonAccessTrackedObjectPtr<UClass> *)((longlong)this_00 + 0x10))->ObjectPtr).
            field0_0x0.DebugPtr)->ClassFlags >> 0x19 & 1) == 0) {
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)this_00,&local_2e0,(UObject *)0x0,None);
        ::FString::PrintfImpl(&local_350,L"%s: Serial size mismatch: Got %d, Expected %lld");
        UE::Logging::Private::BasicFatalLog
                  ((FStaticBasicLogRecord *)&PTR_u__s_1507eb008,(FLogCategoryBase *)&LogStreaming);
        if (local_350.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_350.Data.AllocatorInstance.Data);
        }
      }
      else {
        if ((byte)LogStreaming._0_1_ < 3) goto LAB_141eee8f6;
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)this_00,&local_2f0,(UObject *)0x0,None);
        ::FString::PrintfImpl(&local_360,L"%s: Serial size mismatch: Got %d, Expected %lld");
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
        local_2e0.Data.AllocatorInstance.Data = local_2f0.Data.AllocatorInstance.Data;
        if (local_360.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_360.Data.AllocatorInstance.Data);
          local_2e0.Data.AllocatorInstance.Data = local_2f0.Data.AllocatorInstance.Data;
        }
      }
      if (local_2e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2e0.Data.AllocatorInstance.Data);
      }
    }
LAB_141eee8f6:
    FAsyncArchive::Seek(pFVar26,local_3d8);
    if (((((*(EObjectFlags *)((longlong)this_00 + 8) >> 4 & 1) != 0) &&
         ((((((TNonAccessTrackedObjectPtr<UClass> *)((longlong)this_00 + 0x10))->ObjectPtr).
            field0_0x0.DebugPtr)->ClassFlags >> 0x12 & 1) != 0)) &&
        ((*(EObjectFlags *)((longlong)this_00 + 8) & (RF_WasLoaded|RF_NeedPostLoad)) !=
         (RF_WasLoaded|RF_NeedPostLoad))) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Object->HasAllFlags(RF_NeedPostLoad | RF_WasLoaded)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                            ,0xdf3,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    FLoadTimeProfilerTracePrivate::FSerializeExportScope::~FSerializeExportScope(local_428);
  }
  else {
    if ((iVar10 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("ExportIndex >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                            ,0x6d,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_420 = (FName)EventDrivenIndexToObject
                                 (this,(FPackageIndex)this_01[2].Number,true,
                                  (FPackageIndex)(iVar10 + 1));
    if (local_420 != (FName)0x0) {
      pUVar18 = Z_Construct_UClass_UStruct_NoRegister();
      iVar13 = (int)pUVar18->_padding_;
      if ((*(int *)(*(longlong *)((longlong)local_420 + 0x10) + 0x38) < iVar13) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)((longlong)local_420 + 0x10) + 0x30) + (longlong)iVar13 * 8)
          != &pUVar18->_padding_)) {
        pFVar25 = GetTypeName<UStruct>(&local_218);
        if ((pFVar25->Data).ArrayNum == 0) {
          pwVar28 = L"";
        }
        else {
          pwVar28 = (wchar_t *)(pFVar25->Data).AllocatorInstance.Data;
        }
        pFVar25 = GetFullNameForCastLogError<UObject>(&local_208,(UObject *)local_420);
        if ((pFVar25->Data).ArrayNum != 0) {
          pwVar29 = (wchar_t *)(pFVar25->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar29,pwVar28);
      }
      (**(code **)(*(longlong *)this_00 + 800))(this_00);
      pUVar17 = Z_Construct_UClass_UClass_NoRegister();
      pUVar18 = (((TNonAccessTrackedObjectPtr<UClass> *)((longlong)this_00 + 0x10))->ObjectPtr).
                field0_0x0.DebugPtr;
      iVar13 = (int)pUVar17->_padding_;
      if ((iVar13 <= (int)pUVar18->_padding_) &&
         ((longlong *)*(undefined1 **)(pUVar18->_padding_ + (longlong)iVar13 * 8) ==
          &pUVar17->_padding_)) {
        (**(code **)(*(longlong *)this_00 + 0x2b8))(this_00);
      }
      goto LAB_141eee360;
    }
    ::FName::ToString(this_01,&local_300);
    this_02 = FLinkerTables::ImpExp
                        ((FLinkerTables *)&this->Linker->_padding_,(FPackageIndex)this_01[2].Number)
    ;
    ::FName::ToString(&this_02->ObjectName,&local_310);
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
    if (local_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_310.Data.AllocatorInstance.Data);
    }
    if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_300.Data.AllocatorInstance.Data);
    }
    *(byte *)&this_01[9].Number = (byte)this_01[9].Number | 0x80;
  }
  if ((char)pUVar30 != '\0') {
    lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar6 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar24 = *(FWriteBuffer **)(lVar6 + 0x20);
    if ((int)pFVar24 - *(int *)&pFVar24->Cursor < 1) {
      pFVar24 = UE::Trace::Private::Writer_NextBuffer();
    }
    *pFVar24->Cursor = '\n';
    pFVar24->Cursor = pFVar24->Cursor + 1;
    pFVar24->Committed = pFVar24->Cursor;
  }
LAB_141eee9b5:
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(&local_380);
  FLLMScope::~FLLMScope(&local_410);
  FMemScope::~FMemScope(&local_378);
  FLLMScope::~FLLMScope(&local_40c);
  return;
}

// Event_CreateLinker @ 141eeeab0

/* WARNING: Enum "EEventLoadNode": Some values do not have unique names */

void __thiscall FAsyncPackage::Event_CreateLinker(FAsyncPackage *this)

{
  int *piVar1;
  FAsyncPackage *pFVar2;
  FName FVar3;
  FAsyncLoadingThread *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  uint *puVar10;
  FTlsAutoCleanup *pFVar11;
  FExclusiveLoadPackageTimeTracker *this_00;
  FScriptContainerElement *pFVar12;
  FTlsAutoCleanup FVar13;
  TArray<FAsyncPackage_*,TSizedDefaultAllocator<32>_> *pTVar14;
  double dVar15;
  undefined1 local_res8 [8];
  LARGE_INTEGER local_res10;
  FAsyncPackage *local_68;
  FEventLoadNodePtr local_60;
  FEventLoadNodePtr local_50;
  code *local_40;
  undefined1 *local_38;
  FScopedAsyncPackageEvent local_30;
  
  if (this->LoadStartTime == 0.0) {
    QueryPerformanceCounter(&local_res10);
    pFVar2 = this->DependencyRootPackage;
    dVar15 = (double)local_res10.QuadPart * FGenericPlatformTime::SecondsPerCycle +
             __real_4170000000000000;
    this->LoadStartTime = dVar15;
    if ((pFVar2 != (FAsyncPackage *)0x0) && (pFVar2->LoadStartTime == 0.0)) {
      pFVar2->LoadStartTime = dVar15;
    }
  }
  local_30.Package = this;
  puVar10 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_38 = local_res8;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar11 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_40,puVar10);
  local_30.PreviousPackage = *(FAsyncPackage **)(pFVar11 + 8);
  local_30.PreviousAsyncPackageLoader = *(IAsyncPackageLoader **)(pFVar11 + 9);
  pFVar11[8] = (FTlsAutoCleanup)this;
  FVar13 = (FTlsAutoCleanup)&this->AsyncLoadingThread->_padding_;
  if (this->AsyncLoadingThread == (FAsyncLoadingThread *)0x0) {
    FVar13 = (FTlsAutoCleanup)0x0;
  }
  pFVar11[9] = FVar13;
  BeginAsyncLoad(this);
  FVar3 = (this->Desc).PackagePath.PackageName;
  this_00 = FExclusiveLoadPackageTimeTracker::TrackerInstance;
  if (FExclusiveLoadPackageTimeTracker::TrackerInstance == (FExclusiveLoadPackageTimeTracker *)0x0)
  {
    this_00 = FExclusiveLoadPackageTimeTracker::Construct();
  }
  FExclusiveLoadPackageTimeTracker::InternalPushLoadPackage(this_00,FVar3);
  if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1833,"Package_CreateLinker",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
               ,0x729);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1833);
  }
  if ((this->Linker != (FLinkerLoad *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Linker",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                         ,0x72a,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_60.ImportOrExportIndex.Index = 0;
  local_60.Phase = ImportOrExport_Create;
  local_60.WaitingPackage.Package = this;
  FEventLoadGraph::NodeWillBeFiredExternally(&this->AsyncLoadingThread->EventGraph,&local_60);
  CreateLinker(this);
  if ((this->AsyncPackageLoadingState != NewPackage) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("AsyncPackageLoadingState == EAsyncPackageLoadingState::NewPackage",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                         ,0x72d,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (this->Linker == (FLinkerLoad *)0x0) {
    local_50.ImportOrExportIndex.Index = 0;
    local_50.Phase = ImportOrExport_Create;
    local_50.WaitingPackage.Package = this;
    FEventLoadGraph::RemoveNode(&this->AsyncLoadingThread->EventGraph,&local_50);
    EventDrivenLoadingComplete(this);
    this->AsyncPackageLoadingState = PostLoad_Etc;
    pFVar12 = (this->AsyncLoadingThread->AsyncPackagesReadyForTick).AllocatorInstance.Data;
    pFVar5 = pFVar12 + (longlong)(this->AsyncLoadingThread->AsyncPackagesReadyForTick).ArrayNum * 8;
    for (; pFVar12 != pFVar5; pFVar12 = pFVar12 + 8) {
      if (*(FAsyncPackage **)pFVar12 == this) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("!AsyncLoadingThread.AsyncPackagesReadyForTick.Contains(this)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                           ,0x738,L"");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        break;
      }
    }
    pFVar4 = this->AsyncLoadingThread;
    pTVar14 = &pFVar4->AsyncPackagesReadyForTick;
    pFVar5 = (pTVar14->AllocatorInstance).Data;
    local_68 = this;
    if (((pFVar5 <= (FScriptContainerElement *)&local_68) &&
        ((FScriptContainerElement *)&local_68 <
         pFVar5 + (longlong)(pFVar4->AsyncPackagesReadyForTick).ArrayMax * 8)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar9 = (pFVar4->AsyncPackagesReadyForTick).ArrayNum;
    piVar1 = &(pFVar4->AsyncPackagesReadyForTick).ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar14->AllocatorInstance,piVar1);
    }
    (pFVar4->AsyncPackagesReadyForTick).ArrayNum = iVar9 + 1;
    *(FAsyncPackage **)((pTVar14->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_68;
  }
  else {
    this->AsyncPackageLoadingState = WaitingForSummary;
    this->Linker->bLockoutLegacyOperations = true;
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FScopedAsyncPackageEvent::~FScopedAsyncPackageEvent(&local_30);
  return;
}

// Event_ExportsDone @ 141eeee20

/* WARNING: Enum "EEventLoadNode": Some values do not have unique names */

void __thiscall FAsyncPackage::Event_ExportsDone(FAsyncPackage *this)

{
  undefined1 *puVar1;
  TSet<FWeakAsyncPackagePtr,DefaultKeyFuncs<FWeakAsyncPackagePtr,0>,FDefaultSetAllocator> *this_00;
  ulonglong uVar2;
  uint uVar3;
  FAsyncPackage *this_01;
  ForElementType<FSetElementId> FVar4;
  code *pcVar5;
  TSet<FWeakAsyncPackagePtr,DefaultKeyFuncs<FWeakAsyncPackagePtr,0>,FDefaultSetAllocator> *pTVar6;
  bool bVar7;
  uint uVar8;
  TTuple<FName,FAsyncPackage_*> *pTVar9;
  FArchive *pFVar10;
  longlong lVar11;
  ForElementType<FSetElementId> FVar12;
  int iVar13;
  uint uVar14;
  undefined1 *puVar16;
  uint uVar17;
  uint *puVar18;
  uint uVar19;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  FName local_118;
  int local_110;
  FString local_108;
  LARGE_INTEGER local_f8;
  LARGE_INTEGER local_f0;
  FEventLoadNodePtr local_e8;
  TSet<FWeakAsyncPackagePtr,DefaultKeyFuncs<FWeakAsyncPackagePtr,0>,FDefaultSetAllocator> *local_d8;
  uint uStack_d0;
  uint uStack_cc;
  undefined1 *local_c8;
  undefined4 uStack_c0;
  uint uStack_bc;
  uint local_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  TSet<FWeakAsyncPackagePtr,DefaultKeyFuncs<FWeakAsyncPackagePtr,0>,FDefaultSetAllocator> *local_a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a0;
  undefined8 uStack_80;
  FName local_78;
  undefined4 local_4c;
  FArchive *pFVar15;
  
  pFVar15 = (FArchive *)0x0;
  uVar14 = 0;
  pFVar10 = pFVar15;
  if (this->Linker->bIsAsyncLoader != false) {
    pFVar10 = this->Linker->Loader;
  }
  uVar17 = 0;
  if (5 < (byte)LogAsyncArchive._0_1_) {
    FPackagePath::GetLocalFullPath((FPackagePath *)&pFVar10[2].field_0x30,&local_108);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
         ::__l5::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
                             ::__l5::_thread_safe_static_guard_0__),
       `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
       ::__l5::_thread_safe_static_guard_0__ == -1)) {
      QueryPerformanceCounter(&local_f8);
      `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
      ::__l5::GlobalStartTime =
           (double)local_f8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
           __real_4170000000000000;
      _Init_thread_footer(&`public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
                           ::__l5::_thread_safe_static_guard_0__);
    }
    QueryPerformanceCounter(&local_f0);
    if (6 < (byte)LogAsyncArchive._0_1_) {
      FGenericPlatformMisc::LowLevelOutputDebugStringf
                (L"%32s%3s    %12lld %12lld    %6.2fms    (+%9.2fms)      %s\r\n");
    }
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
  }
  if ((this->AsyncPackageLoadingState != ProcessNewImportsAndExports) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("AsyncPackageLoadingState == EAsyncPackageLoadingState::ProcessNewImportsAndExports"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                         ,0xf3b,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  this->bAllExportsSerialized = true;
  local_e8.ImportOrExportIndex.Index = 0;
  local_e8.Phase = Export_StartIO;
  local_e8.WaitingPackage.Package = this;
  FEventLoadGraph::RemoveNode(&this->AsyncLoadingThread->EventGraph,&local_e8);
  if ((this->AsyncPackageLoadingState != ProcessNewImportsAndExports) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("AsyncPackageLoadingState == EAsyncPackageLoadingState::ProcessNewImportsAndExports"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                         ,0xf3e,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  this->AsyncPackageLoadingState = WaitingForPostLoad;
  if ((((((*(int *)&(this->ImportsThatAreNowCreated).field_0x8 != 0) ||
         (*(int *)&(this->ImportsThatAreNowSerialized).field_0x8 != 0)) ||
        (*(int *)&(this->ExportsThatCanBeCreated).field_0x8 != 0)) ||
       ((*(int *)&(this->ExportsThatCanHaveIOStarted).field_0x8 != 0 ||
        (*(int *)&(this->ExportsThatCanBeSerialized).field_0x8 != 0)))) ||
      ((this->ReadyPrecacheRequests).ArrayNum != 0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!AnyImportsAndExportWorkOutstanding()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                         ,0xf40,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FlushPrecacheBuffer(this);
  ConditionalQueueProcessPostloadWait(this);
  local_118 = (this->Desc).Name;
  puVar1 = &(this->OtherPackagesWaitingForMeBeforePostload).Elements.field_0x10;
  uVar3 = *(uint *)&(this->OtherPackagesWaitingForMeBeforePostload).Elements.field_0x28;
  this_00 = &this->OtherPackagesWaitingForMeBeforePostload;
  local_110 = this->SerialNumber;
  uStack_cc = 1;
  uStack_bc = uVar17;
  if (uVar3 != 0) {
    puVar18 = *(uint **)&(this->OtherPackagesWaitingForMeBeforePostload).Elements.field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar8 = *puVar18;
    pFVar10 = pFVar15;
    uVar17 = 0;
    uVar14 = 0;
    while (uVar8 == 0) {
      iVar13 = (int)pFVar15;
      uVar17 = (int)pFVar10 + 0x20;
      pFVar10 = (FArchive *)(ulonglong)uVar17;
      uVar14 = iVar13 + 1;
      pFVar15 = (FArchive *)(ulonglong)uVar14;
      uStack_bc = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar14)
      goto LAB_141eef0dd;
      uVar8 = puVar18[(longlong)iVar13 + 1];
    }
    uStack_cc = -uVar8 & uVar8;
    uVar2 = (ulonglong)uStack_cc * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res10 = (int)lVar11;
    uStack_bc = (uVar17 - 1) + local_res10;
    if ((int)uVar3 < (int)uStack_bc) {
      uStack_bc = uVar3;
    }
  }
LAB_141eef0dd:
  uVar8 = *(uint *)&(this->OtherPackagesWaitingForMeBeforePostload).Elements.field_0x28;
  uStack_b4 = local_4c;
  uVar19 = uVar8 & 0xffffffe0;
  iStack_b0 = *(int *)&(this->OtherPackagesWaitingForMeBeforePostload).Elements.field_0x8 -
              *(int *)&(this->OtherPackagesWaitingForMeBeforePostload).Elements.field_0x34;
  uStack_c0 = 0xffffffff;
  TStack_a0._padding_ = CONCAT44(uStack_cc,uVar14);
  TStack_a0.CurrentBitIndex = uStack_bc;
  TStack_a0.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar8 >> 5;
  TStack_a0._28_4_ = local_4c;
  TStack_a0.BaseBitIndex = uVar17;
  uStack_80 = CONCAT44(uStack_ac,iStack_b0);
  local_d8 = this_00;
  uStack_d0 = uVar14;
  local_c8 = puVar1;
  local_b8 = uVar17;
  local_a8 = this_00;
  TStack_a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar8 < 0) || ((int)uVar3 < (int)uVar8)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar14 = *(uint *)&(this->OtherPackagesWaitingForMeBeforePostload).Elements.field_0x28;
  if (uVar8 != uVar14) {
    puVar16 = *(undefined1 **)&(this->OtherPackagesWaitingForMeBeforePostload).Elements.field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar17 = -1 << ((byte)uVar8 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar13 * 4);
    while (uVar17 == 0) {
      lVar11 = (longlong)iVar13;
      uVar19 = uVar19 + 0x20;
      iVar13 = iVar13 + 1;
      uVar8 = uVar14;
      if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
      goto LAB_141eef1df;
      uVar17 = *(uint *)(puVar16 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res18 = (int)lVar11;
    uVar8 = local_res18 + -1 + uVar19;
    if ((int)uVar14 < (int)uVar8) {
      uVar8 = uVar14;
    }
  }
LAB_141eef1df:
  do {
    pTVar6 = local_a8;
    if (*(int *)&(local_a8->Elements).field_0x8 - *(int *)&(local_a8->Elements).field_0x34 !=
        (int)uStack_80) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<FWeakAsyncPackagePtr>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_a0.CurrentBitIndex == uVar8) &&
        (TStack_a0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == this_00))
    {
      bVar7 = 1 < (this->OtherPackagesWaitingForMeBeforePostload).HashSize;
      if (!bVar7) {
        TSet<FWeakAsyncPackagePtr,DefaultKeyFuncs<FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>::
        UnhashElements(this_00);
      }
      puVar1 = &(this->OtherPackagesWaitingForMeBeforePostload).Elements.field_0xc;
      *(undefined4 *)&(this->OtherPackagesWaitingForMeBeforePostload).Elements.field_0x8 = 0;
      if (*(int *)puVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x14,4,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
      }
      *(undefined4 *)&(this->OtherPackagesWaitingForMeBeforePostload).Elements.field_0x30 =
           0xffffffff;
      *(undefined4 *)&(this->OtherPackagesWaitingForMeBeforePostload).Elements.field_0x34 = 0;
      iVar13 = *(int *)&(this->OtherPackagesWaitingForMeBeforePostload).Elements.field_0x2c;
      *(undefined4 *)&(this->OtherPackagesWaitingForMeBeforePostload).Elements.field_0x28 = 0;
      if ((iVar13 < 0) || (0x80 < iVar13)) {
        *(undefined4 *)&(this->OtherPackagesWaitingForMeBeforePostload).Elements.field_0x2c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)
                   &(this->OtherPackagesWaitingForMeBeforePostload).Elements.field_0x10,0);
      }
      if (bVar7) {
        (this->OtherPackagesWaitingForMeBeforePostload).HashSize = 1;
        TSet<FWeakAsyncPackagePtr,DefaultKeyFuncs<FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>::
        Rehash(this_00);
      }
      return;
    }
    lVar11 = *(longlong *)&pTVar6->Elements;
    local_78 = *(FName *)(lVar11 + (longlong)TStack_a0.CurrentBitIndex * 0x14);
    iVar13 = *(int *)(lVar11 + 8 + (longlong)TStack_a0.CurrentBitIndex * 0x14);
    if (((local_78 != (FName)0x0) && (iVar13 != 0)) &&
       ((pTVar9 = TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
                          *)&this->AsyncLoadingThread->AsyncPackageNameLookup,local_78),
        pTVar9 != (TTuple<FName,FAsyncPackage_*> *)0x0 &&
        ((this_01 = *(FAsyncPackage **)&pTVar9->field_0x8, this_01 != (FAsyncPackage *)0x0 &&
         (this_01->SerialNumber == iVar13)))))) {
      if ((this_01 == this) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("TestPkg != this",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                             ,0xf4b,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (*(int *)&(this_01->PackagesIAmWaitingForBeforePostload).Elements.field_0x8 ==
          *(int *)&(this_01->PackagesIAmWaitingForBeforePostload).Elements.field_0x34) {
LAB_141eef345:
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumRem",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                           ,0xf4d,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      else {
        uVar14 = ::GetTypeHash(local_118.ComparisonIndex);
        FVar4 = (this_01->PackagesIAmWaitingForBeforePostload).Hash.SecondaryData;
        FVar12 = (ForElementType<FSetElementId>)&(this_01->PackagesIAmWaitingForBeforePostload).Hash
        ;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar12 = FVar4;
        }
        iVar13 = *(int *)((longlong)FVar12 +
                         ((longlong)(this_01->PackagesIAmWaitingForBeforePostload).HashSize - 1U &
                         (longlong)(int)(uVar14 + local_118.Number)) * 4);
        bVar7 = false;
        if (iVar13 != -1) {
          lVar11 = *(longlong *)&(this_01->PackagesIAmWaitingForBeforePostload).Elements;
          do {
            if (*(int *)(lVar11 + 8 + (longlong)iVar13 * 0x14) == local_110) {
              TSet<FWeakAsyncPackagePtr,DefaultKeyFuncs<FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
              ::RemoveByIndex(&this_01->PackagesIAmWaitingForBeforePostload,iVar13);
              bVar7 = true;
              break;
            }
            iVar13 = *(int *)(lVar11 + 0xc + (longlong)iVar13 * 0x14);
          } while (iVar13 != -1);
        }
        if (!bVar7) goto LAB_141eef345;
      }
      TSet<FWeakAsyncPackagePtr,DefaultKeyFuncs<FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>::
      Emplace<FWeakAsyncPackagePtr_const_&>
                (&this_01->PackagesIMayBeWaitingForBeforePostload,
                 (FWeakAsyncPackagePtr *)&stack0x00000020,(bool *)&local_118);
      ConditionalQueueProcessPostloadWait(this_01);
    }
    TStack_a0.UnvisitedBitMask = TStack_a0.UnvisitedBitMask & ~TStack_a0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a0);
  } while( true );
}

// Event_FinishLinker @ 141eef4a0

/* WARNING: Enum "EEventLoadNode": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAsyncPackage::Event_FinishLinker(FAsyncPackage *this)

{
  uint uVar1;
  FEventLoadNode *pFVar2;
  int *piVar3;
  double dVar4;
  FTlsAutoCleanup FVar5;
  FName FVar6;
  UObject *pUVar7;
  wchar_t *pwVar8;
  FAsyncLoadingThread *pFVar9;
  FScriptContainerElement *pFVar10;
  code *pcVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  int iVar15;
  int iVar16;
  double dVar17;
  bool bVar18;
  bool bVar19;
  Type TVar20;
  uint *puVar21;
  FTlsAutoCleanup *pFVar22;
  FExclusiveLoadPackageTimeTracker *pFVar23;
  ulonglong uVar24;
  ulong64 uVar25;
  ulonglong *puVar26;
  FLinkerLoad *pFVar27;
  int iVar28;
  FEventLoadNode *pFVar29;
  FTlsAutoCleanup FVar30;
  UPackage *pUVar31;
  uint uVar32;
  ulonglong uVar33;
  FScriptContainerElement *pFVar34;
  TArray<FAsyncPackage_*,TSizedDefaultAllocator<32>_> *pTVar35;
  double dVar36;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  LARGE_INTEGER local_res20;
  FAsyncPackage *local_198 [2];
  FWeakAsyncPackagePtr local_188;
  FWeakAsyncPackagePtr local_178;
  FWeakAsyncPackagePtr local_168;
  LARGE_INTEGER local_158;
  FTlsAutoCleanup local_150;
  FEventLoadNodePtr local_148;
  FEventLoadNodePtr local_138;
  FEventLoadNodePtr local_128;
  FEventLoadNodePtr local_118;
  FEventLoadNodePtr local_108;
  FEventLoadNodePtr local_f8;
  FEventLoadNodePtr local_e8;
  FEventLoadNodePtr local_d8;
  FEventLoadNodePtr local_c8;
  FEventLoadNodePtr local_b8;
  code *local_a8;
  undefined1 *local_a0;
  code *local_98;
  undefined1 *local_90;
  
  if ((this == (FAsyncPackage *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("Package",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                          ,0x6c6,L""), bVar18)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  puVar21 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_a0 = local_res10;
  local_a8 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar22 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_a8,puVar21);
  local_150 = pFVar22[9];
  FVar5 = pFVar22[8];
  pFVar22[8] = (FTlsAutoCleanup)this;
  FVar30 = (FTlsAutoCleanup)&this->AsyncLoadingThread->_padding_;
  if (this->AsyncLoadingThread == (FAsyncLoadingThread *)0x0) {
    FVar30 = (FTlsAutoCleanup)0x0;
  }
  pFVar22[9] = FVar30;
  BeginAsyncLoad(this);
  FVar6 = (this->Desc).PackagePath.PackageName;
  pFVar23 = FExclusiveLoadPackageTimeTracker::TrackerInstance;
  if (FExclusiveLoadPackageTimeTracker::TrackerInstance == (FExclusiveLoadPackageTimeTracker *)0x0)
  {
    pFVar23 = FExclusiveLoadPackageTimeTracker::Construct();
  }
  FExclusiveLoadPackageTimeTracker::InternalPushLoadPackage(pFVar23,FVar6);
  if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
    bVar18 = false;
  }
  else {
    bVar18 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1881,"Package_FinishLinker",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
               ,0x759);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1881);
  }
  if (((this->bLoadHasFailed == false) && (TVar20 = FinishLinker(this), TVar20 == TimeOut)) &&
     (this->bLoadHasFailed == false)) {
    FVar6 = (this->Desc).Name;
    local_188.PackageName.ComparisonIndex = FVar6.ComparisonIndex.Value;
    local_188.PackageName.Number = FVar6.Number;
    local_188.SerialNumber = this->SerialNumber;
    FAsyncLoadingThread::QueueEvent_FinishLinker(this->AsyncLoadingThread,&local_188,0x7fffffff);
  }
  else {
    if (this->bLoadHasFailed == false) {
      if (((this->Linker == (FLinkerLoad *)0x0) || (!this->Linker->bHasFinishedInitialization)) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("Linker && Linker->HasFinishedInitialization()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                              ,0x767,L""), bVar19)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      this->LastTypeOfWorkPerformed = L"ImportAddNode";
      if ((this->ImportAddNodeIndex == 0) && (this->ExportAddNodeIndex == 0)) {
        if (((int)this->Linker->_padding_ == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("Linker->ExportMap.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                                ,0x775,L""), bVar19)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        local_148.ImportOrExportIndex.Index = 0;
        local_148.Phase = Export_StartIO;
        local_148.WaitingPackage.Package = this;
        FEventLoadGraph::AddNode
                  (&this->AsyncLoadingThread->EventGraph,&local_148,false,
                   (int)this->Linker->_padding_ + (int)this->Linker->_padding_);
        local_138.ImportOrExportIndex.Index = 0;
        local_138.Phase = ImportOrExport_Serialize;
        local_138.WaitingPackage.Package = this;
        FEventLoadGraph::AddNode(&this->AsyncLoadingThread->EventGraph,&local_138,true,0);
        iVar28 = (int)this->Linker->_padding_;
        iVar16 = (int)this->Linker->_padding_;
        if (((((iVar28 == 0) || ((this->EventNodeArray).NumExports != 0)) ||
             (3 < (this->EventNodeArray).TotalNumberOfNodesAdded)) ||
            ((this->EventNodeArray).TotalNumberOfImportExportNodes != 0)) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("InNumExports && !NumExports && TotalNumberOfNodesAdded <= int32(EEventLoadNode::Package_NumPhases) && !TotalNumberOfImportExportNodes"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                                ,0x46a,L""), bVar19)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        iVar15 = iVar16 * 2;
        (this->EventNodeArray).NumImports = iVar16;
        (this->EventNodeArray).NumExports = iVar28;
        iVar28 = iVar15 + iVar28 * 2 + iVar28;
        (this->EventNodeArray).OffsetToImports = 0;
        (this->EventNodeArray).TotalNumberOfImportExportNodes = iVar28;
        (this->EventNodeArray).OffsetToExports = iVar15;
        if ((iVar28 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("TotalNumberOfImportExportNodes",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                                ,0x470,L""), bVar19)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        uVar33 = (ulonglong)(this->EventNodeArray).TotalNumberOfImportExportNodes;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = uVar33;
        uVar24 = SUB168(ZEXT816(0x18) * auVar12,0);
        if (SUB168(ZEXT816(0x18) * auVar12,8) != 0) {
          uVar24 = 0xffffffffffffffff;
        }
        uVar25 = uVar24 + 8;
        if (0xfffffffffffffff7 < uVar24) {
          uVar25 = 0xffffffffffffffff;
        }
        puVar26 = operator_new__(uVar25);
        if (puVar26 == (ulonglong *)0x0) {
          pFVar29 = (FEventLoadNode *)0x0;
        }
        else {
          *puVar26 = uVar33;
          pFVar29 = (FEventLoadNode *)(puVar26 + 1);
          pFVar2 = pFVar29;
          for (; uVar33 != 0; uVar33 = uVar33 - 1) {
            (pFVar2->NodesWaitingForMe).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            (pFVar2->NodesWaitingForMe).ArrayNum = 0;
            (pFVar2->NodesWaitingForMe).ArrayMax = 0;
            pFVar2->NumPrerequistes = 0;
            pFVar2->bFired = false;
            pFVar2->bAddedToGraph = false;
            pFVar2 = pFVar2 + 1;
          }
        }
        (this->EventNodeArray).Array = pFVar29;
      }
      iVar28 = (this->PackagesWaitingToLinkImports).ArrayNum;
      if (iVar28 != 0) {
        pFVar34 = (this->PackagesWaitingToLinkImports).AllocatorInstance.Data;
        local_128.ImportOrExportIndex.Index = 0;
        local_128.Phase = Export_StartIO;
        pFVar10 = pFVar34 + (longlong)iVar28 * 8;
        local_128.WaitingPackage.Package = this;
        while( true ) {
          if ((this->PackagesWaitingToLinkImports).ArrayNum != iVar28) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<FUnsafeWeakAsyncPackagePtr,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res8);
          }
          if (pFVar34 == pFVar10) break;
          local_118.WaitingPackage.Package = *(FAsyncPackage **)pFVar34;
          local_118.ImportOrExportIndex.Index = 0;
          local_118.Phase = ImportOrExport_Serialize;
          FEventLoadGraph::AddArc(&this->AsyncLoadingThread->EventGraph,&local_118,&local_128);
          pFVar34 = pFVar34 + 8;
        }
        piVar3 = &(this->PackagesWaitingToLinkImports).ArrayMax;
        (this->PackagesWaitingToLinkImports).ArrayNum = 0;
        if (*piVar3 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,0,&(this->PackagesWaitingToLinkImports).AllocatorInstance,0,piVar3);
        }
      }
      dVar17 = __real_4170000000000000;
      pFVar27 = this->Linker;
      uVar32 = this->ImportAddNodeIndex;
      if (this->ImportAddNodeIndex < (int)pFVar27->_padding_) {
        do {
          if (((int)uVar32 < 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ImportIndex >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                                  ,0x67,L""), bVar19)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          local_108.Phase = ImportOrExport_Create;
          local_108.WaitingPackage.Package = this;
          local_108.ImportOrExportIndex.Index = ~uVar32;
          FEventLoadGraph::AddNode(&this->AsyncLoadingThread->EventGraph,&local_108,false,0);
          if (((int)uVar32 < 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ImportIndex >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                                  ,0x67,L""), bVar19)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          local_f8.Phase = ImportOrExport_Serialize;
          local_f8.WaitingPackage.Package = this;
          local_f8.ImportOrExportIndex.Index = ~uVar32;
          FEventLoadGraph::AddNode(&this->AsyncLoadingThread->EventGraph,&local_f8,false,1);
          uVar1 = uVar32 + 1;
          this->ImportAddNodeIndex = uVar1;
          if (uVar32 != ((int)uVar32 / 0x32) * 0x32) goto LAB_141eefaf2;
          if ((this->AsyncLoadingThread->IsLoadingSuspended).Counter != 0) {
LAB_141eefab5:
            FVar6 = (this->Desc).Name;
            local_178.PackageName.ComparisonIndex = FVar6.ComparisonIndex.Value;
            local_178.PackageName.Number = FVar6.Number;
            local_178.SerialNumber = this->SerialNumber;
            FAsyncLoadingThread::QueueEvent_FinishLinker
                      (this->AsyncLoadingThread,&local_178,0x7fffffff);
            goto LAB_141eeff7a;
          }
          pUVar7 = this->LastObjectWorkWasPerformedOn;
          pwVar8 = this->LastTypeOfWorkPerformed;
          dVar4 = this->TickStartTime;
          dVar14 = (double)this->TimeLimit;
          if (this->bUseTimeLimit != false) {
            QueryPerformanceCounter(&local_res20);
            dVar13 = (double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar17;
            dVar36 = dVar13 - dVar4;
            if ((dVar36 <= dVar14) || (GWarnIfTimeLimitExceeded == 0)) {
              LastTestTime = dVar13;
              if (dVar36 <= dVar14) goto LAB_141eefa8b;
            }
            else {
              IsTimeLimitExceededPrint(dVar4,dVar13,LastTestTime,dVar14,pwVar8,pUVar7);
              LastTestTime = dVar13;
            }
            goto LAB_141eefab5;
          }
LAB_141eefa8b:
          if ((byte)LogStreaming._0_1_ < 6) {
            if (GGCSingleton->GCWantsToRunCounter != (TAtomic<int>)0x0) goto LAB_141eefab5;
          }
          else if (GGCSingleton->GCWantsToRunCounter != (TAtomic<int>)0x0) {
            UE::Logging::Private::BasicLog<6>
                      ((FStaticBasicLogRecord *)&PTR_u_Timing_out_asyn_1507e7988,
                       (FLogCategoryBase *)&LogStreaming);
            goto LAB_141eefab5;
          }
LAB_141eefaf2:
          pFVar27 = this->Linker;
          uVar32 = uVar1;
        } while ((int)uVar1 < (int)pFVar27->_padding_);
      }
      iVar28 = this->ExportAddNodeIndex;
      this->LastTypeOfWorkPerformed = L"ExportAddNode";
      iVar16 = iVar28;
      if (iVar28 < (int)pFVar27->_padding_) {
        do {
          iVar16 = iVar16 + 1;
          if ((iVar28 < 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ExportIndex >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                                  ,0x6d,L""), bVar19)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          local_e8.Phase = ImportOrExport_Create;
          local_e8.WaitingPackage.Package = this;
          local_e8.ImportOrExportIndex.Index = iVar16;
          FEventLoadGraph::AddNode(&this->AsyncLoadingThread->EventGraph,&local_e8,false,0);
          if ((iVar28 < 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ExportIndex >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                                  ,0x6d,L""), bVar19)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          local_d8.Phase = Export_StartIO;
          local_d8.WaitingPackage.Package = this;
          local_d8.ImportOrExportIndex.Index = iVar16;
          FEventLoadGraph::AddNode(&this->AsyncLoadingThread->EventGraph,&local_d8,false,1);
          if ((iVar28 < 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ExportIndex >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                                  ,0x6d,L""), bVar19)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          local_c8.Phase = ImportOrExport_Serialize;
          local_c8.WaitingPackage.Package = this;
          local_c8.ImportOrExportIndex.Index = iVar16;
          FEventLoadGraph::AddNode(&this->AsyncLoadingThread->EventGraph,&local_c8,false,1);
          this->ExportAddNodeIndex = iVar16;
          if (iVar28 != (iVar28 / 0x1e) * 0x1e) goto LAB_141eefd71;
          if ((this->AsyncLoadingThread->IsLoadingSuspended).Counter != 0) {
LAB_141eefd07:
            FVar6 = (this->Desc).Name;
            local_168.PackageName.ComparisonIndex = FVar6.ComparisonIndex.Value;
            local_168.PackageName.Number = FVar6.Number;
            local_168.SerialNumber = this->SerialNumber;
            FAsyncLoadingThread::QueueEvent_FinishLinker
                      (this->AsyncLoadingThread,&local_168,0x7fffffff);
            goto LAB_141eeff7a;
          }
          pUVar7 = this->LastObjectWorkWasPerformedOn;
          pwVar8 = this->LastTypeOfWorkPerformed;
          dVar4 = this->TickStartTime;
          dVar14 = (double)this->TimeLimit;
          if (this->bUseTimeLimit != false) {
            QueryPerformanceCounter(&local_158);
            dVar13 = (double)local_158.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar17;
            dVar36 = dVar13 - dVar4;
            if ((dVar36 <= dVar14) || (GWarnIfTimeLimitExceeded == 0)) {
              LastTestTime = dVar13;
              if (dVar36 <= dVar14) goto LAB_141eefcda;
            }
            else {
              IsTimeLimitExceededPrint(dVar4,dVar13,LastTestTime,dVar14,pwVar8,pUVar7);
              LastTestTime = dVar13;
            }
            goto LAB_141eefd07;
          }
LAB_141eefcda:
          if ((byte)LogStreaming._0_1_ < 6) {
            if (GGCSingleton->GCWantsToRunCounter != (TAtomic<int>)0x0) goto LAB_141eefd07;
          }
          else if (GGCSingleton->GCWantsToRunCounter != (TAtomic<int>)0x0) {
            UE::Logging::Private::BasicLog<6>
                      ((FStaticBasicLogRecord *)&PTR_u_Timing_out_asyn_1507e7988,
                       (FLogCategoryBase *)&LogStreaming);
            goto LAB_141eefd07;
          }
LAB_141eefd71:
          iVar28 = iVar28 + 1;
        } while (iVar28 < (int)this->Linker->_padding_);
      }
      if ((this->AsyncPackageLoadingState != WaitingForSummary) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("AsyncPackageLoadingState == EAsyncPackageLoadingState::WaitingForSummary"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                              ,0x7c7,L""), bVar19)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      this->AsyncPackageLoadingState = StartImportPackages;
      FAsyncLoadingThread::QueueEvent_StartImportPackages(this->AsyncLoadingThread,this,0x7ffffffe);
    }
    local_b8.ImportOrExportIndex.Index = 0;
    local_b8.Phase = ImportOrExport_Create;
    local_b8.WaitingPackage.Package = this;
    FEventLoadGraph::RemoveNode(&this->AsyncLoadingThread->EventGraph,&local_b8);
    if (this->bLoadHasFailed != false) {
      EventDrivenLoadingComplete(this);
      this->AsyncPackageLoadingState = PostLoad_Etc;
      pFVar34 = (this->AsyncLoadingThread->AsyncPackagesReadyForTick).AllocatorInstance.Data;
      pFVar10 = pFVar34 + (longlong)(this->AsyncLoadingThread->AsyncPackagesReadyForTick).ArrayNum *
                          8;
      for (; pFVar34 != pFVar10; pFVar34 = pFVar34 + 8) {
        if (*(FAsyncPackage **)pFVar34 == this) {
          bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("!AsyncLoadingThread.AsyncPackagesReadyForTick.Contains(this)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                              ,2000,L"");
          if (bVar19) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          break;
        }
      }
      pFVar9 = this->AsyncLoadingThread;
      pTVar35 = &pFVar9->AsyncPackagesReadyForTick;
      pFVar10 = (pTVar35->AllocatorInstance).Data;
      local_198[0] = this;
      if (((pFVar10 <= (FScriptContainerElement *)local_198) &&
          ((FScriptContainerElement *)local_198 <
           pFVar10 + (longlong)(pFVar9->AsyncPackagesReadyForTick).ArrayMax * 8)) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar19)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      iVar28 = (pFVar9->AsyncPackagesReadyForTick).ArrayNum;
      piVar3 = &(pFVar9->AsyncPackagesReadyForTick).ArrayMax;
      if (iVar28 == *piVar3) {
        iVar28 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar35->AllocatorInstance,piVar3);
      }
      (pFVar9->AsyncPackagesReadyForTick).ArrayNum = iVar28 + 1;
      *(FAsyncPackage **)((pTVar35->AllocatorInstance).Data + (longlong)iVar28 * 8) = local_198[0];
    }
  }
LAB_141eeff7a:
  pUVar31 = (UPackage *)0x0;
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (this->Linker != (FLinkerLoad *)0x0) {
    pUVar31 = (UPackage *)this->Linker->_padding_;
  }
  pFVar23 = FExclusiveLoadPackageTimeTracker::TrackerInstance;
  if (FExclusiveLoadPackageTimeTracker::TrackerInstance == (FExclusiveLoadPackageTimeTracker *)0x0)
  {
    pFVar23 = FExclusiveLoadPackageTimeTracker::Construct();
  }
  FExclusiveLoadPackageTimeTracker::InternalPopLoadPackage(pFVar23,pUVar31,(UObject *)0x0);
  EndAsyncLoad(this);
  this->LastObjectWorkWasPerformedOn = (UObject *)0x0;
  this->LastTypeOfWorkPerformed = (wchar_t *)0x0;
  puVar21 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_90 = local_res18;
  local_98 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar22 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_98,puVar21);
  pFVar22[8] = FVar5;
  pFVar22[9] = local_150;
  return;
}

// Event_ProcessImportsAndExports @ 141ef0020

void __thiscall FAsyncPackage::Event_ProcessImportsAndExports(FAsyncPackage *this)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  uint *puVar4;
  FTlsAutoCleanup *pFVar5;
  FExclusiveLoadPackageTimeTracker *this_00;
  FTlsAutoCleanup FVar6;
  undefined1 local_res8 [8];
  FLLMScope local_res10 [2];
  FMemScope local_res18;
  code *local_38;
  undefined1 *local_30;
  FScopedAsyncPackageEvent local_28;
  
  FLLMScope::FLLMScope(local_res10,AsyncLoading,false,None,Default,true);
  FMemScope::FMemScope(&local_res18,AsyncLoading,true);
  if (this->bAllExportsSerialized == false) {
    if ((this->AsyncPackageLoadingState != ProcessNewImportsAndExports) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("AsyncPackageLoadingState == EAsyncPackageLoadingState::ProcessNewImportsAndExports"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                           ,0xb5f,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_28.Package = this;
    puVar4 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
    local_30 = local_res8;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pFVar5 = FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_38,puVar4);
    local_28.PreviousPackage = *(FAsyncPackage **)(pFVar5 + 8);
    local_28.PreviousAsyncPackageLoader = *(IAsyncPackageLoader **)(pFVar5 + 9);
    pFVar5[8] = (FTlsAutoCleanup)this;
    FVar6 = (FTlsAutoCleanup)&this->AsyncLoadingThread->_padding_;
    if (this->AsyncLoadingThread == (FAsyncLoadingThread *)0x0) {
      FVar6 = (FTlsAutoCleanup)0x0;
    }
    pFVar5[9] = FVar6;
    BeginAsyncLoad(this);
    FVar1 = (this->Desc).PackagePath.PackageName;
    this_00 = FExclusiveLoadPackageTimeTracker::TrackerInstance;
    if (FExclusiveLoadPackageTimeTracker::TrackerInstance == (FExclusiveLoadPackageTimeTracker *)0x0
       ) {
      this_00 = FExclusiveLoadPackageTimeTracker::Construct();
    }
    FExclusiveLoadPackageTimeTracker::InternalPushLoadPackage(this_00,FVar1);
    ProcessImportsAndExports_Event(this);
    this->bProcessImportsAndExportsInFlight = false;
    ConditionalQueueProcessImportsAndExports(this,true);
    FScopedAsyncPackageEvent::~FScopedAsyncPackageEvent(&local_28);
    if ((this->AsyncPackageLoadingState != ProcessNewImportsAndExports) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("AsyncPackageLoadingState == EAsyncPackageLoadingState::ProcessNewImportsAndExports"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                           ,0xb66,L""), bVar3)) goto code_r0x000141ef01db;
  }
  else if ((((*(int *)&(this->ImportsThatAreNowCreated).field_0x8 != 0) ||
            (((*(int *)&(this->ImportsThatAreNowSerialized).field_0x8 != 0 ||
              (*(int *)&(this->ExportsThatCanBeCreated).field_0x8 != 0)) ||
             (*(int *)&(this->ExportsThatCanHaveIOStarted).field_0x8 != 0)))) ||
           ((*(int *)&(this->ExportsThatCanBeSerialized).field_0x8 != 0 ||
            ((this->ReadyPrecacheRequests).ArrayNum != 0)))) &&
          (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("!AnyImportsAndExportWorkOutstanding()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                              ,0xb5c,L""), bVar3)) {
code_r0x000141ef01db:
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// Event_ProcessPostloadWait @ 141ef0200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FAsyncPackage::Event_ProcessPostloadWait(FAsyncPackage *this)

{
  ulonglong uVar1;
  FAsyncPackage *pFVar2;
  uint *puVar3;
  undefined1 *puVar4;
  FAsyncLoadingThread *pFVar5;
  code *pcVar6;
  FAsyncPackage *pFVar7;
  FNameEntryId FVar8;
  undefined4 uVar9;
  TSet<FWeakAsyncPackagePtr,DefaultKeyFuncs<FWeakAsyncPackagePtr,0>,FDefaultSetAllocator> *pTVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  TTuple<FName,FAsyncPackage_*> *pTVar15;
  FArchive *pFVar16;
  TSet<FWeakAsyncPackagePtr,DefaultKeyFuncs<FWeakAsyncPackagePtr,0>,FDefaultSetAllocator> *pTVar17;
  longlong lVar18;
  longlong *plVar19;
  FWeakAsyncPackagePtr *pFVar20;
  longlong lVar21;
  ForElementType<FSetElementId> FVar22;
  ForElementType<FSetElementId> FVar23;
  int iVar24;
  FName FVar25;
  uint uVar26;
  uint uVar27;
  FName *pFVar28;
  undefined1 *puVar29;
  uint *puVar30;
  undefined1 *puVar31;
  undefined1 auStack_378 [32];
  undefined8 local_358;
  undefined8 local_350;
  double local_348;
  FScriptContainerElement *local_340;
  undefined1 local_338;
  undefined1 local_337 [7];
  FName local_330;
  int local_328;
  FAsyncPackage *local_320;
  TLess<FAsyncLoadEvent> local_318 [8];
  FName local_310;
  int local_308;
  FName local_300;
  int local_2f8;
  FName local_2f0;
  int local_2e8;
  TSet<FWeakAsyncPackagePtr,DefaultKeyFuncs<FWeakAsyncPackagePtr,0>,FDefaultSetAllocator> *local_2e0
  ;
  TSet<FWeakAsyncPackagePtr,DefaultKeyFuncs<FWeakAsyncPackagePtr,0>,FDefaultSetAllocator> *local_2d8
  ;
  int iStack_2d0;
  uint uStack_2cc;
  undefined1 *local_2c8;
  undefined4 uStack_2c0;
  int iStack_2bc;
  int local_2b8;
  undefined4 uStack_2b4;
  int iStack_2b0;
  undefined4 uStack_2ac;
  FName local_2a8;
  int local_2a0;
  FString local_298;
  undefined1 local_288 [12];
  uint local_27c;
  longlong local_278;
  uint local_270;
  int local_26c;
  TSet<FWeakAsyncPackagePtr,DefaultKeyFuncs<FWeakAsyncPackagePtr,0>,FDefaultSetAllocator> *local_260
  ;
  undefined1 local_258 [8];
  undefined1 local_250 [8];
  undefined1 local_248 [8];
  int local_240;
  int local_23c;
  undefined1 local_238 [8];
  int local_230;
  int local_22c;
  LARGE_INTEGER local_220;
  undefined1 local_218 [8];
  undefined1 local_210 [12];
  uint uStack_204;
  int local_200;
  TSet<FWeakAsyncPackagePtr,DefaultKeyFuncs<FWeakAsyncPackagePtr,0>,FDefaultSetAllocator> *local_1f8
  ;
  TSet<FWeakAsyncPackagePtr,DefaultKeyFuncs<FWeakAsyncPackagePtr,0>,FDefaultSetAllocator> *local_1f0
  ;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1e8;
  undefined8 uStack_1c8;
  TSet<FWeakAsyncPackagePtr,DefaultKeyFuncs<FWeakAsyncPackagePtr,0>,FDefaultSetAllocator> *local_1c0
  ;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1b8;
  undefined8 uStack_198;
  uint local_190;
  uint uStack_18c;
  int iStack_188;
  undefined4 uStack_184;
  FAsyncLoadingThread *local_180;
  TIterator local_178;
  undefined4 local_12c;
  undefined4 local_10c;
  TSet<FWeakAsyncPackagePtr,DefaultKeyFuncs<FWeakAsyncPackagePtr,0>,FDefaultSetAllocator> local_108;
  code *local_b8;
  longlong local_a8 [3];
  longlong *local_90;
  undefined1 local_88 [32];
  longlong local_68 [3];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_378;
  pFVar16 = (FArchive *)0x0;
  if (this->Linker->bIsAsyncLoader != false) {
    pFVar16 = this->Linker->Loader;
  }
  local_320 = this;
  if (5 < (byte)LogAsyncArchive._0_1_) {
    FPackagePath::GetLocalFullPath((FPackagePath *)&pFVar16[2].field_0x30,&local_298);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
         ::__l5::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
                             ::__l5::_thread_safe_static_guard_0__),
       `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
       ::__l5::_thread_safe_static_guard_0__ == -1)) {
      `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
      ::__l5::GlobalStartTime = FWindowsPlatformTime::Seconds();
      _Init_thread_footer(&`public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
                           ::__l5::_thread_safe_static_guard_0__);
    }
    QueryPerformanceCounter(&local_220);
    if (6 < (byte)LogAsyncArchive._0_1_) {
      local_340 = (FScriptContainerElement *)L"";
      if (local_298.Data.ArrayNum != 0) {
        local_340 = local_298.Data.AllocatorInstance.Data;
      }
      local_348 = (double)(float)((((double)local_220.QuadPart *
                                    FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000)
                                  - `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
                                    ::__l5::GlobalStartTime) * __real_408f400000000000);
      local_350 = 0;
      local_358 = 0;
      FGenericPlatformMisc::LowLevelOutputDebugStringf
                (L"%32s%3s    %12lld %12lld    %6.2fms    (+%9.2fms)      %s\r\n");
    }
    if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_298.Data.AllocatorInstance.Data);
    }
  }
  if ((this->AsyncPackageLoadingState != WaitingForPostLoad) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("AsyncPackageLoadingState == EAsyncPackageLoadingState::WaitingForPostLoad"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                          ,0xf59,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (((this->bAllExportsSerialized == false) ||
      (*(int *)&(this->OtherPackagesWaitingForMeBeforePostload).Elements.field_0x8 !=
       *(int *)&(this->OtherPackagesWaitingForMeBeforePostload).Elements.field_0x34)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("bAllExportsSerialized && !OtherPackagesWaitingForMeBeforePostload.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                          ,0xf5a,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  this->bProcessPostloadWaitInFlight = false;
  local_330 = (this->Desc).Name;
  local_328 = this->SerialNumber;
  if ((*(int *)&(this->PackagesIAmWaitingForBeforePostload).Elements.field_0x8 !=
       *(int *)&(this->PackagesIAmWaitingForBeforePostload).Elements.field_0x34) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("!PackagesIAmWaitingForBeforePostload.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                          ,0xf5f,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_108.Elements._0_8_ = 0;
  local_108.Elements._8_8_ = 0;
  local_108.Elements._32_8_ = 0;
  local_108.Elements._40_4_ = 0;
  local_108.Elements._44_4_ = 0x80;
  local_108.Elements._48_4_ = 0xffffffff;
  local_108.Elements._52_4_ = 0;
  local_108.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_108.HashSize = 0;
  TSet<FWeakAsyncPackagePtr,DefaultKeyFuncs<FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>::
  Emplace<FWeakAsyncPackagePtr_const_&>
            (&local_108,(FWeakAsyncPackagePtr *)local_258,(bool *)&local_330);
  local_1f8 = &this->PackagesIMayBeWaitingForBeforePostload;
  TSet<FWeakAsyncPackagePtr,DefaultKeyFuncs<FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>::TIterator
  ::TIterator((TIterator *)local_288,local_1f8);
  if (local_26c < *(int *)(local_278 + 0x18)) {
    do {
      iVar24 = local_26c;
      iVar14 = *(int *)(*(longlong *)local_288._0_8_ + 8 + (longlong)local_26c * 0x14);
      FVar25 = *(FName *)(*(longlong *)local_288._0_8_ + (longlong)local_26c * 0x14);
      local_310 = FVar25;
      local_308 = iVar14;
      if (iVar14 != local_328) {
        local_310.ComparisonIndex = FVar25.ComparisonIndex.Value;
        FVar8.Value = local_310.ComparisonIndex.Value;
        uVar12 = ::GetTypeHash(FVar8);
        FVar25 = local_310;
        if (local_108.Elements._8_4_ != local_108.Elements._52_4_) {
          FVar22 = (ForElementType<FSetElementId>)&local_108.Hash;
          if (local_108.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar22 = local_108.Hash.SecondaryData;
          }
          for (iVar13 = *(int *)((longlong)FVar22 +
                                (ulonglong)(local_108.HashSize - 1U & local_310.Number + uVar12) * 4
                                ); iVar13 != -1;
              iVar13 = *(int *)(local_108.Elements._0_8_ + 0xc + (longlong)iVar13 * 0x14)) {
            if (*(int *)(local_108.Elements._0_8_ + 8 + (longlong)iVar13 * 0x14) == iVar14) {
              bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("TestPtr == WeakThis || !AlreadyHandled.Contains(TestPtr)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                                  ,0xf69,L"");
              if (bVar11) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              break;
            }
          }
        }
      }
      if ((((FVar25 == (FName)0x0) || (iVar14 == 0)) ||
          ((pTVar15 = TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
                      ::Find((TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
                              *)&this->AsyncLoadingThread->AsyncPackageNameLookup,FVar25),
           pTVar15 == (TTuple<FName,FAsyncPackage_*> *)0x0 ||
           (((pFVar2 = *(FAsyncPackage **)&pTVar15->field_0x8, pFVar2 == (FAsyncPackage *)0x0 ||
             (pFVar2->SerialNumber != iVar14)) || (pFVar2 == this)))))) ||
         (WaitingForPostLoad < pFVar2->AsyncPackageLoadingState)) {
        pFVar28 = &local_310;
        pFVar20 = (FWeakAsyncPackagePtr *)local_248;
        pTVar17 = &local_108;
LAB_141ef076f:
        TSet<FWeakAsyncPackagePtr,DefaultKeyFuncs<FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>::
        Emplace<FWeakAsyncPackagePtr_const_&>(pTVar17,pFVar20,(bool *)pFVar28);
        TSet<FWeakAsyncPackagePtr,DefaultKeyFuncs<FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>::
        RemoveByIndex(local_260,iVar24);
      }
      else if (pFVar2->bAllExportsSerialized == false) {
        TSet<FWeakAsyncPackagePtr,DefaultKeyFuncs<FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>::
        Emplace<FWeakAsyncPackagePtr_const_&>
                  (&local_108,(FWeakAsyncPackagePtr *)(local_258 + 4),(bool *)&local_310);
        uVar12 = ::GetTypeHash(local_310.ComparisonIndex);
        if (*(int *)&(this->PackagesIAmWaitingForBeforePostload).Elements.field_0x8 !=
            *(int *)&(this->PackagesIAmWaitingForBeforePostload).Elements.field_0x34) {
          FVar22 = (this->PackagesIAmWaitingForBeforePostload).Hash.SecondaryData;
          FVar23 = (ForElementType<FSetElementId>)&(this->PackagesIAmWaitingForBeforePostload).Hash;
          if (FVar22 != (ForElementType<FSetElementId>)0x0) {
            FVar23 = FVar22;
          }
          iVar13 = *(int *)((longlong)FVar23 +
                           (ulonglong)
                           ((this->PackagesIAmWaitingForBeforePostload).HashSize - 1U &
                           uVar12 + FVar25.Number) * 4);
          if (iVar13 != -1) {
            lVar18 = *(longlong *)&(this->PackagesIAmWaitingForBeforePostload).Elements;
            do {
              if (*(int *)(lVar18 + 8 + (longlong)iVar13 * 0x14) == iVar14) {
                bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("!PackagesIAmWaitingForBeforePostload.Contains(TestPtr)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                                    ,0xf75,L"");
                if (bVar11) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                break;
              }
              iVar13 = *(int *)(lVar18 + 0xc + (longlong)iVar13 * 0x14);
            } while (iVar13 != -1);
          }
        }
        TSet<FWeakAsyncPackagePtr,DefaultKeyFuncs<FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>::
        Emplace<FWeakAsyncPackagePtr_const_&>
                  (&this->PackagesIAmWaitingForBeforePostload,(FWeakAsyncPackagePtr *)local_250,
                   (bool *)&local_310);
        pTVar17 = &pFVar2->OtherPackagesWaitingForMeBeforePostload;
        uVar12 = ::GetTypeHash(local_330.ComparisonIndex);
        if (*(int *)&(pFVar2->OtherPackagesWaitingForMeBeforePostload).Elements.field_0x8 !=
            *(int *)&(pFVar2->OtherPackagesWaitingForMeBeforePostload).Elements.field_0x34) {
          FVar22 = (pFVar2->OtherPackagesWaitingForMeBeforePostload).Hash.SecondaryData;
          FVar23 = (ForElementType<FSetElementId>)
                   &(pFVar2->OtherPackagesWaitingForMeBeforePostload).Hash;
          if (FVar22 != (ForElementType<FSetElementId>)0x0) {
            FVar23 = FVar22;
          }
          iVar14 = *(int *)((longlong)FVar23 +
                           (ulonglong)
                           ((pFVar2->OtherPackagesWaitingForMeBeforePostload).HashSize - 1U &
                           local_330.Number + uVar12) * 4);
          if (iVar14 != -1) {
            do {
              if (*(int *)(*(longlong *)&pTVar17->Elements + 8 + (longlong)iVar14 * 0x14) ==
                  local_328) {
                bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("!TestPkg->OtherPackagesWaitingForMeBeforePostload.Contains(WeakThis)"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                                    ,0xf77,L"");
                if (bVar11) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                goto LAB_141ef0751;
              }
              iVar14 = *(int *)(*(longlong *)&pTVar17->Elements + 0xc + (longlong)iVar14 * 0x14);
            } while (iVar14 != -1);
            pFVar28 = &local_330;
            pFVar20 = (FWeakAsyncPackagePtr *)(local_250 + 4);
            goto LAB_141ef076f;
          }
        }
LAB_141ef0751:
        pFVar28 = &local_330;
        pFVar20 = (FWeakAsyncPackagePtr *)(local_250 + 4);
        goto LAB_141ef076f;
      }
      local_270 = local_270 & ~local_27c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_288 + 8));
    } while (local_26c < *(int *)(local_278 + 0x18));
  }
  iVar14 = *(int *)&(this->PackagesIMayBeWaitingForBeforePostload).Elements.field_0x8;
  iVar24 = *(int *)&(this->PackagesIMayBeWaitingForBeforePostload).Elements.field_0x34;
  if (iVar14 == iVar24) {
LAB_141ef126d:
    if (*(int *)&(this->PackagesIAmWaitingForBeforePostload).Elements.field_0x8 ==
        *(int *)&(this->PackagesIAmWaitingForBeforePostload).Elements.field_0x34) {
      if ((iVar14 != iVar24) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("!PackagesIMayBeWaitingForBeforePostload.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                              ,0xfc0,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((this->AsyncPackageLoadingState != WaitingForPostLoad) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("AsyncPackageLoadingState == EAsyncPackageLoadingState::WaitingForPostLoad"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                              ,0xfc2,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar14 = this->SerialNumber;
      pFVar5 = this->AsyncLoadingThread;
      this->AsyncPackageLoadingState = ReadyForPostLoad;
      unique0x00023d00 = (this->Desc).Name;
      local_200 = iVar14;
      if (GRandomizeLoadOrder != 0) {
        GetRandomSerialNumber(0x7fffffff);
      }
      uVar9 = local_210._8_4_;
      uVar12 = uStack_204;
      local_b8 = (code *)0x0;
      iStack_188 = iVar14;
      local_180 = pFVar5;
      local_90 = FMemory::Malloc(0x20,8);
      *local_90 = (longlong)
                  &UE::Core::Private::Function::
                   TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_StartPostLoad'::`2'::<lambda_1>,0,1>
                   ::_vftable_;
      local_190 = uVar9;
      uStack_18c = uVar12;
      *(undefined4 *)(local_90 + 1) = uVar9;
      *(uint *)((longlong)local_90 + 0xc) = uVar12;
      *(int *)(local_90 + 2) = iStack_188;
      *(undefined4 *)((longlong)local_90 + 0x14) = uStack_184;
      local_90[3] = (longlong)local_180;
      local_88._16_8_ = local_b8;
      if ((uint *)(local_90 + 1) != (uint *)0x0) {
        local_88._16_8_ =
             UE::Core::Private::Function::
             TFunctionRefCaller<`FAsyncLoadingThread::QueueEvent_StartPostLoad'::__l2::<lambda_1>,void,FAsyncLoadEventArgs_&>
             ::Call;
      }
      if (GRandomizeLoadOrder == 0) {
        local_88._4_4_ = this->SerialNumber;
      }
      else {
        local_b8 = (code *)local_88._16_8_;
        local_88._4_4_ = GetRandomSerialNumber(0x7fffffff);
        local_88._16_8_ = local_b8;
      }
      local_88._0_4_ = (this->Desc).Priority;
      (pFVar5->EventQueue).RunningSerialNumber = (pFVar5->EventQueue).RunningSerialNumber + 1;
      local_88._12_4_ = (pFVar5->EventQueue).RunningSerialNumber;
      local_50 = local_90;
      local_88._8_4_ = 0;
      local_90 = (longlong *)0x0;
      local_68[0] = local_a8[0];
      local_68[1] = local_a8[1];
      local_68[2] = local_a8[2];
      local_b8 = (code *)0x0;
      TArray<FAsyncLoadEvent,TSizedDefaultAllocator<32>_>::HeapPush<TLess<FAsyncLoadEvent>_>
                (&(pFVar5->EventQueue).EventQueue,(FAsyncLoadEvent *)local_88,local_318);
      if ((code *)local_88._16_8_ != (code *)0x0) {
        plVar19 = (longlong *)(local_88 + 0x20);
        if (local_50 != (longlong *)0x0) {
          plVar19 = local_50;
        }
        (**(code **)(*plVar19 + 0x10))();
      }
      if (local_b8 != (code *)0x0) {
        plVar19 = local_a8;
        if (local_90 != (longlong *)0x0) {
          plVar19 = local_90;
        }
        (**(code **)(*plVar19 + 0x10))();
      }
      if (((this->bAllExportsSerialized == false) ||
          (*(int *)&(this->OtherPackagesWaitingForMeBeforePostload).Elements.field_0x8 !=
           *(int *)&(this->OtherPackagesWaitingForMeBeforePostload).Elements.field_0x34)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("bAllExportsSerialized && !OtherPackagesWaitingForMeBeforePostload.Num()"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                              ,0xfc5,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    local_108.HashSize = 0;
    if (local_108.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_108.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FWeakAsyncPackagePtr>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FWeakAsyncPackagePtr>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_108.Elements);
    return;
  }
LAB_141ef07d0:
  iVar13 = 0;
  if (*(int *)&(this->PackagesIAmWaitingForBeforePostload).Elements.field_0x8 ==
      *(int *)&(this->PackagesIAmWaitingForBeforePostload).Elements.field_0x34) {
    TSet<FWeakAsyncPackagePtr,DefaultKeyFuncs<FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>::
    TIterator::TIterator(&local_178,&this->PackagesIMayBeWaitingForBeforePostload);
    iVar24 = local_178._padding_._4_4_;
    local_2a8 = *(FName *)(*(longlong *)local_178._padding_ + (longlong)iVar24 * 0x14);
    iVar14 = *(int *)(*(longlong *)local_178._padding_ + 8 + (longlong)iVar24 * 0x14);
    local_2a0 = iVar14;
    TSet<FWeakAsyncPackagePtr,DefaultKeyFuncs<FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>::
    RemoveByIndex(local_178.Set,iVar24);
    uVar12 = ::GetTypeHash(local_2a8.ComparisonIndex);
    FVar25 = local_2a8;
    if (local_108.Elements._8_4_ != local_108.Elements._52_4_) {
      FVar22 = (ForElementType<FSetElementId>)&local_108.Hash;
      if (local_108.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar22 = local_108.Hash.SecondaryData;
      }
      for (iVar24 = *(int *)((longlong)FVar22 +
                            (ulonglong)(local_108.HashSize - 1U & local_2a8.Number + uVar12) * 4);
          iVar24 != -1; iVar24 = *(int *)(local_108.Elements._0_8_ + 0xc + (longlong)iVar24 * 0x14))
      {
        if (*(int *)(local_108.Elements._0_8_ + 8 + (longlong)iVar24 * 0x14) == iVar14)
        goto LAB_141ef1250;
      }
    }
    TSet<FWeakAsyncPackagePtr,DefaultKeyFuncs<FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>::
    Emplace<FWeakAsyncPackagePtr_const_&>
              (&local_108,(FWeakAsyncPackagePtr *)(local_248 + 4),(bool *)&local_2a8);
    if (((FVar25 != (FName)0x0) && (iVar14 != 0)) &&
       ((pTVar15 = TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
                   ::Find((TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
                           *)&this->AsyncLoadingThread->AsyncPackageNameLookup,FVar25),
        pTVar15 != (TTuple<FName,FAsyncPackage_*> *)0x0 &&
        ((pFVar2 = *(FAsyncPackage **)&pTVar15->field_0x8, pFVar2 != (FAsyncPackage *)0x0 &&
         (pFVar2->SerialNumber == iVar14)))))) {
      if ((pFVar2 == this) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("TestPkg != this",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                              ,0xf90,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (pFVar2->AsyncPackageLoadingState < ReadyForPostLoad) {
        if ((pFVar2->bAllExportsSerialized == false) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("TestPkg->bAllExportsSerialized",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                                ,0xf95,L""), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_2c8 = &(pFVar2->PackagesIAmWaitingForBeforePostload).Elements.field_0x10;
        iVar14 = *(int *)&(pFVar2->PackagesIAmWaitingForBeforePostload).Elements.field_0x28;
        local_2e0 = &pFVar2->PackagesIAmWaitingForBeforePostload;
        uStack_2cc = 1;
        local_2b8 = 0;
        iStack_2bc = local_2b8;
        iStack_2d0 = iVar13;
        if (iVar14 != 0) {
          puVar3 = *(uint **)&(pFVar2->PackagesIAmWaitingForBeforePostload).Elements.field_0x20;
          puVar30 = (uint *)local_2c8;
          if (puVar3 != (uint *)0x0) {
            puVar30 = puVar3;
          }
          uVar12 = *puVar30;
          local_2b8 = iVar13;
          while (uVar12 == 0) {
            lVar18 = (longlong)iStack_2d0;
            local_2b8 = local_2b8 + 0x20;
            iStack_2d0 = iStack_2d0 + 1;
            iStack_2bc = iVar14;
            if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_2d0)
            goto LAB_141ef0a0f;
            uVar12 = puVar30[lVar18 + 1];
          }
          uStack_2cc = -uVar12 & uVar12;
          uVar1 = (ulonglong)uStack_2cc * 2 + 1;
          lVar18 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          local_240 = (int)lVar18;
          iStack_2bc = local_2b8 + -1 + local_240;
          if (iVar14 < iStack_2bc) {
            iStack_2bc = iVar14;
          }
        }
LAB_141ef0a0f:
        puVar31 = &(pFVar2->PackagesIAmWaitingForBeforePostload).Elements.field_0x10;
        uStack_2b4 = local_12c;
        iStack_2b0 = *(int *)&(pFVar2->PackagesIAmWaitingForBeforePostload).Elements.field_0x8 -
                     *(int *)&(pFVar2->PackagesIAmWaitingForBeforePostload).Elements.field_0x34;
        uVar12 = *(uint *)&(pFVar2->PackagesIAmWaitingForBeforePostload).Elements.field_0x28;
        TStack_1e8._padding_ = CONCAT44(uStack_2cc,iStack_2d0);
        uVar26 = uVar12 & 0xffffffe0;
        uStack_2c0 = 0xffffffff;
        TStack_1e8.CurrentBitIndex = iStack_2bc;
        TStack_1e8.UnvisitedBitMask = 0xffffffff;
        iVar24 = (int)uVar12 >> 5;
        TStack_1e8._28_4_ = local_12c;
        TStack_1e8.BaseBitIndex = local_2b8;
        uStack_1c8 = CONCAT44(uStack_2ac,iStack_2b0);
        local_2d8 = local_2e0;
        local_1f0 = local_2e0;
        TStack_1e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_2c8;
        if ((((int)uVar12 < 0) || (iVar14 < (int)uVar12)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar27 = *(uint *)&(pFVar2->PackagesIAmWaitingForBeforePostload).Elements.field_0x28;
        if (uVar12 != uVar27) {
          puVar4 = *(undefined1 **)
                    &(pFVar2->PackagesIAmWaitingForBeforePostload).Elements.field_0x20;
          puVar29 = puVar31;
          if (puVar4 != (undefined1 *)0x0) {
            puVar29 = puVar4;
          }
          uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar29 + (longlong)iVar24 * 4);
          while (uVar12 == 0) {
            lVar18 = (longlong)iVar24;
            uVar26 = uVar26 + 0x20;
            iVar24 = iVar24 + 1;
            uVar12 = uVar27;
            if ((int)((uVar27 - 1) + ((int)(uVar27 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar24)
            goto LAB_141ef0b30;
            uVar12 = *(uint *)(puVar29 + lVar18 * 4 + 4);
          }
          uVar1 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
          lVar18 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          local_23c = (int)lVar18;
          uVar12 = local_23c + -1 + uVar26;
          if ((int)uVar27 < (int)uVar12) {
            uVar12 = uVar27;
          }
        }
LAB_141ef0b30:
        do {
          pTVar17 = local_1f0;
          if (*(int *)&(local_1f0->Elements).field_0x8 - *(int *)&(local_1f0->Elements).field_0x34
              != (int)uStack_1c8) {
            local_338 = 0;
            `TSparseArray<TSparseSetElement<FWeakAsyncPackagePtr>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_338);
          }
          if (((TStack_1e8.CurrentBitIndex == uVar12) &&
              (TStack_1e8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar31)) &&
             (pTVar17 == local_2e0)) goto LAB_141ef0d94;
          lVar18 = *(longlong *)&pTVar17->Elements;
          iVar14 = *(int *)(lVar18 + 8 + (longlong)TStack_1e8.CurrentBitIndex * 0x14);
          local_2f0 = *(FName *)(lVar18 + (longlong)TStack_1e8.CurrentBitIndex * 0x14);
          local_2e8 = iVar14;
          if ((iVar14 == local_328) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!(MaybeRecursePtr == WeakThis)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                                  ,0xf99,L""), bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FVar25 = local_2f0;
          pFVar7 = local_320;
          if ((((local_2f0 == (FName)0x0) || (iVar14 == 0)) ||
              (pTVar15 = TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
                         ::Find((TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
                                 *)&local_320->AsyncLoadingThread->AsyncPackageNameLookup,local_2f0)
              , pTVar15 == (TTuple<FName,FAsyncPackage_*> *)0x0)) ||
             ((lVar18 = *(longlong *)&pTVar15->field_0x8, lVar18 == 0 ||
              (*(int *)(lVar18 + 0x2dc) != iVar14)))) {
            lVar18 = 0;
LAB_141ef0c05:
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("MaybeRecursePkg && !MaybeRecursePkg->bAllExportsSerialized",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                                ,0xf9b,L"");
            if (bVar11) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          else if (*(char *)(lVar18 + 0x59a) != '\0') goto LAB_141ef0c05;
          uVar26 = ::GetTypeHash(local_2f0.ComparisonIndex);
          if (*(int *)&(pFVar7->PackagesIAmWaitingForBeforePostload).Elements.field_0x8 !=
              *(int *)&(pFVar7->PackagesIAmWaitingForBeforePostload).Elements.field_0x34) {
            FVar22 = (pFVar7->PackagesIAmWaitingForBeforePostload).Hash.SecondaryData;
            FVar23 = (ForElementType<FSetElementId>)
                     &(pFVar7->PackagesIAmWaitingForBeforePostload).Hash;
            if (FVar22 != (ForElementType<FSetElementId>)0x0) {
              FVar23 = FVar22;
            }
            iVar24 = *(int *)((longlong)FVar23 +
                             (ulonglong)
                             ((pFVar7->PackagesIAmWaitingForBeforePostload).HashSize - 1U &
                             uVar26 + FVar25.Number) * 4);
            if (iVar24 != -1) {
              lVar21 = *(longlong *)&(pFVar7->PackagesIAmWaitingForBeforePostload).Elements;
              do {
                if (*(int *)(lVar21 + 8 + (longlong)iVar24 * 0x14) == iVar14) {
                  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("!PackagesIAmWaitingForBeforePostload.Contains(MaybeRecursePtr)"
                                      ,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                                      ,0xf9d,L"");
                  if (bVar11) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  break;
                }
                iVar24 = *(int *)(lVar21 + 0xc + (longlong)iVar24 * 0x14);
              } while (iVar24 != -1);
            }
          }
          TSet<FWeakAsyncPackagePtr,DefaultKeyFuncs<FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>::
          Emplace<FWeakAsyncPackagePtr_const_&>
                    (&pFVar7->PackagesIAmWaitingForBeforePostload,(FWeakAsyncPackagePtr *)local_238,
                     (bool *)&local_2f0);
          uVar26 = ::GetTypeHash(local_330.ComparisonIndex);
          if (*(int *)(lVar18 + 0x538) != *(int *)(lVar18 + 0x564)) {
            lVar21 = lVar18 + 0x568;
            if (*(longlong *)(lVar18 + 0x570) != 0) {
              lVar21 = *(longlong *)(lVar18 + 0x570);
            }
            iVar14 = *(int *)(lVar21 + (ulonglong)
                                       (*(int *)(lVar18 + 0x578) - 1U & local_330.Number + uVar26) *
                                       4);
            if (iVar14 != -1) {
              lVar21 = *(longlong *)
                        &((TSet<FWeakAsyncPackagePtr,DefaultKeyFuncs<FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
                           *)(lVar18 + 0x530))->Elements;
              do {
                if (*(int *)(lVar21 + 8 + (longlong)iVar14 * 0x14) == local_328) {
                  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("!MaybeRecursePkg->OtherPackagesWaitingForMeBeforePostload.Contains(WeakThis)"
                                      ,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                                      ,3999,L"");
                  if (bVar11) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  break;
                }
                iVar14 = *(int *)(lVar21 + 0xc + (longlong)iVar14 * 0x14);
              } while (iVar14 != -1);
            }
          }
          TSet<FWeakAsyncPackagePtr,DefaultKeyFuncs<FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>::
          Emplace<FWeakAsyncPackagePtr_const_&>
                    ((TSet<FWeakAsyncPackagePtr,DefaultKeyFuncs<FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
                      *)(lVar18 + 0x530),(FWeakAsyncPackagePtr *)(local_238 + 4),(bool *)&local_330)
          ;
          TStack_1e8.UnvisitedBitMask = TStack_1e8.UnvisitedBitMask & ~TStack_1e8._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1e8);
        } while( true );
      }
    }
    goto LAB_141ef1250;
  }
  goto LAB_141ef126d;
LAB_141ef0d94:
  local_2c8 = &(pFVar2->PackagesIMayBeWaitingForBeforePostload).Elements.field_0x10;
  iStack_2d0 = 0;
  iVar14 = *(int *)&(pFVar2->PackagesIMayBeWaitingForBeforePostload).Elements.field_0x28;
  pTVar17 = &pFVar2->PackagesIMayBeWaitingForBeforePostload;
  local_2b8 = 0;
  uStack_2cc = 1;
  iStack_2bc = 0;
  if (iVar14 != 0) {
    puVar3 = *(uint **)&(pFVar2->PackagesIMayBeWaitingForBeforePostload).Elements.field_0x20;
    puVar30 = (uint *)local_2c8;
    if (puVar3 != (uint *)0x0) {
      puVar30 = puVar3;
    }
    uVar12 = *puVar30;
    while (uVar12 == 0) {
      lVar18 = (longlong)iStack_2d0;
      local_2b8 = local_2b8 + 0x20;
      iStack_2d0 = iStack_2d0 + 1;
      iStack_2bc = iVar14;
      if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_2d0) goto LAB_141ef0e1f;
      uVar12 = puVar30[lVar18 + 1];
    }
    uStack_2cc = -uVar12 & uVar12;
    uVar1 = (ulonglong)uStack_2cc * 2 + 1;
    lVar18 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    local_230 = (int)lVar18;
    iStack_2bc = local_230 + -1 + local_2b8;
    if (iVar14 < iStack_2bc) {
      iStack_2bc = iVar14;
    }
  }
LAB_141ef0e1f:
  uVar12 = *(uint *)&(pFVar2->PackagesIMayBeWaitingForBeforePostload).Elements.field_0x28;
  uStack_2b4 = local_10c;
  iStack_2b0 = *(int *)&(pFVar2->PackagesIMayBeWaitingForBeforePostload).Elements.field_0x8 -
               *(int *)&(pFVar2->PackagesIMayBeWaitingForBeforePostload).Elements.field_0x34;
  puVar31 = &(pFVar2->PackagesIMayBeWaitingForBeforePostload).Elements.field_0x10;
  uVar26 = uVar12 & 0xffffffe0;
  TStack_1b8._padding_ = CONCAT44(uStack_2cc,iStack_2d0);
  uStack_2c0 = 0xffffffff;
  TStack_1b8.CurrentBitIndex = iStack_2bc;
  TStack_1b8.UnvisitedBitMask = 0xffffffff;
  iVar24 = (int)uVar12 >> 5;
  TStack_1b8._28_4_ = local_10c;
  TStack_1b8.BaseBitIndex = local_2b8;
  uStack_198 = CONCAT44(uStack_2ac,iStack_2b0);
  local_2e0 = pTVar17;
  local_2d8 = pTVar17;
  local_1c0 = pTVar17;
  TStack_1b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_2c8;
  if ((((int)uVar12 < 0) || (iVar14 < (int)uVar12)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar27 = *(uint *)&(pFVar2->PackagesIMayBeWaitingForBeforePostload).Elements.field_0x28;
  if (uVar12 != uVar27) {
    puVar4 = *(undefined1 **)&(pFVar2->PackagesIMayBeWaitingForBeforePostload).Elements.field_0x20;
    puVar29 = puVar31;
    if (puVar4 != (undefined1 *)0x0) {
      puVar29 = puVar4;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar29 + (longlong)iVar24 * 4);
    while (uVar12 == 0) {
      lVar18 = (longlong)iVar24;
      uVar26 = uVar26 + 0x20;
      iVar24 = iVar24 + 1;
      uVar12 = uVar27;
      if ((int)((uVar27 - 1) + ((int)(uVar27 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar24)
      goto LAB_141ef0f40;
      uVar12 = *(uint *)(puVar29 + lVar18 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar18 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    local_22c = (int)lVar18;
    uVar12 = local_22c + -1 + uVar26;
    if ((int)uVar27 < (int)uVar12) {
      uVar12 = uVar27;
    }
  }
LAB_141ef0f40:
  while( true ) {
    pTVar10 = local_1c0;
    if (*(int *)&(local_1c0->Elements).field_0x8 - *(int *)&(local_1c0->Elements).field_0x34 !=
        (int)uStack_198) {
      local_337[0] = 0;
      `TSparseArray<TSparseSetElement<FWeakAsyncPackagePtr>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_337);
    }
    if (((TStack_1b8.CurrentBitIndex == uVar12) &&
        (TStack_1b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar31)) &&
       (this = local_320, pTVar10 == pTVar17)) break;
    lVar18 = *(longlong *)&pTVar10->Elements;
    local_300 = *(FName *)(lVar18 + (longlong)TStack_1b8.CurrentBitIndex * 0x14);
    iVar14 = *(int *)(lVar18 + 8 + (longlong)TStack_1b8.CurrentBitIndex * 0x14);
    FVar8.Value = local_300.ComparisonIndex.Value;
    local_2f8 = iVar14;
    uVar26 = ::GetTypeHash(local_300.ComparisonIndex);
    uVar27 = local_300.Number;
    if (local_108.Elements._8_4_ != local_108.Elements._52_4_) {
      FVar22 = (ForElementType<FSetElementId>)&local_108.Hash;
      if (local_108.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar22 = local_108.Hash.SecondaryData;
      }
      for (iVar24 = *(int *)((longlong)FVar22 +
                            (ulonglong)(local_108.HashSize - 1U & uVar27 + uVar26) * 4);
          iVar24 != -1; iVar24 = *(int *)(local_108.Elements._0_8_ + 0xc + (longlong)iVar24 * 0x14))
      {
        if (*(int *)(local_108.Elements._0_8_ + 8 + (longlong)iVar24 * 0x14) == iVar14)
        goto LAB_141ef1229;
      }
    }
    if (((local_300 != (FName)0x0) && (iVar14 != 0)) &&
       ((pTVar15 = TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
                   ::Find((TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
                           *)&local_320->AsyncLoadingThread->AsyncPackageNameLookup,local_300),
        pTVar15 != (TTuple<FName,FAsyncPackage_*> *)0x0 &&
        ((pFVar2 = *(FAsyncPackage **)&pTVar15->field_0x8, pFVar2 != (FAsyncPackage *)0x0 &&
         (pFVar2->SerialNumber == iVar14)))))) {
      if ((pFVar2 == local_320) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("MaybeRecursePkg != this",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                              ,0xfab,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar7 = local_320;
      if (pFVar2->AsyncPackageLoadingState < ReadyForPostLoad) {
        if (pFVar2->bAllExportsSerialized == false) {
          pTVar17 = &local_320->PackagesIAmWaitingForBeforePostload;
          uVar26 = ::GetTypeHash(FVar8);
          if (*(int *)&(local_320->PackagesIAmWaitingForBeforePostload).Elements.field_0x8 !=
              *(int *)&(pFVar7->PackagesIAmWaitingForBeforePostload).Elements.field_0x34) {
            FVar22 = (pFVar7->PackagesIAmWaitingForBeforePostload).Hash.SecondaryData;
            FVar23 = (ForElementType<FSetElementId>)
                     &(pFVar7->PackagesIAmWaitingForBeforePostload).Hash;
            if (FVar22 != (ForElementType<FSetElementId>)0x0) {
              FVar23 = FVar22;
            }
            iVar24 = *(int *)((longlong)FVar23 +
                             (ulonglong)
                             ((pFVar7->PackagesIAmWaitingForBeforePostload).HashSize - 1U &
                             uVar26 + uVar27) * 4);
            if (iVar24 != -1) {
              lVar18 = *(longlong *)&pTVar17->Elements;
              do {
                if (*(int *)(lVar18 + 8 + (longlong)iVar24 * 0x14) == iVar14) {
                  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("!PackagesIAmWaitingForBeforePostload.Contains(MaybeRecursePtr)"
                                      ,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                                      ,0xfb6,L"");
                  if (bVar11) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  break;
                }
                iVar24 = *(int *)(lVar18 + 0xc + (longlong)iVar24 * 0x14);
              } while (iVar24 != -1);
            }
          }
          TSet<FWeakAsyncPackagePtr,DefaultKeyFuncs<FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>::
          Emplace<FWeakAsyncPackagePtr_const_&>
                    (pTVar17,(FWeakAsyncPackagePtr *)(local_218 + 4),(bool *)&local_300);
          uVar26 = ::GetTypeHash(local_330.ComparisonIndex);
          if (*(int *)&(pFVar2->OtherPackagesWaitingForMeBeforePostload).Elements.field_0x8 !=
              *(int *)&(pFVar2->OtherPackagesWaitingForMeBeforePostload).Elements.field_0x34) {
            FVar22 = (pFVar2->OtherPackagesWaitingForMeBeforePostload).Hash.SecondaryData;
            FVar23 = (ForElementType<FSetElementId>)
                     &(pFVar2->OtherPackagesWaitingForMeBeforePostload).Hash;
            if (FVar22 != (ForElementType<FSetElementId>)0x0) {
              FVar23 = FVar22;
            }
            iVar14 = *(int *)((longlong)FVar23 +
                             (ulonglong)
                             ((pFVar2->OtherPackagesWaitingForMeBeforePostload).HashSize - 1U &
                             local_330.Number + uVar26) * 4);
            if (iVar14 != -1) {
              lVar18 = *(longlong *)&(pFVar2->OtherPackagesWaitingForMeBeforePostload).Elements;
              do {
                if (*(int *)(lVar18 + 8 + (longlong)iVar14 * 0x14) == local_328) {
                  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("!MaybeRecursePkg->OtherPackagesWaitingForMeBeforePostload.Contains(WeakThis)"
                                      ,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                                      ,0xfb8,L"");
                  if (bVar11) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  break;
                }
                iVar14 = *(int *)(lVar18 + 0xc + (longlong)iVar14 * 0x14);
              } while (iVar14 != -1);
            }
          }
          TSet<FWeakAsyncPackagePtr,DefaultKeyFuncs<FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>::
          Emplace<FWeakAsyncPackagePtr_const_&>
                    (&pFVar2->OtherPackagesWaitingForMeBeforePostload,
                     (FWeakAsyncPackagePtr *)local_218,(bool *)&local_330);
          pTVar17 = local_2e0;
        }
        else {
          TSet<FWeakAsyncPackagePtr,DefaultKeyFuncs<FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>::
          Emplace<FWeakAsyncPackagePtr_const_&>
                    (local_1f8,(FWeakAsyncPackagePtr *)local_210,(bool *)&local_300);
        }
      }
    }
LAB_141ef1229:
    TStack_1b8.UnvisitedBitMask = TStack_1b8.UnvisitedBitMask & ~TStack_1b8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1b8);
  }
LAB_141ef1250:
  iVar14 = *(int *)&(this->PackagesIMayBeWaitingForBeforePostload).Elements.field_0x8;
  iVar24 = *(int *)&(this->PackagesIMayBeWaitingForBeforePostload).Elements.field_0x34;
  if (iVar14 == iVar24) goto LAB_141ef126d;
  goto LAB_141ef07d0;
}

// Event_SetupExports @ 141ef1580

void __thiscall FAsyncPackage::Event_SetupExports(FAsyncPackage *this)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  Type TVar4;
  uint *puVar5;
  FTlsAutoCleanup *pFVar6;
  FExclusiveLoadPackageTimeTracker *this_00;
  FTlsAutoCleanup FVar7;
  undefined1 local_res8 [8];
  code *local_38;
  undefined1 *local_30;
  FScopedAsyncPackageEvent local_28;
  
  local_28.Package = this;
  if (this == (FAsyncPackage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Package",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                       ,0x6c6,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  puVar5 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_30 = local_res8;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar6 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_38,puVar5);
  local_28.PreviousPackage = *(FAsyncPackage **)(pFVar6 + 8);
  local_28.PreviousAsyncPackageLoader = *(IAsyncPackageLoader **)(pFVar6 + 9);
  pFVar6[8] = (FTlsAutoCleanup)this;
  FVar7 = (FTlsAutoCleanup)&this->AsyncLoadingThread->_padding_;
  if (this->AsyncLoadingThread == (FAsyncLoadingThread *)0x0) {
    FVar7 = (FTlsAutoCleanup)0x0;
  }
  pFVar6[9] = FVar7;
  BeginAsyncLoad(this);
  FVar1 = (this->Desc).PackagePath.PackageName;
  this_00 = FExclusiveLoadPackageTimeTracker::TrackerInstance;
  if (FExclusiveLoadPackageTimeTracker::TrackerInstance == (FExclusiveLoadPackageTimeTracker *)0x0)
  {
    this_00 = FExclusiveLoadPackageTimeTracker::Construct();
  }
  FExclusiveLoadPackageTimeTracker::InternalPushLoadPackage(this_00,FVar1);
  TVar4 = SetupExports_Event(this);
  if (TVar4 == TimeOut) {
    FAsyncLoadingThread::QueueEvent_SetupExports(this->AsyncLoadingThread,this,0);
    FScopedAsyncPackageEvent::~FScopedAsyncPackageEvent(&local_28);
    return;
  }
  FScopedAsyncPackageEvent::~FScopedAsyncPackageEvent(&local_28);
  if (this->AsyncPackageLoadingState != SetupExports) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("AsyncPackageLoadingState == EAsyncPackageLoadingState::SetupExports",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                       ,0xa71,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->AsyncPackageLoadingState = ProcessNewImportsAndExports;
  ConditionalQueueProcessImportsAndExports(this,false);
  return;
}

// Event_SetupImports @ 141ef16e0

/* WARNING: Enum "EEventLoadNode": Some values do not have unique names */

void __thiscall FAsyncPackage::Event_SetupImports(FAsyncPackage *this)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  Type TVar4;
  uint *puVar5;
  FTlsAutoCleanup *pFVar6;
  FExclusiveLoadPackageTimeTracker *this_00;
  FTlsAutoCleanup FVar7;
  undefined1 local_res8 [8];
  FEventLoadNodePtr local_48;
  code *local_38;
  undefined1 *local_30;
  FScopedAsyncPackageEvent local_28;
  
  local_28.Package = this;
  if (this == (FAsyncPackage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Package",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                       ,0x6c6,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  puVar5 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_30 = local_res8;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar6 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_38,puVar5);
  local_28.PreviousPackage = *(FAsyncPackage **)(pFVar6 + 8);
  local_28.PreviousAsyncPackageLoader = *(IAsyncPackageLoader **)(pFVar6 + 9);
  pFVar6[8] = (FTlsAutoCleanup)this;
  FVar7 = (FTlsAutoCleanup)&this->AsyncLoadingThread->_padding_;
  if (this->AsyncLoadingThread == (FAsyncLoadingThread *)0x0) {
    FVar7 = (FTlsAutoCleanup)0x0;
  }
  pFVar6[9] = FVar7;
  BeginAsyncLoad(this);
  FVar1 = (this->Desc).PackagePath.PackageName;
  this_00 = FExclusiveLoadPackageTimeTracker::TrackerInstance;
  if (FExclusiveLoadPackageTimeTracker::TrackerInstance == (FExclusiveLoadPackageTimeTracker *)0x0)
  {
    this_00 = FExclusiveLoadPackageTimeTracker::Construct();
  }
  FExclusiveLoadPackageTimeTracker::InternalPushLoadPackage(this_00,FVar1);
  TVar4 = SetupImports_Event(this);
  if (TVar4 != Complete) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SetupImports_Event() == EAsyncPackageState::Complete",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                       ,0x91a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FScopedAsyncPackageEvent::~FScopedAsyncPackageEvent(&local_28);
  if (this->AsyncPackageLoadingState != SetupImports) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("AsyncPackageLoadingState == EAsyncPackageLoadingState::SetupImports",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                       ,0x91c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (this->ImportIndex != (int)this->Linker->_padding_) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ImportIndex == Linker->ImportMap.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                       ,0x91d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->AsyncPackageLoadingState = SetupExports;
  local_48.ImportOrExportIndex.Index = 0;
  local_48.Phase = ImportOrExport_Serialize;
  local_48.WaitingPackage.Package = this;
  FEventLoadGraph::RemoveNode(&this->AsyncLoadingThread->EventGraph,&local_48);
  FAsyncLoadingThread::QueueEvent_SetupExports(this->AsyncLoadingThread,this,0);
  return;
}

// Event_StartImportPackages @ 141ef18b0

/* WARNING: Enum "EEventLoadNode": Some values do not have unique names */

void __thiscall FAsyncPackage::Event_StartImportPackages(FAsyncPackage *this)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  Type TVar4;
  uint *puVar5;
  FTlsAutoCleanup *pFVar6;
  FExclusiveLoadPackageTimeTracker *this_00;
  FTlsAutoCleanup FVar7;
  undefined1 local_res8 [8];
  FLLMScope local_res10 [2];
  FMemScope local_res18 [2];
  FEventLoadNodePtr local_58;
  code *local_48;
  undefined1 *local_40;
  FScopedAsyncPackageEvent local_38;
  
  FLLMScope::FLLMScope(local_res10,AsyncLoading,false,None,Default,true);
  FMemScope::FMemScope(local_res18,AsyncLoading,true);
  local_38.Package = this;
  if (this == (FAsyncPackage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Package",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                       ,0x6c6,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  puVar5 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_40 = local_res8;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar6 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_48,puVar5);
  local_38.PreviousPackage = *(FAsyncPackage **)(pFVar6 + 8);
  local_38.PreviousAsyncPackageLoader = *(IAsyncPackageLoader **)(pFVar6 + 9);
  pFVar6[8] = (FTlsAutoCleanup)this;
  FVar7 = (FTlsAutoCleanup)&this->AsyncLoadingThread->_padding_;
  if (this->AsyncLoadingThread == (FAsyncLoadingThread *)0x0) {
    FVar7 = (FTlsAutoCleanup)0x0;
  }
  pFVar6[9] = FVar7;
  BeginAsyncLoad(this);
  FVar1 = (this->Desc).PackagePath.PackageName;
  this_00 = FExclusiveLoadPackageTimeTracker::TrackerInstance;
  if (FExclusiveLoadPackageTimeTracker::TrackerInstance == (FExclusiveLoadPackageTimeTracker *)0x0)
  {
    this_00 = FExclusiveLoadPackageTimeTracker::Construct();
  }
  FExclusiveLoadPackageTimeTracker::InternalPushLoadPackage(this_00,FVar1);
  TVar4 = LoadImports_Event(this);
  if (TVar4 == TimeOut) {
    FAsyncLoadingThread::QueueEvent_StartImportPackages(this->AsyncLoadingThread,this,0x7fffffff);
    FScopedAsyncPackageEvent::~FScopedAsyncPackageEvent(&local_38);
  }
  else {
    FScopedAsyncPackageEvent::~FScopedAsyncPackageEvent(&local_38);
    if (this->AsyncPackageLoadingState != StartImportPackages) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("AsyncPackageLoadingState == EAsyncPackageLoadingState::StartImportPackages"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                         ,0x7f7,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    this->AsyncPackageLoadingState = WaitingForImportPackages;
    local_58.ImportOrExportIndex.Index = 0;
    local_58.Phase = ImportOrExport_Serialize;
    local_58.WaitingPackage.Package = this;
    FEventLoadGraph::DoneAddingPrerequistesFireIfNone
              (&this->AsyncLoadingThread->EventGraph,&local_58,true);
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// Event_StartPostload @ 141ef1a70

void __thiscall FAsyncPackage::Event_StartPostload(FAsyncPackage *this)

{
  int *piVar1;
  FTlsAutoCleanup this_00;
  UObjectBase *this_01;
  FAsyncLoadingThread *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  FTlsAutoCleanup *pFVar9;
  FUObjectItem *pFVar10;
  FArchive *pFVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  FLinkerLoad *pFVar14;
  TArray<FAsyncPackage_*,TSizedDefaultAllocator<32>_> *pTVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  FLLMScope local_res10 [2];
  LARGE_INTEGER local_res18;
  LARGE_INTEGER local_res20;
  FAsyncPackage *local_58;
  FMemScope local_50;
  FString local_48;
  code *local_38;
  undefined1 *local_30;
  
  FLLMScope::FLLMScope(local_res10,AsyncLoading,false,None,Default,true);
  FMemScope::FMemScope(&local_50,AsyncLoading,true);
  if (this->Linker->bIsAsyncLoader == false) {
    pFVar11 = (FArchive *)0x0;
  }
  else {
    pFVar11 = this->Linker->Loader;
  }
  if (5 < (byte)LogAsyncArchive._0_1_) {
    FPackagePath::GetLocalFullPath((FPackagePath *)&pFVar11[2].field_0x30,&local_48);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
         ::__l5::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
                             ::__l5::_thread_safe_static_guard_0__),
       `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
       ::__l5::_thread_safe_static_guard_0__ == -1)) {
      QueryPerformanceCounter(&local_res18);
      `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
      ::__l5::GlobalStartTime =
           (double)local_res18.QuadPart * FGenericPlatformTime::SecondsPerCycle +
           __real_4170000000000000;
      _Init_thread_footer(&`public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
                           ::__l5::_thread_safe_static_guard_0__);
    }
    QueryPerformanceCounter(&local_res20);
    if (6 < (byte)LogAsyncArchive._0_1_) {
      FGenericPlatformMisc::LowLevelOutputDebugStringf
                (L"%32s%3s    %12lld %12lld    %6.2fms    (+%9.2fms)      %s\r\n");
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if ((this->AsyncPackageLoadingState != ReadyForPostLoad) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("AsyncPackageLoadingState == EAsyncPackageLoadingState::ReadyForPostLoad",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                         ,0xfce,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((*(int *)&(this->PackagesIMayBeWaitingForBeforePostload).Elements.field_0x8 !=
       *(int *)&(this->PackagesIMayBeWaitingForBeforePostload).Elements.field_0x34) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!PackagesIMayBeWaitingForBeforePostload.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                         ,0xfcf,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((*(int *)&(this->PackagesIAmWaitingForBeforePostload).Elements.field_0x8 !=
       *(int *)&(this->PackagesIAmWaitingForBeforePostload).Elements.field_0x34) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!PackagesIAmWaitingForBeforePostload.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                         ,0xfd0,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((*(int *)&(this->OtherPackagesWaitingForMeBeforePostload).Elements.field_0x8 !=
       *(int *)&(this->OtherPackagesWaitingForMeBeforePostload).Elements.field_0x34) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!OtherPackagesWaitingForMeBeforePostload.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                         ,0xfd1,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this->AsyncPackageLoadingState = PostLoad_Etc;
  EventDrivenLoadingComplete(this);
  puVar8 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_30 = local_res8;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar9 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_38,puVar8);
  this_00 = pFVar9[0x2f];
  uVar16 = (int)this->Linker->_padding_ + *(int *)((longlong)this_00 + 0x18);
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  if (*(int *)((longlong)this_00 + 0x1c) < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar16,(ForAnyElementType *)((longlong)this_00 + 0x10),
               *(int *)((longlong)this_00 + 0x18),(int *)((longlong)this_00 + 0x1c));
  }
  pFVar14 = this->Linker;
  uVar16 = 0;
  if (0 < (int)pFVar14->_padding_) {
    lVar13 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar16 < (int)pFVar14->_padding_) {
        uVar6 = ~uVar16 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      this_01 = *(UObjectBase **)(pFVar14->_padding_ + 0x40 + lVar13);
      if ((this_01 != (UObjectBase *)0x0) &&
         (((this_01->ObjectFlags >> 0xc & 1) != 0 ||
          (pFVar10 = FUObjectArray::IndexToObject(&GUObjectArray,this_01->InternalIndex),
          ((pFVar10->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) != 0)))) {
        bVar5 = UObjectBase::IsValidLowLevelFast(this_01,true);
        if ((!bVar5) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Object->IsValidLowLevelFast()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                               ,0xfde,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FUObjectSerializeContext::AddLoadedObject
                  ((FUObjectSerializeContext *)this_00,(UObject *)this_01);
      }
      pFVar14 = this->Linker;
      uVar16 = uVar16 + 1;
      lVar13 = lVar13 + 0x68;
    } while ((int)uVar16 < (int)pFVar14->_padding_);
  }
  pFVar12 = (this->AsyncLoadingThread->AsyncPackagesReadyForTick).AllocatorInstance.Data;
  pFVar3 = pFVar12 + (longlong)(this->AsyncLoadingThread->AsyncPackagesReadyForTick).ArrayNum * 8;
  do {
    if (pFVar12 == pFVar3) {
LAB_141ef1e56:
      pFVar2 = this->AsyncLoadingThread;
      pTVar15 = &pFVar2->AsyncPackagesReadyForTick;
      pFVar3 = (pTVar15->AllocatorInstance).Data;
      local_58 = this;
      if (((pFVar3 <= (FScriptContainerElement *)&local_58) &&
          ((FScriptContainerElement *)&local_58 <
           pFVar3 + (longlong)(pFVar2->AsyncPackagesReadyForTick).ArrayMax * 8)) &&
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
      iVar7 = (pFVar2->AsyncPackagesReadyForTick).ArrayNum;
      piVar1 = &(pFVar2->AsyncPackagesReadyForTick).ArrayMax;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar15->AllocatorInstance,piVar1);
      }
      (pFVar2->AsyncPackagesReadyForTick).ArrayNum = iVar7 + 1;
      *(FAsyncPackage **)((pTVar15->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_58;
      FMemScope::~FMemScope(&local_50);
      FLLMScope::~FLLMScope(local_res10);
      return;
    }
    if (*(FAsyncPackage **)pFVar12 == this) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!AsyncLoadingThread.AsyncPackagesReadyForTick.Contains(this)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                         ,0xfe3,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      goto LAB_141ef1e56;
    }
    pFVar12 = pFVar12 + 8;
  } while( true );
}

// FindExistingImport @ 141ef2e00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FObjectImport * __thiscall FAsyncPackage::FindExistingImport(FAsyncPackage *this,int param_1)

{
  FLinkerLoad *pFVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FNameEntryId FVar7;
  FObjectImport *pFVar8;
  FName FVar9;
  UClass *pUVar10;
  UObject *pUVar11;
  FString *pFVar12;
  FObjectImport *pFVar13;
  undefined4 extraout_var;
  wchar_t *pwVar14;
  int *piVar15;
  wchar_t *pwVar16;
  undefined1 local_res10 [8];
  FName local_res18;
  FName local_res20;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FName local_98;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50 [2];
  
  pFVar1 = this->Linker;
  uVar5 = 0;
  if (param_1 < (int)pFVar1->_padding_) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar8 = (FObjectImport *)(*pcVar2)();
    return pFVar8;
  }
  pFVar8 = (FObjectImport *)(pFVar1->_padding_ + (longlong)param_1 * 0x38);
  if ((pFVar8->XObject == (UObject *)0x0) && (pFVar8->bImportSearchedFor == false)) {
    pFVar8->bImportSearchedFor = true;
    if (pFVar8->_padding_ == 0) {
      FVar9 = FLinkerInstancingContext::RemapPackage(&this->Linker->InstancingContext,&local_98);
      FVar9 = *(FName *)FVar9;
      pUVar10 = Z_Construct_UClass_UPackage_NoRegister();
      pUVar11 = StaticFindObjectFast(pUVar10,(UObject *)0x0,FVar9,ExactClass,RF_NoFlags,Borrowed);
      pFVar8->XObject = pUVar11;
      if (pUVar11 != (UObject *)0x0) {
        pUVar10 = Z_Construct_UClass_UPackage_NoRegister();
        iVar6 = (int)pUVar10->_padding_;
        if ((*(int *)(*(longlong *)&pUVar11->field_0x10 + 0x38) < iVar6) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar11->field_0x10 + 0x30) + (longlong)iVar6 * 8) !=
            &pUVar10->_padding_)) {
          pFVar12 = GetTypeName<UPackage>(&local_60);
          pwVar14 = L"";
          if ((pFVar12->Data).ArrayNum == 0) {
            pwVar16 = L"";
          }
          else {
            pwVar16 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
          }
          pFVar12 = GetFullNameForCastLogError<UObject>(local_50,pUVar11);
          if ((pFVar12->Data).ArrayNum != 0) {
            pwVar14 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(pwVar14,pwVar16);
        }
      }
    }
    else if (pFVar8->_padding_ < 0) {
      iVar6 = FPackageIndex::ToImport((FPackageIndex *)&pFVar8->_padding_);
      pFVar13 = FindExistingImport(this,iVar6);
      pUVar11 = pFVar13->XObject;
      if (pUVar11 != (UObject *)0x0) {
        FVar9 = (FName)pFVar8->_padding_;
        pUVar10 = Z_Construct_UClass_UObject_NoRegister();
        pUVar11 = StaticFindObjectFast(pUVar10,pUVar11,FVar9,None,RF_NoFlags,Borrowed);
        pFVar8->XObject = pUVar11;
        if (pUVar11 != (UObject *)0x0) {
          local_res20 = pFVar8->ClassName;
          local_res18 = *(FName *)(*(longlong *)&pUVar11->field_0x10 + 0x18);
          if (local_res18 != local_res20) {
            piVar15 = (int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x9d4c);
            if ((*piVar15 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
              ::FName::FName(&NAME_BlueprintGeneratedClass,"BlueprintGeneratedClass");
              _Init_thread_footer(&::_TSS0);
            }
            if ((*piVar15 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
              ::FName::FName(&NAME_DelegateFunction,"DelegateFunction");
              _Init_thread_footer(&::_TSS1);
            }
            FVar3 = local_res20;
            FVar7 = FNameEntryId::FromValidEName((EName)local_res10);
            FVar9.Number = 0;
            FVar9.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar7.Value);
            if ((FVar3 != FVar9) || (local_res18 != NAME_DelegateFunction)) {
              pFVar12 = ::FName::ToString(&local_res18,&local_90);
              if ((pFVar12->Data).ArrayNum == 0) {
                pwVar14 = L"";
              }
              else {
                pwVar14 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
              }
              ::FString::FString(&local_a8,pwVar14);
              if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_90.Data.AllocatorInstance.Data);
              }
              pFVar12 = ::FName::ToString(&local_res20,&local_80);
              if ((pFVar12->Data).ArrayNum == 0) {
                pwVar14 = L"";
              }
              else {
                pwVar14 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
              }
              ::FString::FString(&local_b8,pwVar14);
              if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_80.Data.AllocatorInstance.Data);
              }
              pFVar12 = ::FName::ToString(&(this->Desc).Name,&local_70);
              if ((pFVar12->Data).ArrayNum == 0) {
                pwVar14 = L"";
              }
              else {
                pwVar14 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
              }
              ::FString::FString(&local_c8,pwVar14);
              if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_70.Data.AllocatorInstance.Data);
              }
              if (1 < (byte)LogStreaming._0_1_) {
                UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
              }
              if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_c8.Data.AllocatorInstance.Data);
              }
              if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_b8.Data.AllocatorInstance.Data);
              }
              if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_a8.Data.AllocatorInstance.Data);
              }
            }
          }
        }
      }
    }
    if (pFVar8->XObject != (UObject *)0x0) {
      AddObjectReference(this,pFVar8->XObject);
    }
  }
  return pFVar8;
}

// FinishExternalReadDependencies @ 141ef3a40

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall FAsyncPackage::FinishExternalReadDependencies(FAsyncPackage *this)

{
  double dVar1;
  UObject *pUVar2;
  wchar_t *pwVar3;
  UObjectBaseUtility *this_00;
  code *pcVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  uint uVar8;
  Type TVar9;
  FLinkerLoad *this_01;
  FLinkerLoad *pFVar10;
  uint uVar11;
  double dVar12;
  double dVar13;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10;
  LARGE_INTEGER local_res18;
  
  dVar6 = __real_4170000000000000;
  if ((this->AsyncLoadingThread->IsLoadingSuspended).Counter != 0) {
    return TimeOut;
  }
  dVar1 = this->TickStartTime;
  pUVar2 = this->LastObjectWorkWasPerformedOn;
  pwVar3 = this->LastTypeOfWorkPerformed;
  dVar13 = (double)this->TimeLimit;
  if (this->bUseTimeLimit != false) {
    QueryPerformanceCounter(&local_res8);
    dVar5 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar6;
    dVar12 = dVar5 - dVar1;
    if ((dVar13 < dVar12) && (GWarnIfTimeLimitExceeded != 0)) {
      IsTimeLimitExceededPrint(dVar1,dVar5,LastTestTime,dVar13,pwVar3,pUVar2);
      LastTestTime = dVar5;
      return TimeOut;
    }
    LastTestTime = dVar5;
    if (dVar13 < dVar12) {
      return TimeOut;
    }
  }
  if ((byte)LogStreaming._0_1_ < 6) {
    if (GGCSingleton->GCWantsToRunCounter == (TAtomic<int>)0x0) goto LAB_141ef3b8c;
  }
  else {
    if (GGCSingleton->GCWantsToRunCounter == (TAtomic<int>)0x0) {
LAB_141ef3b8c:
      this->LastTypeOfWorkPerformed = L"ExternalReadDependencies";
      QueryPerformanceCounter(&local_res10);
      pFVar10 = (FLinkerLoad *)0x0;
      uVar11 = this->FinishExternalReadDependenciesIndex;
      dVar1 = (double)this->TimeLimit -
              (((double)local_res10.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar6) -
              this->TickStartTime);
      if (dVar1 <= __real_3f508c3f40000000) {
        dVar1 = __real_3f508c3f40000000;
      }
      if ((int)uVar11 < (this->PackageObjLoaded).ArrayNum) {
        do {
          uVar8 = 0;
          if ((int)uVar11 < (this->PackageObjLoaded).ArrayNum) {
            uVar8 = ~uVar11 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            TVar9 = (*pcVar4)();
            return TVar9;
          }
          this_00 = *(UObjectBaseUtility **)
                     ((this->PackageObjLoaded).AllocatorInstance.Data + (longlong)(int)uVar11 * 8);
          if (((this_00 != (UObjectBaseUtility *)0x0) &&
              (this_01 = UObjectBaseUtility::GetLinker(this_00), this_01 != (FLinkerLoad *)0x0)) &&
             (this_01 != pFVar10)) {
            dVar13 = dVar1;
            if (this->bUseTimeLimit == false) {
              dVar13 = 0.0;
            }
            bVar7 = FLinkerLoad::FinishExternalReadDependencies(this_01,dVar13);
            if (!bVar7) {
              return TimeOut;
            }
            pFVar10 = this_01;
            if (this->bUseTimeLimit != false) {
              QueryPerformanceCounter(&local_res18);
              dVar1 = (double)this->TimeLimit -
                      (((double)local_res18.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar6
                       ) - this->TickStartTime);
              if (dVar1 <= 0.0) {
                return TimeOut;
              }
            }
          }
          uVar11 = this->FinishExternalReadDependenciesIndex + 1;
          this->FinishExternalReadDependenciesIndex = uVar11;
        } while ((int)uVar11 < (this->PackageObjLoaded).ArrayNum);
      }
      return Complete;
    }
    UE::Logging::Private::BasicLog<6>
              ((FStaticBasicLogRecord *)&PTR_u_Timing_out_asyn_1507e7988,
               (FLogCategoryBase *)&LogStreaming);
  }
  return TimeOut;
}

// FinishLinker @ 141ef3d20

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall FAsyncPackage::FinishLinker(FAsyncPackage *this)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  ELinkerStatus EVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_FinishLinker> FVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FNameEntryId FVar10;
  FName FVar11;
  FNameEntryId FVar12;
  Type TVar13;
  FLLMScope local_res8 [2];
  LARGE_INTEGER local_res10;
  FMemScope local_res18;
  FName local_res20;
  FStatMessage local_48;
  
  FLLMScope::FLLMScope(local_res8,AsyncLoading,false,None,Default,true);
  FMemScope::FMemScope(&local_res18,AsyncLoading,true);
  if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId6369,"FinishLinkerTime",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
               ,0x18e1);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId6369);
  }
  TVar13 = Complete;
  if ((this->Linker == (FLinkerLoad *)0x0) || (this->Linker->bHasFinishedInitialization))
  goto LAB_141ef40e4;
  FVar9 = StatPtr_STAT_FAsyncPackage_FinishLinker;
  if (StatPtr_STAT_FAsyncPackage_FinishLinker ==
      (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_FinishLinker>)0x0) {
    pFVar8 = ::FName::FName(&local_res20,"STAT_FAsyncPackage_FinishLinker");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_FinishLinker>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FAsyncPackage_FinishLinker,*pFVar8
                       ,L"FinishLinker AsyncPackage","STATGROUP_AsyncLoad","STATCAT_Advanced",
                       L"Async Load",false,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar9;
  FVar12.Value = 0;
  bVar2 = false;
  bVar5 = false;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar6 = FVar11.Number;
  if ((FVar10.Value == 0) && (uVar6 == 0)) {
LAB_141ef3f3c:
    bVar3 = false;
    FVar11.ComparisonIndex.Value = 0;
    FVar11.Number = 0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10.s,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar2 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.s.LowPart = FVar10.Value;
        local_res10.s.HighPart = uVar6;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10.s,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                   ,0x18e5);
        bVar2 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_141ef3f3c;
    local_res10.s.LowPart = FVar10.Value;
    local_res10.s.HighPart = uVar6;
    FThreadStats::AddMessage(FVar11,CycleScopeStart);
    bVar3 = true;
    FVar12.Value = FVar10.Value;
  }
  this->LastObjectWorkWasPerformedOn = (UObject *)this->LinkerRoot;
  this->LastTypeOfWorkPerformed = L"ticking linker";
  QueryPerformanceCounter(&local_res10);
  EVar7 = FLinkerLoad::Tick(this->Linker,
                            this->TimeLimit -
                            (float)(((double)CONCAT44(local_res10.s.HighPart,local_res10.s.LowPart)
                                     * FGenericPlatformTime::SecondsPerCycle +
                                    __real_4170000000000000) - this->TickStartTime),
                            this->bUseTimeLimit,this->bUseFullTimeLimit,
                            &this->ObjectNameWithOuterToExport);
  if (EVar7 != LINKER_Loaded) {
    if ((this->bUseTimeLimit != false) && (this->bUseFullTimeLimit == false)) {
      this->bTimeLimitExceeded = true;
    }
    TVar13 = TimeOut;
    if (EVar7 == LINKER_Failed) {
      this->bLoadHasFailed = true;
      TVar13 = TimeOut;
    }
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar12.Value;
      QueryPerformanceCounter(&local_res10);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res10.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_res10.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_res10.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_res10.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
LAB_141ef40e4:
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return TVar13;
}

// FinishObjects @ 141ef4130

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall FAsyncPackage::FinishObjects(FAsyncPackage *this)

{
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FLinkerLoad_*,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FTlsAutoCleanup FVar4;
  UObjectBase *this_00;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  Type TVar13;
  int iVar14;
  uint uVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_FinishObjects> FVar17;
  uint *puVar18;
  FTlsAutoCleanup *pFVar19;
  UPackage *pUVar20;
  FUObjectItem *pFVar21;
  FName FVar22;
  UClass *pUVar23;
  FString *pFVar24;
  FLinkerManager *this_01;
  FName FVar25;
  Type TVar26;
  uint uVar27;
  ForAnyElementType *pFVar28;
  undefined8 *puVar29;
  int *piVar30;
  longlong lVar31;
  wchar_t *pwVar32;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  char *in_stack_ffffffffffffff08;
  ulonglong uVar33;
  FColor_u_0 local_b8 [2];
  FName local_b0;
  undefined8 local_a8;
  FName local_a0;
  FTlsAutoCleanup local_90;
  code *local_88;
  undefined1 *local_80;
  code *local_78;
  undefined1 *local_70;
  FName local_68 [2];
  FString local_58;
  
  if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
    bVar12 = false;
    bVar9 = false;
  }
  else {
    bVar12 = true;
    bVar9 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId7216,"FinishObjectsTime",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
               ,0x1c30);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId7216);
  }
  FVar17 = StatPtr_STAT_FAsyncPackage_FinishObjects;
  if (StatPtr_STAT_FAsyncPackage_FinishObjects ==
      (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_FinishObjects>)0x0) {
    pFVar16 = ::FName::FName(local_68,"STAT_FAsyncPackage_FinishObjects");
    in_stack_ffffffffffffff08 = "STATCAT_Advanced";
    FVar17 = (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_FinishObjects>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FAsyncPackage_FinishObjects,
                        *pFVar16,L"FinishObjects AsyncPackage","STATGROUP_AsyncLoad",
                        "STATCAT_Advanced",L"Async Load",false,true,ST_int64,true,false,MCR_Invalid)
    ;
  }
  FVar25 = *(FName *)FVar17;
  bVar8 = false;
  bVar7 = false;
  local_a0.ComparisonIndex.Value = 0;
  local_a0.Number = 0;
  bVar11 = false;
  bVar10 = false;
  if ((FVar25.ComparisonIndex.Value.Value == 0) && (FVar25.Number == 0)) {
LAB_141ef430e:
    bVar8 = bVar11;
    bVar7 = bVar10;
    bVar10 = false;
    FVar25 = local_a0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_b8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_b8[0]._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar8 = false;
      bVar7 = true;
      bVar11 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_b0.ComparisonIndex.Value = FVar25.ComparisonIndex.Value.Value;
        local_b0.Number = FVar25.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_b0,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                   ,0x1c32);
        bVar8 = true;
        bVar7 = true;
        bVar11 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_141ef430e;
    FThreadStats::AddMessage(FVar25,CycleScopeStart);
    bVar10 = true;
  }
  this->LastObjectWorkWasPerformedOn = (UObject *)0x0;
  this->LastTypeOfWorkPerformed = L"finishing all objects";
  puVar18 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_80 = local_res18;
  local_88 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar19 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_88,puVar18);
  FVar4 = pFVar19[0x2f];
  local_90 = FVar4;
  if (this->Linker != (FLinkerLoad *)0x0) {
    puVar18 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
    local_70 = local_res20;
    local_78 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pFVar19 = FThreadSingletonInitializer::Get
                        ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_78,puVar18);
    if ((FVar4 != pFVar19[0x2f]) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("!Linker || LoadContext == FUObjectThreadContext::Get().GetSerializeContext()"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                            ,0x1c37,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      TVar13 = (*pcVar6)();
      return TVar13;
    }
  }
  pFVar28 = (ForAnyElementType *)((longlong)FVar4 + 0x10);
  if (this->bLoadHasFailed == false) {
    *(undefined4 *)((longlong)FVar4 + 0x18) = 0;
    if (*(int *)((longlong)FVar4 + 0x1c) < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,pFVar28,0,(int *)((longlong)FVar4 + 0x1c));
    }
    TVar26 = Succeeded;
    goto LAB_141ef468f;
  }
  pTVar1 = &this->PackageObjLoaded;
  if ((pTVar1 == (TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *)pFVar28) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(void*)this != (void*)&Source",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x96e,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    TVar13 = (*pcVar6)();
    return TVar13;
  }
  iVar3 = *(int *)((longlong)FVar4 + 0x18);
  if (iVar3 != 0) {
    in_stack_ffffffffffffff08 = (char *)&(this->PackageObjLoaded).ArrayNum;
    iVar14 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (8,8,iVar3,&pTVar1->AllocatorInstance,(int *)in_stack_ffffffffffffff08,
                        &(this->PackageObjLoaded).ArrayMax);
    ConstructItems<TObjectPtr<UObject>,UObject_*,int>
              ((pTVar1->AllocatorInstance).Data + (longlong)iVar14 * 8,(UObject **)pFVar28->Data,
               iVar3);
  }
  uVar27 = (this->PackageObjLoaded).ArrayNum - 1;
  if (-1 < (int)uVar27) {
    piVar30 = (int *)(longlong)(int)uVar27;
    lVar31 = (longlong)piVar30 * 8;
    do {
      uVar15 = 0;
      if ((int)uVar27 < (this->PackageObjLoaded).ArrayNum) {
        uVar15 = ~uVar27 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (in_stack_ffffffffffffff08 = (char *)piVar30,
         bVar12 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar6 = (code *)swi(3);
        TVar13 = (*pcVar6)();
        return TVar13;
      }
      this_00 = *(UObjectBase **)((pTVar1->AllocatorInstance).Data + lVar31);
      if ((this_00 != (UObjectBase *)0x0) &&
         (pUVar20 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this_00),
         (FName)pUVar20->_padding_ == (this->Desc).Name)) {
        UObjectBase::AtomicallyClearFlags
                  (this_00,RF_NeedPostLoadSubobjects|RF_NeedPostLoad|RF_NeedLoad);
        UObjectBaseUtility::MarkAsGarbage((UObjectBaseUtility *)this_00);
        uVar15 = 0;
        if ((int)uVar27 < (this->PackageObjLoaded).ArrayNum) {
          uVar15 = ~uVar27 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (in_stack_ffffffffffffff08 = (char *)piVar30,
           bVar12 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar12)) {
          pcVar6 = (code *)swi(3);
          TVar13 = (*pcVar6)();
          return TVar13;
        }
        *(undefined8 *)((pTVar1->AllocatorInstance).Data + lVar31) = 0;
      }
      piVar30 = (int *)((longlong)piVar30 + -1);
      lVar31 = lVar31 + -8;
      uVar27 = uVar27 - 1;
      bVar12 = bVar9;
    } while (-1 < (int)uVar27);
  }
  pwVar32 = L"";
  if ((this->LinkerRoot != (UPackage *)0x0) &&
     (pFVar21 = FUObjectArray::IndexToObject
                          (&GUObjectArray,*(int *)((longlong)&this->LinkerRoot->_padding_ + 4)),
     ((uint)((ulonglong)(pFVar21->field0_0x0).FlagsAndRefCount >> 0x3e) & 1) == 0)) {
    if (this->bCreatedLinkerRoot != false) {
      UObjectBaseUtility::ClearFlags
                ((UObjectBaseUtility *)this->LinkerRoot,
                 RF_NeedPostLoadSubobjects|RF_NeedPostLoad|RF_NeedLoad);
      UObjectBaseUtility::MarkAsGarbage((UObjectBaseUtility *)this->LinkerRoot);
      pUVar20 = this->LinkerRoot;
      local_a8 = 0;
      pcVar6 = *(code **)(pUVar20->_padding_ + 0x170);
      FVar22 = (FName)Z_Construct_UClass_UPackage_NoRegister();
      pUVar23 = (UClass *)GetTransientPackage();
      uVar33 = (ulonglong)in_stack_ffffffffffffff08 & 0xffffffff00000000;
      FVar22 = MakeUniqueObjectName((UObject *)(local_68 + 1),pUVar23,FVar22,None);
      pFVar24 = ::FName::ToString((FName *)FVar22,&local_58);
      if ((pFVar24->Data).ArrayNum != 0) {
        pwVar32 = (wchar_t *)(pFVar24->Data).AllocatorInstance.Data;
      }
      (*pcVar6)(pUVar20,pwVar32,0,0x34,uVar33);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
        DetachLinker(this);
        goto LAB_141ef468c;
      }
    }
    DetachLinker(this);
  }
LAB_141ef468c:
  TVar26 = Failed;
LAB_141ef468f:
  this_01 = FLinkerManager::Get();
  FLinkerManager::DissociateImportsAndForcedExports(this_01);
  FVar4 = local_90;
  pTVar2 = &this->DelayedLinkerClosePackages;
  puVar29 = (undefined8 *)((longlong)local_90 + 0x20);
  if (pTVar2 != (TArray<FLinkerLoad_*,TSizedDefaultAllocator<32>_> *)puVar29) {
    pFVar5 = (pTVar2->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)*puVar29;
    *puVar29 = 0;
    (this->DelayedLinkerClosePackages).ArrayNum = *(int *)((longlong)FVar4 + 0x28);
    (this->DelayedLinkerClosePackages).ArrayMax = *(int *)((longlong)FVar4 + 0x2c);
    *(undefined8 *)((longlong)FVar4 + 0x28) = 0;
  }
  if (this->Linker != (FLinkerLoad *)0x0) {
    FLinkerLoad::FlushCache((FLinkerLoad *)&this->Linker->_padding_);
  }
  if (GEventDrivenLoaderEnabled != false) {
    CallCompletionCallbacks(this,true,TVar26);
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar10) {
    FThreadStats::AddMessage(FVar25,CycleScopeEnd);
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return Complete;
}

// FireNode @ 141ef4a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EEventLoadNode": Some values do not have unique names */

void __thiscall FAsyncPackage::FireNode(FAsyncPackage *this,FEventLoadNodePtr *param_1)

{
  uint uVar1;
  EEventLoadNode EVar2;
  int iVar3;
  int iVar4;
  FAsyncLoadingThread *pFVar5;
  code *pcVar6;
  bool bVar7;
  longlong *plVar8;
  longlong *plVar9;
  TArray<int,TSizedDefaultAllocator<32>_> *this_00;
  uint *puVar10;
  undefined1 auStack_198 [32];
  TLess<FAsyncLoadEvent> local_178;
  TLess<FAsyncLoadEvent> local_177 [3];
  uint local_174;
  uint local_170;
  uint local_16c;
  uint local_168;
  uint local_164 [3];
  int iStack_158;
  undefined4 uStack_154;
  FAsyncLoadingThread *local_150;
  int iStack_140;
  undefined4 uStack_13c;
  FAsyncLoadingThread *local_138;
  FName local_130;
  FName local_120;
  code *local_108;
  longlong local_f8 [3];
  longlong *local_e0;
  code *local_d8;
  longlong local_c8 [3];
  longlong *local_b0;
  undefined1 local_a8 [32];
  longlong local_88 [3];
  longlong *local_70;
  undefined1 local_68 [32];
  longlong local_48 [3];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_198;
  if ((ReadyForPostLoad < this->AsyncPackageLoadingState) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("int32(AsyncPackageLoadingState) < int32(EAsyncPackageLoadingState::PostLoad_Etc)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                         ,0x103a,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar1 = (param_1->ImportOrExportIndex).Index;
  EVar2 = param_1->Phase;
  if (uVar1 == 0) {
    if (EVar2 == ImportOrExport_Create) {
      return;
    }
    if (EVar2 == ImportOrExport_Serialize) {
      pFVar5 = this->AsyncLoadingThread;
      if ((this->AsyncPackageLoadingState != WaitingForImportPackages) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Package->AsyncPackageLoadingState == EAsyncPackageLoadingState::WaitingForImportPackages"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                             ,0x901,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar3 = this->SerialNumber;
      iVar4 = (this->Desc).Priority;
      this->AsyncPackageLoadingState = SetupImports;
      local_120 = (this->Desc).Name;
      local_68._4_4_ = iVar3;
      if (GRandomizeLoadOrder != 0) {
        local_68._4_4_ = GetRandomSerialNumber(0x7fffffff);
      }
      local_d8 = (code *)0x0;
      iStack_140 = iVar3;
      local_138 = pFVar5;
      local_30 = FMemory::Malloc(0x20,8);
      *local_30 = (longlong)
                  &UE::Core::Private::Function::
                   TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_SetupImports'::`2'::<lambda_1>,0,1>
                   ::_vftable_;
      local_68._8_4_ = 0;
      *(uint *)(local_30 + 1) = local_120.ComparisonIndex.Value;
      *(uint *)((longlong)local_30 + 0xc) = local_120.Number;
      *(int *)(local_30 + 2) = iStack_140;
      *(undefined4 *)((longlong)local_30 + 0x14) = uStack_13c;
      local_30[3] = (longlong)local_138;
      local_68._16_8_ = local_d8;
      if ((uint *)(local_30 + 1) != (uint *)0x0) {
        local_68._16_8_ =
             UE::Core::Private::Function::
             TFunctionRefCaller<`FAsyncLoadingThread::QueueEvent_SetupImports'::__l2::<lambda_1>,void,FAsyncLoadEventArgs_&>
             ::Call;
      }
      (pFVar5->EventQueue).RunningSerialNumber = (pFVar5->EventQueue).RunningSerialNumber + 1;
      local_68._12_4_ = (pFVar5->EventQueue).RunningSerialNumber;
      local_b0 = (longlong *)0x0;
      local_48[0] = local_c8[0];
      local_48[1] = local_c8[1];
      local_48[2] = local_c8[2];
      local_d8 = (code *)0x0;
      local_68._0_4_ = iVar4;
      TArray<FAsyncLoadEvent,TSizedDefaultAllocator<32>_>::HeapPush<TLess<FAsyncLoadEvent>_>
                (&(pFVar5->EventQueue).EventQueue,(FAsyncLoadEvent *)local_68,local_177);
      if ((code *)local_68._16_8_ != (code *)0x0) {
        plVar9 = (longlong *)(local_68 + 0x20);
        if (local_30 != (longlong *)0x0) {
          plVar9 = local_30;
        }
        (**(code **)(*plVar9 + 0x10))();
      }
      if (local_d8 == (code *)0x0) {
        return;
      }
      plVar9 = local_c8;
      plVar8 = local_b0;
    }
    else {
      if (EVar2 != Export_StartIO) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                           ,0x1048,L"");
        if (!bVar7) {
          return;
        }
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = this->AsyncLoadingThread;
      if ((this->AsyncPackageLoadingState != ProcessNewImportsAndExports) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Package->AsyncPackageLoadingState == EAsyncPackageLoadingState::ProcessNewImportsAndExports"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                             ,0xaa2,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_130 = (this->Desc).Name;
      iVar3 = this->SerialNumber;
      iVar4 = (this->Desc).Priority;
      local_a8._4_4_ = iVar3;
      if (GRandomizeLoadOrder != 0) {
        local_a8._4_4_ = GetRandomSerialNumber(0x7fffffff);
      }
      local_108 = (code *)0x0;
      iStack_158 = iVar3;
      local_150 = pFVar5;
      local_70 = FMemory::Malloc(0x20,8);
      *local_70 = (longlong)
                  &UE::Core::Private::Function::
                   TFunction_OwnedObject<`FAsyncLoadingThread::QueueEvent_ExportsDone'::`2'::<lambda_1>,0,1>
                   ::_vftable_;
      local_a8._8_4_ = 0;
      *(uint *)(local_70 + 1) = local_130.ComparisonIndex.Value;
      *(uint *)((longlong)local_70 + 0xc) = local_130.Number;
      *(int *)(local_70 + 2) = iStack_158;
      *(undefined4 *)((longlong)local_70 + 0x14) = uStack_154;
      local_70[3] = (longlong)local_150;
      local_a8._16_8_ = local_108;
      if ((uint *)(local_70 + 1) != (uint *)0x0) {
        local_a8._16_8_ =
             UE::Core::Private::Function::
             TFunctionRefCaller<`FAsyncLoadingThread::QueueEvent_ExportsDone'::__l2::<lambda_1>,void,FAsyncLoadEventArgs_&>
             ::Call;
      }
      (pFVar5->EventQueue).RunningSerialNumber = (pFVar5->EventQueue).RunningSerialNumber + 1;
      local_a8._12_4_ = (pFVar5->EventQueue).RunningSerialNumber;
      local_e0 = (longlong *)0x0;
      local_88[0] = local_f8[0];
      local_88[1] = local_f8[1];
      local_88[2] = local_f8[2];
      local_108 = (code *)0x0;
      local_a8._0_4_ = iVar4;
      TArray<FAsyncLoadEvent,TSizedDefaultAllocator<32>_>::HeapPush<TLess<FAsyncLoadEvent>_>
                (&(pFVar5->EventQueue).EventQueue,(FAsyncLoadEvent *)local_a8,&local_178);
      if ((code *)local_a8._16_8_ != (code *)0x0) {
        plVar9 = (longlong *)(local_a8 + 0x20);
        if (local_70 != (longlong *)0x0) {
          plVar9 = local_70;
        }
        (**(code **)(*plVar9 + 0x10))();
      }
      if (local_108 == (code *)0x0) {
        return;
      }
      plVar9 = local_f8;
      plVar8 = local_e0;
    }
    if (plVar8 != (longlong *)0x0) {
      plVar9 = plVar8;
    }
    (**(code **)(*plVar9 + 0x10))();
    return;
  }
  if (EVar2 == ImportOrExport_Create) {
    if ((int)uVar1 < 0) {
      local_168 = ~uVar1;
      this_00 = (TArray<int,TSizedDefaultAllocator<32>_> *)&this->ImportsThatAreNowCreated;
      puVar10 = &local_168;
    }
    else {
      local_164[0] = FPackageIndex::ToExport(&param_1->ImportOrExportIndex);
      this_00 = (TArray<int,TSizedDefaultAllocator<32>_> *)&this->ExportsThatCanBeCreated;
      puVar10 = local_164;
    }
  }
  else if (EVar2 == ImportOrExport_Serialize) {
    if ((int)uVar1 < 0) {
      local_170 = ~uVar1;
      this_00 = (TArray<int,TSizedDefaultAllocator<32>_> *)&this->ImportsThatAreNowSerialized;
      puVar10 = &local_170;
    }
    else {
      local_16c = FPackageIndex::ToExport(&param_1->ImportOrExportIndex);
      this_00 = (TArray<int,TSizedDefaultAllocator<32>_> *)&this->ExportsThatCanBeSerialized;
      puVar10 = &local_16c;
    }
  }
  else {
    if (EVar2 != Export_StartIO) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                         ,0x1067,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      goto LAB_141ef4e7f;
    }
    local_174 = FPackageIndex::ToExport(&param_1->ImportOrExportIndex);
    this_00 = (TArray<int,TSizedDefaultAllocator<32>_> *)&this->ExportsThatCanHaveIOStarted;
    puVar10 = &local_174;
  }
  TArray<int,TSizedDefaultAllocator<32>_>::HeapPush(this_00,(int *)puVar10);
LAB_141ef4e7f:
  if (this->AsyncPackageLoadingState == ProcessNewImportsAndExports) {
    ConditionalQueueProcessImportsAndExports(this,false);
  }
  return;
}

// FlushObjectLinkerCache @ 141ef5d80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FAsyncPackage::FlushObjectLinkerCache(FAsyncPackage *this)

{
  uint *puVar1;
  code *pcVar2;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FLinkerLoad *pFVar7;
  ulonglong uVar8;
  byte bVar9;
  uint uVar10;
  ForAnyElementType FVar11;
  longlong lVar12;
  ulonglong uVar13;
  ForElementType<unsigned_int> FVar14;
  uint uVar15;
  ulonglong *puVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  FScriptContainerElement *pFVar20;
  ulonglong *puVar21;
  FScriptContainerElement *pFVar22;
  undefined1 auStackY_198 [32];
  undefined1 local_168;
  undefined1 local_167 [7];
  FScriptContainerElement *local_160;
  uint local_158;
  int local_154;
  uint local_150;
  uint uStack_14c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_148;
  undefined4 local_140;
  uint uStack_13c;
  uint uStack_138;
  undefined4 uStack_134;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_130;
  uint uStack_128;
  uint uStack_124;
  TBitArray<FDefaultBitArrayAllocator> *local_120;
  undefined4 uStack_118;
  uint uStack_114;
  uint local_110;
  uint uStack_10c;
  int iStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  int local_fc;
  FAsyncPackage *local_f8;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_e8;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  FSparseArrayAllocationInfo local_98;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_88;
  FScriptContainerElement local_50 [8];
  ForAnyElementType local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_158 = (this->PackageObjLoaded).ArrayNum;
  uVar13 = (ulonglong)(int)local_158;
  pFVar22 = (this->PackageObjLoaded).AllocatorInstance.Data;
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  pFVar20 = pFVar22 + uVar13 * 8;
  local_88.AllocationFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_88.AllocationFlags.NumBits = 0;
  local_88.AllocationFlags.MaxBits = 0x80;
  local_88.FirstFreeIndex = -1;
  local_88.NumFreeIndices = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  local_160 = pFVar20;
  local_f8 = this;
  uVar10 = 0;
  while( true ) {
    puVar16 = (ulonglong *)0x0;
    if ((local_f8->PackageObjLoaded).ArrayNum != (int)uVar13) {
      local_168 = 0;
      `TCheckedPointerIterator<TObjectPtr<UObject>,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_168);
      uVar10 = local_88.AllocationFlags.NumBits;
    }
    if (pFVar22 == pFVar20) break;
    if (*(UObjectBaseUtility **)pFVar22 == (UObjectBaseUtility *)0x0) {
LAB_141ef625a:
      pFVar22 = pFVar22 + 8;
      uVar13 = (ulonglong)local_158;
    }
    else {
      pFVar7 = UObjectBaseUtility::GetLinker(*(UObjectBaseUtility **)pFVar22);
      if (pFVar7 != (FLinkerLoad *)0x0) {
        if (local_88.NumFreeIndices == 0) {
          iVar5 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10,8,1,(ForAnyElementType *)&local_88,&local_88.Data.ArrayNum,
                             &local_88.Data.ArrayMax);
          iVar6 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                            (&local_88.AllocationFlags,1);
          FVar14 = (ForElementType<unsigned_int>)&local_88.AllocationFlags;
          if (local_88.AllocationFlags.AllocatorInstance.SecondaryData !=
              (ForElementType<unsigned_int>)0x0) {
            FVar14 = local_88.AllocationFlags.AllocatorInstance.SecondaryData;
          }
          bVar9 = (byte)iVar6 & 0x1f;
          if (iVar6 < 0) {
            iVar6 = iVar6 + 0x1f;
            bVar9 = bVar9 - 0x20;
          }
          puVar1 = (uint *)((longlong)FVar14 + (longlong)(iVar6 >> 5) * 4);
          *puVar1 = *puVar1 & ~(1 << (bVar9 & 0x1f));
          iVar6 = local_88.FirstFreeIndex;
        }
        else {
          local_88.NumFreeIndices = local_88.NumFreeIndices + -1;
          iVar6 = *(int *)(local_88.Data.AllocatorInstance.Data +
                          (longlong)local_88.FirstFreeIndex * 0x10 + 4);
          iVar5 = local_88.FirstFreeIndex;
          if (local_88.NumFreeIndices != 0) {
            *(undefined4 *)(local_88.Data.AllocatorInstance.Data + (longlong)iVar6 * 0x10) =
                 0xffffffff;
          }
        }
        local_88.FirstFreeIndex = iVar6;
        TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex(&local_88,&local_98,iVar5);
        if (local_98.Pointer != (ulonglong *)0x0) {
          *(FLinkerLoad **)local_98.Pointer = pFVar7;
          *(undefined4 *)((longlong)local_98.Pointer + 8) = 0xffffffff;
          puVar16 = local_98.Pointer;
        }
        uVar13 = *puVar16;
        uVar10 = ((uint)(uVar13 >> 0x14) & 0xffff ^ (uint)(uVar13 >> 4)) * -0x7a143595;
        uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
        uVar10 = uVar10 >> 0x10 ^ uVar10;
        if ((local_88.Data.ArrayNum - local_88.NumFreeIndices != 1) &&
           (local_88.Data.ArrayNum != local_88.NumFreeIndices)) {
          FVar11.Data = local_50;
          if (local_48.Data != (FScriptContainerElement *)0x0) {
            FVar11.Data = local_48.Data;
          }
          for (iVar5 = *(int *)(FVar11.Data + (ulonglong)(local_40 - 1 & uVar10) * 4); iVar5 != -1;
              iVar5 = *(int *)(local_88.Data.AllocatorInstance.Data + (longlong)iVar5 * 0x10 + 8)) {
            if (*(ulonglong *)(local_88.Data.AllocatorInstance.Data + (longlong)iVar5 * 0x10) ==
                uVar13) {
              if (iVar5 != -1) {
                *(ulonglong *)(local_88.Data.AllocatorInstance.Data + (longlong)iVar5 * 0x10) =
                     uVar13;
                TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::RemoveAtUninitialized(&local_88,local_98.Index,1);
                pFVar20 = local_160;
                uVar10 = local_88.AllocationFlags.NumBits;
                goto LAB_141ef625a;
              }
              break;
            }
          }
        }
        uVar13 = 0;
        uVar15 = 1;
        uVar17 = local_88.Data.ArrayNum - local_88.NumFreeIndices;
        if (3 < uVar17) {
          uVar18 = (ulonglong)((uVar17 >> 1) + 7) * 2 + 1;
          lVar12 = 0x3f;
          if (uVar18 != 0) {
            for (; uVar18 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          local_100 = (undefined4)lVar12;
          uVar15 = 1 << ((byte)lVar12 & 0x1f);
        }
        if (((int)uVar17 < 1) || ((int)uVar15 <= (int)local_40)) {
          uVar10 = local_40 - 1 & uVar10;
          *(uint *)((longlong)puVar16 + 0xc) = uVar10;
          FVar11.Data = local_50;
          if (local_48.Data != (FScriptContainerElement *)0x0) {
            FVar11.Data = local_48.Data;
          }
          uVar13 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar10;
          *(undefined4 *)(puVar16 + 1) = *(undefined4 *)(FVar11.Data + uVar13 * 4);
          *(int *)(FVar11.Data + uVar13 * 4) = local_98.Index;
          pFVar20 = local_160;
          uVar10 = local_88.AllocationFlags.NumBits;
          goto LAB_141ef625a;
        }
        local_40 = uVar15;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,4);
        }
        if (uVar15 != 0) {
          uVar10 = uVar15;
          if (uVar15 < 2) {
            if (local_48.Data != (FScriptContainerElement *)0x0) {
              uVar10 = 0;
              goto LAB_141ef605c;
            }
          }
          else {
LAB_141ef605c:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_48,0,uVar10,4);
          }
          if (0 < (int)uVar15) {
            uVar19 = (ulonglong)uVar15;
            uVar18 = uVar13;
            do {
              FVar11.Data = local_50;
              if (local_48.Data != (FScriptContainerElement *)0x0) {
                FVar11.Data = local_48.Data;
              }
              uVar8 = uVar18 & (longlong)(int)uVar15 - 1U;
              uVar18 = uVar18 + 1;
              *(undefined4 *)(FVar11.Data + uVar8 * 4) = 0xffffffff;
              uVar19 = uVar19 - 1;
            } while (uVar19 != 0);
          }
        }
        pFVar20 = local_160;
        uVar10 = local_88.AllocationFlags.NumBits;
        if (local_40 != 0) {
          pTStack_148 = &local_88.AllocationFlags;
          local_150 = 0;
          uStack_14c = 1;
          uStack_13c = 0;
          uStack_138 = 0;
          if (local_88.AllocationFlags.NumBits != 0) {
            FVar14 = (ForElementType<unsigned_int>)&local_88.AllocationFlags;
            if (local_88.AllocationFlags.AllocatorInstance.SecondaryData !=
                (ForElementType<unsigned_int>)0x0) {
              FVar14 = local_88.AllocationFlags.AllocatorInstance.SecondaryData;
            }
            uVar15 = *(uint *)FVar14;
            uVar18 = uVar13;
            while (uVar15 == 0) {
              uStack_138 = (int)uVar18 + 0x20;
              uVar18 = (ulonglong)uStack_138;
              iVar5 = (int)uVar13;
              local_150 = iVar5 + 1;
              uVar13 = (ulonglong)local_150;
              if ((int)((local_88.AllocationFlags.NumBits - 1U) +
                       ((int)(local_88.AllocationFlags.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
                  (int)local_150) goto LAB_141ef615e;
              uVar15 = *(uint *)((uchar *)((longlong)FVar14 + 4) + (longlong)iVar5 * 4);
            }
            uStack_14c = -uVar15 & uVar15;
            uVar13 = (ulonglong)uStack_14c * 2 + 1;
            lVar12 = 0x3f;
            if (uVar13 != 0) {
              for (; uVar13 >> lVar12 == 0; lVar12 = lVar12 + -1) {
              }
            }
            local_fc = (int)lVar12;
            uStack_13c = local_fc + -1 + uStack_138;
            uVar13 = (ulonglong)uStack_13c;
            if (local_88.AllocationFlags.NumBits < (int)uStack_13c) {
LAB_141ef615e:
              uVar13 = (ulonglong)(uint)local_88.AllocationFlags.NumBits;
              uStack_13c = local_88.AllocationFlags.NumBits;
            }
          }
          local_140 = 0xffffffff;
          local_f0 = &local_88;
          local_e8._padding_ = CONCAT44(uStack_14c,local_150);
          local_e8.CurrentBitIndex = uStack_13c;
          local_e8.UnvisitedBitMask = 0xffffffff;
          local_e8._28_4_ = uStack_134;
          local_e8.BaseBitIndex = uStack_138;
          local_e8.Array = pTStack_148;
          if ((int)uVar13 < local_88.AllocationFlags.NumBits) {
            do {
              pFVar20 = (local_f0->Data).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x10;
              uVar10 = ((uint)(*(ulonglong *)pFVar20 >> 0x14) & 0xffff ^
                       (uint)(*(ulonglong *)pFVar20 >> 4)) * -0x7a143595;
              uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
              uVar10 = (uVar10 >> 0x10 ^ uVar10) & local_40 - 1;
              *(uint *)(pFVar20 + 0xc) = uVar10;
              FVar11.Data = local_50;
              if (local_48.Data != (FScriptContainerElement *)0x0) {
                FVar11.Data = local_48.Data;
              }
              uVar18 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar10;
              *(undefined4 *)(pFVar20 + 8) = *(undefined4 *)(FVar11.Data + uVar18 * 4);
              *(int *)(FVar11.Data + uVar18 * 4) = (int)uVar13;
              local_e8.UnvisitedBitMask = local_e8.UnvisitedBitMask & ~local_e8._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_e8);
              uVar13 = (ulonglong)(uint)local_e8.CurrentBitIndex;
              pFVar20 = local_160;
              uVar10 = local_88.AllocationFlags.NumBits;
            } while (local_e8.CurrentBitIndex < (local_e8.Array)->NumBits);
          }
        }
        goto LAB_141ef625a;
      }
      pFVar22 = pFVar22 + 8;
      uVar13 = (ulonglong)local_158;
      uVar10 = local_88.AllocationFlags.NumBits;
    }
  }
  uStack_128 = 0;
  uStack_114 = uStack_128;
  local_110 = uStack_128;
  uStack_124 = 1;
  if (uVar10 != 0) {
    FVar14 = (ForElementType<unsigned_int>)&local_88.AllocationFlags;
    if (local_88.AllocationFlags.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FVar14 = local_88.AllocationFlags.AllocatorInstance.SecondaryData;
    }
    uVar15 = *(uint *)FVar14;
    puVar21 = puVar16;
    while( true ) {
      uStack_128 = (uint)puVar16;
      local_110 = (uint)puVar21;
      if (uVar15 != 0) break;
      lVar12 = (longlong)(int)uStack_128;
      local_110 = local_110 + 0x20;
      puVar21 = (ulonglong *)(ulonglong)local_110;
      uStack_128 = uStack_128 + 1;
      puVar16 = (ulonglong *)(ulonglong)uStack_128;
      uStack_114 = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_128)
      goto LAB_141ef6302;
      uVar15 = *(uint *)((uchar *)((longlong)FVar14 + 4) + lVar12 * 4);
    }
    uStack_124 = -uVar15 & uVar15;
    uVar13 = (ulonglong)uStack_124 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_154 = (int)lVar12;
    uStack_114 = (local_110 - 1) + local_154;
    if ((int)uVar10 < (int)uStack_114) {
      uStack_114 = uVar10;
    }
  }
LAB_141ef6302:
  local_130 = &local_88;
  local_120 = &local_88.AllocationFlags;
  uVar15 = uVar10 & 0xffffffe0;
  iStack_108 = local_88.Data.ArrayNum - local_88.NumFreeIndices;
  uStack_118 = 0xffffffff;
  TStack_c0.CurrentBitIndex = uStack_114;
  TStack_c0.UnvisitedBitMask = 0xffffffff;
  TStack_c0._padding_ = CONCAT44(uStack_124,uStack_128);
  iVar5 = (int)uVar10 >> 5;
  TStack_c0._28_4_ = uStack_114;
  TStack_c0.BaseBitIndex = local_110;
  uStack_a0 = CONCAT44(uStack_104,iStack_108);
  uStack_10c = uStack_114;
  local_c8 = local_130;
  TStack_c0.Array = local_120;
  uVar17 = uVar10;
  if (((int)uVar10 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), uVar17 = local_88.AllocationFlags.NumBits, bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (uVar10 != uVar17) {
    FVar14 = (ForElementType<unsigned_int>)&local_88.AllocationFlags;
    if (local_88.AllocationFlags.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FVar14 = local_88.AllocationFlags.AllocatorInstance.SecondaryData;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)((longlong)FVar14 + (longlong)iVar5 * 4);
    while (uVar10 == 0) {
      lVar12 = (longlong)iVar5;
      uVar15 = uVar15 + 0x20;
      iVar5 = iVar5 + 1;
      uVar10 = uVar17;
      if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar5)
      goto LAB_141ef6400;
      uVar10 = *(uint *)((uchar *)((longlong)FVar14 + 4) + lVar12 * 4);
    }
    uVar13 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar10 = (int)lVar12 + -1 + uVar15;
    if ((int)uVar17 < (int)uVar10) {
      uVar10 = uVar17;
    }
  }
LAB_141ef6400:
  while( true ) {
    pTVar3 = local_c8;
    if ((local_c8->Data).ArrayNum - local_c8->NumFreeIndices != (int)uStack_a0) {
      `TSparseArray<TSparseSetElement<FLinkerLoad_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_167);
    }
    if (((TStack_c0.CurrentBitIndex == uVar10) && (TStack_c0.Array == &local_88.AllocationFlags)) &&
       (pTVar3 == &local_88)) break;
    FLinkerLoad::FlushCache
              ((FLinkerLoad *)
               (*(longlong *)
                 ((pTVar3->Data).AllocatorInstance.Data + (longlong)TStack_c0.CurrentBitIndex * 0x10
                 ) + 0x2c0));
    TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
  }
  local_40 = 0;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  bVar4 = local_88.Data.ArrayMax != 0;
  local_88.Data._8_8_ = (ulonglong)(uint)local_88.Data.ArrayMax << 0x20;
  if (bVar4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)&local_88,0,&local_88.Data.ArrayMax);
  }
  local_88.FirstFreeIndex = -1;
  local_88.NumFreeIndices = 0;
  local_88.AllocationFlags.NumBits = 0;
  if (0x80 < (uint)local_88.AllocationFlags.MaxBits) {
    local_88.AllocationFlags.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_88.AllocationFlags,0);
  }
  if (local_88.AllocationFlags.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0)
  {
    FMemory::Free((void *)local_88.AllocationFlags.AllocatorInstance.SecondaryData);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  return;
}

// FlushPrecacheBuffer @ 141ef6760

void __thiscall FAsyncPackage::FlushPrecacheBuffer(FAsyncPackage *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  FAsyncArchive *this_00;
  
  if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3749,"FlushPrecacheBuffer",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
               ,0xea5);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3749);
  }
  this->CurrentBlockOffset = -1;
  this->CurrentBlockBytes = -1;
  if (this->Linker->bIsAsyncLoader == false) {
    this_00 = (FAsyncArchive *)0x0;
  }
  else {
    this_00 = (FAsyncArchive *)this->Linker->Loader;
    if (this_00 != (FAsyncArchive *)0x0) goto LAB_141ef6819;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("AsyncLoader",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                     ,0xea9,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_141ef6819:
  FAsyncArchive::FlushPrecacheBlock(this_00);
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// FreeReferencedImports @ 141ef68a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAsyncPackage::FreeReferencedImports(FAsyncPackage *this)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_FreeReferencedImports> FVar11;
  FNameEntryId FVar12;
  FName FVar13;
  uint uVar14;
  longlong lVar15;
  FColor_u_0 local_res10 [2];
  uint local_res18;
  uint uStackX_1c;
  FName local_res20;
  FName local_88;
  FName local_80;
  FString local_70;
  FString local_60 [2];
  
  FVar11 = StatPtr_STAT_FAsyncPackage_FreeReferencedImports;
  if (StatPtr_STAT_FAsyncPackage_FreeReferencedImports ==
      (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_FreeReferencedImports>)0x0) {
    pFVar10 = ::FName::FName(&local_88,"STAT_FAsyncPackage_FreeReferencedImports");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_FreeReferencedImports>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_FAsyncPackage_FreeReferencedImports,*pFVar10,
                        L"FreeReferencedImports AsyncPackage","STATGROUP_AsyncLoad",
                        "STATCAT_Advanced",L"Async Load",false,true,ST_int64,true,false,MCR_Invalid)
    ;
  }
  FVar13 = *(FName *)FVar11;
  bVar5 = false;
  bVar7 = false;
  local_80.ComparisonIndex.Value = 0;
  local_80.Number = 0;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar14 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar14 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar12.Value;
        local_res20.Number = uVar14;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                   ,0x1a9d);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18 = FVar12.Value;
      uStackX_1c = uVar14;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar6 = true;
      goto LAB_141ef6a03;
    }
  }
  bVar6 = false;
  FVar13 = local_80;
LAB_141ef6a03:
  uVar14 = 0;
  if (0 < (this->ReferencedImports).ArrayNum) {
    lVar15 = 0;
    do {
      uVar9 = 0;
      if ((int)uVar14 < (this->ReferencedImports).ArrayNum) {
        uVar9 = ~uVar14 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar3 = *(longlong *)((this->ReferencedImports).AllocatorInstance.Data + lVar15);
      if (5 < (byte)LogStreaming._0_1_) {
        ::FName::ToString((FName *)(lVar3 + 0x14),local_60);
        ::FName::ToString(&(this->Desc).PackagePath.PackageName,&local_70);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
        if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
        if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
        }
      }
      LOCK();
      piVar1 = (int *)(lVar3 + 0xd8);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar2 + -1 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("RefPackageDependencyRefCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                             ,0x1aa4,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar14 = uVar14 + 1;
      lVar15 = lVar15 + 8;
    } while ((int)uVar14 < (this->ReferencedImports).ArrayNum);
  }
  (this->ReferencedImports).ArrayNum = 0;
  if ((this->ReferencedImports).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->ReferencedImports).AllocatorInstance,0,
               &(this->ReferencedImports).ArrayMax);
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar6) {
    FThreadStats::AddMessage(FVar13,CycleScopeEnd);
  }
  return;
}

// GetDebuggingPath @ 141ef9830

FString * __thiscall
FAsyncPackage::GetDebuggingPath
          (FAsyncPackage *this,FString *__return_storage_ptr__,FPackageIndex param_1)

{
  longlong *this_00;
  longlong lVar1;
  FLinkerLoad *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FString *pFVar6;
  FObjectExport *this_01;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar7;
  int iVar8;
  ForAnyElementType FVar9;
  uint uVar10;
  ForAnyElementType _Src;
  int iVar11;
  FScriptContainerElement *pFVar12;
  FName local_res8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_58;
  FString local_48;
  FString local_38;
  
  if (this->Linker == (FLinkerLoad *)0x0) {
    ::FString::FString(__return_storage_ptr__,L"Null linker");
    return __return_storage_ptr__;
  }
  FVar9.Data = (FScriptContainerElement *)0x0;
  iVar5 = 0;
  pFVar12 = FVar9.Data;
  _Src.Data = FVar9.Data;
  iVar11 = iVar5;
  if (param_1.Index < 1) goto joined_r0x000141ef98de;
  lVar1 = this->Linker->_padding_;
  if (lVar1 == 0) goto joined_r0x000141ef98de;
  local_res8 = *(FName *)(lVar1 + 0x18);
  ::FName::ToString(&local_res8,&local_48);
  _Src.Data = local_48.Data.AllocatorInstance.Data;
  iVar11 = local_48.Data.ArrayNum;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  do {
    pFVar2 = this->Linker;
    if ((param_1.Index == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Index.IsNull()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Linker.h"
                           ,0x59,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar3)();
      return pFVar6;
    }
    this_00 = &pFVar2->_padding_;
    if (param_1.Index < 0) {
      this_01 = (FObjectExport *)FLinkerTables::Imp((FLinkerTables *)this_00,param_1);
    }
    else {
      this_01 = FLinkerTables::Exp((FLinkerTables *)this_00,param_1);
    }
    pTVar7 = &::FName::ToString((FName *)this_01,&local_38)->Data;
    iVar5 = (int)pFVar12 + -1;
    if ((int)pFVar12 == 0) {
      iVar5 = 0;
    }
    if ((pTVar7->ArrayNum != 0) || (iVar8 = 2, iVar5 == -1)) {
      iVar8 = 1;
    }
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>(&local_58,pTVar7,iVar5 + iVar8);
    ::FString::PathAppend((FString *)&local_58,(wchar_t *)FVar9.Data,iVar5);
    if (FVar9.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar9.Data);
    }
    FVar9.Data = local_58.AllocatorInstance.Data;
    iVar5 = local_58.ArrayNum;
    pFVar12 = (FScriptContainerElement *)(local_58._8_8_ & 0xffffffff);
    local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.ArrayNum = 0;
    local_58.ArrayMax = 0;
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    param_1.Index = this_01->_padding_;
joined_r0x000141ef98de:
  } while (param_1.Index != 0);
  iVar8 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar8 = 0;
  }
  if ((iVar11 == 0) && (iVar8 != -1)) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar5 = iVar8 + 2;
    (__return_storage_ptr__->Data).ArrayNum = 0;
LAB_141ef9a0e:
    if (iVar5 == 0) {
      (__return_storage_ptr__->Data).ArrayMax = 0;
      goto LAB_141ef9a5c;
    }
  }
  else {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar5 = iVar8 + 1;
    (__return_storage_ptr__->Data).ArrayNum = iVar11;
    if (iVar11 == 0) goto LAB_141ef9a0e;
  }
  uVar10 = iVar11 + iVar5;
  if ((int)uVar10 < iVar11) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,uVar10,0,(ForAnyElementType *)__return_storage_ptr__,iVar11,
             &(__return_storage_ptr__->Data).ArrayMax);
  if (iVar11 != 0) {
    memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,_Src.Data,(longlong)iVar11 * 2);
  }
LAB_141ef9a5c:
  ::FString::PathAppend(__return_storage_ptr__,(wchar_t *)FVar9.Data,iVar8);
  if (_Src.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(_Src.Data);
  }
  if (FVar9.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar9.Data);
  }
  return __return_storage_ptr__;
}

// GetLoadStartTime @ 141ef9c30

double __thiscall FAsyncPackage::GetLoadStartTime(FAsyncPackage *this)

{
  return this->LoadStartTime;
}

// GetLoadedPackage @ 141ef9c40

UPackage * __thiscall FAsyncPackage::GetLoadedPackage(FAsyncPackage *this)

{
  if (this->bLoadHasFailed == false) {
    return this->LinkerRoot;
  }
  return (UPackage *)0x0;
}

// GetReferencerName @ 141efa480

FString * __thiscall
FAsyncPackage::GetReferencerName(FAsyncPackage *this,FString *__return_storage_ptr__)

{
  FString local_18;
  
  ::FName::ToString(&(this->Desc).Name,&local_18);
  ::FString::PrintfImpl(__return_storage_ptr__,L"FAsyncPackage %s");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetSerializeContext @ 141efa550

FUObjectSerializeContext * __thiscall FAsyncPackage::GetSerializeContext(FAsyncPackage *this)

{
  uint *puVar1;
  FTlsAutoCleanup *pFVar2;
  undefined1 local_res10 [24];
  code *local_18;
  undefined1 *local_10;
  
  puVar1 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar2 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,puVar1);
  return (FUObjectSerializeContext *)pFVar2[0x2f];
}

// GiveUpTimeSlice @ 141efaaa0

bool __thiscall FAsyncPackage::GiveUpTimeSlice(FAsyncPackage *this)

{
  if ((this->bUseTimeLimit != false) && (this->bUseFullTimeLimit == false)) {
    this->bTimeLimitExceeded = true;
  }
  return this->bTimeLimitExceeded;
}

// ImportPreLoadedAsyncCallback @ 141efb370

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAsyncPackage::ImportPreLoadedAsyncCallback
          (FAsyncPackage *this,FName *param_1,UPackage *param_2,Type param_3)

{
  int *piVar1;
  TArray<FAsyncPackage_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FName FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  TTuple<FName,FAsyncPackage_*> *pTVar9;
  FScriptContainerElement *pFVar10;
  FName local_38;
  FString local_30;
  FString local_20;
  
  bVar6 = (*IsInAsyncLoadingThread)();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInAsyncLoadingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                         ,0x19f7,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (param_3 != Canceled) {
    if (5 < (byte)LogStreaming._0_1_) {
      ::FName::ToString(param_1,&local_20);
      ::FName::ToString(&(this->Desc).PackagePath.PackageName,&local_30);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
      if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_30.Data.AllocatorInstance.Data);
      }
      if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_20.Data.AllocatorInstance.Data);
      }
    }
    pTVar9 = TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
                     *)&this->PendingImportedPackages,*param_1);
    pFVar10 = (FScriptContainerElement *)&pTVar9->field_0x8;
    if (pTVar9 == (TTuple<FName,FAsyncPackage_*> *)0x0) {
      pFVar10 = (FScriptContainerElement *)0x0;
    }
    if (pFVar10 != (FScriptContainerElement *)0x0) {
      pTVar2 = &this->ReferencedImports;
      pFVar3 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar3 <= pFVar10) &&
          (pFVar10 < pFVar3 + (longlong)(this->ReferencedImports).ArrayMax * 8)) &&
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
      iVar7 = (this->ReferencedImports).ArrayNum;
      piVar1 = &(this->ReferencedImports).ArrayMax;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->ReferencedImports).ArrayNum = iVar7 + 1;
      *(undefined8 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 8) =
           *(undefined8 *)pFVar10;
      FVar4 = *param_1;
      if (*(int *)&(this->PendingImportedPackages).field_0x8 !=
          *(int *)&(this->PendingImportedPackages).field_0x34) {
        local_38 = FVar4;
        uVar8 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
        TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
        ::RemoveImpl<FName>((TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
                             *)&this->PendingImportedPackages,FVar4.Number + uVar8,&local_38);
      }
    }
  }
  return;
}

// IsDependencyOf @ 141efbb50

bool __thiscall FAsyncPackage::IsDependencyOf(FAsyncPackage *this,int param_1)

{
  longlong lVar1;
  ForElementType<FSetElementId> FVar2;
  int iVar3;
  
  AcquireSRWLockShared((PSRWLOCK)&this->DependentRequestsLock);
  if (*(int *)&(this->DependentRequests).Elements.field_0x8 !=
      *(int *)&(this->DependentRequests).Elements.field_0x34) {
    FVar2 = (this->DependentRequests).Hash.SecondaryData;
    if (FVar2 == (ForElementType<FSetElementId>)0x0) {
      FVar2 = (ForElementType<FSetElementId>)&(this->DependentRequests).Hash;
    }
    iVar3 = *(int *)((longlong)FVar2 +
                    (ulonglong)((this->DependentRequests).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)&(this->DependentRequests).Elements;
      do {
        if (*(int *)(lVar1 + (longlong)iVar3 * 0xc) == param_1) goto LAB_141efbbcd;
        iVar3 = *(int *)(lVar1 + 4 + (longlong)iVar3 * 0xc);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_141efbbcd:
  ReleaseSRWLockShared((PSRWLOCK)&this->DependentRequestsLock);
  return iVar3 != -1;
}

// IsFullyLoadedObj @ 141efbc20

bool __thiscall FAsyncPackage::IsFullyLoadedObj(FAsyncPackage *this,UObject *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FEDLBootNotificationManager *this_00;
  UClass *pUVar1;
  UPackage *pUVar2;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar3;
  FEDLBootObjectState *pFVar4;
  int iVar5;
  ForAnyElementType FVar6;
  int iVar7;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_48;
  FString local_38;
  FString local_28;
  
  if (param_1 == (UObject *)0x0) {
    return false;
  }
  if ((*(uint *)&param_1->field_0x8 & 0x280000) != 0x280000) {
    pUVar1 = Z_Construct_UClass_UPackage_NoRegister();
    iVar7 = (int)pUVar1->_padding_;
    if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar7) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar7 * 8) !=
        &pUVar1->_padding_)) {
      if ((*(uint *)&param_1->field_0x8 & 0x8080400) != 0) {
        return false;
      }
      if ((GIsInitialLoad != false) &&
         (pUVar2 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)param_1),
         ((uint)pUVar2->PackageFlagsPrivate >> 4 & 1) != 0)) {
        this_00 = this->EDLBootNotificationManager;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) <
             `public:_bool___cdecl_FEDLBootNotificationManager::IsObjComplete(UObject*___ptr64)___ptr64'
             ::__l2::_thread_safe_static_guard_0__) &&
           (_Init_thread_header(&`public:_bool___cdecl_FEDLBootNotificationManager::IsObjComplete(UObject*___ptr64)___ptr64'
                                 ::__l2::_thread_safe_static_guard_0__),
           `public:_bool___cdecl_FEDLBootNotificationManager::IsObjComplete(UObject*___ptr64)___ptr64'
           ::__l2::_thread_safe_static_guard_0__ == -1)) {
          ::FName::FName(&`public:_bool___cdecl_FEDLBootNotificationManager::IsObjComplete(UObject*___ptr64)___ptr64'
                          ::__l2::LongCoreUObjectPackageName,L"/Script/CoreUObject");
          _Init_thread_footer(&`public:_bool___cdecl_FEDLBootNotificationManager::IsObjComplete(UObject*___ptr64)___ptr64'
                               ::__l2::_thread_safe_static_guard_0__);
        }
        pUVar2 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)param_1);
        local_res18 = (FName)pUVar2->_padding_;
        if (local_res18 !=
            `public:_bool___cdecl_FEDLBootNotificationManager::IsObjComplete(UObject*___ptr64)___ptr64'
            ::__l2::LongCoreUObjectPackageName) {
          lpCriticalSection = &this_00->EDLBootNotificationManagerLock;
          if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::ReportNotNullPtr();
          }
          EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          local_res10.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
          local_res10.Number = *(uint *)&param_1->field_0x1c;
          ::FName::ToString(&local_res10,&local_38);
          pTVar3 = &::FName::ToString(&local_res18,&local_28)->Data;
          if (local_38.Data.ArrayNum == 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = local_38.Data.ArrayNum + -1;
          }
          iVar5 = 0;
          if ((pTVar3->ArrayNum == 0) && (iVar5 = 0, iVar7 + 1 != 0)) {
            iVar5 = 1;
          }
          TArray<wchar_t,TSizedDefaultAllocator<32>_>::
          TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>(&local_48,pTVar3,iVar5 + iVar7 + 1);
          ::FString::PathAppend
                    ((FString *)&local_48,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar7);
          FVar6.Data = (FScriptContainerElement *)L"";
          if (local_48.ArrayNum != 0) {
            FVar6.Data = local_48.AllocatorInstance.Data;
          }
          ::FName::FName(&local_res20,(wchar_t *)FVar6.Data);
          if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.AllocatorInstance.Data);
          }
          if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_28.Data.AllocatorInstance.Data);
          }
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
          pFVar4 = TMapBase<FName,FEDLBootObjectState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FEDLBootObjectState,0>_>
                   ::Find((TMapBase<FName,FEDLBootObjectState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FEDLBootObjectState,0>_>
                           *)this_00,local_res20);
          if ((pFVar4 != (FEDLBootObjectState *)0x0) &&
             (pFVar4->LastNotifyRegistrationPhase != NRP_Finished)) {
            LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
            return false;
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        }
        return true;
      }
    }
  }
  return true;
}

// LinkImport @ 141efc270

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAsyncPackage::LinkImport(FAsyncPackage *this,int param_1)

{
  FLinkerLoad **ppFVar1;
  FPackageIndex FVar2;
  FLinkerLoad *pFVar3;
  FArchive *pFVar4;
  FName FVar5;
  code *pcVar6;
  byte bVar7;
  byte bVar8;
  bool bVar9;
  int iVar10;
  longlong lVar11;
  FObjectImport *pFVar12;
  UPackage *this_00;
  UPackage *pUVar13;
  UClass *pUVar14;
  UObject *pUVar15;
  uint uVar16;
  byte bVar17;
  FPackageIndex FVar18;
  FObjectImport *this_01;
  uint uVar19;
  LARGE_INTEGER local_res18;
  LARGE_INTEGER local_res20;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  ppFVar1 = &this->Linker;
  if (((param_1 < 0) || ((int)(*ppFVar1)->_padding_ <= param_1)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("LocalImportIndex >= 0 && LocalImportIndex < Linker->ImportMap.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                         ,0xb6b,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar3 = *ppFVar1;
  uVar16 = 0;
  if (param_1 < (int)pFVar3->_padding_) {
    uVar16 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  this_01 = (FObjectImport *)((longlong)param_1 * 0x38 + pFVar3->_padding_);
  if (this_01->XObject != (UObject *)0x0) {
    return;
  }
  if (this_01->bImportFailed != false) {
    return;
  }
  if ((((*ppFVar1)->bIsAsyncLoader != false) &&
      (pFVar4 = (*ppFVar1)->Loader, pFVar4 != (FArchive *)0x0)) && (5 < (byte)LogAsyncArchive._0_1_)
     ) {
    FPackagePath::GetLocalFullPath((FPackagePath *)&pFVar4[2].field_0x30,&local_d8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
         ::__l5::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
                             ::__l5::_thread_safe_static_guard_0__),
       `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
       ::__l5::_thread_safe_static_guard_0__ == -1)) {
      QueryPerformanceCounter(&local_res18);
      `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
      ::__l5::GlobalStartTime =
           (double)local_res18.QuadPart * FGenericPlatformTime::SecondsPerCycle +
           __real_4170000000000000;
      _Init_thread_footer(&`public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
                           ::__l5::_thread_safe_static_guard_0__);
    }
    QueryPerformanceCounter(&local_res20);
    if (6 < (byte)LogAsyncArchive._0_1_) {
      FGenericPlatformMisc::LowLevelOutputDebugStringf
                (L"%32s%3s    %12lld %12lld    %6.2fms    (+%9.2fms)      %s\r\n");
    }
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
  }
  pFVar3 = this_01->SourceLinker;
  if (pFVar3 != (FLinkerLoad *)0x0) {
    uVar16 = this_01->SourceIndex;
    uVar19 = 0;
    if ((int)uVar16 < (int)pFVar3->_padding_) {
      uVar19 = ~uVar16 >> 0x1f;
    }
    if ((uVar19 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    this_01->XObject = *(UObject **)((longlong)(int)uVar16 * 0x68 + 0x40 + pFVar3->_padding_);
    goto LAB_141efc8ed;
  }
  if ((param_1 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ImportIndex >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                         ,0x67,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FVar2.Index = ~param_1;
  do {
    FVar18.Index = FVar2.Index;
    bVar7 = (byte)((uint)FVar18.Index >> 0x18);
    bVar17 = bVar7 >> 7;
    bVar8 = 0;
    if (((FVar18.Index == 0) || (bVar8 = bVar7 >> 7, -1 < FVar18.Index)) &&
       (bVar17 = bVar8,
       bVar9 = ::FDebug::CheckVerifyFailedImpl2
                         ("!OuterMostIndex.IsNull() && OuterMostIndex.IsImport()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                          ,0xb7f,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar3 = this->Linker;
    if ((((bVar17 == 0) || (-1 < FVar18.Index)) || ((int)pFVar3->_padding_ <= ~FVar18.Index)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index.IsImport() && ImportMap.IsValidIndex(Index.ToImport())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Linker.h"
                           ,0x8c,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((-1 < FVar18.Index) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsImport()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                           ,0x55,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar16 = 0;
    if (~FVar18.Index < (int)pFVar3->_padding_) {
      uVar16 = (uint)FVar18.Index >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar11 = (longlong)~FVar18.Index * 0x38;
    if (*(char *)(lVar11 + 0x23 + pFVar3->_padding_) != '\0') goto LAB_141efc8e7;
    FVar2.Index = *(int *)(lVar11 + 8 + pFVar3->_padding_);
  } while (FVar2.Index != 0);
  pFVar12 = FLinkerTables::Imp((FLinkerTables *)&this->Linker->_padding_,FVar18);
  if (((UObjectBaseUtility *)pFVar12->XObject == (UObjectBaseUtility *)0x0) ||
     (this_00 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)pFVar12->XObject),
     this_00 == (UPackage *)0x0)) {
    this_01->bImportFailed = true;
    if (((byte)LogStreaming._0_1_ < 2) ||
       (bVar9 = FLinkerLoad::IsKnownMissingPackage((FName)pFVar12->_padding_), bVar9))
    goto LAB_141efc8ed;
    ::FName::ToString(&(this->Desc).PackagePath.PackageName,&local_a8);
    ::FName::ToString((FName *)this_01,&local_48);
    ::FName::ToString((FName *)pFVar12,&local_58);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  else {
    if (pFVar12 == this_01) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                         ,0xb99,L"");
      if (bVar9) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      goto LAB_141efc8ed;
    }
    pUVar13 = FindObjectFast<UPackage>((UObject *)0x0,this_01->ClassPackage,None,RF_NoFlags);
    if (pUVar13 == (UPackage *)0x0) goto LAB_141efc8ed;
    FVar5 = this_01->ClassName;
    pUVar14 = Z_Construct_UClass_UClass_NoRegister();
    local_res18 = (LARGE_INTEGER)
                  StaticFindObjectFast(pUVar14,(UObject *)pUVar13,FVar5,None,RF_NoFlags,Borrowed);
    if ((UClass *)local_res18.QuadPart == (UClass *)0x0) goto LAB_141efc8ed;
    pUVar13 = this_00;
    if ((FVar18.Index != this_01->_padding_) && (this_01->_padding_ < 0)) {
      pFVar12 = FLinkerTables::Imp((FLinkerTables *)&this->Linker->_padding_,
                                   (FPackageIndex)this_01->_padding_);
      iVar10 = FPackageIndex::ToImport((FPackageIndex *)&this_01->_padding_);
      LinkImport(this,iVar10);
      if (pFVar12->bImportFailed != false) {
LAB_141efc8e7:
        this_01->bImportFailed = true;
        goto LAB_141efc8ed;
      }
      pUVar13 = (UPackage *)pFVar12->XObject;
      if (pUVar13 == (UPackage *)0x0) {
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this_00,&local_88,(UObject *)0x0,None)
        ;
        ::FName::ToString((FName *)pFVar12,&local_98);
        ::FName::ToString(&(this->Desc).PackagePath.PackageName,&local_c8);
        UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
        if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
      }
    }
    pUVar15 = FLinkerLoad::FindImportFast
                        ((UClass *)local_res18,(UObject *)pUVar13,(FName)this_01->_padding_,false);
    this_01->XObject = pUVar15;
    if (pUVar15 != (UObject *)0x0) goto LAB_141efc8ed;
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this_00,&local_68,(UObject *)0x0,None);
    ::FName::ToString((FName *)this_01,&local_78);
    ::FName::ToString(&(this->Desc).PackagePath.PackageName,&local_b8);
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    local_a8.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
      local_a8.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
    }
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
LAB_141efc8ed:
  if (this_01->XObject != (UObject *)0x0) {
    AddObjectReference(this,this_01->XObject);
  }
  return;
}

// LoadImports @ 141efc980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EPackageLocationFilter": Some values do not have unique names */

Type __thiscall FAsyncPackage::LoadImports(FAsyncPackage *this)

{
  int *piVar1;
  TArray<FAsyncPackage_*,TSizedDefaultAllocator<32>_> *pTVar2;
  double dVar3;
  FName FVar4;
  UObject *pUVar5;
  wchar_t *pwVar6;
  FLinkerLoad *pFVar7;
  ulonglong uVar8;
  FScriptContainerElement *pFVar9;
  undefined1 *puVar10;
  IAsyncPackageLoader *pIVar11;
  code *pcVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  bool bVar16;
  bool bVar17;
  double dVar18;
  bool bVar19;
  EPackageLocationFilter EVar20;
  uint uVar21;
  Type TVar22;
  FNameEntryId FVar23;
  int iVar24;
  uint uVar25;
  FName *pFVar26;
  FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_LoadImports> FVar27;
  undefined4 extraout_var;
  UClass *pUVar28;
  UPackage *pUVar29;
  TTuple<FName,FAsyncPackage_*> *pTVar30;
  FPackageId FVar31;
  FLinkerInstancingContext *pFVar32;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  undefined1 *puVar33;
  bool bVar34;
  undefined1 auStackY_2a8 [32];
  FGCScopeGuard local_248 [8];
  FName local_240;
  FName local_238;
  byte local_230;
  FAsyncPackage *local_228;
  FName local_220;
  undefined4 local_218 [2];
  FString local_210;
  FColor_u_0 local_200;
  undefined1 local_1fc [4];
  FName local_1f8;
  uint local_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  FPackagePath local_1e0;
  LARGE_INTEGER local_1d0;
  FName local_1c8;
  LARGE_INTEGER local_1c0;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FLinkerInstancingContext local_188;
  FString local_178;
  FStatMessage local_168;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined4 *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  FLinkerInstancingContext local_128;
  FName local_118;
  FName local_110;
  FString local_108;
  FString local_f8;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  FLinkerInstancingContext local_d8;
  TSet<FAsyncPackage_*,DefaultKeyFuncs<FAsyncPackage_*,0>,FDefaultSetAllocator> local_c8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  bVar17 = false;
  bVar16 = false;
  local_218[0] = 0;
  bVar34 = -1 < CpuChannel->Enabled;
  if (bVar34) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId6510,"FAsyncPackage::LoadImports",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
               ,0x196e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId6510);
  }
  FVar27 = StatPtr_STAT_FAsyncPackage_LoadImports;
  if (StatPtr_STAT_FAsyncPackage_LoadImports ==
      (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_LoadImports>)0x0) {
    pFVar26 = ::FName::FName(&local_118,"STAT_FAsyncPackage_LoadImports");
    FVar27 = (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_LoadImports>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FAsyncPackage_LoadImports,
                        *pFVar26,L"LoadImports AsyncPackage","STATGROUP_AsyncLoad",
                        "STATCAT_Advanced",L"Async Load",false,true,ST_int64,true,false,MCR_Invalid)
    ;
  }
  local_238.ComparisonIndex.Value = 0;
  local_238.Number = 0;
  local_230 = 0;
  FVar4 = *(FName *)FVar27;
  if ((FVar4.ComparisonIndex.Value.Value != 0) || (FVar4.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_200.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_200._s_0,(char *)*(FName *)((longlong)FVar27 + 0x10));
      local_230 = local_230 | 1;
      if (-1 < CpuChannel->Enabled) {
        local_1f8.ComparisonIndex.Value = FVar4.ComparisonIndex.Value.Value;
        local_1f8.Number = FVar4.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1f8,(wchar_t *)*(FName *)((longlong)FVar27 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                   ,0x196f);
        local_230 = local_230 | 2;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_238 = FVar4;
      local_220 = FVar4;
      FThreadStats::AddMessage(FVar4,CycleScopeStart);
      local_230 = local_230 | 4;
    }
  }
  this->LastObjectWorkWasPerformedOn = (UObject *)this->LinkerRoot;
  this->LastTypeOfWorkPerformed = L"loading imports";
  FGCScopeGuard::FGCScopeGuard(local_248);
  dVar18 = __real_4170000000000000;
  TVar22 = PendingImports;
  if (this->LoadImportIndex < (int)this->Linker->_padding_) {
    do {
      if ((this->AsyncLoadingThread->IsLoadingSuspended).Counter != 0) break;
      pUVar5 = this->LastObjectWorkWasPerformedOn;
      pwVar6 = this->LastTypeOfWorkPerformed;
      dVar3 = this->TickStartTime;
      dVar15 = (double)this->TimeLimit;
      if (this->bUseTimeLimit != false) {
        QueryPerformanceCounter(&local_1d0);
        dVar14 = (double)local_1d0.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar18;
        dVar13 = dVar14 - dVar3;
        if ((dVar15 < dVar13) && (GWarnIfTimeLimitExceeded != 0)) {
          IsTimeLimitExceededPrint(dVar3,dVar14,LastTestTime,dVar15,pwVar6,pUVar5);
          LastTestTime = dVar14;
          break;
        }
        LastTestTime = dVar14;
        if (dVar15 < dVar13) break;
      }
      if ((byte)LogStreaming._0_1_ < 6) {
        if (GGCSingleton->GCWantsToRunCounter != (TAtomic<int>)0x0) break;
      }
      else if (GGCSingleton->GCWantsToRunCounter != (TAtomic<int>)0x0) {
        UE::Logging::Private::BasicLog<6>
                  ((FStaticBasicLogRecord *)&PTR_u_Timing_out_asyn_1507e7988,
                   (FLogCategoryBase *)&LogStreaming);
        break;
      }
      uVar25 = this->LoadImportIndex;
      pFVar7 = this->Linker;
      this->LoadImportIndex = uVar25 + 1;
      uVar21 = 0;
      if ((int)uVar25 < (int)pFVar7->_padding_) {
        uVar21 = ~uVar25 >> 0x1f;
      }
      if (uVar21 == 0) {
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar19) {
          pcVar12 = (code *)swi(3);
          TVar22 = (*pcVar12)();
          return TVar22;
        }
      }
      pFVar26 = (FName *)(pFVar7->_padding_ + (longlong)(int)uVar25 * 0x38);
      uVar25 = pFVar26[1].ComparisonIndex.Value;
      while ((int)uVar25 < 0) {
        pFVar7 = this->Linker;
        if ((int)pFVar7->_padding_ <= (int)~uVar25) {
          bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index.IsImport() && ImportMap.IsValidIndex(Index.ToImport())",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Linker.h"
                              ,0x8c,L"");
          if (bVar19) {
            pcVar12 = (code *)swi(3);
            TVar22 = (*pcVar12)();
            return TVar22;
          }
        }
        if (-1 < (int)uVar25) {
          bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsImport()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                              ,0x55,L"");
          if (bVar19) {
            pcVar12 = (code *)swi(3);
            TVar22 = (*pcVar12)();
            return TVar22;
          }
        }
        if ((int)pFVar7->_padding_ <= (int)~uVar25) {
          bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar19) {
            pcVar12 = (code *)swi(3);
            TVar22 = (*pcVar12)();
            return TVar22;
          }
        }
        pFVar26 = (FName *)(pFVar7->_padding_ + (ulonglong)~uVar25 * 0x38);
        uVar25 = pFVar26[1].ComparisonIndex.Value;
      }
      uVar8 = *(ulonglong *)&pFVar26[2].Number;
      FVar23 = FNameEntryId::FromValidEName((EName)local_1fc);
      uStack_1ec = 0;
      local_1f0 = *(uint *)CONCAT44(extraout_var,FVar23.Value);
      if ((uVar8 == local_1f0) && (*pFVar26 != (FName)0x0)) {
        pFVar7 = this->Linker;
        local_220 = *pFVar26;
        FLinkerInstancingContext::RemapPackage(&pFVar7->InstancingContext,&local_240);
        if ((local_240 != (FName)0x0) || (local_220 == (FName)0x0)) {
          bVar19 = FLinkerLoad::IsKnownMissingPackage(local_240);
          FVar4 = local_240;
          if (!bVar19) {
            pUVar28 = Z_Construct_UClass_UPackage_NoRegister();
            pUVar29 = (UPackage *)
                      StaticFindObjectFast
                                (pUVar28,(UObject *)0x0,FVar4,ExactClass,RF_NoFlags,Borrowed);
            if (pUVar29 == (UPackage *)0x0) {
LAB_141efd0dd:
              FVar4 = local_240;
              local_1c8 = local_240;
              uVar25 = ::GetTypeHash(local_240.ComparisonIndex.Value);
              if (*(int *)&(this->PendingImportedPackages).field_0x8 !=
                  *(int *)&(this->PendingImportedPackages).field_0x34) {
                puVar10 = *(undefined1 **)&(this->PendingImportedPackages).field_0x40;
                puVar33 = &(this->PendingImportedPackages).field_0x38;
                if (puVar10 != (undefined1 *)0x0) {
                  puVar33 = puVar10;
                }
                iVar24 = *(int *)(puVar33 +
                                 (ulonglong)
                                 (*(int *)&(this->PendingImportedPackages).field_0x48 - 1U &
                                 uVar25 + local_1c8.Number) * 4);
                if (iVar24 != -1) {
                  do {
                    if (*(FName *)(*(longlong *)&this->PendingImportedPackages +
                                  (longlong)iVar24 * 0x18) == FVar4) goto LAB_141efd4b0;
                    iVar24 = *(int *)(*(longlong *)&this->PendingImportedPackages + 0x10 +
                                     (longlong)iVar24 * 0x18);
                  } while (iVar24 != -1);
                }
              }
              ::FName::ToString(&local_240,&local_210);
              bVar19 = FPackageName::IsShortPackageName(&local_210);
              if (bVar19) {
                iVar24 = FAsyncLoadingThread::CurrentAsyncLoadingTickThreadIndex;
                if (2 < (byte)LogStreaming._0_1_) {
                  ::FName::ToString(&(this->Desc).PackagePath.PackageName,&local_178);
                  UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming)
                  ;
                  iVar24 = FAsyncLoadingThread::CurrentAsyncLoadingTickThreadIndex;
                  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_178.Data.AllocatorInstance.Data);
                    iVar24 = FAsyncLoadingThread::CurrentAsyncLoadingTickThreadIndex;
                  }
                }
              }
              else {
                pIVar11 = this->AsyncLoadingThread->IoStorePackageLoader;
                if (pIVar11 != (IAsyncPackageLoader *)0x0) {
                  local_1e0.PackageName = local_240;
                  local_1e0.HeaderExtension = Unspecified;
                  EVar20 = FPackageName::DoesPackageExistEx
                                     (&local_1e0,ValidMask,false,(FPackagePath *)0x0);
                  if (EVar20 == IoDispatcher) {
                    if (5 < (byte)LogStreaming._0_1_) {
                      FVar31 = FPackageId::FromName(&local_110);
                      ::LexToString(&local_f8,(FPackageId *)FVar31.Id);
                      ::FName::ToString(&(this->Desc).PackagePath.PackageName,&local_1a8);
                      UE::Logging::Private::BasicLog<6>
                                (&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
                      if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
                      }
                      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
                      }
                    }
                    bVar19 = IsInGameThread();
                    if (!bVar19) {
                      bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsInGameThread()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                                          ,0x19d1,L"");
                      if (bVar19) {
                        pcVar12 = (code *)swi(3);
                        TVar22 = (*pcVar12)();
                        return TVar22;
                      }
                    }
                    FAsyncLoadingThread::LeaveAsyncLoadingTick
                              (this->AsyncLoadingThread->AsyncLoadingThreadIndex);
                    local_148 = 0;
                    local_158 = 0;
                    local_150 = 0;
                    local_1e8 = 0;
                    local_218[0] = (**(code **)((longlong)*pIVar11 + 0x30))
                                             (pIVar11,&local_1e0,0,&local_158);
                    uStack_130 = 1;
                    local_138 = local_218;
                    uStack_e0 = 1;
                    uStack_dc = uStack_12c;
                    local_e8 = local_138;
                    (**(code **)((longlong)*pIVar11 + 0x60))(pIVar11,&local_e8);
                    iVar24 = this->AsyncLoadingThread->AsyncLoadingThreadIndex;
                    LOCK();
                    FAsyncLoadingThread::AsyncLoadingTickCounter.Counter =
                         FAsyncLoadingThread::AsyncLoadingTickCounter.Counter + 1;
                    UNLOCK();
                    if ((FAsyncLoadingThread::CurrentAsyncLoadingTickThreadIndex != -1) &&
                       (FAsyncLoadingThread::CurrentAsyncLoadingTickThreadIndex != iVar24)) {
                      bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("CurrentAsyncLoadingTickThreadIndex == INDEX_NONE || CurrentAsyncLoadingTickThreadIndex == ThreadIndex"
                                          ,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoadingThread.h"
                                          ,0x1cb,L"");
                      if (bVar19) {
                        pcVar12 = (code *)swi(3);
                        TVar22 = (*pcVar12)();
                        return TVar22;
                      }
                    }
                    goto LAB_141efd4a2;
                  }
                }
                if (5 < (byte)LogStreaming._0_1_) {
                  ::FName::ToString(&(this->Desc).PackagePath.PackageName,&local_198);
                  UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming)
                  ;
                  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_198.Data.AllocatorInstance.Data);
                  }
                }
                if (local_220 == local_240) {
                  bVar16 = true;
                  pFVar32 = FLinkerInstancingContext::FLinkerInstancingContext(&local_d8);
                  local_128.SharedData.Object = (pFVar32->SharedData).Object;
                }
                else {
                  local_188.SharedData.SharedReferenceCount.ReferenceController =
                       (pFVar7->InstancingContext).SharedData.SharedReferenceCount.
                       ReferenceController;
                  bVar17 = true;
                  local_128.SharedData.Object = (pFVar7->InstancingContext).SharedData.Object;
                  if (local_188.SharedData.SharedReferenceCount.ReferenceController !=
                      (TReferenceControllerBase<1> *)0x0) {
                    LOCK();
                    (local_188.SharedData.SharedReferenceCount.ReferenceController)->
                    SharedReferenceCount =
                         (atomic<int>)
                         ((int)(local_188.SharedData.SharedReferenceCount.ReferenceController)->
                               SharedReferenceCount + 1);
                    UNLOCK();
                  }
                  pFVar32 = &local_188;
                  local_188.SharedData.Object = local_128.SharedData.Object;
                }
                local_128.SharedData.SharedReferenceCount.ReferenceController =
                     (pFVar32->SharedData).SharedReferenceCount.ReferenceController;
                if (local_128.SharedData.SharedReferenceCount.ReferenceController !=
                    (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  (local_128.SharedData.SharedReferenceCount.ReferenceController)->
                  SharedReferenceCount =
                       (atomic<int>)
                       ((int)(local_128.SharedData.SharedReferenceCount.ReferenceController)->
                             SharedReferenceCount + 1);
                  UNLOCK();
                }
                AddImportDependency(this,&local_240,&local_220,&local_128);
                if (bVar16) {
                  bVar16 = false;
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline
                            (local_d8.SharedData.SharedReferenceCount.ReferenceController);
                }
                iVar24 = FAsyncLoadingThread::CurrentAsyncLoadingTickThreadIndex;
                if (bVar17) {
                  bVar17 = false;
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline
                            (local_188.SharedData.SharedReferenceCount.ReferenceController);
                  iVar24 = FAsyncLoadingThread::CurrentAsyncLoadingTickThreadIndex;
                }
              }
LAB_141efd4a2:
              FAsyncLoadingThread::CurrentAsyncLoadingTickThreadIndex = iVar24;
              if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_210.Data.AllocatorInstance.Data);
              }
            }
            else {
              pUVar28 = Z_Construct_UClass_UPackage_NoRegister();
              iVar24 = (int)pUVar28->_padding_;
              if ((*(int *)(pUVar29->_padding_ + 0x38) < iVar24) ||
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)(pUVar29->_padding_ + 0x30) + (longlong)iVar24 * 8)
                  != &pUVar28->_padding_)) goto LAB_141efd0dd;
              if (pUVar29->bHasBeenFullyLoaded == '\0') {
                bVar19 = IsNativeCodePackage(pUVar29);
                if (!bVar19) {
                  pTVar30 = TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
                            ::Find((TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
                                    *)&this->AsyncLoadingThread->AsyncPackageNameLookup,local_240);
                  if (pTVar30 == (TTuple<FName,FAsyncPackage_*> *)0x0) {
                    local_228 = (FAsyncPackage *)0x0;
                  }
                  else {
                    local_228 = *(FAsyncPackage **)&pTVar30->field_0x8;
                    if (local_228 != (FAsyncPackage *)0x0) {
                      if ((local_228->Linker == (FLinkerLoad *)0x0) ||
                         (!local_228->Linker->bHasFinishedInitialization)) {
                        AddUniqueLinkerDependencyPackage(this,local_228);
                      }
                      else {
                        if (5 < (byte)LogStreaming._0_1_) {
                          ::FName::ToString(&local_240,&local_108);
                          ::FName::ToString(&(this->Desc).PackagePath.PackageName,&local_1b8);
                          UE::Logging::Private::BasicLog<6>
                                    (&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
                          if (local_1b8.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
                          }
                          if (local_108.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_108.Data.AllocatorInstance.Data);
                          }
                        }
                        LOCK();
                        (local_228->DependencyRefCount).Counter =
                             (local_228->DependencyRefCount).Counter + 1;
                        UNLOCK();
                        pTVar2 = &this->ReferencedImports;
                        pFVar9 = (pTVar2->AllocatorInstance).Data;
                        if ((pFVar9 <= (FScriptContainerElement *)&local_228) &&
                           ((FScriptContainerElement *)&local_228 <
                            pFVar9 + (longlong)(this->ReferencedImports).ArrayMax * 8)) {
                          bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x7a5,
                                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                             );
                          if (bVar19) {
                            pcVar12 = (code *)swi(3);
                            TVar22 = (*pcVar12)();
                            return TVar22;
                          }
                        }
                        iVar24 = (this->ReferencedImports).ArrayNum;
                        piVar1 = &(this->ReferencedImports).ArrayMax;
                        if (iVar24 == *piVar1) {
                          iVar24 = UE::Core::Private::
                                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                             (0x808,&pTVar2->AllocatorInstance,piVar1);
                        }
                        (this->ReferencedImports).ArrayNum = iVar24 + 1;
                        *(FAsyncPackage **)((pTVar2->AllocatorInstance).Data + (longlong)iVar24 * 8)
                             = local_228;
                        local_c8.Elements._0_8_ = 0;
                        local_c8.Elements._8_8_ = 0;
                        local_c8.Elements._32_8_ = 0;
                        local_c8.Elements._40_4_ = 0;
                        local_c8.Elements._44_4_ = 0x80;
                        local_c8.Elements._48_4_ = 0xffffffff;
                        local_c8.Elements._52_4_ = 0;
                        local_c8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
                        local_c8.HashSize = 0;
                        AddDependencyTree(this,local_228,&local_c8);
                        local_c8.HashSize = 0;
                        if (local_c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                          FMemory::Free((void *)local_c8.Hash.SecondaryData);
                        }
                        TSparseArray<TSparseSetElement<FAsyncPackage_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        ::
                        ~TSparseArray<TSparseSetElement<FAsyncPackage_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                  (&local_c8.Elements);
                      }
                    }
                  }
                }
              }
            }
LAB_141efd4b0:
            UpdateLoadPercentage(this);
          }
        }
      }
    } while (this->LoadImportIndex < (int)this->Linker->_padding_);
  }
  if (*(int *)&(this->PendingImportedPackages).field_0x8 ==
      *(int *)&(this->PendingImportedPackages).field_0x34) {
    TVar22 = TimeOut;
    if (this->LoadImportIndex == (int)this->Linker->_padding_) {
      TVar22 = Complete;
    }
  }
  else if ((this->bUseTimeLimit != false) && (this->bUseFullTimeLimit == false)) {
    this->bTimeLimitExceeded = true;
  }
  FGCScopeGuard::~FGCScopeGuard(local_248);
  if ((local_230 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_230 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FVar4 = local_238;
  if (((((local_230 & 4) != 0) && (local_238 != (FName)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_168.NameAndInfo.Index = FVar4.ComparisonIndex.Value;
      local_168.NameAndInfo.Number = FVar4.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_1c0);
      local_168.StatData.Pad[4] = '\0';
      local_168.StatData.Pad[5] = '\0';
      local_168.StatData.Pad[6] = '\0';
      local_168.StatData.Pad[7] = '\0';
      local_168.StatData.Pad[0] = local_1c0.s.LowPart._0_1_;
      local_168.StatData.Pad[1] = local_1c0.s.LowPart._1_1_;
      local_168.StatData.Pad[2] = local_1c0.s.LowPart._2_1_;
      local_168.StatData.Pad[3] = local_1c0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_168);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  local_230 = 0;
  if (bVar34) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return TVar22;
}

// LoadImports_Event @ 141efd650

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EEventLoadNode": Some values do not have unique names */

Type __thiscall FAsyncPackage::LoadImports_Event(FAsyncPackage *this)

{
  int *piVar1;
  FLinkerInstancingContext *pFVar2;
  TArray<FUnsafeWeakAsyncPackagePtr,TSizedDefaultAllocator<32>_> *pTVar3;
  double dVar4;
  char cVar5;
  uint uVar6;
  UObject *pUVar7;
  FLinkerLoad *pFVar8;
  FName FVar9;
  TReferenceControllerBase<1> *pTVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  code *pcVar13;
  double dVar14;
  double dVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  double dVar20;
  TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>
  TVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  Type TVar26;
  uint uVar27;
  FNameEntryId FVar28;
  int iVar29;
  FName *pFVar30;
  FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_LoadImports> FVar31;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FObjectImport *this_02;
  undefined4 extraout_var;
  FAsyncPackage *pFVar32;
  TTuple<FName,FAsyncPackage_*> *pTVar33;
  FAsyncPackage *pFVar34;
  FPlatformFileManager *this_03;
  FPlatformFileOpenLog *this_04;
  FString *pFVar35;
  wchar_t *pwVar36;
  FName FVar37;
  ForAnyElementType FVar38;
  FName FVar39;
  uint uVar40;
  double dVar41;
  FGCScopeGuard local_278 [8];
  FName local_270;
  FAsyncPackage *local_268;
  FColor_u_0 local_260;
  int local_25c;
  FName local_258;
  FSharedLinkerInstancingContextData *local_250;
  FSharedReferencer<1> local_248;
  FName local_240;
  FName local_238;
  FName local_230;
  FPackagePath local_220;
  undefined1 local_210 [8];
  LARGE_INTEGER local_208;
  LARGE_INTEGER local_200;
  FStatMessage local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FEventLoadNodePtr local_178;
  FEventLoadNodePtr local_168;
  FEventLoadNodePtr local_158;
  FEventLoadNodePtr local_148;
  FAsyncPackageDesc local_138;
  FName local_f8;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0 [6];
  
  FVar31 = StatPtr_STAT_FAsyncPackage_LoadImports;
  if (StatPtr_STAT_FAsyncPackage_LoadImports ==
      (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_LoadImports>)0x0) {
    pFVar30 = ::FName::FName(&local_f8,"STAT_FAsyncPackage_LoadImports");
    FVar31 = (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_LoadImports>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FAsyncPackage_LoadImports,
                        *pFVar30,L"LoadImports AsyncPackage","STATGROUP_AsyncLoad",
                        "STATCAT_Advanced",L"Async Load",false,true,ST_int64,true,false,MCR_Invalid)
    ;
  }
  FVar39 = *(FName *)FVar31;
  bVar19 = false;
  bVar18 = false;
  local_230.ComparisonIndex.Value = 0;
  local_230.Number = 0;
  bVar16 = false;
  bVar22 = false;
  if ((FVar39.ComparisonIndex.Value.Value != 0) || (FVar39.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_260.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_260._s_0,(char *)*(FName *)((longlong)FVar31 + 0x10));
      bVar19 = false;
      bVar18 = true;
      bVar16 = false;
      bVar22 = true;
      if (-1 < CpuChannel->Enabled) {
        local_240.ComparisonIndex.Value = FVar39.ComparisonIndex.Value.Value;
        local_240.Number = FVar39.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_240,(wchar_t *)*(FName *)((longlong)FVar31 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                   ,0x844);
        bVar19 = true;
        bVar18 = true;
        bVar16 = true;
        bVar22 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_238 = FVar39;
      FThreadStats::AddMessage(FVar39,CycleScopeStart);
      bVar22 = true;
      goto LAB_141efd7bc;
    }
  }
  bVar19 = bVar16;
  bVar18 = bVar22;
  bVar22 = false;
  local_238 = local_230;
  FVar39 = local_230;
LAB_141efd7bc:
  if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
    bVar16 = false;
    bVar17 = false;
  }
  else {
    bVar16 = true;
    bVar17 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2117,"LoadImports_Event",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
               ,0x845);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2117);
  }
  this->LastObjectWorkWasPerformedOn = (UObject *)this->LinkerRoot;
  this->LastTypeOfWorkPerformed = L"loading imports event";
  FGCScopeGuard::FGCScopeGuard(local_278);
  dVar20 = __real_4170000000000000;
  local_178.ImportOrExportIndex.Index = 0;
  local_178.Phase = ImportOrExport_Serialize;
  local_268 = this;
  local_178.WaitingPackage.Package = this;
  if (this->LoadImportIndex < (int)this->Linker->_padding_) {
    do {
      if ((this->AsyncLoadingThread->IsLoadingSuspended).Counter != 0) break;
      pUVar7 = this->LastObjectWorkWasPerformedOn;
      pwVar36 = this->LastTypeOfWorkPerformed;
      dVar4 = this->TickStartTime;
      dVar15 = (double)this->TimeLimit;
      if (this->bUseTimeLimit != false) {
        QueryPerformanceCounter(&local_208);
        dVar14 = (double)local_208.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar20;
        dVar41 = dVar14 - dVar4;
        if ((dVar15 < dVar41) && (GWarnIfTimeLimitExceeded != 0)) {
          IsTimeLimitExceededPrint(dVar4,dVar14,LastTestTime,dVar15,pwVar36,pUVar7);
          LastTestTime = dVar14;
          break;
        }
        LastTestTime = dVar14;
        if (dVar15 < dVar41) break;
      }
      if ((byte)LogStreaming._0_1_ < 6) {
        if (GGCSingleton->GCWantsToRunCounter != (TAtomic<int>)0x0) break;
      }
      else if (GGCSingleton->GCWantsToRunCounter != (TAtomic<int>)0x0) {
        UE::Logging::Private::BasicLog<6>
                  ((FStaticBasicLogRecord *)&PTR_u_Timing_out_asyn_1507e7988,
                   (FLogCategoryBase *)&LogStreaming);
        break;
      }
      local_25c = this->LoadImportIndex;
      this->LoadImportIndex = local_25c + 1;
      this_02 = FindExistingImport(this,local_25c);
      if (this_02->XObject == (UObject *)0x0) {
LAB_141efdb1e:
        bVar23 = this_02->ClassName == PrestreamPackageClassNameLoad;
        if ((GProcessPrestreamingRequests == 0) && (bVar23)) {
          if (3 < (byte)LogStreaming._0_1_) {
            ::FName::ToString((FName *)this_02,&local_e0);
            ::FName::ToString(&(this->Desc).PackagePath.PackageName,&local_1d8);
            UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
            if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
            }
            if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_e0.Data.AllocatorInstance.Data);
            }
          }
          this_02->bImportFailed = true;
        }
        else {
          bVar24 = false;
          if ((this_02->_padding_ != 0) && (this_02->bImportFailed == false)) {
            cVar5 = this_02->bImportPackageHandled;
            while ((cVar5 == '\0' &&
                   (uVar6 = this_02->_padding_, FVar39 = local_238, bVar16 = bVar17, (int)uVar6 < 0)
                   )) {
              uVar40 = ~uVar6;
              this_02->bImportPackageHandled = true;
              pFVar8 = this->Linker;
              if (((-1 < (int)uVar6) || ((int)pFVar8->_padding_ <= (int)uVar40)) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index.IsImport() && ImportMap.IsValidIndex(Index.ToImport())"
                                      ,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Linker.h"
                                      ,0x8c,L""), bVar24)) {
                pcVar13 = (code *)swi(3);
                TVar26 = (*pcVar13)();
                return TVar26;
              }
              uVar27 = 0;
              if ((int)uVar40 < (int)pFVar8->_padding_) {
                uVar27 = uVar6 >> 0x1f;
              }
              if ((uVar27 == 0) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar24)) {
                pcVar13 = (code *)swi(3);
                TVar26 = (*pcVar13)();
                return TVar26;
              }
              this_02 = (FObjectImport *)((longlong)(int)uVar40 * 0x38 + pFVar8->_padding_);
              cVar5 = this_02->bImportPackageHandled;
              FVar39 = local_238;
            }
            if (this_02->bImportPackageHandled != false) goto LAB_141efe3c2;
            if ((this_02->_padding_ != 0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ImportOutermost->OuterIndex.IsNull() || ImportOutermost->HasPackageName()"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                                    ,0x87f,L""), bVar24)) {
              pcVar13 = (code *)swi(3);
              TVar26 = (*pcVar13)();
              return TVar26;
            }
            this_02->bImportPackageHandled = true;
            bVar24 = true;
          }
          FVar9 = this_02->ClassName;
          FVar28 = FNameEntryId::FromValidEName((EName)local_210);
          FVar37.Number = 0;
          FVar37.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar28.Value);
          if ((FVar9 == FVar37) || (bVar23)) {
            bVar25 = FLinkerLoad::IsKnownMissingPackage((FName)this_02->_padding_);
            if (!bVar25) {
              pFVar32 = (FAsyncPackage *)0x0;
              pFVar34 = pFVar32;
              if ((UObjectBaseUtility *)this_02->XObject != (UObjectBaseUtility *)0x0) {
                pFVar32 = (FAsyncPackage *)
                          UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this_02->XObject);
                if (pFVar32 == (FAsyncPackage *)0x0) {
                  pFVar35 = GetTypeName<UPackage>(local_a0);
                  if ((pFVar35->Data).ArrayNum == 0) {
                    pwVar36 = L"";
                  }
                  else {
                    pwVar36 = (wchar_t *)(pFVar35->Data).AllocatorInstance.Data;
                  }
                    /* WARNING: Subroutine does not return */
                  CastLogError(L"nullptr",pwVar36);
                }
                pTVar10 = (pFVar32->Desc).InstancingContext.SharedData.SharedReferenceCount.
                          ReferenceController;
                if ((pTVar10 == (TReferenceControllerBase<1> *)0x0) ||
                   (lVar11 = pTVar10[2]._padding_, lVar11 == 0)) {
                  pFVar34 = (FAsyncPackage *)0x0;
                }
                else {
                  pFVar34 = *(FAsyncPackage **)(lVar11 + 0x420);
                }
              }
              bVar25 = IsNativeCodePackage((UPackage *)pFVar32);
              local_258 = (FName)this_02->_padding_;
              FLinkerInstancingContext::RemapPackage(&this->Linker->InstancingContext,&local_270);
              if (pFVar34 == (FAsyncPackage *)0x0) {
                if (!bVar25) {
                  pTVar33 = TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
                            ::Find((TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
                                    *)&this->AsyncLoadingThread->AsyncPackageNameLookup,local_270);
                  if (pTVar33 == (TTuple<FName,FAsyncPackage_*> *)0x0) {
                    pFVar34 = (FAsyncPackage *)0x0;
                  }
                  else {
                    pFVar34 = *(FAsyncPackage **)&pTVar33->field_0x8;
                  }
                  if (pFVar34 == (FAsyncPackage *)0x0) {
                    if ((pFVar32 != (FAsyncPackage *)0x0) && (!bVar24)) goto LAB_141efe3b1;
                    bVar24 = FPackageName::IsShortPackageName(local_270);
                    if ((bVar24) &&
                       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                           ("!FPackageName::IsShortPackageName(ImportPackageFName)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                                            ,0x8af,L""), bVar24)) {
                      pcVar13 = (code *)swi(3);
                      TVar26 = (*pcVar13)();
                      return TVar26;
                    }
                    if (5 < (byte)LogStreaming._0_1_) {
                      ::FName::ToString(&local_270,&local_c0);
                      ::FName::ToString(&(this->Desc).PackagePath.PackageName,&local_1b8);
                      UE::Logging::Private::BasicLog<6>
                                ((FStaticBasicLogRecord *)&PTR_u_FAsyncPackage___1507e8df0,
                                 (FLogCategoryBase *)&LogStreaming);
                      if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
                      }
                      if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
                      }
                    }
                    FPackagePath::FromPackageNameChecked(&local_220,local_258);
                    local_138.Name = local_270;
                    pFVar34 = (FAsyncPackage *)0x0;
                    local_138.PackagePath.PackageName = local_220.PackageName;
                    local_138.PackagePath.HeaderExtension = local_220.HeaderExtension;
                    local_138.RequestID = -1;
                    local_138.PackageLoadedDelegate.Ptr =
                         (TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
                          *)0x0;
                    local_138.PackageFlags = PKG_None;
                    local_138.Priority = 0;
                    local_138.PIEInstanceID = -1;
                    FLinkerInstancingContext::FLinkerInstancingContext(&local_138.InstancingContext)
                    ;
                    if ((local_138.PackagePath.PackageName == (FName)0x0) &&
                       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                           ("!PackagePath.IsEmpty()",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncPackage.h"
                                            ,0x3a,L""), bVar24)) {
                      pcVar13 = (code *)swi(3);
                      TVar26 = (*pcVar13)();
                      return TVar26;
                    }
                    pFVar32 = ::operator_new(0x608);
                    if (pFVar32 != (FAsyncPackage *)0x0) {
                      pFVar34 = FAsyncPackage(pFVar32,this->AsyncLoadingThread,&local_138,
                                              this->EDLBootNotificationManager);
                    }
                    (pFVar34->Desc).Priority = (this->Desc).Priority;
                    if (local_258 != local_270) {
                      local_248.ReferenceController =
                           (this->Linker->InstancingContext).SharedData.SharedReferenceCount.
                           ReferenceController;
                      local_250 = (this->Linker->InstancingContext).SharedData.Object;
                      if (local_248.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
                        LOCK();
                        (local_248.ReferenceController)->SharedReferenceCount =
                             (atomic<int>)
                             ((int)(local_248.ReferenceController)->SharedReferenceCount + 1);
                        UNLOCK();
                      }
                      pFVar2 = &(pFVar34->Desc).InstancingContext;
                      if (pFVar2 != (FLinkerInstancingContext *)&local_250) {
                        (pFVar2->SharedData).Object = local_250;
                        local_250 = (FSharedLinkerInstancingContextData *)0x0;
                        SharedPointerInternals::FSharedReferencer<1>::operator=
                                  (&(pFVar34->Desc).InstancingContext.SharedData.
                                    SharedReferenceCount,&local_248);
                      }
                      SharedPointerInternals::TReferenceControllerBase<1>::
                      ReleaseSharedReferenceNoInline(local_248.ReferenceController);
                    }
                    if ((bVar23) && (3 < (byte)LogStreaming._0_1_)) {
                      ::FName::ToString(&local_220.PackageName,&local_198);
                      ::FName::ToString(&(this->Desc).PackagePath.PackageName,&local_1a8);
                      UE::Logging::Private::BasicLog<4>
                                (&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
                      if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
                      }
                      if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_198.Data.AllocatorInstance.Data);
                      }
                    }
                    FLoadTimeProfilerTracePrivate::OutputAsyncPackageImportDependency(this,pFVar34);
                    bVar23 = CheckForFilePackageOpenLogCommandLine();
                    if (bVar23) {
                      this_03 = FPlatformFileManager::Get();
                      this_04 = (FPlatformFileOpenLog *)
                                FPlatformFileManager::FindPlatformFile(this_03,L"FileOpenLog");
                      if (this_04 != (FPlatformFileOpenLog *)0x0) {
                        ::FName::ToString(&local_138.Name,&local_b0);
                        ::FString::PrintfImpl(&local_188,L"%s %i");
                        if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_b0.Data.AllocatorInstance.Data);
                        }
                        FVar38.Data = (FScriptContainerElement *)L"";
                        if (local_188.Data.ArrayNum != 0) {
                          FVar38.Data = local_188.Data.AllocatorInstance.Data;
                        }
                        FPlatformFileOpenLog::AddToOpenLog(this_04,(wchar_t *)FVar38.Data);
                        if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_188.Data.AllocatorInstance.Data);
                        }
                      }
                    }
                    FAsyncLoadingThread::InsertPackage
                              (this->AsyncLoadingThread,pFVar34,false,InsertBeforeMatchingPriorities
                              );
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline
                              (local_138.InstancingContext.SharedData.SharedReferenceCount.
                               ReferenceController);
                    TVar21.Ptr = local_138.PackageLoadedDelegate.Ptr;
                    if (local_138.PackageLoadedDelegate.Ptr !=
                        (TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
                         *)0x0) {
                      TDelegateBase<FNotThreadSafeDelegateMode>::
                      ~TDelegateBase<FNotThreadSafeDelegateMode>
                                ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                                 local_138.PackageLoadedDelegate.Ptr);
                      ::operator_delete(TVar21.Ptr,0x18);
                    }
                  }
                  goto LAB_141efde0e;
                }
                if ((GIsInitialLoad == false) && (2 < (byte)LogStreaming._0_1_)) {
                  FLinkerTables::GetImportFullName
                            ((FLinkerTables *)&this->Linker->_padding_,&local_d0,local_25c);
                  ::FName::ToString(&(this->Desc).PackagePath.PackageName,&local_1c8);
                  UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming)
                  ;
                  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
                  }
                  if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_d0.Data.AllocatorInstance.Data);
                    UpdateLoadPercentage(this);
                    goto LAB_141efe3c2;
                  }
                }
LAB_141efe3b1:
                UpdateLoadPercentage(this);
              }
              else {
                if ((bVar25) &&
                   (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                       ("!PendingPackage || !bCompiledInNotDynamic",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                                        ,0x89d,L""), bVar23)) {
                  pcVar13 = (code *)swi(3);
                  TVar26 = (*pcVar13)();
                  return TVar26;
                }
LAB_141efde0e:
                AddDependentRequestsTo(this,pFVar34);
                if (pFVar34->AsyncPackageLoadingState < StartImportPackages) {
                  local_168.ImportOrExportIndex.Index = 0;
                  local_168.Phase = ImportOrExport_Create;
                  local_168.WaitingPackage.Package = pFVar34;
                  FEventLoadGraph::AddArc
                            (&this->AsyncLoadingThread->EventGraph,&local_168,&local_178);
                  pTVar3 = &pFVar34->PackagesWaitingToLinkImports;
                  pFVar12 = (pTVar3->AllocatorInstance).Data;
                  if (((pFVar12 <= (FScriptContainerElement *)&local_268) &&
                      ((FScriptContainerElement *)&local_268 <
                       pFVar12 + (longlong)(pFVar34->PackagesWaitingToLinkImports).ArrayMax * 8)) &&
                     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar23)) {
                    pcVar13 = (code *)swi(3);
                    TVar26 = (*pcVar13)();
                    return TVar26;
                  }
                  iVar29 = (pFVar34->PackagesWaitingToLinkImports).ArrayNum;
                  piVar1 = &(pFVar34->PackagesWaitingToLinkImports).ArrayMax;
                  if (iVar29 == *piVar1) {
                    iVar29 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x808,&pTVar3->AllocatorInstance,piVar1);
                  }
                  (pFVar34->PackagesWaitingToLinkImports).ArrayNum = iVar29 + 1;
                  *(FAsyncPackage **)((pTVar3->AllocatorInstance).Data + (longlong)iVar29 * 8) =
                       local_268;
                  UpdateLoadPercentage(this);
                }
                else {
                  if (ProcessNewImportsAndExports < pFVar34->AsyncPackageLoadingState)
                  goto LAB_141efe3b1;
                  local_148.WaitingPackage.Package = local_268;
                  local_148.ImportOrExportIndex.Index = 0;
                  local_158.ImportOrExportIndex.Index = 0;
                  local_148.Phase = ImportOrExport_Serialize;
                  local_158.Phase = Export_StartIO;
                  local_158.WaitingPackage.Package = pFVar34;
                  FEventLoadGraph::AddArc
                            (&this->AsyncLoadingThread->EventGraph,&local_148,&local_158);
                  UpdateLoadPercentage(this);
                }
              }
            }
          }
          else {
            bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                                ,0x889,L"");
            if (bVar23) {
              pcVar13 = (code *)swi(3);
              TVar26 = (*pcVar13)();
              return TVar26;
            }
          }
        }
      }
      else {
        bVar23 = IsFullyLoadedObj(this,this_02->XObject);
        if (!bVar23) {
          if (5 < (byte)LogStreaming._0_1_) {
            ::FName::ToString((FName *)this_02,&local_f0);
            ::FName::ToString(&(this->Desc).PackagePath.PackageName,&local_1e8);
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
            if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
            }
            if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_f0.Data.AllocatorInstance.Data);
            }
          }
          goto LAB_141efdb1e;
        }
      }
LAB_141efe3c2:
    } while (this->LoadImportIndex < (int)this->Linker->_padding_);
  }
  TVar26 = TimeOut;
  if (this->LoadImportIndex == (int)this->Linker->_padding_) {
    TVar26 = Complete;
  }
  FGCScopeGuard::~FGCScopeGuard(local_278);
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar18) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar19) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar22) && (FVar39 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_1f8.NameAndInfo.Index = FVar39.ComparisonIndex.Value;
      local_1f8.NameAndInfo.Number = FVar39.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_200);
      local_1f8.StatData.Pad[4] = '\0';
      local_1f8.StatData.Pad[5] = '\0';
      local_1f8.StatData.Pad[6] = '\0';
      local_1f8.StatData.Pad[7] = '\0';
      local_1f8.StatData.Pad[0] = local_200.s.LowPart._0_1_;
      local_1f8.StatData.Pad[1] = local_200.s.LowPart._1_1_;
      local_1f8.StatData.Pad[2] = local_200.s.LowPart._2_1_;
      local_1f8.StatData.Pad[3] = local_200.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_1f8);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return TVar26;
}

// MakeNextPrecacheRequestCurrent @ 141eff680

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EEventLoadNode": Some values do not have unique names */

void __thiscall FAsyncPackage::MakeNextPrecacheRequestCurrent(FAsyncPackage *this)

{
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_00;
  long64 *plVar1;
  int *piVar2;
  int iVar3;
  IAsyncReadRequest *pIVar4;
  FPrecacheCallbackHandler *this_01;
  long64 lVar5;
  long64 lVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  TTuple<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest> *pTVar11;
  uint uVar12;
  FAsyncArchive *this_02;
  int *piVar13;
  undefined1 local_res8 [8];
  FLLMScope local_res10 [2];
  uint local_res18 [2];
  uint local_res20 [2];
  int local_88 [2];
  IAsyncReadRequest *local_80;
  FMemScope local_78 [2];
  FString local_68;
  FEventLoadNodePtr local_58;
  
  if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3717,"MakeNextPrecacheRequestCurrent",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
               ,0xe85);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3717);
  }
  FLLMScope::FLLMScope(local_res10,AsyncLoading,false,None,Default,true);
  FMemScope::FMemScope(local_78,AsyncLoading,true);
  if (((this->ReadyPrecacheRequests).ArrayNum == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ReadyPrecacheRequests.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                         ,0xe88,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  this_02 = (FAsyncArchive *)0x0;
  if (((this->ReadyPrecacheRequests).ArrayNum < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar10 = (this->ReadyPrecacheRequests).ArrayNum;
  pIVar4 = *(IAsyncReadRequest **)
            ((this->ReadyPrecacheRequests).AllocatorInstance.Data + (longlong)iVar10 * 8 + -8);
  (this->ReadyPrecacheRequests).ArrayNum = iVar10 + -1;
  pTVar11 = TSet<TTuple<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest,0>,FDefaultSetAllocator>
                    *)&this->PrecacheRequests,pIVar4);
  if ((pTVar11 == (TTuple<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  this_00 = &this->ExportsInThisBlock;
  this->CurrentBlockOffset = *(long64 *)&pTVar11->field_0x8;
  this->CurrentBlockBytes = *(long64 *)&pTVar11->field_0x10;
  if (*(int *)&(this->ExportsInThisBlock).Elements.field_0x8 !=
      *(int *)&(this->ExportsInThisBlock).Elements.field_0x34) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements(this_00);
    iVar10 = *(int *)&(this->ExportsInThisBlock).Elements.field_0xc;
    *(undefined4 *)&(this->ExportsInThisBlock).Elements.field_0x8 = 0;
    if (iVar10 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,(ForAnyElementType *)this_00,0,
                 (int *)&(this->ExportsInThisBlock).Elements.field_0xc);
    }
    *(undefined4 *)&(this->ExportsInThisBlock).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->ExportsInThisBlock).Elements.field_0x34 = 0;
    *(undefined4 *)&(this->ExportsInThisBlock).Elements.field_0x28 = 0;
  }
  this_01 = this->AsyncLoadingThread->PrecacheHandler;
  plVar1 = &this_01->UnprocessedMemUsed;
  *plVar1 = *plVar1 - *(longlong *)&pTVar11->field_0x10;
  if ((*plVar1 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("UnprocessedMemUsed >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                         ,0x69a,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FPrecacheCallbackHandler::CheckThottleIOState(this_01,false);
  if (((this->Linker->bIsAsyncLoader == false) ||
      (this_02 = (FAsyncArchive *)this->Linker->Loader, this_02 == (FAsyncArchive *)0x0)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("AsyncLoader",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                         ,0xe92,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (pIVar4->bCompleteAndCallbackCalled == false) {
    (**(code **)(*(longlong *)pIVar4 + 0x10))(pIVar4,0);
  }
  lVar5 = this->CurrentBlockBytes;
  lVar6 = this->CurrentBlockOffset;
  if (((int)this_02->LoadPhase < 3) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("int32(LoadPhase) > int32(ELoadPhase::WaitingForHeader)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                         ,0x20e4,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  bVar9 = FAsyncArchive::PrecacheInternal(this_02,lVar6,lVar5,false,pIVar4);
  if ((2 < (byte)LogStreaming._0_1_) && (!bVar9)) {
    ::FName::ToString(&(this->Linker->PackagePath).PackageName,&local_68);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  uVar12 = *(uint *)&pTVar11->field_0x18;
  local_res18[0] = uVar12;
  if ((int)uVar12 <= *(int *)&pTVar11->field_0x1c) {
    do {
      local_res18[0] = uVar12;
      local_res20[0] = uVar12;
      if (((*(int *)&(this->ExportIndexToPrecacheRequest).field_0x8 ==
            *(int *)&(this->ExportIndexToPrecacheRequest).field_0x34) ||
          (iVar10 = TSet<TTuple<int,IAsyncReadRequest_*>,TDefaultMapHashableKeyFuncs<int,IAsyncReadRequest_*,0>,FDefaultSetAllocator>
                    ::RemoveImpl<int>((TSet<TTuple<int,IAsyncReadRequest_*>,TDefaultMapHashableKeyFuncs<int,IAsyncReadRequest_*,0>,FDefaultSetAllocator>
                                       *)&this->ExportIndexToPrecacheRequest,uVar12,
                                      (int *)local_res20), iVar10 != 1)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("ExportIndexToPrecacheRequest.Remove(Index) == 1",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                             ,0xe99,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (this_00,local_88,(bool *)local_res18);
      uVar12 = uVar12 + 1;
      local_res18[0] = uVar12;
    } while ((int)uVar12 <= *(int *)&pTVar11->field_0x1c);
  }
  piVar13 = *(int **)&pTVar11->field_0x20;
  iVar10 = *(int *)&pTVar11->field_0x28;
  piVar2 = piVar13 + iVar10;
  while( true ) {
    if (*(int *)&pTVar11->field_0x28 != iVar10) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (piVar13 == piVar2) break;
    iVar3 = *piVar13;
    if ((iVar3 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("ExportIndex >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                           ,0x6d,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_58.ImportOrExportIndex.Index = iVar3 + 1;
    local_58.Phase = Export_StartIO;
    local_58.WaitingPackage.Package = this;
    FEventLoadGraph::RemoveNode(&this->AsyncLoadingThread->EventGraph,&local_58);
    piVar13 = piVar13 + 1;
  }
  local_80 = pIVar4;
  if (*(int *)&(this->PrecacheRequests).field_0x8 != *(int *)&(this->PrecacheRequests).field_0x34) {
    uVar12 = ((uint)((ulonglong)pIVar4 >> 0x14) & 0xffff ^ (uint)((ulonglong)pIVar4 >> 4)) *
             -0x7a143595;
    uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
    TSet<TTuple<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest,0>,FDefaultSetAllocator>
    ::RemoveImpl<IAsyncReadRequest_const_*>
              ((TSet<TTuple<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest,0>,FDefaultSetAllocator>
                *)&this->PrecacheRequests,uVar12 >> 0x10 ^ uVar12,&local_80);
  }
  FMemScope::~FMemScope(local_78);
  FLLMScope::~FLLMScope(local_res10);
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// MarkNewObjectForLoadIfItIsAnExport @ 141effb90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAsyncPackage::MarkNewObjectForLoadIfItIsAnExport(FAsyncPackage *this,UObject *param_1)

{
  int local_res10;
  FString local_18;
  
  if (((*(uint *)&param_1->field_0x8 & 0x8200400) == 0) &&
     (FindExportFromObject((FLinkerLoad *)&local_res10,(UObject *)this->Linker), 0 < local_res10)) {
    if (6 < (byte)LogStreaming._0_1_) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_18,(UObject *)0x0,None);
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    UObjectBase::AtomicallySetFlags((UObjectBase *)param_1,RF_WillBeLoaded);
    return;
  }
  return;
}

// MarkRequestIDsAsComplete @ 141effc30

void __thiscall FAsyncPackage::MarkRequestIDsAsComplete(FAsyncPackage *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FAsyncLoadingThread *pFVar4;
  code *pcVar5;
  bool bVar6;
  ulong64 uVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  uint local_res10 [2];
  
  pFVar4 = this->AsyncLoadingThread;
  lpCriticalSection = &pFVar4->PendingRequestsCritical;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar1 = &this->RequestIDs;
  pFVar8 = (pTVar1->AllocatorInstance).Data;
  iVar3 = (this->RequestIDs).ArrayNum;
  pFVar2 = pFVar8 + (longlong)iVar3 * 4;
  while( true ) {
    if ((this->RequestIDs).ArrayNum != iVar3) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar2) break;
    local_res10[0] = *(uint *)pFVar8;
    uVar7 = (ulong64)(int)local_res10[0];
    if (*(int *)&(pFVar4->PendingRequests).Elements.field_0x8 !=
        *(int *)&(pFVar4->PendingRequests).Elements.field_0x34) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                (&pFVar4->PendingRequests,local_res10[0],(int *)local_res10);
    }
    FLoadTimeProfilerTracePrivate::OutputEndRequest(uVar7);
    pFVar8 = pFVar8 + 4;
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  FAsyncLoadingThread::CompleteFlushRequests(this->AsyncLoadingThread,pTVar1);
  (this->RequestIDs).ArrayNum = 0;
  if ((this->RequestIDs).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar1->AllocatorInstance,0,&(this->RequestIDs).ArrayMax);
  }
  return;
}

// NodeWillBeFiredExternally @ 141effd80

/* WARNING: Enum "EEventLoadNode": Some values do not have unique names */

void __thiscall
FAsyncPackage::NodeWillBeFiredExternally
          (FAsyncPackage *this,EEventLoadNode param_1,FPackageIndex param_2)

{
  FEventLoadNodePtr local_18;
  
  local_18.WaitingPackage.Package = this;
  local_18.ImportOrExportIndex.Index = param_2.Index;
  local_18.Phase = param_1;
  FEventLoadGraph::NodeWillBeFiredExternally(&this->AsyncLoadingThread->EventGraph,&local_18);
  return;
}

// PostLoadDeferredObjects @ 141f01410

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

Type __thiscall
FAsyncPackage::PostLoadDeferredObjects
          (FAsyncPackage *this,double param_1,bool param_2,double param_3)

{
  undefined1 *puVar1;
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  uint uVar4;
  FAsyncLoadingThread *pFVar5;
  UObjectBaseUtility *this_00;
  FScriptContainerElement *pFVar6;
  FName FVar7;
  UPackage *pUVar8;
  code *pcVar9;
  double dVar10;
  uchar auVar11 [8];
  double dVar12;
  double dVar13;
  bool bVar14;
  bool bVar15;
  undefined8 uVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  char cVar20;
  bool bVar21;
  bool bVar22;
  Type TVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  FName *pFVar27;
  FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_PostLoadObjectsGameThread> FVar28;
  uint *puVar29;
  FTlsAutoCleanup *pFVar30;
  TStatId TVar31;
  FLinkerLoad *pFVar32;
  FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_TotalPostLoadGameThread> FVar33;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FUObjectItem *pFVar34;
  FTlsAutoCleanup FVar35;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar36;
  longlong lVar37;
  ForAnyElementType FVar38;
  UObject *pUVar39;
  FName FVar40;
  int *piVar41;
  wchar_t *pwVar42;
  undefined1 local_1c6;
  FPostLoadScope local_1c5;
  undefined1 local_1c4;
  undefined1 local_1c3 [3];
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_1c0;
  undefined1 local_1b0;
  undefined1 local_1af [7];
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_1a8;
  UObjectBaseUtility *local_198;
  FTlsAutoCleanup *local_190;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *local_188;
  FName local_180;
  FColor_u_0 local_178 [2];
  FName local_170;
  byte local_168;
  FName local_160;
  FName local_158;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_148;
  FName local_138;
  LARGE_INTEGER local_130;
  LARGE_INTEGER local_128;
  LARGE_INTEGER local_120;
  LARGE_INTEGER local_118;
  FAsyncLoadingThread *local_110;
  FTlsAutoCleanup local_108;
  FTlsAutoCleanup local_100;
  LARGE_INTEGER local_f8;
  LARGE_INTEGER local_f0;
  FTlsAutoCleanup local_e8;
  LARGE_INTEGER local_e0;
  LARGE_INTEGER local_d8;
  FStatMessage local_d0;
  code *local_c0;
  undefined1 *local_b8;
  code *local_b0;
  undefined1 *local_a8;
  FName local_a0;
  FName local_98;
  FName local_90 [11];
  
  FVar28 = StatPtr_STAT_FAsyncPackage_PostLoadObjectsGameThread;
  if (StatPtr_STAT_FAsyncPackage_PostLoadObjectsGameThread ==
      (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_PostLoadObjectsGameThread>)0x0) {
    pFVar27 = ::FName::FName(&local_a0,"STAT_FAsyncPackage_PostLoadObjectsGameThread");
    FVar28 = (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_PostLoadObjectsGameThread>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_FAsyncPackage_PostLoadObjectsGameThread,*pFVar27,
                        L"PostLoadObjects GT","STATGROUP_AsyncLoadGameThread","STATCAT_Advanced",
                        L"Async Load Game Thread",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar40 = *(FName *)FVar28;
  bVar15 = false;
  bVar14 = false;
  local_158.ComparisonIndex.Value = 0;
  local_158.Number = 0;
  bVar21 = false;
  bVar17 = false;
  if ((FVar40.ComparisonIndex.Value.Value == 0) && (FVar40.Number == 0)) {
LAB_141f015a0:
    bVar15 = bVar21;
    bVar14 = bVar17;
    bVar17 = false;
    local_180 = local_158;
    FVar40 = local_158;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_178[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_178[0]._s_0,(char *)*(FName *)((longlong)FVar28 + 0x10));
      bVar15 = false;
      bVar14 = true;
      bVar21 = false;
      bVar17 = true;
      if (-1 < CpuChannel->Enabled) {
        local_160.ComparisonIndex.Value = FVar40.ComparisonIndex.Value.Value;
        local_160.Number = FVar40.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_160,(wchar_t *)*(FName *)((longlong)FVar28 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                   ,0x1b5c);
        bVar15 = true;
        bVar14 = true;
        bVar21 = true;
        bVar17 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_141f015a0;
    local_180 = FVar40;
    FThreadStats::AddMessage(FVar40,CycleScopeStart);
    bVar17 = true;
  }
  if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
    bVar21 = false;
    bVar22 = false;
  }
  else {
    bVar21 = true;
    bVar22 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId7005,"PostLoadDeferredObjectsTime",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
               ,0x1b5d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId7005);
  }
  puVar29 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_b8 = &local_1b0;
  local_c0 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  local_190 = FThreadSingletonInitializer::Get
                        ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_c0,puVar29);
  local_108 = local_190[8];
  local_100 = local_190[9];
  local_190[8] = (FTlsAutoCleanup)this;
  FVar35 = (FTlsAutoCleanup)&this->AsyncLoadingThread->_padding_;
  if (this->AsyncLoadingThread == (FAsyncLoadingThread *)0x0) {
    FVar35 = (FTlsAutoCleanup)0x0;
  }
  local_190[9] = FVar35;
  LOCK();
  this->ReentryCount = (atomic<int>)((int)this->ReentryCount + 1);
  UNLOCK();
  pFVar5 = this->AsyncLoadingThread;
  bVar19 = false;
  local_110 = pFVar5;
  bVar18 = IsInGameThread();
  if (bVar18) {
    iVar26 = pFVar5->AsyncLoadingThreadIndex;
    LOCK();
    FAsyncLoadingThread::AsyncLoadingTickCounter.Counter =
         FAsyncLoadingThread::AsyncLoadingTickCounter.Counter + 1;
    UNLOCK();
    if (((FAsyncLoadingThread::CurrentAsyncLoadingTickThreadIndex != -1) &&
        (FAsyncLoadingThread::CurrentAsyncLoadingTickThreadIndex != iVar26)) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("CurrentAsyncLoadingTickThreadIndex == INDEX_NONE || CurrentAsyncLoadingTickThreadIndex == ThreadIndex"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoadingThread.h"
                            ,0x1cb,L""), bVar19)) {
      pcVar9 = (code *)swi(3);
      TVar23 = (*pcVar9)();
      return TVar23;
    }
    bVar19 = true;
    FAsyncLoadingThread::CurrentAsyncLoadingTickThreadIndex = iVar26;
  }
  puVar29 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_a8 = local_1af;
  local_b0 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar30 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_b0,puVar29);
  FVar35 = pFVar30[0x2f];
  local_1c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188 = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)((longlong)FVar35 + 0x10);
  local_1c0.ArrayNum = 0;
  local_1c0.ArrayMax = 0;
  local_148.AllocatorInstance.Data = (local_188->AllocatorInstance).Data;
  (local_188->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar41 = (int *)((longlong)FVar35 + 0x1c);
  local_148.ArrayNum = *(int *)((longlong)FVar35 + 0x18);
  local_148.ArrayMax = *piVar41;
  *(undefined4 *)((longlong)FVar35 + 0x18) = 0;
  *piVar41 = 0;
  QueryPerformanceCounter(&local_f8);
  local_1c4 = *(undefined1 *)(local_190 + 4);
  dVar13 = (double)local_f8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  *(undefined1 *)(local_190 + 4) = 1;
  FLoadTimeProfilerTracePrivate::FPostLoadScope::FPostLoadScope(&local_1c5);
  dVar12 = __real_4170000000000000;
LAB_141f01764:
  if (((this->DeferredPostLoadObjects).ArrayNum <= this->DeferredPostLoadIndex) ||
     ((this->AsyncLoadingThread->IsLoadingSuspended).Counter != 0)) goto LAB_141f01da1;
  pUVar39 = this->LastObjectWorkWasPerformedOn;
  pwVar42 = this->LastTypeOfWorkPerformed;
  if (!param_2) {
LAB_141f017f2:
    if ((byte)LogStreaming._0_1_ < 6) {
      if (GGCSingleton->GCWantsToRunCounter != (TAtomic<int>)0x0) goto LAB_141f01da1;
    }
    else if (GGCSingleton->GCWantsToRunCounter != (TAtomic<int>)0x0) {
      UE::Logging::Private::BasicLog<6>
                ((FStaticBasicLogRecord *)&PTR_u_Timing_out_asyn_1507e7988,
                 (FLogCategoryBase *)&LogStreaming);
      goto LAB_141f01da1;
    }
    uVar4 = this->DeferredPostLoadIndex;
    this->DeferredPostLoadIndex = uVar4 + 1;
    uVar24 = 0;
    if ((int)uVar4 < (this->DeferredPostLoadObjects).ArrayNum) {
      uVar24 = ~uVar4 >> 0x1f;
    }
    if ((uVar24 == 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar18)) {
      pcVar9 = (code *)swi(3);
      TVar23 = (*pcVar9)();
      return TVar23;
    }
    FVar35 = *(FTlsAutoCleanup *)
              ((this->DeferredPostLoadObjects).AllocatorInstance.Data + (longlong)(int)uVar4 * 8);
    local_e8 = FVar35;
    if ((FVar35 == (FTlsAutoCleanup)0x0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("Object",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                            ,0x1b7f,L""), bVar18)) {
      pcVar9 = (code *)swi(3);
      TVar23 = (*pcVar9)();
      return TVar23;
    }
    cVar20 = (**(code **)(*(longlong *)FVar35 + 0x90))(FVar35);
    if (cVar20 == '\0') {
      this->DeferredPostLoadIndex = this->DeferredPostLoadIndex + -1;
      goto LAB_141f01da1;
    }
    this->LastObjectWorkWasPerformedOn = (UObject *)FVar35;
    this->LastTypeOfWorkPerformed = L"postloading_gamethread";
    TVar31.StatIdPtr = (TStatIdData *)StatPtr_STAT_FAsyncPackage_PostLoadObjectsGameThread;
    if (StatPtr_STAT_FAsyncPackage_PostLoadObjectsGameThread ==
        (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_PostLoadObjectsGameThread>)0x0) {
      pFVar27 = ::FName::FName(&local_98,"STAT_FAsyncPackage_PostLoadObjectsGameThread");
      TVar31.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)
                      &StatPtr_STAT_FAsyncPackage_PostLoadObjectsGameThread,*pFVar27,
                      L"PostLoadObjects GT","STATGROUP_AsyncLoadGameThread","STATCAT_Advanced",
                      L"Async Load Game Thread",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FScopeCycleCounterUObject::FScopeCycleCounterUObject
              ((FScopeCycleCounterUObject *)&local_170,(UObjectBaseUtility *)FVar35,TVar31);
    pFVar30 = local_190;
    local_190[7] = FVar35;
    UObject::ConditionalPostLoad((UObject *)FVar35);
    pTVar36 = local_188;
    pFVar30[7] = (FTlsAutoCleanup)0x0;
    if (local_188->ArrayNum != 0) {
      if (4 < (byte)LogStreaming._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
      }
      if ((&local_1c0 == pTVar36) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(void*)this != (void*)&Source",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x96e,L""), bVar18)) {
        pcVar9 = (code *)swi(3);
        TVar23 = (*pcVar9)();
        return TVar23;
      }
      iVar26 = pTVar36->ArrayNum;
      pTVar36 = local_188;
      if (iVar26 != 0) {
        iVar25 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (8,8,iVar26,&local_1c0.AllocatorInstance,&local_1c0.ArrayNum,
                            &local_1c0.ArrayMax);
        pTVar36 = local_188;
        memcpy(local_1c0.AllocatorInstance.Data + (longlong)iVar25 * 8,
               (local_188->AllocatorInstance).Data,(longlong)iVar26 << 3);
      }
      iVar26 = *piVar41;
      pTVar36->ArrayNum = 0;
      if (iVar26 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&pTVar36->AllocatorInstance,0,piVar41);
      }
      if (local_1c0.ArrayNum != 0) {
        do {
          pTVar36 = &this->DeferredPostLoadObjects;
          if ((pTVar36 == &local_1c0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(void*)this != (void*)&Source",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x96e,L""), bVar21)) {
            pcVar9 = (code *)swi(3);
            TVar23 = (*pcVar9)();
            return TVar23;
          }
          lVar37 = (longlong)local_1c0.ArrayNum;
          if (local_1c0.ArrayNum != 0) {
            iVar26 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (8,8,local_1c0.ArrayNum,&pTVar36->AllocatorInstance,
                                &(this->DeferredPostLoadObjects).ArrayNum,
                                &(this->DeferredPostLoadObjects).ArrayMax);
            memcpy((pTVar36->AllocatorInstance).Data + (longlong)iVar26 * 8,
                   local_1c0.AllocatorInstance.Data,lVar37 << 3);
          }
          iVar26 = local_1c0.ArrayNum;
          pFVar3 = local_1c0.AllocatorInstance.Data + (longlong)local_1c0.ArrayNum * 8;
          FVar38.Data = local_1c0.AllocatorInstance.Data;
          while( true ) {
            if (local_1c0.ArrayNum != iVar26) {
              local_1c6 = 0;
              `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (&local_1c6);
            }
            uVar16 = local_1c0._8_8_;
            if (FVar38.Data == pFVar3) break;
            this_00 = *(UObjectBaseUtility **)FVar38.Data;
            if ((this_00 != (UObjectBaseUtility *)0x0) &&
               (pFVar32 = UObjectBaseUtility::GetLinker(this_00), pFVar32 != (FLinkerLoad *)0x0)) {
              pFVar32 = UObjectBaseUtility::GetLinker(this_00);
              FLinkerLoad::Preload((FLinkerLoad *)&pFVar32->_padding_,(UObject *)this_00);
              pTVar2 = &this->PackageObjLoaded;
              local_198 = this_00;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)this_00);
              }
              pFVar6 = (pTVar2->AllocatorInstance).Data;
              if (((pFVar6 <= (FScriptContainerElement *)&local_198) &&
                  ((FScriptContainerElement *)&local_198 <
                   pFVar6 + (longlong)(this->PackageObjLoaded).ArrayMax * 8)) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar21)) {
                pcVar9 = (code *)swi(3);
                TVar23 = (*pcVar9)();
                return TVar23;
              }
              iVar25 = (this->PackageObjLoaded).ArrayNum;
              piVar41 = &(this->PackageObjLoaded).ArrayMax;
              if (iVar25 == *piVar41) {
                iVar25 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&pTVar2->AllocatorInstance,piVar41);
              }
              (this->PackageObjLoaded).ArrayNum = iVar25 + 1;
              *(UObjectBaseUtility **)((pTVar2->AllocatorInstance).Data + (longlong)iVar25 * 8) =
                   local_198;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (local_198 != (UObjectBaseUtility *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)local_198);
              }
            }
            FVar38.Data = FVar38.Data + 8;
          }
          iVar26 = local_1c0.ArrayMax;
          local_1c0._8_8_ = (ulonglong)(uint)local_1c0.ArrayMax << 0x20;
          if (((longlong)uVar16 < 0) && (iVar26 != 0)) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,0,&local_1c0.AllocatorInstance,0,&local_1c0.ArrayMax);
          }
          pTVar36 = local_188;
          if ((&local_1c0 == local_188) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(void*)this != (void*)&Source",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x96e,L""), bVar21)) {
            pcVar9 = (code *)swi(3);
            TVar23 = (*pcVar9)();
            return TVar23;
          }
          iVar26 = pTVar36->ArrayNum;
          if (iVar26 != 0) {
            iVar25 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (8,8,iVar26,&local_1c0.AllocatorInstance,&local_1c0.ArrayNum,
                                &local_1c0.ArrayMax);
            memcpy(local_1c0.AllocatorInstance.Data + (longlong)iVar25 * 8,
                   (pTVar36->AllocatorInstance).Data,(longlong)iVar26 << 3);
          }
          piVar41 = &pTVar36->ArrayMax;
          pTVar36->ArrayNum = 0;
          if (pTVar36->ArrayMax < 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,0,&pTVar36->AllocatorInstance,0,piVar41);
          }
          FVar40 = local_180;
          FVar35 = local_e8;
          bVar21 = bVar22;
        } while (local_1c0.ArrayNum != 0);
      }
    }
    this->LastObjectWorkWasPerformedOn = (UObject *)FVar35;
    UpdateLoadPercentage(this);
    if ((local_168 & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((local_168 & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((local_168 & 4) != 0) {
      FThreadStats::AddMessage(local_170,CycleScopeEnd);
    }
    local_168 = 0;
    goto LAB_141f01764;
  }
  QueryPerformanceCounter(&local_f0);
  dVar10 = (double)local_f0.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar12;
  if ((dVar10 - param_1 <= param_3) || (GWarnIfTimeLimitExceeded == 0)) {
    LastTestTime = dVar10;
    if (param_3 < dVar10 - param_1) goto LAB_141f01da1;
    goto LAB_141f017f2;
  }
  IsTimeLimitExceededPrint(param_1,dVar10,LastTestTime,param_3,pwVar42,pUVar39);
  LastTestTime = dVar10;
LAB_141f01da1:
  FLoadTimeProfilerTracePrivate::FPostLoadScope::~FPostLoadScope(&local_1c5);
  pFVar30 = local_190;
  *(undefined1 *)(local_190 + 4) = local_1c4;
  if ((this->DeferredPostLoadIndex == (this->DeferredPostLoadObjects).ArrayNum) &&
     (this->PostLoadInstanceIndex < (this->PackageObjLoaded).ArrayNum)) {
    do {
      if ((this->AsyncLoadingThread->IsLoadingSuspended).Counter != 0) break;
      pUVar39 = this->LastObjectWorkWasPerformedOn;
      pwVar42 = this->LastTypeOfWorkPerformed;
      if (param_2) {
        QueryPerformanceCounter(&local_e0);
        dVar10 = (double)local_e0.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar12;
        if ((param_3 < dVar10 - param_1) && (GWarnIfTimeLimitExceeded != 0)) {
          IsTimeLimitExceededPrint(param_1,dVar10,LastTestTime,param_3,pwVar42,pUVar39);
          LastTestTime = dVar10;
          break;
        }
        LastTestTime = dVar10;
        if (param_3 < dVar10 - param_1) break;
      }
      if ((byte)LogStreaming._0_1_ < 6) {
        if (GGCSingleton->GCWantsToRunCounter != (TAtomic<int>)0x0) break;
      }
      else if (GGCSingleton->GCWantsToRunCounter != (TAtomic<int>)0x0) {
        UE::Logging::Private::BasicLog<6>
                  ((FStaticBasicLogRecord *)&PTR_u_Timing_out_asyn_1507e7988,
                   (FLogCategoryBase *)&LogStreaming);
        break;
      }
      uVar4 = this->PostLoadInstanceIndex;
      this->PostLoadInstanceIndex = uVar4 + 1;
      uVar24 = 0;
      if ((int)uVar4 < (this->PackageObjLoaded).ArrayNum) {
        uVar24 = ~uVar4 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar9 = (code *)swi(3);
        TVar23 = (*pcVar9)();
        return TVar23;
      }
      pUVar39 = *(UObject **)
                 ((this->PackageObjLoaded).AllocatorInstance.Data + (longlong)(int)uVar4 * 8);
      if ((pUVar39 == (UObject *)0x0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("Object",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                              ,0x1bc1,L""), bVar22)) {
        pcVar9 = (code *)swi(3);
        TVar23 = (*pcVar9)();
        return TVar23;
      }
      this->LastObjectWorkWasPerformedOn = pUVar39;
      this->LastTypeOfWorkPerformed = L"postloadinginstance_gamethread";
      (**(code **)(**(longlong **)&pUVar39->field_0x10 + 0x380))
                (*(longlong **)&pUVar39->field_0x10,pUVar39);
    } while (this->PostLoadInstanceIndex < (this->PackageObjLoaded).ArrayNum);
  }
  QueryPerformanceCounter(&local_d8);
  auVar11 = (uchar  [8])
            (double)(float)((double)local_d8.QuadPart * FGenericPlatformTime::SecondsPerCycle -
                           dVar13);
  if ((double)auVar11 != 0.0) {
    FVar33 = StatPtr_STAT_FAsyncPackage_TotalPostLoadGameThread;
    if (StatPtr_STAT_FAsyncPackage_TotalPostLoadGameThread ==
        (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_TotalPostLoadGameThread>)0x0) {
      pFVar27 = ::FName::FName(local_90,"STAT_FAsyncPackage_TotalPostLoadGameThread");
      FVar33 = (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_TotalPostLoadGameThread>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_FAsyncPackage_TotalPostLoadGameThread,*pFVar27,
                          L"Total PostLoadObjects time GT","STATGROUP_AsyncLoadGameThread",
                          "STATCAT_Advanced",L"Async Load Game Thread",true,false,NumBits,false,
                          false,MCR_Invalid);
    }
    FVar7 = *(FName *)FVar33;
    local_180 = FVar7;
    if (((FVar7 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_01 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_01 == (FThreadStats *)0x0) {
        this_02 = FThreadStatsPool::Get();
        this_01 = FThreadStatsPool::GetFromPool(this_02);
      }
      local_d0.NameAndInfo.Number = FVar7.Number & 0xffffafff | 0xa000;
      local_138 = FVar7;
      local_d0.StatData.Pad = auVar11;
      local_d0.NameAndInfo.Index.Value = FVar7.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_01,&local_d0);
      FStatsTrace::Add(&local_138,(double)auVar11);
      if (this_01->ScopeCount == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  TVar23 = TimeOut;
  if (this->PostLoadInstanceIndex != (this->PackageObjLoaded).ArrayNum) goto LAB_141f02623;
  this->LastObjectWorkWasPerformedOn = (UObject *)0x0;
  this->LastTypeOfWorkPerformed = L"DeferredFinalizeObjects";
  local_1a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a8.ArrayNum = 0;
  local_1a8.ArrayMax = 0;
  if (this->DeferredFinalizeIndex < (this->DeferredFinalizeObjects).ArrayNum) {
    do {
      if ((this->AsyncLoadingThread->IsLoadingSuspended).Counter != 0) break;
      pUVar39 = this->LastObjectWorkWasPerformedOn;
      pwVar42 = this->LastTypeOfWorkPerformed;
      if (param_2) {
        QueryPerformanceCounter(&local_130);
        dVar13 = (double)local_130.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar12;
        if ((param_3 < dVar13 - param_1) && (GWarnIfTimeLimitExceeded != 0)) {
          IsTimeLimitExceededPrint(param_1,dVar13,LastTestTime,param_3,pwVar42,pUVar39);
          pUVar39 = this->LastObjectWorkWasPerformedOn;
          pwVar42 = this->LastTypeOfWorkPerformed;
          LastTestTime = dVar13;
          goto LAB_141f023db;
        }
        LastTestTime = dVar13;
        if (param_3 < dVar13 - param_1) break;
      }
      if ((byte)LogStreaming._0_1_ < 6) {
        if (GGCSingleton->GCWantsToRunCounter != (TAtomic<int>)0x0) break;
      }
      else if (GGCSingleton->GCWantsToRunCounter != (TAtomic<int>)0x0) {
        UE::Logging::Private::BasicLog<6>
                  ((FStaticBasicLogRecord *)&PTR_u_Timing_out_asyn_1507e7988,
                   (FLogCategoryBase *)&LogStreaming);
        break;
      }
      uVar4 = this->DeferredFinalizeIndex;
      this->DeferredFinalizeIndex = uVar4 + 1;
      uVar24 = 0;
      if ((int)uVar4 < (this->DeferredFinalizeObjects).ArrayNum) {
        uVar24 = ~uVar4 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar9 = (code *)swi(3);
        TVar23 = (*pcVar9)();
        return TVar23;
      }
      pUVar39 = *(UObject **)
                 ((this->DeferredFinalizeObjects).AllocatorInstance.Data + (longlong)(int)uVar4 * 8)
      ;
      if (pUVar39 != (UObject *)0x0) {
        pFVar34 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar39->field_0xc);
        FUObjectItem::ClearRootFlags(pFVar34,AsyncLoadingPhase2|AsyncLoadingPhase1);
        if ((*(uint *)&pUVar39->field_0x8 & 0x10) != 0) {
          UObject::GetDefaultSubobjects(pUVar39,&local_1a8);
          iVar26 = local_1a8.ArrayNum;
          pFVar3 = local_1a8.AllocatorInstance.Data + (longlong)local_1a8.ArrayNum * 8;
          FVar38.Data = local_1a8.AllocatorInstance.Data;
          while( true ) {
            if (local_1a8.ArrayNum != iVar26) {
              local_1c3[0] = 0;
              `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_1c3);
            }
            uVar16 = local_1a8._8_8_;
            if (FVar38.Data == pFVar3) break;
            lVar37 = *(longlong *)FVar38.Data;
            if ((lVar37 != 0) &&
               (pFVar34 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(lVar37 + 0xc)),
               ((pFVar34->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) != 0)) {
              pFVar34 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(lVar37 + 0xc));
              FUObjectItem::ClearRootFlags(pFVar34,AsyncLoadingPhase2|AsyncLoadingPhase1);
            }
            FVar38.Data = FVar38.Data + 8;
          }
          iVar26 = local_1a8.ArrayMax;
          local_1a8._8_8_ = (ulonglong)(uint)local_1a8.ArrayMax << 0x20;
          if (((longlong)uVar16 < 0) && (iVar26 != 0)) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,0,&local_1a8.AllocatorInstance,0,&local_1a8.ArrayMax);
          }
        }
      }
    } while (this->DeferredFinalizeIndex < (this->DeferredFinalizeObjects).ArrayNum);
  }
  pUVar39 = this->LastObjectWorkWasPerformedOn;
  pwVar42 = this->LastTypeOfWorkPerformed;
  if (param_2) {
LAB_141f023db:
    QueryPerformanceCounter(&local_128);
    dVar13 = (double)local_128.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar12;
    if ((dVar13 - param_1 <= param_3) || (GWarnIfTimeLimitExceeded == 0)) {
      LastTestTime = dVar13;
      if (dVar13 - param_1 <= param_3) goto LAB_141f02450;
    }
    else {
      IsTimeLimitExceededPrint(param_1,dVar13,LastTestTime,param_3,pwVar42,pUVar39);
      LastTestTime = dVar13;
    }
  }
  else {
LAB_141f02450:
    if ((5 < (byte)LogStreaming._0_1_) && (GGCSingleton->GCWantsToRunCounter != (TAtomic<int>)0x0))
    {
      UE::Logging::Private::BasicLog<6>
                ((FStaticBasicLogRecord *)&PTR_u_Timing_out_asyn_1507e7988,
                 (FLogCategoryBase *)&LogStreaming);
    }
  }
  TVar23 = TimeOut;
  if (this->DeferredFinalizeIndex == (this->DeferredFinalizeObjects).ArrayNum) {
    this->DeferredFinalizeIndex = 0;
    (this->DeferredFinalizeObjects).ArrayNum = 0;
    if ((this->DeferredFinalizeObjects).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->DeferredFinalizeObjects).AllocatorInstance,0,
                 &(this->DeferredFinalizeObjects).ArrayMax);
    }
    pUVar8 = this->LinkerRoot;
    TVar23 = Complete;
    if ((pUVar8 != (UPackage *)0x0) && (this->bLoadHasFailed == false)) {
      this->LastObjectWorkWasPerformedOn = (UObject *)pUVar8;
      this->LastTypeOfWorkPerformed = L"CreateClustersFromPackage";
      UObjectBaseUtility::AtomicallyClearInternalFlags
                ((UObjectBaseUtility *)pUVar8,AsyncLoadingPhase2|AsyncLoadingPhase1);
      this->LinkerRoot->bHasBeenFullyLoaded = '\x01';
      pUVar8 = this->LinkerRoot;
      QueryPerformanceCounter(&local_120);
      pUVar8->LoadTime =
           (float)(((double)local_120.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar12) -
                  this->LoadStartTime);
      if (this->Linker != (FLinkerLoad *)0x0) {
        CreateClustersFromPackage(this->Linker,&this->DeferredClusterObjects);
      }
      pUVar39 = this->LastObjectWorkWasPerformedOn;
      pwVar42 = this->LastTypeOfWorkPerformed;
      if (param_2) {
        QueryPerformanceCounter(&local_118);
        dVar12 = (double)local_118.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar12;
        if ((dVar12 - param_1 <= param_3) || (GWarnIfTimeLimitExceeded == 0)) {
          LastTestTime = dVar12;
          if (dVar12 - param_1 <= param_3) goto LAB_141f025e0;
        }
        else {
          IsTimeLimitExceededPrint(param_1,dVar12,LastTestTime,param_3,pwVar42,pUVar39);
          LastTestTime = dVar12;
        }
      }
      else {
LAB_141f025e0:
        if ((5 < (byte)LogStreaming._0_1_) &&
           (GGCSingleton->GCWantsToRunCounter != (TAtomic<int>)0x0)) {
          UE::Logging::Private::BasicLog<6>
                    ((FStaticBasicLogRecord *)&PTR_u_Timing_out_asyn_1507e7988,
                     (FLogCategoryBase *)&LogStreaming);
        }
      }
    }
  }
  pFVar30 = local_190;
  if (local_1a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.AllocatorInstance.Data);
    pFVar30 = local_190;
  }
LAB_141f02623:
  LOCK();
  this->ReentryCount = (atomic<int>)((int)this->ReentryCount + -1);
  UNLOCK();
  TArray<UObject_*,TSizedDefaultAllocator<32>_>::Append<UObject_*,TSizedDefaultAllocator<32>_>
            (local_188,&local_148);
  if (local_148.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.AllocatorInstance.Data);
  }
  if (local_1c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c0.AllocatorInstance.Data);
  }
  if (bVar19) {
    FAsyncLoadingThread::LeaveAsyncLoadingTick(local_110->AsyncLoadingThreadIndex);
  }
  pFVar30[8] = local_108;
  pFVar30[9] = local_100;
  if (bVar21) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar14) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar17) {
    FThreadStats::AddMessage(FVar40,CycleScopeEnd);
  }
  return TVar23;
}

// PostLoadObjects @ 141f02700

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall FAsyncPackage::PostLoadObjects(FAsyncPackage *this)

{
  int *piVar1;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar2;
  double dVar3;
  undefined1 uVar4;
  uint uVar5;
  FTlsAutoCleanup FVar6;
  UObject *pUVar7;
  wchar_t *pwVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  double dVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  char cVar19;
  Type TVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  FName *pFVar24;
  FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_PostLoadObjects> FVar25;
  uint *puVar26;
  FTlsAutoCleanup *pFVar27;
  FTlsAutoCleanup *pFVar28;
  FAsyncLoadingThreadSettings *pFVar29;
  FText *pFVar30;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar31;
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *pTVar32;
  Type TVar33;
  ForAnyElementType *pFVar34;
  double dVar35;
  FPostLoadScope local_res20 [8];
  FGCScopeGuard local_197 [7];
  FTlsAutoCleanup local_190;
  undefined1 local_188;
  undefined1 local_187 [7];
  FTlsAutoCleanup local_180;
  FColor_u_0 local_178 [2];
  FName local_170;
  FTlsAutoCleanup *local_168;
  FName local_160;
  LARGE_INTEGER local_150;
  LARGE_INTEGER local_148;
  FStatMessage local_140;
  code *local_130;
  undefined1 *local_128;
  code *local_120;
  undefined1 *local_118;
  FSlowTask local_108;
  char local_a8;
  FName local_98;
  FText local_90 [5];
  
  TVar33 = TimeOut;
  TVar20 = TimeOut;
  FVar25 = StatPtr_STAT_FAsyncPackage_PostLoadObjects;
  if (StatPtr_STAT_FAsyncPackage_PostLoadObjects ==
      (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_PostLoadObjects>)0x0) {
    pFVar24 = ::FName::FName(&local_98,"STAT_FAsyncPackage_PostLoadObjects");
    FVar25 = (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_PostLoadObjects>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FAsyncPackage_PostLoadObjects,
                        *pFVar24,L"PostLoadObjects AsyncPackage","STATGROUP_AsyncLoad",
                        "STATCAT_Advanced",L"Async Load",false,true,ST_int64,true,false,MCR_Invalid)
    ;
  }
  FVar31 = *(FName *)FVar25;
  bVar14 = false;
  bVar13 = false;
  local_160.ComparisonIndex.Value = 0;
  local_160.Number = 0;
  bVar12 = false;
  bVar16 = false;
  if ((FVar31.ComparisonIndex.Value.Value != 0) || (FVar31.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_178[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_178[0]._s_0,(char *)*(FName *)((longlong)FVar25 + 0x10));
      bVar14 = false;
      bVar13 = true;
      bVar12 = false;
      bVar16 = true;
      if (-1 < CpuChannel->Enabled) {
        local_170.ComparisonIndex.Value = FVar31.ComparisonIndex.Value.Value;
        local_170.Number = FVar31.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_170,(wchar_t *)*(FName *)((longlong)FVar25 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                   ,0x1afa);
        bVar14 = true;
        bVar13 = true;
        bVar12 = true;
        bVar16 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar31,CycleScopeStart);
      bVar16 = true;
      goto LAB_141f02869;
    }
  }
  bVar14 = bVar12;
  bVar13 = bVar16;
  bVar16 = false;
  FVar31 = local_160;
LAB_141f02869:
  if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId6908,"PostLoadObjectsTime",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
               ,0x1afc);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId6908);
  }
  FGCScopeGuard::FGCScopeGuard(local_197);
  puVar26 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_128 = &local_188;
  local_130 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  pFVar27 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_130,puVar26);
  uVar4 = *(undefined1 *)(pFVar27 + 4);
  *(undefined1 *)(pFVar27 + 4) = 1;
  local_168 = pFVar27;
  puVar26 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_118 = local_187;
  local_120 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  pFVar28 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_120,puVar26);
  FVar6 = pFVar28[0x2f];
  pFVar34 = (ForAnyElementType *)((longlong)FVar6 + 0x10);
  if (*(int *)((longlong)FVar6 + 0x18) == 0) {
    if (GEventDrivenLoaderEnabled != false) {
      this->PreLoadIndex = (this->PackageObjLoaded).ArrayNum;
    }
    pFVar29 = FAsyncLoadingThreadSettings::Get();
    bVar17 = pFVar29->bAsyncPostLoadEnabled;
    local_a8 = '\0';
    bVar18 = IsInGameThread();
    if (bVar18) {
      pFVar30 = FText::AsLocalizable_Advanced_LocText
                          (local_90,L"AsyncLoading",L"PostloadingObjects",L"Postloading objects...")
      ;
      if (local_a8 != '\0') {
        FSlowTask::Destroy(&local_108);
        if (local_108.FrameMessage.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_108.FrameMessage.TextData.Reference + 0x10))();
        }
        if (local_108.DefaultMessage.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_108.DefaultMessage.TextData.Reference + 0x10))();
        }
      }
      FSlowTask::FSlowTask(&local_108,__real_3f800000,pFVar30,true,GWarn);
      FSlowTask::Initialize(&local_108);
      local_a8 = '\x01';
      if (local_90[0].TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_90[0].TextData.Reference + 0x10))();
      }
    }
    FLoadTimeProfilerTracePrivate::FPostLoadScope::FPostLoadScope(local_res20);
    dVar15 = __real_4170000000000000;
    TVar20 = TVar33;
    if ((this->PostLoadIndex < (this->PackageObjLoaded).ArrayNum) &&
       (this->PostLoadIndex < this->PreLoadIndex)) {
      while ((this->AsyncLoadingThread->IsLoadingSuspended).Counter == 0) {
        pUVar7 = this->LastObjectWorkWasPerformedOn;
        pwVar8 = this->LastTypeOfWorkPerformed;
        dVar3 = this->TickStartTime;
        dVar11 = (double)this->TimeLimit;
        if (this->bUseTimeLimit != false) {
          QueryPerformanceCounter(&local_150);
          dVar10 = (double)local_150.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar15;
          dVar35 = dVar10 - dVar3;
          if ((dVar11 < dVar35) && (GWarnIfTimeLimitExceeded != 0)) {
            IsTimeLimitExceededPrint(dVar3,dVar10,LastTestTime,dVar11,pwVar8,pUVar7);
            LastTestTime = dVar10;
            break;
          }
          LastTestTime = dVar10;
          if (dVar11 < dVar35) break;
        }
        if ((byte)LogStreaming._0_1_ < 6) {
          if (GGCSingleton->GCWantsToRunCounter != (TAtomic<int>)0x0) break;
        }
        else if (GGCSingleton->GCWantsToRunCounter != (TAtomic<int>)0x0) {
          UE::Logging::Private::BasicLog<6>
                    ((FStaticBasicLogRecord *)&PTR_u_Timing_out_asyn_1507e7988,
                     (FLogCategoryBase *)&LogStreaming);
          break;
        }
        uVar5 = this->PostLoadIndex;
        this->PostLoadIndex = uVar5 + 1;
        uVar22 = 0;
        if ((int)uVar5 < (this->PackageObjLoaded).ArrayNum) {
          uVar22 = ~uVar5 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar9 = (code *)swi(3);
          TVar20 = (*pcVar9)();
          return TVar20;
        }
        local_190 = *(FTlsAutoCleanup *)
                     ((this->PackageObjLoaded).AllocatorInstance.Data + (longlong)(int)uVar5 * 8);
        if (local_190 != (FTlsAutoCleanup)0x0) {
          cVar19 = (**(code **)(*(longlong *)local_190 + 0x90))();
          if (cVar19 == '\0') {
            this->PostLoadIndex = this->PostLoadIndex + -1;
            break;
          }
          if ((bVar17 == false) ||
             (bVar18 = CanPostLoadOnAsyncLoadingThread((UObject *)local_190), !bVar18)) {
            pTVar2 = &this->DeferredPostLoadObjects;
            pFVar27 = (FTlsAutoCleanup *)(pTVar2->AllocatorInstance).Data;
            if ((pFVar27 <= &local_190) &&
               ((&local_190 < pFVar27 + (this->DeferredPostLoadObjects).ArrayMax &&
                (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar18)))) {
              pcVar9 = (code *)swi(3);
              TVar20 = (*pcVar9)();
              return TVar20;
            }
            iVar23 = (this->DeferredPostLoadObjects).ArrayNum;
            piVar1 = &(this->DeferredPostLoadObjects).ArrayMax;
            if (iVar23 == *piVar1) {
              iVar23 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&pTVar2->AllocatorInstance,piVar1);
            }
            (this->DeferredPostLoadObjects).ArrayNum = iVar23 + 1;
            *(FTlsAutoCleanup *)((pTVar2->AllocatorInstance).Data + (longlong)iVar23 * 8) =
                 local_190;
          }
          else {
            if (((GEventDrivenLoaderEnabled != false) &&
                ((*(uint *)((longlong)local_190 + 8) >> 10 & 1) != 0)) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("!GEventDrivenLoaderEnabled || !Object->HasAnyFlags(RF_NeedLoad)"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                                    ,0x1b2c,L""), bVar18)) {
              pcVar9 = (code *)swi(3);
              TVar20 = (*pcVar9)();
              return TVar20;
            }
            pFVar27 = local_168;
            local_168[7] = local_190;
            UObject::ConditionalPostLoad((UObject *)local_190);
            pFVar27[7] = (FTlsAutoCleanup)0x0;
            this->LastObjectWorkWasPerformedOn = (UObject *)local_190;
            this->LastTypeOfWorkPerformed = L"postloading_async";
            if (*(int *)((longlong)FVar6 + 0x18) != 0) {
              pTVar32 = &this->PackageObjLoaded;
              if ((pTVar32 == (TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *)pFVar34) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(void*)this != (void*)&Source",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x96e,L""), bVar17)) {
                pcVar9 = (code *)swi(3);
                TVar20 = (*pcVar9)();
                return TVar20;
              }
              iVar23 = *(int *)((longlong)FVar6 + 0x18);
              if (iVar23 != 0) {
                iVar21 = UE::Core::Private::
                         ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (8,8,iVar23,&pTVar32->AllocatorInstance,
                                    &(this->PackageObjLoaded).ArrayNum,
                                    &(this->PackageObjLoaded).ArrayMax);
                ConstructItems<TObjectPtr<UObject>,UObject_*,int>
                          ((pTVar32->AllocatorInstance).Data + (longlong)iVar21 * 8,
                           (UObject **)pFVar34->Data,iVar23);
              }
              *(undefined4 *)((longlong)FVar6 + 0x18) = 0;
              if (*(int *)((longlong)FVar6 + 0x1c) < 0) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,8,0,pFVar34,0,(int *)((longlong)FVar6 + 0x1c));
              }
              goto LAB_141f03068;
            }
          }
          pTVar32 = &this->DeferredFinalizeObjects;
          local_180 = local_190;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_190 != (FTlsAutoCleanup)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_190);
          }
          pFVar27 = (FTlsAutoCleanup *)(pTVar32->AllocatorInstance).Data;
          if (((pFVar27 <= &local_180) &&
              (&local_180 < pFVar27 + (this->DeferredFinalizeObjects).ArrayMax)) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar18)) {
            pcVar9 = (code *)swi(3);
            TVar20 = (*pcVar9)();
            return TVar20;
          }
          iVar23 = (this->DeferredFinalizeObjects).ArrayNum;
          piVar1 = &(this->DeferredFinalizeObjects).ArrayMax;
          if (iVar23 == *piVar1) {
            iVar23 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&pTVar32->AllocatorInstance,piVar1);
          }
          (this->DeferredFinalizeObjects).ArrayNum = iVar23 + 1;
          *(FTlsAutoCleanup *)((pTVar32->AllocatorInstance).Data + (longlong)iVar23 * 8) = local_180
          ;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_180 != (FTlsAutoCleanup)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_180);
          }
          bVar18 = UObjectBase::IsValidLowLevelFast((UObjectBase *)local_190,true);
          if ((!bVar18) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Object->IsValidLowLevelFast()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                                  ,0x1b43,L""), bVar18)) {
            pcVar9 = (code *)swi(3);
            TVar20 = (*pcVar9)();
            return TVar20;
          }
          AddObjectReference(this,(UObject *)local_190);
          if (local_a8 != '\0') {
            FSlowTask::TickProgress(&local_108);
          }
        }
        if (((this->PackageObjLoaded).ArrayNum <= this->PostLoadIndex) ||
           (this->PreLoadIndex <= this->PostLoadIndex)) break;
      }
    }
    pTVar32 = &this->PackageObjLoaded;
    if ((pTVar32 == (TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *)pFVar34) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(void*)this != (void*)&Source",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x96e,L""), bVar17)) {
      pcVar9 = (code *)swi(3);
      TVar20 = (*pcVar9)();
      return TVar20;
    }
    iVar23 = *(int *)((longlong)FVar6 + 0x18);
    if (iVar23 != 0) {
      iVar21 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (8,8,iVar23,&pTVar32->AllocatorInstance,&(this->PackageObjLoaded).ArrayNum,
                          &(this->PackageObjLoaded).ArrayMax);
      ConstructItems<TObjectPtr<UObject>,UObject_*,int>
                ((pTVar32->AllocatorInstance).Data + (longlong)iVar21 * 8,(UObject **)pFVar34->Data,
                 iVar23);
    }
    *(undefined4 *)((longlong)FVar6 + 0x18) = 0;
    if (*(int *)((longlong)FVar6 + 0x1c) < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,pFVar34,0,(int *)((longlong)FVar6 + 0x1c));
    }
    iVar23 = (this->PackageObjLoaded).ArrayNum;
    pFVar27 = local_168;
    if ((this->PreLoadIndex == iVar23) && (this->PostLoadIndex == iVar23)) {
      TVar20 = Complete;
    }
LAB_141f03068:
    FLoadTimeProfilerTracePrivate::FPostLoadScope::~FPostLoadScope(local_res20);
    if (local_a8 != '\0') {
      FSlowTask::Destroy(&local_108);
      if (local_108.FrameMessage.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_108.FrameMessage.TextData.Reference + 0x10))();
      }
      if (local_108.DefaultMessage.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_108.DefaultMessage.TextData.Reference + 0x10))();
      }
    }
  }
  else {
    pTVar32 = &this->PackageObjLoaded;
    if ((pTVar32 == (TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *)pFVar34) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(void*)this != (void*)&Source",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x96e,L""), bVar17)) {
      pcVar9 = (code *)swi(3);
      TVar20 = (*pcVar9)();
      return TVar20;
    }
    iVar23 = *(int *)((longlong)FVar6 + 0x18);
    if (iVar23 != 0) {
      iVar21 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (8,8,iVar23,&pTVar32->AllocatorInstance,&(this->PackageObjLoaded).ArrayNum,
                          &(this->PackageObjLoaded).ArrayMax);
      ConstructItems<TObjectPtr<UObject>,UObject_*,int>
                ((pTVar32->AllocatorInstance).Data + (longlong)iVar21 * 8,(UObject **)pFVar34->Data,
                 iVar23);
    }
    *(undefined4 *)((longlong)FVar6 + 0x18) = 0;
    if (*(int *)((longlong)FVar6 + 0x1c) < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,pFVar34,0,(int *)((longlong)FVar6 + 0x1c));
    }
  }
  *(undefined1 *)(pFVar27 + 4) = uVar4;
  FGCScopeGuard::~FGCScopeGuard(local_197);
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar13) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar16) && (FVar31 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_140.NameAndInfo.Index = FVar31.ComparisonIndex.Value;
      local_140.NameAndInfo.Number = FVar31.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_148);
      local_140.StatData.Pad[4] = '\0';
      local_140.StatData.Pad[5] = '\0';
      local_140.StatData.Pad[6] = '\0';
      local_140.StatData.Pad[7] = '\0';
      local_140.StatData.Pad[0] = local_148.s.LowPart._0_1_;
      local_140.StatData.Pad[1] = local_148.s.LowPart._1_1_;
      local_140.StatData.Pad[2] = local_148.s.LowPart._2_1_;
      local_140.StatData.Pad[3] = local_148.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_140);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return TVar20;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return TVar20;
}

// PreLoadObjects @ 141f03200

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall FAsyncPackage::PreLoadObjects(FAsyncPackage *this)

{
  int *piVar1;
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *pTVar2;
  double dVar3;
  int iVar4;
  FTlsAutoCleanup FVar5;
  UObject *pUVar6;
  wchar_t *pwVar7;
  UObjectBaseUtility *this_00;
  code *pcVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  double dVar15;
  bool bVar16;
  Type TVar17;
  int iVar18;
  uint uVar19;
  FName *pFVar20;
  FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_PreLoadObjects> FVar21;
  uint *puVar22;
  FTlsAutoCleanup *pFVar23;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FLinkerLoad *pFVar24;
  uint uVar25;
  FNameEntryId FVar26;
  FName FVar27;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar28;
  double dVar29;
  FGCScopeGuard local_res8 [8];
  uint local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18 [2];
  FName local_res20;
  LARGE_INTEGER local_d8;
  LARGE_INTEGER local_d0;
  FName local_c8;
  FName local_c0;
  FStatMessage local_b0;
  code *local_a0;
  uint *local_98;
  
  if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId6827,"PreLoadObjectsTime",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
               ,0x1aab);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId6827);
  }
  TVar17 = TimeOut;
  FVar21 = StatPtr_STAT_FAsyncPackage_PreLoadObjects;
  if (StatPtr_STAT_FAsyncPackage_PreLoadObjects ==
      (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_PreLoadObjects>)0x0) {
    pFVar20 = ::FName::FName(&local_c8,"STAT_FAsyncPackage_PreLoadObjects");
    FVar21 = (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_PreLoadObjects>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FAsyncPackage_PreLoadObjects,
                        *pFVar20,L"PreLoadObjects AsyncPackage","STATGROUP_AsyncLoad",
                        "STATCAT_Advanced",L"Async Load",false,true,ST_int64,true,false,MCR_Invalid)
    ;
  }
  FVar27 = *(FName *)FVar21;
  bVar11 = false;
  bVar14 = false;
  local_c0.ComparisonIndex.Value = 0;
  local_c0.Number = 0;
  FVar26 = FVar27.ComparisonIndex.Value;
  uVar25 = FVar27.Number;
  if ((FVar26.Value != 0) || (uVar25 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar21 + 0x10));
      bVar11 = false;
      bVar14 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar26.Value;
        local_res20.Number = uVar25;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar21 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                   ,0x1aac);
        bVar11 = true;
        bVar14 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res10 = FVar26.Value;
      uStackX_14 = uVar25;
      FThreadStats::AddMessage(FVar27,CycleScopeStart);
      bVar12 = true;
      goto LAB_141f033be;
    }
  }
  bVar12 = false;
  FVar27 = local_c0;
LAB_141f033be:
  FGCScopeGuard::FGCScopeGuard(local_res8);
  puVar22 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_98 = &local_res10;
  local_a0 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar23 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_a0,puVar22);
  FVar5 = pFVar23[0x2f];
  pTVar28 = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)((longlong)FVar5 + 0x10);
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>::
  Append<UObject_*,TSizedDefaultAllocator<32>_>(&this->PackageObjLoaded,pTVar28);
  *(undefined4 *)((longlong)FVar5 + 0x18) = 0;
  if (*(int *)((longlong)FVar5 + 0x1c) < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)pTVar28,0,(int *)((longlong)FVar5 + 0x1c));
  }
  dVar15 = __real_4170000000000000;
  if (this->PreLoadIndex < (this->PackageObjLoaded).ArrayNum) {
    do {
      if ((this->AsyncLoadingThread->IsLoadingSuspended).Counter != 0) break;
      pUVar6 = this->LastObjectWorkWasPerformedOn;
      pwVar7 = this->LastTypeOfWorkPerformed;
      dVar3 = this->TickStartTime;
      dVar10 = (double)this->TimeLimit;
      if (this->bUseTimeLimit != false) {
        QueryPerformanceCounter(&local_d8);
        dVar9 = (double)local_d8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar15;
        dVar29 = dVar9 - dVar3;
        if ((dVar10 < dVar29) && (GWarnIfTimeLimitExceeded != 0)) {
          IsTimeLimitExceededPrint(dVar3,dVar9,LastTestTime,dVar10,pwVar7,pUVar6);
          LastTestTime = dVar9;
          break;
        }
        LastTestTime = dVar9;
        if (dVar10 < dVar29) break;
      }
      if ((byte)LogStreaming._0_1_ < 6) {
        if (GGCSingleton->GCWantsToRunCounter != (TAtomic<int>)0x0) break;
      }
      else if (GGCSingleton->GCWantsToRunCounter != (TAtomic<int>)0x0) {
        UE::Logging::Private::BasicLog<6>
                  ((FStaticBasicLogRecord *)&PTR_u_Timing_out_asyn_1507e7988,
                   (FLogCategoryBase *)&LogStreaming);
        break;
      }
      uVar25 = this->PreLoadIndex;
      this->PreLoadIndex = uVar25 + 1;
      uVar19 = 0;
      if ((int)uVar25 < (this->PackageObjLoaded).ArrayNum) {
        uVar19 = ~uVar25 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar8 = (code *)swi(3);
        TVar17 = (*pcVar8)();
        return TVar17;
      }
      this_00 = *(UObjectBaseUtility **)
                 ((this->PackageObjLoaded).AllocatorInstance.Data + (longlong)(int)uVar25 * 8);
      if ((this_00 != (UObjectBaseUtility *)0x0) &&
         (pFVar24 = UObjectBaseUtility::GetLinker(this_00), pFVar24 != (FLinkerLoad *)0x0)) {
        pFVar24 = UObjectBaseUtility::GetLinker(this_00);
        FLinkerLoad::Preload((FLinkerLoad *)&pFVar24->_padding_,(UObject *)this_00);
        this->LastObjectWorkWasPerformedOn = (UObject *)this_00;
        this->LastTypeOfWorkPerformed = L"preloading";
      }
    } while (this->PreLoadIndex < (this->PackageObjLoaded).ArrayNum);
  }
  pTVar2 = &this->PackageObjLoaded;
  if ((pTVar2 == (TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *)pTVar28) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(void*)this != (void*)&Source",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x96e,L""), bVar16)) {
    pcVar8 = (code *)swi(3);
    TVar17 = (*pcVar8)();
    return TVar17;
  }
  iVar4 = *(int *)((longlong)FVar5 + 0x18);
  if (iVar4 != 0) {
    iVar18 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (8,8,iVar4,&pTVar2->AllocatorInstance,&(this->PackageObjLoaded).ArrayNum,
                        &(this->PackageObjLoaded).ArrayMax);
    ConstructItems<TObjectPtr<UObject>,UObject_*,int>
              ((pTVar2->AllocatorInstance).Data + (longlong)iVar18 * 8,
               (UObject **)(pTVar28->AllocatorInstance).Data,iVar4);
  }
  *(undefined4 *)((longlong)FVar5 + 0x18) = 0;
  if (*(int *)((longlong)FVar5 + 0x1c) < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)pTVar28,0,(int *)((longlong)FVar5 + 0x1c));
  }
  if (this->PreLoadIndex == (this->PackageObjLoaded).ArrayNum) {
    TVar17 = Complete;
  }
  FGCScopeGuard::~FGCScopeGuard(local_res8);
  if (bVar14) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar12) && (FVar27 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_b0.NameAndInfo.Index = FVar27.ComparisonIndex.Value;
      local_b0.NameAndInfo.Number = FVar27.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_d0);
      local_b0.StatData.Pad[4] = '\0';
      local_b0.StatData.Pad[5] = '\0';
      local_b0.StatData.Pad[6] = '\0';
      local_b0.StatData.Pad[7] = '\0';
      local_b0.StatData.Pad[0] = local_d0.s.LowPart._0_1_;
      local_b0.StatData.Pad[1] = local_d0.s.LowPart._1_1_;
      local_b0.StatData.Pad[2] = local_d0.s.LowPart._2_1_;
      local_b0.StatData.Pad[3] = local_d0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_b0);
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
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return TVar17;
}

// PrecacheRequestReady @ 141f04290

long64 __thiscall
FAsyncPackage::PrecacheRequestReady(FAsyncPackage *this,IAsyncReadRequest *param_1)

{
  int *piVar1;
  TArray<IAsyncReadRequest_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  long64 lVar7;
  TTuple<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest> *pTVar8;
  IAsyncReadRequest *local_res10 [3];
  
  pTVar2 = &this->ReadyPrecacheRequests;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  local_res10[0] = param_1;
  if ((pFVar3 <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 <
      pFVar3 + (longlong)(this->ReadyPrecacheRequests).ArrayMax * 8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      lVar7 = (*pcVar4)();
      return lVar7;
    }
  }
  iVar6 = (this->ReadyPrecacheRequests).ArrayNum;
  piVar1 = &(this->ReadyPrecacheRequests).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->ReadyPrecacheRequests).ArrayNum = iVar6 + 1;
  *(IAsyncReadRequest **)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_res10[0];
  pTVar8 = TSet<TTuple<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest,0>,FDefaultSetAllocator>
                   *)&this->PrecacheRequests,local_res10[0]);
  if (pTVar8 == (TTuple<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      lVar7 = (*pcVar4)();
      return lVar7;
    }
  }
  lVar7 = *(long64 *)&pTVar8->field_0x10;
  ConditionalQueueProcessImportsAndExports(this,false);
  return lVar7;
}

// ProcessImportsAndExports_Event @ 141f05e00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "EEventLoadNode": Some values do not have unique names */

Type __thiscall FAsyncPackage::ProcessImportsAndExports_Event(FAsyncPackage *this)

{
  double dVar1;
  UObject *pUVar2;
  wchar_t *pwVar3;
  FAsyncLoadingThread *pFVar4;
  FPrecacheCallbackHandler *pFVar5;
  FLinkerLoad *pFVar6;
  longlong lVar7;
  longlong lVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  double dVar13;
  bool bVar14;
  Type TVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  uint uVar20;
  int iVar21;
  double dVar22;
  FGCScopeGuard local_res8 [8];
  FGCScopeGuard local_res10 [8];
  FGCScopeGuard local_res18 [8];
  uint local_res20 [2];
  uint local_f8;
  uint local_f4;
  int local_f0 [2];
  uint local_e8 [2];
  LARGE_INTEGER local_e0;
  FEventLoadNodePtr local_d8;
  FEventLoadNodePtr local_c8;
  FEventLoadNodePtr local_b8;
  FEventLoadNodePtr local_a8;
  FString local_98 [5];
  
  if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3761,"ProcessImportsAndExports_Event",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
               ,0xeb1);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3761);
  }
  if ((this->Linker == (FLinkerLoad *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Linker",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                          ,0xeb2,L""), bVar14)) {
    pcVar9 = (code *)swi(3);
    TVar15 = (*pcVar9)();
    return TVar15;
  }
  dVar13 = __real_4170000000000000;
  iVar21 = 0;
  uVar20 = 1;
  do {
    if ((this->AsyncLoadingThread->IsLoadingSuspended).Counter != 0) {
LAB_141f05fb6:
      if (bVar12) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return (uVar20 ^ 1) * 2;
    }
    pUVar2 = this->LastObjectWorkWasPerformedOn;
    pwVar3 = this->LastTypeOfWorkPerformed;
    dVar1 = this->TickStartTime;
    dVar11 = (double)this->TimeLimit;
    if (this->bUseTimeLimit != false) {
      QueryPerformanceCounter(&local_e0);
      dVar10 = (double)local_e0.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar13;
      dVar22 = dVar10 - dVar1;
      if ((dVar11 < dVar22) && (GWarnIfTimeLimitExceeded != 0)) {
        IsTimeLimitExceededPrint(dVar1,dVar10,LastTestTime,dVar11,pwVar3,pUVar2);
        LastTestTime = dVar10;
        goto LAB_141f05fb6;
      }
      LastTestTime = dVar10;
      if (dVar11 < dVar22) goto LAB_141f05fb6;
    }
    if ((byte)LogStreaming._0_1_ < 6) {
      if (GGCSingleton->GCWantsToRunCounter != (TAtomic<int>)0x0) goto LAB_141f05fb6;
    }
    else if (GGCSingleton->GCWantsToRunCounter != (TAtomic<int>)0x0) {
      UE::Logging::Private::BasicLog<6>
                ((FStaticBasicLogRecord *)&PTR_u_Timing_out_asyn_1507e7988,
                 (FLogCategoryBase *)&LogStreaming);
      goto LAB_141f05fb6;
    }
    if (((char)uVar20 == '\0') ||
       (((iVar21 != 0 && (GRandomizeLoadOrder != 0)) || (iVar21 = iVar21 + 1, iVar21 == 0x14))))
    goto LAB_141f05fb6;
    uVar20 = 0;
    if ((*(int *)&(this->PrecacheRequests).field_0x8 - *(int *)&(this->PrecacheRequests).field_0x34
         < GMaxPrecacheRequestsInFlight) &&
       (*(int *)&(this->ExportsThatCanHaveIOStarted).field_0x8 != 0)) {
      pFVar4 = this->AsyncLoadingThread;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        bVar14 = CheckForFileOpenLogCommandLine();
        if (bVar14) {
LAB_141f0678a:
          bDoingLoadOrder = true;
        }
        else {
          bVar14 = CheckForFilePackageOpenLogCommandLine();
          bDoingLoadOrder = false;
          if (bVar14) goto LAB_141f0678a;
        }
        _Init_thread_footer(&::_TSS0);
      }
      if ((bDoingLoadOrder != false) &&
         (pFVar5 = pFVar4->PrecacheHandler,
         0x3ff < *(int *)&(pFVar5->WaitingPackages).field_0x8 -
                 *(int *)&(pFVar5->WaitingPackages).field_0x34)) goto LAB_141f060ef;
LAB_141f060ca:
      uVar20 = 1;
      StartPrecacheRequest(this);
      this->LastObjectWorkWasPerformedOn = (UObject *)0x0;
      this->LastTypeOfWorkPerformed = L"ProcessImportsAndExports Start IO";
    }
    else {
LAB_141f060ef:
      if (*(int *)&(this->ImportsThatAreNowCreated).field_0x8 == 0) {
        if (*(int *)&(this->ImportsThatAreNowSerialized).field_0x8 == 0) {
          if (*(int *)&(this->ExportsThatCanBeCreated).field_0x8 == 0) {
            if (*(int *)&(this->ExportsThatCanHaveIOStarted).field_0x8 != 0) {
              pFVar4 = this->AsyncLoadingThread;
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
                bVar14 = CheckForFileOpenLogCommandLine();
                if (bVar14) {
LAB_141f067d2:
                  bDoingLoadOrder = true;
                }
                else {
                  bVar14 = CheckForFilePackageOpenLogCommandLine();
                  bDoingLoadOrder = false;
                  if (bVar14) goto LAB_141f067d2;
                }
                _Init_thread_footer(&::_TSS0);
              }
              if ((bDoingLoadOrder == false) ||
                 (pFVar5 = pFVar4->PrecacheHandler,
                 *(int *)&(pFVar5->WaitingPackages).field_0x8 -
                 *(int *)&(pFVar5->WaitingPackages).field_0x34 < 0x400)) goto LAB_141f060ca;
            }
            if (*(int *)&(this->ExportsThatCanBeSerialized).field_0x8 == 0) {
              if ((*(int *)&(this->ExportsThatCanBeSerialized).field_0x8 != 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("!ExportsThatCanBeSerialized.Num()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                                      ,0xf22,L""), bVar14)) {
                pcVar9 = (code *)swi(3);
                TVar15 = (*pcVar9)();
                return TVar15;
              }
              if ((0 < this->CurrentBlockBytes) &&
                 (*(int *)&(this->ExportsInThisBlock).Elements.field_0x8 ==
                  *(int *)&(this->ExportsInThisBlock).Elements.field_0x34)) {
                FlushPrecacheBuffer(this);
                this->LastObjectWorkWasPerformedOn = (UObject *)0x0;
                this->LastTypeOfWorkPerformed = L"ProcessImportsAndExports FlushPrecacheBuffer";
              }
              if ((this->ReadyPrecacheRequests).ArrayNum != 0) {
                MakeNextPrecacheRequestCurrent(this);
                this->LastObjectWorkWasPerformedOn = (UObject *)0x0;
                this->LastTypeOfWorkPerformed =
                     L"ProcessImportsAndExports MakeNextPrecacheRequestCurrent";
              }
            }
            else {
              local_res20[0] = 0xffffffff;
              uVar20 = 1;
              FImportOrImportIndexArray::HeapPop
                        (&this->ExportsThatCanBeSerialized,(int *)local_res20,No);
              uVar16 = local_res20[0];
              lVar19 = (longlong)(int)local_res20[0];
              local_e8[0] = local_res20[0];
              if ((*(int *)&(this->ExportsInThisBlock).Elements.field_0x8 ==
                   *(int *)&(this->ExportsInThisBlock).Elements.field_0x34) ||
                 (iVar17 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                                     (&this->ExportsInThisBlock,local_res20[0],(int *)local_e8),
                 iVar17 != 1)) {
                pFVar6 = this->Linker;
                uVar18 = 0;
                if ((int)uVar16 < (int)pFVar6->_padding_) {
                  uVar18 = ~uVar16 >> 0x1f;
                }
                if ((uVar18 == 0) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar14)) {
                  pcVar9 = (code *)swi(3);
                  TVar15 = (*pcVar9)();
                  return TVar15;
                }
                if (*(longlong *)(lVar19 * 0x68 + 0x40 + pFVar6->_padding_) != 0) {
                  pFVar6 = this->Linker;
                  uVar18 = 0;
                  if ((int)uVar16 < (int)pFVar6->_padding_) {
                    uVar18 = ~uVar16 >> 0x1f;
                  }
                  if ((uVar18 == 0) &&
                     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar14)) {
                    pcVar9 = (code *)swi(3);
                    TVar15 = (*pcVar9)();
                    return TVar15;
                  }
                  if (((*(uint *)(*(longlong *)
                                   ((longlong)(int)uVar16 * 0x68 + 0x40 + pFVar6->_padding_) + 8) >>
                        10 & 1) != 0) &&
                     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("!Linker->ExportMap[LocalExportIndex].Object || !Linker->ExportMap[LocalExportIndex].Object->HasAnyFlags(RF_NeedLoad)"
                                          ,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                                          ,0xf19,L""), bVar14)) {
                    pcVar9 = (code *)swi(3);
                    TVar15 = (*pcVar9)();
                    return TVar15;
                  }
                }
              }
              else {
                FGCScopeGuard::FGCScopeGuard(local_res18);
                GCurrentExportIndex = uVar16;
                EventDrivenSerializeExport(this,uVar16);
                GCurrentExportIndex = -1;
                pFVar6 = this->Linker;
                uVar18 = 0;
                if ((int)uVar16 < (int)pFVar6->_padding_) {
                  uVar18 = ~uVar16 >> 0x1f;
                }
                if ((uVar18 == 0) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar14)) {
                  pcVar9 = (code *)swi(3);
                  TVar15 = (*pcVar9)();
                  return TVar15;
                }
                lVar19 = *(longlong *)(lVar19 * 0x68 + 0x40 + pFVar6->_padding_);
                if (((lVar19 != 0) && ((*(uint *)(lVar19 + 8) >> 10 & 1) != 0)) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("!Object || !Object->HasAnyFlags(RF_NeedLoad)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                                        ,0xf14,L""), bVar14)) {
                  pcVar9 = (code *)swi(3);
                  TVar15 = (*pcVar9)();
                  return TVar15;
                }
                FGCScopeGuard::~FGCScopeGuard(local_res18);
              }
              if (((int)uVar16 < 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("ExportIndex >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                                      ,0x6d,L""), bVar14)) {
                pcVar9 = (code *)swi(3);
                TVar15 = (*pcVar9)();
                return TVar15;
              }
              local_a8.ImportOrExportIndex.Index = uVar16 + 1;
              local_a8.Phase = ImportOrExport_Serialize;
              local_a8.WaitingPackage.Package = this;
              FEventLoadGraph::RemoveNode(&this->AsyncLoadingThread->EventGraph,&local_a8);
            }
          }
          else {
            local_f0[0] = -1;
            uVar20 = 1;
            FImportOrImportIndexArray::HeapPop(&this->ExportsThatCanBeCreated,local_f0,No);
            FGCScopeGuard::FGCScopeGuard(local_res10);
            iVar17 = local_f0[0];
            EventDrivenCreateExport(this,local_f0[0]);
            FGCScopeGuard::~FGCScopeGuard(local_res10);
            if ((iVar17 < 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ExportIndex >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                                    ,0x6d,L""), bVar14)) {
              pcVar9 = (code *)swi(3);
              TVar15 = (*pcVar9)();
              return TVar15;
            }
            local_b8.ImportOrExportIndex.Index = iVar17 + 1;
            local_b8.Phase = ImportOrExport_Create;
            local_b8.WaitingPackage.Package = this;
            FEventLoadGraph::RemoveNode(&this->AsyncLoadingThread->EventGraph,&local_b8);
          }
        }
        else {
          local_f8 = 0xffffffff;
          uVar20 = 1;
          FImportOrImportIndexArray::HeapPop(&this->ImportsThatAreNowSerialized,(int *)&local_f8,No)
          ;
          lVar19 = (longlong)(int)local_f8;
          pFVar6 = this->Linker;
          uVar16 = 0;
          if ((int)local_f8 < (int)pFVar6->_padding_) {
            uVar16 = ~local_f8 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar9 = (code *)swi(3);
            TVar15 = (*pcVar9)();
            return TVar15;
          }
          lVar7 = pFVar6->_padding_;
          lVar8 = *(longlong *)(lVar19 * 0x38 + 0x28 + lVar7);
          if ((lVar8 != 0) && ((*(uint *)(lVar8 + 8) >> 10 & 1) != 0)) {
            UObjectBaseUtility::GetFullName
                      (*(UObjectBaseUtility **)(lVar19 * 0x38 + 0x28 + lVar7),local_98,
                       (UObject *)0x0,None);
            bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("!Import.XObject->HasAnyFlags(RF_NeedLoad)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                                ,0xee1,L"%s had RF_NeedLoad yet it was marked as serialized.");
            if (local_98[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_98[0].Data.AllocatorInstance.Data);
            }
            if (bVar14) {
              pcVar9 = (code *)swi(3);
              TVar15 = (*pcVar9)();
              return TVar15;
            }
          }
          uVar16 = local_f8;
          if (((int)local_f8 < 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ImportIndex >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                                  ,0x67,L""), bVar14)) {
            pcVar9 = (code *)swi(3);
            TVar15 = (*pcVar9)();
            return TVar15;
          }
          local_c8.ImportOrExportIndex.Index = ~uVar16;
          local_c8.Phase = ImportOrExport_Serialize;
          local_c8.WaitingPackage.Package = this;
          FEventLoadGraph::RemoveNode(&this->AsyncLoadingThread->EventGraph,&local_c8);
          this->LastObjectWorkWasPerformedOn = (UObject *)0x0;
          this->LastTypeOfWorkPerformed = L"ProcessImportsAndExports ImportsThatAreNowSerialized";
        }
      }
      else {
        local_f4 = 0xffffffff;
        uVar20 = 1;
        FImportOrImportIndexArray::HeapPop(&this->ImportsThatAreNowCreated,(int *)&local_f4,No);
        FGCScopeGuard::FGCScopeGuard(local_res8);
        uVar16 = local_f4;
        LinkImport(this,local_f4);
        FGCScopeGuard::~FGCScopeGuard(local_res8);
        if (((int)uVar16 < 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("ImportIndex >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                                ,0x67,L""), bVar14)) {
          pcVar9 = (code *)swi(3);
          TVar15 = (*pcVar9)();
          return TVar15;
        }
        local_d8.ImportOrExportIndex.Index = ~uVar16;
        local_d8.Phase = ImportOrExport_Create;
        local_d8.WaitingPackage.Package = this;
        FEventLoadGraph::RemoveNode(&this->AsyncLoadingThread->EventGraph,&local_d8);
        this->LastObjectWorkWasPerformedOn = (UObject *)0x0;
        this->LastTypeOfWorkPerformed = L"ProcessImportsAndExports LinkImport";
      }
    }
  } while( true );
}

// RemoveAllNodes @ 141f0ce40

/* WARNING: Enum "EEventLoadNode": Some values do not have unique names */

void __thiscall FAsyncPackage::RemoveAllNodes(FAsyncPackage *this)

{
  FAsyncLoadingThread *pFVar1;
  int iVar2;
  ulonglong uVar3;
  ForAnyElementType FVar4;
  FEventLoadNodePtr *pFVar5;
  undefined1 local_res8 [8];
  TArray<FEventLoadNodePtr,TSizedDefaultAllocator<32>_> local_18;
  
  pFVar1 = this->AsyncLoadingThread;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  FEventLoadNodeArray::GetAddedNodes(&this->EventNodeArray,&local_18,this);
  iVar2 = local_18.ArrayNum;
  uVar3 = (ulonglong)local_18.ArrayNum;
  pFVar5 = (FEventLoadNodePtr *)(local_18.AllocatorInstance.Data + uVar3 * 0x10);
  FVar4.Data = local_18.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar3 != iVar2) {
      `TCheckedPointerIterator<FEventLoadNodePtr,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if ((FEventLoadNodePtr *)FVar4.Data == pFVar5) break;
    FEventLoadGraph::RemoveNode(&pFVar1->EventGraph,(FEventLoadNodePtr *)FVar4.Data);
    uVar3 = local_18._8_8_ & 0xffffffff;
    FVar4.Data = FVar4.Data + 0x10;
  }
  if ((FEventLoadNodePtr *)local_18.AllocatorInstance.Data != (FEventLoadNodePtr *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// RemoveNode @ 141f0d2e0

/* WARNING: Enum "EEventLoadNode": Some values do not have unique names */

void __thiscall
FAsyncPackage::RemoveNode(FAsyncPackage *this,EEventLoadNode param_1,FPackageIndex param_2)

{
  FEventLoadNodePtr local_18;
  
  local_18.WaitingPackage.Package = this;
  local_18.ImportOrExportIndex.Index = param_2.Index;
  local_18.Phase = param_1;
  FEventLoadGraph::RemoveNode(&this->AsyncLoadingThread->EventGraph,&local_18);
  return;
}

// ResetLoader @ 141f0e2f0

void __thiscall FAsyncPackage::ResetLoader(FAsyncPackage *this)

{
  FAsyncPackage *pFVar1;
  code *pcVar2;
  bool bVar3;
  FLinkerManager *this_00;
  FLLMScope local_res8 [2];
  FMemScope local_res10 [3];
  
  FLLMScope::FLLMScope(local_res8,AsyncLoading,false,None,Default,true);
  FMemScope::FMemScope(local_res10,AsyncLoading,true);
  if (this->Linker != (FLinkerLoad *)0x0) {
    pFVar1 = this->Linker->AsyncRoot;
    if ((pFVar1 != this) && (pFVar1 != (FAsyncPackage *)0x0)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Linker->AsyncRoot == this || Linker->AsyncRoot == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                         ,0x16ad,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    this->Linker->AsyncRoot = (void *)0x0;
    FLinkerLoad::FlushCache((FLinkerLoad *)&this->Linker->_padding_);
    FLinkerLoad::Detach(this->Linker);
    this_00 = FLinkerManager::Get();
    FLinkerManager::RemoveLinker(this_00,this->Linker);
    this->Linker = (FLinkerLoad *)0x0;
  }
  FMemScope::~FMemScope(local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// SetupExports_Event @ 141f113d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EEventLoadNode": Some values do not have unique names */

Type __thiscall FAsyncPackage::SetupExports_Event(FAsyncPackage *this)

{
  double dVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  UObject *pUVar5;
  wchar_t *pwVar6;
  FLinkerLoad *pFVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  ulonglong uVar14;
  double dVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  uint uVar19;
  Type TVar20;
  FName *pFVar21;
  FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_CreateExports> FVar22;
  FArchive *pFVar23;
  longlong lVar24;
  FName FVar25;
  int iVar26;
  longlong lVar27;
  uint uVar28;
  ulonglong uVar29;
  double dVar30;
  FGCScopeGuard local_res20 [8];
  FEventLoadNodePtr local_120;
  FName local_110;
  FEventLoadNodePtr local_108;
  FColor_u_0 local_f8 [2];
  longlong local_f0;
  longlong local_e8;
  FName local_e0;
  FName local_d8;
  FString local_c8;
  LARGE_INTEGER local_b8;
  LARGE_INTEGER local_b0;
  LARGE_INTEGER local_a8;
  FEventLoadNodePtr local_a0;
  FName local_90 [10];
  
  if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
    bVar18 = false;
    bVar13 = false;
  }
  else {
    bVar18 = true;
    bVar13 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2806,"CreateExportsTime",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
               ,0xaf6);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2806);
  }
  pFVar23 = (FArchive *)0x0;
  FVar22 = StatPtr_STAT_FAsyncPackage_CreateExports;
  if (StatPtr_STAT_FAsyncPackage_CreateExports ==
      (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_CreateExports>)0x0) {
    pFVar21 = ::FName::FName(local_90,"STAT_FAsyncPackage_CreateExports");
    FVar22 = (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_CreateExports>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FAsyncPackage_CreateExports,
                        *pFVar21,L"CreateExports AsyncPackage","STATGROUP_AsyncLoad",
                        "STATCAT_Advanced",L"Async Load",false,true,ST_int64,true,false,MCR_Invalid)
    ;
  }
  FVar25 = *(FName *)FVar22;
  bVar12 = false;
  bVar11 = false;
  local_d8.ComparisonIndex.Value = 0;
  local_d8.Number = 0;
  bVar17 = false;
  bVar16 = false;
  if ((FVar25.ComparisonIndex.Value.Value != 0) || (FVar25.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_f8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_f8[0]._s_0,(char *)*(FName *)((longlong)FVar22 + 0x10));
      bVar12 = false;
      bVar11 = true;
      bVar17 = false;
      bVar16 = true;
      if (-1 < CpuChannel->Enabled) {
        local_e0.ComparisonIndex.Value = FVar25.ComparisonIndex.Value.Value;
        local_e0.Number = FVar25.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_e0,(wchar_t *)*(FName *)((longlong)FVar22 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                   ,0xaf7);
        bVar12 = true;
        bVar11 = true;
        bVar17 = true;
        bVar16 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_110 = FVar25;
      FThreadStats::AddMessage(FVar25,CycleScopeStart);
      bVar16 = true;
      goto LAB_141f115b3;
    }
  }
  bVar12 = bVar17;
  bVar11 = bVar16;
  bVar16 = false;
  local_110 = local_d8;
  FVar25 = local_d8;
LAB_141f115b3:
  FGCScopeGuard::FGCScopeGuard(local_res20);
  dVar15 = __real_4170000000000000;
  if (this->Linker->bIsAsyncLoader != false) {
    pFVar23 = this->Linker->Loader;
  }
  if (5 < (byte)LogAsyncArchive._0_1_) {
    FPackagePath::GetLocalFullPath((FPackagePath *)&pFVar23[2].field_0x30,&local_c8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
         ::__l5::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
                             ::__l5::_thread_safe_static_guard_0__),
       `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
       ::__l5::_thread_safe_static_guard_0__ == -1)) {
      QueryPerformanceCounter(&local_b8);
      `public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
      ::__l5::GlobalStartTime =
           (double)local_b8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar15;
      _Init_thread_footer(&`public:_void___cdecl_FAsyncArchive::LogItem(wchar_t_const*___ptr64,__int64,__int64,double)___ptr64'
                           ::__l5::_thread_safe_static_guard_0__);
    }
    QueryPerformanceCounter(&local_b0);
    if (6 < (byte)LogAsyncArchive._0_1_) {
      FGenericPlatformMisc::LowLevelOutputDebugStringf
                (L"%32s%3s    %12lld %12lld    %6.2fms    (+%9.2fms)      %s\r\n");
    }
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
  }
  iVar26 = this->ExportIndex;
  this->LastObjectWorkWasPerformedOn = (UObject *)this->LinkerRoot;
  this->LastTypeOfWorkPerformed = L"SetupExports_Event";
  if (iVar26 < (int)this->Linker->_padding_) {
    do {
      if (iVar26 == (iVar26 / 10) * 10) {
        if ((this->AsyncLoadingThread->IsLoadingSuspended).Counter != 0) break;
        pUVar5 = this->LastObjectWorkWasPerformedOn;
        pwVar6 = this->LastTypeOfWorkPerformed;
        dVar1 = this->TickStartTime;
        dVar10 = (double)this->TimeLimit;
        if (this->bUseTimeLimit != false) {
          QueryPerformanceCounter(&local_a8);
          dVar9 = (double)local_a8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar15;
          dVar30 = dVar9 - dVar1;
          if ((dVar10 < dVar30) && (GWarnIfTimeLimitExceeded != 0)) {
            IsTimeLimitExceededPrint(dVar1,dVar9,LastTestTime,dVar10,pwVar6,pUVar5);
            LastTestTime = dVar9;
            break;
          }
          LastTestTime = dVar9;
          if (dVar10 < dVar30) break;
        }
        if ((byte)LogStreaming._0_1_ < 6) {
          if (GGCSingleton->GCWantsToRunCounter != (TAtomic<int>)0x0) break;
        }
        else if (GGCSingleton->GCWantsToRunCounter != (TAtomic<int>)0x0) {
          UE::Logging::Private::BasicLog<6>
                    ((FStaticBasicLogRecord *)&PTR_u_Timing_out_asyn_1507e7988,
                     (FLogCategoryBase *)&LogStreaming);
          break;
        }
      }
      uVar3 = this->ExportIndex;
      pFVar7 = this->Linker;
      this->ExportIndex = uVar3 + 1;
      uVar19 = 0;
      if ((int)uVar3 < (int)pFVar7->_padding_) {
        uVar19 = ~uVar3 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar8 = (code *)swi(3);
        TVar20 = (*pcVar8)();
        return TVar20;
      }
      lVar24 = pFVar7->_padding_;
      lVar27 = (longlong)(int)uVar3 * 0x68;
      local_f0 = lVar27;
      local_e8 = lVar24;
      if (*(longlong *)(lVar27 + 0x40 + lVar24) == 0) {
LAB_141f1195f:
        bVar2 = *(byte *)(lVar27 + 0x4c + lVar24);
        if (((((char)bVar2 < '\0') || ((*(byte *)(lVar27 + 0x4d + lVar24) & 1) != 0)) ||
            (((char)this->Linker->_padding_ != '\0' && ((bVar2 & 4) != 0)))) ||
           ((((*(char *)((longlong)&this->Linker->_padding_ + 1) != '\0' && ((bVar2 & 2) != 0)) ||
             (*(int *)(lVar27 + 0x10 + lVar24) == 0)) || (*(int *)(lVar27 + 0xc + lVar24) == 0)))) {
          *(byte *)(lVar27 + 0x4c + lVar24) = bVar2 | 0x80;
        }
        else {
          if (((*(longlong *)(lVar27 + lVar24) == 0) &&
              ((*(byte *)(lVar27 + 0x1c + lVar24) & 1) != 0)) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Export.ObjectName != NAME_None || !(Export.ObjectFlags&RF_Public)"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                                  ,0xb10,L""), bVar17)) {
            pcVar8 = (code *)swi(3);
            TVar20 = (*pcVar8)();
            return TVar20;
          }
          iVar26 = *(int *)(lVar27 + 0x54 + lVar24);
          uVar29 = (ulonglong)iVar26;
          if (-1 < iVar26) {
            local_108.ImportOrExportIndex.Index = 0;
            local_108.Phase = Invalid_Value;
            local_108.WaitingPackage.Package = this;
            if (((int)uVar3 < 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ExportIndex >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                                    ,0x6d,L""), bVar17)) {
              pcVar8 = (code *)swi(3);
              TVar20 = (*pcVar8)();
              return TVar20;
            }
            iVar26 = *(int *)(lVar27 + 0x58 + lVar24);
            local_108.ImportOrExportIndex.Index = uVar3 + 1;
            local_120.ImportOrExportIndex.Index = 0;
            local_108.Phase = Export_StartIO;
            local_120.Phase = ImportOrExport_Serialize;
            uVar14 = uVar29;
            local_120.WaitingPackage.Package = this;
            for (; uVar19 = (uint)uVar29, 0 < iVar26; iVar26 = iVar26 + -1) {
              pFVar7 = this->Linker;
              uVar28 = 0;
              if ((int)uVar19 < (pFVar7->PreloadDependencies).ArrayNum) {
                uVar28 = ~uVar19 >> 0x1f;
              }
              if ((uVar28 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar8 = (code *)swi(3);
                TVar20 = (*pcVar8)();
                return TVar20;
              }
              uVar29 = (ulonglong)(uVar19 + 1);
              iVar4 = *(int *)((pFVar7->PreloadDependencies).AllocatorInstance.Data + uVar14 * 4);
              if ((iVar4 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("!Dep.IsNull()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                                      ,0xb21,L""), bVar18)) {
                pcVar8 = (code *)swi(3);
                TVar20 = (*pcVar8)();
                return TVar20;
              }
              local_120.ImportOrExportIndex.Index = iVar4;
              FEventLoadGraph::AddArc(&this->AsyncLoadingThread->EventGraph,&local_120,&local_108);
              lVar24 = local_e8;
              uVar14 = uVar14 + 1;
              FVar25 = local_110;
              bVar18 = bVar13;
            }
            local_108.Phase = Export_StartIO;
            local_120.Phase = ImportOrExport_Create;
            iVar26 = *(int *)(local_f0 + 0x5c + lVar24);
            if (0 < iVar26) {
              lVar27 = (longlong)(int)uVar19;
              do {
                pFVar7 = this->Linker;
                uVar28 = (uint)uVar29;
                uVar19 = 0;
                if ((int)uVar28 < (pFVar7->PreloadDependencies).ArrayNum) {
                  uVar19 = ~uVar28 >> 0x1f;
                }
                if ((uVar19 == 0) &&
                   (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar18)) {
                  pcVar8 = (code *)swi(3);
                  TVar20 = (*pcVar8)();
                  return TVar20;
                }
                uVar29 = (ulonglong)(uVar28 + 1);
                iVar4 = *(int *)((pFVar7->PreloadDependencies).AllocatorInstance.Data + lVar27 * 4);
                if ((iVar4 == 0) &&
                   (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                       ("!Dep.IsNull()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                                        ,0xb2c,L""), bVar18)) {
                  pcVar8 = (code *)swi(3);
                  TVar20 = (*pcVar8)();
                  return TVar20;
                }
                local_120.ImportOrExportIndex.Index = iVar4;
                FEventLoadGraph::AddArc(&this->AsyncLoadingThread->EventGraph,&local_120,&local_108)
                ;
                iVar26 = iVar26 + -1;
                lVar24 = local_e8;
                FVar25 = local_110;
                lVar27 = lVar27 + 1;
                bVar18 = bVar13;
              } while (0 < iVar26);
            }
            iVar26 = *(int *)(local_f0 + 0x60 + lVar24);
            local_108.Phase = ImportOrExport_Create;
            local_120.Phase = ImportOrExport_Serialize;
            if (0 < iVar26) {
              lVar27 = (longlong)(int)uVar29;
              do {
                pFVar7 = this->Linker;
                uVar28 = (uint)uVar29;
                uVar19 = 0;
                if ((int)uVar28 < (pFVar7->PreloadDependencies).ArrayNum) {
                  uVar19 = ~uVar28 >> 0x1f;
                }
                if ((uVar19 == 0) &&
                   (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar18)) {
                  pcVar8 = (code *)swi(3);
                  TVar20 = (*pcVar8)();
                  return TVar20;
                }
                uVar29 = (ulonglong)(uVar28 + 1);
                iVar4 = *(int *)((pFVar7->PreloadDependencies).AllocatorInstance.Data + lVar27 * 4);
                if ((iVar4 == 0) &&
                   (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                       ("!Dep.IsNull()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                                        ,0xb37,L""), bVar18)) {
                  pcVar8 = (code *)swi(3);
                  TVar20 = (*pcVar8)();
                  return TVar20;
                }
                local_120.ImportOrExportIndex.Index = iVar4;
                FEventLoadGraph::AddArc(&this->AsyncLoadingThread->EventGraph,&local_120,&local_108)
                ;
                iVar26 = iVar26 + -1;
                lVar24 = local_e8;
                FVar25 = local_110;
                lVar27 = lVar27 + 1;
                bVar18 = bVar13;
              } while (0 < iVar26);
            }
            iVar26 = *(int *)(local_f0 + 100 + lVar24);
            local_108.Phase = ImportOrExport_Create;
            local_120.Phase = ImportOrExport_Create;
            if (0 < iVar26) {
              lVar24 = (longlong)(int)uVar29;
              do {
                pFVar7 = this->Linker;
                uVar28 = (uint)uVar29;
                uVar19 = 0;
                if ((int)uVar28 < (pFVar7->PreloadDependencies).ArrayNum) {
                  uVar19 = ~uVar28 >> 0x1f;
                }
                if ((uVar19 == 0) &&
                   (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar18)) {
                  pcVar8 = (code *)swi(3);
                  TVar20 = (*pcVar8)();
                  return TVar20;
                }
                uVar29 = (ulonglong)(uVar28 + 1);
                iVar4 = *(int *)((pFVar7->PreloadDependencies).AllocatorInstance.Data + lVar24 * 4);
                if ((iVar4 == 0) &&
                   (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                       ("!Dep.IsNull()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                                        ,0xb42,L""), bVar18)) {
                  pcVar8 = (code *)swi(3);
                  TVar20 = (*pcVar8)();
                  return TVar20;
                }
                local_120.ImportOrExportIndex.Index = iVar4;
                FEventLoadGraph::AddArc(&this->AsyncLoadingThread->EventGraph,&local_120,&local_108)
                ;
                iVar26 = iVar26 + -1;
                FVar25 = local_110;
                lVar24 = lVar24 + 1;
                bVar18 = bVar13;
              } while (0 < iVar26);
            }
          }
        }
      }
      else {
        bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("!Export.Object",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                            ,0xb0b,L"");
        if (bVar17) {
          pcVar8 = (code *)swi(3);
          TVar20 = (*pcVar8)();
          return TVar20;
        }
        if (*(longlong *)(lVar27 + 0x40 + lVar24) == 0) goto LAB_141f1195f;
      }
      if (((int)uVar3 < 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("ExportIndex >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                              ,0x6d,L""), bVar17)) {
        pcVar8 = (code *)swi(3);
        TVar20 = (*pcVar8)();
        return TVar20;
      }
      local_a0.ImportOrExportIndex.Index = uVar3 + 1;
      local_a0.Phase = ImportOrExport_Create;
      local_a0.WaitingPackage.Package = this;
      FEventLoadGraph::DoneAddingPrerequistesFireIfNone
                (&this->AsyncLoadingThread->EventGraph,&local_a0,false);
      iVar26 = this->ExportIndex;
    } while (iVar26 < (int)this->Linker->_padding_);
  }
  TVar20 = TimeOut;
  if (this->ExportIndex == (int)this->Linker->_padding_) {
    TVar20 = Complete;
  }
  FGCScopeGuard::~FGCScopeGuard(local_res20);
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar16) {
    FThreadStats::AddMessage(FVar25,CycleScopeEnd);
  }
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return TVar20;
}

// SetupImports_Event @ 141f11f50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EEventLoadNode": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

Type __thiscall FAsyncPackage::SetupImports_Event(FAsyncPackage *this)

{
  longlong *this_00;
  FWindowsRecursiveMutex *lpCriticalSection;
  byte bVar1;
  FAdditionalInfo *pFVar2;
  FEDLBootNotificationManager *this_01;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  Type TVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_CreateImports> FVar9;
  UClass *pUVar10;
  FString *pFVar11;
  FName FVar12;
  UPackage *pUVar13;
  FObjectImport *pFVar14;
  FObjectExport *pFVar15;
  FName FVar16;
  ulonglong uVar17;
  FUObjectItem *pFVar18;
  uint uVar19;
  uint uVar20;
  FPackageIndex FVar21;
  uint uVar23;
  FLinkerLoad *pFVar24;
  wchar_t *pwVar25;
  int iVar26;
  wchar_t *pwVar27;
  undefined8 *puVar28;
  ulonglong uVar29;
  longlong lVar30;
  FGCScopeGuard local_res20 [8];
  FPackageIndex local_2b4;
  uint local_2b0;
  FName local_2a8;
  byte local_2a0;
  FName *local_298;
  FName local_290;
  FName local_288;
  FColor_u_0 local_280;
  longlong local_27c;
  undefined4 local_274;
  FString local_270;
  FName local_260;
  int *local_258;
  FString local_250;
  FEventLoadNodePtr local_240;
  FName local_230;
  undefined8 local_228;
  FEventLoadNodePtr local_220;
  undefined1 local_210 [8];
  TObjectPtr<UObject> local_208;
  FName local_200 [2];
  FName local_1f0;
  FName local_1e8;
  FName local_1e0;
  FName local_1d8;
  FString local_1d0;
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  FEventLoadNodePtr local_190;
  FEventLoadNodePtr local_180;
  FEventLoadNodePtr local_170;
  FEventLoadNodePtr local_160;
  FEventLoadNodePtr local_150;
  FName local_140;
  FName local_138;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FScopedCreateImportCounter local_80;
  FString local_68;
  FString local_58;
  FPackageIndex FVar22;
  
  uVar29 = 0;
  local_2b0 = 0;
  if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
    bVar6 = false;
    bVar4 = false;
  }
  else {
    bVar6 = true;
    bVar4 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2378,"CreateImportsTime",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
               ,0x94a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2378);
  }
  FVar9 = StatPtr_STAT_FAsyncPackage_CreateImports;
  if (StatPtr_STAT_FAsyncPackage_CreateImports ==
      (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_CreateImports>)0x0) {
    pFVar8 = ::FName::FName(&local_140,"STAT_FAsyncPackage_CreateImports");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_CreateImports>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FAsyncPackage_CreateImports,
                       *pFVar8,L"CreateImports AsyncPackage","STATGROUP_AsyncLoad",
                       "STATCAT_Advanced",L"Async Load",false,true,ST_int64,true,false,MCR_Invalid);
  }
  local_2a8.ComparisonIndex.Value = 0;
  local_2a8.Number = 0;
  local_2a0 = 0;
  FVar12 = *(FName *)FVar9;
  if ((FVar12.ComparisonIndex.Value.Value != 0) || (FVar12.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_280.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_280._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      local_2a0 = local_2a0 | 1;
      if (-1 < CpuChannel->Enabled) {
        local_230.ComparisonIndex.Value = FVar12.ComparisonIndex.Value.Value;
        local_230.Number = FVar12.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_230,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                   ,0x94b);
        local_2a0 = local_2a0 | 2;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_2a8 = FVar12;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      local_2a0 = local_2a0 | 4;
    }
  }
  FGCScopeGuard::FGCScopeGuard(local_res20);
  local_258 = &this->ImportIndex;
  if ((*local_258 == 0) && (pFVar24 = this->Linker, uVar17 = uVar29, 0 < (int)pFVar24->_padding_)) {
    do {
      uVar20 = (uint)uVar29;
      uVar19 = 0;
      if ((int)uVar20 < (int)pFVar24->_padding_) {
        uVar19 = ~uVar20 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        TVar7 = (*pcVar3)();
        return TVar7;
      }
      uVar29 = (ulonglong)(uVar20 + 1);
      *(undefined1 *)(uVar17 + 0x22 + pFVar24->_padding_) = 0;
      pFVar24 = this->Linker;
      uVar17 = uVar17 + 0x38;
    } while ((int)(uVar20 + 1) < (int)pFVar24->_padding_);
  }
  local_258 = &this->ImportIndex;
  uVar20 = *local_258;
  uVar19 = (uint)this->Linker->_padding_;
  bVar5 = uVar20 == uVar19;
  if ((int)uVar20 < (int)uVar19) {
    do {
      pwVar27 = L"";
      pFVar24 = this->Linker;
      *local_258 = uVar20 + 1;
      FScopedCreateImportCounter::FScopedCreateImportCounter(&local_80,pFVar24,uVar20);
      pFVar24 = this->Linker;
      uVar19 = 0;
      if ((int)uVar20 < (int)pFVar24->_padding_) {
        uVar19 = ~uVar20 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        TVar7 = (*pcVar3)();
        return TVar7;
      }
      pFVar8 = (FName *)((longlong)(int)uVar20 * 0x38 + pFVar24->_padding_);
      local_298 = pFVar8;
      if (pFVar8[1].ComparisonIndex.Value == 0) {
        if (*(char *)((longlong)&pFVar8[4].ComparisonIndex.Value + 3) == '\0') {
          FVar12 = pFVar8[5];
          if (FVar12 == (FName)0x0) {
            FVar12 = *pFVar8;
            pUVar10 = Z_Construct_UClass_UPackage_NoRegister();
            FVar12 = (FName)StaticFindObjectFast
                                      (pUVar10,(UObject *)0x0,FVar12,None,RF_NoFlags,Borrowed);
            if (FVar12 == (FName)0x0) {
              *(undefined1 *)((longlong)&pFVar8[4].ComparisonIndex.Value + 3) = 1;
              if ((1 < (byte)LogStreaming._0_1_) &&
                 (bVar5 = FLinkerLoad::IsKnownMissingPackage(*pFVar8), !bVar5)) {
                ::FName::ToString(&(this->Desc).PackagePath.PackageName,&local_1d0);
                ::FName::ToString(pFVar8,&local_130);
                UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
                if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_130.Data.AllocatorInstance.Data);
                }
                if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
                }
              }
              goto LAB_141f134f5;
            }
            pFVar8[5] = FVar12;
            AddObjectReference(this,(UObject *)FVar12);
          }
          else {
            pUVar10 = Z_Construct_UClass_UPackage_NoRegister();
            iVar26 = (int)pUVar10->_padding_;
            if ((*(int *)(*(longlong *)((longlong)FVar12 + 0x10) + 0x38) < iVar26) ||
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)((longlong)FVar12 + 0x10) + 0x30) +
                 (longlong)iVar26 * 8) != &pUVar10->_padding_)) {
              pFVar11 = GetTypeName<UPackage>(&local_68);
              if ((pFVar11->Data).ArrayNum == 0) {
                pwVar25 = L"";
              }
              else {
                pwVar25 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
              }
              pFVar11 = GetFullNameForCastLogError<UObject>(&local_58,(UObject *)FVar12);
              if ((pFVar11->Data).ArrayNum != 0) {
                pwVar27 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
              }
                    /* WARNING: Subroutine does not return */
              CastLogError(pwVar27,pwVar25);
            }
          }
          local_200[0] = FVar12;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar12 != (FName)0x0)) {
            UE::GC::MarkAsReachable((UObject *)FVar12);
          }
          TSet<TObjectPtr<UPackage>,DefaultKeyFuncs<TObjectPtr<UPackage>,0>,FDefaultSetAllocator>::
          Emplace<TObjectPtr<UPackage>_>
                    (&this->ImportedPackages,(TObjectPtr<UPackage> *)local_210,(bool *)local_200);
          if (((*(longlong *)((longlong)FVar12 + 0x48) != 0) &&
              (lVar30 = *(longlong *)(*(longlong *)((longlong)FVar12 + 0x48) + 0x20), lVar30 != 0))
             && (*(FAsyncPackage **)(lVar30 + 0x420) != (FAsyncPackage *)0x0)) {
            if ((*(FAsyncPackage **)(lVar30 + 0x420) == this) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ImportLinker->AsyncRoot != this",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                                   ,0x97e,L""), bVar5)) {
              pcVar3 = (code *)swi(3);
              TVar7 = (*pcVar3)();
              return TVar7;
            }
            lVar30 = *(longlong *)(lVar30 + 0x420);
            if (*(byte *)(lVar30 + 0x2d8) < 8) {
              local_27c = 0;
              local_274 = 0;
              if (lVar30 != 0) {
                local_27c = *(longlong *)(lVar30 + 0x14);
                local_274 = *(undefined4 *)(lVar30 + 0x2dc);
              }
              TSet<FWeakAsyncPackagePtr,DefaultKeyFuncs<FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
              ::Emplace<FWeakAsyncPackagePtr>
                        (&this->PackagesIMayBeWaitingForBeforePostload,
                         (FWeakAsyncPackagePtr *)(local_210 + 4),(bool *)&local_27c);
            }
          }
        }
LAB_141f134f5:
        if (((int)uVar20 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("ImportIndex >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                               ,0x67,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          TVar7 = (*pcVar3)();
          return TVar7;
        }
        local_160.ImportOrExportIndex.Index = ~uVar20;
        local_160.Phase = ImportOrExport_Create;
        local_160.WaitingPackage.Package = this;
        FEventLoadGraph::DoneAddingPrerequistesFireIfNone
                  (&this->AsyncLoadingThread->EventGraph,&local_160,false);
      }
      else {
        if (((pFVar8[5] != (FName)0x0) &&
            (bVar5 = IsFullyLoadedObj(this,(UObject *)pFVar8[5]), bVar5)) &&
           (GIsInitialLoad == false)) goto LAB_141f134f5;
        if (((int)uVar20 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("ImportIndex >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                               ,0x67,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          TVar7 = (*pcVar3)();
          return TVar7;
        }
        uVar19 = ~uVar20;
        FVar21.Index = ~uVar20;
        do {
          FVar22.Index = FVar21.Index;
          FVar21.Index = uVar19;
          if ((-1 < FVar21.Index) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("!OuterMostIndex.IsNull() && OuterMostIndex.IsImport()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                                 ,0x98f,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            TVar7 = (*pcVar3)();
            return TVar7;
          }
          pFVar24 = this->Linker;
          if (((-1 < FVar21.Index) || (-1 < FVar21.Index)) ||
             ((int)pFVar24->_padding_ <= ~FVar21.Index)) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index.IsImport() && ImportMap.IsValidIndex(Index.ToImport())",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Linker.h"
                               ,0x8c,L"");
            if (bVar6) {
              pcVar3 = (code *)swi(3);
              TVar7 = (*pcVar3)();
              return TVar7;
            }
            if ((-1 < FVar21.Index) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsImport()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                                   ,0x55,L""), bVar6)) {
              pcVar3 = (code *)swi(3);
              TVar7 = (*pcVar3)();
              return TVar7;
            }
          }
          uVar19 = 0;
          if (~FVar21.Index < (int)pFVar24->_padding_) {
            uVar19 = (uint)FVar21.Index >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            TVar7 = (*pcVar3)();
            return TVar7;
          }
          pFVar8 = local_298;
          uVar19 = *(uint *)((longlong)~FVar21.Index * 0x38 + 8 + pFVar24->_padding_);
        } while (uVar19 != 0);
        pFVar24 = this->Linker;
        if (((-1 < FVar21.Index) || (-1 < FVar21.Index)) ||
           ((int)pFVar24->_padding_ <= ~FVar21.Index)) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index.IsImport() && ImportMap.IsValidIndex(Index.ToImport())",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Linker.h"
                             ,0x8c,L"");
          if (bVar6) {
            pcVar3 = (code *)swi(3);
            TVar7 = (*pcVar3)();
            return TVar7;
          }
          if ((-1 < FVar21.Index) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsImport()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                                 ,0x55,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            TVar7 = (*pcVar3)();
            return TVar7;
          }
        }
        uVar19 = 0;
        if (~FVar21.Index < (int)pFVar24->_padding_) {
          uVar19 = (uint)FVar21.Index >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          TVar7 = (*pcVar3)();
          return TVar7;
        }
        puVar28 = (undefined8 *)(pFVar24->_padding_ + (longlong)~FVar21.Index * 0x38);
        if ((*(int *)(puVar28 + 1) != 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("OuterMostImport.OuterIndex.IsNull() || OuterMostImport.HasPackageName()"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                               ,0x999,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          TVar7 = (*pcVar3)();
          return TVar7;
        }
        local_200[1] = (FName)*puVar28;
        FLinkerInstancingContext::RemapPackage(&this->Linker->InstancingContext,&local_288);
        bVar6 = bVar4;
        if (((UObjectBaseUtility *)puVar28[5] == (UObjectBaseUtility *)0x0) ||
           (pUVar13 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)puVar28[5]),
           pUVar13 == (UPackage *)0x0)) {
          FVar12 = local_288;
          pUVar10 = Z_Construct_UClass_UPackage_NoRegister();
          pUVar13 = (UPackage *)
                    StaticFindObjectFast(pUVar10,(UObject *)0x0,FVar12,None,RF_NoFlags,Borrowed);
          if (pUVar13 == (UPackage *)0x0) {
            *(undefined1 *)((longlong)&pFVar8[4].ComparisonIndex.Value + 3) = 1;
            if ((1 < (byte)LogStreaming._0_1_) &&
               (bVar5 = FLinkerLoad::IsKnownMissingPackage(local_288), !bVar5)) {
              ::FName::ToString(&(this->Desc).PackagePath.PackageName,&local_1c0);
              ::FName::ToString(pFVar8,&local_110);
              ::FName::ToString(&local_288,&local_120);
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
              if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_120.Data.AllocatorInstance.Data);
              }
              if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_110.Data.AllocatorInstance.Data);
              }
              if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
              }
            }
            goto LAB_141f134f5;
          }
          if (*(int *)(puVar28 + 1) == 0) {
            puVar28[5] = pUVar13;
            AddObjectReference(this,(UObject *)pUVar13);
          }
        }
        pFVar2 = (pUVar13->AdditionalInfo).Ptr;
        if (pFVar2 == (FAdditionalInfo *)0x0) {
          FVar12.ComparisonIndex.Value = 0;
          FVar12.Number = 0;
        }
        else {
          FVar12 = (FName)pFVar2->LinkerLoad;
        }
        local_260 = FVar12;
        if (GIsInitialLoad == false) {
          if (FVar12 == (FName)0x0) goto LAB_141f1297d;
LAB_141f1296f:
          pFVar8 = local_298;
          if (*(void **)((longlong)FVar12 + 0x420) == (void *)0x0) {
LAB_141f1297d:
            FindExistingImport(this,uVar20);
            pFVar8 = local_298;
            bVar5 = IsFullyLoadedObj(this,(UObject *)local_298[5]);
            if (pFVar8[5] != (FName)0x0) {
              if (bVar5) goto LAB_141f12a40;
              if (1 < (byte)LogStreaming._0_1_) {
                local_1f0 = (FName)pUVar13->_padding_;
                ::FName::ToString(&local_1f0,&local_1b0);
                ::FName::ToString(pFVar8,&local_100);
                UE::Logging::Private::BasicLog<2>
                          ((FStaticBasicLogRecord *)&PTR_u_Found_package_w_1507e92b8,
                           (FLogCategoryBase *)&LogStreaming);
                if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_100.Data.AllocatorInstance.Data);
                }
                if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
                }
              }
              pFVar8[5].ComparisonIndex = 0;
              pFVar8[5].Number = 0;
            }
            *(undefined1 *)((longlong)&pFVar8[4].ComparisonIndex.Value + 3) = 1;
          }
LAB_141f12a40:
          if ((FVar12 == (FName)0x0) ||
             (*(void **)((longlong)FVar12 + 0x420) == (FAsyncPackage *)0x0)) goto LAB_141f134f5;
          if ((*(void **)((longlong)FVar12 + 0x420) == this) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("ImportLinker->AsyncRoot != this",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                                 ,0x9d5,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            TVar7 = (*pcVar3)();
            return TVar7;
          }
          if ((pFVar8[1].ComparisonIndex.Value == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("!Import.OuterIndex.IsNull()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                                 ,0x9d6,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            TVar7 = (*pcVar3)();
            return TVar7;
          }
          FindExportFromImport
                    ((FLinkerLoad *)&local_2b4,FVar12.ComparisonIndex.Value.Value,
                     (FLinkerLoad *)(ulonglong)uVar20);
          local_290.ComparisonIndex.Value = 0;
          local_290.Number = 0;
          if (local_2b4.Index != 0) {
            pFVar15 = FLinkerTables::Exp((FLinkerTables *)((longlong)FVar12 + 8),local_2b4);
            if (((FName)pFVar15->_padding_ != *pFVar8) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ImportLinker->Exp(LocalExportIndex).ObjectName == Import.ObjectName"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                                   ,0x9dc,L""), bVar5)) {
              pcVar3 = (code *)swi(3);
              TVar7 = (*pcVar3)();
              return TVar7;
            }
            pFVar15 = FLinkerTables::Exp((FLinkerTables *)((longlong)FVar12 + 8),local_2b4);
            FVar21.Index = pFVar15->_padding_;
            if (FVar21.Index < 1) {
              if (FVar21.Index < 0) {
                pFVar14 = FLinkerTables::Imp((FLinkerTables *)((longlong)FVar12 + 8),FVar21);
                local_290 = (FName)pFVar14->_padding_;
              }
              else {
                local_290 = *(FName *)(*(longlong *)((longlong)FVar12 + 0xc0) + 0x18);
              }
            }
            else {
              pFVar15 = FLinkerTables::Exp((FLinkerTables *)((longlong)FVar12 + 8),FVar21);
              local_290 = (FName)pFVar15->_padding_;
            }
            local_228 = 0;
            if ((local_290 == (FName)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("OuterName != NAME_None",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                                   ,0x9ea,L""), bVar5)) {
              pcVar3 = (code *)swi(3);
              TVar7 = (*pcVar3)();
              return TVar7;
            }
            pFVar24 = this->Linker;
            FVar21.Index = local_298[1].ComparisonIndex.Value;
            this_00 = &pFVar24->_padding_;
            if (FVar21.Index == 0) {
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("!Index.IsNull()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Linker.h"
                                 ,0x59,L"");
              if (bVar5) {
                pcVar3 = (code *)swi(3);
                TVar7 = (*pcVar3)();
                return TVar7;
              }
LAB_141f12bc1:
              FLinkerTables::Exp((FLinkerTables *)this_00,FVar21);
            }
            else {
              if (-1 < FVar21.Index) goto LAB_141f12bc1;
              FLinkerTables::Imp((FLinkerTables *)this_00,FVar21);
            }
            FVar16 = FLinkerInstancingContext::RemapPackage(&pFVar24->InstancingContext,&local_138);
            pFVar8 = local_298;
            if ((local_290 != *(FName *)FVar16) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("OuterName == Linker->GetInstancingContext().RemapPackage(Linker->ImpExp(Import.OuterIndex).ObjectName)"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                                   ,0x9eb,L""), pFVar8 = local_298, bVar5)) {
              pcVar3 = (code *)swi(3);
              TVar7 = (*pcVar3)();
              return TVar7;
            }
          }
          *(bool *)((longlong)&pFVar8[4].ComparisonIndex.Value + 3) = local_2b4.Index == 0;
          if ((2 < (byte)LogStreaming._0_1_) && (local_2b4.Index == 0)) {
            local_1e8 = (FName)pUVar13->_padding_;
            ::FName::ToString(&local_1e8,&local_1a0);
            ::FName::ToString(pFVar8,&local_e0);
            ::FName::ToString(&local_290,&local_f0);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
            if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_f0.Data.AllocatorInstance.Data);
            }
            if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_e0.Data.AllocatorInstance.Data);
            }
            if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
            }
          }
          if (*(char *)((longlong)&pFVar8[4].ComparisonIndex.Value + 3) != '\0') {
            if (2 < (byte)LogStreaming._0_1_) {
              pFVar24 = this->Linker;
              if (((int)uVar20 < 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ImportIndex >= 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                                     ,0x67,L""), bVar5)) {
                pcVar3 = (code *)swi(3);
                TVar7 = (*pcVar3)();
                return TVar7;
              }
              if ((int)uVar20 < 0) {
                if ((int)~uVar20 < 1) {
                  local_270.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_270.Data.ArrayNum = 0;
                  local_270.Data.ArrayMax = 0;
                }
                else {
                  FLinker::GetExportPathName
                            ((FLinker *)pFVar24,&local_270,~uVar20 - 1,(wchar_t *)0x0,false);
                }
              }
              else {
                FLinkerTables::GetImportPathName
                          ((FLinkerTables *)&pFVar24->_padding_,&local_270,uVar20);
              }
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
              if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_270.Data.AllocatorInstance.Data);
              }
              if (2 < (byte)LogStreaming._0_1_) {
                ::FName::ToString((FName *)((longlong)*(void **)((longlong)FVar12 + 0x420) + 0x14),
                                  &local_d0);
                UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
                if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_d0.Data.AllocatorInstance.Data);
                }
              }
            }
            FVar16 = local_260;
            if (0 < *(int *)((longlong)FVar12 + 0x20)) {
              uVar17 = 0;
              iVar26 = -2;
              uVar29 = uVar17;
              do {
                uVar19 = (uint)uVar17;
                if (((int)uVar19 < 0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("ExportIndex >= 0",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                                       ,0x6d,L""), bVar5)) {
                  pcVar3 = (code *)swi(3);
                  TVar7 = (*pcVar3)();
                  return TVar7;
                }
                if ((((int)(uVar19 + 1) < 1) || ((int)uVar19 < 0)) ||
                   (*(int *)((longlong)FVar16 + 0x20) <= (int)uVar19)) {
                  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index.IsExport() && ExportMap.IsValidIndex(Index.ToExport())",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Linker.h"
                                     ,0xaa,L"");
                  if (bVar5) {
                    pcVar3 = (code *)swi(3);
                    TVar7 = (*pcVar3)();
                    return TVar7;
                  }
                  if (((int)(uVar19 + 1) < 1) &&
                     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("IsExport()",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                                         ,0x5b,L""), bVar5)) {
                    pcVar3 = (code *)swi(3);
                    TVar7 = (*pcVar3)();
                    return TVar7;
                  }
                }
                uVar23 = 0;
                if ((int)uVar19 < *(int *)((longlong)FVar16 + 0x20)) {
                  uVar23 = ~uVar19 >> 0x1f;
                }
                if ((uVar23 == 0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar5)) {
                  pcVar3 = (code *)swi(3);
                  TVar7 = (*pcVar3)();
                  return TVar7;
                }
                if (2 < (byte)LogStreaming._0_1_) {
                  FVar21.Index = *(int *)(*(longlong *)((longlong)FVar16 + 0x18) + 0xc + uVar29);
                  if (FVar21.Index != 0) {
                    if (FVar21.Index < 0) {
                      pFVar15 = (FObjectExport *)
                                FLinkerTables::Imp((FLinkerTables *)((longlong)FVar16 + 8),FVar21);
                    }
                    else {
                      pFVar15 = FLinkerTables::Exp((FLinkerTables *)((longlong)FVar16 + 8),FVar21);
                    }
                    local_2b0 = local_2b0 | 1;
                    ::FName::ToString((FName *)pFVar15,&local_c0);
                  }
                  if (((int)uVar19 < 0) &&
                     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("ExportIndex >= 0",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                                         ,0x6d,L""), bVar5)) {
                    pcVar3 = (code *)swi(3);
                    TVar7 = (*pcVar3)();
                    return TVar7;
                  }
                  if ((int)(uVar19 + 1) < 0) {
                    FLinkerTables::GetImportPathName
                              ((FLinkerTables *)((longlong)FVar16 + 8),&local_250,iVar26);
                  }
                  else if (uVar19 == 0xffffffff) {
                    local_250.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    local_250.Data.ArrayNum = 0;
                    local_250.Data.ArrayMax = 0;
                  }
                  else {
                    FLinker::GetExportPathName
                              ((FLinker *)FVar16,&local_250,uVar19,(wchar_t *)0x0,false);
                  }
                  UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming)
                  ;
                  if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_250.Data.AllocatorInstance.Data);
                  }
                  if (((local_2b0 & 1) != 0) &&
                     (local_2b0 = local_2b0 & 0xfffffffe,
                     local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
                  }
                }
                iVar26 = iVar26 + -1;
                uVar17 = (ulonglong)(uVar19 + 1);
                uVar29 = uVar29 + 0x68;
                FVar12 = local_260;
                pFVar8 = local_298;
              } while ((int)(uVar19 + 1) < *(int *)((longlong)FVar16 + 0x20));
            }
            if (*(char *)((longlong)&pFVar8[4].ComparisonIndex.Value + 3) != '\0')
            goto LAB_141f134f5;
          }
          FVar21.Index = local_2b4.Index;
          if ((((local_2b4.Index < 1) || (local_2b4.Index + -1 < 0)) ||
              (*(int *)((longlong)FVar12 + 0x20) <= local_2b4.Index + -1)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index.IsExport() && ExportMap.IsValidIndex(Index.ToExport())",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Linker.h"
                                 ,0xaa,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            TVar7 = (*pcVar3)();
            return TVar7;
          }
          if ((FVar21.Index < 1) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsExport()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                                 ,0x5b,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            TVar7 = (*pcVar3)();
            return TVar7;
          }
          uVar23 = FVar21.Index - 1;
          uVar19 = 0;
          if ((int)uVar23 < *(int *)((longlong)FVar12 + 0x20)) {
            uVar19 = ~uVar23 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            TVar7 = (*pcVar3)();
            return TVar7;
          }
          lVar30 = (longlong)(int)uVar23 * 0x68 + *(longlong *)((longlong)FVar12 + 0x18);
          bVar1 = *(byte *)(lVar30 + 0x4c);
          *(byte *)((longlong)&pFVar8[4].ComparisonIndex.Value + 3) = bVar1 >> 7;
          if (-1 < (char)bVar1) {
            if ((local_2b4.Index < 1) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsExport()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                                   ,0x5b,L""), bVar5)) {
              pcVar3 = (code *)swi(3);
              TVar7 = (*pcVar3)();
              return TVar7;
            }
            pFVar8[6] = FVar12;
            pFVar8[3].Number = local_2b4.Index - 1;
            if (*(FName *)(lVar30 + 0x40) == (FName)0x0) {
              local_240.ImportOrExportIndex.Index = 0;
              local_240.Phase = Invalid_Value;
              local_240.WaitingPackage.Package = this;
              if (((int)uVar20 < 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ImportIndex >= 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                                     ,0x67,L""), bVar5)) {
                pcVar3 = (code *)swi(3);
                TVar7 = (*pcVar3)();
                return TVar7;
              }
              local_240.Phase = ImportOrExport_Create;
              local_240.ImportOrExportIndex.Index = ~uVar20;
              local_190.Phase = ImportOrExport_Create;
              local_190.WaitingPackage.Package = *(void **)((longlong)FVar12 + 0x420);
              local_190.ImportOrExportIndex.Index = local_2b4.Index;
              FEventLoadGraph::AddArc(&this->AsyncLoadingThread->EventGraph,&local_190,&local_240);
              local_180.WaitingPackage.Package = *(void **)((longlong)FVar12 + 0x420);
              local_180.ImportOrExportIndex.Index = 0;
              local_180.Phase = Export_StartIO;
              FEventLoadGraph::AddArc(&this->AsyncLoadingThread->EventGraph,&local_240,&local_180);
            }
            else {
              if (((pFVar8[5] != (FName)0x0) && (pFVar8[5] != *(FName *)(lVar30 + 0x40))) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("!Import.XObject || Import.XObject == Export.Object",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                                     ,0xa24,L""), bVar5)) {
                pcVar3 = (code *)swi(3);
                TVar7 = (*pcVar3)();
                return TVar7;
              }
              FVar16 = *(FName *)(lVar30 + 0x40);
              pFVar8[5] = FVar16;
              if (FVar16 != (FName)0x0) {
                bVar5 = IsInGameThread();
                if ((!bVar5) && (bVar5 = IsGarbageCollectionLocked(), !bVar5)) {
                  UObjectBaseUtility::GetFullName
                            ((UObjectBaseUtility *)FVar16,&local_b0,(UObject *)0x0,None);
                  UE::Logging::Private::BasicFatalLog
                            (&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
                  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
                  }
                }
                lpCriticalSection = &this->ReferencedObjectsCritical;
                if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
                  UE::Core::Private::ReportNotNullPtr();
                }
                EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
                local_1e0 = FVar16;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (UE::GC::MarkAsReachable((UObject *)FVar16),
                   UE::GC::GIsIncrementalReachabilityPending != false)) {
                  UE::GC::MarkAsReachable((UObject *)FVar16);
                }
                uVar19 = ((uint)((ulonglong)FVar16 >> 0x14) & 0xffff ^
                         (uint)((ulonglong)FVar16 >> 4)) * -0x7a143595;
                uVar19 = (uVar19 >> 0xd ^ uVar19) * -0x3d4d51cb;
                iVar26 = TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                         ::FindIndexByHash<TObjectPtr<UObject_const_>_>
                                   (&this->ReferencedObjects,uVar19 >> 0x10 ^ uVar19,
                                    (TObjectPtr<UObject_const_> *)&local_1e0);
                if (iVar26 == -1) {
                  local_1d8 = FVar16;
                  if (UE::GC::GIsIncrementalReachabilityPending != false) {
                    UE::GC::MarkAsReachable((UObject *)FVar16);
                  }
                  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                  ::Emplace<TObjectPtr<UObject>_>
                            (&this->ReferencedObjects,&local_208,(bool *)&local_1d8);
                }
                LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
                pFVar18 = FUObjectArray::IndexToObject
                                    (&GUObjectArray,*(int *)((longlong)FVar16 + 0xc));
                if (((ulonglong)((pFVar18->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x1c & 1) != 0)
                {
                  ::FName::ToString(&(this->Desc).Name,&local_90);
                  UObjectBaseUtility::GetFullName
                            ((UObjectBaseUtility *)FVar16,&local_a0,(UObject *)0x0,None);
                  UE::Logging::Private::BasicFatalLog
                            (&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
                  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
                  }
                  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_90.Data.AllocatorInstance.Data);
                  }
                }
              }
            }
            bVar5 = IsFullyLoadedObj(this,*(UObject **)(lVar30 + 0x40));
            if (!bVar5) {
              local_220.ImportOrExportIndex.Index = 0;
              local_220.Phase = Invalid_Value;
              local_220.WaitingPackage.Package = this;
              if (((int)uVar20 < 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ImportIndex >= 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                                     ,0x67,L""), bVar5)) {
                pcVar3 = (code *)swi(3);
                TVar7 = (*pcVar3)();
                return TVar7;
              }
              local_220.Phase = ImportOrExport_Serialize;
              local_220.ImportOrExportIndex.Index = ~uVar20;
              local_170.Phase = ImportOrExport_Serialize;
              local_170.WaitingPackage.Package = *(void **)((longlong)FVar12 + 0x420);
              local_170.ImportOrExportIndex.Index = local_2b4.Index;
              FEventLoadGraph::AddArc(&this->AsyncLoadingThread->EventGraph,&local_170,&local_220);
            }
          }
          goto LAB_141f134f5;
        }
        if (FVar12 != (FName)0x0) goto LAB_141f1296f;
        if (((uint)pUVar13->PackageFlagsPrivate >> 4 & 1) == 0) goto LAB_141f1297d;
        if ((*(int *)(puVar28 + 1) != 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("OuterMostImport.OuterIndex.IsNull()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                               ,0x9b4,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          TVar7 = (*pcVar3)();
          return TVar7;
        }
        this_01 = this->EDLBootNotificationManager;
        if (((int)uVar20 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("ImportIndex >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                               ,0x67,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          TVar7 = (*pcVar3)();
          return TVar7;
        }
        pFVar14 = FLinkerTables::Imp((FLinkerTables *)&this->Linker->_padding_,FVar22);
        bVar5 = FEDLBootNotificationManager::AddWaitingPackage
                          (this_01,this,local_288,(FName)pFVar14->_padding_,(FPackageIndex)~uVar20,
                           false);
        if (!bVar5) goto LAB_141f1297d;
        if (((int)uVar20 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("ImportIndex >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                               ,0x67,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          TVar7 = (*pcVar3)();
          return TVar7;
        }
        local_150.ImportOrExportIndex.Index = ~uVar20;
        local_150.Phase = ImportOrExport_Create;
        local_150.WaitingPackage.Package = this;
        FEventLoadGraph::NodeWillBeFiredExternally(&this->AsyncLoadingThread->EventGraph,&local_150)
        ;
      }
      FScopedCreateImportCounter::~FScopedCreateImportCounter(&local_80);
      uVar20 = *local_258;
      uVar19 = (uint)this->Linker->_padding_;
      bVar5 = uVar20 == uVar19;
    } while ((int)uVar20 < (int)uVar19);
  }
  TVar7 = TimeOut;
  if (bVar5) {
    TVar7 = Complete;
  }
  FGCScopeGuard::~FGCScopeGuard(local_res20);
  if ((local_2a0 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_2a0 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_2a0 & 4) != 0) {
    FThreadStats::AddMessage(local_2a8,CycleScopeEnd);
  }
  local_2a0 = 0;
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return TVar7;
}

// StartPrecacheRequest @ 141f13a30

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "EEventLoadNode": Some values do not have unique names */

void __thiscall FAsyncPackage::StartPrecacheRequest(FAsyncPackage *this)

{
  undefined8 *puVar1;
  long64 *plVar2;
  undefined8 uVar3;
  FLinkerLoad *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  FScriptContainerElement *pFVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  TTuple<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest> *pTVar13;
  uint uVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  longlong lVar17;
  longlong lVar18;
  FAsyncArchive *pFVar19;
  uint uVar20;
  uint uVar21;
  FAsyncArchive *this_00;
  uint local_res8 [2];
  uint local_res10 [2];
  TKeyInitializer<IAsyncReadRequest_*_const_&> local_res18 [2];
  uint local_d8;
  uint local_d4;
  longlong local_d0;
  longlong lStack_c8;
  undefined8 local_c0;
  ForAnyElementType FStack_b8;
  undefined8 local_b0;
  undefined1 local_a8 [16];
  FWeakAsyncPackagePtr *local_98;
  IAsyncReadRequest *local_90;
  FName local_88;
  int local_80;
  FEventLoadNodePtr local_78;
  FEventLoadNodePtr local_68;
  uint *local_58;
  undefined1 *local_50;
  IAsyncReadRequest **local_48;
  FName *local_40;
  
  if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3587,"StartPrecacheRequests",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
               ,0xe03);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3587);
  }
  local_d8 = 0xffffffff;
  this_00 = (FAsyncArchive *)0x0;
  do {
    FImportOrImportIndexArray::HeapPop(&this->ExportsThatCanHaveIOStarted,(int *)&local_d8,No);
    lVar17 = (longlong)(int)local_d8;
    uVar21 = 0;
    pFVar4 = this->Linker;
    uVar14 = uVar21;
    if ((int)local_d8 < (int)pFVar4->_padding_) {
      uVar14 = ~local_d8 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar14 = local_d8;
    lVar17 = pFVar4->_padding_ + lVar17 * 0x68;
    if ((*(longlong *)(lVar17 + 0x40) == 0) ||
       ((*(uint *)(*(longlong *)(lVar17 + 0x40) + 8) >> 10 & 1) == 0)) {
LAB_141f13faf:
      if (((int)local_d8 < 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("ExportIndex >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                              ,0x6d,L""), bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_78.ImportOrExportIndex.Index = uVar14 + 1;
      local_78.Phase = Export_StartIO;
      local_78.WaitingPackage.Package = this;
      FEventLoadGraph::RemoveNode(&this->AsyncLoadingThread->EventGraph,&local_78);
    }
    else {
      if ((this->CurrentBlockOffset <= *(longlong *)(lVar17 + 0x28)) &&
         (*(longlong *)(lVar17 + 0x20) + *(longlong *)(lVar17 + 0x28) <=
          this->CurrentBlockBytes + this->CurrentBlockOffset)) goto LAB_141f13faf;
      if (*(int *)&(this->ExportIndexToPrecacheRequest).field_0x8 ==
          *(int *)&(this->ExportIndexToPrecacheRequest).field_0x34) {
LAB_141f13bc0:
        lVar17 = (longlong)(int)local_d8;
        pFVar4 = this->Linker;
        uVar14 = uVar21;
        if ((int)local_d8 < (int)pFVar4->_padding_) {
          uVar14 = ~local_d8 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar18 = pFVar4->_padding_;
        local_c0 = 0xffffffffffffffff;
        FStack_b8.Data = (FScriptContainerElement *)0x0;
        local_b0 = 0;
        local_d0 = *(longlong *)(lVar17 * 0x68 + 0x28 + lVar18);
        lStack_c8 = *(longlong *)(lVar17 * 0x68 + 0x20 + lVar18);
        if ((lStack_c8 < 1) || (local_b0._0_4_ = 0, local_d0 < 1)) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("NewReq.BytesToRead > 0 && NewReq.Offset > 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                              ,0xe36,L"");
          if (bVar11) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar12 = (int)local_b0;
          if (FStack_b8.Data <= (FScriptContainerElement *)&local_d8) goto LAB_141f13c82;
        }
        else {
LAB_141f13c82:
          iVar12 = (int)local_b0;
          if ((FScriptContainerElement *)&local_d8 < FStack_b8.Data + (longlong)local_b0._4_4_ * 4)
          {
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar11) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar12 = (int)local_b0;
          }
        }
        if (iVar12 == local_b0._4_4_) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&FStack_b8,(int *)((longlong)&local_b0 + 4));
        }
        local_b0 = CONCAT44(local_b0._4_4_,iVar12 + 1);
        *(uint *)(FStack_b8.Data + (longlong)iVar12 * 4) = local_d8;
        local_d4 = local_d8;
        if (GRandomizeLoadOrder != 0) goto LAB_141f14270;
        iVar12 = *(int *)&(this->ExportsThatCanHaveIOStarted).field_0x8;
        goto joined_r0x000141f13d2b;
      }
      puVar16 = *(undefined1 **)&(this->ExportIndexToPrecacheRequest).field_0x40;
      puVar15 = &(this->ExportIndexToPrecacheRequest).field_0x38;
      if (puVar16 != (undefined1 *)0x0) {
        puVar15 = puVar16;
      }
      iVar12 = *(int *)(puVar15 +
                       (ulonglong)
                       (*(int *)&(this->ExportIndexToPrecacheRequest).field_0x48 - 1U & local_d8) *
                       4);
      if (iVar12 == -1) goto LAB_141f13bc0;
      while (lVar18 = *(longlong *)&this->ExportIndexToPrecacheRequest + (longlong)iVar12 * 0x18,
            *(uint *)(*(longlong *)&this->ExportIndexToPrecacheRequest + (longlong)iVar12 * 0x18) !=
            local_d8) {
        iVar12 = *(int *)(lVar18 + 0x10);
        if (iVar12 == -1) goto LAB_141f13bc0;
      }
      if ((lVar18 == 0) || (*(IAsyncReadRequest **)(lVar18 + 8) == (IAsyncReadRequest *)0x0))
      goto LAB_141f13bc0;
      pTVar13 = TSet<TTuple<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest,0>,FDefaultSetAllocator>
                        *)&this->PrecacheRequests,*(IAsyncReadRequest **)(lVar18 + 8));
      pFVar19 = (FAsyncArchive *)&pTVar13->field_0x8;
      if (pTVar13 == (TTuple<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest> *)0x0) {
        pFVar19 = this_00;
      }
      if ((pFVar19 == (FAsyncArchive *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Req",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                              ,0xe19,L""), bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (((*(longlong *)(lVar17 + 0x28) < *(longlong *)pFVar19) ||
          (*(longlong *)&pFVar19->field_0x8 + *(longlong *)pFVar19 <
           *(longlong *)(lVar17 + 0x20) + *(longlong *)(lVar17 + 0x28))) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Export.SerialOffset >= Req->Offset && Export.SerialOffset + Export.SerialSize <= Req->Offset + Req->BytesToRead"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                              ,0xe1a,L""), bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (((*(uint **)&pFVar19->field_0x18 <= &local_d8) &&
          (&local_d8 < *(uint **)&pFVar19->field_0x18 + *(int *)&pFVar19->field_0x24)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar12 = *(int *)&pFVar19->field_0x20;
      if (iVar12 == *(int *)&pFVar19->field_0x24) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,(ForAnyElementType *)&pFVar19->field_0x18,
                            (int *)&pFVar19->field_0x24);
      }
      *(int *)&pFVar19->field_0x20 = iVar12 + 1;
      *(uint *)(*(longlong *)&pFVar19->field_0x18 + (longlong)iVar12 * 4) = local_d8;
    }
  } while (*(int *)&(this->ExportsThatCanHaveIOStarted).field_0x8 != 0);
  goto LAB_141f14552;
joined_r0x000141f13d2b:
  if (((iVar12 == 0) || (0xfffff < lStack_c8)) || (0x14 < (int)(local_d4 - local_d8)))
  goto LAB_141f14270;
  if ((*(int *)&(this->ExportsThatCanHaveIOStarted).field_0x8 < 1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar14 = **(uint **)&this->ExportsThatCanHaveIOStarted;
  if (((int)uVar14 <= (int)local_d4) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("MaybeLastExportIndex > LastExportIndex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                          ,0xe3f,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar4 = this->Linker;
  uVar20 = uVar21;
  if ((int)uVar14 < (int)pFVar4->_padding_) {
    uVar20 = ~uVar14 >> 0x1f;
  }
  if ((uVar20 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar18 = pFVar4->_padding_ + (longlong)(int)uVar14 * 0x68;
  lVar17 = *(longlong *)(lVar18 + 0x28);
  if ((lVar17 < this->CurrentBlockOffset) ||
     (this->CurrentBlockBytes + this->CurrentBlockOffset < *(longlong *)(lVar18 + 0x20) + lVar17)) {
    lVar17 = (lVar17 - lStack_c8) - local_d0;
    if (lVar17 < 0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Gap >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                          ,0xe4d,L"");
      if (bVar11) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else if (0xc000 < lVar17) goto LAB_141f14270;
    if (0x100000 < *(longlong *)(lVar18 + 0x20) + lStack_c8) goto LAB_141f14270;
    uVar20 = local_d4 + 1;
    if ((int)uVar20 <= (int)uVar14) {
      do {
        if (*(int *)&(this->ExportIndexToPrecacheRequest).field_0x8 !=
            *(int *)&(this->ExportIndexToPrecacheRequest).field_0x34) {
          puVar16 = *(undefined1 **)&(this->ExportIndexToPrecacheRequest).field_0x40;
          puVar15 = &(this->ExportIndexToPrecacheRequest).field_0x38;
          if (puVar16 != (undefined1 *)0x0) {
            puVar15 = puVar16;
          }
          iVar12 = *(int *)(puVar15 +
                           (ulonglong)
                           (*(int *)&(this->ExportIndexToPrecacheRequest).field_0x48 - 1U & uVar20)
                           * 4);
          if (iVar12 != -1) {
            do {
              if (*(uint *)(*(longlong *)&this->ExportIndexToPrecacheRequest +
                           (longlong)iVar12 * 0x18) == uVar20) goto LAB_141f14270;
              iVar12 = *(int *)(*(longlong *)&this->ExportIndexToPrecacheRequest + 0x10 +
                               (longlong)iVar12 * 0x18);
            } while (iVar12 != -1);
          }
        }
        uVar20 = uVar20 + 1;
      } while ((int)uVar20 <= (int)uVar14);
    }
    FImportOrImportIndexArray::HeapPop(&this->ExportsThatCanHaveIOStarted,(int *)&local_d4,No);
    if ((local_d4 != uVar14) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("LastExportIndex == MaybeLastExportIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                            ,0xe62,L""), bVar11)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lStack_c8 = (*(longlong *)(lVar18 + 0x28) + *(longlong *)(lVar18 + 0x20)) - local_d0;
    if ((lStack_c8 < 1) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("NewReq.BytesToRead > 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                            ,0xe64,L""), bVar11)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (((FStack_b8.Data <= (FScriptContainerElement *)&local_d4) &&
        ((FScriptContainerElement *)&local_d4 < FStack_b8.Data + (longlong)local_b0._4_4_ * 4)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar12 = (int)local_b0;
    if ((int)local_b0 == local_b0._4_4_) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&FStack_b8,(int *)((longlong)&local_b0 + 4));
    }
    local_b0 = CONCAT44(local_b0._4_4_,iVar12 + 1);
    *(uint *)(FStack_b8.Data + (longlong)iVar12 * 4) = local_d4;
    iVar12 = *(int *)&(this->ExportsThatCanHaveIOStarted).field_0x8;
    goto joined_r0x000141f13d2b;
  }
  local_res10[0] = 0xffffffff;
  FImportOrImportIndexArray::HeapPop(&this->ExportsThatCanHaveIOStarted,(int *)local_res10,No);
  if ((local_res10[0] != uVar14) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("TempExportIndex == MaybeLastExportIndex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                          ,0xe47,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((int)uVar14 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("ExportIndex >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                          ,0x6d,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_68.ImportOrExportIndex.Index = uVar14 + 1;
  local_68.Phase = Export_StartIO;
  local_68.WaitingPackage.Package = this;
  FEventLoadGraph::RemoveNode(&this->AsyncLoadingThread->EventGraph,&local_68);
LAB_141f14270:
  if (((int)local_b0 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("NewReq.ExportsToRead.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                          ,0xe68,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((this->Linker->bIsAsyncLoader == false) ||
      (this_00 = (FAsyncArchive *)this->Linker->Loader, this_00 == (FAsyncArchive *)0x0)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("AsyncLoader",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                          ,0xe6a,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_a8._0_8_ =
       FAsyncArchive::MakeEventDrivenPrecacheRequest
                 (this_00,local_d0,lStack_c8,
                  &this->AsyncLoadingThread->PrecacheHandler->PrecacheCallBack);
  local_c0 = CONCAT44(local_d4,local_d8);
  local_res8[0] = local_d8;
  if ((int)local_d8 <= (int)local_d4) {
    do {
      if (*(int *)&(this->ExportIndexToPrecacheRequest).field_0x8 !=
          *(int *)&(this->ExportIndexToPrecacheRequest).field_0x34) {
        puVar16 = *(undefined1 **)&(this->ExportIndexToPrecacheRequest).field_0x40;
        puVar15 = &(this->ExportIndexToPrecacheRequest).field_0x38;
        if (puVar16 != (undefined1 *)0x0) {
          puVar15 = puVar16;
        }
        iVar12 = *(int *)(puVar15 +
                         (ulonglong)
                         (*(int *)&(this->ExportIndexToPrecacheRequest).field_0x48 - 1U &
                         local_res8[0]) * 4);
        if (iVar12 != -1) {
          do {
            if (*(uint *)(*(longlong *)&this->ExportIndexToPrecacheRequest + (longlong)iVar12 * 0x18
                         ) == local_res8[0]) {
              bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!ExportIndexToPrecacheRequest.Contains(Index)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                                  ,0xe72,L"");
              if (bVar11) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              break;
            }
            iVar12 = *(int *)(*(longlong *)&this->ExportIndexToPrecacheRequest + 0x10 +
                             (longlong)iVar12 * 0x18);
          } while (iVar12 != -1);
        }
      }
      local_58 = local_res8;
      local_50 = local_a8;
      TSet<TTuple<int,IAsyncReadRequest_*>,TDefaultMapHashableKeyFuncs<int,IAsyncReadRequest_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<int_const_&,IAsyncReadRequest_*_const_&>_>
                ((TSet<TTuple<int,IAsyncReadRequest_*>,TDefaultMapHashableKeyFuncs<int,IAsyncReadRequest_*,0>,FDefaultSetAllocator>
                  *)&this->ExportIndexToPrecacheRequest,
                 (TPairInitializer<int_const_&,IAsyncReadRequest_*_const_&> *)(local_res18 + 1),
                 (bool *)&local_58);
      local_res8[0] = local_res8[0] + 1;
    } while ((int)local_res8[0] <= local_c0._4_4_);
  }
  uVar14 = ((uint)((ulonglong)local_a8._0_8_ >> 0x14) & 0xffff ^
           (uint)((ulonglong)local_a8._0_8_ >> 4)) * -0x7a143595;
  uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
  if (*(int *)&(this->PrecacheRequests).field_0x8 != *(int *)&(this->PrecacheRequests).field_0x34) {
    puVar16 = *(undefined1 **)&(this->PrecacheRequests).field_0x40;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = &(this->PrecacheRequests).field_0x38;
    }
    iVar12 = *(int *)(puVar16 +
                     (ulonglong)
                     (*(int *)&(this->PrecacheRequests).field_0x48 - 1U & (uVar14 >> 0x10 ^ uVar14))
                     * 4);
    if (iVar12 != -1) {
      do {
        if (*(IAsyncReadRequest **)((longlong)iVar12 * 0x38 + *(longlong *)&this->PrecacheRequests)
            == (IAsyncReadRequest *)local_a8._0_8_) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("!PrecacheRequests.Contains(Precache)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                              ,0xe75,L"");
          if (bVar11) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          break;
        }
        iVar12 = *(int *)((longlong)iVar12 * 0x38 + 0x30 + *(longlong *)&this->PrecacheRequests);
      } while (iVar12 != -1);
    }
  }
  local_98 = (FWeakAsyncPackagePtr *)local_a8;
  TSet<TTuple<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<IAsyncReadRequest_*_const_&>_>
            ((TSet<TTuple<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest,0>,FDefaultSetAllocator>
              *)&this->PrecacheRequests,local_res18,(bool *)&local_98);
  lVar18 = (longlong)(int)local_res18[0].Key * 0x38;
  lVar17 = *(longlong *)&this->PrecacheRequests;
  puVar1 = (undefined8 *)(lVar18 + 8 + lVar17);
  uVar6 = *puVar1;
  uVar7 = puVar1[1];
  puVar1 = (undefined8 *)(lVar18 + 0x18 + lVar17);
  uVar8 = *puVar1;
  pFVar9 = (FScriptContainerElement *)puVar1[1];
  uVar3 = *(undefined8 *)(lVar18 + 0x28 + lVar17);
  plVar2 = (long64 *)(lVar18 + 8 + lVar17);
  *plVar2 = local_d0;
  plVar2[1] = lStack_c8;
  puVar1 = (undefined8 *)(lVar18 + 0x18 + lVar17);
  *puVar1 = local_c0;
  puVar1[1] = FStack_b8.Data;
  *(undefined8 *)(lVar18 + 0x28 + lVar17) = local_b0;
  local_90 = (IAsyncReadRequest *)local_a8._0_8_;
  local_88 = (this->Desc).Name;
  local_80 = this->SerialNumber;
  local_48 = &local_90;
  local_40 = &local_88;
  local_d0 = uVar6;
  lStack_c8 = uVar7;
  local_c0 = uVar8;
  FStack_b8.Data = pFVar9;
  local_b0 = uVar3;
  TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<IAsyncReadRequest_*_const_&,FWeakAsyncPackagePtr_&&>_>
            ((TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
              *)&this->AsyncLoadingThread->PrecacheHandler->WaitingPackages,
             (TPairInitializer<IAsyncReadRequest_*_const_&,FWeakAsyncPackagePtr_&&> *)(local_a8 + 8)
             ,(bool *)&local_48);
  if (FStack_b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_b8.Data);
  }
LAB_141f14552:
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// TickAsyncPackage @ 141f154f0

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall
FAsyncPackage::TickAsyncPackage(FAsyncPackage *this,bool param_1,bool param_2,float *param_3)

{
  atomic<int> *paVar1;
  ulonglong uVar2;
  uint uVar3;
  FName FVar4;
  FAsyncPackage *pFVar5;
  undefined1 *puVar6;
  UObject *pUVar7;
  wchar_t *pwVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  TSet<TObjectPtr<UPackage>,DefaultKeyFuncs<TObjectPtr<UPackage>,0>,FDefaultSetAllocator> *pTVar15;
  bool bVar16;
  bool bVar17;
  Type TVar18;
  FName *pFVar19;
  FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_Tick> FVar20;
  uint *puVar21;
  FExclusiveLoadPackageTimeTracker *pFVar22;
  longlong lVar23;
  FTlsAutoCleanup FVar24;
  uint uVar25;
  UPackage *pUVar26;
  byte bVar27;
  FName FVar28;
  int iVar29;
  undefined1 *puVar30;
  uint *puVar31;
  uint uVar32;
  int iVar33;
  undefined1 local_res8 [8];
  byte local_res10;
  undefined1 local_res18 [8];
  float *local_res20;
  uint local_198;
  FColor_u_0 local_190 [2];
  FName local_188;
  FName local_180;
  int local_170;
  int local_16c;
  LARGE_INTEGER local_168;
  LARGE_INTEGER local_160;
  LARGE_INTEGER local_158;
  FTlsAutoCleanup *local_150;
  FTlsAutoCleanup local_148;
  FTlsAutoCleanup local_140;
  TSet<TObjectPtr<UPackage>,DefaultKeyFuncs<TObjectPtr<UPackage>,0>,FDefaultSetAllocator> *local_138
  ;
  int iStack_130;
  uint uStack_12c;
  undefined1 *local_128;
  undefined4 uStack_120;
  int iStack_11c;
  int local_118;
  undefined4 uStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  TSet<TObjectPtr<UPackage>,DefaultKeyFuncs<TObjectPtr<UPackage>,0>,FDefaultSetAllocator> *local_108
  ;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_100;
  undefined8 uStack_e0;
  code *local_d8;
  undefined1 *local_d0;
  FName local_c8 [4];
  undefined4 local_a4;
  
  local_res20 = param_3;
  if (((GEventDrivenLoaderEnabled) && (this->AsyncPackageLoadingState < WaitingForPostLoad)) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("!GEventDrivenLoaderEnabled || int32(AsyncPackageLoadingState) > int32(EAsyncPackageLoadingState::ProcessNewImportsAndExports)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                          ,0x1733,L""), bVar16)) {
    pcVar9 = (code *)swi(3);
    TVar18 = (*pcVar9)();
    return TVar18;
  }
  if ((this->bLoadHasFinished != false) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("!HasFinishedLoading()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                          ,0x1735,L""), bVar16)) {
    pcVar9 = (code *)swi(3);
    TVar18 = (*pcVar9)();
    return TVar18;
  }
  LOCK();
  this->ReentryCount = (atomic<int>)((int)this->ReentryCount + 1);
  UNLOCK();
  FVar20 = StatPtr_STAT_FAsyncPackage_Tick;
  if (StatPtr_STAT_FAsyncPackage_Tick == (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_Tick>)0x0)
  {
    pFVar19 = ::FName::FName(local_c8,"STAT_FAsyncPackage_Tick");
    FVar20 = (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_Tick>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FAsyncPackage_Tick,*pFVar19,
                        L"Tick AsyncPackage","STATGROUP_AsyncLoad","STATCAT_Advanced",L"Async Load",
                        false,true,ST_int64,true,false,MCR_Invalid);
  }
  bVar27 = 0;
  local_180.ComparisonIndex.Value = 0;
  local_180.Number = 0;
  FVar4 = *(FName *)FVar20;
  local_res10 = 0;
  if ((FVar4.ComparisonIndex.Value.Value != 0) || (FVar28 = local_180, FVar4.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_190[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_190[0]._s_0,(char *)*(FName *)((longlong)FVar20 + 0x10));
      bVar27 = 1;
      local_res10 = 1;
      if (-1 < CpuChannel->Enabled) {
        local_188.ComparisonIndex.Value = FVar4.ComparisonIndex.Value.Value;
        local_188.Number = FVar4.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_188,(wchar_t *)*(FName *)((longlong)FVar20 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                   ,0x1739);
        bVar27 = 3;
        local_res10 = 3;
      }
    }
    FVar28 = local_180;
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar4,CycleScopeStart);
      local_res10 = bVar27 | 4;
      FVar28 = FVar4;
    }
  }
  if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
    bVar16 = false;
  }
  else {
    bVar16 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId5946,"Package_Tick",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
               ,0x173a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId5946);
  }
  this->bUseTimeLimit = param_1;
  this->bUseFullTimeLimit = param_2;
  this->bTimeLimitExceeded = false;
  this->TimeLimit = *param_3;
  QueryPerformanceCounter(&local_168);
  dVar14 = __real_4170000000000000;
  dVar10 = (double)local_168.QuadPart * FGenericPlatformTime::SecondsPerCycle +
           __real_4170000000000000;
  this->TickStartTime = dVar10;
  if (this->LoadStartTime == 0.0) {
    pFVar5 = this->DependencyRootPackage;
    this->LoadStartTime = dVar10;
    if ((pFVar5 != (FAsyncPackage *)0x0) && (pFVar5->LoadStartTime == 0.0)) {
      pFVar5->LoadStartTime = dVar10;
    }
  }
  puVar21 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_d0 = local_res8;
  local_d8 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  local_150 = FThreadSingletonInitializer::Get
                        ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_d8,puVar21);
  local_148 = local_150[8];
  local_140 = local_150[9];
  local_150[8] = (FTlsAutoCleanup)this;
  FVar24 = (FTlsAutoCleanup)&this->AsyncLoadingThread->_padding_;
  if (this->AsyncLoadingThread == (FAsyncLoadingThread *)0x0) {
    FVar24 = (FTlsAutoCleanup)0x0;
  }
  local_150[9] = FVar24;
  do {
    iVar33 = 0;
    TVar18 = Complete;
    BeginAsyncLoad(this);
    FVar4 = (this->Desc).PackagePath.PackageName;
    pFVar22 = FExclusiveLoadPackageTimeTracker::TrackerInstance;
    if (FExclusiveLoadPackageTimeTracker::TrackerInstance == (FExclusiveLoadPackageTimeTracker *)0x0
       ) {
      pFVar22 = FExclusiveLoadPackageTimeTracker::Construct();
    }
    FExclusiveLoadPackageTimeTracker::InternalPushLoadPackage(pFVar22,FVar4);
    if (GEventDrivenLoaderEnabled == false) {
      if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
        TVar18 = CreateLinker(this);
      }
      else {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId5998,"Package_CreateLinker",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                   ,0x176e);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId5998);
        TVar18 = CreateLinker(this);
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (TVar18 == Complete) {
        if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
          TVar18 = FinishLinker(this);
        }
        else {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId6005,"Package_FinishLinker",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                     ,0x1775);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId6005);
          TVar18 = FinishLinker(this);
          FCpuProfilerTrace::OutputEndEvent();
        }
        if (TVar18 != Complete) goto LAB_141f15b63;
        if (this->bLoadHasFinished == false) {
          if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
            TVar18 = LoadImports(this);
          }
          else {
            FCpuProfilerTrace::GetOrCreateSpecId
                      (&__CpuProfilerEventSpecId6012,"Package_LoadImports",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                       ,0x177c);
            FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId6012);
            TVar18 = LoadImports(this);
            FCpuProfilerTrace::OutputEndEvent();
          }
          if (TVar18 != Complete) goto LAB_141f15b63;
          if (this->bLoadHasFinished != false) goto LAB_141f15b93;
          if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
            TVar18 = CreateImports(this);
          }
          else {
            FCpuProfilerTrace::GetOrCreateSpecId
                      (&__CpuProfilerEventSpecId6019,"Package_CreateImports",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                       ,0x1783);
            FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId6019);
            TVar18 = CreateImports(this);
            FCpuProfilerTrace::OutputEndEvent();
          }
          if (TVar18 != Complete) goto LAB_141f15b63;
          if (this->bLoadHasFinished != false) goto LAB_141f15b93;
          if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
            TVar18 = CreateExports(this);
          }
          else {
            FCpuProfilerTrace::GetOrCreateSpecId
                      (&__CpuProfilerEventSpecId6035,"Package_CreateExports",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                       ,0x1793);
            FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId6035);
            TVar18 = CreateExports(this);
            FCpuProfilerTrace::OutputEndEvent();
          }
          if (TVar18 != Complete) goto LAB_141f15b63;
          if (this->bLoadHasFinished != false) goto LAB_141f15b93;
          if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
            TVar18 = PreLoadObjects(this);
          }
          else {
            FCpuProfilerTrace::GetOrCreateSpecId
                      (&__CpuProfilerEventSpecId6042,"Package_PreLoadObjects",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                       ,0x179a);
            FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId6042);
            TVar18 = PreLoadObjects(this);
            FCpuProfilerTrace::OutputEndEvent();
          }
          if (TVar18 != Complete) goto LAB_141f15b63;
          goto LAB_141f15b6d;
        }
      }
      else {
LAB_141f15b63:
        if (this->bLoadHasFailed != false) {
LAB_141f15b6d:
          if (this->bLoadHasFinished == false) {
            iVar29 = 4;
            if (this->bLoadHasFailed != false) {
              iVar29 = iVar33;
            }
            CallCompletionCallbacks(this,true,(Type)iVar29);
          }
        }
      }
LAB_141f15b93:
      if (TVar18 == Complete) {
        local_128 = &(this->ImportedPackages).Elements.field_0x10;
        local_118 = 0;
        iVar29 = *(int *)&(this->ImportedPackages).Elements.field_0x28;
        uStack_12c = 1;
        iStack_11c = 0;
        iStack_130 = iVar33;
        if (iVar29 != 0) {
          puVar21 = *(uint **)&(this->ImportedPackages).Elements.field_0x20;
          puVar31 = (uint *)local_128;
          if (puVar21 != (uint *)0x0) {
            puVar31 = puVar21;
          }
          uVar32 = *puVar31;
          while (uVar32 == 0) {
            lVar23 = (longlong)iStack_130;
            local_118 = local_118 + 0x20;
            iStack_130 = iStack_130 + 1;
            iStack_11c = iVar29;
            if ((int)(iVar29 + -1 + (iVar29 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_130)
            goto LAB_141f15c20;
            uVar32 = puVar31[lVar23 + 1];
          }
          uStack_12c = -uVar32 & uVar32;
          uVar2 = (ulonglong)uStack_12c * 2 + 1;
          lVar23 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar23 == 0; lVar23 = lVar23 + -1) {
            }
          }
          local_170 = (int)lVar23;
          iStack_11c = local_118 + -1 + local_170;
          if (iVar29 < iStack_11c) {
            iStack_11c = iVar29;
          }
        }
LAB_141f15c20:
        local_198 = *(uint *)&(this->ImportedPackages).Elements.field_0x28;
        local_138 = &this->ImportedPackages;
        uStack_114 = local_a4;
        iStack_110 = *(int *)&(this->ImportedPackages).Elements.field_0x8 -
                     *(int *)&(this->ImportedPackages).Elements.field_0x34;
        uVar32 = local_198 & 0xffffffe0;
        TStack_100._padding_ = CONCAT44(uStack_12c,iStack_130);
        uStack_120 = 0xffffffff;
        TStack_100.CurrentBitIndex = iStack_11c;
        TStack_100.UnvisitedBitMask = 0xffffffff;
        iVar33 = (int)local_198 >> 5;
        TStack_100._28_4_ = local_a4;
        TStack_100.BaseBitIndex = local_118;
        uStack_e0 = CONCAT44(uStack_10c,iStack_110);
        local_108 = local_138;
        TStack_100.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_128;
        if (((int)local_198 < 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar17)) {
          pcVar9 = (code *)swi(3);
          TVar18 = (*pcVar9)();
          return TVar18;
        }
        uVar3 = *(uint *)&(this->ImportedPackages).Elements.field_0x28;
        if (local_198 != uVar3) {
          puVar6 = *(undefined1 **)&(this->ImportedPackages).Elements.field_0x20;
          puVar30 = &(this->ImportedPackages).Elements.field_0x10;
          if (puVar6 != (undefined1 *)0x0) {
            puVar30 = puVar6;
          }
          uVar25 = -1 << ((byte)local_198 & 0x1f) & *(uint *)(puVar30 + (longlong)iVar33 * 4);
          while (uVar25 == 0) {
            lVar23 = (longlong)iVar33;
            uVar32 = uVar32 + 0x20;
            iVar33 = iVar33 + 1;
            local_198 = uVar3;
            if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar33)
            goto LAB_141f15d53;
            uVar25 = *(uint *)(puVar30 + lVar23 * 4 + 4);
          }
          uVar2 = (ulonglong)(-uVar25 & uVar25) * 2 + 1;
          lVar23 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar23 == 0; lVar23 = lVar23 + -1) {
            }
          }
          local_16c = (int)lVar23;
          local_198 = (uVar32 - 1) + local_16c;
          if ((int)uVar3 < (int)local_198) {
            local_198 = uVar3;
          }
        }
LAB_141f15d53:
        while( true ) {
          pTVar15 = local_108;
          if (*(int *)&(local_108->Elements).field_0x8 - *(int *)&(local_108->Elements).field_0x34
              != (int)uStack_e0) {
            local_res18[0] = 0;
            `TSparseArray<TSparseSetElement<TObjectPtr<UPackage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
          }
          if (((TStack_100.CurrentBitIndex == local_198) &&
              (TStack_100.Array ==
               (TBitArray<FDefaultBitArrayAllocator> *)&(this->ImportedPackages).Elements.field_0x10
              )) && (pTVar15 == &this->ImportedPackages)) goto LAB_141f15dfe;
          lVar23 = *(longlong *)
                    (*(longlong *)&pTVar15->Elements + (longlong)TStack_100.CurrentBitIndex * 0x10);
          if ((((lVar23 != 0) && (lVar23 = *(longlong *)(lVar23 + 0x48), lVar23 != 0)) &&
              (lVar23 = *(longlong *)(lVar23 + 0x20), lVar23 != 0)) &&
             ((lVar23 = *(longlong *)(lVar23 + 0x420), lVar23 != 0 &&
              (*(char *)(lVar23 + 0x59a) == '\0')))) break;
          TStack_100.UnvisitedBitMask = TStack_100.UnvisitedBitMask & ~TStack_100._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_100);
        }
        TVar18 = PendingImports;
      }
    }
    else {
LAB_141f15dfe:
      if (this->bLoadHasFailed == false) {
        if (this->bLoadHasFinished == false) {
          if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
            TVar18 = FinishExternalReadDependencies(this);
          }
          else {
            FCpuProfilerTrace::GetOrCreateSpecId
                      (&__CpuProfilerEventSpecId6068,"Package_ExternalReadDependencies",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                       ,0x17b4);
            FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId6068);
            TVar18 = FinishExternalReadDependencies(this);
            FCpuProfilerTrace::OutputEndEvent();
          }
          if (TVar18 != Complete) goto LAB_141f15f04;
        }
        if ((this->bLoadHasFailed == false) && (this->bLoadHasFinished == false)) {
          if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
            TVar18 = PostLoadObjects(this);
          }
          else {
            FCpuProfilerTrace::GetOrCreateSpecId
                      (&__CpuProfilerEventSpecId6076,"Package_PostLoadObjects",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                       ,0x17bc);
            FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId6076);
            TVar18 = PostLoadObjects(this);
            FCpuProfilerTrace::OutputEndEvent();
          }
        }
      }
    }
LAB_141f15f04:
    pUVar26 = (UPackage *)0x0;
    if (this->Linker != (FLinkerLoad *)0x0) {
      pUVar26 = (UPackage *)this->Linker->_padding_;
    }
    pFVar22 = FExclusiveLoadPackageTimeTracker::TrackerInstance;
    if (FExclusiveLoadPackageTimeTracker::TrackerInstance == (FExclusiveLoadPackageTimeTracker *)0x0
       ) {
      pFVar22 = FExclusiveLoadPackageTimeTracker::Construct();
    }
    FExclusiveLoadPackageTimeTracker::InternalPopLoadPackage(pFVar22,pUVar26,(UObject *)0x0);
    EndAsyncLoad(this);
    if ((TVar18 == Complete) || (this->bLoadHasFailed != false)) {
      TVar18 = FinishObjects(this);
    }
    if ((this->AsyncLoadingThread->IsLoadingSuspended).Counter != 0) break;
    pUVar7 = this->LastObjectWorkWasPerformedOn;
    pwVar8 = this->LastTypeOfWorkPerformed;
    dVar10 = this->TickStartTime;
    dVar13 = (double)this->TimeLimit;
    if (this->bUseTimeLimit != false) {
      QueryPerformanceCounter(&local_160);
      dVar12 = (double)local_160.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar14;
      dVar11 = dVar12 - dVar10;
      if ((dVar13 < dVar11) && (GWarnIfTimeLimitExceeded != 0)) {
        IsTimeLimitExceededPrint(dVar10,dVar12,LastTestTime,dVar13,pwVar8,pUVar7);
        LastTestTime = dVar12;
        break;
      }
      LastTestTime = dVar12;
      if (dVar13 < dVar11) break;
    }
    if ((byte)LogStreaming._0_1_ < 6) {
      if (GGCSingleton->GCWantsToRunCounter != (TAtomic<int>)0x0) break;
    }
    else if (GGCSingleton->GCWantsToRunCounter != (TAtomic<int>)0x0) {
      UE::Logging::Private::BasicLog<6>
                ((FStaticBasicLogRecord *)&PTR_u_Timing_out_asyn_1507e7988,
                 (FLogCategoryBase *)&LogStreaming);
      break;
    }
  } while (TVar18 == TimeOut);
  if ((((this->bUseTimeLimit == false) && (TVar18 == TimeOut)) &&
      ((this->AsyncLoadingThread->IsLoadingSuspended).Counter == 0)) &&
     ((GGCSingleton->GCWantsToRunCounter == (TAtomic<int>)0x0 &&
      (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                          ("bUseTimeLimit || LoadingState != EAsyncPackageState::TimeOut || AsyncLoadingThread.IsAsyncLoadingSuspendedInternal() || IsGarbageCollectionWaiting()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                           ,0x17d0,L""), bVar17)))) {
    pcVar9 = (code *)swi(3);
    TVar18 = (*pcVar9)();
    return TVar18;
  }
  if ((this->LinkerRoot != (UPackage *)0x0) && (TVar18 == Complete)) {
    this->LinkerRoot->bHasBeenFullyLoaded = '\x01';
  }
  if ((this->bLoadHasFinished == false) && (TVar18 != Complete)) {
    this->bLoadHasFinished = false;
    this->LastObjectWorkWasPerformedOn = (UObject *)0x0;
    this->LastTypeOfWorkPerformed = (wchar_t *)0x0;
  }
  else {
    this->bLoadHasFinished = true;
    this->LastObjectWorkWasPerformedOn = (UObject *)0x0;
    this->LastTypeOfWorkPerformed = (wchar_t *)0x0;
    if (GEventDrivenLoaderEnabled != false) {
      if ((this->AsyncPackageLoadingState != PostLoad_Etc) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("AsyncPackageLoadingState == EAsyncPackageLoadingState::PostLoad_Etc",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                              ,0x17e1,L""), bVar17)) {
        pcVar9 = (code *)swi(3);
        TVar18 = (*pcVar9)();
        return TVar18;
      }
      this->AsyncPackageLoadingState = PackageComplete;
    }
  }
  QueryPerformanceCounter(&local_158);
  dVar10 = (double)*local_res20 -
           (((double)local_158.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar14) -
           this->TickStartTime);
  if (dVar10 <= 0.0) {
    dVar10 = 0.0;
  }
  *local_res20 = (float)dVar10;
  LOCK();
  paVar1 = &this->ReentryCount;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (((int)*paVar1 < 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("ReentryCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                          ,0x17e9,L""), bVar17)) {
    pcVar9 = (code *)swi(3);
    TVar18 = (*pcVar9)();
    return TVar18;
  }
  local_150[8] = local_148;
  local_150[9] = local_140;
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  bVar27 = local_res10;
  if ((local_res10 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((bVar27 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((bVar27 & 4) != 0) {
    FThreadStats::AddMessage(FVar28,CycleScopeEnd);
  }
  return TVar18;
}

// UpdateLoadPercentage @ 141f19340

void __thiscall FAsyncPackage::UpdateLoadPercentage(FAsyncPackage *this)

{
  int iVar1;
  FLinkerLoad *pFVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  
  pFVar2 = this->Linker;
  fVar6 = 0.0;
  if (pFVar2 == (FLinkerLoad *)0x0) {
    iVar5 = (this->DeferredPostLoadObjects).ArrayNum;
    if (iVar5 < 1) goto LAB_141f193a9;
    fVar6 = (float)this->DeferredPostLoadIndex;
  }
  else {
    iVar5 = (int)pFVar2->_padding_;
    iVar1 = (this->DeferredPostLoadObjects).ArrayNum;
    iVar4 = iVar5;
    if (iVar5 < iVar1) {
      iVar4 = iVar1;
    }
    iVar5 = iVar4 + (int)pFVar2->_padding_ + iVar5;
    fVar6 = (float)(this->DeferredPostLoadIndex + this->ExportIndex + this->LoadImportIndex) *
            __real_42c80000;
  }
  fVar6 = fVar6 / (float)iVar5;
LAB_141f193a9:
  fVar3 = this->LoadPercentage;
  if (this->LoadPercentage <= fVar6) {
    fVar3 = fVar6;
  }
  this->LoadPercentage = fVar3;
  return;
}

