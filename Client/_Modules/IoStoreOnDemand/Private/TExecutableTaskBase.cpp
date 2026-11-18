// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 17

// ExecuteTask @ 1445ccea0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<``UE::IoStore::HttpIoDispatcher::FHttpDispatcher::ProcessHttpRequests'::__l9::<lambda_1>::operator()'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  ``UE::IoStore::HttpIoDispatcher::FHttpDispatcher::ProcessHttpRequests'::__l9::<lambda_1>::
  operator()'::__l2::<lambda_1>::operator()((void *)((longlong)this + 0xd8));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x140));
  IoStore::FMultiEndpointHttpClientResponse::~FMultiEndpointHttpClientResponse
            ((FMultiEndpointHttpClientResponse *)((longlong)this + 0xe8));
  return;
}

// ExecuteTask @ 1445ccee0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<``UE::IoStore::FOnDemandInstallCache::Resolve'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  IoStore::FOnDemandInstallCache::CompleteRequest
            (*(FOnDemandInstallCache **)((longlong)this + 0xd8),
             *(FIoRequestImpl **)((longlong)this + 0xe0),
             -(uint)(*(char *)((longlong)this + 0xe8) != '\0') & ReadError);
  return;
}

// ExecuteTask @ 1445ccf10

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<``UE::IoStore::FOnDemandContentInstaller::ExecuteInstallRequest'::__l112::<lambda_2>::operator()'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  ``UE::IoStore::FOnDemandContentInstaller::ExecuteInstallRequest'::__l112::<lambda_2>::operator()'
  ::__l2::<lambda_1>::operator()((void *)((longlong)this + 0xd8));
  FIoHttpResponse::~FIoHttpResponse((FIoHttpResponse *)((longlong)this + 0xf8));
  return;
}

// ExecuteTask @ 1445ccf40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<``UE::IoStore::FOnDemandContentInstaller::ExecuteInstallRequest'::__l114::<lambda_3>::operator()'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  int *piVar1;
  int iVar2;
  BufCore *this_00;
  
  IoStore::FOnDemandContentInstaller::ProcessDownloadedChunk
            (*(FOnDemandContentInstaller **)((longlong)this + 0xd8),
             (FIoHash *)((longlong)this + 0xe0),*(uint *)((longlong)this + 0xf4),
             *(EIoErrorCode *)((longlong)this + 0xf8),*(uint *)((longlong)this + 0xfc),
             (FIoBuffer *)((longlong)this + 0x100));
  this_00 = *(BufCore **)((longlong)this + 0x100);
  if (this_00 != (BufCore *)0x0) {
    FIoBuffer::BufCore::CheckRefCount(this_00);
    LOCK();
    piVar1 = &this_00->NumRefs;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FIoBuffer::BufCore::~BufCore(this_00);
      ::operator_delete(this_00,0x20);
      return;
    }
  }
  return;
}

// ExecuteTask @ 1445ccfd0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::IoStore::FOnDemandIoBackend::BeginCreateDefaultHostGroup'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  `UE::IoStore::FOnDemandIoBackend::BeginCreateDefaultHostGroup'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 1445ccff0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::IoStore::FOnDemandContentInstaller::CancelInstallRequest'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  `UE::IoStore::FOnDemandContentInstaller::CancelInstallRequest'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0xd8));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0xe8));
  return;
}

// ExecuteTask @ 1445cd020

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::IoStore::FOnDemandContentInstaller::EnqueueInstallRequest'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  IoStore::FOnDemandContentInstaller::ProcessInstallRequest
            (*(FOnDemandContentInstaller **)((longlong)this + 0xd8),
             *(FRequest **)((longlong)this + 0xe0));
  return;
}

// ExecuteTask @ 1445cd040

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::IoStore::FOnDemandContentInstaller::UpdateInstallRequestPriority'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  `UE::IoStore::FOnDemandContentInstaller::UpdateInstallRequestPriority'::__l2::<lambda_1>::
  operator()((void *)((longlong)this + 0xd8));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0xe8));
  return;
}

// ExecuteTask @ 1445cd070

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<``UE::IoStore::FOnDemandIoBackend::IssueHttpRequest'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  IoStore::FOnDemandIoBackend::CompleteRequest
            (*(FOnDemandIoBackend **)((longlong)this + 0xd8),
             *(FChunkRequest **)((longlong)this + 0xe0));
  return;
}

