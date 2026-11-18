// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AutomationController
// Functions: 16

// DestroyObject @ 148c4d080

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FAutomationGroupFilter,SharedPointerInternals::DefaultDeleter<FAutomationGroupFilter>,1>
::DestroyObject(TReferenceControllerWithDeleter<FAutomationGroupFilter,SharedPointerInternals::DefaultDeleter<FAutomationGroupFilter>,1>
                *this)

{
  FAutomationGroupFilter *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FAutomationGroupFilter *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148c4d091. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 148c4d0e0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&>,SharedPointerInternals::DefaultDeleter<TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&>,SharedPointerInternals::DefaultDeleter<TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&>_>,1>
                *this)

{
  if (this->Object != (TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&> *)0x0) {
    TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&>::_scalar_deleting_destructor_
              (this->Object,1);
    return;
  }
  return;
}

// DestroyObject @ 148c58b40

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FAutomationTestExcludeOptions,SharedPointerInternals::DefaultDeleter<FAutomationTestExcludeOptions>,1>
::DestroyObject(TReferenceControllerWithDeleter<FAutomationTestExcludeOptions,SharedPointerInternals::DefaultDeleter<FAutomationTestExcludeOptions>,1>
                *this)

{
  FAutomationTestExcludeOptions *pFVar1;
  ForElementType<FSetElementId> FVar2;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FAutomationTestExcludeOptions *)0x0) {
    (pFVar1->Platforms).HashSize = 0;
    FVar2 = (pFVar1->Platforms).Hash.SecondaryData;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FVar2);
    }
    TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&(pFVar1->Platforms).Elements);
    (pFVar1->RHIs).HashSize = 0;
    FVar2 = (pFVar1->RHIs).Hash.SecondaryData;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FVar2);
    }
    TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&(pFVar1->RHIs).Elements);
    ::operator_delete(pFVar1,0xb8);
  }
  return;
}

// DestroyObject @ 148c58bc0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FAutomationControllerManager::FComparisonEntry,SharedPointerInternals::DefaultDeleter<FAutomationControllerManager::FComparisonEntry>,1>
::DestroyObject(TReferenceControllerWithDeleter<FAutomationControllerManager::FComparisonEntry,SharedPointerInternals::DefaultDeleter<FAutomationControllerManager::FComparisonEntry>,1>
                *this)

{
  FComparisonEntry *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FComparisonEntry *)0x0) {
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)&(pFVar1->PendingComparison).field_0x8);
    ::operator_delete(pFVar1,0x30);
    return;
  }
  return;
}

// DestroyObject @ 148c58c00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FAutomationWorkerFindWorkersResponse,FAutomationControllerManager>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FAutomationWorkerFindWorkersResponse,FAutomationControllerManager>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TRawMessageHandler<FAutomationWorkerFindWorkersResponse,FAutomationControllerManager>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FAutomationWorkerFindWorkersResponse,FAutomationControllerManager>_>,1>
                *this)

{
  TRawMessageHandler<FAutomationWorkerFindWorkersResponse,FAutomationControllerManager> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TRawMessageHandler<FAutomationWorkerFindWorkersResponse,FAutomationControllerManager>
                 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148c58c11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pTVar1->_padding_ + 8))(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 148c58c20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FAutomationWorkerImageComparisonResults,FAutomationControllerManager>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FAutomationWorkerImageComparisonResults,FAutomationControllerManager>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TRawMessageHandler<FAutomationWorkerImageComparisonResults,FAutomationControllerManager>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FAutomationWorkerImageComparisonResults,FAutomationControllerManager>_>,1>
                *this)

{
  TRawMessageHandler<FAutomationWorkerImageComparisonResults,FAutomationControllerManager> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TRawMessageHandler<FAutomationWorkerImageComparisonResults,FAutomationControllerManager>
                 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148c58c31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pTVar1->_padding_ + 8))(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 148c58c40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FAutomationWorkerPong,FAutomationControllerManager>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FAutomationWorkerPong,FAutomationControllerManager>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TRawMessageHandler<FAutomationWorkerPong,FAutomationControllerManager>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FAutomationWorkerPong,FAutomationControllerManager>_>,1>
                *this)

{
  TRawMessageHandler<FAutomationWorkerPong,FAutomationControllerManager> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TRawMessageHandler<FAutomationWorkerPong,FAutomationControllerManager> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148c58c51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pTVar1->_padding_ + 8))(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 148c58c60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FAutomationWorkerRequestNextNetworkCommand,FAutomationControllerManager>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FAutomationWorkerRequestNextNetworkCommand,FAutomationControllerManager>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TRawMessageHandler<FAutomationWorkerRequestNextNetworkCommand,FAutomationControllerManager>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FAutomationWorkerRequestNextNetworkCommand,FAutomationControllerManager>_>,1>
                *this)