// ExecuteTask @ 1445cd090

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::IoStore::FOnDemandContentInstaller::TryExecuteNextRequest'::__l7::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  undefined8 local_18;
  longlong local_10;
  
  local_10 = *(longlong *)((longlong)this + 0xe0);
  local_18 = *(undefined8 *)((longlong)this + 0xd8);
  (*(code *)(&
            PTR_VisitApplyEncoded<0,0,_UE::IoStore::FOnDemandContentInstaller::ExecuteRequest_::__l2::FVisitor_&,TVariant<FEmptyVariantState,UE::IoStore::FOnDemandContentInstaller::FRequest::FInstall,UE::IoStore::FOnDemandContentInstaller::FRequest::FPurge,UE::IoStore::FOnDemandContentInstaller::FRequest::FDefrag,UE::IoStore::FOnDemandContentInstaller::FRequest::FVerify,UE::IoStore::FOnDemandContentInstaller::FRequest::FFlushLastAccess>_&>_150d7f340
            )[*(byte *)(local_10 + 0x140)])(&local_18);
  return;
}

// ExecuteTask @ 1445cd0e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::IoStore::FOnDemandIoBackend::Resolve'::__l23::<lambda_1>,void,void>::
ExecuteTask(void *this)

{
  IoStore::FOnDemandIoBackend::CompleteRequest
            (*(FOnDemandIoBackend **)((longlong)this + 0xd8),
             *(FChunkRequest **)((longlong)this + 0xe0));
  return;
}

// ExecuteTask @ 1445cd100

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EIoHttpFlags": Some values do not have unique names */

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::IoStore::HttpIoDispatcher::FHttpDispatcher::CancelRequest'::__l32::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  FIoHttpRange local_res8 [4];
  TArray<FAnsiString,TSizedDefaultAllocator<32>_> local_18;
  
  local_res8[0].Max = 0;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  local_res8[0].Min = 0xffffffff;
  IoStore::HttpIoDispatcher::FHttpDispatcher::CompleteRequest
            (*(FHttpDispatcher **)((longlong)this + 0xd8),*(FHttpRequest **)((longlong)this + 0xe0),
             &local_18,&(*(FHttpRequest **)((longlong)this + 0xe0))->Buffer,local_res8,0,false);
  DestructItems<FAnsiString,int>((FAnsiString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// ExecuteTask @ 1445cd180

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::IoStore::FOnDemandInstallCache::Resolve'::__l33::<lambda_1>,void,void>::
ExecuteTask(void *this)

{
  IoStore::FOnDemandInstallCache::CompleteRequest
            (*(FOnDemandInstallCache **)((longlong)this + 0xd8),
             *(FIoRequestImpl **)((longlong)this + 0xe0),Ok);
  return;
}

// ExecuteTask @ 1445cd1a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EIoHttpFlags": Some values do not have unique names */

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::IoStore::HttpIoDispatcher::FHttpDispatcher::TryReadFromCache'::__l11::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  FIoHttpRange local_res8 [4];
  TArray<FAnsiString,TSizedDefaultAllocator<32>_> local_18;
  
  local_res8[0].Max = 0;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  local_res8[0].Min = 0xffffffff;
  IoStore::HttpIoDispatcher::FHttpDispatcher::CompleteRequest
            (*(FHttpDispatcher **)((longlong)this + 0xd8),*(FHttpRequest **)((longlong)this + 0xe0),
             &local_18,&(*(FHttpRequest **)((longlong)this + 0xe0))->Buffer,local_res8,200,true);
  DestructItems<FAnsiString,int>((FAnsiString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// ExecuteTask @ 1445cd220

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::IoStore::FOnDemandContentInstaller::TryExecuteNextRequest'::__l27::<lambda_2>,void,void>
::ExecuteTask(void *this)

{
  `UE::IoStore::FOnDemandContentInstaller::TryExecuteNextRequest'::__l27::<lambda_2>::operator()
            ((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 1445cd240

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::IoStore::FOnDemandIoBackend::Resolve'::__l33::<lambda_2>,void,void>::
ExecuteTask(void *this)

{
  int *piVar1;
  
  LOCK();
  piVar1 = (int *)(*(longlong *)((longlong)this + 0xd8) + 0x188);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  IoStore::FOnDemandIoBackend::CompleteCacheRead
            (*(FOnDemandIoBackend **)((longlong)this + 0xd8),
             *(FChunkRequest **)((longlong)this + 0xe0));
  return;
}

// ExecuteTask @ 1445cd270

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::IoStore::HttpIoDispatcher::FHttpDispatcher::TryReadFromCache'::__l14::<lambda_2>,void,void>
::ExecuteTask(void *this)

{
  `UE::IoStore::HttpIoDispatcher::FHttpDispatcher::TryReadFromCache'::__l14::<lambda_2>::operator()
            ((void *)((longlong)this + 0xd8));
  return;
}