{
  TRawMessageHandler<FAutomationWorkerRequestNextNetworkCommand,FAutomationControllerManager>
  *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TRawMessageHandler<FAutomationWorkerRequestNextNetworkCommand,FAutomationControllerManager>
                 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148c58c71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pTVar1->_padding_ + 8))(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 148c58c80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FAutomationWorkerRequestTestsReplyComplete,FAutomationControllerManager>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FAutomationWorkerRequestTestsReplyComplete,FAutomationControllerManager>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TRawMessageHandler<FAutomationWorkerRequestTestsReplyComplete,FAutomationControllerManager>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FAutomationWorkerRequestTestsReplyComplete,FAutomationControllerManager>_>,1>
                *this)

{
  TRawMessageHandler<FAutomationWorkerRequestTestsReplyComplete,FAutomationControllerManager>
  *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TRawMessageHandler<FAutomationWorkerRequestTestsReplyComplete,FAutomationControllerManager>
                 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148c58c91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pTVar1->_padding_ + 8))(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 148c58ca0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FAutomationWorkerRunTestsReply,FAutomationControllerManager>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FAutomationWorkerRunTestsReply,FAutomationControllerManager>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TRawMessageHandler<FAutomationWorkerRunTestsReply,FAutomationControllerManager>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FAutomationWorkerRunTestsReply,FAutomationControllerManager>_>,1>
                *this)

{
  TRawMessageHandler<FAutomationWorkerRunTestsReply,FAutomationControllerManager> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TRawMessageHandler<FAutomationWorkerRunTestsReply,FAutomationControllerManager> *)
                0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148c58cb1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pTVar1->_padding_ + 8))(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 148c58cc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FAutomationWorkerScreenImage,FAutomationControllerManager>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FAutomationWorkerScreenImage,FAutomationControllerManager>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TRawMessageHandler<FAutomationWorkerScreenImage,FAutomationControllerManager>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FAutomationWorkerScreenImage,FAutomationControllerManager>_>,1>
                *this)

{
  TRawMessageHandler<FAutomationWorkerScreenImage,FAutomationControllerManager> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TRawMessageHandler<FAutomationWorkerScreenImage,FAutomationControllerManager> *)0x0
     ) {
                    /* WARNING: Could not recover jumptable at 0x000148c58cd1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pTVar1->_padding_ + 8))(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 148c58ce0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FAutomationWorkerTelemetryData,FAutomationControllerManager>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FAutomationWorkerTelemetryData,FAutomationControllerManager>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TRawMessageHandler<FAutomationWorkerTelemetryData,FAutomationControllerManager>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FAutomationWorkerTelemetryData,FAutomationControllerManager>_>,1>
                *this)

{
  TRawMessageHandler<FAutomationWorkerTelemetryData,FAutomationControllerManager> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TRawMessageHandler<FAutomationWorkerTelemetryData,FAutomationControllerManager> *)
                0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148c58cf1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pTVar1->_padding_ + 8))(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 148c58d00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FAutomationWorkerTestDataRequest,FAutomationControllerManager>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FAutomationWorkerTestDataRequest,FAutomationControllerManager>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TRawMessageHandler<FAutomationWorkerTestDataRequest,FAutomationControllerManager>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FAutomationWorkerTestDataRequest,FAutomationControllerManager>_>,1>
                *this)

{
  TRawMessageHandler<FAutomationWorkerTestDataRequest,FAutomationControllerManager> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TRawMessageHandler<FAutomationWorkerTestDataRequest,FAutomationControllerManager> *
                )0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148c58d11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pTVar1->_padding_ + 8))(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 148c58d20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FAutomationWorkerWorkerOffline,FAutomationControllerManager>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FAutomationWorkerWorkerOffline,FAutomationControllerManager>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TRawMessageHandler<FAutomationWorkerWorkerOffline,FAutomationControllerManager>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FAutomationWorkerWorkerOffline,FAutomationControllerManager>_>,1>
                *this)

{
  TRawMessageHandler<FAutomationWorkerWorkerOffline,FAutomationControllerManager> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TRawMessageHandler<FAutomationWorkerWorkerOffline,FAutomationControllerManager> *)
                0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148c58d31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pTVar1->_padding_ + 8))(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 148c58d40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FAutomationControllerManager,SharedPointerInternals::DefaultDeleter<FAutomationControllerManager>,1>
::DestroyObject(TReferenceControllerWithDeleter<FAutomationControllerManager,SharedPointerInternals::DefaultDeleter<FAutomationControllerManager>,1>
                *this)

{
  FAutomationControllerManager *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FAutomationControllerManager *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148c58d51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pFVar1 + 0x1b0))(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 148c58d60

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FAutomationReport,SharedPointerInternals::DefaultDeleter<FAutomationReport>,1>
::DestroyObject(TReferenceControllerWithDeleter<FAutomationReport,SharedPointerInternals::DefaultDeleter<FAutomationReport>,1>
                *this)

{
  FAutomationReport *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FAutomationReport *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148c58d71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

