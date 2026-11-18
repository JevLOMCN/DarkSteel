// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 493

// Allocator'' @ 140f90dc0

void __cdecl
`dynamic_initializer_for_'UE::IoStore::FHttpIoDispatcherBackend::FResolvedRequest::Allocator__(void)

{
  FSlab *pFVar1;
  FSlab *pFVar2;
  longlong lVar3;
  
  pFVar1 = ::operator_new(0x1208);
  if (pFVar1 == (FSlab *)0x0) {
    pFVar1 = (FSlab *)0x0;
  }
  else {
    memset(&pFVar1->field_0x4,0,0x1204);
    pFVar1->Allocated = 0;
    pFVar1->Freed = 0;
    lVar3 = 0x40;
    pFVar2 = pFVar1;
    do {
      pFVar2 = (FSlab *)&pFVar2->Elements[0].Slab;
      *(FSlab **)pFVar2 = (FSlab *)0x0;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  UE::IoStore::FHttpIoDispatcherBackend::FResolvedRequest::Allocator.CurrentSlab = pFVar1;
  atexit(`dynamic_atexit_destructor_for_'UE::IoStore::FHttpIoDispatcherBackend::FResolvedRequest::
         Allocator__);
  return;
}

// `dynamic_initializer_for_'CVarCompleteMaterializeTaskPriority'' @ 140f90e40

void __cdecl UE::IoStore::_dynamic_initializer_for__CVarCompleteMaterializeTaskPriority__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarCompleteMaterializeTaskPriority,L"ias.CompleteMaterializeTaskPriority",
             &GCompleteMaterializeTaskPriority,
             L"Task priority for the CompleteCacheRead task (0 = foreground/high, 1 = foreground/normal, 2 = background/high, 3 = background/normal, 4 = background/low)."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarCompleteMaterializeTaskPriority__);
  return;
}

// `dynamic_initializer_for_'CVarOnDemandBackendThreadPriority'' @ 140f90e90

void __cdecl UE::IoStore::_dynamic_initializer_for__CVarOnDemandBackendThreadPriority__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarOnDemandBackendThreadPriority,L"ias.onDemandBackendThreadPriority",
             &GOnDemandBackendThreadPriorityIndex,
             L"Thread priority of the on demand backend thread: 0=Lowest, 1=BelowNormal, 2=SlightlyBelowNormal, 3=Normal, 4=AboveNormal\nNote that this is switchable at runtime"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarOnDemandBackendThreadPriority__);
  return;
}

// `dynamic_initializer_for_'CVar_ContentInstallerEnableHttpCancel'' @ 140f90ee0

void __cdecl
UE::IoStore::CVars::_dynamic_initializer_for__CVar_ContentInstallerEnableHttpCancel__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_ContentInstallerEnableHttpCancel,L"iostore.ContentInstallerEnableHttpCancel",
             &bContentInstallerEnableHttpCancel,
             L"Enable canceling HTTP requests when an install request is canceled",0);
  atexit(_dynamic_atexit_destructor_for__CVar_ContentInstallerEnableHttpCancel__);
  return;
}

// `dynamic_initializer_for_'CVar_ContentInstallerFlushOnIdle'' @ 140f90f30

void __cdecl UE::IoStore::CVars::_dynamic_initializer_for__CVar_ContentInstallerFlushOnIdle__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_ContentInstallerFlushOnIdle,L"iostore.ContentInstallerFlushOnIdle",
             &bContentInstallerFlushOnIdle,
             L"When the content installer runs out of tasks, it will flush any pending iochunks to disk."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVar_ContentInstallerFlushOnIdle__);
  return;
}

// `dynamic_initializer_for_'CVar_DisplayOnScreenStatistics'' @ 140f90f80

void __cdecl UE::IoStore::_dynamic_initializer_for__CVar_DisplayOnScreenStatistics__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_DisplayOnScreenStatistics,L"ias.DisplayOnScreenStatistics",
             &GIasDisplayOnScreenStatistics,L"Enables display of Ias on screen statistics",0);
  atexit(_dynamic_atexit_destructor_for__CVar_DisplayOnScreenStatistics__);
  return;
}

// `dynamic_initializer_for_'CVar_DistributedEndpointAttemptCount'' @ 140f90fd0

void __cdecl UE::IoStore::_dynamic_initializer_for__CVar_DistributedEndpointAttemptCount__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_DistributedEndpointAttemptCount,L"ias.DistributedEndpointAttemptCount",
             &GDistributedEndpointAttemptCount,
             L"Number of times we should try to resolve a distributed endpoint befor eusing the fallback url (if there is one)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVar_DistributedEndpointAttemptCount__);
  return;
}

// `dynamic_initializer_for_'CVar_DistributedEndpointFallbackUrl'' @ 140f91020

void __cdecl
UE::IoStore::Config::_dynamic_initializer_for__CVar_DistributedEndpointFallbackUrl__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_DistributedEndpointFallbackUrl,L"ias.DistributedEndpointFallbackUrl",
             &GDistributedEndpointFallbackUrl,
             L"CDN url to be used if a distributed endpoint cannot be reached (overrides IoStoreOnDemand.ini)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVar_DistributedEndpointFallbackUrl__);
  return;
}

// `dynamic_initializer_for_'CVar_DistributedEndpointRetryWaitTime'' @ 140f91070

void __cdecl UE::IoStore::_dynamic_initializer_for__CVar_DistributedEndpointRetryWaitTime__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_DistributedEndpointRetryWaitTime,L"ias.DistributedEndpointRetryWaitTime",
             &GDistributedEndpointRetryWaitTime,
             L"How long to wait (in seconds) after failing to resolve a distributed endpoint before retrying"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVar_DistributedEndpointRetryWaitTime__);
  return;
}

// `dynamic_initializer_for_'CVar_DistributedEndpointTimeout'' @ 140f910c0

void __cdecl UE::IoStore::_dynamic_initializer_for__CVar_DistributedEndpointTimeout__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_DistributedEndpointTimeout,L"ias.DistributedEndpointTimeout",
             &GDistributedEndpointTimeout,
             L"How long to wait (in seconds) for a distributed endoint resolve request before timing out"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVar_DistributedEndpointTimeout__);
  return;
}

// `dynamic_initializer_for_'CVar_EnableConcurrentRequests'' @ 140f91110

void __cdecl UE::IoStore::CVars::_dynamic_initializer_for__CVar_EnableConcurrentRequests__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVar_EnableConcurrentRequests,
             L"iostore.ContentInstallerEnableConcurrentInstallRequests",local_res8,
             L"Enable the content installer to install chunks for multiple requests concurrently.",
             0x2000);
  atexit(_dynamic_atexit_destructor_for__CVar_EnableConcurrentRequests__);
  return;
}

// `dynamic_initializer_for_'CVar_EnableRequestHandleClear'' @ 140f91160

void __cdecl UE::IoStore::_dynamic_initializer_for__CVar_EnableRequestHandleClear__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_EnableRequestHandleClear,L"ias.EnableRequestHandleClear",
             &GIasEnableRequestHandleClear,
             L"When enabled FChunkRequest::HttpRequest will be cleared when the request callback is triggered"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVar_EnableRequestHandleClear__);
  return;
}

// `dynamic_initializer_for_'CVar_GIasHttpPollTimeoutMs'' @ 140f911b0

void __cdecl UE::IoStore::_dynamic_initializer_for__CVar_GIasHttpPollTimeoutMs__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_GIasHttpPollTimeoutMs,L"ias.HttpPollTimeoutMs",&GIasHttpPollTimeoutMs,
             L"Http tick poll timeout in milliseconds",0);
  atexit(_dynamic_atexit_destructor_for__CVar_GIasHttpPollTimeoutMs__);
  return;
}

// `dynamic_initializer_for_'CVar_GIasHttpRateLimitKiBPerSecond'' @ 140f91200

void __cdecl UE::IoStore::_dynamic_initializer_for__CVar_GIasHttpRateLimitKiBPerSecond__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_GIasHttpRateLimitKiBPerSecond,L"ias.HttpRateLimitKiBPerSecond",
             &GIasHttpRateLimitKiBPerSecond,L"Http throttle limit in KiBPerSecond",0);
  atexit(_dynamic_atexit_destructor_for__CVar_GIasHttpRateLimitKiBPerSecond__);
  return;
}

// `dynamic_initializer_for_'CVar_GIasHttpRecvBufKiB'' @ 140f91250

void __cdecl UE::IoStore::_dynamic_initializer_for__CVar_GIasHttpRecvBufKiB__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = OnHttpClientCVarChanged;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_GIasHttpRecvBufKiB,L"ias.HttpRecvBufKiB",&GIasHttpRecvBufKiB,L"Recv buffer size",
             (TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__CVar_GIasHttpRecvBufKiB__);
  return;
}

// `dynamic_initializer_for_'CVar_GIasHttpSendBufKiB'' @ 140f91390

void __cdecl UE::IoStore::_dynamic_initializer_for__CVar_GIasHttpSendBufKiB__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = OnHttpClientCVarChanged;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_GIasHttpSendBufKiB,L"ias.HttpSendBufKiB",&GIasHttpSendBufKiB,L"Send buffer size",
             (TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__CVar_GIasHttpSendBufKiB__);
  return;
}

// `dynamic_initializer_for_'CVar_GIaxInvalidUrlChance'' @ 140f914d0

void __cdecl UE::IoStore::_dynamic_initializer_for__CVar_GIaxInvalidUrlChance__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_GIaxInvalidUrlChance,L"iax.InvalidUrlChance",&GIaxInvalidUrlChance,
             L"Chance that a url for a GET request will be invalid (0-100%)",0);
  atexit(_dynamic_atexit_destructor_for__CVar_GIaxInvalidUrlChance__);
  return;
}

// `dynamic_initializer_for_'CVar_HttpCacheEnabled'' @ 140f91520

void __cdecl UE::IoStore::_dynamic_initializer_for__CVar_HttpCacheEnabled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_HttpCacheEnabled,L"iax.HttpCacheEnabled",&GHttpCacheEnabled,L"",0);
  atexit(_dynamic_atexit_destructor_for__CVar_HttpCacheEnabled__);
  return;
}

// `dynamic_initializer_for_'CVar_HttpIoDispatcherEnabled'' @ 140f91570

void __cdecl _dynamic_initializer_for__CVar_HttpIoDispatcherEnabled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_HttpIoDispatcherEnabled,L"iax.HttpIoDispatcherEnabled",&GHttpIoDispatcherEnabled,
             L"Whether the HTTP I/O dispatcher should be enabled.",0x2000);
  atexit(_dynamic_atexit_destructor_for__CVar_HttpIoDispatcherEnabled__);
  return;
}

// `dynamic_initializer_for_'CVar_IasCacheSuspendTimeoutFactor'' @ 140f915c0

void __cdecl _dynamic_initializer_for__CVar_IasCacheSuspendTimeoutFactor__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_IasCacheSuspendTimeoutFactor,L"ias.CacheSuspendTimeoutFactor",
             &GIasCacheSuspendTimeoutFactor,
             L"Factor between 0 - 1 for adjusting the streaming cache suspend timeout",0);
  atexit(_dynamic_atexit_destructor_for__CVar_IasCacheSuspendTimeoutFactor__);
  return;
}

// `dynamic_initializer_for_'CVar_IasCancelationEnabled'' @ 140f91610

void __cdecl UE::IoStore::_dynamic_initializer_for__CVar_IasCancelationEnabled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_IasCancelationEnabled,L"ias.EnableCancelation",&GIasCancelationEnabled,
             L"Allows existing IO requests to be canceled",0);
  atexit(_dynamic_atexit_destructor_for__CVar_IasCancelationEnabled__);
  return;
}

// `dynamic_initializer_for_'CVar_IasHttpAllowChunkedXfer'' @ 140f91660

void __cdecl UE::IoStore::_dynamic_initializer_for__CVar_IasHttpAllowChunkedXfer__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = OnHttpClientCVarChanged;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_IasHttpAllowChunkedXfer,L"ias.HttpAllowChunkedXfer",&GIasHttpAllowChunkedXfer,
             L"Enable/disable IAS\' support for chunked transfer encoding",
             (TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__CVar_IasHttpAllowChunkedXfer__);
  return;
}

// `dynamic_initializer_for_'CVar_IasHttpConcurrentRequests'' @ 140f917a0

void __cdecl UE::IoStore::_dynamic_initializer_for__CVar_IasHttpConcurrentRequests__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_IasHttpConcurrentRequests,L"ias.HttpConcurrentRequests",
             &GIasHttpConcurrentRequests,L"Number of concurrent requests in the http client.",0);
  atexit(_dynamic_atexit_destructor_for__CVar_IasHttpConcurrentRequests__);
  return;
}

// `dynamic_initializer_for_'CVar_IasHttpConnectionCount'' @ 140f917f0

void __cdecl UE::IoStore::_dynamic_initializer_for__CVar_IasHttpConnectionCount__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = OnHttpClientCVarChanged;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_IasHttpConnectionCount,L"ias.HttpConnectionCount",&GIasHttpConnectionCount,
             L"Number of open HTTP connections to the on demand endpoint(s).",
             (TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__CVar_IasHttpConnectionCount__);
  return;
}

// `dynamic_initializer_for_'CVar_IasHttpEnabled'' @ 140f91930

void __cdecl UE::IoStore::_dynamic_initializer_for__CVar_IasHttpEnabled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_IasHttpEnabled,L"ias.HttpEnabled",&GIasHttpEnabled,
             L"Enables individual asset streaming via HTTP",0);
  atexit(_dynamic_atexit_destructor_for__CVar_IasHttpEnabled__);
  return;
}

// `dynamic_initializer_for_'CVar_IasHttpErrorHighWater'' @ 140f91980

void __cdecl UE::IoStore::_dynamic_initializer_for__CVar_IasHttpErrorHighWater__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_IasHttpErrorHighWater,L"ias.HttpErrorHighWater",&GIasHttpErrorHighWater,
             L"High water mark when HTTP streaming will be disabled",0);
  atexit(_dynamic_atexit_destructor_for__CVar_IasHttpErrorHighWater__);
  return;
}

// `dynamic_initializer_for_'CVar_IasHttpErrorSampleCount'' @ 140f919d0

void __cdecl UE::IoStore::_dynamic_initializer_for__CVar_IasHttpErrorSampleCount__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_IasHttpErrorSampleCount,L"ias.HttpErrorSampleCount",&GIasHttpErrorSampleCount,
             L"Number of samples for computing the moving average of failed HTTP requests",0);
  atexit(_dynamic_atexit_destructor_for__CVar_IasHttpErrorSampleCount__);
  return;
}

// `dynamic_initializer_for_'CVar_IasHttpFailTimeOutMs'' @ 140f91a20

void __cdecl UE::IoStore::_dynamic_initializer_for__CVar_IasHttpFailTimeOutMs__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = OnHttpClientCVarChanged;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_IasHttpFailTimeOutMs,L"ias.HttpFailTimeOutMs",&GIasHttpFailTimeOutMs,
             L"Fail infinite network waits that take longer than this (in ms, a value of zero will use the default)"
             ,(TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__CVar_IasHttpFailTimeOutMs__);
  return;
}

// `dynamic_initializer_for_'CVar_IasHttpHealthCheckWaitTime'' @ 140f91b60

void __cdecl UE::IoStore::_dynamic_initializer_for__CVar_IasHttpHealthCheckWaitTime__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_IasHttpHealthCheckWaitTime,L"ias.HttpHealthCheckWaitTime",
             &GIasHttpHealthCheckWaitTime,
             L"Number of milliseconds to wait before reconnecting to avaiable endpoint(s)",0);
  atexit(_dynamic_atexit_destructor_for__CVar_IasHttpHealthCheckWaitTime__);
  return;
}

// `dynamic_initializer_for_'CVar_IasHttpOptionalBulkDataEnabled'' @ 140f91bb0

void __cdecl UE::IoStore::_dynamic_initializer_for__CVar_IasHttpOptionalBulkDataEnabled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_IasHttpOptionalBulkDataEnabled,L"ias.HttpOptionalBulkDataEnabled",
             &GIasHttpOptionalBulkDataEnabled,L"Enables optional bulk data via HTTP",0);
  atexit(_dynamic_atexit_destructor_for__CVar_IasHttpOptionalBulkDataEnabled__);
  return;
}

// `dynamic_initializer_for_'CVar_IasHttpPrimaryEndpoint'' @ 140f91c00

void __cdecl UE::IoStore::_dynamic_initializer_for__CVar_IasHttpPrimaryEndpoint__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_IasHttpPrimaryEndpoint,L"ias.HttpPrimaryEndpoint",&GIasHttpPrimaryEndpoint,
             L"Primary endpoint to use returned from the distribution endpoint",0);
  atexit(_dynamic_atexit_destructor_for__CVar_IasHttpPrimaryEndpoint__);
  return;
}

// `dynamic_initializer_for_'CVar_IasHttpRangeRequestMinSizeKiB'' @ 140f91c50

void __cdecl UE::IoStore::_dynamic_initializer_for__CVar_IasHttpRangeRequestMinSizeKiB__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_IasHttpRangeRequestMinSizeKiB,L"ias.HttpRangeRequestMinSizeKiB",
             &GIasHttpRangeRequestMinSizeKiB,L"Minimum chunk size for partial chunk request(s)",0);
  atexit(_dynamic_atexit_destructor_for__CVar_IasHttpRangeRequestMinSizeKiB__);
  return;
}

// `dynamic_initializer_for_'CVar_IasHttpRetryCount'' @ 140f91ca0

void __cdecl UE::IoStore::_dynamic_initializer_for__CVar_IasHttpRetryCount__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = OnHttpClientCVarChanged;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_IasHttpRetryCount,L"ias.HttpRetryCount",&GIasHttpRetryCount,
             L"Number of times that a request should be retried before being considered failed. A negative value will use the default behaviour, which is one retry per host url provided."
             ,(TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__CVar_IasHttpRetryCount__);
  return;
}

// `dynamic_initializer_for_'CVar_IasHttpTimeOutMs'' @ 140f91de0

void __cdecl UE::IoStore::_dynamic_initializer_for__CVar_IasHttpTimeOutMs__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_IasHttpTimeOutMs,L"ias.HttpTimeOutMs",&GIasHttpTimeOutMs,
             L"Time out value for HTTP requests in milliseconds",0);
  atexit(_dynamic_atexit_destructor_for__CVar_IasHttpTimeOutMs__);
  return;
}

// `dynamic_initializer_for_'CVar_IasPoisonCache'' @ 140f91e30

void __cdecl UE::IoStore::_dynamic_initializer_for__CVar_IasPoisonCache__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_IasPoisonCache,L"ias.PoisonCache",&GIasPoisonCache,
             L"Fills all data materialized from the cache with 0x4d",0);
  atexit(_dynamic_atexit_destructor_for__CVar_IasPoisonCache__);
  return;
}

// `dynamic_initializer_for_'CVar_IaxAllowPartialContentRequests'' @ 140f91e80

void __cdecl UE::IoStore::_dynamic_initializer_for__CVar_IaxAllowPartialContentRequests__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_IaxAllowPartialContentRequests,L"iax.HttpAllowPartialContentRequests",
             &GAllowPartialContentRequests,
             L"Enable/disable the use of partial content http requests",0);
  atexit(_dynamic_atexit_destructor_for__CVar_IaxAllowPartialContentRequests__);
  return;
}

// `dynamic_initializer_for_'CVar_IaxHttpEnableInflightCancellation'' @ 140f91ed0

void __cdecl UE::IoStore::_dynamic_initializer_for__CVar_IaxHttpEnableInflightCancellation__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_IaxHttpEnableInflightCancellation,L"iax.HttpEnableInflightCancellation",
             &GIaxHttpEnableInflightCancellation,
             L"When enabled the system will attempt to cancel inflight http requests",0);
  atexit(_dynamic_atexit_destructor_for__CVar_IaxHttpEnableInflightCancellation__);
  return;
}

// `dynamic_initializer_for_'CVar_IaxHttpMaxInflight'' @ 140f91f20

void __cdecl UE::IoStore::_dynamic_initializer_for__CVar_IaxHttpMaxInflight__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_IaxHttpMaxInflight,L"iax.HttpMaxInflight",&GIaxHttpMaxInflight,
             L"Number of requests to issue at once per connection",0);
  atexit(_dynamic_atexit_destructor_for__CVar_IaxHttpMaxInflight__);
  return;
}

// `dynamic_initializer_for_'CVar_IaxHttpVersion'' @ 140f91f70

void __cdecl UE::IoStore::_dynamic_initializer_for__CVar_IaxHttpVersion__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_IaxHttpVersion,L"iax.HttpVersion",&GIaxHttpVersion,
             L"Protocol version to use, either \'1\' or \'2\'",0);
  atexit(_dynamic_atexit_destructor_for__CVar_IaxHttpVersion__);
  return;
}

// `dynamic_initializer_for_'CVar_IaxWarnOnFailure'' @ 140f91fc0

void __cdecl UE::IoStore::_dynamic_initializer_for__CVar_IaxWarnOnFailure__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_IaxWarnOnFailure,L"iax.HttpWarnOnFailure",&GIaxWarnOnFailure,
             L"When enabled FMultiEndpointHttpClient will log failed requests as warnings instead of the config verbosity"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVar_IaxWarnOnFailure__);
  return;
}

// `dynamic_initializer_for_'CVar_ImmediateAnalyticsChance'' @ 140f92010

void __cdecl UE::IoStore::_dynamic_initializer_for__CVar_ImmediateAnalyticsChance__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_ImmediateAnalyticsChance,L"iax.ImmediateAnalyticsChance",
             &GIaxImmediateAnalyticsChance,L"Chance of sending and immediate analytics event.",0);
  atexit(_dynamic_atexit_destructor_for__CVar_ImmediateAnalyticsChance__);
  return;
}

// `dynamic_initializer_for_'CVar_IoReportAnalytics'' @ 140f92060

void __cdecl UE::IoStore::_dynamic_initializer_for__CVar_IoReportAnalytics__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_IoReportAnalytics,L"ias.ReportAnalytics",&GIasReportAnalyticsEnabled,
             L"Enables reporting statics to the analytics system",0);
  atexit(_dynamic_atexit_destructor_for__CVar_IoReportAnalytics__);
  return;
}

// `dynamic_initializer_for_'CVar_IoStoreDebugRequest'' @ 140f920b0

void __cdecl UE::IoStore::CVars::_dynamic_initializer_for__CVar_IoStoreDebugRequest__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_IoStoreDebugRequest,L"iostore.DebugRequest",&IoStoreDebugRequest,
             L"When the request with a debug name partially matching this cvar is found iostore will error with a random error."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVar_IoStoreDebugRequest__);
  return;
}

// `dynamic_initializer_for_'CVar_IoStoreErrorOnRequest'' @ 140f92100

void __cdecl UE::IoStore::CVars::_dynamic_initializer_for__CVar_IoStoreErrorOnRequest__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_IoStoreErrorOnRequest,L"iostore.ErrorOnRequest",&IoStoreErrorOnRequest,
             L"When the request with a debug name partially matching this cvar is found iostore will error with a random error."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVar_IoStoreErrorOnRequest__);
  return;
}

// `dynamic_initializer_for_'CVar_IoStoreOnDemandEnableDefrag'' @ 140f92150

void __cdecl UE::IoStore::CVars::_dynamic_initializer_for__CVar_IoStoreOnDemandEnableDefrag__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_IoStoreOnDemandEnableDefrag,L"iostore.EnableDefrag",&GIoStoreOnDemandEnableDefrag
             ,L"Whether to enable defrag when purging",0);
  atexit(_dynamic_atexit_destructor_for__CVar_IoStoreOnDemandEnableDefrag__);
  return;
}

// `dynamic_initializer_for_'CVar_IoStoreOnDemandInstallCacheEnabled'' @ 140f921a0

void __cdecl
UE::IoStore::Config::_dynamic_initializer_for__CVar_IoStoreOnDemandInstallCacheEnabled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_IoStoreOnDemandInstallCacheEnabled,L"iostore.OnDemandInstallCacheEnabled",
             &GIoStoreOnDemandInstallCacheEnabled,L"Whether the on-demand install cache is enabled."
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVar_IoStoreOnDemandInstallCacheEnabled__);
  return;
}

// `dynamic_initializer_for_'CVar_ReportCacheAnalytics'' @ 140f921f0

void __cdecl UE::IoStore::_dynamic_initializer_for__CVar_ReportCacheAnalytics__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_ReportCacheAnalytics,L"ias.ReportCacheAnalytics",&GIasReportCacheAnalyticsEnabled
             ,L"Enables reporting statics on our file cache usage to the analytics system",0);
  atexit(_dynamic_atexit_destructor_for__CVar_ReportCacheAnalytics__);
  return;
}

// `dynamic_initializer_for_'CVar_ReportHttpAnalytics'' @ 140f92240

void __cdecl UE::IoStore::_dynamic_initializer_for__CVar_ReportHttpAnalytics__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_ReportHttpAnalytics,L"ias.ReportHttpAnalytics",&GIasReportHttpAnalyticsEnabled,
             L"Enables reporting statics on our http traffic to the analytics system",0);
  atexit(_dynamic_atexit_destructor_for__CVar_ReportHttpAnalytics__);
  return;
}

// `dynamic_initializer_for_'CVar_ReportIadAnalyticsEnabled'' @ 140f92290

void __cdecl UE::IoStore::_dynamic_initializer_for__CVar_ReportIadAnalyticsEnabled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_ReportIadAnalyticsEnabled,L"iad.ReportAnalytics",&GIadReportAnalyticsEnabled,
             L"Enables reporting analytics for individual asset downloads.",0);
  atexit(_dynamic_atexit_destructor_for__CVar_ReportIadAnalyticsEnabled__);
  return;
}

// `dynamic_initializer_for_'CVar_StatisticsLogInterval'' @ 140f922e0

void __cdecl UE::IoStore::_dynamic_initializer_for__CVar_StatisticsLogInterval__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_StatisticsLogInterval,L"ias.StatisticsLogInterval",&GIasStatisticsLogInterval,
             L"Enables and sets interval for periodic logging of statistics",0);
  atexit(_dynamic_atexit_destructor_for__CVar_StatisticsLogInterval__);
  return;
}

// `dynamic_initializer_for_'CVar_WriteOnlyDecoding'' @ 140f92330

void __cdecl UE::IoStore::_dynamic_initializer_for__CVar_WriteOnlyDecoding__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_WriteOnlyDecoding,L"ias.EnableWriteOnlyDecoding",&GIasEnableWriteOnlyDecoding,
             L"Enables the use of \'WriteOnly\' flag when decoding to buffers with the \'HardwareTargetBuffer\' flag"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVar_WriteOnlyDecoding__);
  return;
}

// `dynamic_initializer_for_'CloneCachedIOBufferDataCVar'' @ 140f92380

void __cdecl
UE::IoStore::JournaledCache::_dynamic_initializer_for__CloneCachedIOBufferDataCVar__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CloneCachedIOBufferDataCVar,L"ias.CloneCachedIOBufferData",&CloneCachedIOBufferData,
             L"Clone cached io buffer data, speculative fix for a read after free happening in FIoChunkEncoding::Decode. Disabled by default"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CloneCachedIOBufferDataCVar__);
  return;
}

// `dynamic_initializer_for_'GCacheCachedBytes'' @ 140f923d0

void __cdecl UE::IoStore::_dynamic_initializer_for__GCacheCachedBytes__(void)

{
  GCacheCachedBytes.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"Ias/CacheCachedBytes",TraceCounterType_Int,TraceCounterDisplayHint_Memory);
  LOCK();
  GCacheCachedBytes.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for__GCacheCachedBytes__);
  return;
}

// `dynamic_initializer_for_'GCacheDecodeErrorCount'' @ 140f92410

void __cdecl UE::IoStore::_dynamic_initializer_for__GCacheDecodeErrorCount__(void)

{
  GCacheDecodeErrorCount.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"Ias/CacheDecodeErrorCount",TraceCounterType_Int,TraceCounterDisplayHint_None);
  LOCK();
  GCacheDecodeErrorCount.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for__GCacheDecodeErrorCount__);
  return;
}

// `dynamic_initializer_for_'GCacheErrorCount'' @ 140f92450

void __cdecl UE::IoStore::_dynamic_initializer_for__GCacheErrorCount__(void)

{
  GCacheErrorCount.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"Ias/CacheErrorCount",TraceCounterType_Int,TraceCounterDisplayHint_None);
  LOCK();
  GCacheErrorCount.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for__GCacheErrorCount__);
  return;
}

// `dynamic_initializer_for_'GCacheGetCount'' @ 140f92490

void __cdecl UE::IoStore::_dynamic_initializer_for__GCacheGetCount__(void)

{
  GCacheGetCount.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"Ias/CacheGetCount",TraceCounterType_Int,TraceCounterDisplayHint_None);
  LOCK();
  GCacheGetCount.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for__GCacheGetCount__);
  return;
}

// `dynamic_initializer_for_'GCachePendingBytes'' @ 140f924d0

void __cdecl UE::IoStore::_dynamic_initializer_for__GCachePendingBytes__(void)

{
  GCachePendingBytes.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"Ias/CachePendingBytes",TraceCounterType_Int,TraceCounterDisplayHint_Memory);
  LOCK();
  GCachePendingBytes.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for__GCachePendingBytes__);
  return;
}

// `dynamic_initializer_for_'GCachePutCount'' @ 140f92510

void __cdecl UE::IoStore::_dynamic_initializer_for__GCachePutCount__(void)

{
  GCachePutCount.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"Ias/CachePutCount",TraceCounterType_Int,TraceCounterDisplayHint_None);
  LOCK();
  GCachePutCount.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for__GCachePutCount__);
  return;
}

// `dynamic_initializer_for_'GCachePutExistingCount'' @ 140f92550

void __cdecl UE::IoStore::_dynamic_initializer_for__GCachePutExistingCount__(void)

{
  GCachePutExistingCount.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"Ias/CachePutExistingCount",TraceCounterType_Int,TraceCounterDisplayHint_None);
  LOCK();
  GCachePutExistingCount.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for__GCachePutExistingCount__);
  return;
}

// `dynamic_initializer_for_'GCachePutRejectCount'' @ 140f92590

void __cdecl UE::IoStore::_dynamic_initializer_for__GCachePutRejectCount__(void)

{
  GCachePutRejectCount.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"Ias/CachePutRejectCount",TraceCounterType_Int,TraceCounterDisplayHint_None);
  LOCK();
  GCachePutRejectCount.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for__GCachePutRejectCount__);
  return;
}

// `dynamic_initializer_for_'GCacheReadBytes'' @ 140f925d0

void __cdecl UE::IoStore::_dynamic_initializer_for__GCacheReadBytes__(void)

{
  GCacheReadBytes.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"Ias/CacheReadBytes",TraceCounterType_Int,TraceCounterDisplayHint_Memory);
  LOCK();
  GCacheReadBytes.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for__GCacheReadBytes__);
  return;
}

// `dynamic_initializer_for_'GCacheRejectBytes'' @ 140f92610

void __cdecl UE::IoStore::_dynamic_initializer_for__GCacheRejectBytes__(void)

{
  GCacheRejectBytes.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"Ias/CachePutRejectBytes",TraceCounterType_Int,TraceCounterDisplayHint_Memory);
  LOCK();
  GCacheRejectBytes.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for__GCacheRejectBytes__);
  return;
}

// `dynamic_initializer_for_'GCacheSuspendedSeconds'' @ 140f92650

void __cdecl UE::IoStore::_dynamic_initializer_for__GCacheSuspendedSeconds__(void)

{
  GCacheSuspendedSeconds.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"Ias/CacheSuspendedSeconds",TraceCounterType_Float,TraceCounterDisplayHint_None);
  LOCK();
  GCacheSuspendedSeconds.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for__GCacheSuspendedSeconds__);
  return;
}

// `dynamic_initializer_for_'GCacheWrittenBytes'' @ 140f92690

void __cdecl UE::IoStore::_dynamic_initializer_for__GCacheWrittenBytes__(void)

{
  GCacheWrittenBytes.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"Ias/CacheWrittenBytes",TraceCounterType_Int,TraceCounterDisplayHint_Memory);
  LOCK();
  GCacheWrittenBytes.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for__GCacheWrittenBytes__);
  return;
}

// `dynamic_initializer_for_'GDeltaTracking'' @ 140f926d0

void __cdecl UE::IoStore::_dynamic_initializer_for__GDeltaTracking__(void)

{
  atexit(_dynamic_atexit_destructor_for__GDeltaTracking__);
  return;
}

// `dynamic_initializer_for_'GDistributedEndpointFallbackUrl'' @ 140f926f0

void __cdecl UE::IoStore::Config::_dynamic_initializer_for__GDistributedEndpointFallbackUrl__(void)

{
  atexit(_dynamic_atexit_destructor_for__GDistributedEndpointFallbackUrl__);
  return;
}

// `dynamic_initializer_for_'GHttpBandwidthMbps'' @ 140f92710

void __cdecl UE::IoStore::_dynamic_initializer_for__GHttpBandwidthMbps__(void)

{
  GHttpBandwidthMbps[0].CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"Ias/HttpBandwidthMbps",TraceCounterType_Float,TraceCounterDisplayHint_None);
  LOCK();
  GHttpBandwidthMbps[0].CounterId._2_2_ = 0;
  UNLOCK();
  GHttpBandwidthMbps[1].CounterName = L"Iad/HttpBandwidthMbps";
  GHttpBandwidthMbps[1].Value = 0.0;
  GHttpBandwidthMbps[1].CounterId = (atomic<unsigned_int>)0x0;
  GHttpBandwidthMbps[1].CounterFlags = '\0';
  GHttpBandwidthMbps[1].CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"Iad/HttpBandwidthMbps",TraceCounterType_Float,TraceCounterDisplayHint_None);
  LOCK();
  GHttpBandwidthMbps[1].CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for__GHttpBandwidthMbps__);
  return;
}

// `dynamic_initializer_for_'GHttpCancelCount'' @ 140f92790

void __cdecl UE::IoStore::_dynamic_initializer_for__GHttpCancelCount__(void)

{
  GHttpCancelCount[0].CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"Ias/HttpCancelCount",TraceCounterType_Int,TraceCounterDisplayHint_None);
  LOCK();
  GHttpCancelCount[0].CounterId._2_2_ = 0;
  UNLOCK();
  GHttpCancelCount[1].Value = 0;
  GHttpCancelCount[1].CounterName = L"Iad/HttpCancelCount";
  GHttpCancelCount[1].CounterId = (atomic<unsigned_int>)0x0;
  GHttpCancelCount[1].CounterFlags = '\0';
  GHttpCancelCount[1].CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"Iad/HttpCancelCount",TraceCounterType_Int,TraceCounterDisplayHint_None);
  LOCK();
  GHttpCancelCount[1].CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for__GHttpCancelCount__);
  return;
}

// `dynamic_initializer_for_'GHttpConnectCount'' @ 140f92800

void __cdecl UE::IoStore::_dynamic_initializer_for__GHttpConnectCount__(void)

{
  GHttpConnectCount.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"Ias/HttpConnectCount",TraceCounterType_Int,TraceCounterDisplayHint_None);
  LOCK();
  GHttpConnectCount.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for__GHttpConnectCount__);
  return;
}

// `dynamic_initializer_for_'GHttpDecodeErrorCount'' @ 140f92840

void __cdecl UE::IoStore::_dynamic_initializer_for__GHttpDecodeErrorCount__(void)

{
  GHttpDecodeErrorCount[0].CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"Ias/HttpDecodeErrorCount",TraceCounterType_Int,TraceCounterDisplayHint_None);
  LOCK();
  GHttpDecodeErrorCount[0].CounterId._2_2_ = 0;
  UNLOCK();
  GHttpDecodeErrorCount[1].Value = (atomic<__int64>)0x0;
  GHttpDecodeErrorCount[1].CounterName = L"Iad/HttpDecodeErrorCount";
  GHttpDecodeErrorCount[1].CounterId = (atomic<unsigned_int>)0x0;
  GHttpDecodeErrorCount[1].CounterFlags = '\0';
  GHttpDecodeErrorCount[1].CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"Iad/HttpDecodeErrorCount",TraceCounterType_Int,TraceCounterDisplayHint_None);
  LOCK();
  GHttpDecodeErrorCount[1].CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for__GHttpDecodeErrorCount__);
  return;
}

// `dynamic_initializer_for_'GHttpDisconnectCount'' @ 140f928b0

void __cdecl UE::IoStore::_dynamic_initializer_for__GHttpDisconnectCount__(void)

{
  GHttpDisconnectCount.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"Ias/HttpDisconnectCount",TraceCounterType_Int,TraceCounterDisplayHint_None);
  LOCK();
  GHttpDisconnectCount.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for__GHttpDisconnectCount__);
  return;
}

// `dynamic_initializer_for_'GHttpDownloadedBytes'' @ 140f928f0

void __cdecl UE::IoStore::_dynamic_initializer_for__GHttpDownloadedBytes__(void)

{
  GHttpDownloadedBytes[0].CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"Ias/HttpDownloadedBytes",TraceCounterType_Int,TraceCounterDisplayHint_None);
  LOCK();
  GHttpDownloadedBytes[0].CounterId._2_2_ = 0;
  UNLOCK();
  GHttpDownloadedBytes[1].Value = 0;
  GHttpDownloadedBytes[1].CounterName = L"Iad/HttpDownloadedBytes";
  GHttpDownloadedBytes[1].CounterId = (atomic<unsigned_int>)0x0;
  GHttpDownloadedBytes[1].CounterFlags = '\x01';
  GHttpDownloadedBytes[1].CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"Iad/HttpDownloadedBytes",TraceCounterType_Int,TraceCounterDisplayHint_Memory);
  LOCK();
  GHttpDownloadedBytes[1].CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for__GHttpDownloadedBytes__);
  return;
}

// `dynamic_initializer_for_'GHttpDurationMs'' @ 140f92960

void __cdecl UE::IoStore::_dynamic_initializer_for__GHttpDurationMs__(void)

{
  GHttpDurationMs[0].CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"Ias/HttpDurationMs",TraceCounterType_Int,TraceCounterDisplayHint_None);
  LOCK();
  GHttpDurationMs[0].CounterId._2_2_ = 0;
  UNLOCK();
  GHttpDurationMs[1].Value = 0;
  GHttpDurationMs[1].CounterName = L"Iad/HttpDurationMs";
  GHttpDurationMs[1].CounterId = (atomic<unsigned_int>)0x0;
  GHttpDurationMs[1].CounterFlags = '\0';
  GHttpDurationMs[1].CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"Iad/HttpDurationMs",TraceCounterType_Int,TraceCounterDisplayHint_None);
  LOCK();
  GHttpDurationMs[1].CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for__GHttpDurationMs__);
  return;
}

// `dynamic_initializer_for_'GHttpErrorCount'' @ 140f929d0

void __cdecl UE::IoStore::_dynamic_initializer_for__GHttpErrorCount__(void)

{
  GHttpErrorCount[0].CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"Ias/HttpErrorCount",TraceCounterType_Int,TraceCounterDisplayHint_None);
  LOCK();
  GHttpErrorCount[0].CounterId._2_2_ = 0;
  UNLOCK();
  GHttpErrorCount[1].Value = 0;
  GHttpErrorCount[1].CounterName = L"Iad/HttpErrorCount";
  GHttpErrorCount[1].CounterId = (atomic<unsigned_int>)0x0;
  GHttpErrorCount[1].CounterFlags = '\0';
  GHttpErrorCount[1].CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"Iad/HttpErrorCount",TraceCounterType_Int,TraceCounterDisplayHint_None);
  LOCK();
  GHttpErrorCount[1].CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for__GHttpErrorCount__);
  return;
}

// `dynamic_initializer_for_'GHttpGetCount'' @ 140f92a40

void __cdecl UE::IoStore::_dynamic_initializer_for__GHttpGetCount__(void)

{
  GHttpGetCount[0].CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"Ias/HttpGetCount",TraceCounterType_Int,TraceCounterDisplayHint_None);
  LOCK();
  GHttpGetCount[0].CounterId._2_2_ = 0;
  UNLOCK();
  GHttpGetCount[1].Value = 0;
  GHttpGetCount[1].CounterName = L"Iad/HttpGetCount";
  GHttpGetCount[1].CounterId = (atomic<unsigned_int>)0x0;
  GHttpGetCount[1].CounterFlags = '\0';
  GHttpGetCount[1].CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"Iad/HttpGetCount",TraceCounterType_Int,TraceCounterDisplayHint_None);
  LOCK();
  GHttpGetCount[1].CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for__GHttpGetCount__);
  return;
}

// `dynamic_initializer_for_'GHttpInflightCount'' @ 140f92ab0

void __cdecl UE::IoStore::_dynamic_initializer_for__GHttpInflightCount__(void)

{
  GHttpInflightCount[0].CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"Ias/HttpInflightCount",TraceCounterType_Int,TraceCounterDisplayHint_None);
  LOCK();
  GHttpInflightCount[0].CounterId._2_2_ = 0;
  UNLOCK();
  GHttpInflightCount[1].Value = 0;
  GHttpInflightCount[1].CounterName = L"Iad/HttpInflightCount";
  GHttpInflightCount[1].CounterId = (atomic<unsigned_int>)0x0;
  GHttpInflightCount[1].CounterFlags = '\0';
  GHttpInflightCount[1].CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"Iad/HttpInflightCount",TraceCounterType_Int,TraceCounterDisplayHint_None);
  LOCK();
  GHttpInflightCount[1].CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for__GHttpInflightCount__);
  return;
}

// `dynamic_initializer_for_'GHttpPendingCount'' @ 140f92b20

void __cdecl UE::IoStore::_dynamic_initializer_for__GHttpPendingCount__(void)

{
  GHttpPendingCount[0].CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"Ias/HttpPendingCount",TraceCounterType_Int,TraceCounterDisplayHint_None);
  LOCK();
  GHttpPendingCount[0].CounterId._2_2_ = 0;
  UNLOCK();
  GHttpPendingCount[1].Value = (atomic<__int64>)0x0;
  GHttpPendingCount[1].CounterName = L"Iad/HttpPendingCount";
  GHttpPendingCount[1].CounterId = (atomic<unsigned_int>)0x0;
  GHttpPendingCount[1].CounterFlags = '\0';
  GHttpPendingCount[1].CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"Iad/HttpPendingCount",TraceCounterType_Int,TraceCounterDisplayHint_None);
  LOCK();
  GHttpPendingCount[1].CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for__GHttpPendingCount__);
  return;
}

// `dynamic_initializer_for_'GHttpRetryCount'' @ 140f92b90

void __cdecl UE::IoStore::_dynamic_initializer_for__GHttpRetryCount__(void)

{
  GHttpRetryCount[0].CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"Ias/HttpRetryCount",TraceCounterType_Int,TraceCounterDisplayHint_None);
  LOCK();
  GHttpRetryCount[0].CounterId._2_2_ = 0;
  UNLOCK();
  GHttpRetryCount[1].Value = 0;
  GHttpRetryCount[1].CounterName = L"Iad/HttpRetryCount";
  GHttpRetryCount[1].CounterId = (atomic<unsigned_int>)0x0;
  GHttpRetryCount[1].CounterFlags = '\0';
  GHttpRetryCount[1].CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"Iad/HttpRetryCount",TraceCounterType_Int,TraceCounterDisplayHint_None);
  LOCK();
  GHttpRetryCount[1].CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for__GHttpRetryCount__);
  return;
}

// `dynamic_initializer_for_'GIoRequestCancelCount'' @ 140f92c00

void __cdecl UE::IoStore::_dynamic_initializer_for__GIoRequestCancelCount__(void)

{
  GIoRequestCancelCount.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"Ias/IoRequestCancelCount",TraceCounterType_Int,TraceCounterDisplayHint_None);
  LOCK();
  GIoRequestCancelCount.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for__GIoRequestCancelCount__);
  return;
}

// `dynamic_initializer_for_'GIoRequestCount'' @ 140f92c40

void __cdecl UE::IoStore::_dynamic_initializer_for__GIoRequestCount__(void)

{
  GIoRequestCount.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"Ias/IoRequestCount",TraceCounterType_Int,TraceCounterDisplayHint_None);
  LOCK();
  GIoRequestCount.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for__GIoRequestCount__);
  return;
}

// `dynamic_initializer_for_'GIoRequestErrorCount'' @ 140f92c80

void __cdecl UE::IoStore::_dynamic_initializer_for__GIoRequestErrorCount__(void)

{
  GIoRequestErrorCount.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"Ias/IoRequestErrorCount",TraceCounterType_Int,TraceCounterDisplayHint_None);
  LOCK();
  GIoRequestErrorCount.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for__GIoRequestErrorCount__);
  return;
}

// `dynamic_initializer_for_'GIoRequestReadBytes'' @ 140f92cc0

void __cdecl UE::IoStore::_dynamic_initializer_for__GIoRequestReadBytes__(void)

{
  GIoRequestReadBytes.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"Ias/IoRequestReadBytes",TraceCounterType_Int,TraceCounterDisplayHint_Memory);
  LOCK();
  GIoRequestReadBytes.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for__GIoRequestReadBytes__);
  return;
}

// `dynamic_initializer_for_'GIoRequestReadCount'' @ 140f92d00

void __cdecl UE::IoStore::_dynamic_initializer_for__GIoRequestReadCount__(void)

{
  GIoRequestReadCount.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"Ias/IoRequestReadCount",TraceCounterType_Int,TraceCounterDisplayHint_None);
  LOCK();
  GIoRequestReadCount.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for__GIoRequestReadCount__);
  return;
}

// `dynamic_initializer_for_'GRequestLaneEstate'' @ 140f92d40

void __cdecl UE::IoStore::_dynamic_initializer_for__GRequestLaneEstate__(void)

{
  FLaneTraceSpec local_38;
  
  local_38.Name.Size = 0xb;
  local_38.Name.DataPtr = "Iax/Backend";
  local_38.Group.DataPtr = "Iax";
  local_38.Group.Size = 3;
  local_38.Channel = HTTP::GetIaxTraceChannel();
  local_38.Weight = 10;
  GRequestLaneEstate = LaneEstate_New(&local_38);
  return;
}

// `dynamic_initializer_for_'HttpDispatcher'' @ 140f92da0

void __cdecl UE::IoStore::HttpIoDispatcher::_dynamic_initializer_for__HttpDispatcher__(void)

{
  atexit(_dynamic_atexit_destructor_for__HttpDispatcher__);
  return;
}

// `dynamic_initializer_for_'InstallerTraceCounters'' @ 140f92dc0

void __cdecl UE::IoStore::_dynamic_initializer_for__InstallerTraceCounters__(void)

{
  InstallerTraceCounters.InstallCount.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"Iad/InstallCount",TraceCounterType_Int,TraceCounterDisplayHint_None);
  LOCK();
  InstallerTraceCounters.InstallCount.CounterId._2_2_ = 0;
  UNLOCK();
  InstallerTraceCounters.InflightInstallCount.Value = 0;
  InstallerTraceCounters.InflightInstallCount.CounterName = L"Iad/InflightInstallCount";
  InstallerTraceCounters.InflightInstallCount.CounterId = (atomic<unsigned_int>)0x0;
  InstallerTraceCounters.InflightInstallCount.CounterFlags = '\0';
  InstallerTraceCounters.InflightInstallCount.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"Iad/InflightInstallCount",TraceCounterType_Int,TraceCounterDisplayHint_None);
  LOCK();
  InstallerTraceCounters.InflightInstallCount.CounterId._2_2_ = 0;
  UNLOCK();
  InstallerTraceCounters.DownloadedBytes.Value = 0;
  InstallerTraceCounters.DownloadedBytes.CounterName = L"Iad/DownloadedBytes";
  InstallerTraceCounters.DownloadedBytes.CounterId = (atomic<unsigned_int>)0x0;
  InstallerTraceCounters.DownloadedBytes.CounterFlags = '\x01';
  InstallerTraceCounters.DownloadedBytes.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"Iad/DownloadedBytes",TraceCounterType_Int,TraceCounterDisplayHint_Memory);
  LOCK();
  InstallerTraceCounters.DownloadedBytes.CounterId._2_2_ = 0;
  UNLOCK();
  InstallerTraceCounters.AvgInstallDurationMs.CounterName = L"Iad/AvgInstallDurationMs";
  InstallerTraceCounters.AvgInstallDurationMs.Value = 0.0;
  InstallerTraceCounters.AvgInstallDurationMs.CounterId = (atomic<unsigned_int>)0x0;
  InstallerTraceCounters.AvgInstallDurationMs.CounterFlags = '\0';
  InstallerTraceCounters.AvgInstallDurationMs.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"Iad/AvgInstallDurationMs",TraceCounterType_Float,TraceCounterDisplayHint_None);
  LOCK();
  InstallerTraceCounters.AvgInstallDurationMs.CounterId._2_2_ = 0;
  UNLOCK();
  InstallerTraceCounters.AvgCacheHitRatio.Value = 0.0;
  InstallerTraceCounters.AvgCacheHitRatio.CounterName = L"Iad/AvgCacheHitRatio";
  InstallerTraceCounters.AvgCacheHitRatio.CounterId = (atomic<unsigned_int>)0x0;
  InstallerTraceCounters.AvgCacheHitRatio.CounterFlags = '\0';
  InstallerTraceCounters.AvgCacheHitRatio.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"Iad/AvgCacheHitRatio",TraceCounterType_Float,TraceCounterDisplayHint_None);
  LOCK();
  InstallerTraceCounters.AvgCacheHitRatio.CounterId._2_2_ = 0;
  UNLOCK();
  InstallerTraceCounters.InstallDurationMs.Count = 0;
  InstallerTraceCounters.InstallDurationMs.Mean = 0.0;
  InstallerTraceCounters.InstallDurationMs.VarianceAccumulator = 0.0;
  InstallerTraceCounters.CacheHitRatio.Count = 0;
  InstallerTraceCounters.CacheHitRatio.Mean = 0.0;
  InstallerTraceCounters.CacheHitRatio.VarianceAccumulator = 0.0;
  atexit(_dynamic_atexit_destructor_for__InstallerTraceCounters__);
  return;
}

// `dynamic_initializer_for_'IoStoreDebugRequest'' @ 140f92f00

void __cdecl UE::IoStore::CVars::_dynamic_initializer_for__IoStoreDebugRequest__(void)

{
  ::FString::FString(&IoStoreDebugRequest,"");
  atexit(_dynamic_atexit_destructor_for__IoStoreDebugRequest__);
  return;
}

// `dynamic_initializer_for_'IoStoreErrorOnRequest'' @ 140f92f30

void __cdecl UE::IoStore::CVars::_dynamic_initializer_for__IoStoreErrorOnRequest__(void)

{
  ::FString::FString(&IoStoreErrorOnRequest,"");
  atexit(_dynamic_atexit_destructor_for__IoStoreErrorOnRequest__);
  return;
}

// `dynamic_initializer_for_'LLMTagDeclaration_Ias'' @ 140f92f60

void __cdecl _dynamic_initializer_for__LLMTagDeclaration_Ias__(void)

{
  FLLMTagDeclaration::FLLMTagDeclaration
            (&LLMTagDeclaration_Ias,L"Ias",(FName)0x0,(FName)0x0,(FName)0x0,(FName)0x0,None);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantIoStoreOnDemand'' @ 140f92fb0

void __cdecl UE::IoStore::_dynamic_initializer_for__ModuleRegistrantIoStoreOnDemand__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "IoStoreOnDemand";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"IoStoreOnDemand",0xf);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<UE::IoStore::FIoStoreOnDemandModule>::
             InitializeModule);
  return;
}

// `dynamic_initializer_for_'OnDemandImmediateAnalyticEventHandler'' @ 140f93000

void __cdecl UE::IoStore::_dynamic_initializer_for__OnDemandImmediateAnalyticEventHandler__(void)

{
  atexit(_dynamic_atexit_destructor_for__OnDemandImmediateAnalyticEventHandler__);
  return;
}

// `dynamic_initializer_for_'OnRecreateHttpClient'' @ 140f93020

void __cdecl UE::IoStore::_dynamic_initializer_for__OnRecreateHttpClient__(void)

{
  atexit(_dynamic_atexit_destructor_for__OnRecreateHttpClient__);
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_Iad'' @ 140f93040

void __cdecl UE::IoStore::_dynamic_initializer_for___GCsvCategory_Iad__(void)

{
  ::FString::operator=(&_GCsvCategory_Iad.Name,L"Iad");
  _GCsvCategory_Iad.Index = FCsvProfiler::RegisterCategory(&_GCsvCategory_Iad.Name,true,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_Iad__);
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_Ias'' @ 140f93090

void __cdecl UE::IoStore::_dynamic_initializer_for___GCsvCategory_Ias__(void)

{
  ::FString::operator=(&_GCsvCategory_Ias.Name,L"Ias");
  _GCsvCategory_Ias.Index = FCsvProfiler::RegisterCategory(&_GCsvCategory_Ias.Name,true,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_Ias__);
  return;
}

// `dynamic_initializer_for_'_GCsvStat_CacheCachedMB'' @ 140f930e0

void __cdecl UE::IoStore::_dynamic_initializer_for___GCsvStat_CacheCachedMB__(void)

{
  uint uVar1;
  
  uVar1 = _GCsvCategory_Ias.Index;
  ::FName::FName(&_GCsvStat_CacheCachedMB.Name,L"CacheCachedMB");
  _GCsvStat_CacheCachedMB.CategoryIndex = uVar1;
  FCsvProfilerTrace::OutputDeclaredStat(&_GCsvStat_CacheCachedMB.Name,uVar1);
  return;
}

// `dynamic_initializer_for_'_GCsvStat_CacheErrorCount'' @ 140f93120

void __cdecl UE::IoStore::_dynamic_initializer_for___GCsvStat_CacheErrorCount__(void)

{
  uint uVar1;
  
  uVar1 = _GCsvCategory_Ias.Index;
  ::FName::FName(&_GCsvStat_CacheErrorCount.Name,L"CacheErrorCount");
  _GCsvStat_CacheErrorCount.CategoryIndex = uVar1;
  FCsvProfilerTrace::OutputDeclaredStat(&_GCsvStat_CacheErrorCount.Name,uVar1);
  return;
}

// `dynamic_initializer_for_'_GCsvStat_CacheGetCount'' @ 140f93160

void __cdecl UE::IoStore::_dynamic_initializer_for___GCsvStat_CacheGetCount__(void)

{
  uint uVar1;
  
  uVar1 = _GCsvCategory_Ias.Index;
  ::FName::FName(&_GCsvStat_CacheGetCount.Name,L"CacheGetCount");
  _GCsvStat_CacheGetCount.CategoryIndex = uVar1;
  FCsvProfilerTrace::OutputDeclaredStat(&_GCsvStat_CacheGetCount.Name,uVar1);
  return;
}

// `dynamic_initializer_for_'_GCsvStat_CachePutCount'' @ 140f931a0

void __cdecl UE::IoStore::_dynamic_initializer_for___GCsvStat_CachePutCount__(void)

{
  uint uVar1;
  
  uVar1 = _GCsvCategory_Ias.Index;
  ::FName::FName(&_GCsvStat_CachePutCount.Name,L"CachePutCount");
  _GCsvStat_CachePutCount.CategoryIndex = uVar1;
  FCsvProfilerTrace::OutputDeclaredStat(&_GCsvStat_CachePutCount.Name,uVar1);
  return;
}

// `dynamic_initializer_for_'_GCsvStat_CachePutExistingCount'' @ 140f931e0

void __cdecl UE::IoStore::_dynamic_initializer_for___GCsvStat_CachePutExistingCount__(void)

{
  uint uVar1;
  
  uVar1 = _GCsvCategory_Ias.Index;
  ::FName::FName(&_GCsvStat_CachePutExistingCount.Name,L"CachePutExistingCount");
  _GCsvStat_CachePutExistingCount.CategoryIndex = uVar1;
  FCsvProfilerTrace::OutputDeclaredStat(&_GCsvStat_CachePutExistingCount.Name,uVar1);
  return;
}

// `dynamic_initializer_for_'_GCsvStat_CachePutRejectCount'' @ 140f93220

void __cdecl UE::IoStore::_dynamic_initializer_for___GCsvStat_CachePutRejectCount__(void)

{
  uint uVar1;
  
  uVar1 = _GCsvCategory_Ias.Index;
  ::FName::FName(&_GCsvStat_CachePutRejectCount.Name,L"CachePutRejectCount");
  _GCsvStat_CachePutRejectCount.CategoryIndex = uVar1;
  FCsvProfilerTrace::OutputDeclaredStat(&_GCsvStat_CachePutRejectCount.Name,uVar1);
  return;
}

// `dynamic_initializer_for_'_GCsvStat_CacheReadMB'' @ 140f93260

void __cdecl UE::IoStore::_dynamic_initializer_for___GCsvStat_CacheReadMB__(void)

{
  uint uVar1;
  
  uVar1 = _GCsvCategory_Ias.Index;
  ::FName::FName(&_GCsvStat_CacheReadMB.Name,L"CacheReadMB");
  _GCsvStat_CacheReadMB.CategoryIndex = uVar1;
  FCsvProfilerTrace::OutputDeclaredStat(&_GCsvStat_CacheReadMB.Name,uVar1);
  return;
}

// `dynamic_initializer_for_'_GCsvStat_CacheRejectedMB'' @ 140f932a0

void __cdecl UE::IoStore::_dynamic_initializer_for___GCsvStat_CacheRejectedMB__(void)

{
  uint uVar1;
  
  uVar1 = _GCsvCategory_Ias.Index;
  ::FName::FName(&_GCsvStat_CacheRejectedMB.Name,L"CacheRejectedMB");
  _GCsvStat_CacheRejectedMB.CategoryIndex = uVar1;
  FCsvProfilerTrace::OutputDeclaredStat(&_GCsvStat_CacheRejectedMB.Name,uVar1);
  return;
}

// `dynamic_initializer_for_'_GCsvStat_CacheWrittenMB'' @ 140f932e0

void __cdecl UE::IoStore::_dynamic_initializer_for___GCsvStat_CacheWrittenMB__(void)

{
  uint uVar1;
  
  uVar1 = _GCsvCategory_Ias.Index;
  ::FName::FName(&_GCsvStat_CacheWrittenMB.Name,L"CacheWrittenMB");
  _GCsvStat_CacheWrittenMB.CategoryIndex = uVar1;
  FCsvProfilerTrace::OutputDeclaredStat(&_GCsvStat_CacheWrittenMB.Name,uVar1);
  return;
}

// `dynamic_initializer_for_'_GCsvStat_FrameIoRequestCancelCount'' @ 140f93320

void __cdecl UE::IoStore::_dynamic_initializer_for___GCsvStat_FrameIoRequestCancelCount__(void)

{
  uint uVar1;
  
  uVar1 = _GCsvCategory_Ias.Index;
  ::FName::FName(&_GCsvStat_FrameIoRequestCancelCount.Name,L"FrameIoRequestCancelCount");
  _GCsvStat_FrameIoRequestCancelCount.CategoryIndex = uVar1;
  FCsvProfilerTrace::OutputDeclaredStat(&_GCsvStat_FrameIoRequestCancelCount.Name,uVar1);
  return;
}

// `dynamic_initializer_for_'_GCsvStat_FrameIoRequestCount'' @ 140f93360

void __cdecl UE::IoStore::_dynamic_initializer_for___GCsvStat_FrameIoRequestCount__(void)

{
  uint uVar1;
  
  uVar1 = _GCsvCategory_Ias.Index;
  ::FName::FName(&_GCsvStat_FrameIoRequestCount.Name,L"FrameIoRequestCount");
  _GCsvStat_FrameIoRequestCount.CategoryIndex = uVar1;
  FCsvProfilerTrace::OutputDeclaredStat(&_GCsvStat_FrameIoRequestCount.Name,uVar1);
  return;
}

// `dynamic_initializer_for_'_GCsvStat_FrameIoRequestErrorCount'' @ 140f933a0

void __cdecl UE::IoStore::_dynamic_initializer_for___GCsvStat_FrameIoRequestErrorCount__(void)

{
  uint uVar1;
  
  uVar1 = _GCsvCategory_Ias.Index;
  ::FName::FName(&_GCsvStat_FrameIoRequestErrorCount.Name,L"FrameIoRequestErrorCount");
  _GCsvStat_FrameIoRequestErrorCount.CategoryIndex = uVar1;
  FCsvProfilerTrace::OutputDeclaredStat(&_GCsvStat_FrameIoRequestErrorCount.Name,uVar1);
  return;
}

// `dynamic_initializer_for_'_GCsvStat_FrameIoRequestReadCount'' @ 140f933e0

void __cdecl UE::IoStore::_dynamic_initializer_for___GCsvStat_FrameIoRequestReadCount__(void)

{
  uint uVar1;
  
  uVar1 = _GCsvCategory_Ias.Index;
  ::FName::FName(&_GCsvStat_FrameIoRequestReadCount.Name,L"FrameIoRequestReadCount");
  _GCsvStat_FrameIoRequestReadCount.CategoryIndex = uVar1;
  FCsvProfilerTrace::OutputDeclaredStat(&_GCsvStat_FrameIoRequestReadCount.Name,uVar1);
  return;
}

// `dynamic_initializer_for_'_GCsvStat_FrameIoRequestReadMB'' @ 140f93420

void __cdecl UE::IoStore::_dynamic_initializer_for___GCsvStat_FrameIoRequestReadMB__(void)

{
  uint uVar1;
  
  uVar1 = _GCsvCategory_Ias.Index;
  ::FName::FName(&_GCsvStat_FrameIoRequestReadMB.Name,L"FrameIoRequestReadMB");
  _GCsvStat_FrameIoRequestReadMB.CategoryIndex = uVar1;
  FCsvProfilerTrace::OutputDeclaredStat(&_GCsvStat_FrameIoRequestReadMB.Name,uVar1);
  return;
}

// `dynamic_initializer_for_'_GCsvStat_HttpBandwidthMbps'' @ 140f93460

void __cdecl UE::IoStore::_dynamic_initializer_for___GCsvStat_HttpBandwidthMbps__(void)

{
  uint uVar1;
  
  uVar1 = _GCsvCategory_Ias.Index;
  ::FName::FName(&_GCsvStat_HttpBandwidthMbps[0].Name,L"HttpBandwidthMbps");
  _GCsvStat_HttpBandwidthMbps[0].CategoryIndex = uVar1;
  FCsvProfilerTrace::OutputDeclaredStat(&_GCsvStat_HttpBandwidthMbps[0].Name,uVar1);
  uVar1 = _GCsvCategory_Iad.Index;
  ::FName::FName(&_GCsvStat_HttpBandwidthMbps[1].Name,L"HttpBandwidthMbps");
  _GCsvStat_HttpBandwidthMbps[1].CategoryIndex = uVar1;
  FCsvProfilerTrace::OutputDeclaredStat(&_GCsvStat_HttpBandwidthMbps[1].Name,uVar1);
  return;
}

// `dynamic_initializer_for_'_GCsvStat_HttpCancelCount'' @ 140f934d0

void __cdecl UE::IoStore::_dynamic_initializer_for___GCsvStat_HttpCancelCount__(void)

{
  uint uVar1;
  
  uVar1 = _GCsvCategory_Ias.Index;
  ::FName::FName(&_GCsvStat_HttpCancelCount[0].Name,L"HttpCancelCount");
  _GCsvStat_HttpCancelCount[0].CategoryIndex = uVar1;
  FCsvProfilerTrace::OutputDeclaredStat(&_GCsvStat_HttpCancelCount[0].Name,uVar1);
  uVar1 = _GCsvCategory_Iad.Index;
  ::FName::FName(&_GCsvStat_HttpCancelCount[1].Name,L"HttpCancelCount");
  _GCsvStat_HttpCancelCount[1].CategoryIndex = uVar1;
  FCsvProfilerTrace::OutputDeclaredStat(&_GCsvStat_HttpCancelCount[1].Name,uVar1);
  return;
}

// `dynamic_initializer_for_'_GCsvStat_HttpDownloadedMB'' @ 140f93540

void __cdecl UE::IoStore::_dynamic_initializer_for___GCsvStat_HttpDownloadedMB__(void)

{
  uint uVar1;
  
  uVar1 = _GCsvCategory_Ias.Index;
  ::FName::FName(&_GCsvStat_HttpDownloadedMB[0].Name,L"HttpDownloadedMB");
  _GCsvStat_HttpDownloadedMB[0].CategoryIndex = uVar1;
  FCsvProfilerTrace::OutputDeclaredStat(&_GCsvStat_HttpDownloadedMB[0].Name,uVar1);
  uVar1 = _GCsvCategory_Iad.Index;
  ::FName::FName(&_GCsvStat_HttpDownloadedMB[1].Name,L"HttpDownloadedMB");
  _GCsvStat_HttpDownloadedMB[1].CategoryIndex = uVar1;
  FCsvProfilerTrace::OutputDeclaredStat(&_GCsvStat_HttpDownloadedMB[1].Name,uVar1);
  return;
}

// `dynamic_initializer_for_'_GCsvStat_HttpDurationMsAvg'' @ 140f935b0

void __cdecl UE::IoStore::_dynamic_initializer_for___GCsvStat_HttpDurationMsAvg__(void)

{
  uint uVar1;
  
  uVar1 = _GCsvCategory_Ias.Index;
  ::FName::FName(&_GCsvStat_HttpDurationMsAvg[0].Name,L"HttpDurationMsAvg");
  _GCsvStat_HttpDurationMsAvg[0].CategoryIndex = uVar1;
  FCsvProfilerTrace::OutputDeclaredStat(&_GCsvStat_HttpDurationMsAvg[0].Name,uVar1);
  uVar1 = _GCsvCategory_Iad.Index;
  ::FName::FName(&_GCsvStat_HttpDurationMsAvg[1].Name,L"HttpDurationMsAvg");
  _GCsvStat_HttpDurationMsAvg[1].CategoryIndex = uVar1;
  FCsvProfilerTrace::OutputDeclaredStat(&_GCsvStat_HttpDurationMsAvg[1].Name,uVar1);
  return;
}

// `dynamic_initializer_for_'_GCsvStat_HttpDurationMsMax'' @ 140f93620

void __cdecl UE::IoStore::_dynamic_initializer_for___GCsvStat_HttpDurationMsMax__(void)

{
  uint uVar1;
  
  uVar1 = _GCsvCategory_Ias.Index;
  ::FName::FName(&_GCsvStat_HttpDurationMsMax[0].Name,L"HttpDurationMsMax");
  _GCsvStat_HttpDurationMsMax[0].CategoryIndex = uVar1;
  FCsvProfilerTrace::OutputDeclaredStat(&_GCsvStat_HttpDurationMsMax[0].Name,uVar1);
  uVar1 = _GCsvCategory_Iad.Index;
  ::FName::FName(&_GCsvStat_HttpDurationMsMax[1].Name,L"HttpDurationMsMax");
  _GCsvStat_HttpDurationMsMax[1].CategoryIndex = uVar1;
  FCsvProfilerTrace::OutputDeclaredStat(&_GCsvStat_HttpDurationMsMax[1].Name,uVar1);
  return;
}

// `dynamic_initializer_for_'_GCsvStat_HttpErrorCount'' @ 140f93690

void __cdecl UE::IoStore::_dynamic_initializer_for___GCsvStat_HttpErrorCount__(void)

{
  uint uVar1;
  
  uVar1 = _GCsvCategory_Ias.Index;
  ::FName::FName(&_GCsvStat_HttpErrorCount[0].Name,L"HttpErrorCount");
  _GCsvStat_HttpErrorCount[0].CategoryIndex = uVar1;
  FCsvProfilerTrace::OutputDeclaredStat(&_GCsvStat_HttpErrorCount[0].Name,uVar1);
  uVar1 = _GCsvCategory_Iad.Index;
  ::FName::FName(&_GCsvStat_HttpErrorCount[1].Name,L"HttpErrorCount");
  _GCsvStat_HttpErrorCount[1].CategoryIndex = uVar1;
  FCsvProfilerTrace::OutputDeclaredStat(&_GCsvStat_HttpErrorCount[1].Name,uVar1);
  return;
}

// `dynamic_initializer_for_'_GCsvStat_HttpGetCount'' @ 140f93700

void __cdecl UE::IoStore::_dynamic_initializer_for___GCsvStat_HttpGetCount__(void)

{
  uint uVar1;
  
  uVar1 = _GCsvCategory_Ias.Index;
  ::FName::FName(&_GCsvStat_HttpGetCount[0].Name,L"HttpGetCount");
  _GCsvStat_HttpGetCount[0].CategoryIndex = uVar1;
  FCsvProfilerTrace::OutputDeclaredStat(&_GCsvStat_HttpGetCount[0].Name,uVar1);
  uVar1 = _GCsvCategory_Iad.Index;
  ::FName::FName(&_GCsvStat_HttpGetCount[1].Name,L"HttpGetCount");
  _GCsvStat_HttpGetCount[1].CategoryIndex = uVar1;
  FCsvProfilerTrace::OutputDeclaredStat(&_GCsvStat_HttpGetCount[1].Name,uVar1);
  return;
}

// `dynamic_initializer_for_'_GCsvStat_HttpPendingCount'' @ 140f93770

void __cdecl UE::IoStore::_dynamic_initializer_for___GCsvStat_HttpPendingCount__(void)

{
  uint uVar1;
  
  uVar1 = _GCsvCategory_Ias.Index;
  ::FName::FName(&_GCsvStat_HttpPendingCount[0].Name,L"HttpPendingCount");
  _GCsvStat_HttpPendingCount[0].CategoryIndex = uVar1;
  FCsvProfilerTrace::OutputDeclaredStat(&_GCsvStat_HttpPendingCount[0].Name,uVar1);
  uVar1 = _GCsvCategory_Iad.Index;
  ::FName::FName(&_GCsvStat_HttpPendingCount[1].Name,L"HttpPendingCount");
  _GCsvStat_HttpPendingCount[1].CategoryIndex = uVar1;
  FCsvProfilerTrace::OutputDeclaredStat(&_GCsvStat_HttpPendingCount[1].Name,uVar1);
  return;
}

// `dynamic_initializer_for_'_GCsvStat_HttpRetryCount'' @ 140f937e0

void __cdecl UE::IoStore::_dynamic_initializer_for___GCsvStat_HttpRetryCount__(void)

{
  uint uVar1;
  
  uVar1 = _GCsvCategory_Ias.Index;
  ::FName::FName(&_GCsvStat_HttpRetryCount[0].Name,L"HttpRetryCount");
  _GCsvStat_HttpRetryCount[0].CategoryIndex = uVar1;
  FCsvProfilerTrace::OutputDeclaredStat(&_GCsvStat_HttpRetryCount[0].Name,uVar1);
  uVar1 = _GCsvCategory_Iad.Index;
  ::FName::FName(&_GCsvStat_HttpRetryCount[1].Name,L"HttpRetryCount");
  _GCsvStat_HttpRetryCount[1].CategoryIndex = uVar1;
  FCsvProfilerTrace::OutputDeclaredStat(&_GCsvStat_HttpRetryCount[1].Name,uVar1);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterIasAllowance'' @ 140f93850

void __cdecl
UE::IoStore::JournaledCache::_dynamic_initializer_for____GTraceCounterIasAllowance__(void)

{
  __GTraceCounterIasAllowance.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"Ias/CacheAllowance",TraceCounterType_Int,TraceCounterDisplayHint_None);
  LOCK();
  __GTraceCounterIasAllowance.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterIasAllowance__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterIasMemDemand'' @ 140f93890

void __cdecl
UE::IoStore::JournaledCache::_dynamic_initializer_for____GTraceCounterIasMemDemand__(void)

{
  __GTraceCounterIasMemDemand.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"Ias/CacheMemDemand",TraceCounterType_Int,TraceCounterDisplayHint_None);
  LOCK();
  __GTraceCounterIasMemDemand.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterIasMemDemand__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterIasOpCount'' @ 140f938d0

void __cdecl
UE::IoStore::JournaledCache::_dynamic_initializer_for____GTraceCounterIasOpCount__(void)

{
  __GTraceCounterIasOpCount.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"Ias/CacheOpCount",TraceCounterType_Int,TraceCounterDisplayHint_None);
  LOCK();
  __GTraceCounterIasOpCount.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterIasOpCount__);
  return;
}

// `dynamic_initializer_for_'__GTraceCounterIasReadCursor'' @ 140f93910

void __cdecl
UE::IoStore::JournaledCache::_dynamic_initializer_for____GTraceCounterIasReadCursor__(void)

{
  __GTraceCounterIasReadCursor.CounterId._0_2_ =
       FCountersTrace::OutputInitCounter
                 (L"Ias/CacheReadCursor",TraceCounterType_Int,TraceCounterDisplayHint_None);
  LOCK();
  __GTraceCounterIasReadCursor.CounterId._2_2_ = 0;
  UNLOCK();
  atexit(_dynamic_atexit_destructor_for____GTraceCounterIasReadCursor__);
  return;
}

// `scalar_deleting_destructor' @ 144593c70

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::IoStore::FOnDemandIoStore,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::IoStore::FOnDemandIoStore,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x158);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144594020

void * __thiscall
UE::IoStore::FIoStoreOnDemandModule::_scalar_deleting_destructor_
          (FIoStoreOnDemandModule *this,uint param_1)

{
  FOnDemandIoStoreFactory *pFVar1;
  
  pFVar1 = (this->Factory).Ptr;
  if (pFVar1 != (FOnDemandIoStoreFactory *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar1->IoStore).SharedReferenceCount.ReferenceController);
    ::operator_delete(pFVar1,0x18);
  }
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// operator<<<char,TStringView<char>_> @ 1445942c0

TStringBuilderBase<char> * __cdecl
operator<<<char,TStringView<char>_>(TStringBuilderBase<char> *param_1,TStringView<char> *param_2)

{
  char *pcVar1;
  void *pvVar2;
  int iVar3;
  ulong64 uVar4;
  
  pcVar1 = param_2->DataPtr;
  iVar3 = (int)*(undefined8 *)&param_2->Size;
  uVar4 = (ulong64)iVar3;
  if (param_1->End < param_1->CurPos + uVar4) {
    TStringBuilderBase<char>::Extend(param_1,uVar4);
  }
  if (iVar3 != 0) {
    pvVar2 = FGenericPlatformString::Memcpy(param_1->CurPos,pcVar1,uVar4);
    param_1->CurPos = (char *)((longlong)pvVar2 + uVar4);
  }
  return param_1;
}

// FCasLocation>,TSizedDefaultAllocator<32>_> @ 144594420

FArchive * __cdecl
operator<<<TTuple<UE::THash<96>,UE::IoStore::FCasLocation>_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<TTuple<UE::THash<96>,UE::IoStore::FCasLocation>,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int *piVar1;
  TTuple<UE::THash<96>,UE::IoStore::FCasLocation> *pTVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FArchive *pFVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x14);
  iVar11 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x14,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0xccccd)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar10 = 0;
          uVar9 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar7 = 0;
              if ((int)uVar10 < (int)uVar9) {
                uVar7 = ~uVar10 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                pFVar8 = (FArchive *)(*pcVar4)();
                return pFVar8;
              }
              operator<<<UE::THash<96>,UE::IoStore::FCasLocation>
                        (param_1,(TTuple<UE::THash<96>,UE::IoStore::FCasLocation> *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x14))
              ;
              uVar10 = uVar10 + 1;
              uVar9 = param_2->ArrayNum;
            } while ((int)uVar10 < param_2->ArrayNum);
          }
        }
        else {
          TArray<TTuple<UE::THash<96>,UE::IoStore::FCasLocation>,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x414,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              pTVar2 = (TTuple<UE::THash<96>,UE::IoStore::FCasLocation> *)
                       ((param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x14);
              DefaultConstructItems<TTuple<UE::THash<96>,UE::IoStore::FCasLocation>,int>(pTVar2,1);
              operator<<<UE::THash<96>,UE::IoStore::FCasLocation>(param_1,pTVar2);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FArchive *)(*pcVar4)();
        return pFVar8;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// FBlock,TSizedDefaultAllocator<32>_> @ 144594430

FArchive * __cdecl
operator<<<UE::IoStore::FCasSnapshot::FBlock_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<UE::IoStore::FCasSnapshot::FBlock,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  uint uVar9;
  FBlock *pFVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 4);
  iVar11 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x100001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar9 = 0;
          uVar8 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar9 < (int)uVar8) {
                uVar6 = ~uVar9 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                pFVar7 = (FArchive *)(*pcVar3)();
                return pFVar7;
              }
              UE::IoStore::operator<<
                        (param_1,(FBlock *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x10));
              uVar9 = uVar9 + 1;
              uVar8 = param_2->ArrayNum;
            } while ((int)uVar9 < param_2->ArrayNum);
          }
        }
        else {
          TArray<UE::IoStore::FCasSnapshot::FBlock,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x810,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar10 = (FBlock *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10);
              DefaultConstructItems<UE::IoStore::FCasSnapshot::FBlock,int>(pFVar10,1);
              UE::IoStore::operator<<(param_1,pFVar10);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<wchar_t,char_const_*> @ 144594440

TStringBuilderBase<wchar_t> * __cdecl
operator<<<wchar_t,char_const_*>(TStringBuilderBase<wchar_t> *param_1,char **param_2)

{
  char *_Str;
  size_t sVar1;
  wchar_t *pwVar2;
  int iVar3;
  
  _Str = *param_2;
  iVar3 = 0;
  if (_Str != (char *)0x0) {
    sVar1 = strlen(_Str);
    iVar3 = (int)sVar1;
  }
  if (param_1->End < param_1->CurPos + iVar3) {
    TStringBuilderBase<wchar_t>::Extend(param_1,(longlong)iVar3);
  }
  if (iVar3 != 0) {
    pwVar2 = FGenericPlatformString::Convert<char,wchar_t>(param_1->CurPos,iVar3,_Str,iVar3);
    param_1->CurPos = pwVar2;
  }
  return param_1;
}

// AddLambda<`UE::IoStore::FOnDemandHttpThread::FOnDemandHttpThread'::__l2::<lambda_1>_> @ 144594510

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
AddLambda<_UE::IoStore::FOnDemandHttpThread::FOnDemandHttpThread_::__l2::<lambda_1>_>
          (TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *this,
          <lambda_1> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FOnDemandHttpThread *pFVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined8 *in_R8;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  pFVar5 = (FOnDemandHttpThread *)0x0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::IoStore::FOnDemandHttpThread::FOnDemandHttpThread'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *in_R8;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  param_1->__this = (FOnDemandHttpThread *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_68,(FReadAccessScope *)&local_50);
  if (((local_60.DelegateSize == 0) ||
      (local_60.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar1 = (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_68,(FReadAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar3 = (undefined8 *)
               (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x40))
                         (local_60.DelegateAllocator,local_res10);
      pFVar5 = (FOnDemandHttpThread *)*puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar2 = *(int *)&this->field_0x10;
    param_1->__this = pFVar5;
    if (iVar2 == *(int *)&this->field_0x14) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar2 + 1;
    pFVar6 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x8 + (longlong)iVar2 * 0x10);
    *pFVar6 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar6 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    if (*pFVar6 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar6);
    }
    *pFVar6 = local_60.DelegateAllocator;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar6 + 1) = local_60.DelegateSize;
    local_60.DelegateSize = 0;
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddLambda<`UE::IoStore::FOnDemandIoBackendStats::FOnDemandIoBackendStats'::__l2::<lambda_1>_> @ 144594760

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
AddLambda<_UE::IoStore::FOnDemandIoBackendStats::FOnDemandIoBackendStats_::__l2::<lambda_1>_>
          (TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *this,
          <lambda_1> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FOnDemandIoBackendStats *pFVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined8 *in_R8;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  pFVar5 = (FOnDemandIoBackendStats *)0x0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::IoStore::FOnDemandIoBackendStats::FOnDemandIoBackendStats'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *in_R8;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  param_1->__this = (FOnDemandIoBackendStats *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_68,(FReadAccessScope *)&local_50);
  if (((local_60.DelegateSize == 0) ||
      (local_60.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar1 = (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_68,(FReadAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar3 = (undefined8 *)
               (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x40))
                         (local_60.DelegateAllocator,local_res10);
      pFVar5 = (FOnDemandIoBackendStats *)*puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar2 = *(int *)&this->field_0x10;
    param_1->__this = pFVar5;
    if (iVar2 == *(int *)&this->field_0x14) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar2 + 1;
    pFVar6 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x8 + (longlong)iVar2 * 0x10);
    *pFVar6 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar6 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    if (*pFVar6 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar6);
    }
    *pFVar6 = local_60.DelegateAllocator;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar6 + 1) = local_60.DelegateSize;
    local_60.DelegateSize = 0;
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddLambda<`UE::IoStore::HttpIoDispatcher::FHttpDispatcher::Init'::__l2::<lambda_1>_> @ 1445949b0

/* WARNING: Enum "Type": Some values do not have unique names */

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
AddLambda<_UE::IoStore::HttpIoDispatcher::FHttpDispatcher::Init_::__l2::<lambda_1>_>
          (TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *this,
          <lambda_1> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FHttpDispatcher *pFVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined8 *in_R8;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  pFVar5 = (FHttpDispatcher *)0x0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::IoStore::HttpIoDispatcher::FHttpDispatcher::Init'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *in_R8;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  param_1->__this = (FHttpDispatcher *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_68,(FReadAccessScope *)&local_50);
  if (((local_60.DelegateSize == 0) ||
      (local_60.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar1 = (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_68,(FReadAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar3 = (undefined8 *)
               (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x40))
                         (local_60.DelegateAllocator,local_res10);
      pFVar5 = (FHttpDispatcher *)*puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar2 = *(int *)&this->field_0x10;
    param_1->__this = pFVar5;
    if (iVar2 == *(int *)&this->field_0x14) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar2 + 1;
    pFVar6 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x8 + (longlong)iVar2 * 0x10);
    *pFVar6 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar6 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    if (*pFVar6 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar6);
    }
    *pFVar6 = local_60.DelegateAllocator;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar6 + 1) = local_60.DelegateSize;
    local_60.DelegateSize = 0;
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddLambda<`UE::IoStore::FOnDemandIoStore::Initialize'::__l5::<lambda_1>_> @ 144594c00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(enum_EForkProcessRole),FDefaultDelegateUserPolicy>::
AddLambda<_UE::IoStore::FOnDemandIoStore::Initialize_::__l5::<lambda_1>_>
          (void *this,<lambda_1> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FOnDemandIoStore *pFVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined8 *in_R8;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  pFVar5 = (FOnDemandIoStore *)0x0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EForkProcessRole___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EForkProcessRole),FDefaultDelegateUserPolicy,`UE::IoStore::FOnDemandIoStore::Initialize'::`5'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *in_R8;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (this,(FWriteAccessScope *)&local_38);
  param_1->__this = (FOnDemandIoStore *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_68,(FReadAccessScope *)&local_50);
  if (((local_60.DelegateSize == 0) ||
      (local_60.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar1 = (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_68,(FReadAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar3 = (undefined8 *)
               (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x40))
                         (local_60.DelegateAllocator,local_res10);
      pFVar5 = (FOnDemandIoStore *)*puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar2 = *(int *)((longlong)this + 0x10);
    param_1->__this = pFVar5;
    if (iVar2 == *(int *)((longlong)this + 0x14)) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)((longlong)this + 8),
                         (int *)((longlong)this + 0x14));
    }
    *(int *)((longlong)this + 0x10) = iVar2 + 1;
    pFVar6 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)((longlong)this + 8) + (longlong)iVar2 * 0x10);
    *pFVar6 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar6 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    if (*pFVar6 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar6);
    }
    *pFVar6 = local_60.DelegateAllocator;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar6 + 1) = local_60.DelegateSize;
    local_60.DelegateSize = 0;
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddLambda<`UE::IoStore::FOnDemandHttpThread::FOnDemandHttpThread'::__l2::<lambda_2>_> @ 144594e50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy>::
AddLambda<_UE::IoStore::FOnDemandHttpThread::FOnDemandHttpThread_::__l2::<lambda_2>_>
          (TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> *this,
          <lambda_2> *param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  FDelegateHandle FVar7;
  FOnDemandHttpThread *pFVar8;
  ForElementType<TAlignedBytes<16,16>_> *pFVar9;
  undefined8 *in_R8;
  undefined1 auStack_98 [40];
  _RTL_CRITICAL_SECTION local_70;
  FDelegateAllocation local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_98;
  InitializeCriticalSectionAndSpinCount(&local_70,4000);
  pFVar8 = (FOnDemandHttpThread *)0x0;
  local_48.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_48.DelegateSize = 0;
  EnterCriticalSection(&local_70);
  puVar5 = UE::Core::Private::DelegateAllocate(0x20,&local_48);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::IoStore::FOnDemandHttpThread::FOnDemandHttpThread'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar5[3] = *in_R8;
  }
  LeaveCriticalSection(&local_70);
  if ((this == (TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)
               0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    FVar7.ID = (*pcVar1)();
    return (FDelegateHandle)FVar7.ID;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  param_1->__this = (FOnDemandHttpThread *)0x0;
  EnterCriticalSection(&local_70);
  if (((local_48.DelegateSize != 0) &&
      (local_48.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) &&
     (cVar3 = (**(code **)(*(longlong *)local_48.DelegateAllocator + 0x38))(), cVar3 != '\0')) {
    LeaveCriticalSection(&local_70);
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)this,true);
    EnterCriticalSection(&local_70);
    if ((local_48.DelegateSize != 0) &&
       (local_48.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar5 = (undefined8 *)(**(code **)(*(longlong *)local_48.DelegateAllocator + 0x40))();
      pFVar8 = (FOnDemandHttpThread *)*puVar5;
    }
    LeaveCriticalSection(&local_70);
    param_1->__this = pFVar8;
    iVar4 = *(int *)&this->field_0x30;
    if (iVar4 == *(int *)&this->field_0x34) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x28,(int *)&this->field_0x34);
    }
    pFVar9 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x28 + (longlong)iVar4 * 0x10);
    *(int *)&this->field_0x30 = iVar4 + 1;
    *pFVar9 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar9 + 1) = 0;
    EnterCriticalSection(&local_70);
    if (*pFVar9 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar9);
    }
    *pFVar9 = local_48.DelegateAllocator;
    local_48.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar9 + 1) = local_48.DelegateSize;
    local_48.DelegateSize = 0;
  }
  LeaveCriticalSection(&local_70);
  if (this != (TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)0x0
     ) {
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
  }
  EnterCriticalSection(&local_70);
  if ((local_48.DelegateSize != 0) &&
     (local_48.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_48.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_48,0,0,0x10);
    local_48.DelegateSize = 0;
  }
  LeaveCriticalSection(&local_70);
  if (local_48.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_48.DelegateAllocator);
  }
  DeleteCriticalSection(&local_70);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddLambda<`UE::IoStore::FOnDemandIoBackendStats::FOnDemandIoBackendStats'::__l2::<lambda_2>_> @ 1445950a0

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(TMultiMap<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>_&),FDefaultDelegateUserPolicy>
::AddLambda<_UE::IoStore::FOnDemandIoBackendStats::FOnDemandIoBackendStats_::__l2::<lambda_2>_>
          (void *this,<lambda_2> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FOnDemandIoBackendStats *pFVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined8 *in_R8;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  pFVar5 = (FOnDemandIoBackendStats *)0x0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAV__TMultiMap_W4EOnScreenMessageSeverity_FCoreDelegates__VFText__VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_W4EOnScreenMessageSeverity_FCoreDelegates__VFText___00_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(TMultiMap<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>_&),FDefaultDelegateUserPolicy,`UE::IoStore::FOnDemandIoBackendStats::FOnDemandIoBackendStats'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar3[3] = *in_R8;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (this,(FWriteAccessScope *)&local_38);
  param_1->__this = (FOnDemandIoBackendStats *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_68,(FReadAccessScope *)&local_50);
  if (((local_60.DelegateSize == 0) ||
      (local_60.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar1 = (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_68,(FReadAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar3 = (undefined8 *)
               (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x40))
                         (local_60.DelegateAllocator,local_res10);
      pFVar5 = (FOnDemandIoBackendStats *)*puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar2 = *(int *)((longlong)this + 0x10);
    param_1->__this = pFVar5;
    if (iVar2 == *(int *)((longlong)this + 0x14)) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)((longlong)this + 8),
                         (int *)((longlong)this + 0x14));
    }
    *(int *)((longlong)this + 0x10) = iVar2 + 1;
    pFVar6 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)((longlong)this + 8) + (longlong)iVar2 * 0x10);
    *pFVar6 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar6 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    if (*pFVar6 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar6);
    }
    *pFVar6 = local_60.DelegateAllocator;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar6 + 1) = local_60.DelegateSize;
    local_60.DelegateSize = 0;
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddOrInsertBefore<`UE::IoStore::HttpIoDispatcher::FHttpQueue::EnqueueInternal'::__l15::<lambda_1>_> @ 1445952f0

/* WARNING: Enum "EIoHttpFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TIntrusiveList<UE::IoStore::HttpIoDispatcher::FHttpRequest>::
AddOrInsertBefore<_UE::IoStore::HttpIoDispatcher::FHttpQueue::EnqueueInternal_::__l15::<lambda_1>_>
          (TIntrusiveList<UE::IoStore::HttpIoDispatcher::FHttpRequest> *this,FHttpRequest *param_1,
          <lambda_1> param_2)

{
  FHttpRequest **ppFVar1;
  uint uVar2;
  FHttpRequest *pFVar3;
  code *pcVar4;
  FHttpRequest *pFVar5;
  bool bVar6;
  int iVar7;
  
  ppFVar1 = &param_1->Next;
  if (((param_1 == (FHttpRequest *)0x0) || (*ppFVar1 != (FHttpRequest *)0x0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Element != nullptr && TypeTraits::GetNext(Element) == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                         ,0xdf,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar3 = this->Head;
  if ((pFVar3 == (FHttpRequest *)0x0) ||
     (uVar2 = (param_1->Options).Range.Min, uVar2 < (pFVar3->Options).Range.Min)) {
    if (((param_1 == (FHttpRequest *)0x0) || (*ppFVar1 != (FHttpRequest *)0x0)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Element != nullptr && TypeTraits::GetNext(Element) == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                           ,0x62,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (this->Tail != (FHttpRequest *)0x0) {
      *ppFVar1 = this->Head;
      goto LAB_144595497;
    }
    if (this->Head != (FHttpRequest *)0x0) {
      iVar7 = 0x66;
      goto LAB_14459546b;
    }
  }
  else {
    for (pFVar5 = pFVar3->Next; pFVar5 != (FHttpRequest *)0x0; pFVar5 = pFVar5->Next) {
      if (uVar2 < (pFVar5->Options).Range.Min) {
        pFVar3->Next = param_1;
        param_1->Next = pFVar5;
        return;
      }
      pFVar3 = pFVar5;
    }
    if ((param_1->Next != (FHttpRequest *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Element != nullptr && TypeTraits::GetNext(Element) == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                           ,0x72,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (this->Tail != (FHttpRequest *)0x0) {
      if ((this->Head == (FHttpRequest *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Head != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                             ,0x76,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      this->Tail->Next = param_1;
      this->Tail = param_1;
      return;
    }
    if (this->Head != (FHttpRequest *)0x0) {
      iVar7 = 0x7c;
LAB_14459546b:
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Head == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                         ,iVar7,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  this->Tail = param_1;
LAB_144595497:
  this->Head = param_1;
  return;
}

// AsyncPool<`UE::IoStore::FOnDemandIoStore::TryEnterTickLoop'::__l30::<lambda_1>_> @ 144595e90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

TFuture<void> * __cdecl
AsyncPool<_UE::IoStore::FOnDemandIoStore::TryEnterTickLoop_::__l30::<lambda_1>_>
          (TFuture<void> *__return_storage_ptr__,FQueuedThreadPool *param_1,<lambda_1> *param_2,
          TUniqueFunction<void___cdecl(void)> *param_3,EQueuedWorkPriority param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  TReferenceControllerBase<1> *pTVar5;
  FEvent *pFVar6;
  TFuture<void> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  longlong *plVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  TReferenceControllerBase<1> *pTVar13;
  TReferenceControllerBase<1> *pTVar14;
  undefined1 auStack_98 [32];
  TReferenceControllerBase<1> *local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_68 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UE::IoStore::FOnDemandIoStore::TryEnterTickLoop'::`30'::<lambda_1>,1,0>
              ::_vftable_;
  pTVar13 = (TReferenceControllerBase<1> *)0x0;
  uStack_60 = param_2->__this;
  local_50 = (longlong *)0x0;
  local_78 = (TReferenceControllerBase<1> *)
             UE::Core::Private::Function::
             TFunctionRefCaller<`UE::IoStore::FOnDemandIoStore::TryEnterTickLoop'::__l30::<lambda_1>,void>
             ::Call;
  pTVar5 = operator_new(0x90);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    pTVar11 = (TReferenceControllerBase<1> *)&DAT_00000010;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pTVar5 = pTVar13;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_V__TFutureState_X___00_SharedPointerInternals__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pTVar5 + 1),4000);
    pTVar5[4]._padding_ = *(longlong *)param_3;
    uVar2 = *(undefined4 *)&param_3->field_0x2c;
    pTVar5[6].SharedReferenceCount = (atomic<int>)*(undefined4 *)&param_3->field_0x28;
    pTVar5[6].WeakReferenceCount = (atomic<int>)uVar2;
    *(undefined8 *)&param_3->field_0x28 = 0;
    uVar2 = *(undefined4 *)&param_3->field_0x18;
    uVar3 = *(undefined4 *)&param_3->field_0x1c;
    pTVar5[5]._padding_ = *(longlong *)&param_3->field_0x10;
    pTVar5[5].SharedReferenceCount = (atomic<int>)uVar2;
    pTVar5[5].WeakReferenceCount = (atomic<int>)uVar3;
    pTVar5[6]._padding_ = *(longlong *)&param_3->field_0x20;
    if (pTVar5[4]._padding_ != 0) {
      *(undefined8 *)param_3 = 0;
    }
    pFVar6 = FGenericPlatformProcess::GetSynchEventFromPool(true);
    pTVar11 = pTVar5 + 1;
    pTVar5[7]._padding_ = (longlong)pFVar6;
    *(undefined1 *)&pTVar5[7].SharedReferenceCount = 0;
    if ((pTVar11 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      pTVar7 = (TFuture<void> *)(*pcVar1)();
      return pTVar7;
    }
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    if ((pTVar11 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      pTVar7 = (TFuture<void> *)(*pcVar1)();
      return pTVar7;
    }
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  pcVar1 = *(code **)((longlong)*param_1 + 0x18);
  pTVar8 = operator_new(0x60);
  pTVar10 = pTVar13;
  pTVar12 = pTVar5;
  pTVar14 = pTVar11;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    pTVar8->SharedReferenceCount = (atomic<int>)0x0;
    pTVar8->WeakReferenceCount = (atomic<int>)0x0;
    pTVar8->_padding_ = (longlong)&___7__TAsyncQueuedWork_X__6B_;
    pTVar8[1]._padding_ = (longlong)local_78;
    *(longlong **)&pTVar8[3].SharedReferenceCount = local_50;
    *(undefined4 *)&pTVar8[2]._padding_ = (undefined4)local_68;
    *(undefined4 *)((longlong)&pTVar8[2]._padding_ + 4) = local_68._4_4_;
    pTVar8[2].SharedReferenceCount = uStack_60._0_4_;
    pTVar8[2].WeakReferenceCount = uStack_60._4_4_;
    pTVar8[3]._padding_ = local_58;
    if (pTVar8[1]._padding_ != 0) {
      local_78 = pTVar13;
    }
    pTVar8[4]._padding_ = (longlong)pTVar11;
    *(TReferenceControllerBase<1> **)&pTVar8[4].SharedReferenceCount = pTVar5;
    *(undefined1 *)&pTVar8[5]._padding_ = 1;
    pTVar10 = pTVar8;
    pTVar12 = pTVar13;
    pTVar14 = pTVar13;
  }
  (*pcVar1)(param_1,pTVar10,param_4);
  *(TReferenceControllerBase<1> **)__return_storage_ptr__ = pTVar11;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (((pTVar14 != (TReferenceControllerBase<1> *)0x0) &&
      (*(char *)&pTVar14[6].SharedReferenceCount == '\0')) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("State->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x242,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pTVar7 = (TFuture<void> *)(*pcVar1)();
    return pTVar7;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  if (local_78 != (TReferenceControllerBase<1> *)0x0) {
    plVar9 = &local_68;
    if (local_50 != (longlong *)0x0) {
      plVar9 = local_50;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  if (*(longlong *)param_3 != 0) {
    plVar9 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar9 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  return __return_storage_ptr__;
}

// ConstructItems<TSharedRef<UE::IoStore::FOnDemandIoStore::FMountRequest,1>,TSharedRef<UE::IoStore::FOnDemandIoStore::FMountRequest,1>,int> @ 144596370

void __cdecl
ConstructItems<TSharedRef<UE::IoStore::FOnDemandIoStore::FMountRequest,1>,TSharedRef<UE::IoStore::FOnDemandIoStore::FMountRequest,1>,int>
          (void *param_1,TSharedRef<UE::IoStore::FOnDemandIoStore::FMountRequest,1> *param_2,
          int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FMountRequest **)(lVar2 + (longlong)param_2) = param_2->Object;
      pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
      *(TReferenceControllerBase<1> **)(lVar2 + 8 + (longlong)param_2) = pTVar1;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<TTuple<UE::THash<96>,UE::IoStore::FCasLocation>,int> @ 1445963b0

void __cdecl
DefaultConstructItems<TTuple<UE::THash<96>,UE::IoStore::FCasLocation>,int>
          (void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined4 *)(lVar1 + 4) = 0xffffffff;
      lVar1 = lVar1 + 0x14;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::IoStore::FCasSnapshot::FBlock,int> @ 1445963f0

void __cdecl DefaultConstructItems<UE::IoStore::FCasSnapshot::FBlock,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined4 *)param_1 = 0;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<`UE::IoStore::FOnDemandInstallCache::Verify'::__l2::FChunkLookup,int> @ 144596420

void __cdecl
DefaultConstructItems<_UE::IoStore::FOnDemandInstallCache::Verify_::__l2::FChunkLookup,int>
          (void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      *(undefined4 *)(lVar1 + 0x1c) = 0;
      *(undefined4 *)(lVar1 + 0x20) = 0x80;
      *(undefined4 *)(lVar1 + 0x24) = 0xffffffff;
      *(undefined4 *)(lVar1 + 0x28) = 0;
      *(undefined8 *)(lVar1 + 0x34) = 0;
      *(undefined4 *)(lVar1 + 0x3c) = 0;
      lVar1 = lVar1 + 0x50;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::IoStore::FOnDemandPackageStoreBackend::FContainer,int> @ 144596470

void __cdecl
DefaultConstructItems<UE::IoStore::FOnDemandPackageStoreBackend::FContainer,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-2] = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[4] = 0;
      *(undefined4 *)(puVar1 + 5) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x2c) = 0x80;
      *(undefined4 *)(puVar1 + 6) = 0xffffffff;
      *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
      puVar1[8] = 0;
      *(undefined4 *)(puVar1 + 9) = 0;
      puVar1[10] = 0;
      puVar1[0xb] = 0;
      puVar1[0xe] = 0;
      *(undefined4 *)(puVar1 + 0xf) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x7c) = 0x80;
      *(undefined4 *)(puVar1 + 0x10) = 0xffffffff;
      *(undefined4 *)((longlong)puVar1 + 0x84) = 0;
      puVar1[0x12] = 0;
      *(undefined4 *)(puVar1 + 0x13) = 0;
      puVar1[0x14] = 0;
      puVar1[0x15] = 0;
      puVar1[0x18] = 0;
      *(undefined4 *)(puVar1 + 0x19) = 0;
      *(undefined4 *)((longlong)puVar1 + 0xcc) = 0x80;
      *(undefined4 *)(puVar1 + 0x1a) = 0xffffffff;
      *(undefined4 *)((longlong)puVar1 + 0xd4) = 0;
      puVar1[0x1c] = 0;
      *(undefined4 *)(puVar1 + 0x1d) = 0;
      puVar1[0x1e] = 0;
      puVar1[0x1f] = 0;
      puVar1[0x22] = 0;
      *(undefined4 *)(puVar1 + 0x23) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x11c) = 0x80;
      *(undefined4 *)(puVar1 + 0x24) = 0xffffffff;
      *(undefined4 *)((longlong)puVar1 + 0x124) = 0;
      puVar1[0x26] = 0;
      *(undefined4 *)(puVar1 + 0x27) = 0;
      puVar1 = puVar1 + 0x2a;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::IoStore::JournaledCache::FMemCache::FItem,int> @ 144596580

void __cdecl
DefaultConstructItems<UE::IoStore::JournaledCache::FMemCache::FItem,int>(void *param_1,int param_2)

{
  FIoBuffer *this;
  
  if (param_2 != 0) {
    this = (FIoBuffer *)((longlong)param_1 + 8);
    do {
      FIoBuffer::FIoBuffer(this);
      this = this + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::IoStore::FOnDemandChunkEntryReferences,int> @ 1445965c0

void __cdecl
DefaultConstructItems<UE::IoStore::FOnDemandChunkEntryReferences,int>(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 0x20);
    do {
      *(undefined8 *)(puVar1 + -8) = 0;
      *(undefined8 *)(puVar1 + -2) = 0;
      *puVar1 = 0;
      puVar1[1] = 0x80;
      puVar1 = puVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::IoStore::FOnDemandTagSet,int> @ 144596600

void __cdecl DefaultConstructItems<UE::IoStore::FOnDemandTagSet,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      lVar1 = lVar1 + 0x20;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::IoStore::Private::FResolvedContainerChunks,int> @ 144596630

void __cdecl
DefaultConstructItems<UE::IoStore::Private::FResolvedContainerChunks,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-2] = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1 = puVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<`UE::IoStore::FOnDemandInstallCache::Verify'::__l2::FChunkLookup,int> @ 1445966d0

void __cdecl
DestructItems<_UE::IoStore::FOnDemandInstallCache::Verify_::__l2::FChunkLookup,int>
          (FChunkLookup *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->AddrToIndex).field_0x40;
    do {
      *(undefined4 *)(puVar1 + 1) = 0;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<UE::THash<96>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<UE::THash<96>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<UE::THash<96>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -8));
      puVar1 = puVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::IoStore::FOnDemandPackageStoreBackend::FContainer,int> @ 144596730

/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __cdecl
DestructItems<UE::IoStore::FOnDemandPackageStoreBackend::FContainer,int>
          (FContainer *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->SoftRefs).field_0x40;
    do {
      *(undefined4 *)(puVar1 + 1) = 0;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<FPackageId,FFilePackageStoreEntrySoftReferences_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FPackageId,FFilePackageStoreEntrySoftReferences_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FPackageId,FFilePackageStoreEntrySoftReferences_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -8));
      *(undefined4 *)(puVar1 + -9) = 0;
      if ((void *)puVar1[-10] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-10]);
      }
      TSparseArray<TSparseSetElement<TTuple<FPackageId,TTuple<FName,FPackageId>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FPackageId,TTuple<FName,FPackageId>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FPackageId,TTuple<FName,FPackageId>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -0x12));
      *(undefined4 *)(puVar1 + -0x13) = 0;
      if ((void *)puVar1[-0x14] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0x14]);
      }
      TSparseArray<TSparseSetElement<TTuple<FPackageId,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FPackageId,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FPackageId,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -0x1c));
      *(undefined4 *)(puVar1 + -0x1d) = 0;
      if ((void *)puVar1[-0x1e] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0x1e]);
      }
      TSparseArray<TSparseSetElement<TTuple<FPackageId,UE::IoStore::FOnDemandPackageStoreBackend::FOnDemandPackageStoreEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FPackageId,UE::IoStore::FOnDemandPackageStoreBackend::FOnDemandPackageStoreEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FPackageId,UE::IoStore::FOnDemandPackageStoreBackend::FOnDemandPackageStoreEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -0x26));
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)puVar1[-0x27]);
      puVar1 = puVar1 + 0x2a;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<`UE::IoStore::FOnDemandInstallCache::Defrag'::__l2::FDefragBlock,int> @ 144596800

void __cdecl
DestructItems<_UE::IoStore::FOnDemandInstallCache::Defrag_::__l2::FDefragBlock,int>
          (FDefragBlock *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<_private:_class_TValueOrError<void,UE::UnifiedError::FError>___cdecl_UE::IoStore::FOnDemandInstallCache::Defrag(TArray<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,TSizedDefaultAllocator<32>_>_const_&,TArray<TBitArray<FDefaultBitArrayAllocator>,TSizedDefaultAllocator<32>_>_const_&,TMap<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>_&,unsigned___int64_const_*,unsigned___int64_*)_::_2_::FDefragBlockReferencedChunk,TSizedDefaultAllocator<32>_>
  *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->ReferencedChunks;
    do {
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::IoStore::JournaledCache::FMemCache::FItem,int> @ 144596840

void __cdecl
DestructItems<UE::IoStore::JournaledCache::FMemCache::FItem,int>(FItem *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  BufCore *this;
  FIoBuffer *pFVar3;
  
  if (param_2 != 0) {
    pFVar3 = &param_1->Data;
    do {
      this = (pFVar3->CorePtr).Reference;
      if (this != (BufCore *)0x0) {
        FIoBuffer::BufCore::CheckRefCount(this);
        LOCK();
        piVar1 = &this->NumRefs;
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          FIoBuffer::BufCore::~BufCore(this);
          operator_delete(this,0x20);
        }
      }
      pFVar3 = pFVar3 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::IoStore::FOnDemandChunkEntryReferences,int> @ 1445968c0

void __cdecl
DestructItems<UE::IoStore::FOnDemandChunkEntryReferences,int>
          (FOnDemandChunkEntryReferences *param_1,int param_2)

{
  ForElementType<unsigned_int> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->Indices).AllocatorInstance.SecondaryData;
    do {
      if (*pFVar1 != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)*pFVar1);
      }
      pFVar1 = pFVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::IoStore::FOnDemandContainerChunkEntryReferences,int> @ 144596900

/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __cdecl
DestructItems<UE::IoStore::FOnDemandContainerChunkEntryReferences,int>
          (FOnDemandContainerChunkEntryReferences *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->Container).SharedReferenceCount;
    do {
      if (pFVar1[3].ReferenceController != (void *)0x0) {
        FMemory::Free(pFVar1[3].ReferenceController);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::IoStore::FOnDemandTagSet,int> @ 144596950

void __cdecl DestructItems<UE::IoStore::FOnDemandTagSet,int>(FOnDemandTagSet *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->PackageIndicies).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->Tag).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<UE::IoStore::FMultiEndpointHttpClient::FRequest,int> @ 1445969a0

void __cdecl
DestructItems<UE::IoStore::FMultiEndpointHttpClient::FRequest,int>(FRequest *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  BufCore *pBVar4;
  longlong *plVar5;
  FString *pFVar6;
  
  if (param_2 != 0) {
    pFVar6 = &param_1->ResponseMessage;
    do {
      pFVar3 = (pFVar6->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      pBVar4 = ((FIoBuffer *)(pFVar6 + -1))[1].CorePtr.Reference;
      if (pBVar4 != (BufCore *)0x0) {
        FIoBuffer::BufCore::CheckRefCount(pBVar4);
        LOCK();
        piVar1 = &pBVar4->NumRefs;
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          FIoBuffer::BufCore::~BufCore(pBVar4);
          operator_delete(pBVar4,0x20);
        }
      }
      pBVar4 = (((FIoBuffer *)(pFVar6 + -1))->CorePtr).Reference;
      if (pBVar4 != (BufCore *)0x0) {
        FIoBuffer::BufCore::CheckRefCount(pBVar4);
        LOCK();
        piVar1 = &pBVar4->NumRefs;
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          FIoBuffer::BufCore::~BufCore(pBVar4);
          operator_delete(pBVar4,0x20);
        }
      }
      if (*(void **)((longlong)(pFVar6 + -4) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pFVar6 + -4) + 8));
      }
      DestructItems<FAnsiString,int>
                (*(FAnsiString **)((longlong)(pFVar6 + -5) + 8),*(int *)(pFVar6 + -4));
      if (*(void **)((longlong)(pFVar6 + -5) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pFVar6 + -5) + 8));
      }
      DestructItems<FAnsiString,int>
                (*(FAnsiString **)((longlong)(pFVar6 + -6) + 8),*(int *)(pFVar6 + -5));
      if (*(void **)((longlong)(pFVar6 + -6) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pFVar6 + -6) + 8));
      }
      if (*(longlong *)((longlong)(pFVar6 + -9) + 8) != 0) {
        plVar5 = (longlong *)((longlong)(pFVar6 + -8) + 8);
        if (*(longlong **)(pFVar6 + -6) != (longlong *)0x0) {
          plVar5 = *(longlong **)(pFVar6 + -6);
        }
        (**(code **)(*plVar5 + 0x10))();
      }
      pFVar6 = pFVar6 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::IoStore::Private::FResolvedContainerChunks,int> @ 144596ac0

/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __cdecl
DestructItems<UE::IoStore::Private::FResolvedContainerChunks,int>
          (FResolvedContainerChunks *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->Container).SharedReferenceCount;
    do {
      if (pFVar1[1].ReferenceController != (void *)0x0) {
        FMemory::Free(pFVar1[1].ReferenceController);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TBitArray<FDefaultBitArrayAllocator>,int> @ 144596b10

void __cdecl
DestructItems<TBitArray<FDefaultBitArrayAllocator>,int>
          (TBitArray<FDefaultBitArrayAllocator> *param_1,int param_2)

{
  ForElementType<unsigned_int> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->AllocatorInstance).SecondaryData;
    do {
      if (*pFVar1 != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)*pFVar1);
      }
      pFVar1 = pFVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,int> @ 144596b50

/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __cdecl
DestructItems<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,int>
          (TSharedPtr<UE::IoStore::FOnDemandContainer,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedRef<UE::IoStore::FOnDemandIoStore::FMountRequest,1>,int> @ 144596b90

void __cdecl
DestructItems<TSharedRef<UE::IoStore::FOnDemandIoStore::FMountRequest,1>,int>
          (TSharedRef<UE::IoStore::FOnDemandIoStore::FMountRequest,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TUniquePtr<UE::IoStore::FMultiEndpointHttpClient::FConnection,TDefaultDelete<UE::IoStore::FMultiEndpointHttpClient::FConnection>_>,int> @ 144596bd0

void __cdecl
DestructItems<TUniquePtr<UE::IoStore::FMultiEndpointHttpClient::FConnection,TDefaultDelete<UE::IoStore::FMultiEndpointHttpClient::FConnection>_>,int>
          (TUniquePtr<UE::IoStore::FMultiEndpointHttpClient::FConnection,TDefaultDelete<UE::IoStore::FMultiEndpointHttpClient::FConnection>_>
           *param_1,int param_2)

{
  FConnection *this;
  ForElementType<TUniquePtr<UE::IoStore::HTTP::FConnectionPool,TDefaultDelete<UE::IoStore::HTTP::FConnectionPool>_>_>
  FVar1;
  ForElementType<TUniquePtr<UE::IoStore::HTTP::FConnectionPool,TDefaultDelete<UE::IoStore::HTTP::FConnectionPool>_>_>
  FVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    this = param_1->Ptr;
    if (this != (FConnection *)0x0) {
      FVar1 = (this->Pools).AllocatorInstance.SecondaryData;
      FVar2 = (ForElementType<TUniquePtr<UE::IoStore::HTTP::FConnectionPool,TDefaultDelete<UE::IoStore::HTTP::FConnectionPool>_>_>
               )&this->Pools;
      if (FVar1 != (ForElementType<TUniquePtr<UE::IoStore::HTTP::FConnectionPool,TDefaultDelete<UE::IoStore::HTTP::FConnectionPool>_>_>
                    )0x0) {
        FVar2 = FVar1;
      }
      DestructItems<TUniquePtr<UE::IoStore::HTTP::FConnectionPool,TDefaultDelete<UE::IoStore::HTTP::FConnectionPool>_>,int>
                ((TUniquePtr<UE::IoStore::HTTP::FConnectionPool,TDefaultDelete<UE::IoStore::HTTP::FConnectionPool>_>
                  *)FVar2,(this->Pools).ArrayNum);
      FVar1 = (this->Pools).AllocatorInstance.SecondaryData;
      if (FVar1 != (ForElementType<TUniquePtr<UE::IoStore::HTTP::FConnectionPool,TDefaultDelete<UE::IoStore::HTTP::FConnectionPool>_>_>
                    )0x0) {
        FMemory::Free((void *)FVar1);
      }
      UE::IoStore::FOnDemandHostGroup::~FOnDemandHostGroup(&this->HostGroup);
      operator_delete(this,0x48);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TUniquePtr<UE::IoStore::JournaledCache::FCache,TDefaultDelete<UE::IoStore::JournaledCache::FCache>_>,int> @ 144596c60

void __cdecl
DestructItems<TUniquePtr<UE::IoStore::JournaledCache::FCache,TDefaultDelete<UE::IoStore::JournaledCache::FCache>_>,int>
          (TUniquePtr<UE::IoStore::JournaledCache::FCache,TDefaultDelete<UE::IoStore::JournaledCache::FCache>_>
           *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    TDefaultDelete<UE::IoStore::JournaledCache::FCache>::operator()
              ((TDefaultDelete<UE::IoStore::JournaledCache::FCache> *)param_1,param_1->Ptr);
    param_1 = (TUniquePtr<UE::IoStore::JournaledCache::FCache,TDefaultDelete<UE::IoStore::JournaledCache::FCache>_>
               *)((longlong)param_1 + 8);
  }
  return;
}

// DestructItems<TUniquePtr<UE::IoStore::HTTP::FConnectionPool,TDefaultDelete<UE::IoStore::HTTP::FConnectionPool>_>,int> @ 144596ca0

void __cdecl
DestructItems<TUniquePtr<UE::IoStore::HTTP::FConnectionPool,TDefaultDelete<UE::IoStore::HTTP::FConnectionPool>_>,int>
          (TUniquePtr<UE::IoStore::HTTP::FConnectionPool,TDefaultDelete<UE::IoStore::HTTP::FConnectionPool>_>
           *param_1,int param_2)

{
  FConnectionPool *this;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    this = param_1->Ptr;
    if (this != (FConnectionPool *)0x0) {
      UE::IoStore::HTTP::FConnectionPool::~FConnectionPool(this);
      operator_delete(this,8);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<UE::IoStore::FIASHostGroup,int> @ 144596d00

void __cdecl DestructItems<UE::IoStore::FIASHostGroup,int>(FIASHostGroup *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->Impl).SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FIoBuffer,int> @ 144596d40

void __cdecl DestructItems<FIoBuffer,int>(FIoBuffer *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  BufCore *this;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    this = (param_1->CorePtr).Reference;
    if (this != (BufCore *)0x0) {
      FIoBuffer::BufCore::CheckRefCount(this);
      LOCK();
      piVar1 = &this->NumRefs;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FIoBuffer::BufCore::~BufCore(this);
        operator_delete(this,0x20);
      }
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FIoRequest,int> @ 144596db0

void __cdecl DestructItems<FIoRequest,int>(FIoRequest *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FIoRequest::~FIoRequest(param_1);
    param_1 = param_1 + 1;
  }
  return;
}

// DropImpl<`UE::IoStore::JournaledCache::FMemCache::Drop'::__l2::<lambda_1>_> @ 144596df0

int __thiscall
UE::IoStore::JournaledCache::FMemCache::
DropImpl<_UE::IoStore::JournaledCache::FMemCache::Drop_::__l2::<lambda_1>_>
          (FMemCache *this,uint param_1,<lambda_1> *param_2)

{
  TArray<UE::IoStore::JournaledCache::FMemCache::FItem,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  BufCore *this_00;
  BufCore *this_01;
  code *pcVar5;
  bool bVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  atomic<__int64> aVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  uint uVar15;
  atomic<__int64> aVar16;
  uint uVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  
  iVar10 = 0;
  uVar4 = (this->Items).ArrayNum;
  uVar8 = this->UsedSize;
  if ((int)param_1 < (int)this->UsedSize) {
    uVar8 = param_1;
  }
  while( true ) {
    uVar4 = uVar4 - 1;
    if (((int)uVar4 < 0) || ((int)uVar8 <= iVar10)) {
      this->UsedSize = this->UsedSize - iVar10;
      aVar12._4_4_ = 0;
      aVar12._0_4_ = this->UsedSize;
      aVar16._4_4_ = 0;
      aVar16._0_4_ = this->UsedSize;
      if (GCachePendingBytes.Value != aVar12) {
        LOCK();
        UNLOCK();
        GCachePendingBytes.Value = aVar16;
        if (-1 < CountersChannel->Enabled) {
          if (GCachePendingBytes.CounterId == (atomic<unsigned_int>)0x0) {
            uVar7 = FCountersTrace::OutputInitCounter
                              (GCachePendingBytes.CounterName,TraceCounterType_Int,
                               GCachePendingBytes.CounterFlags & 0xf);
            LOCK();
            if (GCachePendingBytes.CounterId == (atomic<unsigned_int>)0x0) {
              GCachePendingBytes.CounterId._2_2_ = 0;
              GCachePendingBytes.CounterId._0_2_ = uVar7;
            }
            UNLOCK();
          }
          FCountersTrace::OutputSetValue
                    (GCachePendingBytes.CounterId._0_2_,(long64)GCachePendingBytes.Value);
        }
      }
      return iVar10;
    }
    if (uVar4 == 0) {
      uVar18 = 0;
    }
    else {
      uVar18 = (param_1 * 0xa9e0493) % uVar4;
    }
    pTVar1 = &this->Items;
    uVar17 = ~uVar18 >> 0x1f;
    uVar9 = 0;
    if ((int)uVar18 < (this->Items).ArrayNum) {
      uVar9 = uVar17;
    }
    if ((uVar9 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      iVar10 = (*pcVar5)();
      return iVar10;
    }
    param_1 = *(uint *)(*(longlong *)
                         ((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar18 * 0x10 + 8) + 8);
    iVar10 = iVar10 + param_1;
    uVar9 = 0;
    if ((int)uVar18 < (this->Items).ArrayNum) {
      uVar9 = uVar17;
    }
    if ((uVar9 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      iVar10 = (*pcVar5)();
      return iVar10;
    }
    iVar11 = (this->Items).ArrayNum;
    uVar15 = iVar11 - 1;
    uVar9 = 0;
    if ((int)uVar15 < iVar11) {
      uVar9 = ~uVar15 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      iVar10 = (*pcVar5)();
      return iVar10;
    }
    iVar11 = (this->Items).ArrayNum;
    pFVar19 = (pTVar1->AllocatorInstance).Data;
    uVar9 = 0;
    if ((int)uVar18 < iVar11) {
      uVar9 = uVar17;
    }
    if ((uVar9 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) break;
    pFVar13 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar18 * 0x10;
    *(undefined8 *)pFVar13 = *(undefined8 *)(pFVar19 + (longlong)iVar11 * 0x10 + -0x10);
    FIoBuffer::operator=
              ((FIoBuffer *)(pFVar13 + 8),(FIoBuffer *)(pFVar19 + (longlong)iVar11 * 0x10 + -8));
    if (((this->Items).ArrayNum < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      iVar10 = (*pcVar5)();
      return iVar10;
    }
    lVar14 = (longlong)(this->Items).ArrayNum;
    pFVar19 = (pTVar1->AllocatorInstance).Data;
    this_00 = *(BufCore **)(pFVar19 + lVar14 * 0x10 + -8);
    *(undefined8 *)(pFVar19 + lVar14 * 0x10 + -8) = 0;
    iVar11 = (this->Items).ArrayNum;
    pFVar19 = (pTVar1->AllocatorInstance).Data + (longlong)iVar11 * 0x10;
    this_01 = *(BufCore **)(pFVar19 + -8);
    if (this_01 != (BufCore *)0x0) {
      FIoBuffer::BufCore::CheckRefCount(this_01);
      LOCK();
      piVar2 = &this_01->NumRefs;
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        FIoBuffer::BufCore::~BufCore(this_01);
        ::operator_delete(this_01,0x20);
      }
    }
    iVar11 = (this->Items).ArrayNum - iVar11;
    if (iVar11 != 0) {
      memmove(pFVar19 + -0x10,pFVar19,(longlong)iVar11 << 4);
    }
    piVar2 = &(this->Items).ArrayNum;
    *piVar2 = *piVar2 + -1;
    Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&pTVar1->AllocatorInstance,(this->Items).ArrayNum,&(this->Items).ArrayMax);
    if (this_00 != (BufCore *)0x0) {
      FIoBuffer::BufCore::CheckRefCount(this_00);
      LOCK();
      piVar2 = &this_00->NumRefs;
      iVar11 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        FIoBuffer::BufCore::~BufCore(this_00);
        ::operator_delete(this_00,0x20);
      }
    }
  }
  pcVar5 = (code *)swi(3);
  iVar10 = (*pcVar5)();
  return iVar10;
}

// ExecuteOnGameThread<`UE::IoStore::FOnDemandContentInstaller::CompleteDefragRequest'::__l34::<lambda_1>_> @ 14459aa80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
ExecuteOnGameThread<_UE::IoStore::FOnDemandContentInstaller::CompleteDefragRequest_::__l34::<lambda_1>_>
          (wchar_t *param_1,<lambda_1> *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TRefCountPtr<UE::UnifiedError::IErrorDetails_const_> TVar3;
  FTSTicker *this;
  code **ppcVar4;
  undefined1 auStackY_e8 [32];
  TWeakPtr<FTSTicker::FElement,1> local_b8;
  code *local_a8;
  code *local_98;
  code *pcStack_90;
  code *local_88;
  code **local_80;
  code *local_78;
  FError local_70;
  char local_60;
  code *local_58 [2];
  code *local_48 [3];
  code **local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  this = FTSTicker::GetCoreTicker();
  local_a8 = *(code **)&param_2->OnCompleted;
  local_80 = *(code ***)&(param_2->OnCompleted).field_0x28;
  *(undefined8 *)&(param_2->OnCompleted).field_0x28 = 0;
  local_88 = *(code **)&(param_2->OnCompleted).field_0x20;
  local_98 = *(code **)&(param_2->OnCompleted).field_0x10;
  pcStack_90 = *(code **)&(param_2->OnCompleted).field_0x18;
  if (local_a8 != (code *)0x0) {
    *(undefined8 *)&param_2->OnCompleted = 0;
  }
  local_60 = (param_2->DefragResult).Error.bIsSet;
  local_78 = (code *)(param_2->DefragResult).DurationInSeconds;
  if ((bool)local_60 != false) {
    UE::UnifiedError::FError::FError(&local_70,&(param_2->DefragResult).Error.TypedValue);
  }
  local_58[0] = (code *)0x0;
  local_30 = FMemory::Malloc(0x60,0x10);
  *local_30 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`ExecuteOnGameThread<`UE::IoStore::FOnDemandContentInstaller::CompleteDefragRequest'::`34'::<lambda_1>_>'::`2'::<lambda_1>,1,1>
                       ::_vftable_;
  ppcVar4 = local_30 + 2;
  *ppcVar4 = local_a8;
  local_30[7] = (code *)local_80;
  local_80 = (code **)0x0;
  local_30[4] = local_98;
  local_30[5] = pcStack_90;
  local_30[6] = local_88;
  if (*ppcVar4 != (code *)0x0) {
    local_a8 = (code *)0x0;
  }
  *(undefined1 *)(local_30 + 0xb) = 0;
  local_30[8] = local_78;
  *(char *)(local_30 + 0xb) = local_60;
  if (local_60 != '\0') {
    UE::UnifiedError::FError::FError((FError *)(local_30 + 9),&local_70);
  }
  if (ppcVar4 != (code **)0x0) {
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`ExecuteOnGameThread<`UE::IoStore::FOnDemandContentInstaller::CompleteDefragRequest'::__l34::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
                  ::Call;
  }
  FTSTicker::AddTicker(this,&local_b8,param_1,0.0,(TUniqueFunction<bool___cdecl(float)> *)local_58);
  if (local_b8.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_b8.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_b8.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_b8.WeakReferenceCount.ReferenceController,1);
    }
  }
  if (local_58[0] != (code *)0x0) {
    ppcVar4 = local_58 + 2;
    if (local_30 != (code **)0x0) {
      ppcVar4 = local_30;
    }
    (**(code **)(*ppcVar4 + 0x10))();
  }
  TVar3.Reference = local_70.ErrorDetails.Reference;
  if (local_60 != '\0') {
    local_70.ErrorCode = 0;
    local_70.ModuleId = 0;
    if (local_70.ErrorDetails.Reference != (IErrorDetails *)0x0) {
      local_70.ErrorDetails.Reference = (IErrorDetails *)0x0;
      (**(code **)((longlong)*TVar3.Reference + 0x10))();
      if (local_70.ErrorDetails.Reference != (IErrorDetails *)0x0) {
        (**(code **)((longlong)*local_70.ErrorDetails.Reference + 0x10))();
      }
    }
  }
  if (local_a8 != (code *)0x0) {
    ppcVar4 = &local_98;
    if (local_80 != (code **)0x0) {
      ppcVar4 = local_80;
    }
    (**(code **)(*ppcVar4 + 0x10))();
  }
  return;
}

// ExecuteOnGameThread<`UE::IoStore::FOnDemandContentInstaller::CompletePurgeRequest'::__l34::<lambda_1>_> @ 14459ac70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
ExecuteOnGameThread<_UE::IoStore::FOnDemandContentInstaller::CompletePurgeRequest_::__l34::<lambda_1>_>
          (wchar_t *param_1,<lambda_1> *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TRefCountPtr<UE::UnifiedError::IErrorDetails_const_> TVar3;
  FTSTicker *this;
  code **ppcVar4;
  undefined1 auStackY_e8 [32];
  TWeakPtr<FTSTicker::FElement,1> local_b8;
  code *local_a8;
  code *local_98;
  code *pcStack_90;
  code *local_88;
  code **local_80;
  code *local_78;
  FError local_70;
  char local_60;
  code *local_58 [2];
  code *local_48 [3];
  code **local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  this = FTSTicker::GetCoreTicker();
  local_a8 = *(code **)&param_2->OnCompleted;
  local_80 = *(code ***)&(param_2->OnCompleted).field_0x28;
  *(undefined8 *)&(param_2->OnCompleted).field_0x28 = 0;
  local_88 = *(code **)&(param_2->OnCompleted).field_0x20;
  local_98 = *(code **)&(param_2->OnCompleted).field_0x10;
  pcStack_90 = *(code **)&(param_2->OnCompleted).field_0x18;
  if (local_a8 != (code *)0x0) {
    *(undefined8 *)&param_2->OnCompleted = 0;
  }
  local_60 = (param_2->PurgeResult).Error.bIsSet;
  local_78 = (code *)(param_2->PurgeResult).DurationInSeconds;
  if ((bool)local_60 != false) {
    UE::UnifiedError::FError::FError(&local_70,&(param_2->PurgeResult).Error.TypedValue);
  }
  local_58[0] = (code *)0x0;
  local_30 = FMemory::Malloc(0x60,0x10);
  *local_30 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`ExecuteOnGameThread<`UE::IoStore::FOnDemandContentInstaller::CompletePurgeRequest'::`34'::<lambda_1>_>'::`2'::<lambda_1>,1,1>
                       ::_vftable_;
  ppcVar4 = local_30 + 2;
  *ppcVar4 = local_a8;
  local_30[7] = (code *)local_80;
  local_80 = (code **)0x0;
  local_30[4] = local_98;
  local_30[5] = pcStack_90;
  local_30[6] = local_88;
  if (*ppcVar4 != (code *)0x0) {
    local_a8 = (code *)0x0;
  }
  *(undefined1 *)(local_30 + 0xb) = 0;
  local_30[8] = local_78;
  *(char *)(local_30 + 0xb) = local_60;
  if (local_60 != '\0') {
    UE::UnifiedError::FError::FError((FError *)(local_30 + 9),&local_70);
  }
  if (ppcVar4 != (code **)0x0) {
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`ExecuteOnGameThread<`UE::IoStore::FOnDemandContentInstaller::CompletePurgeRequest'::__l34::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
                  ::Call;
  }
  FTSTicker::AddTicker(this,&local_b8,param_1,0.0,(TUniqueFunction<bool___cdecl(float)> *)local_58);
  if (local_b8.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_b8.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_b8.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_b8.WeakReferenceCount.ReferenceController,1);
    }
  }
  if (local_58[0] != (code *)0x0) {
    ppcVar4 = local_58 + 2;
    if (local_30 != (code **)0x0) {
      ppcVar4 = local_30;
    }
    (**(code **)(*ppcVar4 + 0x10))();
  }
  TVar3.Reference = local_70.ErrorDetails.Reference;
  if (local_60 != '\0') {
    local_70.ErrorCode = 0;
    local_70.ModuleId = 0;
    if (local_70.ErrorDetails.Reference != (IErrorDetails *)0x0) {
      local_70.ErrorDetails.Reference = (IErrorDetails *)0x0;
      (**(code **)((longlong)*TVar3.Reference + 0x10))();
      if (local_70.ErrorDetails.Reference != (IErrorDetails *)0x0) {
        (**(code **)((longlong)*local_70.ErrorDetails.Reference + 0x10))();
      }
    }
  }
  if (local_a8 != (code *)0x0) {
    ppcVar4 = &local_98;
    if (local_80 != (code **)0x0) {
      ppcVar4 = local_80;
    }
    (**(code **)(*ppcVar4 + 0x10))();
  }
  return;
}

// FindBy<TArray<`UE::IoStore::FOnDemandInstallCache::Defrag'::__l2::FDefragBlockReferencedChunk,TSizedDefaultAllocator<32>_>_&,FIoHash,FIoHash_`UE::IoStore::FOnDemandInstallCache::Defrag'::__l2::FDefragBlockReferencedChunk::*> @ 14459ae60

FDefragBlockReferencedChunk * __cdecl
AlgoImpl::
FindBy<TArray<_UE::IoStore::FOnDemandInstallCache::Defrag_::__l2::FDefragBlockReferencedChunk,TSizedDefaultAllocator<32>_>_&,FIoHash,FIoHash__UE::IoStore::FOnDemandInstallCache::Defrag_::__l2::FDefragBlockReferencedChunk::*>
          (TArray<_private:_class_TValueOrError<void,UE::UnifiedError::FError>___cdecl_UE::IoStore::FOnDemandInstallCache::Defrag(TArray<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,TSizedDefaultAllocator<32>_>_const_&,TArray<TBitArray<FDefaultBitArrayAllocator>,TSizedDefaultAllocator<32>_>_const_&,TMap<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>_&,unsigned___int64_const_*,unsigned___int64_*)_::_2_::FDefragBlockReferencedChunk,TSizedDefaultAllocator<32>_>
           *param_1,FIoHash *param_2,pdm_0cdd76fd param_3)

{
  FDefragBlockReferencedChunk *pFVar1;
  int iVar2;
  FDefragBlockReferencedChunk *pFVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  
  iVar2 = param_1->ArrayNum;
  pFVar3 = (FDefragBlockReferencedChunk *)(param_1->AllocatorInstance).Data;
  lVar4 = (longlong)(int)param_3;
  pFVar1 = pFVar3 + iVar2;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<`UE::IoStore::FOnDemandInstallCache::Defrag'::__l2::FDefragBlockReferencedChunk,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (((*(longlong *)((pFVar3->Hash).Hash + lVar4) == *(longlong *)param_2->Hash) &&
        (*(longlong *)((pFVar3->Hash).Hash + lVar4 + 8) == *(longlong *)(param_2->Hash + 8))) &&
       (*(int *)((pFVar3->Hash).Hash + lVar4 + 0x10) == *(int *)(param_2->Hash + 0x10))) {
      return pFVar3;
    }
    pFVar3 = pFVar3 + 1;
  }
  return (FDefragBlockReferencedChunk *)0x0;
}

// FindByPredicate<TArray<UE::IoStore::FIASHostGroup,TSizedDefaultAllocator<32>_>_&,`UE::IoStore::FHostGroupManager::Find'::__l2::<lambda_1>_> @ 14459af70

FIASHostGroup * __cdecl
AlgoImpl::
FindByPredicate<TArray<UE::IoStore::FIASHostGroup,TSizedDefaultAllocator<32>_>_&,_UE::IoStore::FHostGroupManager::Find_::__l2::<lambda_1>_>
          (TArray<UE::IoStore::FIASHostGroup,TSizedDefaultAllocator<32>_> *param_1,
          <lambda_1> param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FIASHostGroup *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  iVar1 = param_1->ArrayNum;
  pFVar6 = (param_1->AllocatorInstance).Data;
  pFVar5 = pFVar6 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::IoStore::FIASHostGroup,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar6 == pFVar5) break;
    if ((((TSharedPtr<UE::IoStore::FIASHostGroup::FImpl,1> *)&pFVar6->field_0x0)->Object ==
         (FImpl *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FIASHostGroup *)(*pcVar2)();
      return pFVar4;
    }
    if (((TSharedPtr<UE::IoStore::FIASHostGroup::FImpl,1> *)&pFVar6->field_0x0)->Object->Name ==
        param_2.Name) {
      return (FIASHostGroup *)pFVar6;
    }
    pFVar6 = pFVar6 + 0x10;
  }
  return (FIASHostGroup *)0x0;
}

// GetTypeHash<UE::IoStore::FOnDemandContainer_const_,1> @ 14459b4e0

/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

uint __cdecl
GetTypeHash<UE::IoStore::FOnDemandContainer_const_,1>
          (TSharedPtr<UE::IoStore::FOnDemandContainer_const_,1> *param_1)

{
  uint uVar1;
  
  uVar1 = ((uint)((ulonglong)param_1->Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->Object >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  return uVar1 >> 0x10 ^ uVar1;
}

// HeapSortInternal<`UE::IoStore::FOnDemandInstallCache::Defrag'::__l2::FDefragBlockReferencedChunk_const_,int,UE::Core::Private::TProjectionMemberData<unsigned_int_`UE::IoStore::FOnDemandInstallCache::Defrag'::__l2::FDefragBlockReferencedChunk::*>,TLess<void>_> @ 14459ba90

void __cdecl
AlgoImpl::
HeapSortInternal<_UE::IoStore::FOnDemandInstallCache::Defrag_::__l2::FDefragBlockReferencedChunk_const_,int,UE::Core::Private::TProjectionMemberData<unsigned_int__UE::IoStore::FOnDemandInstallCache::Defrag_::__l2::FDefragBlockReferencedChunk::*>,TLess<void>_>
          (FDefragBlockReferencedChunk *param_1,int param_2,
          TProjectionMemberData<unsigned_int__private:_class_TValueOrError<void,UE::UnifiedError::FError>___cdecl_UE::IoStore::FOnDemandInstallCache::Defrag(TArray<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,TSizedDefaultAllocator<32>_>_const_&,TArray<TBitArray<FDefaultBitArrayAllocator>,TSizedDefaultAllocator<32>_>_const_&,TMap<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>_&,unsigned___int64_const_*,unsigned___int64_*)_::_2_::FDefragBlockReferencedChunk::*>
          param_3,TLess<void> param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  FDefragBlockReferencedChunk *pFVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  
  if (param_2 < 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar10) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar10) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar11 = (param_2 + -2) / 2;
  iVar12 = iVar11 * 2 + 1;
  iVar15 = iVar12;
  iVar13 = iVar11;
  do {
    while (param_2 <= iVar12) {
LAB_14459bbf0:
      if (iVar13 == 0) {
        iVar12 = param_2 + -1;
        lVar17 = (longlong)iVar12;
        if (0 < iVar12) {
          pFVar14 = param_1 + lVar17;
          do {
            uVar2 = *(undefined8 *)((pFVar14->Hash).Hash + 8);
            uVar8 = param_1->BlockOffset;
            uVar9 = param_1->DiskSize;
            uVar3 = *(undefined8 *)(param_1->Hash).Hash;
            uVar4 = *(undefined8 *)((param_1->Hash).Hash + 8);
            uVar5 = *(undefined8 *)((param_1->Hash).Hash + 0x10);
            uVar6 = *(undefined8 *)((param_1->ChunkId).Id + 4);
            *(undefined8 *)(param_1->Hash).Hash = *(undefined8 *)(pFVar14->Hash).Hash;
            *(undefined8 *)((param_1->Hash).Hash + 8) = uVar2;
            uVar2 = *(undefined8 *)((pFVar14->ChunkId).Id + 4);
            *(undefined8 *)((param_1->Hash).Hash + 0x10) =
                 *(undefined8 *)((pFVar14->Hash).Hash + 0x10);
            *(undefined8 *)((param_1->ChunkId).Id + 4) = uVar2;
            uVar7 = pFVar14->DiskSize;
            param_1->BlockOffset = pFVar14->BlockOffset;
            param_1->DiskSize = uVar7;
            *(undefined8 *)(pFVar14->Hash).Hash = uVar3;
            *(undefined8 *)((pFVar14->Hash).Hash + 8) = uVar4;
            *(undefined8 *)((pFVar14->Hash).Hash + 0x10) = uVar5;
            *(undefined8 *)((pFVar14->ChunkId).Id + 4) = uVar6;
            pFVar14->BlockOffset = uVar8;
            pFVar14->DiskSize = uVar9;
            iVar15 = 0;
            if (1 < iVar12) {
              do {
                iVar13 = iVar15 * 2;
                iVar11 = iVar13 + 1;
                if (iVar13 + 2 < iVar12) {
                  if (*(uint *)(param_1[(longlong)iVar13 + 2].Hash.Hash + (int)param_3.DataMemberPtr
                               ) < *(uint *)(param_1[iVar11].Hash.Hash + (int)param_3.DataMemberPtr)
                     ) {
                    iVar11 = iVar13;
                  }
                  iVar11 = iVar11 + 1;
                }
                if (*(uint *)(param_1[iVar11].Hash.Hash + (int)param_3.DataMemberPtr) <=
                    *(uint *)(param_1[iVar15].Hash.Hash + (int)param_3.DataMemberPtr)) break;
                uVar2 = *(undefined8 *)(param_1[iVar11].Hash.Hash + 8);
                uVar3 = *(undefined8 *)param_1[iVar15].Hash.Hash;
                uVar4 = *(undefined8 *)(param_1[iVar15].Hash.Hash + 8);
                uVar5 = *(undefined8 *)(param_1[iVar15].Hash.Hash + 0x10);
                uVar6 = *(undefined8 *)(((FIoChunkId *)(&param_1[iVar15].Hash + 1))->Id + 4);
                uVar8 = param_1[iVar15].BlockOffset;
                uVar9 = param_1[iVar15].DiskSize;
                *(undefined8 *)param_1[iVar15].Hash.Hash = *(undefined8 *)param_1[iVar11].Hash.Hash;
                *(undefined8 *)(param_1[iVar15].Hash.Hash + 8) = uVar2;
                uVar2 = *(undefined8 *)(((FIoChunkId *)(&param_1[iVar11].Hash + 1))->Id + 4);
                *(undefined8 *)(param_1[iVar15].Hash.Hash + 0x10) =
                     *(undefined8 *)(param_1[iVar11].Hash.Hash + 0x10);
                *(undefined8 *)(((FIoChunkId *)(&param_1[iVar15].Hash + 1))->Id + 4) = uVar2;
                uVar7 = param_1[iVar11].DiskSize;
                param_1[iVar15].BlockOffset = param_1[iVar11].BlockOffset;
                param_1[iVar15].DiskSize = uVar7;
                *(undefined8 *)param_1[iVar11].Hash.Hash = uVar3;
                *(undefined8 *)(param_1[iVar11].Hash.Hash + 8) = uVar4;
                *(undefined8 *)(param_1[iVar11].Hash.Hash + 0x10) = uVar5;
                *(undefined8 *)(((FIoChunkId *)(&param_1[iVar11].Hash + 1))->Id + 4) = uVar6;
                param_1[iVar11].BlockOffset = uVar8;
                param_1[iVar11].DiskSize = uVar9;
                iVar15 = iVar11;
              } while (iVar11 * 2 + 1 < iVar12);
            }
            iVar12 = iVar12 + -1;
            lVar17 = lVar17 + -1;
            pFVar14 = pFVar14 + -1;
          } while (0 < lVar17);
        }
        return;
      }
      iVar11 = iVar13 + -1;
      iVar12 = iVar15 + -2;
      iVar15 = iVar12;
      iVar13 = iVar11;
    }
    iVar12 = iVar11 * 2;
    iVar16 = iVar12 + 1;
    if (iVar12 + 2 < param_2) {
      if (*(uint *)(param_1[(longlong)iVar12 + 2].Hash.Hash + (int)param_3.DataMemberPtr) <
          *(uint *)(param_1[iVar16].Hash.Hash + (int)param_3.DataMemberPtr)) {
        iVar16 = iVar12;
      }
      iVar16 = iVar16 + 1;
    }
    if (*(uint *)(param_1[iVar16].Hash.Hash + (int)param_3.DataMemberPtr) <=
        *(uint *)(param_1[iVar11].Hash.Hash + (int)param_3.DataMemberPtr)) goto LAB_14459bbf0;
    uVar2 = *(undefined8 *)(param_1[iVar16].Hash.Hash + 8);
    iVar12 = iVar16 * 2 + 1;
    uVar8 = param_1[iVar11].BlockOffset;
    uVar9 = param_1[iVar11].DiskSize;
    uVar3 = *(undefined8 *)param_1[iVar11].Hash.Hash;
    uVar4 = *(undefined8 *)(param_1[iVar11].Hash.Hash + 8);
    uVar5 = *(undefined8 *)(param_1[iVar11].Hash.Hash + 0x10);
    uVar6 = *(undefined8 *)(((FIoChunkId *)(&param_1[iVar11].Hash + 1))->Id + 4);
    *(undefined8 *)param_1[iVar11].Hash.Hash = *(undefined8 *)param_1[iVar16].Hash.Hash;
    *(undefined8 *)(param_1[iVar11].Hash.Hash + 8) = uVar2;
    uVar2 = *(undefined8 *)(((FIoChunkId *)(&param_1[iVar16].Hash + 1))->Id + 4);
    *(undefined8 *)(param_1[iVar11].Hash.Hash + 0x10) =
         *(undefined8 *)(param_1[iVar16].Hash.Hash + 0x10);
    *(undefined8 *)(((FIoChunkId *)(&param_1[iVar11].Hash + 1))->Id + 4) = uVar2;
    uVar7 = param_1[iVar16].DiskSize;
    param_1[iVar11].BlockOffset = param_1[iVar16].BlockOffset;
    param_1[iVar11].DiskSize = uVar7;
    *(undefined8 *)param_1[iVar16].Hash.Hash = uVar3;
    *(undefined8 *)(param_1[iVar16].Hash.Hash + 8) = uVar4;
    *(undefined8 *)(param_1[iVar16].Hash.Hash + 0x10) = uVar5;
    *(undefined8 *)(((FIoChunkId *)(&param_1[iVar16].Hash + 1))->Id + 4) = uVar6;
    param_1[iVar16].BlockOffset = uVar8;
    param_1[iVar16].DiskSize = uVar9;
    iVar11 = iVar16;
  } while( true );
}

// HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>::FValueComparisonClass<`UE::IoStore::FOnDemandInstallCache::PurgeInternal'::__l2::<lambda_1>_>_>_>_> @ 14459bd50

void __cdecl
AlgoImpl::
HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>::FValueComparisonClass<_UE::IoStore::FOnDemandInstallCache::PurgeInternal_::__l2::<lambda_1>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>::FValueComparisonClass<_private:_class_TValueOrError<void,UE::UnifiedError::FError>___cdecl_UE::IoStore::FOnDemandInstallCache::PurgeInternal(TMap<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>_&,unsigned___int64,unsigned___int64_&)_::_2_::<lambda_1>_>_>_>
          param_4)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_s_1 TVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar17;
  int iVar18;
  
  if (param_2 < 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar11 = (param_2 + -2) / 2;
  iVar12 = iVar11 * 2 + 1;
  iVar18 = iVar12;
  iVar13 = iVar11;
  do {
    while (param_2 <= iVar12) {
LAB_14459be78:
      if (iVar13 == 0) {
        iVar12 = param_2 + -1;
        lVar14 = (longlong)iVar12;
        if (0 < iVar12) {
          pTVar17 = param_1 + lVar14;
          do {
            uVar5 = *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 8);
            uVar3 = *(undefined8 *)((param_1->ElementData).Pad + 0x20);
            TVar6 = param_1->_s_1;
            uVar7 = *(undefined8 *)((param_1->ElementData).Pad + 8);
            uVar8 = *(undefined8 *)((param_1->ElementData).Pad + 0x10);
            uVar9 = *(undefined8 *)((param_1->ElementData).Pad + 0x18);
            param_1->_s_1 = pTVar17->_s_1;
            *(undefined8 *)((param_1->ElementData).Pad + 8) = uVar5;
            uVar5 = *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x18);
            *(undefined8 *)((param_1->ElementData).Pad + 0x10) =
                 *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x10);
            *(undefined8 *)((param_1->ElementData).Pad + 0x18) = uVar5;
            *(undefined8 *)((param_1->ElementData).Pad + 0x20) =
                 *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x20);
            pTVar17->_s_1 = TVar6;
            *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 8) = uVar7;
            *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x10) = uVar8;
            *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x18) = uVar9;
            *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x20) = uVar3;
            iVar18 = 0;
            if (1 < iVar12) {
              do {
                iVar11 = iVar18 * 2;
                iVar13 = iVar11 + 1;
                if (iVar11 + 2 < iVar12) {
                  if (*(longlong *)((longlong)param_1 + (longlong)iVar11 * 0x28 + 0x60) <
                      *(longlong *)((longlong)param_1 + (longlong)iVar13 * 0x28 + 0x10)) {
                    iVar13 = iVar11;
                  }
                  iVar13 = iVar13 + 1;
                }
                lVar15 = (longlong)iVar18;
                pTVar1 = param_1 + iVar13;
                if (*(longlong *)((pTVar1->ElementData).Pad + 0x10) <=
                    *(longlong *)((longlong)param_1 + lVar15 * 0x28 + 0x10)) break;
                uVar5 = *(undefined8 *)((pTVar1->ElementData).Pad + 8);
                uVar3 = *(undefined8 *)((longlong)param_1 + lVar15 * 0x28 + 0x20);
                TVar6 = param_1[lVar15]._s_1;
                uVar7 = *(undefined8 *)((longlong)param_1[lVar15].ElementData.Pad + 8);
                puVar2 = (undefined8 *)((longlong)param_1 + lVar15 * 0x28 + 0x10);
                uVar8 = *puVar2;
                uVar9 = puVar2[1];
                param_1[lVar15]._s_1 = pTVar1->_s_1;
                *(undefined8 *)((longlong)param_1[lVar15].ElementData.Pad + 8) = uVar5;
                uVar5 = *(undefined8 *)((pTVar1->ElementData).Pad + 0x18);
                puVar2 = (undefined8 *)((longlong)param_1 + lVar15 * 0x28 + 0x10);
                *puVar2 = *(undefined8 *)((pTVar1->ElementData).Pad + 0x10);
                puVar2[1] = uVar5;
                *(undefined8 *)((longlong)param_1 + lVar15 * 0x28 + 0x20) =
                     *(undefined8 *)((pTVar1->ElementData).Pad + 0x20);
                pTVar1->_s_1 = TVar6;
                *(undefined8 *)((pTVar1->ElementData).Pad + 8) = uVar7;
                *(undefined8 *)((pTVar1->ElementData).Pad + 0x10) = uVar8;
                *(undefined8 *)((pTVar1->ElementData).Pad + 0x18) = uVar9;
                *(undefined8 *)((pTVar1->ElementData).Pad + 0x20) = uVar3;
                iVar18 = iVar13;
              } while (iVar13 * 2 + 1 < iVar12);
            }
            iVar12 = iVar12 + -1;
            lVar14 = lVar14 + -1;
            pTVar17 = pTVar17 + -1;
          } while (0 < lVar14);
        }
        return;
      }
      iVar11 = iVar13 + -1;
      iVar12 = iVar18 + -2;
      iVar18 = iVar12;
      iVar13 = iVar11;
    }
    iVar12 = iVar11 * 2;
    iVar16 = iVar12 + 1;
    if (iVar12 + 2 < param_2) {
      if (*(longlong *)((longlong)param_1 + (longlong)iVar12 * 0x28 + 0x60) <
          *(longlong *)((longlong)param_1 + (longlong)iVar16 * 0x28 + 0x10)) {
        iVar16 = iVar12;
      }
      iVar16 = iVar16 + 1;
    }
    lVar14 = (longlong)iVar11;
    pTVar17 = param_1 + iVar16;
    if (*(longlong *)((pTVar17->ElementData).Pad + 0x10) <=
        *(longlong *)((longlong)param_1 + lVar14 * 0x28 + 0x10)) goto LAB_14459be78;
    uVar5 = *(undefined8 *)((pTVar17->ElementData).Pad + 8);
    iVar12 = iVar16 * 2 + 1;
    uVar3 = *(undefined8 *)((longlong)param_1 + lVar14 * 0x28 + 0x20);
    TVar6 = param_1[lVar14]._s_1;
    uVar7 = *(undefined8 *)((longlong)param_1[lVar14].ElementData.Pad + 8);
    puVar2 = (undefined8 *)((longlong)param_1 + lVar14 * 0x28 + 0x10);
    uVar8 = *puVar2;
    uVar9 = puVar2[1];
    param_1[lVar14]._s_1 = pTVar17->_s_1;
    *(undefined8 *)((longlong)param_1[lVar14].ElementData.Pad + 8) = uVar5;
    uVar5 = *(undefined8 *)((pTVar17->ElementData).Pad + 0x18);
    puVar2 = (undefined8 *)((longlong)param_1 + lVar14 * 0x28 + 0x10);
    *puVar2 = *(undefined8 *)((pTVar17->ElementData).Pad + 0x10);
    puVar2[1] = uVar5;
    *(undefined8 *)((longlong)param_1 + lVar14 * 0x28 + 0x20) =
         *(undefined8 *)((pTVar17->ElementData).Pad + 0x20);
    pTVar17->_s_1 = TVar6;
    *(undefined8 *)((pTVar17->ElementData).Pad + 8) = uVar7;
    *(undefined8 *)((pTVar17->ElementData).Pad + 0x10) = uVar8;
    *(undefined8 *)((pTVar17->ElementData).Pad + 0x18) = uVar9;
    *(undefined8 *)((pTVar17->ElementData).Pad + 0x20) = uVar3;
    iVar11 = iVar16;
  } while( true );
}

// HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>::FValueComparisonClass<`UE::IoStore::FOnDemandInstallCache::Defrag'::__l2::<lambda_3>_>_>_>_> @ 14459bfb0

void __cdecl
AlgoImpl::
HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>::FValueComparisonClass<_UE::IoStore::FOnDemandInstallCache::Defrag_::__l2::<lambda_3>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>::FValueComparisonClass<_private:_class_TValueOrError<void,UE::UnifiedError::FError>___cdecl_UE::IoStore::FOnDemandInstallCache::Defrag(TArray<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,TSizedDefaultAllocator<32>_>_const_&,TArray<TBitArray<FDefaultBitArrayAllocator>,TSizedDefaultAllocator<32>_>_const_&,TMap<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>_&,unsigned___int64_const_*,unsigned___int64_*)_::_2_::<lambda_3>_>_>_>
          param_4)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_s_1 TVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar17;
  int iVar18;
  
  if (param_2 < 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar11 = (param_2 + -2) / 2;
  iVar12 = iVar11 * 2 + 1;
  iVar18 = iVar12;
  iVar13 = iVar11;
  do {
    while (param_2 <= iVar12) {
LAB_14459c0d8:
      if (iVar13 == 0) {
        iVar12 = param_2 + -1;
        lVar14 = (longlong)iVar12;
        if (0 < iVar12) {
          pTVar17 = param_1 + lVar14;
          do {
            uVar5 = *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 8);
            uVar3 = *(undefined8 *)((param_1->ElementData).Pad + 0x20);
            TVar6 = param_1->_s_1;
            uVar7 = *(undefined8 *)((param_1->ElementData).Pad + 8);
            uVar8 = *(undefined8 *)((param_1->ElementData).Pad + 0x10);
            uVar9 = *(undefined8 *)((param_1->ElementData).Pad + 0x18);
            param_1->_s_1 = pTVar17->_s_1;
            *(undefined8 *)((param_1->ElementData).Pad + 8) = uVar5;
            uVar5 = *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x18);
            *(undefined8 *)((param_1->ElementData).Pad + 0x10) =
                 *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x10);
            *(undefined8 *)((param_1->ElementData).Pad + 0x18) = uVar5;
            *(undefined8 *)((param_1->ElementData).Pad + 0x20) =
                 *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x20);
            pTVar17->_s_1 = TVar6;
            *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 8) = uVar7;
            *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x10) = uVar8;
            *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x18) = uVar9;
            *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x20) = uVar3;
            iVar18 = 0;
            if (1 < iVar12) {
              do {
                iVar11 = iVar18 * 2;
                iVar13 = iVar11 + 1;
                if (iVar11 + 2 < iVar12) {
                  if (*(ulonglong *)((longlong)param_1 + (longlong)iVar11 * 0x28 + 0x68) <
                      *(ulonglong *)((longlong)param_1 + (longlong)iVar13 * 0x28 + 0x18)) {
                    iVar13 = iVar11;
                  }
                  iVar13 = iVar13 + 1;
                }
                lVar15 = (longlong)iVar18;
                pTVar1 = param_1 + iVar13;
                if (*(ulonglong *)((pTVar1->ElementData).Pad + 0x18) <=
                    *(ulonglong *)((longlong)param_1 + lVar15 * 0x28 + 0x18)) break;
                uVar5 = *(undefined8 *)((pTVar1->ElementData).Pad + 8);
                uVar3 = *(undefined8 *)((longlong)param_1 + lVar15 * 0x28 + 0x20);
                TVar6 = param_1[lVar15]._s_1;
                uVar7 = *(undefined8 *)((longlong)param_1[lVar15].ElementData.Pad + 8);
                puVar2 = (undefined8 *)((longlong)param_1 + lVar15 * 0x28 + 0x10);
                uVar8 = *puVar2;
                uVar9 = puVar2[1];
                param_1[lVar15]._s_1 = pTVar1->_s_1;
                *(undefined8 *)((longlong)param_1[lVar15].ElementData.Pad + 8) = uVar5;
                uVar5 = *(undefined8 *)((pTVar1->ElementData).Pad + 0x18);
                puVar2 = (undefined8 *)((longlong)param_1 + lVar15 * 0x28 + 0x10);
                *puVar2 = *(undefined8 *)((pTVar1->ElementData).Pad + 0x10);
                puVar2[1] = uVar5;
                *(undefined8 *)((longlong)param_1 + lVar15 * 0x28 + 0x20) =
                     *(undefined8 *)((pTVar1->ElementData).Pad + 0x20);
                pTVar1->_s_1 = TVar6;
                *(undefined8 *)((pTVar1->ElementData).Pad + 8) = uVar7;
                *(undefined8 *)((pTVar1->ElementData).Pad + 0x10) = uVar8;
                *(undefined8 *)((pTVar1->ElementData).Pad + 0x18) = uVar9;
                *(undefined8 *)((pTVar1->ElementData).Pad + 0x20) = uVar3;
                iVar18 = iVar13;
              } while (iVar13 * 2 + 1 < iVar12);
            }
            iVar12 = iVar12 + -1;
            lVar14 = lVar14 + -1;
            pTVar17 = pTVar17 + -1;
          } while (0 < lVar14);
        }
        return;
      }
      iVar11 = iVar13 + -1;
      iVar12 = iVar18 + -2;
      iVar18 = iVar12;
      iVar13 = iVar11;
    }
    iVar12 = iVar11 * 2;
    iVar16 = iVar12 + 1;
    if (iVar12 + 2 < param_2) {
      if (*(ulonglong *)((longlong)param_1 + (longlong)iVar12 * 0x28 + 0x68) <
          *(ulonglong *)((longlong)param_1 + (longlong)iVar16 * 0x28 + 0x18)) {
        iVar16 = iVar12;
      }
      iVar16 = iVar16 + 1;
    }
    lVar14 = (longlong)iVar11;
    pTVar17 = param_1 + iVar16;
    if (*(ulonglong *)((pTVar17->ElementData).Pad + 0x18) <=
        *(ulonglong *)((longlong)param_1 + lVar14 * 0x28 + 0x18)) goto LAB_14459c0d8;
    uVar5 = *(undefined8 *)((pTVar17->ElementData).Pad + 8);
    iVar12 = iVar16 * 2 + 1;
    uVar3 = *(undefined8 *)((longlong)param_1 + lVar14 * 0x28 + 0x20);
    TVar6 = param_1[lVar14]._s_1;
    uVar7 = *(undefined8 *)((longlong)param_1[lVar14].ElementData.Pad + 8);
    puVar2 = (undefined8 *)((longlong)param_1 + lVar14 * 0x28 + 0x10);
    uVar8 = *puVar2;
    uVar9 = puVar2[1];
    param_1[lVar14]._s_1 = pTVar17->_s_1;
    *(undefined8 *)((longlong)param_1[lVar14].ElementData.Pad + 8) = uVar5;
    uVar5 = *(undefined8 *)((pTVar17->ElementData).Pad + 0x18);
    puVar2 = (undefined8 *)((longlong)param_1 + lVar14 * 0x28 + 0x10);
    *puVar2 = *(undefined8 *)((pTVar17->ElementData).Pad + 0x10);
    puVar2[1] = uVar5;
    *(undefined8 *)((longlong)param_1 + lVar14 * 0x28 + 0x20) =
         *(undefined8 *)((pTVar17->ElementData).Pad + 0x20);
    pTVar17->_s_1 = TVar6;
    *(undefined8 *)((pTVar17->ElementData).Pad + 8) = uVar7;
    *(undefined8 *)((pTVar17->ElementData).Pad + 0x10) = uVar8;
    *(undefined8 *)((pTVar17->ElementData).Pad + 0x18) = uVar9;
    *(undefined8 *)((pTVar17->ElementData).Pad + 0x20) = uVar3;
    iVar11 = iVar16;
  } while( true );
}

// HeapSortInternal<`UE::IoStore::FOnDemandInstallCache::Verify'::__l2::FCasAddrLocation,int,FIdentityFunctor,TDereferenceWrapper<`UE::IoStore::FOnDemandInstallCache::Verify'::__l2::FCasAddrLocation,TLess<void>_>_> @ 14459c210

void __cdecl
AlgoImpl::
HeapSortInternal<_UE::IoStore::FOnDemandInstallCache::Verify_::__l2::FCasAddrLocation,int,FIdentityFunctor,TDereferenceWrapper<_UE::IoStore::FOnDemandInstallCache::Verify_::__l2::FCasAddrLocation,TLess<void>_>_>
          (FCasAddrLocation *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<_public:_virtual_class_TValueOrError<void,UE::UnifiedError::FError>___cdecl_UE::IoStore::FOnDemandInstallCache::Verify(void)_::_2_::FCasAddrLocation,TLess<void>_>
          param_4)

{
  longlong lVar1;
  longlong lVar2;
  FCasAddrLocation *pFVar3;
  FCasAddrLocation *pFVar4;
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  FCasAddrLocation *pFVar15;
  int iVar16;
  longlong lVar17;
  TLess<void> *local_res20;
  
  local_res20 = param_4.Predicate;
  if (param_2 < 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  HeapifyInternal<_UE::IoStore::FOnDemandInstallCache::Verify_::__l2::FCasAddrLocation,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<_UE::IoStore::FOnDemandInstallCache::Verify_::__l2::FCasAddrLocation,TLess<void>_>_>_>
            (param_1,param_2,param_3,
             (TDereferenceWrapper<_public:_virtual_class_TValueOrError<void,UE::UnifiedError::FError>___cdecl_UE::IoStore::FOnDemandInstallCache::Verify(void)_::_2_::FCasAddrLocation,TLess<void>_>
              *)&local_res20);
  iVar16 = param_2 + -1;
  lVar17 = (longlong)iVar16;
  if (0 < iVar16) {
    pFVar15 = param_1 + lVar17;
    do {
      uVar9 = *(undefined8 *)((pFVar15->Addr).Hash + 8);
      uVar5 = (param_1->Location).BlockOffset;
      iVar14 = 0;
      uVar10 = *(undefined8 *)(param_1->Addr).Hash;
      uVar11 = *(undefined8 *)((param_1->Addr).Hash + 8);
      *(undefined8 *)(param_1->Addr).Hash = *(undefined8 *)(pFVar15->Addr).Hash;
      *(undefined8 *)((param_1->Addr).Hash + 8) = uVar9;
      (param_1->Location).BlockOffset = (pFVar15->Location).BlockOffset;
      *(undefined8 *)(pFVar15->Addr).Hash = uVar10;
      *(undefined8 *)((pFVar15->Addr).Hash + 8) = uVar11;
      (pFVar15->Location).BlockOffset = uVar5;
      if (1 < iVar16) {
        do {
          iVar8 = iVar14 * 2;
          iVar13 = iVar8 + 1;
          if (iVar8 + 2 < iVar16) {
            lVar1 = (longlong)iVar8 + 2;
            uVar5 = param_1[lVar1].Location.BlockId.Id;
            lVar2 = (longlong)iVar8 + 1;
            uVar6 = param_1[lVar2].Location.BlockId.Id;
            bVar12 = uVar5 < uVar6;
            if (uVar5 == uVar6) {
              bVar12 = param_1[lVar1].Location.BlockOffset < param_1[lVar2].Location.BlockOffset;
            }
            if (bVar12) {
              iVar13 = iVar8;
            }
            iVar13 = iVar13 + 1;
          }
          pFVar3 = param_1 + iVar14;
          uVar5 = param_1[iVar13].Location.BlockId.Id;
          pFVar4 = param_1 + iVar13;
          uVar6 = (pFVar3->Location).BlockId.Id;
          bVar12 = uVar6 < uVar5;
          if (uVar6 == uVar5) {
            bVar12 = (pFVar3->Location).BlockOffset < (pFVar4->Location).BlockOffset;
          }
          if (!bVar12) break;
          uVar9 = *(undefined8 *)((pFVar4->Addr).Hash + 8);
          uVar5 = (pFVar3->Location).BlockOffset;
          uVar10 = *(undefined8 *)(pFVar3->Addr).Hash;
          uVar11 = *(undefined8 *)((pFVar3->Addr).Hash + 8);
          *(undefined8 *)(pFVar3->Addr).Hash = *(undefined8 *)(pFVar4->Addr).Hash;
          *(undefined8 *)((pFVar3->Addr).Hash + 8) = uVar9;
          (pFVar3->Location).BlockOffset = (pFVar4->Location).BlockOffset;
          *(undefined8 *)(pFVar4->Addr).Hash = uVar10;
          *(undefined8 *)((pFVar4->Addr).Hash + 8) = uVar11;
          (pFVar4->Location).BlockOffset = uVar5;
          iVar14 = iVar13;
        } while (iVar13 * 2 + 1 < iVar16);
      }
      iVar16 = iVar16 + -1;
      lVar17 = lVar17 + -1;
      pFVar15 = pFVar15 + -1;
    } while (0 < lVar17);
  }
  return;
}

// HeapSortInternal<UE::IoStore::JournaledCache::FMemCache::FItem,int,FIdentityFunctor,`UE::IoStore::JournaledCache::FMemCache::Peel'::__l2::<lambda_1>_> @ 14459c3a0

void __cdecl
AlgoImpl::
HeapSortInternal<UE::IoStore::JournaledCache::FMemCache::FItem,int,FIdentityFunctor,_UE::IoStore::JournaledCache::FMemCache::Peel_::__l2::<lambda_1>_>
          (FItem *param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  BufCore *pBVar5;
  ulong64 uVar6;
  BufCore *pBVar7;
  bool bVar8;
  int iVar9;
  FItem *pFVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  <lambda_1> local_res20 [8];
  
  local_res20[0] = param_4;
  if (param_2 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  HeapifyInternal<UE::IoStore::JournaledCache::FMemCache::FItem,int,FIdentityFunctor,TReversePredicate<_UE::IoStore::JournaledCache::FMemCache::Peel_::__l2::<lambda_1>_>_>
            (param_1,param_2,param_3,local_res20);
  iVar13 = param_2 + -1;
  lVar11 = (longlong)iVar13;
  if (0 < iVar13) {
    pFVar10 = param_1 + lVar11;
    do {
      pBVar5 = (pFVar10->Data).CorePtr.Reference;
      uVar6 = param_1->Key;
      pBVar7 = (param_1->Data).CorePtr.Reference;
      param_1->Key = pFVar10->Key;
      (param_1->Data).CorePtr.Reference = pBVar5;
      pFVar10->Key = uVar6;
      (pFVar10->Data).CorePtr.Reference = pBVar7;
      iVar12 = 0;
      if (1 < iVar13) {
        do {
          iVar4 = iVar12 * 2;
          iVar9 = iVar4 + 1;
          if (iVar4 + 2 < iVar13) {
            uVar1 = (param_1[(longlong)iVar4 + 2].Data.CorePtr.Reference)->DataSizeLow;
            uVar2 = (param_1[iVar9].Data.CorePtr.Reference)->DataSizeLow;
            if ((uVar1 == 0) || (uVar2 == 0)) {
              bVar8 = uVar2 < uVar1;
            }
            else {
              bVar8 = uVar1 < uVar2;
            }
            if (bVar8) {
              iVar9 = iVar4;
            }
            iVar9 = iVar9 + 1;
          }
          uVar1 = (param_1[iVar12].Data.CorePtr.Reference)->DataSizeLow;
          uVar2 = (param_1[iVar9].Data.CorePtr.Reference)->DataSizeLow;
          if ((uVar1 == 0) || (uVar2 == 0)) {
            bVar8 = uVar2 < uVar1;
          }
          else {
            bVar8 = uVar1 < uVar2;
          }
          if (!bVar8) break;
          uVar6 = param_1[iVar12].Key;
          pBVar5 = param_1[iVar12].Data.CorePtr.Reference;
          pBVar7 = param_1[iVar9].Data.CorePtr.Reference;
          param_1[iVar12].Key = param_1[iVar9].Key;
          param_1[iVar12].Data.CorePtr.Reference = pBVar7;
          param_1[iVar9].Key = uVar6;
          param_1[iVar9].Data.CorePtr.Reference = pBVar5;
          iVar12 = iVar9;
        } while (iVar9 * 2 + 1 < iVar13);
      }
      iVar13 = iVar13 + -1;
      lVar11 = lVar11 + -1;
      pFVar10 = pFVar10 + -1;
    } while (0 < lVar11);
  }
  return;
}

// HeapSortInternal<UE::IoStore::FOnDemandTocEntry,int,FIdentityFunctor,TDereferenceWrapper<UE::IoStore::FOnDemandTocEntry,`UE::IoStore::FOnDemandIoStore::CreateContainersFromToc'::__l24::<lambda_1>_>_> @ 14459c520

void __cdecl
AlgoImpl::
HeapSortInternal<UE::IoStore::FOnDemandTocEntry,int,FIdentityFunctor,TDereferenceWrapper<UE::IoStore::FOnDemandTocEntry,_UE::IoStore::FOnDemandIoStore::CreateContainersFromToc_::__l24::<lambda_1>_>_>
          (FOnDemandTocEntry *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<UE::IoStore::FOnDemandTocEntry,_private:_static_void___cdecl_UE::IoStore::FOnDemandIoStore::CreateContainersFromToc(TStringView<wchar_t>,TStringView<wchar_t>,UE::IoStore::FOnDemandToc_&,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,TArray<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,TSizedDefaultAllocator<32>_>_&)_::_24_::<lambda_1>_>
          param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong64 uVar7;
  ulong64 uVar8;
  ulong64 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  FOnDemandTocEntry *pFVar19;
  FOnDemandTocEntry *pFVar20;
  int iVar21;
  longlong lVar22;
  FOnDemandTocEntry *pFVar23;
  
  if (param_2 < 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar13) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar13) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar14 = (param_2 + -2) / 2;
  iVar16 = iVar14 * 2 + 1;
  iVar17 = iVar16;
  iVar21 = iVar14;
  do {
    while (param_2 <= iVar16) {
LAB_14459c68e:
      if (iVar21 == 0) {
        iVar16 = param_2 + -1;
        lVar22 = (longlong)iVar16;
        if (0 < iVar16) {
          pFVar23 = param_1 + lVar22;
          do {
            uVar2 = *(undefined8 *)((pFVar23->Hash).Hash + 8);
            iVar17 = 0;
            uVar11 = param_1->BlockOffset;
            uVar12 = param_1->BlockCount;
            uVar3 = *(undefined8 *)(param_1->Hash).Hash;
            uVar4 = *(undefined8 *)((param_1->Hash).Hash + 8);
            uVar5 = *(undefined8 *)((param_1->Hash).Hash + 0x10);
            uVar6 = *(undefined8 *)((param_1->ChunkId).Id + 4);
            uVar7 = param_1->RawSize;
            uVar8 = param_1->EncodedSize;
            *(undefined8 *)(param_1->Hash).Hash = *(undefined8 *)(pFVar23->Hash).Hash;
            *(undefined8 *)((param_1->Hash).Hash + 8) = uVar2;
            uVar2 = *(undefined8 *)((pFVar23->ChunkId).Id + 4);
            *(undefined8 *)((param_1->Hash).Hash + 0x10) =
                 *(undefined8 *)((pFVar23->Hash).Hash + 0x10);
            *(undefined8 *)((param_1->ChunkId).Id + 4) = uVar2;
            uVar9 = pFVar23->EncodedSize;
            param_1->RawSize = pFVar23->RawSize;
            param_1->EncodedSize = uVar9;
            uVar10 = pFVar23->BlockCount;
            param_1->BlockOffset = pFVar23->BlockOffset;
            param_1->BlockCount = uVar10;
            *(undefined8 *)(pFVar23->Hash).Hash = uVar3;
            *(undefined8 *)((pFVar23->Hash).Hash + 8) = uVar4;
            *(undefined8 *)((pFVar23->Hash).Hash + 0x10) = uVar5;
            *(undefined8 *)((pFVar23->ChunkId).Id + 4) = uVar6;
            pFVar23->RawSize = uVar7;
            pFVar23->EncodedSize = uVar8;
            pFVar23->BlockOffset = uVar11;
            pFVar23->BlockCount = uVar12;
            if (1 < iVar16) {
              do {
                iVar21 = iVar17 * 2;
                iVar14 = iVar21 + 1;
                if (iVar21 + 2 < iVar16) {
                  iVar18 = memcmp(&param_1[iVar21 + 2].ChunkId,&param_1[iVar14].ChunkId,0xc);
                  if (iVar18 < 0) {
                    iVar14 = iVar21;
                  }
                  iVar14 = iVar14 + 1;
                }
                pFVar20 = param_1 + iVar14;
                pFVar19 = param_1 + iVar17;
                iVar17 = memcmp(&pFVar19->ChunkId,&pFVar20->ChunkId,0xc);
                if (-1 < iVar17) break;
                uVar2 = *(undefined8 *)((pFVar20->Hash).Hash + 8);
                uVar11 = pFVar19->BlockOffset;
                uVar12 = pFVar19->BlockCount;
                uVar3 = *(undefined8 *)(pFVar19->Hash).Hash;
                uVar4 = *(undefined8 *)((pFVar19->Hash).Hash + 8);
                uVar5 = *(undefined8 *)((pFVar19->Hash).Hash + 0x10);
                uVar6 = *(undefined8 *)((pFVar19->ChunkId).Id + 4);
                uVar7 = pFVar19->RawSize;
                uVar8 = pFVar19->EncodedSize;
                *(undefined8 *)(pFVar19->Hash).Hash = *(undefined8 *)(pFVar20->Hash).Hash;
                *(undefined8 *)((pFVar19->Hash).Hash + 8) = uVar2;
                uVar2 = *(undefined8 *)((pFVar20->ChunkId).Id + 4);
                *(undefined8 *)((pFVar19->Hash).Hash + 0x10) =
                     *(undefined8 *)((pFVar20->Hash).Hash + 0x10);
                *(undefined8 *)((pFVar19->ChunkId).Id + 4) = uVar2;
                uVar9 = pFVar20->EncodedSize;
                pFVar19->RawSize = pFVar20->RawSize;
                pFVar19->EncodedSize = uVar9;
                uVar10 = pFVar20->BlockCount;
                pFVar19->BlockOffset = pFVar20->BlockOffset;
                pFVar19->BlockCount = uVar10;
                *(undefined8 *)(pFVar20->Hash).Hash = uVar3;
                *(undefined8 *)((pFVar20->Hash).Hash + 8) = uVar4;
                *(undefined8 *)((pFVar20->Hash).Hash + 0x10) = uVar5;
                *(undefined8 *)((pFVar20->ChunkId).Id + 4) = uVar6;
                pFVar20->RawSize = uVar7;
                pFVar20->EncodedSize = uVar8;
                pFVar20->BlockOffset = uVar11;
                pFVar20->BlockCount = uVar12;
                iVar17 = iVar14;
              } while (iVar14 * 2 + 1 < iVar16);
            }
            iVar16 = iVar16 + -1;
            lVar22 = lVar22 + -1;
            pFVar23 = pFVar23 + -1;
          } while (0 < lVar22);
        }
        return;
      }
      iVar14 = iVar21 + -1;
      iVar16 = iVar17 + -2;
      iVar17 = iVar16;
      iVar21 = iVar14;
    }
    iVar16 = iVar14 * 2;
    iVar18 = iVar16 + 1;
    if (iVar16 + 2 < param_2) {
      iVar15 = memcmp(&param_1[iVar16 + 2].ChunkId,&param_1[iVar18].ChunkId,0xc);
      if (iVar15 < 0) {
        iVar18 = iVar16;
      }
      iVar18 = iVar18 + 1;
    }
    pFVar19 = param_1 + iVar18;
    pFVar23 = param_1 + iVar14;
    iVar16 = memcmp(&pFVar23->ChunkId,&pFVar19->ChunkId,0xc);
    if (-1 < iVar16) goto LAB_14459c68e;
    uVar2 = *(undefined8 *)((pFVar19->Hash).Hash + 8);
    iVar16 = iVar18 * 2 + 1;
    uVar11 = pFVar23->BlockOffset;
    uVar12 = pFVar23->BlockCount;
    uVar3 = *(undefined8 *)(pFVar23->Hash).Hash;
    uVar4 = *(undefined8 *)((pFVar23->Hash).Hash + 8);
    uVar5 = *(undefined8 *)((pFVar23->Hash).Hash + 0x10);
    uVar6 = *(undefined8 *)((pFVar23->ChunkId).Id + 4);
    uVar7 = pFVar23->RawSize;
    uVar8 = pFVar23->EncodedSize;
    *(undefined8 *)(pFVar23->Hash).Hash = *(undefined8 *)(pFVar19->Hash).Hash;
    *(undefined8 *)((pFVar23->Hash).Hash + 8) = uVar2;
    uVar2 = *(undefined8 *)((pFVar19->ChunkId).Id + 4);
    *(undefined8 *)((pFVar23->Hash).Hash + 0x10) = *(undefined8 *)((pFVar19->Hash).Hash + 0x10);
    *(undefined8 *)((pFVar23->ChunkId).Id + 4) = uVar2;
    uVar9 = pFVar19->EncodedSize;
    pFVar23->RawSize = pFVar19->RawSize;
    pFVar23->EncodedSize = uVar9;
    uVar10 = pFVar19->BlockCount;
    pFVar23->BlockOffset = pFVar19->BlockOffset;
    pFVar23->BlockCount = uVar10;
    *(undefined8 *)(pFVar19->Hash).Hash = uVar3;
    *(undefined8 *)((pFVar19->Hash).Hash + 8) = uVar4;
    *(undefined8 *)((pFVar19->Hash).Hash + 0x10) = uVar5;
    *(undefined8 *)((pFVar19->ChunkId).Id + 4) = uVar6;
    pFVar19->RawSize = uVar7;
    pFVar19->EncodedSize = uVar8;
    pFVar19->BlockOffset = uVar11;
    pFVar19->BlockCount = uVar12;
    iVar14 = iVar18;
  } while( true );
}

// HeapSortInternal<`UE::IoStore::JournaledCache::LoadCache'::__l2::FParagraph,int,FIdentityFunctor,`UE::IoStore::JournaledCache::LoadCache'::__l2::<lambda_4>_> @ 14459c820

void __cdecl
AlgoImpl::
HeapSortInternal<_UE::IoStore::JournaledCache::LoadCache_::__l2::FParagraph,int,FIdentityFunctor,_UE::IoStore::JournaledCache::LoadCache_::__l2::<lambda_4>_>
          (FParagraph *param_1,int param_2,FIdentityFunctor param_3,<lambda_4> param_4)

{
  FParagraph *pFVar1;
  FParagraph *pFVar2;
  code *pcVar3;
  FPhraseDesc *pFVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  FParagraph *pFVar14;
  int iVar15;
  int iVar16;
  
  if (param_2 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar10 = (param_2 + -2) / 2;
  iVar11 = iVar10 * 2 + 1;
  iVar12 = iVar10;
  iVar16 = iVar11;
  do {
    while (param_2 <= iVar11) {
LAB_14459c946:
      if (iVar12 == 0) {
        iVar11 = param_2 + -1;
        lVar13 = (longlong)iVar11;
        if (0 < iVar11) {
          pFVar14 = param_1 + lVar13;
          do {
            uVar5 = pFVar14->EntryCount;
            uVar6 = pFVar14->DataSize;
            pFVar4 = param_1->Phrase;
            uVar7 = param_1->EntryCount;
            uVar8 = param_1->DataSize;
            param_1->Phrase = pFVar14->Phrase;
            param_1->EntryCount = uVar5;
            param_1->DataSize = uVar6;
            pFVar14->Phrase = pFVar4;
            pFVar14->EntryCount = uVar7;
            pFVar14->DataSize = uVar8;
            iVar16 = 0;
            if (1 < iVar11) {
              do {
                iVar10 = iVar16 * 2;
                iVar12 = iVar10 + 1;
                if (iVar10 + 2 < iVar11) {
                  if ((param_1[(longlong)iVar10 + 2].Phrase)->Marker <
                      (param_1[iVar12].Phrase)->Marker) {
                    iVar12 = iVar10;
                  }
                  iVar12 = iVar12 + 1;
                }
                if ((param_1[iVar12].Phrase)->Marker <= (param_1[iVar16].Phrase)->Marker) break;
                pFVar1 = param_1 + iVar16;
                pFVar4 = pFVar1->Phrase;
                uVar7 = pFVar1->EntryCount;
                uVar8 = pFVar1->DataSize;
                pFVar1 = param_1 + iVar12;
                uVar5 = pFVar1->EntryCount;
                uVar6 = pFVar1->DataSize;
                pFVar2 = param_1 + iVar16;
                pFVar2->Phrase = pFVar1->Phrase;
                pFVar2->EntryCount = uVar5;
                pFVar2->DataSize = uVar6;
                pFVar1 = param_1 + iVar12;
                pFVar1->Phrase = pFVar4;
                pFVar1->EntryCount = uVar7;
                pFVar1->DataSize = uVar8;
                iVar16 = iVar12;
              } while (iVar12 * 2 + 1 < iVar11);
            }
            iVar11 = iVar11 + -1;
            lVar13 = lVar13 + -1;
            pFVar14 = pFVar14 + -1;
          } while (0 < lVar13);
        }
        return;
      }
      iVar10 = iVar12 + -1;
      iVar11 = iVar16 + -2;
      iVar12 = iVar10;
      iVar16 = iVar11;
    }
    iVar11 = iVar10 * 2;
    iVar15 = iVar11 + 1;
    if (iVar11 + 2 < param_2) {
      if ((param_1[(longlong)iVar11 + 2].Phrase)->Marker < (param_1[iVar15].Phrase)->Marker) {
        iVar15 = iVar11;
      }
      iVar15 = iVar15 + 1;
    }
    if ((param_1[iVar15].Phrase)->Marker <= (param_1[iVar10].Phrase)->Marker) goto LAB_14459c946;
    pFVar14 = param_1 + iVar10;
    pFVar4 = pFVar14->Phrase;
    uVar7 = pFVar14->EntryCount;
    uVar8 = pFVar14->DataSize;
    iVar11 = iVar15 * 2 + 1;
    pFVar14 = param_1 + iVar15;
    uVar5 = pFVar14->EntryCount;
    uVar6 = pFVar14->DataSize;
    pFVar1 = param_1 + iVar10;
    pFVar1->Phrase = pFVar14->Phrase;
    pFVar1->EntryCount = uVar5;
    pFVar1->DataSize = uVar6;
    pFVar14 = param_1 + iVar15;
    pFVar14->Phrase = pFVar4;
    pFVar14->EntryCount = uVar7;
    pFVar14->DataSize = uVar8;
    iVar10 = iVar15;
  } while( true );
}

// HeapifyInternal<UE::IoStore::HttpIoDispatcher::FHttpRequest_*,int,FIdentityFunctor,TDereferenceWrapper<UE::IoStore::HttpIoDispatcher::FHttpRequest_*,bool___cdecl(UE::IoStore::HttpIoDispatcher::FHttpRequest_const_&,UE::IoStore::HttpIoDispatcher::FHttpRequest_const_&)>_> @ 14459ca60

/* WARNING: Enum "EIoHttpFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
AlgoImpl::
HeapifyInternal<UE::IoStore::HttpIoDispatcher::FHttpRequest_*,int,FIdentityFunctor,TDereferenceWrapper<UE::IoStore::HttpIoDispatcher::FHttpRequest_*,bool___cdecl(UE::IoStore::HttpIoDispatcher::FHttpRequest_const_&,UE::IoStore::HttpIoDispatcher::FHttpRequest_const_&)>_>
          (FHttpRequest **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<UE::IoStore::HttpIoDispatcher::FHttpRequest_*,bool___cdecl(UE::IoStore::HttpIoDispatcher::FHttpRequest_const_&,UE::IoStore::HttpIoDispatcher::FHttpRequest_const_&)>
          param_4)

{
  FHttpRequest *pFVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if (param_2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar5 = (param_2 + -2) / 2;
  iVar7 = iVar5 * 2 + 1;
  iVar3 = iVar7;
  iVar8 = iVar5;
  do {
    while (param_2 <= iVar7) {
LAB_14459cb3c:
      if (iVar8 == 0) {
        return;
      }
      iVar5 = iVar8 + -1;
      iVar7 = iVar3 + -2;
      iVar3 = iVar7;
      iVar8 = iVar5;
    }
    iVar7 = iVar5 * 2;
    iVar6 = iVar7 + 1;
    if (iVar7 + 2 < param_2) {
      bVar4 = (*param_4.Predicate)(param_1[iVar6],param_1[(longlong)iVar7 + 2]);
      if (bVar4) {
        iVar6 = iVar7;
      }
      iVar6 = iVar6 + 1;
    }
    bVar4 = (*param_4.Predicate)(param_1[iVar6],param_1[iVar5]);
    if (!bVar4) goto LAB_14459cb3c;
    pFVar1 = param_1[iVar5];
    param_1[iVar5] = param_1[iVar6];
    param_1[iVar6] = pFVar1;
    iVar7 = iVar6 * 2 + 1;
    iVar5 = iVar6;
  } while( true );
}

// HeapifyInternal<UE::IoStore::FOnDemandContentInstaller::FRequest_*,int,FIdentityFunctor,TDereferenceWrapper<UE::IoStore::FOnDemandContentInstaller::FRequest_*,bool___cdecl(UE::IoStore::FOnDemandContentInstaller::FRequest_const_&,UE::IoStore::FOnDemandContentInstaller::FRequest_const_&)>_> @ 14459cb80

void __cdecl
AlgoImpl::
HeapifyInternal<UE::IoStore::FOnDemandContentInstaller::FRequest_*,int,FIdentityFunctor,TDereferenceWrapper<UE::IoStore::FOnDemandContentInstaller::FRequest_*,bool___cdecl(UE::IoStore::FOnDemandContentInstaller::FRequest_const_&,UE::IoStore::FOnDemandContentInstaller::FRequest_const_&)>_>
          (FRequest **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<UE::IoStore::FOnDemandContentInstaller::FRequest_*,bool___cdecl(UE::IoStore::FOnDemandContentInstaller::FRequest_const_&,UE::IoStore::FOnDemandContentInstaller::FRequest_const_&)>
          param_4)

{
  FRequest *pFVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if (param_2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar5 = (param_2 + -2) / 2;
  iVar7 = iVar5 * 2 + 1;
  iVar3 = iVar7;
  iVar8 = iVar5;
  do {
    while (param_2 <= iVar7) {
LAB_14459cc5c:
      if (iVar8 == 0) {
        return;
      }
      iVar5 = iVar8 + -1;
      iVar7 = iVar3 + -2;
      iVar3 = iVar7;
      iVar8 = iVar5;
    }
    iVar7 = iVar5 * 2;
    iVar6 = iVar7 + 1;
    if (iVar7 + 2 < param_2) {
      bVar4 = (*param_4.Predicate)(param_1[iVar6],param_1[(longlong)iVar7 + 2]);
      if (bVar4) {
        iVar6 = iVar7;
      }
      iVar6 = iVar6 + 1;
    }
    bVar4 = (*param_4.Predicate)(param_1[iVar6],param_1[iVar5]);
    if (!bVar4) goto LAB_14459cc5c;
    pFVar1 = param_1[iVar5];
    param_1[iVar5] = param_1[iVar6];
    param_1[iVar6] = pFVar1;
    iVar7 = iVar6 * 2 + 1;
    iVar5 = iVar6;
  } while( true );
}

// HeapifyInternal<`UE::IoStore::FOnDemandInstallCache::Verify'::__l2::FCasAddrLocation,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<`UE::IoStore::FOnDemandInstallCache::Verify'::__l2::FCasAddrLocation,TLess<void>_>_>_> @ 14459cca0

void __cdecl
AlgoImpl::
HeapifyInternal<_UE::IoStore::FOnDemandInstallCache::Verify_::__l2::FCasAddrLocation,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<_UE::IoStore::FOnDemandInstallCache::Verify_::__l2::FCasAddrLocation,TLess<void>_>_>_>
          (FCasAddrLocation *param_1,int param_2,FIdentityFunctor param_3,
          TReversePredicate<TDereferenceWrapper<_public:_virtual_class_TValueOrError<void,UE::UnifiedError::FError>___cdecl_UE::IoStore::FOnDemandInstallCache::Verify(void)_::_2_::FCasAddrLocation,TLess<void>_>_>
          param_4)

{
  longlong lVar1;
  longlong lVar2;
  FCasAddrLocation *pFVar3;
  FCasAddrLocation *pFVar4;
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  
  if (param_2 < 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar13 = (param_2 + -2) / 2;
  iVar15 = iVar13 * 2 + 1;
  iVar8 = iVar15;
  iVar16 = iVar13;
  do {
    while (param_2 <= iVar15) {
LAB_14459cdbe:
      if (iVar16 == 0) {
        return;
      }
      iVar13 = iVar16 + -1;
      iVar15 = iVar8 + -2;
      iVar8 = iVar15;
      iVar16 = iVar13;
    }
    iVar15 = iVar13 * 2;
    iVar14 = iVar15 + 1;
    if (iVar15 + 2 < param_2) {
      lVar1 = (longlong)iVar15 + 2;
      uVar5 = param_1[lVar1].Location.BlockId.Id;
      lVar2 = (longlong)iVar15 + 1;
      uVar6 = param_1[lVar2].Location.BlockId.Id;
      bVar12 = uVar5 < uVar6;
      if (uVar5 == uVar6) {
        bVar12 = param_1[lVar1].Location.BlockOffset < param_1[lVar2].Location.BlockOffset;
      }
      if (bVar12) {
        iVar14 = iVar15;
      }
      iVar14 = iVar14 + 1;
    }
    pFVar3 = param_1 + iVar13;
    uVar5 = param_1[iVar14].Location.BlockId.Id;
    pFVar4 = param_1 + iVar14;
    uVar6 = (pFVar3->Location).BlockId.Id;
    bVar12 = uVar6 < uVar5;
    if (uVar6 == uVar5) {
      bVar12 = (pFVar3->Location).BlockOffset < (pFVar4->Location).BlockOffset;
    }
    if (!bVar12) goto LAB_14459cdbe;
    uVar9 = *(undefined8 *)((pFVar4->Addr).Hash + 8);
    uVar5 = (pFVar3->Location).BlockOffset;
    uVar10 = *(undefined8 *)(pFVar3->Addr).Hash;
    uVar11 = *(undefined8 *)((pFVar3->Addr).Hash + 8);
    iVar15 = iVar14 * 2 + 1;
    *(undefined8 *)(pFVar3->Addr).Hash = *(undefined8 *)(pFVar4->Addr).Hash;
    *(undefined8 *)((pFVar3->Addr).Hash + 8) = uVar9;
    (pFVar3->Location).BlockOffset = (pFVar4->Location).BlockOffset;
    *(undefined8 *)(pFVar4->Addr).Hash = uVar10;
    *(undefined8 *)((pFVar4->Addr).Hash + 8) = uVar11;
    (pFVar4->Location).BlockOffset = uVar5;
    iVar13 = iVar14;
  } while( true );
}

// HeapifyInternal<UE::IoStore::JournaledCache::FMemCache::FItem,int,FIdentityFunctor,TReversePredicate<`UE::IoStore::JournaledCache::FMemCache::Peel'::__l2::<lambda_1>_>_> @ 14459cdf0

void __cdecl
AlgoImpl::
HeapifyInternal<UE::IoStore::JournaledCache::FMemCache::FItem,int,FIdentityFunctor,TReversePredicate<_UE::IoStore::JournaledCache::FMemCache::Peel_::__l2::<lambda_1>_>_>
          (FItem *param_1,int param_2,FIdentityFunctor param_3,
          TReversePredicate<_public:_int___cdecl_UE::IoStore::JournaledCache::FMemCache::Peel(int,TArray<UE::IoStore::JournaledCache::FMemCache::FItem,TSizedDefaultAllocator<32>_>_&)_::_2_::<lambda_1>_>
          param_4)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  ulong64 uVar5;
  BufCore *pBVar6;
  BufCore *pBVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  if (param_2 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar9 = (param_2 + -2) / 2;
  iVar11 = iVar9 * 2 + 1;
  iVar4 = iVar11;
  iVar12 = iVar9;
  do {
    while (param_2 <= iVar11) {
LAB_14459cf0d:
      if (iVar12 == 0) {
        return;
      }
      iVar9 = iVar12 + -1;
      iVar11 = iVar4 + -2;
      iVar4 = iVar11;
      iVar12 = iVar9;
    }
    iVar11 = iVar9 * 2;
    iVar10 = iVar11 + 1;
    if (iVar11 + 2 < param_2) {
      uVar1 = (param_1[(longlong)iVar11 + 2].Data.CorePtr.Reference)->DataSizeLow;
      uVar2 = (param_1[iVar10].Data.CorePtr.Reference)->DataSizeLow;
      if ((uVar1 == 0) || (uVar2 == 0)) {
        bVar8 = uVar2 < uVar1;
      }
      else {
        bVar8 = uVar1 < uVar2;
      }
      if (bVar8) {
        iVar10 = iVar11;
      }
      iVar10 = iVar10 + 1;
    }
    uVar1 = (param_1[iVar9].Data.CorePtr.Reference)->DataSizeLow;
    uVar2 = (param_1[iVar10].Data.CorePtr.Reference)->DataSizeLow;
    if ((uVar1 == 0) || (uVar2 == 0)) {
      bVar8 = uVar2 < uVar1;
    }
    else {
      bVar8 = uVar1 < uVar2;
    }
    if (!bVar8) goto LAB_14459cf0d;
    uVar5 = param_1[iVar9].Key;
    pBVar6 = param_1[iVar9].Data.CorePtr.Reference;
    pBVar7 = param_1[iVar10].Data.CorePtr.Reference;
    param_1[iVar9].Key = param_1[iVar10].Key;
    param_1[iVar9].Data.CorePtr.Reference = pBVar7;
    iVar11 = iVar10 * 2 + 1;
    param_1[iVar10].Key = uVar5;
    param_1[iVar10].Data.CorePtr.Reference = pBVar6;
    iVar9 = iVar10;
  } while( true );
}

// IntroSortInternal<`UE::IoStore::FOnDemandInstallCache::Defrag'::__l2::FDefragBlockReferencedChunk_const_,int,UE::Core::Private::TProjectionMemberData<unsigned_int_`UE::IoStore::FOnDemandInstallCache::Defrag'::__l2::FDefragBlockReferencedChunk::*>,TLess<void>_> @ 14459cf40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<_UE::IoStore::FOnDemandInstallCache::Defrag_::__l2::FDefragBlockReferencedChunk_const_,int,UE::Core::Private::TProjectionMemberData<unsigned_int__UE::IoStore::FOnDemandInstallCache::Defrag_::__l2::FDefragBlockReferencedChunk::*>,TLess<void>_>
          (FDefragBlockReferencedChunk *param_1,int param_2,
          TProjectionMemberData<unsigned_int__private:_class_TValueOrError<void,UE::UnifiedError::FError>___cdecl_UE::IoStore::FOnDemandInstallCache::Defrag(TArray<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,TSizedDefaultAllocator<32>_>_const_&,TArray<TBitArray<FDefaultBitArrayAllocator>,TSizedDefaultAllocator<32>_>_const_&,TMap<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>_&,unsigned___int64_const_*,unsigned___int64_*)_::_2_::FDefragBlockReferencedChunk::*>
          param_3,TLess<void> param_4)

{
  uchar *puVar1;
  FDefragBlockReferencedChunk *pFVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  FDefragBlockReferencedChunk *pFVar13;
  FDefragBlockReferencedChunk *pFVar14;
  FDefragBlockReferencedChunk *pFVar15;
  FDefragBlockReferencedChunk *pFVar16;
  FDefragBlockReferencedChunk *pFVar17;
  FDefragBlockReferencedChunk *pFVar18;
  FDefragBlockReferencedChunk **ppFVar19;
  float fVar20;
  undefined1 auStack_388 [48];
  FDefragBlockReferencedChunk *local_358;
  FDefragBlockReferencedChunk *local_348;
  FDefragBlockReferencedChunk *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar20 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar20;
    memset(local_330,0,0x2e8);
    ppFVar19 = &local_348;
    do {
      pFVar13 = ppFVar19[1];
      pFVar18 = *ppFVar19;
      pFVar2 = ppFVar19[2];
      local_358._0_4_ = (int)pFVar2;
      iVar12 = (int)(((longlong)pFVar13 - (longlong)pFVar18) / 0x28) + 1;
      pFVar17 = pFVar18;
      if ((int)local_358 != 0) {
LAB_14459d020:
        if (8 < iVar12) {
          uVar3 = *(undefined8 *)((pFVar17->Hash).Hash + 8);
          pFVar15 = pFVar13 + 1;
          iVar12 = iVar12 / 2;
          uVar4 = *(undefined8 *)pFVar17[iVar12].Hash.Hash;
          uVar5 = *(undefined8 *)(pFVar17[iVar12].Hash.Hash + 8);
          puVar1 = pFVar17[iVar12].Hash.Hash + 0x10;
          uVar6 = *(undefined8 *)puVar1;
          uVar7 = *(undefined8 *)(puVar1 + 8);
          uVar10 = pFVar17[iVar12].BlockOffset;
          uVar11 = pFVar17[iVar12].DiskSize;
          *(undefined8 *)pFVar17[iVar12].Hash.Hash = *(undefined8 *)(pFVar17->Hash).Hash;
          *(undefined8 *)(pFVar17[iVar12].Hash.Hash + 8) = uVar3;
          uVar3 = *(undefined8 *)((pFVar17->ChunkId).Id + 4);
          puVar1 = pFVar17[iVar12].Hash.Hash + 0x10;
          *(undefined8 *)puVar1 = *(undefined8 *)((pFVar17->Hash).Hash + 0x10);
          *(undefined8 *)(puVar1 + 8) = uVar3;
          uVar9 = pFVar17->DiskSize;
          pFVar17[iVar12].BlockOffset = pFVar17->BlockOffset;
          pFVar17[iVar12].DiskSize = uVar9;
          *(undefined8 *)(pFVar17->Hash).Hash = uVar4;
          *(undefined8 *)((pFVar17->Hash).Hash + 8) = uVar5;
          *(undefined8 *)((pFVar17->Hash).Hash + 0x10) = uVar6;
          *(undefined8 *)((pFVar17->ChunkId).Id + 4) = uVar7;
          pFVar17->BlockOffset = uVar10;
          pFVar17->DiskSize = uVar11;
          pFVar18 = pFVar17;
LAB_14459d080:
          pFVar14 = pFVar18;
          pFVar18 = pFVar14 + 1;
          if (pFVar18 <= pFVar13) goto code_r0x00014459d089;
          goto LAB_14459d093;
        }
        for (; pFVar18 = pFVar17, pFVar2 = pFVar17, pFVar17 < pFVar13; pFVar13 = pFVar13 + -1) {
          while (pFVar2 = pFVar2 + 1, pFVar2 <= pFVar13) {
            if (*(uint *)((pFVar18->Hash).Hash + (int)param_3.DataMemberPtr) <
                *(uint *)((pFVar2->Hash).Hash + (int)param_3.DataMemberPtr)) {
              pFVar18 = pFVar2;
            }
          }
          uVar3 = *(undefined8 *)(pFVar18->Hash).Hash;
          uVar4 = *(undefined8 *)((pFVar18->Hash).Hash + 8);
          uVar10 = pFVar18->BlockOffset;
          uVar11 = pFVar18->DiskSize;
          uVar5 = *(undefined8 *)((pFVar18->Hash).Hash + 0x10);
          uVar6 = *(undefined8 *)((pFVar18->ChunkId).Id + 4);
          uVar7 = *(undefined8 *)((pFVar13->Hash).Hash + 8);
          *(undefined8 *)(pFVar18->Hash).Hash = *(undefined8 *)(pFVar13->Hash).Hash;
          *(undefined8 *)((pFVar18->Hash).Hash + 8) = uVar7;
          uVar7 = *(undefined8 *)((pFVar13->ChunkId).Id + 4);
          *(undefined8 *)((pFVar18->Hash).Hash + 0x10) =
               *(undefined8 *)((pFVar13->Hash).Hash + 0x10);
          *(undefined8 *)((pFVar18->ChunkId).Id + 4) = uVar7;
          uVar9 = pFVar13->DiskSize;
          pFVar18->BlockOffset = pFVar13->BlockOffset;
          pFVar18->DiskSize = uVar9;
          *(undefined8 *)(pFVar13->Hash).Hash = uVar3;
          *(undefined8 *)((pFVar13->Hash).Hash + 8) = uVar4;
          *(undefined8 *)((pFVar13->Hash).Hash + 0x10) = uVar5;
          *(undefined8 *)((pFVar13->ChunkId).Id + 4) = uVar6;
          pFVar13->BlockOffset = uVar10;
          pFVar13->DiskSize = uVar11;
        }
        goto LAB_14459d1df;
      }
LAB_14459d1d0:
      local_358 = pFVar2;
      HeapSortInternal<_UE::IoStore::FOnDemandInstallCache::Defrag_::__l2::FDefragBlockReferencedChunk_const_,int,UE::Core::Private::TProjectionMemberData<unsigned_int__UE::IoStore::FOnDemandInstallCache::Defrag_::__l2::FDefragBlockReferencedChunk::*>,TLess<void>_>
                (pFVar18,iVar12,param_3,param_4);
LAB_14459d1df:
      ppFVar19 = ppFVar19 + -3;
    } while (&local_348 <= ppFVar19);
  }
  return;
code_r0x00014459d089:
  if (*(uint *)((pFVar18->Hash).Hash + (int)param_3.DataMemberPtr) <=
      *(uint *)((pFVar17->Hash).Hash + (int)param_3.DataMemberPtr)) goto LAB_14459d080;
LAB_14459d093:
  do {
    pFVar16 = pFVar15;
    pFVar15 = pFVar16 + -1;
    if (pFVar15 <= pFVar17) break;
  } while (*(uint *)((pFVar17->Hash).Hash + (int)param_3.DataMemberPtr) <=
           *(uint *)((pFVar15->Hash).Hash + (int)param_3.DataMemberPtr));
  uVar3 = *(undefined8 *)(pFVar15->Hash).Hash;
  uVar4 = *(undefined8 *)(pFVar16[-1].Hash.Hash + 8);
  if (pFVar18 <= pFVar15) {
    uVar5 = *(undefined8 *)(pFVar18->Hash).Hash;
    uVar6 = *(undefined8 *)(pFVar14[1].Hash.Hash + 8);
    uVar7 = *(undefined8 *)(pFVar14[1].Hash.Hash + 0x10);
    uVar8 = *(undefined8 *)(pFVar14[1].ChunkId.Id + 4);
    uVar10 = pFVar14[1].BlockOffset;
    uVar11 = pFVar14[1].DiskSize;
    *(undefined8 *)(pFVar18->Hash).Hash = uVar3;
    *(undefined8 *)(pFVar14[1].Hash.Hash + 8) = uVar4;
    uVar3 = *(undefined8 *)(pFVar16[-1].ChunkId.Id + 4);
    *(undefined8 *)(pFVar14[1].Hash.Hash + 0x10) = *(undefined8 *)(pFVar16[-1].Hash.Hash + 0x10);
    *(undefined8 *)(pFVar14[1].ChunkId.Id + 4) = uVar3;
    uVar9 = pFVar16[-1].DiskSize;
    pFVar14[1].BlockOffset = pFVar16[-1].BlockOffset;
    pFVar14[1].DiskSize = uVar9;
    *(undefined8 *)(pFVar15->Hash).Hash = uVar5;
    *(undefined8 *)(pFVar16[-1].Hash.Hash + 8) = uVar6;
    *(undefined8 *)(pFVar16[-1].Hash.Hash + 0x10) = uVar7;
    *(undefined8 *)(pFVar16[-1].ChunkId.Id + 4) = uVar8;
    pFVar16[-1].BlockOffset = uVar10;
    pFVar16[-1].DiskSize = uVar11;
    goto LAB_14459d080;
  }
  uVar5 = *(undefined8 *)(pFVar17->Hash).Hash;
  uVar6 = *(undefined8 *)((pFVar17->Hash).Hash + 8);
  uVar7 = *(undefined8 *)((pFVar17->Hash).Hash + 0x10);
  uVar8 = *(undefined8 *)((pFVar17->ChunkId).Id + 4);
  local_358._0_4_ = (int)local_358 + -1;
  uVar10 = pFVar17->BlockOffset;
  uVar11 = pFVar17->DiskSize;
  *(undefined8 *)(pFVar17->Hash).Hash = uVar3;
  *(undefined8 *)((pFVar17->Hash).Hash + 8) = uVar4;
  uVar3 = *(undefined8 *)(pFVar16[-1].ChunkId.Id + 4);
  *(undefined8 *)((pFVar17->Hash).Hash + 0x10) = *(undefined8 *)(pFVar16[-1].Hash.Hash + 0x10);
  *(undefined8 *)((pFVar17->ChunkId).Id + 4) = uVar3;
  uVar9 = pFVar16[-1].DiskSize;
  pFVar17->BlockOffset = pFVar16[-1].BlockOffset;
  pFVar17->DiskSize = uVar9;
  *(undefined8 *)(pFVar15->Hash).Hash = uVar5;
  *(undefined8 *)(pFVar16[-1].Hash.Hash + 8) = uVar6;
  *(undefined8 *)(pFVar16[-1].Hash.Hash + 0x10) = uVar7;
  *(undefined8 *)(pFVar16[-1].ChunkId.Id + 4) = uVar8;
  pFVar16[-1].BlockOffset = uVar10;
  pFVar16[-1].DiskSize = uVar11;
  if (((longlong)pFVar15 + (-0x28 - (longlong)pFVar17)) / 0x28 <
      ((longlong)pFVar13 - (longlong)pFVar18) / 0x28) {
    if (pFVar18 < pFVar13) {
      *ppFVar19 = pFVar18;
      ppFVar19[1] = pFVar13;
      *(int *)(ppFVar19 + 2) = (int)local_358;
      ppFVar19 = ppFVar19 + 3;
    }
    if (pFVar15 <= pFVar17 + 1) goto LAB_14459d1df;
    pFVar13 = pFVar16 + -2;
    pFVar18 = pFVar17;
  }
  else {
    if (pFVar17 + 1 < pFVar15) {
      *ppFVar19 = pFVar17;
      ppFVar19[1] = pFVar16 + -2;
      *(int *)(ppFVar19 + 2) = (int)local_358;
      ppFVar19 = ppFVar19 + 3;
    }
    if (pFVar13 <= pFVar18) goto LAB_14459d1df;
  }
  iVar12 = (int)(((longlong)pFVar13 - (longlong)pFVar18) / 0x28) + 1;
  pFVar17 = pFVar18;
  if ((int)local_358 == 0) goto LAB_14459d1d0;
  goto LAB_14459d020;
}

// IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>::FValueComparisonClass<`UE::IoStore::FOnDemandInstallCache::PurgeInternal'::__l2::<lambda_1>_>_>_>_> @ 14459d2b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>::FValueComparisonClass<_UE::IoStore::FOnDemandInstallCache::PurgeInternal_::__l2::<lambda_1>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>::FValueComparisonClass<_private:_class_TValueOrError<void,UE::UnifiedError::FError>___cdecl_UE::IoStore::FOnDemandInstallCache::PurgeInternal(TMap<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>_&,unsigned___int64,unsigned___int64_&)_::_2_::<lambda_1>_>_>_>
          param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_s_1 TVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  int iVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar12;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar13;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar14;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar15;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar16;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar17;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> **ppTVar18;
  float fVar19;
  undefined1 auStack_378 [48];
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *local_348;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *local_338;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar19 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar19;
    memset(local_320,0,0x2e8);
    ppTVar18 = &local_338;
    do {
      pTVar12 = ppTVar18[1];
      pTVar17 = *ppTVar18;
      pTVar3 = ppTVar18[2];
      local_348._0_4_ = (int)pTVar3;
      iVar11 = (int)(((longlong)pTVar12 - (longlong)pTVar17) / 0x28) + 1;
      pTVar16 = pTVar17;
      if ((int)local_348 != 0) {
LAB_14459d380:
        if (8 < iVar11) {
          uVar5 = *(undefined8 *)((pTVar16->ElementData).Pad + 8);
          pTVar14 = pTVar12 + 1;
          lVar10 = (longlong)(iVar11 / 2);
          TVar6 = pTVar16[lVar10]._s_1;
          uVar7 = *(undefined8 *)((longlong)pTVar16[lVar10].ElementData.Pad + 8);
          puVar2 = (undefined8 *)((longlong)pTVar16 + lVar10 * 0x28 + 0x10);
          uVar8 = *puVar2;
          uVar9 = puVar2[1];
          uVar4 = *(undefined8 *)((longlong)pTVar16 + lVar10 * 0x28 + 0x20);
          pTVar16[lVar10]._s_1 = pTVar16->_s_1;
          *(undefined8 *)((longlong)pTVar16[lVar10].ElementData.Pad + 8) = uVar5;
          uVar5 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x18);
          puVar2 = (undefined8 *)((longlong)pTVar16 + lVar10 * 0x28 + 0x10);
          *puVar2 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x10);
          puVar2[1] = uVar5;
          *(undefined8 *)((longlong)pTVar16 + lVar10 * 0x28 + 0x20) =
               *(undefined8 *)((pTVar16->ElementData).Pad + 0x20);
          pTVar16->_s_1 = TVar6;
          *(undefined8 *)((pTVar16->ElementData).Pad + 8) = uVar7;
          *(undefined8 *)((pTVar16->ElementData).Pad + 0x10) = uVar8;
          *(undefined8 *)((pTVar16->ElementData).Pad + 0x18) = uVar9;
          *(undefined8 *)((pTVar16->ElementData).Pad + 0x20) = uVar4;
          pTVar17 = pTVar16;
LAB_14459d3e0:
          pTVar13 = pTVar17;
          pTVar17 = pTVar13 + 1;
          if (pTVar17 <= pTVar12) goto code_r0x00014459d3e9;
          goto LAB_14459d3f3;
        }
        for (; pTVar3 = pTVar16, pTVar17 = pTVar16, pTVar16 < pTVar12; pTVar12 = pTVar12 + -1) {
          while (pTVar14 = pTVar17 + 1, pTVar14 <= pTVar12) {
            plVar1 = (longlong *)((longlong)pTVar17 + 0x38);
            pTVar17 = pTVar14;
            if (*(longlong *)((pTVar3->ElementData).Pad + 0x10) < *plVar1) {
              pTVar3 = pTVar14;
            }
          }
          TVar6 = pTVar3->_s_1;
          uVar5 = *(undefined8 *)((pTVar3->ElementData).Pad + 8);
          uVar4 = *(undefined8 *)((pTVar3->ElementData).Pad + 0x20);
          uVar7 = *(undefined8 *)((pTVar3->ElementData).Pad + 0x10);
          uVar8 = *(undefined8 *)((pTVar3->ElementData).Pad + 0x18);
          uVar9 = *(undefined8 *)((pTVar12->ElementData).Pad + 8);
          pTVar3->_s_1 = pTVar12->_s_1;
          *(undefined8 *)((pTVar3->ElementData).Pad + 8) = uVar9;
          uVar9 = *(undefined8 *)((pTVar12->ElementData).Pad + 0x18);
          *(undefined8 *)((pTVar3->ElementData).Pad + 0x10) =
               *(undefined8 *)((pTVar12->ElementData).Pad + 0x10);
          *(undefined8 *)((pTVar3->ElementData).Pad + 0x18) = uVar9;
          *(undefined8 *)((pTVar3->ElementData).Pad + 0x20) =
               *(undefined8 *)((pTVar12->ElementData).Pad + 0x20);
          pTVar12->_s_1 = TVar6;
          *(undefined8 *)((pTVar12->ElementData).Pad + 8) = uVar5;
          *(undefined8 *)((pTVar12->ElementData).Pad + 0x10) = uVar7;
          *(undefined8 *)((pTVar12->ElementData).Pad + 0x18) = uVar8;
          *(undefined8 *)((pTVar12->ElementData).Pad + 0x20) = uVar4;
        }
        goto LAB_14459d53d;
      }
LAB_14459d52e:
      local_348 = pTVar3;
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>::FValueComparisonClass<_UE::IoStore::FOnDemandInstallCache::PurgeInternal_::__l2::<lambda_1>_>_>_>_>
                (pTVar17,iVar11,param_3,param_4);
LAB_14459d53d:
      ppTVar18 = ppTVar18 + -3;
    } while (&local_338 <= ppTVar18);
  }
  return;
code_r0x00014459d3e9:
  if (*(longlong *)((longlong)pTVar13 + 0x38) <= *(longlong *)((pTVar16->ElementData).Pad + 0x10))
  goto LAB_14459d3e0;
LAB_14459d3f3:
  do {
    pTVar15 = pTVar14;
    pTVar14 = pTVar15 + -1;
    if (pTVar14 <= pTVar16) break;
  } while (*(longlong *)((pTVar16->ElementData).Pad + 0x10) <=
           *(longlong *)((longlong)pTVar15 + -0x18));
  uVar4 = *(undefined8 *)((longlong)pTVar15 + -0x20);
  if (pTVar17 <= pTVar14) {
    TVar6 = pTVar17->_s_1;
    uVar7 = *(undefined8 *)((longlong)pTVar13 + 0x30);
    uVar8 = *(undefined8 *)((longlong)pTVar13 + 0x38);
    uVar9 = *(undefined8 *)((longlong)pTVar13 + 0x40);
    uVar5 = *(undefined8 *)((longlong)pTVar13 + 0x48);
    pTVar17->_s_1 = pTVar14->_s_1;
    *(undefined8 *)((longlong)pTVar13 + 0x30) = uVar4;
    uVar4 = *(undefined8 *)((longlong)pTVar15 + -0x10);
    *(undefined8 *)((longlong)pTVar13 + 0x38) = *(undefined8 *)((longlong)pTVar15 + -0x18);
    *(undefined8 *)((longlong)pTVar13 + 0x40) = uVar4;
    *(undefined8 *)((longlong)pTVar13 + 0x48) = *(undefined8 *)((longlong)pTVar15 + -8);
    pTVar14->_s_1 = TVar6;
    *(undefined8 *)((longlong)pTVar15 + -0x20) = uVar7;
    *(undefined8 *)((longlong)pTVar15 + -0x18) = uVar8;
    *(undefined8 *)((longlong)pTVar15 + -0x10) = uVar9;
    *(undefined8 *)((longlong)pTVar15 + -8) = uVar5;
    goto LAB_14459d3e0;
  }
  TVar6 = pTVar16->_s_1;
  uVar7 = *(undefined8 *)((pTVar16->ElementData).Pad + 8);
  uVar8 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x10);
  uVar9 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x18);
  local_348._0_4_ = (int)local_348 + -1;
  uVar5 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x20);
  pTVar16->_s_1 = pTVar14->_s_1;
  *(undefined8 *)((pTVar16->ElementData).Pad + 8) = uVar4;
  uVar4 = *(undefined8 *)((longlong)pTVar15 + -0x10);
  *(undefined8 *)((pTVar16->ElementData).Pad + 0x10) = *(undefined8 *)((longlong)pTVar15 + -0x18);
  *(undefined8 *)((pTVar16->ElementData).Pad + 0x18) = uVar4;
  *(undefined8 *)((pTVar16->ElementData).Pad + 0x20) = *(undefined8 *)((longlong)pTVar15 + -8);
  pTVar14->_s_1 = TVar6;
  *(undefined8 *)((longlong)pTVar15 + -0x20) = uVar7;
  *(undefined8 *)((longlong)pTVar15 + -0x18) = uVar8;
  *(undefined8 *)((longlong)pTVar15 + -0x10) = uVar9;
  *(undefined8 *)((longlong)pTVar15 + -8) = uVar5;
  if (((longlong)pTVar14 + (-0x28 - (longlong)pTVar16)) / 0x28 <
      ((longlong)pTVar12 - (longlong)pTVar17) / 0x28) {
    if (pTVar17 < pTVar12) {
      *ppTVar18 = pTVar17;
      ppTVar18[1] = pTVar12;
      *(int *)(ppTVar18 + 2) = (int)local_348;
      ppTVar18 = ppTVar18 + 3;
    }
    if (pTVar14 <= pTVar16 + 1) goto LAB_14459d53d;
    pTVar12 = pTVar15 + -2;
    pTVar17 = pTVar16;
  }
  else {
    if (pTVar16 + 1 < pTVar14) {
      *ppTVar18 = pTVar16;
      ppTVar18[1] = pTVar15 + -2;
      *(int *)(ppTVar18 + 2) = (int)local_348;
      ppTVar18 = ppTVar18 + 3;
    }
    if (pTVar12 <= pTVar17) goto LAB_14459d53d;
  }
  iVar11 = (int)(((longlong)pTVar12 - (longlong)pTVar17) / 0x28) + 1;
  pTVar16 = pTVar17;
  if ((int)local_348 == 0) goto LAB_14459d52e;
  goto LAB_14459d380;
}

// IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>::FValueComparisonClass<`UE::IoStore::FOnDemandInstallCache::Defrag'::__l2::<lambda_3>_>_>_>_> @ 14459d600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>::FValueComparisonClass<_UE::IoStore::FOnDemandInstallCache::Defrag_::__l2::<lambda_3>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>::FValueComparisonClass<_private:_class_TValueOrError<void,UE::UnifiedError::FError>___cdecl_UE::IoStore::FOnDemandInstallCache::Defrag(TArray<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,TSizedDefaultAllocator<32>_>_const_&,TArray<TBitArray<FDefaultBitArrayAllocator>,TSizedDefaultAllocator<32>_>_const_&,TMap<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>_&,unsigned___int64_const_*,unsigned___int64_*)_::_2_::<lambda_3>_>_>_>
          param_4)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_s_1 TVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  int iVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar12;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar13;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar14;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar15;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar16;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar17;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> **ppTVar18;
  float fVar19;
  undefined1 auStack_378 [48];
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *local_348;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *local_338;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar19 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar19;
    memset(local_320,0,0x2e8);
    ppTVar18 = &local_338;
    do {
      pTVar12 = ppTVar18[1];
      pTVar17 = *ppTVar18;
      pTVar3 = ppTVar18[2];
      local_348._0_4_ = (int)pTVar3;
      iVar11 = (int)(((longlong)pTVar12 - (longlong)pTVar17) / 0x28) + 1;
      pTVar16 = pTVar17;
      if ((int)local_348 != 0) {
LAB_14459d6d0:
        if (8 < iVar11) {
          uVar5 = *(undefined8 *)((pTVar16->ElementData).Pad + 8);
          pTVar14 = pTVar12 + 1;
          lVar10 = (longlong)(iVar11 / 2);
          TVar6 = pTVar16[lVar10]._s_1;
          uVar7 = *(undefined8 *)((longlong)pTVar16[lVar10].ElementData.Pad + 8);
          puVar2 = (undefined8 *)((longlong)pTVar16 + lVar10 * 0x28 + 0x10);
          uVar8 = *puVar2;
          uVar9 = puVar2[1];
          uVar4 = *(undefined8 *)((longlong)pTVar16 + lVar10 * 0x28 + 0x20);
          pTVar16[lVar10]._s_1 = pTVar16->_s_1;
          *(undefined8 *)((longlong)pTVar16[lVar10].ElementData.Pad + 8) = uVar5;
          uVar5 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x18);
          puVar2 = (undefined8 *)((longlong)pTVar16 + lVar10 * 0x28 + 0x10);
          *puVar2 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x10);
          puVar2[1] = uVar5;
          *(undefined8 *)((longlong)pTVar16 + lVar10 * 0x28 + 0x20) =
               *(undefined8 *)((pTVar16->ElementData).Pad + 0x20);
          pTVar16->_s_1 = TVar6;
          *(undefined8 *)((pTVar16->ElementData).Pad + 8) = uVar7;
          *(undefined8 *)((pTVar16->ElementData).Pad + 0x10) = uVar8;
          *(undefined8 *)((pTVar16->ElementData).Pad + 0x18) = uVar9;
          *(undefined8 *)((pTVar16->ElementData).Pad + 0x20) = uVar4;
          pTVar17 = pTVar16;
LAB_14459d730:
          pTVar13 = pTVar17;
          pTVar17 = pTVar13 + 1;
          if (pTVar17 <= pTVar12) goto code_r0x00014459d739;
          goto LAB_14459d743;
        }
        for (; pTVar3 = pTVar16, pTVar17 = pTVar16, pTVar16 < pTVar12; pTVar12 = pTVar12 + -1) {
          while (pTVar14 = pTVar17 + 1, pTVar14 <= pTVar12) {
            puVar1 = (ulonglong *)((longlong)pTVar17 + 0x40);
            pTVar17 = pTVar14;
            if (*(ulonglong *)((pTVar3->ElementData).Pad + 0x18) < *puVar1) {
              pTVar3 = pTVar14;
            }
          }
          TVar6 = pTVar3->_s_1;
          uVar5 = *(undefined8 *)((pTVar3->ElementData).Pad + 8);
          uVar4 = *(undefined8 *)((pTVar3->ElementData).Pad + 0x20);
          uVar7 = *(undefined8 *)((pTVar3->ElementData).Pad + 0x10);
          uVar8 = *(undefined8 *)((pTVar3->ElementData).Pad + 0x18);
          uVar9 = *(undefined8 *)((pTVar12->ElementData).Pad + 8);
          pTVar3->_s_1 = pTVar12->_s_1;
          *(undefined8 *)((pTVar3->ElementData).Pad + 8) = uVar9;
          uVar9 = *(undefined8 *)((pTVar12->ElementData).Pad + 0x18);
          *(undefined8 *)((pTVar3->ElementData).Pad + 0x10) =
               *(undefined8 *)((pTVar12->ElementData).Pad + 0x10);
          *(undefined8 *)((pTVar3->ElementData).Pad + 0x18) = uVar9;
          *(undefined8 *)((pTVar3->ElementData).Pad + 0x20) =
               *(undefined8 *)((pTVar12->ElementData).Pad + 0x20);
          pTVar12->_s_1 = TVar6;
          *(undefined8 *)((pTVar12->ElementData).Pad + 8) = uVar5;
          *(undefined8 *)((pTVar12->ElementData).Pad + 0x10) = uVar7;
          *(undefined8 *)((pTVar12->ElementData).Pad + 0x18) = uVar8;
          *(undefined8 *)((pTVar12->ElementData).Pad + 0x20) = uVar4;
        }
        goto LAB_14459d88d;
      }
LAB_14459d87e:
      local_348 = pTVar3;
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>::FValueComparisonClass<_UE::IoStore::FOnDemandInstallCache::Defrag_::__l2::<lambda_3>_>_>_>_>
                (pTVar17,iVar11,param_3,param_4);
LAB_14459d88d:
      ppTVar18 = ppTVar18 + -3;
    } while (&local_338 <= ppTVar18);
  }
  return;
code_r0x00014459d739:
  if (*(ulonglong *)((longlong)pTVar13 + 0x40) <= *(ulonglong *)((pTVar16->ElementData).Pad + 0x18))
  goto LAB_14459d730;
LAB_14459d743:
  do {
    pTVar15 = pTVar14;
    pTVar14 = pTVar15 + -1;
    if (pTVar14 <= pTVar16) break;
  } while (*(ulonglong *)((pTVar16->ElementData).Pad + 0x18) <=
           *(ulonglong *)((longlong)pTVar15 + -0x10));
  uVar4 = *(undefined8 *)((longlong)pTVar15 + -0x20);
  if (pTVar17 <= pTVar14) {
    TVar6 = pTVar17->_s_1;
    uVar7 = *(undefined8 *)((longlong)pTVar13 + 0x30);
    uVar8 = *(undefined8 *)((longlong)pTVar13 + 0x38);
    uVar9 = *(undefined8 *)((longlong)pTVar13 + 0x40);
    uVar5 = *(undefined8 *)((longlong)pTVar13 + 0x48);
    pTVar17->_s_1 = pTVar14->_s_1;
    *(undefined8 *)((longlong)pTVar13 + 0x30) = uVar4;
    uVar4 = *(undefined8 *)((longlong)pTVar15 + -0x10);
    *(undefined8 *)((longlong)pTVar13 + 0x38) = *(undefined8 *)((longlong)pTVar15 + -0x18);
    *(undefined8 *)((longlong)pTVar13 + 0x40) = uVar4;
    *(undefined8 *)((longlong)pTVar13 + 0x48) = *(undefined8 *)((longlong)pTVar15 + -8);
    pTVar14->_s_1 = TVar6;
    *(undefined8 *)((longlong)pTVar15 + -0x20) = uVar7;
    *(undefined8 *)((longlong)pTVar15 + -0x18) = uVar8;
    *(undefined8 *)((longlong)pTVar15 + -0x10) = uVar9;
    *(undefined8 *)((longlong)pTVar15 + -8) = uVar5;
    goto LAB_14459d730;
  }
  TVar6 = pTVar16->_s_1;
  uVar7 = *(undefined8 *)((pTVar16->ElementData).Pad + 8);
  uVar8 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x10);
  uVar9 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x18);
  local_348._0_4_ = (int)local_348 + -1;
  uVar5 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x20);
  pTVar16->_s_1 = pTVar14->_s_1;
  *(undefined8 *)((pTVar16->ElementData).Pad + 8) = uVar4;
  uVar4 = *(undefined8 *)((longlong)pTVar15 + -0x10);
  *(undefined8 *)((pTVar16->ElementData).Pad + 0x10) = *(undefined8 *)((longlong)pTVar15 + -0x18);
  *(undefined8 *)((pTVar16->ElementData).Pad + 0x18) = uVar4;
  *(undefined8 *)((pTVar16->ElementData).Pad + 0x20) = *(undefined8 *)((longlong)pTVar15 + -8);
  pTVar14->_s_1 = TVar6;
  *(undefined8 *)((longlong)pTVar15 + -0x20) = uVar7;
  *(undefined8 *)((longlong)pTVar15 + -0x18) = uVar8;
  *(undefined8 *)((longlong)pTVar15 + -0x10) = uVar9;
  *(undefined8 *)((longlong)pTVar15 + -8) = uVar5;
  if (((longlong)pTVar14 + (-0x28 - (longlong)pTVar16)) / 0x28 <
      ((longlong)pTVar12 - (longlong)pTVar17) / 0x28) {
    if (pTVar17 < pTVar12) {
      *ppTVar18 = pTVar17;
      ppTVar18[1] = pTVar12;
      *(int *)(ppTVar18 + 2) = (int)local_348;
      ppTVar18 = ppTVar18 + 3;
    }
    if (pTVar14 <= pTVar16 + 1) goto LAB_14459d88d;
    pTVar12 = pTVar15 + -2;
    pTVar17 = pTVar16;
  }
  else {
    if (pTVar16 + 1 < pTVar14) {
      *ppTVar18 = pTVar16;
      ppTVar18[1] = pTVar15 + -2;
      *(int *)(ppTVar18 + 2) = (int)local_348;
      ppTVar18 = ppTVar18 + 3;
    }
    if (pTVar12 <= pTVar17) goto LAB_14459d88d;
  }
  iVar11 = (int)(((longlong)pTVar12 - (longlong)pTVar17) / 0x28) + 1;
  pTVar16 = pTVar17;
  if ((int)local_348 == 0) goto LAB_14459d87e;
  goto LAB_14459d6d0;
}

// IntroSortInternal<`UE::IoStore::FOnDemandInstallCache::Verify'::__l2::FCasAddrLocation,int,FIdentityFunctor,TDereferenceWrapper<`UE::IoStore::FOnDemandInstallCache::Verify'::__l2::FCasAddrLocation,TLess<void>_>_> @ 14459d950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<_UE::IoStore::FOnDemandInstallCache::Verify_::__l2::FCasAddrLocation,int,FIdentityFunctor,TDereferenceWrapper<_UE::IoStore::FOnDemandInstallCache::Verify_::__l2::FCasAddrLocation,TLess<void>_>_>
          (FCasAddrLocation *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<_public:_virtual_class_TValueOrError<void,UE::UnifiedError::FError>___cdecl_UE::IoStore::FOnDemandInstallCache::Verify(void)_::_2_::FCasAddrLocation,TLess<void>_>
          param_4)

{
  FCasAddrLocation *pFVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  FCasAddrLocation *pFVar9;
  FCasAddrLocation *pFVar10;
  FCasAddrLocation *pFVar11;
  FCasAddrLocation *pFVar12;
  FCasAddrLocation *pFVar13;
  FCasAddrLocation *pFVar14;
  FCasAddrLocation **ppFVar15;
  bool bVar16;
  float fVar17;
  undefined1 auStack_378 [48];
  FCasAddrLocation *local_348;
  FCasAddrLocation *local_338;
  FCasAddrLocation *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar17 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar17;
    memset(local_320,0,0x2e8);
    ppFVar15 = &local_338;
    do {
      pFVar9 = ppFVar15[1];
      pFVar12 = *ppFVar15;
      pFVar1 = ppFVar15[2];
      local_348._0_4_ = (int)pFVar1;
      iVar8 = (int)(((longlong)pFVar9 - (longlong)pFVar12) / 0x14) + 1;
      pFVar11 = pFVar12;
      if ((int)local_348 != 0) {
LAB_14459da20:
        if (8 < iVar8) {
          uVar4 = *(undefined8 *)((pFVar11->Addr).Hash + 8);
          pFVar13 = pFVar9 + 1;
          iVar8 = iVar8 / 2;
          uVar5 = *(undefined8 *)pFVar11[iVar8].Addr.Hash;
          uVar6 = *(undefined8 *)(pFVar11[iVar8].Addr.Hash + 8);
          uVar2 = pFVar11[iVar8].Location.BlockOffset;
          *(undefined8 *)pFVar11[iVar8].Addr.Hash = *(undefined8 *)(pFVar11->Addr).Hash;
          *(undefined8 *)(pFVar11[iVar8].Addr.Hash + 8) = uVar4;
          pFVar11[iVar8].Location.BlockOffset = (pFVar11->Location).BlockOffset;
          *(undefined8 *)(pFVar11->Addr).Hash = uVar5;
          *(undefined8 *)((pFVar11->Addr).Hash + 8) = uVar6;
          (pFVar11->Location).BlockOffset = uVar2;
          pFVar12 = pFVar11;
LAB_14459da62:
          pFVar10 = pFVar12;
          pFVar12 = pFVar10 + 1;
          if (pFVar12 <= pFVar9) goto code_r0x00014459da6e;
          goto LAB_14459da90;
        }
        for (; pFVar12 = pFVar11, pFVar1 = pFVar11, pFVar11 < pFVar9; pFVar9 = pFVar9 + -1) {
          while (pFVar13 = pFVar12, pFVar1 = pFVar1 + 1, pFVar1 <= pFVar9) {
            uVar2 = (pFVar1->Location).BlockId.Id;
            uVar3 = (pFVar13->Location).BlockId.Id;
            bVar16 = uVar3 < uVar2;
            if (uVar3 == uVar2) {
              bVar16 = (pFVar13->Location).BlockOffset < (pFVar1->Location).BlockOffset;
            }
            pFVar12 = pFVar1;
            if (!bVar16) {
              pFVar12 = pFVar13;
            }
          }
          uVar4 = *(undefined8 *)(pFVar13->Addr).Hash;
          uVar5 = *(undefined8 *)((pFVar13->Addr).Hash + 8);
          uVar2 = (pFVar13->Location).BlockOffset;
          uVar6 = *(undefined8 *)((pFVar9->Addr).Hash + 8);
          *(undefined8 *)(pFVar13->Addr).Hash = *(undefined8 *)(pFVar9->Addr).Hash;
          *(undefined8 *)((pFVar13->Addr).Hash + 8) = uVar6;
          (pFVar13->Location).BlockOffset = (pFVar9->Location).BlockOffset;
          *(undefined8 *)(pFVar9->Addr).Hash = uVar4;
          *(undefined8 *)((pFVar9->Addr).Hash + 8) = uVar5;
          (pFVar9->Location).BlockOffset = uVar2;
        }
        goto LAB_14459dbb2;
      }
LAB_14459dba3:
      local_348 = pFVar1;
      HeapSortInternal<_UE::IoStore::FOnDemandInstallCache::Verify_::__l2::FCasAddrLocation,int,FIdentityFunctor,TDereferenceWrapper<_UE::IoStore::FOnDemandInstallCache::Verify_::__l2::FCasAddrLocation,TLess<void>_>_>
                (pFVar12,iVar8,param_3,param_4);
LAB_14459dbb2:
      ppFVar15 = ppFVar15 + -3;
    } while (&local_338 <= ppFVar15);
  }
  return;
code_r0x00014459da6e:
  uVar2 = pFVar10[1].Location.BlockId.Id;
  uVar3 = (pFVar11->Location).BlockId.Id;
  bVar16 = uVar3 < uVar2;
  if (uVar3 == uVar2) {
    bVar16 = (pFVar11->Location).BlockOffset < pFVar10[1].Location.BlockOffset;
  }
  if (!bVar16) goto LAB_14459da62;
LAB_14459da90:
  do {
    pFVar14 = pFVar13;
    pFVar13 = pFVar14 + -1;
    if (pFVar13 <= pFVar11) break;
    uVar2 = (pFVar11->Location).BlockId.Id;
    uVar3 = pFVar14[-1].Location.BlockId.Id;
    bVar16 = uVar3 < uVar2;
    if (uVar3 == uVar2) {
      bVar16 = pFVar14[-1].Location.BlockOffset < (pFVar11->Location).BlockOffset;
    }
  } while (!bVar16);
  uVar4 = *(undefined8 *)(pFVar13->Addr).Hash;
  uVar5 = *(undefined8 *)(pFVar14[-1].Addr.Hash + 8);
  if (pFVar12 <= pFVar13) {
    uVar6 = *(undefined8 *)(pFVar12->Addr).Hash;
    uVar7 = *(undefined8 *)(pFVar10[1].Addr.Hash + 8);
    uVar2 = pFVar10[1].Location.BlockOffset;
    *(undefined8 *)(pFVar12->Addr).Hash = uVar4;
    *(undefined8 *)(pFVar10[1].Addr.Hash + 8) = uVar5;
    pFVar10[1].Location.BlockOffset = pFVar14[-1].Location.BlockOffset;
    *(undefined8 *)(pFVar13->Addr).Hash = uVar6;
    *(undefined8 *)(pFVar14[-1].Addr.Hash + 8) = uVar7;
    pFVar14[-1].Location.BlockOffset = uVar2;
    goto LAB_14459da62;
  }
  uVar2 = (pFVar11->Location).BlockOffset;
  local_348._0_4_ = (int)local_348 + -1;
  uVar6 = *(undefined8 *)(pFVar11->Addr).Hash;
  uVar7 = *(undefined8 *)((pFVar11->Addr).Hash + 8);
  *(undefined8 *)(pFVar11->Addr).Hash = uVar4;
  *(undefined8 *)((pFVar11->Addr).Hash + 8) = uVar5;
  (pFVar11->Location).BlockOffset = pFVar14[-1].Location.BlockOffset;
  *(undefined8 *)(pFVar13->Addr).Hash = uVar6;
  *(undefined8 *)(pFVar14[-1].Addr.Hash + 8) = uVar7;
  pFVar14[-1].Location.BlockOffset = uVar2;
  if (((longlong)pFVar13 + (-0x14 - (longlong)pFVar11)) / 0x14 <
      ((longlong)pFVar9 - (longlong)pFVar12) / 0x14) {
    if (pFVar12 < pFVar9) {
      *ppFVar15 = pFVar12;
      ppFVar15[1] = pFVar9;
      *(int *)(ppFVar15 + 2) = (int)local_348;
      ppFVar15 = ppFVar15 + 3;
    }
    if (pFVar13 <= pFVar11 + 1) goto LAB_14459dbb2;
    pFVar9 = pFVar14 + -2;
    pFVar12 = pFVar11;
  }
  else {
    if (pFVar11 + 1 < pFVar13) {
      *ppFVar15 = pFVar11;
      ppFVar15[1] = pFVar14 + -2;
      *(int *)(ppFVar15 + 2) = (int)local_348;
      ppFVar15 = ppFVar15 + 3;
    }
    if (pFVar9 <= pFVar12) goto LAB_14459dbb2;
  }
  iVar8 = (int)(((longlong)pFVar9 - (longlong)pFVar12) / 0x14) + 1;
  pFVar11 = pFVar12;
  if ((int)local_348 == 0) goto LAB_14459dba3;
  goto LAB_14459da20;
}

// IntroSortInternal<UE::IoStore::JournaledCache::FMemCache::FItem,int,FIdentityFunctor,`UE::IoStore::JournaledCache::FMemCache::Peel'::__l2::<lambda_1>_> @ 14459dc80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<UE::IoStore::JournaledCache::FMemCache::FItem,int,FIdentityFunctor,_UE::IoStore::JournaledCache::FMemCache::Peel_::__l2::<lambda_1>_>
          (FItem *param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  FItem *pFVar1;
  uint uVar2;
  uint uVar3;
  BufCore *pBVar4;
  ulong64 uVar5;
  BufCore *pBVar6;
  int iVar7;
  FItem *pFVar8;
  FItem *pFVar9;
  FItem *pFVar10;
  FItem *pFVar11;
  FItem *pFVar12;
  FItem *pFVar13;
  FItem **ppFVar14;
  bool bVar15;
  float fVar16;
  undefined1 auStack_368 [48];
  FItem *local_338;
  FItem *local_328;
  FItem *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar16 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar16;
    memset(local_310,0,0x2e8);
    ppFVar14 = &local_328;
    do {
      pFVar13 = ppFVar14[1];
      pFVar12 = *ppFVar14;
      pFVar1 = ppFVar14[2];
      iVar7 = (int)((longlong)pFVar13 - (longlong)pFVar12 >> 4) + 1;
      local_338._0_4_ = (int)pFVar1;
      pFVar11 = pFVar12;
      if ((int)local_338 != 0) {
LAB_14459dd30:
        if (8 < iVar7) {
          pBVar4 = (pFVar11->Data).CorePtr.Reference;
          pFVar8 = pFVar13 + 1;
          uVar5 = pFVar11[iVar7 / 2].Key;
          pBVar6 = pFVar11[iVar7 / 2].Data.CorePtr.Reference;
          pFVar11[iVar7 / 2].Key = pFVar11->Key;
          pFVar11[iVar7 / 2].Data.CorePtr.Reference = pBVar4;
          pFVar11->Key = uVar5;
          (pFVar11->Data).CorePtr.Reference = pBVar6;
          pFVar12 = pFVar11;
LAB_14459dd60:
          pFVar10 = pFVar12;
          pFVar12 = pFVar10 + 1;
          if (pFVar12 <= pFVar13) goto code_r0x00014459dd69;
          goto LAB_14459dd93;
        }
        for (; pFVar12 = pFVar11, pFVar1 = pFVar11, pFVar11 < pFVar13; pFVar13 = pFVar13 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar13) {
            uVar2 = ((pFVar12->Data).CorePtr.Reference)->DataSizeLow;
            uVar3 = ((pFVar1->Data).CorePtr.Reference)->DataSizeLow;
            if ((uVar2 == 0) || (uVar3 == 0)) {
              bVar15 = uVar3 < uVar2;
            }
            else {
              bVar15 = uVar2 < uVar3;
            }
            if (bVar15) {
              pFVar12 = pFVar1;
            }
          }
          uVar5 = pFVar12->Key;
          pBVar4 = (pFVar12->Data).CorePtr.Reference;
          pBVar6 = (pFVar13->Data).CorePtr.Reference;
          pFVar12->Key = pFVar13->Key;
          (pFVar12->Data).CorePtr.Reference = pBVar6;
          pFVar13->Key = uVar5;
          (pFVar13->Data).CorePtr.Reference = pBVar4;
        }
        goto LAB_14459de72;
      }
LAB_14459de60:
      local_338 = pFVar1;
      HeapSortInternal<UE::IoStore::JournaledCache::FMemCache::FItem,int,FIdentityFunctor,_UE::IoStore::JournaledCache::FMemCache::Peel_::__l2::<lambda_1>_>
                (pFVar12,iVar7,param_3,param_4);
LAB_14459de72:
      ppFVar14 = ppFVar14 + -3;
    } while (&local_328 <= ppFVar14);
  }
  return;
code_r0x00014459dd69:
  uVar2 = ((pFVar11->Data).CorePtr.Reference)->DataSizeLow;
  uVar3 = (pFVar10[1].Data.CorePtr.Reference)->DataSizeLow;
  if ((uVar2 == 0) || (uVar3 == 0)) {
    bVar15 = uVar3 < uVar2;
  }
  else {
    bVar15 = uVar2 < uVar3;
  }
  if (!bVar15) goto LAB_14459dd60;
LAB_14459dd93:
  do {
    pFVar9 = pFVar8;
    pFVar8 = pFVar9 + -1;
    if (pFVar8 <= pFVar11) break;
    uVar2 = (pFVar9[-1].Data.CorePtr.Reference)->DataSizeLow;
    uVar3 = ((pFVar11->Data).CorePtr.Reference)->DataSizeLow;
    if ((uVar2 == 0) || (uVar3 == 0)) {
      bVar15 = uVar3 < uVar2;
    }
    else {
      bVar15 = uVar2 < uVar3;
    }
  } while (!bVar15);
  pBVar4 = pFVar9[-1].Data.CorePtr.Reference;
  if (pFVar12 <= pFVar8) {
    uVar5 = pFVar12->Key;
    pBVar6 = pFVar10[1].Data.CorePtr.Reference;
    pFVar12->Key = pFVar8->Key;
    pFVar10[1].Data.CorePtr.Reference = pBVar4;
    pFVar8->Key = uVar5;
    pFVar9[-1].Data.CorePtr.Reference = pBVar6;
    goto LAB_14459dd60;
  }
  uVar5 = pFVar11->Key;
  pBVar6 = (pFVar11->Data).CorePtr.Reference;
  local_338._0_4_ = (int)local_338 + -1;
  pFVar11->Key = pFVar8->Key;
  (pFVar11->Data).CorePtr.Reference = pBVar4;
  pFVar8->Key = uVar5;
  pFVar9[-1].Data.CorePtr.Reference = pBVar6;
  if ((longlong)((longlong)pFVar8 + (-0x10 - (longlong)pFVar11) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pFVar13 - (longlong)pFVar12 & 0xfffffffffffffff0U)) {
    if (pFVar12 < pFVar13) {
      *ppFVar14 = pFVar12;
      ppFVar14[1] = pFVar13;
      *(int *)(ppFVar14 + 2) = (int)local_338;
      ppFVar14 = ppFVar14 + 3;
    }
    if (pFVar8 <= pFVar11 + 1) goto LAB_14459de72;
    pFVar13 = pFVar9 + -2;
    pFVar12 = pFVar11;
  }
  else {
    if (pFVar11 + 1 < pFVar8) {
      *ppFVar14 = pFVar11;
      ppFVar14[1] = pFVar9 + -2;
      *(int *)(ppFVar14 + 2) = (int)local_338;
      ppFVar14 = ppFVar14 + 3;
    }
    if (pFVar13 <= pFVar12) goto LAB_14459de72;
  }
  iVar7 = (int)((longlong)pFVar13 - (longlong)pFVar12 >> 4) + 1;
  pFVar11 = pFVar12;
  if ((int)local_338 == 0) goto LAB_14459de60;
  goto LAB_14459dd30;
}

// IntroSortInternal<UE::IoStore::FOnDemandTocEntry,int,FIdentityFunctor,TDereferenceWrapper<UE::IoStore::FOnDemandTocEntry,`UE::IoStore::FOnDemandIoStore::CreateContainersFromToc'::__l24::<lambda_1>_>_> @ 14459df30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<UE::IoStore::FOnDemandTocEntry,int,FIdentityFunctor,TDereferenceWrapper<UE::IoStore::FOnDemandTocEntry,_UE::IoStore::FOnDemandIoStore::CreateContainersFromToc_::__l24::<lambda_1>_>_>
          (FOnDemandTocEntry *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<UE::IoStore::FOnDemandTocEntry,_private:_static_void___cdecl_UE::IoStore::FOnDemandIoStore::CreateContainersFromToc(TStringView<wchar_t>,TStringView<wchar_t>,UE::IoStore::FOnDemandToc_&,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,TArray<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,TSizedDefaultAllocator<32>_>_&)_::_24_::<lambda_1>_>
          param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong64 uVar6;
  ulong64 uVar7;
  ulong64 uVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  FOnDemandTocEntry *pFVar14;
  FOnDemandTocEntry *pFVar15;
  FOnDemandTocEntry *pFVar16;
  FOnDemandTocEntry **ppFVar17;
  int iVar18;
  FOnDemandTocEntry *pFVar19;
  FOnDemandTocEntry *pFVar20;
  FOnDemandTocEntry *pFVar21;
  float fVar22;
  undefined1 auStack_388 [48];
  FOnDemandTocEntry *local_358;
  FOnDemandTocEntry *local_348;
  FOnDemandTocEntry *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
  if (1 < param_2) {
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar22 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar22;
    memset(local_330,0,0x2e8);
    ppFVar17 = &local_348;
    do {
      pFVar21 = ppFVar17[1];
      pFVar20 = *ppFVar17;
      local_358 = ppFVar17[2];
      iVar13 = (int)(((longlong)pFVar21 - (longlong)pFVar20) / 0x38) + 1;
      pFVar19 = pFVar20;
      iVar18 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_14459e010:
        if (8 < iVar13) {
          uVar1 = *(undefined8 *)((pFVar19->Hash).Hash + 8);
          pFVar14 = pFVar21 + 1;
          pFVar20 = pFVar19 + iVar13 / 2;
          uVar2 = *(undefined8 *)(pFVar20->Hash).Hash;
          uVar3 = *(undefined8 *)((pFVar20->Hash).Hash + 8);
          uVar4 = *(undefined8 *)((pFVar20->Hash).Hash + 0x10);
          uVar5 = *(undefined8 *)((pFVar20->ChunkId).Id + 4);
          uVar6 = pFVar20->RawSize;
          uVar7 = pFVar20->EncodedSize;
          uVar11 = pFVar20->BlockOffset;
          uVar12 = pFVar20->BlockCount;
          *(undefined8 *)(pFVar20->Hash).Hash = *(undefined8 *)(pFVar19->Hash).Hash;
          *(undefined8 *)((pFVar20->Hash).Hash + 8) = uVar1;
          uVar1 = *(undefined8 *)((pFVar19->ChunkId).Id + 4);
          *(undefined8 *)((pFVar20->Hash).Hash + 0x10) =
               *(undefined8 *)((pFVar19->Hash).Hash + 0x10);
          *(undefined8 *)((pFVar20->ChunkId).Id + 4) = uVar1;
          uVar8 = pFVar19->EncodedSize;
          pFVar20->RawSize = pFVar19->RawSize;
          pFVar20->EncodedSize = uVar8;
          uVar10 = pFVar19->BlockCount;
          pFVar20->BlockOffset = pFVar19->BlockOffset;
          pFVar20->BlockCount = uVar10;
          *(undefined8 *)(pFVar19->Hash).Hash = uVar2;
          *(undefined8 *)((pFVar19->Hash).Hash + 8) = uVar3;
          *(undefined8 *)((pFVar19->Hash).Hash + 0x10) = uVar4;
          *(undefined8 *)((pFVar19->ChunkId).Id + 4) = uVar5;
          pFVar19->RawSize = uVar6;
          pFVar19->EncodedSize = uVar7;
          pFVar19->BlockOffset = uVar11;
          pFVar19->BlockCount = uVar12;
          pFVar20 = pFVar19;
LAB_14459e080:
          pFVar16 = pFVar20;
          pFVar20 = pFVar16 + 1;
          if (pFVar20 <= pFVar21) goto code_r0x00014459e089;
          goto LAB_14459e0a0;
        }
        for (; pFVar14 = pFVar19, pFVar20 = pFVar19, pFVar19 < pFVar21; pFVar21 = pFVar21 + -1) {
          while (pFVar20 = pFVar20 + 1, pFVar20 <= pFVar21) {
            iVar18 = memcmp(&pFVar14->ChunkId,&pFVar20->ChunkId,0xc);
            if (iVar18 < 0) {
              pFVar14 = pFVar20;
            }
          }
          uVar1 = *(undefined8 *)(pFVar14->Hash).Hash;
          uVar2 = *(undefined8 *)((pFVar14->Hash).Hash + 8);
          uVar11 = pFVar14->BlockOffset;
          uVar12 = pFVar14->BlockCount;
          uVar3 = *(undefined8 *)((pFVar14->Hash).Hash + 0x10);
          uVar4 = *(undefined8 *)((pFVar14->ChunkId).Id + 4);
          uVar5 = *(undefined8 *)((pFVar21->Hash).Hash + 8);
          uVar6 = pFVar14->RawSize;
          uVar7 = pFVar14->EncodedSize;
          *(undefined8 *)(pFVar14->Hash).Hash = *(undefined8 *)(pFVar21->Hash).Hash;
          *(undefined8 *)((pFVar14->Hash).Hash + 8) = uVar5;
          uVar5 = *(undefined8 *)((pFVar21->ChunkId).Id + 4);
          *(undefined8 *)((pFVar14->Hash).Hash + 0x10) =
               *(undefined8 *)((pFVar21->Hash).Hash + 0x10);
          *(undefined8 *)((pFVar14->ChunkId).Id + 4) = uVar5;
          uVar8 = pFVar21->EncodedSize;
          pFVar14->RawSize = pFVar21->RawSize;
          pFVar14->EncodedSize = uVar8;
          uVar10 = pFVar21->BlockCount;
          pFVar14->BlockOffset = pFVar21->BlockOffset;
          pFVar14->BlockCount = uVar10;
          *(undefined8 *)(pFVar21->Hash).Hash = uVar1;
          *(undefined8 *)((pFVar21->Hash).Hash + 8) = uVar2;
          *(undefined8 *)((pFVar21->Hash).Hash + 0x10) = uVar3;
          *(undefined8 *)((pFVar21->ChunkId).Id + 4) = uVar4;
          pFVar21->RawSize = uVar6;
          pFVar21->EncodedSize = uVar7;
          pFVar21->BlockOffset = uVar11;
          pFVar21->BlockCount = uVar12;
        }
        goto LAB_14459e22a;
      }
LAB_14459e211:
      HeapSortInternal<UE::IoStore::FOnDemandTocEntry,int,FIdentityFunctor,TDereferenceWrapper<UE::IoStore::FOnDemandTocEntry,_UE::IoStore::FOnDemandIoStore::CreateContainersFromToc_::__l24::<lambda_1>_>_>
                (pFVar20,iVar13,param_3,param_4);
LAB_14459e22a:
      ppFVar17 = ppFVar17 + -3;
    } while (&local_348 <= ppFVar17);
  }
  return;
code_r0x00014459e089:
  iVar13 = memcmp(&pFVar19->ChunkId,&pFVar16[1].ChunkId,0xc);
  if (-1 < iVar13) goto LAB_14459e080;
LAB_14459e0a0:
  do {
    pFVar15 = pFVar14;
    pFVar14 = pFVar15 + -1;
    if (pFVar14 <= pFVar19) break;
    iVar13 = memcmp(&pFVar15[-1].ChunkId,&pFVar19->ChunkId,0xc);
  } while (-1 < iVar13);
  uVar1 = *(undefined8 *)(pFVar14->Hash).Hash;
  uVar2 = *(undefined8 *)(pFVar15[-1].Hash.Hash + 8);
  if (pFVar20 <= pFVar14) {
    uVar3 = *(undefined8 *)(pFVar20->Hash).Hash;
    uVar4 = *(undefined8 *)(pFVar16[1].Hash.Hash + 8);
    uVar5 = *(undefined8 *)(pFVar16[1].Hash.Hash + 0x10);
    uVar9 = *(undefined8 *)(pFVar16[1].ChunkId.Id + 4);
    uVar6 = pFVar16[1].RawSize;
    uVar7 = pFVar16[1].EncodedSize;
    uVar11 = pFVar16[1].BlockOffset;
    uVar12 = pFVar16[1].BlockCount;
    *(undefined8 *)(pFVar20->Hash).Hash = uVar1;
    *(undefined8 *)(pFVar16[1].Hash.Hash + 8) = uVar2;
    uVar1 = *(undefined8 *)(pFVar15[-1].ChunkId.Id + 4);
    *(undefined8 *)(pFVar16[1].Hash.Hash + 0x10) = *(undefined8 *)(pFVar15[-1].Hash.Hash + 0x10);
    *(undefined8 *)(pFVar16[1].ChunkId.Id + 4) = uVar1;
    uVar8 = pFVar15[-1].EncodedSize;
    pFVar16[1].RawSize = pFVar15[-1].RawSize;
    pFVar16[1].EncodedSize = uVar8;
    uVar10 = pFVar15[-1].BlockCount;
    pFVar16[1].BlockOffset = pFVar15[-1].BlockOffset;
    pFVar16[1].BlockCount = uVar10;
    *(undefined8 *)(pFVar14->Hash).Hash = uVar3;
    *(undefined8 *)(pFVar15[-1].Hash.Hash + 8) = uVar4;
    *(undefined8 *)(pFVar15[-1].Hash.Hash + 0x10) = uVar5;
    *(undefined8 *)(pFVar15[-1].ChunkId.Id + 4) = uVar9;
    pFVar15[-1].RawSize = uVar6;
    pFVar15[-1].EncodedSize = uVar7;
    pFVar15[-1].BlockOffset = uVar11;
    pFVar15[-1].BlockCount = uVar12;
    goto LAB_14459e080;
  }
  uVar3 = *(undefined8 *)(pFVar19->Hash).Hash;
  uVar4 = *(undefined8 *)((pFVar19->Hash).Hash + 8);
  uVar5 = *(undefined8 *)((pFVar19->Hash).Hash + 0x10);
  uVar9 = *(undefined8 *)((pFVar19->ChunkId).Id + 4);
  uVar6 = pFVar19->RawSize;
  uVar7 = pFVar19->EncodedSize;
  iVar18 = iVar18 + -1;
  uVar11 = pFVar19->BlockOffset;
  uVar12 = pFVar19->BlockCount;
  *(undefined8 *)(pFVar19->Hash).Hash = uVar1;
  *(undefined8 *)((pFVar19->Hash).Hash + 8) = uVar2;
  uVar1 = *(undefined8 *)(pFVar15[-1].ChunkId.Id + 4);
  *(undefined8 *)((pFVar19->Hash).Hash + 0x10) = *(undefined8 *)(pFVar15[-1].Hash.Hash + 0x10);
  *(undefined8 *)((pFVar19->ChunkId).Id + 4) = uVar1;
  uVar8 = pFVar15[-1].EncodedSize;
  pFVar19->RawSize = pFVar15[-1].RawSize;
  pFVar19->EncodedSize = uVar8;
  uVar10 = pFVar15[-1].BlockCount;
  pFVar19->BlockOffset = pFVar15[-1].BlockOffset;
  pFVar19->BlockCount = uVar10;
  *(undefined8 *)(pFVar14->Hash).Hash = uVar3;
  *(undefined8 *)(pFVar15[-1].Hash.Hash + 8) = uVar4;
  *(undefined8 *)(pFVar15[-1].Hash.Hash + 0x10) = uVar5;
  *(undefined8 *)(pFVar15[-1].ChunkId.Id + 4) = uVar9;
  pFVar15[-1].RawSize = uVar6;
  pFVar15[-1].EncodedSize = uVar7;
  pFVar15[-1].BlockOffset = uVar11;
  pFVar15[-1].BlockCount = uVar12;
  if (((longlong)pFVar14 + (-0x38 - (longlong)pFVar19)) / 0x38 <
      ((longlong)pFVar21 - (longlong)pFVar20) / 0x38) {
    if (pFVar20 < pFVar21) {
      *ppFVar17 = pFVar20;
      ppFVar17[1] = pFVar21;
      *(int *)(ppFVar17 + 2) = iVar18;
      ppFVar17 = ppFVar17 + 3;
    }
    if (pFVar14 <= pFVar19 + 1) goto LAB_14459e22a;
    pFVar21 = pFVar15 + -2;
    pFVar20 = pFVar19;
  }
  else {
    if (pFVar19 + 1 < pFVar14) {
      *ppFVar17 = pFVar19;
      ppFVar17[1] = pFVar15 + -2;
      *(int *)(ppFVar17 + 2) = iVar18;
      ppFVar17 = ppFVar17 + 3;
    }
    if (pFVar21 <= pFVar20) goto LAB_14459e22a;
  }
  iVar13 = (int)(((longlong)pFVar21 - (longlong)pFVar20) / 0x38) + 1;
  pFVar19 = pFVar20;
  if (iVar18 == 0) goto LAB_14459e211;
  goto LAB_14459e010;
}

// IntroSortInternal<`UE::IoStore::JournaledCache::LoadCache'::__l2::FParagraph,int,FIdentityFunctor,`UE::IoStore::JournaledCache::LoadCache'::__l2::<lambda_4>_> @ 14459e320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<_UE::IoStore::JournaledCache::LoadCache_::__l2::FParagraph,int,FIdentityFunctor,_UE::IoStore::JournaledCache::LoadCache_::__l2::<lambda_4>_>
          (FParagraph *param_1,int param_2,FIdentityFunctor param_3,<lambda_4> param_4)

{
  FParagraph *pFVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  FPhraseDesc *pFVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  FParagraph **ppFVar10;
  FParagraph *pFVar11;
  FParagraph *pFVar12;
  FParagraph *pFVar13;
  FParagraph *pFVar14;
  FParagraph *pFVar15;
  FParagraph *pFVar16;
  float fVar17;
  undefined1 auStack_368 [48];
  FParagraph *local_338;
  FParagraph *local_328;
  FParagraph *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar17 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar17;
    memset(local_310,0,0x2e8);
    ppFVar10 = &local_328;
    do {
      pFVar16 = ppFVar10[1];
      pFVar15 = *ppFVar10;
      pFVar1 = ppFVar10[2];
      iVar9 = (int)((longlong)pFVar16 - (longlong)pFVar15 >> 4) + 1;
      local_338._0_4_ = (int)pFVar1;
      pFVar14 = pFVar15;
      if ((int)local_338 != 0) {
LAB_14459e3d0:
        if (8 < iVar9) {
          uVar5 = pFVar14->EntryCount;
          uVar6 = pFVar14->DataSize;
          pFVar12 = pFVar16 + 1;
          pFVar15 = pFVar14 + iVar9 / 2;
          pFVar4 = pFVar15->Phrase;
          uVar7 = pFVar15->EntryCount;
          uVar8 = pFVar15->DataSize;
          pFVar15 = pFVar14 + iVar9 / 2;
          pFVar15->Phrase = pFVar14->Phrase;
          pFVar15->EntryCount = uVar5;
          pFVar15->DataSize = uVar6;
          pFVar14->Phrase = pFVar4;
          pFVar14->EntryCount = uVar7;
          pFVar14->DataSize = uVar8;
          pFVar15 = pFVar14;
LAB_14459e400:
          pFVar11 = pFVar15;
          pFVar15 = pFVar11 + 1;
          if (pFVar15 <= pFVar16) goto code_r0x00014459e409;
          goto LAB_14459e426;
        }
        for (; pFVar15 = pFVar14, pFVar1 = pFVar14, pFVar14 < pFVar16; pFVar16 = pFVar16 + -1) {
          while (pFVar12 = pFVar15, pFVar1 = pFVar1 + 1, pFVar1 <= pFVar16) {
            pFVar15 = pFVar1;
            if (pFVar1->Phrase->Marker <= pFVar12->Phrase->Marker) {
              pFVar15 = pFVar12;
            }
          }
          pFVar4 = pFVar12->Phrase;
          uVar7 = pFVar12->EntryCount;
          uVar8 = pFVar12->DataSize;
          uVar5 = pFVar16->EntryCount;
          uVar6 = pFVar16->DataSize;
          pFVar12->Phrase = pFVar16->Phrase;
          pFVar12->EntryCount = uVar5;
          pFVar12->DataSize = uVar6;
          pFVar16->Phrase = pFVar4;
          pFVar16->EntryCount = uVar7;
          pFVar16->DataSize = uVar8;
        }
        goto LAB_14459e4f9;
      }
LAB_14459e4e7:
      local_338 = pFVar1;
      HeapSortInternal<_UE::IoStore::JournaledCache::LoadCache_::__l2::FParagraph,int,FIdentityFunctor,_UE::IoStore::JournaledCache::LoadCache_::__l2::<lambda_4>_>
                (pFVar15,iVar9,param_3,param_4);
LAB_14459e4f9:
      ppFVar10 = ppFVar10 + -3;
    } while (&local_328 <= ppFVar10);
  }
  return;
code_r0x00014459e409:
  if (pFVar15->Phrase->Marker <= pFVar14->Phrase->Marker) goto LAB_14459e400;
LAB_14459e426:
  do {
    pFVar13 = pFVar12;
    pFVar12 = pFVar13 + -1;
    if (pFVar12 <= pFVar14) break;
  } while (pFVar14->Phrase->Marker <= pFVar12->Phrase->Marker);
  uVar2 = pFVar13[-1].EntryCount;
  uVar3 = pFVar13[-1].DataSize;
  if (pFVar15 <= pFVar12) {
    pFVar4 = pFVar15->Phrase;
    uVar5 = pFVar11[1].EntryCount;
    uVar6 = pFVar11[1].DataSize;
    pFVar15->Phrase = pFVar12->Phrase;
    pFVar11[1].EntryCount = uVar2;
    pFVar11[1].DataSize = uVar3;
    pFVar12->Phrase = pFVar4;
    pFVar13[-1].EntryCount = uVar5;
    pFVar13[-1].DataSize = uVar6;
    goto LAB_14459e400;
  }
  pFVar4 = pFVar14->Phrase;
  uVar5 = pFVar14->EntryCount;
  uVar6 = pFVar14->DataSize;
  local_338._0_4_ = (int)local_338 + -1;
  pFVar14->Phrase = pFVar12->Phrase;
  pFVar14->EntryCount = uVar2;
  pFVar14->DataSize = uVar3;
  pFVar12->Phrase = pFVar4;
  pFVar13[-1].EntryCount = uVar5;
  pFVar13[-1].DataSize = uVar6;
  if ((longlong)((longlong)pFVar12 + (-0x10 - (longlong)pFVar14) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pFVar16 - (longlong)pFVar15 & 0xfffffffffffffff0U)) {
    if (pFVar15 < pFVar16) {
      *ppFVar10 = pFVar15;
      ppFVar10[1] = pFVar16;
      *(int *)(ppFVar10 + 2) = (int)local_338;
      ppFVar10 = ppFVar10 + 3;
    }
    if (pFVar12 <= pFVar14 + 1) goto LAB_14459e4f9;
    pFVar16 = pFVar13 + -2;
    pFVar15 = pFVar14;
  }
  else {
    if (pFVar14 + 1 < pFVar12) {
      *ppFVar10 = pFVar14;
      ppFVar10[1] = pFVar13 + -2;
      *(int *)(ppFVar10 + 2) = (int)local_338;
      ppFVar10 = ppFVar10 + 3;
    }
    if (pFVar16 <= pFVar15) goto LAB_14459e4f9;
  }
  iVar9 = (int)((longlong)pFVar16 - (longlong)pFVar15 >> 4) + 1;
  pFVar14 = pFVar15;
  if ((int)local_338 == 0) goto LAB_14459e4e7;
  goto LAB_14459e3d0;
}

// Launch<``UE::IoStore::HttpIoDispatcher::FHttpDispatcher::ProcessHttpRequests'::__l9::<lambda_1>::operator()'::__l2::<lambda_1>_> @ 14459e600

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EIoHttpFlags": Some values do not have unique names */

void __thiscall
UE::Tasks::Private::FTaskHandle::
Launch<__UE::IoStore::HttpIoDispatcher::FHttpDispatcher::ProcessHttpRequests_::__l9::<lambda_1>::operator()_::__l2::<lambda_1>_>
          (FTaskHandle *this,wchar_t *param_1,<lambda_1> *param_2,ETaskPriority param_3,
          EExtendedTaskPriority param_4,ETaskFlags param_5)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  FHttpRequest *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FTaskBase *pFVar5;
  code *pcVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined2 uVar9;
  bool bVar10;
  FTaskBase *this_00;
  
  if ((this->Pimpl).Reference != (FTaskBase *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("!IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Task.h"
                        ,0x77,L"");
    if (bVar10) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  this_00 = FMemory::Malloc(0x180,0x40);
  if (this_00 == (FTaskBase *)0x0) {
    this_00 = (FTaskBase *)0x0;
  }
  else {
    FTaskBase::FTaskBase(this_00,2,true);
    this_00->_padding_ =
         (longlong)
         &TExecutableTaskBase<``UE::IoStore::HttpIoDispatcher::FHttpDispatcher::ProcessHttpRequests'::`9'::<lambda_1>::operator()'::`2'::<lambda_1>,void,void>
          ::_vftable_;
    FTaskBase::Init(this_00,param_1,param_3,param_4,param_5);
    this_00[1]._padding_ = (longlong)param_2->__this;
    pFVar3 = param_2->HttpRequest;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = (longlong)pFVar3;
    this_00[1]._padding_ = (longlong)(param_2->HttpResponse).Body.CorePtr.Reference;
    (param_2->HttpResponse).Body.CorePtr.Reference = (BufCore *)0x0;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = (longlong)(param_2->HttpResponse).Headers.AllocatorInstance.Data;
    (param_2->HttpResponse).Headers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)&this_00[1]._padding_ = (param_2->HttpResponse).Headers.ArrayNum;
    *(int *)((longlong)&this_00[1]._padding_ + 4) = (param_2->HttpResponse).Headers.ArrayMax;
    (param_2->HttpResponse).Headers.ArrayNum = 0;
    (param_2->HttpResponse).Headers.ArrayMax = 0;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = (longlong)(param_2->HttpResponse).Reason.Data.AllocatorInstance.Data;
    (param_2->HttpResponse).Reason.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_00[1].RefCount = (atomic<unsigned_int>)(param_2->HttpResponse).Reason.Data.ArrayNum;
    this_00[1].NumLocks = (atomic<unsigned_int>)(param_2->HttpResponse).Reason.Data.ArrayMax;
    (param_2->HttpResponse).Reason.Data.ArrayNum = 0;
    (param_2->HttpResponse).Reason.Data.ArrayMax = 0;
    this_00[1].Pipe = (FPipe *)(param_2->HttpResponse).Sample;
    uVar7 = *(undefined1 *)((longlong)&(param_2->HttpResponse).DurationMilliseconds + 4);
    uVar8 = *(undefined1 *)((longlong)&(param_2->HttpResponse).DurationMilliseconds + 5);
    uVar9 = *(undefined2 *)((longlong)&(param_2->HttpResponse).DurationMilliseconds + 6);
    this_00[1].StateChangeEvent =
         (TEventCount<unsigned_int>)*(undefined4 *)&(param_2->HttpResponse).DurationMilliseconds;
    this_00[1].ExtendedPriority = uVar7;
    this_00[1].TaskTriggered = (atomic<bool>)uVar8;
    this_00[1]._padding_ = uVar9;
    this_00[1].ExecutingThreadId = (atomic<unsigned_int>)(param_2->HttpResponse).StatusCode;
    this_00[1]._padding_ = (param_2->HttpResponse).RetryCount;
    *(int *)&this_00[1].TraceId = (param_2->HttpResponse).HostIndex;
    this_00[1].TraceId.field_0x4 = (param_2->HttpResponse).bCanceled;
    this_00[1].TraceId.field_0x5 = (param_2->HttpResponse).CDNCacheStatus;
    *(FIoHttpRange *)this_00[1].Prerequisites.Prerequisites.AllocatorInstance.InlineData =
         param_2->TotalRange;
    this_00[1].Prerequisites.Prerequisites.AllocatorInstance.SecondaryData =
         (ForElementType<UE::Tasks::Private::FTaskBase_*>)(param_2->HostGroup).Impl.Object;
    pTVar4 = (param_2->HostGroup).Impl.SharedReferenceCount.ReferenceController;
    *(TReferenceControllerBase<1> **)&this_00[1].Prerequisites.Prerequisites.ArrayNum = pTVar4;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    this_00->_padding_ =
         (longlong)
         &TExecutableTask<``UE::IoStore::HttpIoDispatcher::FHttpDispatcher::ProcessHttpRequests'::`9'::<lambda_1>::operator()'::`2'::<lambda_1>_>
          ::_vftable_;
  }
  pFVar5 = (this->Pimpl).Reference;
  if (pFVar5 != (FTaskBase *)0x0) {
    (this->Pimpl).Reference = (FTaskBase *)0x0;
    LOCK();
    paVar1 = &pFVar5->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar5->_padding_)(pFVar5,1);
    }
  }
  (this->Pimpl).Reference = this_00;
  FTaskBase::TryLaunch(this_00,0x180);
  return;
}

// LowerBoundInternal<FIoChunkId,int,FIoChunkId,FIdentityFunctor,TLess<void>_> @ 14459e800

int __cdecl
AlgoImpl::LowerBoundInternal<FIoChunkId,int,FIoChunkId,FIdentityFunctor,TLess<void>_>
          (FIoChunkId *param_1,int param_2,FIoChunkId *param_3,FIdentityFunctor param_4,
          TLess<void> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar4;
      iVar3 = memcmp(param_1 + iVar1,param_3,0xc);
      if (iVar3 < 0) {
        iVar4 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar4;
}

// NoneOf<TArray<TSharedRef<UE::IoStore::FOnDemandIoStore::FMountRequest,1>,TSizedDefaultAllocator<32>_>,`UE::IoStore::FOnDemandIoStore::Unmount'::__l21::<lambda_1>_> @ 14459f450

bool __cdecl
Algo::
NoneOf<TArray<TSharedRef<UE::IoStore::FOnDemandIoStore::FMountRequest,1>,TSizedDefaultAllocator<32>_>,_UE::IoStore::FOnDemandIoStore::Unmount_::__l21::<lambda_1>_>
          (TArray<TSharedRef<UE::IoStore::FOnDemandIoStore::FMountRequest,1>,TSizedDefaultAllocator<32>_>
           *param_1,<lambda_1> *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  undefined1 local_res8 [8];
  
  iVar1 = param_1->ArrayNum;
  pFVar5 = (param_1->AllocatorInstance).Data;
  pFVar4 = pFVar5 + (longlong)iVar1 * 0x10;
  do {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedRef<UE::IoStore::FOnDemandIoStore::FMountRequest,1>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar4) {
      return true;
    }
    iVar6 = *(int *)(*(longlong *)pFVar5 + 0x10);
    iVar3 = iVar6 + -1;
    if (iVar6 == 0) {
      iVar3 = 0;
    }
    iVar6 = (int)*(undefined8 *)&(param_2->MountId).Size;
    if (iVar6 == iVar3) {
      if ((iVar6 != 0) && (iVar3 != 0)) {
        iVar2 = iVar3;
        if (iVar6 < iVar3) {
          iVar2 = iVar6;
        }
        iVar2 = FGenericPlatformStricmp::Strnicmp
                          ((param_2->MountId).DataPtr,*(wchar_t **)(*(longlong *)pFVar5 + 8),
                           (longlong)iVar2);
        if (iVar2 != 0) goto LAB_14459f4e2;
      }
      if (iVar6 == iVar3) {
        return false;
      }
    }
LAB_14459f4e2:
    pFVar5 = pFVar5 + 0x10;
  } while( true );
}

// RotateInternal<FString> @ 1445a04a0

int __cdecl AlgoImpl::RotateInternal<FString>(FString *param_1,int param_2,int param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  FString *pFVar6;
  FString *pFVar8;
  FString *pFVar9;
  FString *pFVar10;
  FString *pFVar7;
  
  if (param_3 != 0) {
    if (param_2 <= param_3) {
      return 0;
    }
    pFVar6 = param_1 + param_3;
    pFVar9 = param_1;
    pFVar7 = param_1 + param_3;
    do {
      while( true ) {
        pFVar8 = pFVar6 + 1;
        pFVar10 = pFVar9 + 1;
        iVar2 = (pFVar6->Data).ArrayNum;
        iVar3 = (pFVar6->Data).ArrayMax;
        pFVar1 = (pFVar9->Data).AllocatorInstance.Data;
        iVar4 = (pFVar9->Data).ArrayNum;
        iVar5 = (pFVar9->Data).ArrayMax;
        (pFVar9->Data).AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
        (pFVar9->Data).ArrayNum = iVar2;
        (pFVar9->Data).ArrayMax = iVar3;
        (pFVar6->Data).AllocatorInstance.Data = pFVar1;
        (pFVar6->Data).ArrayNum = iVar4;
        (pFVar6->Data).ArrayMax = iVar5;
        pFVar9 = pFVar10;
        if (pFVar8 == param_1 + param_2) break;
        pFVar6 = pFVar8;
        if (pFVar10 == pFVar7) {
          pFVar7 = pFVar8;
        }
      }
      pFVar6 = pFVar7;
    } while (pFVar10 != pFVar7);
    param_2 = param_2 - param_3;
  }
  return param_2;
}

// Sort<TSortableMapBase<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>::FValueComparisonClass<`UE::IoStore::FOnDemandInstallCache::PurgeInternal'::__l2::<lambda_1>_>_> @ 1445a09b0

void __thiscall
TSet<TTuple<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>,FDefaultSetAllocator>
::
Sort<TSortableMapBase<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>::FValueComparisonClass<_UE::IoStore::FOnDemandInstallCache::PurgeInternal_::__l2::<lambda_1>_>_>
          (TSet<TTuple<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>,FDefaultSetAllocator>
           *this,FValueComparisonClass<_private:_class_TValueOrError<void,UE::UnifiedError::FError>___cdecl_UE::IoStore::FOnDemandInstallCache::PurgeInternal(TMap<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>_&,unsigned___int64,unsigned___int64_&)_::_2_::<lambda_1>_>
                 *param_1)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FValueComparisonClass<_private:_class_TValueOrError<void,UE::UnifiedError::FError>___cdecl_UE::IoStore::FOnDemandInstallCache::PurgeInternal(TMap<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>_&,unsigned___int64,unsigned___int64_&)_::_2_::<lambda_1>_>
  *local_res8;
  
  local_res8 = param_1;
  if (0 < *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34) {
    TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Compact((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this);
    iVar4 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    pTVar1 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> **)&this->Elements;
    if (iVar4 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    AlgoImpl::
    IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>::FValueComparisonClass<_UE::IoStore::FOnDemandInstallCache::PurgeInternal_::__l2::<lambda_1>_>_>_>_>
              (pTVar1,iVar4,local_res8._0_1_,
               (FElementCompareClass<TSortableMapBase<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>::FValueComparisonClass<_private:_class_TValueOrError<void,UE::UnifiedError::FError>___cdecl_UE::IoStore::FOnDemandInstallCache::PurgeInternal(TMap<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>_&,unsigned___int64,unsigned___int64_&)_::_2_::<lambda_1>_>_>
                *)&local_res8);
  }
  Rehash(this);
  return;
}

// Sort<TSortableMapBase<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>::FValueComparisonClass<`UE::IoStore::FOnDemandInstallCache::Defrag'::__l2::<lambda_3>_>_> @ 1445a0a40

void __thiscall
TSet<TTuple<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>,FDefaultSetAllocator>
::
Sort<TSortableMapBase<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>::FValueComparisonClass<_UE::IoStore::FOnDemandInstallCache::Defrag_::__l2::<lambda_3>_>_>
          (TSet<TTuple<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>,FDefaultSetAllocator>
           *this,FValueComparisonClass<_private:_class_TValueOrError<void,UE::UnifiedError::FError>___cdecl_UE::IoStore::FOnDemandInstallCache::Defrag(TArray<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,TSizedDefaultAllocator<32>_>_const_&,TArray<TBitArray<FDefaultBitArrayAllocator>,TSizedDefaultAllocator<32>_>_const_&,TMap<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>_&,unsigned___int64_const_*,unsigned___int64_*)_::_2_::<lambda_3>_>
                 *param_1)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FValueComparisonClass<_private:_class_TValueOrError<void,UE::UnifiedError::FError>___cdecl_UE::IoStore::FOnDemandInstallCache::Defrag(TArray<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,TSizedDefaultAllocator<32>_>_const_&,TArray<TBitArray<FDefaultBitArrayAllocator>,TSizedDefaultAllocator<32>_>_const_&,TMap<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>_&,unsigned___int64_const_*,unsigned___int64_*)_::_2_::<lambda_3>_>
  *local_res8;
  
  local_res8 = param_1;
  if (0 < *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34) {
    TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Compact((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this);
    iVar4 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    pTVar1 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_> **)&this->Elements;
    if (iVar4 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    AlgoImpl::
    IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>::FValueComparisonClass<_UE::IoStore::FOnDemandInstallCache::Defrag_::__l2::<lambda_3>_>_>_>_>
              (pTVar1,iVar4,local_res8._0_1_,
               (FElementCompareClass<TSortableMapBase<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>::FValueComparisonClass<_private:_class_TValueOrError<void,UE::UnifiedError::FError>___cdecl_UE::IoStore::FOnDemandInstallCache::Defrag(TArray<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,TSizedDefaultAllocator<32>_>_const_&,TArray<TBitArray<FDefaultBitArrayAllocator>,TSizedDefaultAllocator<32>_>_const_&,TMap<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>_&,unsigned___int64_const_*,unsigned___int64_*)_::_2_::<lambda_3>_>_>
                *)&local_res8);
  }
  Rehash(this);
  return;
}

// TransformAccumulate<unsigned___int64,TMap<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>,`UE::IoStore::FOnDemandInstallCache::DefragAll'::__l2::<lambda_1>,TPlus<void>_> @ 1445a0ad0

ulong64 __cdecl
Algo::
TransformAccumulate<unsigned___int64,TMap<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>,_UE::IoStore::FOnDemandInstallCache::DefragAll_::__l2::<lambda_1>,TPlus<void>_>
          (TMap<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>
           *param_1,<lambda_1> param_2,ulong64 param_3,TPlus<void> param_4)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  ulong64 uVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iVar13 = 0;
  iVar14 = 0;
  uVar6 = 1;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar12 = *puVar15;
    while (uVar12 == 0) {
      lVar8 = (longlong)iVar13;
      iVar14 = iVar14 + 0x20;
      iVar13 = iVar13 + 1;
      iVar7 = iVar3;
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iVar13) goto LAB_1445a0b6d;
      uVar12 = puVar15[lVar8 + 1];
    }
    uVar6 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = iVar14 + -1 + (int)lVar8;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_1445a0b6d:
  uVar12 = *(uint *)&param_1->field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar13);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return uVar9;
  }
  uVar6 = *(uint *)&param_1->field_0x28;
  if (uVar12 != uVar6) {
    puVar10 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar10 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar10 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar8 = (longlong)iVar13;
      uVar11 = uVar11 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar6;
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar13) goto LAB_1445a0c70;
      uVar12 = *(uint *)(puVar10 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar12 = (int)lVar8 + -1 + uVar11;
    if ((int)uVar6 < (int)uVar12) {
      uVar12 = uVar6;
    }
  }
LAB_1445a0c70:
  while( true ) {
    if (*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar12) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    if (*(longlong *)(*(longlong *)param_1 + 0x18 + (longlong)TStack_60.CurrentBitIndex * 0x28) == 0
       ) {
      lVar8 = 0;
    }
    else {
      lVar8 = *(longlong *)(*(longlong *)param_1 + 8 + (longlong)TStack_60.CurrentBitIndex * 0x28);
    }
    param_3 = param_3 + lVar8;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return param_3;
}

// TransformAccumulate<unsigned___int64,TMap<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>,`UE::IoStore::FOnDemandInstallCache::PurgeAllUnreferenced'::__l2::<lambda_1>,TPlus<void>_> @ 1445a0cf0

ulong64 __cdecl
Algo::
TransformAccumulate<unsigned___int64,TMap<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>,_UE::IoStore::FOnDemandInstallCache::PurgeAllUnreferenced_::__l2::<lambda_1>,TPlus<void>_>
          (TMap<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>
           *param_1,<lambda_1> param_2,ulong64 param_3,TPlus<void> param_4)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  ulong64 uVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iVar13 = 0;
  iVar14 = 0;
  uVar6 = 1;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar12 = *puVar15;
    while (uVar12 == 0) {
      lVar8 = (longlong)iVar13;
      iVar14 = iVar14 + 0x20;
      iVar13 = iVar13 + 1;
      iVar7 = iVar3;
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iVar13) goto LAB_1445a0d8d;
      uVar12 = puVar15[lVar8 + 1];
    }
    uVar6 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = iVar14 + -1 + (int)lVar8;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_1445a0d8d:
  uVar12 = *(uint *)&param_1->field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar13);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return uVar9;
  }
  uVar6 = *(uint *)&param_1->field_0x28;
  if (uVar12 != uVar6) {
    puVar10 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar10 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar10 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar8 = (longlong)iVar13;
      uVar11 = uVar11 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar6;
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar13) goto LAB_1445a0e90;
      uVar12 = *(uint *)(puVar10 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar12 = (int)lVar8 + -1 + uVar11;
    if ((int)uVar6 < (int)uVar12) {
      uVar12 = uVar6;
    }
  }
LAB_1445a0e90:
  while( true ) {
    if (*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar12) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    if (*(longlong *)(*(longlong *)param_1 + 0x18 + (longlong)TStack_60.CurrentBitIndex * 0x28) == 0
       ) {
      lVar8 = 0;
    }
    else {
      lVar8 = *(longlong *)(*(longlong *)param_1 + 8 + (longlong)TStack_60.CurrentBitIndex * 0x28);
    }
    param_3 = param_3 + lVar8;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return param_3;
}

// TransformAccumulate<unsigned___int64,TMap<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>,`UE::IoStore::FOnDemandInstallCache::Defrag'::__l2::<lambda_2>,TPlus<void>_> @ 1445a0f10

ulong64 __cdecl
Algo::
TransformAccumulate<unsigned___int64,TMap<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>,_UE::IoStore::FOnDemandInstallCache::Defrag_::__l2::<lambda_2>,TPlus<void>_>
          (TMap<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>
           *param_1,<lambda_2> param_2,ulong64 param_3,TPlus<void> param_4)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  ulong64 uVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iVar13 = 0;
  uVar6 = 1;
  iVar14 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar12 = *puVar15;
    while (uVar12 == 0) {
      lVar8 = (longlong)iVar13;
      iVar14 = iVar14 + 0x20;
      iVar13 = iVar13 + 1;
      iVar7 = iVar3;
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iVar13) goto LAB_1445a0fad;
      uVar12 = puVar15[lVar8 + 1];
    }
    uVar6 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = iVar14 + -1 + (int)lVar8;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_1445a0fad:
  uVar12 = *(uint *)&param_1->field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar13);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return uVar9;
  }
  uVar6 = *(uint *)&param_1->field_0x28;
  if (uVar12 != uVar6) {
    puVar10 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar10 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar10 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar8 = (longlong)iVar13;
      uVar11 = uVar11 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar6;
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar13) goto LAB_1445a10b0;
      uVar12 = *(uint *)(puVar10 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar12 = (int)lVar8 + -1 + uVar11;
    if ((int)uVar6 < (int)uVar12) {
      uVar12 = uVar6;
    }
  }
LAB_1445a10b0:
  while( true ) {
    if (*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar12) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    param_3 = param_3 + *(longlong *)
                         (*(longlong *)param_1 + 8 + (longlong)TStack_60.CurrentBitIndex * 0x28);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return param_3;
}

// VisitApplyEncoded<1,0,`UE::IoStore::FOnDemandContentInstaller::ExecuteRequest'::__l2::FVisitor_&,TVariant<FEmptyVariantState,UE::IoStore::FOnDemandContentInstaller::FRequest::FInstall,UE::IoStore::FOnDemandContentInstaller::FRequest::FPurge,UE::IoStore::FOnDemandContentInstaller::FRequest::FDefrag,UE::IoStore::FOnDemandContentInstaller::FRequest::FVerify,UE::IoStore::FOnDemandContentInstaller::FRequest::FFlushLastAccess>_&> @ 1445a1120

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::
VisitApplyEncoded<1,0,_UE::IoStore::FOnDemandContentInstaller::ExecuteRequest_::__l2::FVisitor_&,TVariant<FEmptyVariantState,UE::IoStore::FOnDemandContentInstaller::FRequest::FInstall,UE::IoStore::FOnDemandContentInstaller::FRequest::FPurge,UE::IoStore::FOnDemandContentInstaller::FRequest::FDefrag,UE::IoStore::FOnDemandContentInstaller::FRequest::FVerify,UE::IoStore::FOnDemandContentInstaller::FRequest::FFlushLastAccess>_&>
          (FVisitor *param_1,
          TVariant<FEmptyVariantState,UE::IoStore::FOnDemandContentInstaller::FRequest::FInstall,UE::IoStore::FOnDemandContentInstaller::FRequest::FPurge,UE::IoStore::FOnDemandContentInstaller::FRequest::FDefrag,UE::IoStore::FOnDemandContentInstaller::FRequest::FVerify,UE::IoStore::FOnDemandContentInstaller::FRequest::FFlushLastAccess>
          *param_2)

{
  IoStore::FOnDemandContentInstaller::ExecuteInstallRequest(param_1->Installer,param_1->Request);
  return;
}

// VisitApplyEncoded<1,0,UE::Core::Private::TOverload<``UE::IoStore::FOnDemandContentInstaller::UpdateInstallRequestPriority'::__l2::<lambda_1>::operator()'::__l24::<lambda_1>,``UE::IoStore::FOnDemandContentInstaller::UpdateInstallRequestPriority'::__l2::<lambda_1>::operator()'::__l24::<lambda_2>_>,TVariant<void_*,UE::FIoHttpRequest>_&> @ 1445a1140

void __cdecl
UE::Core::Private::
VisitApplyEncoded<1,0,UE::Core::Private::TOverload<__UE::IoStore::FOnDemandContentInstaller::UpdateInstallRequestPriority_::__l2::<lambda_1>::operator()_::__l24::<lambda_1>,__UE::IoStore::FOnDemandContentInstaller::UpdateInstallRequestPriority_::__l2::<lambda_1>::operator()_::__l24::<lambda_2>_>,TVariant<void_*,UE::FIoHttpRequest>_&>
          (TOverload<_public:___cdecl__public:_void___cdecl_UE::IoStore::FOnDemandContentInstaller::UpdateInstallRequestPriority(TSharedPtr<UE::IoStore::FOnDemandInternalInstallRequest,1>,int)_::_2_::<lambda_1>::operator()(void)const_::_24_::<lambda_1>,_public:___cdecl__public:_void___cdecl_UE::IoStore::FOnDemandContentInstaller::UpdateInstallRequestPriority(TSharedPtr<UE::IoStore::FOnDemandInternalInstallRequest,1>,int)_::_2_::<lambda_1>::operator()(void)const_::_24_::<lambda_2>_>
           *param_1,TVariant<void_*,UE::FIoHttpRequest> *param_2)

{
  FIoHttpRequest::UpdatePriorty((FIoHttpRequest *)param_2,*(int *)param_1);
  return;
}

// VisitApplyEncoded<1,0,UE::Core::Private::TOverload<`UE::IoStore::FOnDemandContentInstaller::TryCancelHttpRequestsForInstallRequest'::__l27::<lambda_1>,`UE::IoStore::FOnDemandContentInstaller::TryCancelHttpRequestsForInstallRequest'::__l27::<lambda_2>_>,TVariant<void_*,UE::FIoHttpRequest>_&> @ 1445a1160

void __cdecl
UE::Core::Private::
VisitApplyEncoded<1,0,UE::Core::Private::TOverload<_UE::IoStore::FOnDemandContentInstaller::TryCancelHttpRequestsForInstallRequest_::__l27::<lambda_1>,_UE::IoStore::FOnDemandContentInstaller::TryCancelHttpRequestsForInstallRequest_::__l27::<lambda_2>_>,TVariant<void_*,UE::FIoHttpRequest>_&>
          (TOverload<_private:_void___cdecl_UE::IoStore::FOnDemandContentInstaller::TryCancelHttpRequestsForInstallRequest(UE::IoStore::FOnDemandContentInstaller::FRequest::FInstall_&,int_&)_::_27_::<lambda_1>,_private:_void___cdecl_UE::IoStore::FOnDemandContentInstaller::TryCancelHttpRequestsForInstallRequest(UE::IoStore::FOnDemandContentInstaller::FRequest::FInstall_&,int_&)_::_27_::<lambda_2>_>
           *param_1,TVariant<void_*,UE::FIoHttpRequest> *param_2)

{
  if (param_2->_padding_ != 0) {
    FIoHttpRequest::Cancel((FIoHttpRequest *)param_2);
    **(int **)param_1 = **(int **)param_1 + 1;
  }
  return;
}

// VisitApplyEncoded<2,0,`UE::IoStore::FOnDemandContentInstaller::ExecuteRequest'::__l2::FVisitor_&,TVariant<FEmptyVariantState,UE::IoStore::FOnDemandContentInstaller::FRequest::FInstall,UE::IoStore::FOnDemandContentInstaller::FRequest::FPurge,UE::IoStore::FOnDemandContentInstaller::FRequest::FDefrag,UE::IoStore::FOnDemandContentInstaller::FRequest::FVerify,UE::IoStore::FOnDemandContentInstaller::FRequest::FFlushLastAccess>_&> @ 1445a1190

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::
VisitApplyEncoded<2,0,_UE::IoStore::FOnDemandContentInstaller::ExecuteRequest_::__l2::FVisitor_&,TVariant<FEmptyVariantState,UE::IoStore::FOnDemandContentInstaller::FRequest::FInstall,UE::IoStore::FOnDemandContentInstaller::FRequest::FPurge,UE::IoStore::FOnDemandContentInstaller::FRequest::FDefrag,UE::IoStore::FOnDemandContentInstaller::FRequest::FVerify,UE::IoStore::FOnDemandContentInstaller::FRequest::FFlushLastAccess>_&>
          (FVisitor *param_1,
          TVariant<FEmptyVariantState,UE::IoStore::FOnDemandContentInstaller::FRequest::FInstall,UE::IoStore::FOnDemandContentInstaller::FRequest::FPurge,UE::IoStore::FOnDemandContentInstaller::FRequest::FDefrag,UE::IoStore::FOnDemandContentInstaller::FRequest::FVerify,UE::IoStore::FOnDemandContentInstaller::FRequest::FFlushLastAccess>
          *param_2)

{
  IoStore::FOnDemandContentInstaller::ExecutePurgeRequest(param_1->Installer,param_1->Request);
  return;
}

// VisitApplyEncoded<3,0,`UE::IoStore::FOnDemandContentInstaller::ExecuteRequest'::__l2::FVisitor_&,TVariant<FEmptyVariantState,UE::IoStore::FOnDemandContentInstaller::FRequest::FInstall,UE::IoStore::FOnDemandContentInstaller::FRequest::FPurge,UE::IoStore::FOnDemandContentInstaller::FRequest::FDefrag,UE::IoStore::FOnDemandContentInstaller::FRequest::FVerify,UE::IoStore::FOnDemandContentInstaller::FRequest::FFlushLastAccess>_&> @ 1445a11b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::
VisitApplyEncoded<3,0,_UE::IoStore::FOnDemandContentInstaller::ExecuteRequest_::__l2::FVisitor_&,TVariant<FEmptyVariantState,UE::IoStore::FOnDemandContentInstaller::FRequest::FInstall,UE::IoStore::FOnDemandContentInstaller::FRequest::FPurge,UE::IoStore::FOnDemandContentInstaller::FRequest::FDefrag,UE::IoStore::FOnDemandContentInstaller::FRequest::FVerify,UE::IoStore::FOnDemandContentInstaller::FRequest::FFlushLastAccess>_&>
          (FVisitor *param_1,
          TVariant<FEmptyVariantState,UE::IoStore::FOnDemandContentInstaller::FRequest::FInstall,UE::IoStore::FOnDemandContentInstaller::FRequest::FPurge,UE::IoStore::FOnDemandContentInstaller::FRequest::FDefrag,UE::IoStore::FOnDemandContentInstaller::FRequest::FVerify,UE::IoStore::FOnDemandContentInstaller::FRequest::FFlushLastAccess>
          *param_2)

{
  IoStore::FOnDemandContentInstaller::ExecuteDefragRequest(param_1->Installer,param_1->Request);
  return;
}

// VisitApplyEncoded<4,0,`UE::IoStore::FOnDemandContentInstaller::ExecuteRequest'::__l2::FVisitor_&,TVariant<FEmptyVariantState,UE::IoStore::FOnDemandContentInstaller::FRequest::FInstall,UE::IoStore::FOnDemandContentInstaller::FRequest::FPurge,UE::IoStore::FOnDemandContentInstaller::FRequest::FDefrag,UE::IoStore::FOnDemandContentInstaller::FRequest::FVerify,UE::IoStore::FOnDemandContentInstaller::FRequest::FFlushLastAccess>_&> @ 1445a11d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::
VisitApplyEncoded<4,0,_UE::IoStore::FOnDemandContentInstaller::ExecuteRequest_::__l2::FVisitor_&,TVariant<FEmptyVariantState,UE::IoStore::FOnDemandContentInstaller::FRequest::FInstall,UE::IoStore::FOnDemandContentInstaller::FRequest::FPurge,UE::IoStore::FOnDemandContentInstaller::FRequest::FDefrag,UE::IoStore::FOnDemandContentInstaller::FRequest::FVerify,UE::IoStore::FOnDemandContentInstaller::FRequest::FFlushLastAccess>_&>
          (FVisitor *param_1,
          TVariant<FEmptyVariantState,UE::IoStore::FOnDemandContentInstaller::FRequest::FInstall,UE::IoStore::FOnDemandContentInstaller::FRequest::FPurge,UE::IoStore::FOnDemandContentInstaller::FRequest::FDefrag,UE::IoStore::FOnDemandContentInstaller::FRequest::FVerify,UE::IoStore::FOnDemandContentInstaller::FRequest::FFlushLastAccess>
          *param_2)

{
  FScriptContainerElement *pFVar1;
  FRequest *pFVar2;
  FOnDemandContentInstaller *this;
  FOnDemandIoStore *pFVar3;
  IOnDemandInstallCache *pIVar4;
  code *pcVar5;
  longlong *plVar6;
  bool bVar7;
  FScriptContainerElement *pFVar8;
  TOptional<UE::UnifiedError::FError> *pTVar9;
  ulonglong uVar10;
  undefined8 uStack_28;
  longlong *plStack_20;
  char cStack_18;
  
  pFVar2 = param_1->Request;
  this = param_1->Installer;
  uVar10 = (ulonglong)(pFVar2->Variant).TypeIndex;
  if ((5 < uVar10) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((*(char *)((longlong)
                 &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::IoStore::FOnDemandContentInstaller::FRequest::FVerify,FEmptyVariantState,UE::IoStore::FOnDemandContentInstaller::FRequest::FInstall,UE::IoStore::FOnDemandContentInstaller::FRequest::FPurge,UE::IoStore::FOnDemandContentInstaller::FRequest::FDefrag,UE::IoStore::FOnDemandContentInstaller::FRequest::FVerify,UE::IoStore::FOnDemandContentInstaller::FRequest::FFlushLastAccess>::IsSame(unsigned___int64)'
                  ::__l2::bIsSameType + uVar10) == '\0') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Request.IsVerify()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandContentInstaller.cpp"
                         ,0x43d,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((this->RunningRequests).ArrayNum == 1) {
    pFVar8 = (this->RunningRequests).AllocatorInstance.Data;
    pFVar1 = pFVar8 + 8;
    for (; pFVar8 != pFVar1; pFVar8 = pFVar8 + 8) {
      if (*(FRequest **)pFVar8 == pFVar2) goto LAB_1445b0334;
    }
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("RunningRequests.Num() == 1 && RunningRequests.Contains(&Request)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandContentInstaller.cpp"
                     ,0x43e,L"");
  if (bVar7) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_1445b0334:
  if (4 < (byte)LogIoStoreOnDemand._0_1_) {
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
  }
  if (pFVar2->bCancelled == false) {
    pFVar3 = this->IoStore;
    if (((pFVar3->InstallCache).Object == (IOnDemandInstallCache *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pIVar4 = (pFVar3->InstallCache).Object;
    pTVar9 = (TOptional<UE::UnifiedError::FError> *)
             (**(code **)((longlong)*pIVar4 + 0x98))(pIVar4,&uStack_28);
    TOptional<UE::UnifiedError::FError>::operator=(&(pFVar2->Result).Error,pTVar9);
    plVar6 = plStack_20;
    if ((cStack_18 != '\0') && (uStack_28 = 0, plStack_20 != (longlong *)0x0)) {
      plStack_20 = (longlong *)0x0;
      (**(code **)(*plVar6 + 0x10))();
      if (plStack_20 != (longlong *)0x0) {
        (**(code **)(*plStack_20 + 0x10))();
      }
    }
  }
  IoStore::FOnDemandContentInstaller::CompleteVerifyRequest(this,pFVar2);
  return;
}

// VisitApplyEncoded<5,0,`UE::IoStore::FOnDemandContentInstaller::ExecuteRequest'::__l2::FVisitor_&,TVariant<FEmptyVariantState,UE::IoStore::FOnDemandContentInstaller::FRequest::FInstall,UE::IoStore::FOnDemandContentInstaller::FRequest::FPurge,UE::IoStore::FOnDemandContentInstaller::FRequest::FDefrag,UE::IoStore::FOnDemandContentInstaller::FRequest::FVerify,UE::IoStore::FOnDemandContentInstaller::FRequest::FFlushLastAccess>_&> @ 1445a11e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::
VisitApplyEncoded<5,0,_UE::IoStore::FOnDemandContentInstaller::ExecuteRequest_::__l2::FVisitor_&,TVariant<FEmptyVariantState,UE::IoStore::FOnDemandContentInstaller::FRequest::FInstall,UE::IoStore::FOnDemandContentInstaller::FRequest::FPurge,UE::IoStore::FOnDemandContentInstaller::FRequest::FDefrag,UE::IoStore::FOnDemandContentInstaller::FRequest::FVerify,UE::IoStore::FOnDemandContentInstaller::FRequest::FFlushLastAccess>_&>
          (FVisitor *param_1,
          TVariant<FEmptyVariantState,UE::IoStore::FOnDemandContentInstaller::FRequest::FInstall,UE::IoStore::FOnDemandContentInstaller::FRequest::FPurge,UE::IoStore::FOnDemandContentInstaller::FRequest::FDefrag,UE::IoStore::FOnDemandContentInstaller::FRequest::FVerify,UE::IoStore::FOnDemandContentInstaller::FRequest::FFlushLastAccess>
          *param_2)

{
  FScriptContainerElement *pFVar1;
  FRequest *pFVar2;
  FOnDemandContentInstaller *this;
  FOnDemandIoStore *pFVar3;
  IOnDemandInstallCache *pIVar4;
  code *pcVar5;
  longlong *plVar6;
  bool bVar7;
  FScriptContainerElement *pFVar8;
  TOptional<UE::UnifiedError::FError> *pTVar9;
  ulonglong uVar10;
  undefined8 uStack_28;
  longlong *plStack_20;
  char cStack_18;
  
  pFVar2 = param_1->Request;
  this = param_1->Installer;
  uVar10 = (ulonglong)(pFVar2->Variant).TypeIndex;
  if ((5 < uVar10) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((*(char *)((longlong)
                 &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::IoStore::FOnDemandContentInstaller::FRequest::FFlushLastAccess,FEmptyVariantState,UE::IoStore::FOnDemandContentInstaller::FRequest::FInstall,UE::IoStore::FOnDemandContentInstaller::FRequest::FPurge,UE::IoStore::FOnDemandContentInstaller::FRequest::FDefrag,UE::IoStore::FOnDemandContentInstaller::FRequest::FVerify,UE::IoStore::FOnDemandContentInstaller::FRequest::FFlushLastAccess>::IsSame(unsigned___int64)'
                  ::__l2::bIsSameType + uVar10) == '\0') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Request.IsFlushLastAccess()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandContentInstaller.cpp"
                         ,0x44c,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((this->RunningRequests).ArrayNum == 1) {
    pFVar8 = (this->RunningRequests).AllocatorInstance.Data;
    pFVar1 = pFVar8 + 8;
    for (; pFVar8 != pFVar1; pFVar8 = pFVar8 + 8) {
      if (*(FRequest **)pFVar8 == pFVar2) goto LAB_1445b01a4;
    }
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("RunningRequests.Num() == 1 && RunningRequests.Contains(&Request)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandContentInstaller.cpp"
                     ,0x44d,L"");
  if (bVar7) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_1445b01a4:
  if (4 < (byte)LogIoStoreOnDemand._0_1_) {
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
  }
  if (pFVar2->bCancelled == false) {
    pFVar3 = this->IoStore;
    if (((pFVar3->InstallCache).Object == (IOnDemandInstallCache *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pIVar4 = (pFVar3->InstallCache).Object;
    pTVar9 = (TOptional<UE::UnifiedError::FError> *)
             (**(code **)((longlong)*pIVar4 + 0xa8))(pIVar4,&uStack_28);
    TOptional<UE::UnifiedError::FError>::operator=(&(pFVar2->Result).Error,pTVar9);
    plVar6 = plStack_20;
    if ((cStack_18 != '\0') && (uStack_28 = 0, plStack_20 != (longlong *)0x0)) {
      plStack_20 = (longlong *)0x0;
      (**(code **)(*plVar6 + 0x10))();
      if (plStack_20 != (longlong *)0x0) {
        (**(code **)(*plStack_20 + 0x10))();
      }
    }
  }
  IoStore::FOnDemandContentInstaller::CompleteFlushLastAccessRequest(this,pFVar2);
  return;
}

// VisitApplyEncoded<0,0,`UE::IoStore::FOnDemandContentInstaller::ExecuteRequest'::__l2::FVisitor_&,TVariant<FEmptyVariantState,UE::IoStore::FOnDemandContentInstaller::FRequest::FInstall,UE::IoStore::FOnDemandContentInstaller::FRequest::FPurge,UE::IoStore::FOnDemandContentInstaller::FRequest::FDefrag,UE::IoStore::FOnDemandContentInstaller::FRequest::FVerify,UE::IoStore::FOnDemandContentInstaller::FRequest::FFlushLastAccess>_&> @ 1445a11f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::
VisitApplyEncoded<0,0,_UE::IoStore::FOnDemandContentInstaller::ExecuteRequest_::__l2::FVisitor_&,TVariant<FEmptyVariantState,UE::IoStore::FOnDemandContentInstaller::FRequest::FInstall,UE::IoStore::FOnDemandContentInstaller::FRequest::FPurge,UE::IoStore::FOnDemandContentInstaller::FRequest::FDefrag,UE::IoStore::FOnDemandContentInstaller::FRequest::FVerify,UE::IoStore::FOnDemandContentInstaller::FRequest::FFlushLastAccess>_&>
          (FVisitor *param_1,
          TVariant<FEmptyVariantState,UE::IoStore::FOnDemandContentInstaller::FRequest::FInstall,UE::IoStore::FOnDemandContentInstaller::FRequest::FPurge,UE::IoStore::FOnDemandContentInstaller::FRequest::FDefrag,UE::IoStore::FOnDemandContentInstaller::FRequest::FVerify,UE::IoStore::FOnDemandContentInstaller::FRequest::FFlushLastAccess>
          *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<5765499935633965661>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandContentInstaller.cpp"
                     ,0x25d,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// VisitApplyEncoded<0,0,UE::Core::Private::TOverload<``UE::IoStore::FOnDemandContentInstaller::UpdateInstallRequestPriority'::__l2::<lambda_1>::operator()'::__l24::<lambda_1>,``UE::IoStore::FOnDemandContentInstaller::UpdateInstallRequestPriority'::__l2::<lambda_1>::operator()'::__l24::<lambda_2>_>,TVariant<void_*,UE::FIoHttpRequest>_&> @ 1445a1230

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::
VisitApplyEncoded<0,0,UE::Core::Private::TOverload<__UE::IoStore::FOnDemandContentInstaller::UpdateInstallRequestPriority_::__l2::<lambda_1>::operator()_::__l24::<lambda_1>,__UE::IoStore::FOnDemandContentInstaller::UpdateInstallRequestPriority_::__l2::<lambda_1>::operator()_::__l24::<lambda_2>_>,TVariant<void_*,UE::FIoHttpRequest>_&>
          (TOverload<_public:___cdecl__public:_void___cdecl_UE::IoStore::FOnDemandContentInstaller::UpdateInstallRequestPriority(TSharedPtr<UE::IoStore::FOnDemandInternalInstallRequest,1>,int)_::_2_::<lambda_1>::operator()(void)const_::_24_::<lambda_1>,_public:___cdecl__public:_void___cdecl_UE::IoStore::FOnDemandContentInstaller::UpdateInstallRequestPriority(TSharedPtr<UE::IoStore::FOnDemandInternalInstallRequest,1>,int)_::_2_::<lambda_1>::operator()(void)const_::_24_::<lambda_2>_>
           *param_1,TVariant<void_*,UE::FIoHttpRequest> *param_2)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  
  pvVar1 = (void *)param_2->_padding_;
  if (*(longlong *)(*(longlong *)&param_1->field_0x8 + 8) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HttpClient != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandContentInstaller.cpp"
                       ,0x1d8,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (pvVar1 != (void *)0x0) {
    IoStore::FOnDemandHttpThread::ReprioritizeRequest
              (*(FOnDemandHttpThread **)(*(longlong *)&param_1->field_0x8 + 8),pvVar1,
               *(int *)&param_1->field_0x10);
  }
  return;
}

// VisitApplyEncoded<0,0,UE::Core::Private::TOverload<`UE::IoStore::FOnDemandContentInstaller::TryCancelHttpRequestsForInstallRequest'::__l27::<lambda_1>,`UE::IoStore::FOnDemandContentInstaller::TryCancelHttpRequestsForInstallRequest'::__l27::<lambda_2>_>,TVariant<void_*,UE::FIoHttpRequest>_&> @ 1445a12a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::
VisitApplyEncoded<0,0,UE::Core::Private::TOverload<_UE::IoStore::FOnDemandContentInstaller::TryCancelHttpRequestsForInstallRequest_::__l27::<lambda_1>,_UE::IoStore::FOnDemandContentInstaller::TryCancelHttpRequestsForInstallRequest_::__l27::<lambda_2>_>,TVariant<void_*,UE::FIoHttpRequest>_&>
          (TOverload<_private:_void___cdecl_UE::IoStore::FOnDemandContentInstaller::TryCancelHttpRequestsForInstallRequest(UE::IoStore::FOnDemandContentInstaller::FRequest::FInstall_&,int_&)_::_27_::<lambda_1>,_private:_void___cdecl_UE::IoStore::FOnDemandContentInstaller::TryCancelHttpRequestsForInstallRequest(UE::IoStore::FOnDemandContentInstaller::FRequest::FInstall_&,int_&)_::_27_::<lambda_2>_>
           *param_1,TVariant<void_*,UE::FIoHttpRequest> *param_2)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  
  lVar1 = param_2->_padding_;
  if (*(longlong *)(*(longlong *)&param_1->field_0x8 + 8) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("HttpClient != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandContentInstaller.cpp"
                       ,0x531,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(*(longlong *)&param_1->field_0x8 + 8);
    *(undefined1 *)(lVar1 + 99) = 1;
    if (IoStore::GIaxHttpEnableInflightCancellation != false) {
      IoStore::FMultiEndpointHttpClient::CancelRequest
                (*(FMultiEndpointHttpClient **)(lVar2 + 0x60),*(uint *)(lVar1 + 8));
    }
    **(int **)&param_1->field_0x10 = **(int **)&param_1->field_0x10 + 1;
  }
  return;
}

// WriteToAnsiString<64,TStringView<char>,unsigned___int64,TStringView<char>,unsigned___int64> @ 1445a13c0

TStringBuilderWithBuffer<char,64> * __cdecl
WriteToAnsiString<64,TStringView<char>,unsigned___int64,TStringView<char>,unsigned___int64>
          (TStringBuilderWithBuffer<char,64> *__return_storage_ptr__,TStringView<char> *param_1,
          ulong64 *param_2,TStringView<char> *param_3,ulong64 *param_4)

{
  TStringBuilderBase<char> *pTVar1;
  
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  pTVar1 = operator<<<char,TStringView<char>_>
                     ((TStringBuilderBase<char> *)__return_storage_ptr__,param_1);
  pTVar1 = TStringBuilderBase<char>::AppendfImpl(pTVar1,"%llu");
  pTVar1 = operator<<<char,TStringView<char>_>(pTVar1,param_3);
  TStringBuilderBase<char>::AppendfImpl(pTVar1,"%llu");
  return __return_storage_ptr__;
}

// WriteToString<256,wchar_t_const_(&)[33],FIoChunkId_&,wchar_t_const_(&)[13],FIoHash_const_&,wchar_t_const_(&)[2]> @ 1445a1450

TStringBuilderWithBuffer<wchar_t,256> * __cdecl
WriteToString<256,wchar_t_const_(&)[33],FIoChunkId_&,wchar_t_const_(&)[13],FIoHash_const_&,wchar_t_const_(&)[2]>
          (TStringBuilderWithBuffer<wchar_t,256> *__return_storage_ptr__,wchar_t (*param_1) [33],
          FIoChunkId *param_2,wchar_t (*param_3) [13],FIoHash *param_4,wchar_t (*param_5) [2])

{
  int iVar1;
  TStringBuilderBase<wchar_t> *pTVar3;
  int iVar4;
  TArrayView<unsigned_char_const_,int> local_18;
  size_t sVar2;
  
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  iVar4 = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  iVar1 = 0;
  if (param_1 != (wchar_t (*) [33])0x0) {
    sVar2 = wcslen(*param_1);
    iVar1 = (int)sVar2;
  }
  pTVar3 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                     ((TStringBuilderBase<wchar_t> *)__return_storage_ptr__,*param_1,iVar1);
  local_18.ArrayNum = 0xc;
  local_18.DataPtr = param_2->Id;
  UE::String::BytesToHexLower(&local_18,pTVar3);
  iVar1 = 0;
  if (param_3 != (wchar_t (*) [13])0x0) {
    sVar2 = wcslen(*param_3);
    iVar1 = (int)sVar2;
  }
  pTVar3 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar3,*param_3,iVar1);
  local_18.ArrayNum = 0x14;
  local_18.DataPtr = param_4->Hash;
  UE::String::BytesToHexLower(&local_18,pTVar3);
  if (param_5 != (wchar_t (*) [2])0x0) {
    sVar2 = wcslen(*param_5);
    iVar4 = (int)sVar2;
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar3,*param_5,iVar4);
  return __return_storage_ptr__;
}

// WriteToString<512,TStringView<char>,FAnsiString_const_&> @ 1445a1570

TStringBuilderWithBuffer<wchar_t,512> * __cdecl
WriteToString<512,TStringView<char>,FAnsiString_const_&>
          (TStringBuilderWithBuffer<wchar_t,512> *__return_storage_ptr__,TStringView<char> *param_1,
          FAnsiString *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  char *pcVar3;
  wchar_t *pwVar4;
  int iVar5;
  TStringBuilderWithBuffer<wchar_t,512> *pTVar6;
  
  pwVar4 = __return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)pwVar4;
  pTVar6 = __return_storage_ptr__ + 1;
  __return_storage_ptr__->_padding_ = (longlong)pwVar4;
  __return_storage_ptr__->_padding_ = (longlong)pTVar6;
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  pcVar3 = param_1->DataPtr;
  iVar5 = (int)*(undefined8 *)&param_1->Size;
  if (pTVar6 < (TStringBuilderWithBuffer<wchar_t,512> *)(pwVar4 + iVar5)) {
    TStringBuilderBase<wchar_t>::Extend
              ((TStringBuilderBase<wchar_t> *)__return_storage_ptr__,(longlong)iVar5);
    pTVar6 = (TStringBuilderWithBuffer<wchar_t,512> *)__return_storage_ptr__->_padding_;
    pwVar4 = (wchar_t *)__return_storage_ptr__->_padding_;
  }
  if (iVar5 != 0) {
    pwVar4 = FGenericPlatformString::Convert<char,wchar_t>(pwVar4,iVar5,pcVar3,iVar5);
    __return_storage_ptr__->_padding_ = (longlong)pwVar4;
    pTVar6 = (TStringBuilderWithBuffer<wchar_t,512> *)__return_storage_ptr__->_padding_;
  }
  iVar1 = (param_2->Data).ArrayNum;
  pFVar2 = (param_2->Data).AllocatorInstance.Data;
  iVar5 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar5 = 0;
  }
  if (pTVar6 < (TStringBuilderWithBuffer<wchar_t,512> *)(pwVar4 + iVar5)) {
    TStringBuilderBase<wchar_t>::Extend
              ((TStringBuilderBase<wchar_t> *)__return_storage_ptr__,(longlong)iVar5);
  }
  if (iVar5 != 0) {
    pwVar4 = FGenericPlatformString::Convert<char,wchar_t>
                       ((wchar_t *)__return_storage_ptr__->_padding_,iVar5,(char *)pFVar2,iVar5);
    __return_storage_ptr__->_padding_ = (longlong)pwVar4;
  }
  return __return_storage_ptr__;
}

// WriteToString<128,wchar_t_const_*_&,wchar_t_const_(&)[16]> @ 1445a1650

TStringBuilderWithBuffer<wchar_t,128> * __cdecl
WriteToString<128,wchar_t_const_*_&,wchar_t_const_(&)[16]>
          (TStringBuilderWithBuffer<wchar_t,128> *__return_storage_ptr__,wchar_t **param_1,
          wchar_t (*param_2) [16])

{
  wchar_t *_Str;
  int iVar1;
  TStringBuilderBase<wchar_t> *this;
  int iVar3;
  size_t sVar2;
  
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  iVar3 = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  iVar1 = 0;
  _Str = *param_1;
  if (_Str != (wchar_t *)0x0) {
    sVar2 = wcslen(_Str);
    iVar1 = (int)sVar2;
  }
  this = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                   ((TStringBuilderBase<wchar_t> *)__return_storage_ptr__,_Str,iVar1);
  if (param_2 != (wchar_t (*) [16])0x0) {
    sVar2 = wcslen(*param_2);
    iVar3 = (int)sVar2;
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(this,*param_2,iVar3);
  return __return_storage_ptr__;
}

// WriteToString<128,wchar_t_const_*_&,char_const_(&)[17]> @ 1445a16f0

TStringBuilderWithBuffer<wchar_t,128> * __cdecl
WriteToString<128,wchar_t_const_*_&,char_const_(&)[17]>
          (TStringBuilderWithBuffer<wchar_t,128> *__return_storage_ptr__,wchar_t **param_1,
          char (*param_2) [17])

{
  int iVar1;
  TStringBuilderBase<wchar_t> *this;
  wchar_t *pwVar3;
  int iVar4;
  size_t sVar2;
  
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  iVar4 = 0;
  pwVar3 = *param_1;
  iVar1 = iVar4;
  if (pwVar3 != (wchar_t *)0x0) {
    sVar2 = wcslen(pwVar3);
    iVar1 = (int)sVar2;
  }
  this = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                   ((TStringBuilderBase<wchar_t> *)__return_storage_ptr__,pwVar3,iVar1);
  if (param_2 != (char (*) [17])0x0) {
    sVar2 = strlen(*param_2);
    iVar4 = (int)sVar2;
  }
  if (this->End < this->CurPos + iVar4) {
    TStringBuilderBase<wchar_t>::Extend(this,(longlong)iVar4);
  }
  if (iVar4 != 0) {
    pwVar3 = FGenericPlatformString::Convert<char,wchar_t>(this->CurPos,iVar4,*param_2,iVar4);
    this->CurPos = pwVar3;
  }
  return __return_storage_ptr__;
}

// WriteToString<128,wchar_t_const_*_&,wchar_t_const_(&)[17]> @ 1445a17b0

TStringBuilderWithBuffer<wchar_t,128> * __cdecl
WriteToString<128,wchar_t_const_*_&,wchar_t_const_(&)[17]>
          (TStringBuilderWithBuffer<wchar_t,128> *__return_storage_ptr__,wchar_t **param_1,
          wchar_t (*param_2) [17])

{
  wchar_t *_Str;
  int iVar1;
  TStringBuilderBase<wchar_t> *this;
  int iVar3;
  size_t sVar2;
  
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  iVar3 = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  iVar1 = 0;
  _Str = *param_1;
  if (_Str != (wchar_t *)0x0) {
    sVar2 = wcslen(_Str);
    iVar1 = (int)sVar2;
  }
  this = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                   ((TStringBuilderBase<wchar_t> *)__return_storage_ptr__,_Str,iVar1);
  if (param_2 != (wchar_t (*) [17])0x0) {
    sVar2 = wcslen(*param_2);
    iVar3 = (int)sVar2;
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(this,*param_2,iVar3);
  return __return_storage_ptr__;
}

// WriteToString<128,wchar_t_const_*_&,wchar_t_const_(&)[20]> @ 1445a1850

TStringBuilderWithBuffer<wchar_t,128> * __cdecl
WriteToString<128,wchar_t_const_*_&,wchar_t_const_(&)[20]>
          (TStringBuilderWithBuffer<wchar_t,128> *__return_storage_ptr__,wchar_t **param_1,
          wchar_t (*param_2) [20])

{
  wchar_t *_Str;
  int iVar1;
  TStringBuilderBase<wchar_t> *this;
  int iVar3;
  size_t sVar2;
  
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  iVar3 = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  iVar1 = 0;
  _Str = *param_1;
  if (_Str != (wchar_t *)0x0) {
    sVar2 = wcslen(_Str);
    iVar1 = (int)sVar2;
  }
  this = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                   ((TStringBuilderBase<wchar_t> *)__return_storage_ptr__,_Str,iVar1);
  if (param_2 != (wchar_t (*) [20])0x0) {
    sVar2 = wcslen(*param_2);
    iVar3 = (int)sVar2;
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(this,*param_2,iVar3);
  return __return_storage_ptr__;
}

// WriteToString<128,wchar_t_const_*_&,wchar_t_const_(&)[13]> @ 1445a18f0

TStringBuilderWithBuffer<wchar_t,128> * __cdecl
WriteToString<128,wchar_t_const_*_&,wchar_t_const_(&)[13]>
          (TStringBuilderWithBuffer<wchar_t,128> *__return_storage_ptr__,wchar_t **param_1,
          wchar_t (*param_2) [13])

{
  wchar_t *_Str;
  int iVar1;
  TStringBuilderBase<wchar_t> *this;
  int iVar3;
  size_t sVar2;
  
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  iVar3 = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  iVar1 = 0;
  _Str = *param_1;
  if (_Str != (wchar_t *)0x0) {
    sVar2 = wcslen(_Str);
    iVar1 = (int)sVar2;
  }
  this = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                   ((TStringBuilderBase<wchar_t> *)__return_storage_ptr__,_Str,iVar1);
  if (param_2 != (wchar_t (*) [13])0x0) {
    sVar2 = wcslen(*param_2);
    iVar3 = (int)sVar2;
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(this,*param_2,iVar3);
  return __return_storage_ptr__;
}

// WriteToString<128,wchar_t_const_*_&,char_const_(&)[15]> @ 1445a1990

TStringBuilderWithBuffer<wchar_t,128> * __cdecl
WriteToString<128,wchar_t_const_*_&,char_const_(&)[15]>
          (TStringBuilderWithBuffer<wchar_t,128> *__return_storage_ptr__,wchar_t **param_1,
          char (*param_2) [15])

{
  int iVar1;
  TStringBuilderBase<wchar_t> *this;
  wchar_t *pwVar3;
  int iVar4;
  size_t sVar2;
  
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  iVar4 = 0;
  pwVar3 = *param_1;
  iVar1 = iVar4;
  if (pwVar3 != (wchar_t *)0x0) {
    sVar2 = wcslen(pwVar3);
    iVar1 = (int)sVar2;
  }
  this = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                   ((TStringBuilderBase<wchar_t> *)__return_storage_ptr__,pwVar3,iVar1);
  if (param_2 != (char (*) [15])0x0) {
    sVar2 = strlen(*param_2);
    iVar4 = (int)sVar2;
  }
  if (this->End < this->CurPos + iVar4) {
    TStringBuilderBase<wchar_t>::Extend(this,(longlong)iVar4);
  }
  if (iVar4 != 0) {
    pwVar3 = FGenericPlatformString::Convert<char,wchar_t>(this->CurPos,iVar4,*param_2,iVar4);
    this->CurPos = pwVar3;
  }
  return __return_storage_ptr__;
}

// WriteToString<128,TStringView<wchar_t>_const_&> @ 1445a1a50

TStringBuilderWithBuffer<wchar_t,128> * __cdecl
WriteToString<128,TStringView<wchar_t>_const_&>
          (TStringBuilderWithBuffer<wchar_t,128> *__return_storage_ptr__,
          TStringView<wchar_t> *param_1)

{
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
            ((TStringBuilderBase<wchar_t> *)__return_storage_ptr__,param_1->DataPtr,
             (int)*(undefined8 *)&param_1->Size);
  return __return_storage_ptr__;
}

// _Atomic_address_as<char,std::_Atomic_padded<enum_UE::IoStore::EOnDemandPackageStoreUpdateMode>_> @ 1445a1a90

char * __cdecl
std::
_Atomic_address_as<char,std::_Atomic_padded<enum_UE::IoStore::EOnDemandPackageStoreUpdateMode>_>
          (_Atomic_padded<UE::IoStore::EOnDemandPackageStoreUpdateMode> *param_1)

{
  return (char *)param_1;
}

// _Atomic_address_as<char,std::_Atomic_padded<enum_UE::IoStore::FOnDemandRequest::EStatus>_> @ 1445a1aa0

char * __cdecl
std::_Atomic_address_as<char,std::_Atomic_padded<enum_UE::IoStore::FOnDemandRequest::EStatus>_>
          (_Atomic_padded<UE::IoStore::FOnDemandRequest::EStatus> *param_1)

{
  return (char *)param_1;
}

// _Atomic_address_as<int,std::_Atomic_padded<UE::IoStore::FCasBlockId>_> @ 1445a1ab0

int * __cdecl
std::_Atomic_address_as<int,std::_Atomic_padded<UE::IoStore::FCasBlockId>_>
          (_Atomic_padded<UE::IoStore::FCasBlockId> *param_1)

{
  return (int *)param_1;
}

// _Atomic_address_as<int,std::_Atomic_padded<UE::IoStore::FCasBlockId>_> @ 1445a1ac0

int * __cdecl
std::_Atomic_address_as<int,std::_Atomic_padded<UE::IoStore::FCasBlockId>_>
          (_Atomic_padded<UE::IoStore::FCasBlockId> *param_1)

{
  return (int *)param_1;
}

// _Atomic_address_as<long,std::_Atomic_padded<UE::IoStore::FCasBlockId>_> @ 1445a1ad0

long * __cdecl
std::_Atomic_address_as<long,std::_Atomic_padded<UE::IoStore::FCasBlockId>_>
          (_Atomic_padded<UE::IoStore::FCasBlockId> *param_1)

{
  return (long *)param_1;
}

// _Atomic_reinterpret_as<char,enum_UE::IoStore::EOnDemandPackageStoreUpdateMode> @ 1445a1ae0

char __cdecl
std::_Atomic_reinterpret_as<char,enum_UE::IoStore::EOnDemandPackageStoreUpdateMode>
          (EOnDemandPackageStoreUpdateMode *param_1)

{
  return *param_1;
}

// _Atomic_reinterpret_as<char,enum_UE::IoStore::FOnDemandRequest::EStatus> @ 1445a1af0

char __cdecl
std::_Atomic_reinterpret_as<char,enum_UE::IoStore::FOnDemandRequest::EStatus>(EStatus *param_1)

{
  return *param_1;
}

// _Atomic_reinterpret_as<int,UE::IoStore::FCasBlockId> @ 1445a1b00

int __cdecl std::_Atomic_reinterpret_as<int,UE::IoStore::FCasBlockId>(FCasBlockId *param_1)

{
  return param_1->Id;
}

// _Atomic_reinterpret_as<long,UE::IoStore::FCasBlockId> @ 1445a1b10

long __cdecl std::_Atomic_reinterpret_as<long,UE::IoStore::FCasBlockId>(FCasBlockId *param_1)

{
  return param_1->Id;
}

// ~TFunction_OwnedObject<`ExecuteOnGameThread<`UE::IoStore::FOnDemandIoStore::CompleteMountRequest'::__l8::<lambda_1>_>'::__l2::<lambda_1>,1,1> @ 1445a6b40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`UE::IoStore::FOnDemandIoStore::CompleteMountRequest'::__l8::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_ExecuteOnGameThread<_UE::IoStore::FOnDemandIoStore::CompleteMountRequest_::__l8::<lambda_1>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`ExecuteOnGameThread<`UE::IoStore::FOnDemandIoStore::CompleteMountRequest'::`8'::<lambda_1>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  FIoStatus::~FIoStatus((FIoStatus *)((longlong)this + 0x50));
  if (*(void **)((longlong)this + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x40));
  }
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x0001445a6b88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`ExecuteOnGameThread<`UE::IoStore::FOnDemandContentInstaller::CompleteDefragRequest'::__l34::<lambda_1>_>'::__l2::<lambda_1>,1,1> @ 1445a6ba0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`UE::IoStore::FOnDemandContentInstaller::CompleteDefragRequest'::__l34::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_ExecuteOnGameThread<_UE::IoStore::FOnDemandContentInstaller::CompleteDefragRequest_::__l34::<lambda_1>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`ExecuteOnGameThread<`UE::IoStore::FOnDemandContentInstaller::CompleteDefragRequest'::`34'::<lambda_1>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(char *)((longlong)this + 0x58) != '\0') {
    *(undefined8 *)((longlong)this + 0x48) = 0;
    plVar1 = *(longlong **)((longlong)this + 0x50);
    if (plVar1 != (longlong *)0x0) {
      *(undefined8 *)((longlong)this + 0x50) = 0;
      (**(code **)(*plVar1 + 0x10))();
    }
    if (*(longlong **)((longlong)this + 0x50) != (longlong *)0x0) {
      (**(code **)(**(longlong **)((longlong)this + 0x50) + 0x10))();
    }
  }
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x0001445a6bff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`ExecuteOnGameThread<`UE::IoStore::FOnDemandContentInstaller::CompletePurgeRequest'::__l34::<lambda_1>_>'::__l2::<lambda_1>,1,1> @ 1445a6c10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`UE::IoStore::FOnDemandContentInstaller::CompletePurgeRequest'::__l34::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_ExecuteOnGameThread<_UE::IoStore::FOnDemandContentInstaller::CompletePurgeRequest_::__l34::<lambda_1>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`ExecuteOnGameThread<`UE::IoStore::FOnDemandContentInstaller::CompletePurgeRequest'::`34'::<lambda_1>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(char *)((longlong)this + 0x58) != '\0') {
    *(undefined8 *)((longlong)this + 0x48) = 0;
    plVar1 = *(longlong **)((longlong)this + 0x50);
    if (plVar1 != (longlong *)0x0) {
      *(undefined8 *)((longlong)this + 0x50) = 0;
      (**(code **)(*plVar1 + 0x10))();
    }
    if (*(longlong **)((longlong)this + 0x50) != (longlong *)0x0) {
      (**(code **)(**(longlong **)((longlong)this + 0x50) + 0x10))();
    }
  }
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x0001445a6c6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`ExecuteOnGameThread<`UE::IoStore::FOnDemandContentInstaller::NotifyInstallProgress'::__l11::<lambda_1>_>'::__l2::<lambda_1>,1,1> @ 1445a6c80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`UE::IoStore::FOnDemandContentInstaller::NotifyInstallProgress'::__l11::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_ExecuteOnGameThread<_UE::IoStore::FOnDemandContentInstaller::NotifyInstallProgress_::__l11::<lambda_1>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`ExecuteOnGameThread<`UE::IoStore::FOnDemandContentInstaller::NotifyInstallProgress'::`11'::<lambda_1>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`ExecuteOnGameThread<`UE::IoStore::FOnDemandContentInstaller::CompleteInstallRequest'::__l60::<lambda_2>_>'::__l2::<lambda_1>,1,1> @ 1445a6ca0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`UE::IoStore::FOnDemandContentInstaller::CompleteInstallRequest'::__l60::<lambda_2>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_ExecuteOnGameThread<_UE::IoStore::FOnDemandContentInstaller::CompleteInstallRequest_::__l60::<lambda_2>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`ExecuteOnGameThread<`UE::IoStore::FOnDemandContentInstaller::CompleteInstallRequest'::`60'::<lambda_2>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(char *)((longlong)this + 0x48) != '\0') {
    *(undefined8 *)((longlong)this + 0x38) = 0;
    plVar1 = *(longlong **)((longlong)this + 0x40);
    if (plVar1 != (longlong *)0x0) {
      *(undefined8 *)((longlong)this + 0x40) = 0;
      (**(code **)(*plVar1 + 0x10))();
    }
    if (*(longlong **)((longlong)this + 0x40) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001445a6ce3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)((longlong)this + 0x40) + 0x10))();
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`UE::IoStore::FCasSnapshot::FromJournal'::__l2::<lambda_1>,0,1> @ 1445a6d00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::FCasSnapshot::FromJournal'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_UE::IoStore::FCasSnapshot::FromJournal_::__l2::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::IoStore::FCasSnapshot::FromJournal'::`2'::<lambda_1>,0,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::IoStore::FOnDemandIoBackend::IssueHttpRequest'::__l2::<lambda_1>,1,0> @ 1445a6d20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::FOnDemandIoBackend::IssueHttpRequest'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_UE::IoStore::FOnDemandIoBackend::IssueHttpRequest_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::IoStore::FOnDemandIoBackend::IssueHttpRequest'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::IoStore::FMultiEndpointHttpClient::IssueRequest'::__l2::<lambda_1>,0,1> @ 1445a6d40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::FMultiEndpointHttpClient::IssueRequest'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_UE::IoStore::FMultiEndpointHttpClient::IssueRequest_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::IoStore::FMultiEndpointHttpClient::IssueRequest'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  IoStore::FMultiEndpointHttpClient::FRequest::~FRequest((FRequest *)((longlong)this + 0x20));
  return;
}

// ~TFunction_OwnedObject<`UE::IoStore::FDistributionEndpoints::ResolveEndpoints'::__l2::<lambda_1>,0,1> @ 1445a6d60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::FDistributionEndpoints::ResolveEndpoints'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_UE::IoStore::FDistributionEndpoints::ResolveEndpoints_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::IoStore::FDistributionEndpoints::ResolveEndpoints'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  `UE::IoStore::FDistributionEndpoints::ResolveEndpoints'::__l2::<lambda_1>::~<lambda_1>
            ((void *)((longlong)this + 8));
  return;
}

// ~TFunction_OwnedObject<`UE::IoStore::FOnDemandDebugCommands::RunRequestTest'::__l2::<lambda_1>,0,0> @ 1445a6d80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::FOnDemandDebugCommands::RunRequestTest'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UE::IoStore::FOnDemandDebugCommands::RunRequestTest_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::IoStore::FOnDemandDebugCommands::RunRequestTest'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::IoStore::TrackCdnCacheStats'::__l2::<lambda_1>,0,0> @ 1445a6da0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::TrackCdnCacheStats'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UE::IoStore::TrackCdnCacheStats_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::IoStore::TrackCdnCacheStats'::`2'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::IoStore::FHttpIoDispatcherBackend::ResolveIoRequests'::__l4::<lambda_1>,1,0> @ 1445a6dc0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::FHttpIoDispatcherBackend::ResolveIoRequests'::__l4::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_UE::IoStore::FHttpIoDispatcherBackend::ResolveIoRequests_::__l4::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::IoStore::FHttpIoDispatcherBackend::ResolveIoRequests'::`4'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::IoStore::FMultiEndpointHttpClient::Get'::__l7::<lambda_1>,0,1> @ 1445a6de0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::FMultiEndpointHttpClient::Get'::__l7::<lambda_1>,0,1>::
~TFunction_OwnedObject<_UE::IoStore::FMultiEndpointHttpClient::Get_::__l7::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::IoStore::FMultiEndpointHttpClient::Get'::`7'::<lambda_1>,0,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<``UE::IoStore::FMultiEndpointHttpClient::IssueRequest'::__l2::<lambda_1>::operator()'::__l8::<lambda_1>,0,0> @ 1445a6e00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UE::IoStore::FMultiEndpointHttpClient::IssueRequest'::__l2::<lambda_1>::operator()'::__l8::<lambda_1>,0,0>
::
~TFunction_OwnedObject<__UE::IoStore::FMultiEndpointHttpClient::IssueRequest_::__l2::<lambda_1>::operator()_::__l8::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``UE::IoStore::FMultiEndpointHttpClient::IssueRequest'::`2'::<lambda_1>::operator()'::`8'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::IoStore::HttpIoDispatcher::FHttpDispatcher::ProcessHttpRequests'::__l9::<lambda_1>,0,1> @ 1445a6e20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::HttpIoDispatcher::FHttpDispatcher::ProcessHttpRequests'::__l9::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_UE::IoStore::HttpIoDispatcher::FHttpDispatcher::ProcessHttpRequests_::__l9::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::IoStore::HttpIoDispatcher::FHttpDispatcher::ProcessHttpRequests'::`9'::<lambda_1>,0,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x30));
  return;
}

// ~TFunction_OwnedObject<`UE::IoStore::LatencyTest'::__l26::<lambda_1>,0,1> @ 1445a6e40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::LatencyTest'::__l26::<lambda_1>,0,1>::
~TFunction_OwnedObject<_UE::IoStore::LatencyTest_::__l26::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::IoStore::LatencyTest'::`26'::<lambda_1>,0,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::IoStore::FOnDemandIoStore::TryEnterTickLoop'::__l30::<lambda_1>,1,0> @ 1445a6e60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::FOnDemandIoStore::TryEnterTickLoop'::__l30::<lambda_1>,1,0>::
~TFunction_OwnedObject<_UE::IoStore::FOnDemandIoStore::TryEnterTickLoop_::__l30::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::IoStore::FOnDemandIoStore::TryEnterTickLoop'::`30'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::IoStore::FOnDemandHttpThread::TickRequests'::__l55::<lambda_1>,0,1> @ 1445a6e80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::FOnDemandHttpThread::TickRequests'::__l55::<lambda_1>,0,1>::
~TFunction_OwnedObject<_UE::IoStore::FOnDemandHttpThread::TickRequests_::__l55::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::IoStore::FOnDemandHttpThread::TickRequests'::`55'::<lambda_1>,0,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::IoStore::FOnDemandInstallCache::FOnDemandInstallCache'::__l108::<lambda_1>,0,0> @ 1445a6ea0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::FOnDemandInstallCache::FOnDemandInstallCache'::__l108::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::IoStore::FOnDemandInstallCache::FOnDemandInstallCache_::__l108::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::IoStore::FOnDemandInstallCache::FOnDemandInstallCache'::`108'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::IoStore::FOnDemandInstallCache::Resolve'::__l2::<lambda_2>,0,0> @ 1445a6ec0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::FOnDemandInstallCache::Resolve'::__l2::<lambda_2>,0,0>::
~TFunction_OwnedObject<_UE::IoStore::FOnDemandInstallCache::Resolve_::__l2::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::IoStore::FOnDemandInstallCache::Resolve'::`2'::<lambda_2>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::IoStore::FOnDemandIoStore::InitializePostHotfix'::__l83::<lambda_2>,1,0> @ 1445a6ee0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::FOnDemandIoStore::InitializePostHotfix'::__l83::<lambda_2>,1,0>
::
~TFunction_OwnedObject<_UE::IoStore::FOnDemandIoStore::InitializePostHotfix_::__l83::<lambda_2>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::IoStore::FOnDemandIoStore::InitializePostHotfix'::`83'::<lambda_2>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::IoStore::FOnDemandDebugCommands::RunRequestTest'::__l83::<lambda_2>,1,0> @ 1445a6f00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::FOnDemandDebugCommands::RunRequestTest'::__l83::<lambda_2>,1,0>
::
~TFunction_OwnedObject<_UE::IoStore::FOnDemandDebugCommands::RunRequestTest_::__l83::<lambda_2>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::IoStore::FOnDemandDebugCommands::RunRequestTest'::`83'::<lambda_2>,1,0>
        ::_vftable_;
  DestructItems<FIoRequest,int>
            (*(FIoRequest **)((longlong)this + 8),*(int *)((longlong)this + 0x10));
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`UE::IoStore::FOnDemandContentInstaller::ExecuteInstallRequest'::__l112::<lambda_2>,1,1> @ 1445a6f40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::FOnDemandContentInstaller::ExecuteInstallRequest'::__l112::<lambda_2>,1,1>
::
~TFunction_OwnedObject<_UE::IoStore::FOnDemandContentInstaller::ExecuteInstallRequest_::__l112::<lambda_2>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::IoStore::FOnDemandContentInstaller::ExecuteInstallRequest'::`112'::<lambda_2>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::IoStore::FOnDemandContentInstaller::ExecuteInstallRequest'::__l114::<lambda_3>,1,1> @ 1445a6f60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::FOnDemandContentInstaller::ExecuteInstallRequest'::__l114::<lambda_3>,1,1>
::
~TFunction_OwnedObject<_UE::IoStore::FOnDemandContentInstaller::ExecuteInstallRequest_::__l114::<lambda_3>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::IoStore::FOnDemandContentInstaller::ExecuteInstallRequest'::`114'::<lambda_3>,1,1>
        ::_vftable_;
  return;
}

// ~TScopeGuard<`UE::IoStore::FCasJournal::Commit'::__l2::<lambda_1>_> @ 1445a7150

void __thiscall
ScopeExitSupport::TScopeGuard<`UE::IoStore::FCasJournal::Commit'::__l2::<lambda_1>_>::
~TScopeGuard<_UE::IoStore::FCasJournal::Commit_::__l2::<lambda_1>_>(void *this)

{
  FError *pFVar1;
  byte bVar2;
  atomic<unsigned_char> aVar3;
  bool bVar4;
  
  pFVar1 = *(FError **)this;
  if (((char)pFVar1[1].ErrorCode == '\0') ||
     (bVar4 = UE::UnifiedError::IsCancellationError(pFVar1), !bVar4)) {
    LOCK();
    bVar4 = UE::IoStore::FInstallCacheAnalytics::Mutex.State == (atomic<unsigned_char>)0x0;
    if (bVar4) {
      UE::IoStore::FInstallCacheAnalytics::Mutex.State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar4) {
      UE::FMutex::LockSlow(&UE::IoStore::FInstallCacheAnalytics::Mutex);
    }
    if ((char)pFVar1[1].ErrorCode != '\0') {
      UE::IoStore::InstallCacheAnalytics.JournalCommitErrorCount =
           UE::IoStore::InstallCacheAnalytics.JournalCommitErrorCount + 1;
    }
    UE::IoStore::InstallCacheAnalytics.JournalCommitCount =
         UE::IoStore::InstallCacheAnalytics.JournalCommitCount + 1;
    LOCK();
    aVar3 = UE::IoStore::FInstallCacheAnalytics::Mutex.State + -1;
    UNLOCK();
    bVar2 = (byte)UE::IoStore::FInstallCacheAnalytics::Mutex.State & 2;
    UE::IoStore::FInstallCacheAnalytics::Mutex.State = aVar3;
    if (bVar2 != 0) {
      UE::FMutex::WakeWaitingThread(&UE::IoStore::FInstallCacheAnalytics::Mutex);
      return;
    }
  }
  return;
}

// ~TScopeGuard<`UE::IoStore::FOnDemandInstallCache::FlushPendingChunks'::__l2::<lambda_1>_> @ 1445a71d0

void __thiscall
ScopeExitSupport::
TScopeGuard<`UE::IoStore::FOnDemandInstallCache::FlushPendingChunks'::__l2::<lambda_1>_>::
~TScopeGuard<_UE::IoStore::FOnDemandInstallCache::FlushPendingChunks_::__l2::<lambda_1>_>
          (void *this)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ForAnyElementType *pFVar6;
  bool bVar7;
  
  lVar5 = *(longlong *)this;
  LOCK();
  bVar7 = *(int *)(lVar5 + 0x28) == 0;
  if (bVar7) {
    *(int *)(lVar5 + 0x28) = 1;
  }
  UNLOCK();
  if (!bVar7) {
    UE::FSharedMutex::LockSlow((FSharedMutex *)(lVar5 + 0x28));
  }
  pFVar6 = *(ForAnyElementType **)this;
  piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
  if (*(int *)((longlong)&pFVar6[1].Data + 4) < 0) {
    DestructItems<FIoBuffer,int>((FIoBuffer *)pFVar6->Data,*(int *)&pFVar6[1].Data);
    *(undefined4 *)&pFVar6[1].Data = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,pFVar6,0,piVar1);
    }
  }
  else {
    DestructItems<FIoBuffer,int>((FIoBuffer *)pFVar6->Data,*(int *)&pFVar6[1].Data);
    *(undefined4 *)&pFVar6[1].Data = 0;
  }
  iVar4 = *(int *)((longlong)&pFVar6[3].Data + 4);
  *(undefined4 *)&pFVar6[3].Data = 0;
  if (iVar4 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,pFVar6 + 2,0,(int *)((longlong)&pFVar6[3].Data + 4));
  }
  pFVar6[4].Data = (FScriptContainerElement *)0x0;
  LOCK();
  puVar2 = (uint *)(lVar5 + 0x28);
  uVar3 = *puVar2;
  *puVar2 = *puVar2 - 1;
  UNLOCK();
  if ((uVar3 & 6) != 0) {
    UE::FSharedMutex::WakeWaitingThreads((FSharedMutex *)(lVar5 + 0x28),uVar3);
  }
  return;
}

// ~TScopeGuard<`UE::IoStore::FOnDemandInstallCache::FlushPendingChunksImpl'::__l2::<lambda_1>_> @ 1445a72b0

void __thiscall
ScopeExitSupport::
TScopeGuard<`UE::IoStore::FOnDemandInstallCache::FlushPendingChunksImpl'::__l2::<lambda_1>_>::
~TScopeGuard<_UE::IoStore::FOnDemandInstallCache::FlushPendingChunksImpl_::__l2::<lambda_1>_>
          (void *this)

{
  FError *pFVar1;
  longlong *plVar2;
  byte bVar3;
  atomic<unsigned_char> aVar4;
  bool bVar5;
  longlong lVar6;
  ulonglong uVar7;
  double dVar8;
  
  pFVar1 = *(FError **)this;
  lVar6 = **(longlong **)((longlong)this + 8);
  if (((char)pFVar1[1].ErrorCode == '\0') ||
     (bVar5 = UE::UnifiedError::IsCancellationError(pFVar1), !bVar5)) {
    LOCK();
    bVar5 = UE::IoStore::FInstallCacheAnalytics::Mutex.State == (atomic<unsigned_char>)0x0;
    if (bVar5) {
      UE::IoStore::FInstallCacheAnalytics::Mutex.State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar5) {
      UE::FMutex::LockSlow(&UE::IoStore::FInstallCacheAnalytics::Mutex);
    }
    if ((char)pFVar1[1].ErrorCode != '\0') {
      UE::IoStore::InstallCacheAnalytics.FlushErrorCount =
           UE::IoStore::InstallCacheAnalytics.FlushErrorCount + 1;
    }
    UE::IoStore::InstallCacheAnalytics.FlushCount =
         UE::IoStore::InstallCacheAnalytics.FlushCount + 1;
    UE::IoStore::InstallCacheAnalytics.FlushedBytes =
         UE::IoStore::InstallCacheAnalytics.FlushedBytes + lVar6;
    LOCK();
    aVar4 = UE::IoStore::FInstallCacheAnalytics::Mutex.State + -1;
    UNLOCK();
    bVar3 = (byte)UE::IoStore::FInstallCacheAnalytics::Mutex.State & 2;
    UE::IoStore::FInstallCacheAnalytics::Mutex.State = aVar4;
    if (bVar3 != 0) {
      UE::FMutex::WakeWaitingThread(&UE::IoStore::FInstallCacheAnalytics::Mutex);
    }
  }
  plVar2 = *(longlong **)(*(longlong *)((longlong)this + 0x10) + 0x10);
  dVar8 = (double)GIasCacheSuspendTimeoutFactor;
  if (__real_3ff0000000000000 <= (double)GIasCacheSuspendTimeoutFactor) {
    dVar8 = __real_3ff0000000000000;
  }
  if (dVar8 <= 0.0) {
    dVar8 = 0.0;
  }
  uVar7 = **(longlong **)((longlong)this + 8) + **(longlong **)((longlong)this + 0x18);
  if ((((uVar7 != 0) && (0.0 < dVar8)) && (*(uint *)((longlong)plVar2 + 0x1c) != 0)) &&
     (lVar6 = (longlong)
              (((double)uVar7 / (double)*(uint *)((longlong)plVar2 + 0x1c)) * (double)*plVar2 *
              dVar8), 0 < lVar6)) {
    LOCK();
    plVar2[4] = plVar2[4] + lVar6;
    UNLOCK();
  }
  return;
}

// ~TScopeGuard<`UE::IoStore::FOnDemandIoStore::TickMountRequest'::__l2::<lambda_1>_> @ 1445a73f0

void __thiscall
ScopeExitSupport::TScopeGuard<`UE::IoStore::FOnDemandIoStore::TickMountRequest'::__l2::<lambda_1>_>
::~TScopeGuard<_UE::IoStore::FOnDemandIoStore::TickMountRequest_::__l2::<lambda_1>_>(void *this)

{
  LARGE_INTEGER local_res8 [4];
  
  QueryPerformanceCounter(local_res8);
  *(double *)(*(longlong *)this + 0x90) =
       ((double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
       __real_4170000000000000) - **(double **)((longlong)this + 8);
  return;
}

// operator<< @ 1445a9dc0

/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

TStringBuilderBase<wchar_t> * __cdecl
operator<<(TStringBuilderBase<wchar_t> *param_1,EOnDemandContainerFlags param_2)

{
  wchar_t *pwVar1;
  int iVar2;
  int iVar3;
  int iVar5;
  size_t sVar4;
  
  if (param_2 == None) {
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,L"None",4);
    return param_1;
  }
  iVar5 = 0;
  if ((param_2 & PendingEncryptionKey) != None) {
    if ((int)((longlong)param_1->CurPos - (longlong)param_1->Base >> 1) != 0) {
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,L"|",1);
    }
    pwVar1 = Names[1];
    iVar2 = iVar5;
    if (Names[1] != (wchar_t *)0x0) {
      sVar4 = wcslen(Names[1]);
      iVar2 = (int)sVar4;
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,pwVar1,iVar2);
  }
  iVar2 = 0;
  if ((param_2 & Mounted) != None) {
    if ((int)((longlong)param_1->CurPos - (longlong)param_1->Base >> 1) != 0) {
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,L"|",1);
    }
    pwVar1 = Names[2];
    iVar3 = iVar2;
    if (Names[2] != (wchar_t *)0x0) {
      sVar4 = wcslen(Names[2]);
      iVar3 = (int)sVar4;
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,pwVar1,iVar3);
  }
  if ((param_2 & StreamOnDemand) != None) {
    if ((int)((longlong)param_1->CurPos - (longlong)param_1->Base >> 1) != 0) {
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,L"|",1);
    }
    pwVar1 = Names[3];
    iVar3 = iVar2;
    if (Names[3] != (wchar_t *)0x0) {
      sVar4 = wcslen(Names[3]);
      iVar3 = (int)sVar4;
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,pwVar1,iVar3);
  }
  if ((param_2 & InstallOnDemand) != None) {
    if ((int)((longlong)param_1->CurPos - (longlong)param_1->Base >> 1) != 0) {
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,L"|",1);
    }
    pwVar1 = Names[4];
    iVar3 = iVar2;
    if (Names[4] != (wchar_t *)0x0) {
      sVar4 = wcslen(Names[4]);
      iVar3 = (int)sVar4;
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,pwVar1,iVar3);
  }
  if ((param_2 & Encrypted) != None) {
    if ((int)((longlong)param_1->CurPos - (longlong)param_1->Base >> 1) != 0) {
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,L"|",1);
    }
    pwVar1 = Names[5];
    iVar3 = iVar2;
    if (Names[5] != (wchar_t *)0x0) {
      sVar4 = wcslen(Names[5]);
      iVar3 = (int)sVar4;
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,pwVar1,iVar3);
  }
  if ((param_2 & WithSoftReferences) != None) {
    if ((int)((longlong)param_1->CurPos - (longlong)param_1->Base >> 1) != 0) {
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,L"|",1);
    }
    pwVar1 = Names[6];
    if (Names[6] != (wchar_t *)0x0) {
      sVar4 = wcslen(Names[6]);
      iVar2 = (int)sVar4;
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,pwVar1,iVar2);
  }
  if ((param_2 & Last) != None) {
    if ((int)((longlong)param_1->CurPos - (longlong)param_1->Base >> 1) != 0) {
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,L"|",1);
    }
    pwVar1 = Names[7];
    if (Names[7] != (wchar_t *)0x0) {
      sVar4 = wcslen(Names[7]);
      iVar5 = (int)sVar4;
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,pwVar1,iVar5);
  }
  return param_1;
}

// operator() @ 1445aa630

bool __thiscall
`ExecuteOnGameThread<`UE::IoStore::FOnDemandIoStore::CompleteMountRequest'::__l8::<lambda_1>_>'::
__l2::<lambda_1>::operator()(void *this,float param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  void *local_38;
  undefined4 local_30;
  undefined4 local_2c;
  FIoStatus local_28;
  undefined8 local_18;
  
  local_38 = *(void **)((longlong)this + 0x30);
  *(undefined8 *)((longlong)this + 0x30) = 0;
  local_30 = *(undefined4 *)((longlong)this + 0x38);
  local_2c = *(undefined4 *)((longlong)this + 0x3c);
  *(undefined8 *)((longlong)this + 0x38) = 0;
  local_28.ErrorMessage.Chars = *(wchar_t **)((longlong)this + 0x40);
  if (local_28.ErrorMessage.Chars != (wchar_t *)0x0) {
    LOCK();
    *(int *)(local_28.ErrorMessage.Chars + -4) = *(int *)(local_28.ErrorMessage.Chars + -4) + 1;
    UNLOCK();
  }
  local_28.ErrorCode = *(EIoErrorCode *)((longlong)this + 0x48);
  local_18 = *(undefined8 *)((longlong)this + 0x50);
  local_28.SystemErrorCode = *(uint *)((longlong)this + 0x4c);
  UE::Core::Private::Function::CheckCallable(*(void **)this);
  pcVar1 = *(code **)this;
  plVar3 = (longlong *)((longlong)this + 0x10);
  if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)this + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,&local_38);
  FIoStatus::~FIoStatus(&local_28);
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  return false;
}

// operator() @ 1445aa6e0

bool __thiscall
`ExecuteOnGameThread<`UE::IoStore::FOnDemandContentInstaller::NotifyInstallProgress'::__l11::<lambda_1>_>'
::__l2::<lambda_1>::operator()(void *this,float param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  lVar1 = *(longlong *)this;
  local_28 = *(undefined8 *)(lVar1 + 0xe0);
  uStack_20 = *(undefined8 *)(lVar1 + 0xe8);
  local_18 = *(undefined8 *)(lVar1 + 0xf0);
  UE::Core::Private::Function::CheckCallable(*(void **)(lVar1 + 0x80));
  pcVar2 = *(code **)(lVar1 + 0x80);
  plVar4 = (longlong *)(lVar1 + 0x90);
  if (*(longlong **)(lVar1 + 0xa8) != (longlong *)0x0) {
    plVar4 = *(longlong **)(lVar1 + 0xa8);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,&local_28);
  LOCK();
  *(undefined1 *)(*(longlong *)this + 0x109) = 0;
  UNLOCK();
  return false;
}

// operator() @ 1445aa9f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EIoHttpFlags": Some values do not have unique names */

void __thiscall
``UE::IoStore::HttpIoDispatcher::FHttpDispatcher::ProcessHttpRequests'::__l9::<lambda_1>::
operator()'::__l2::<lambda_1>::operator()(void *this)

{
  uchar uVar1;
  FHttpDispatcher *this_00;
  FHttpRequest *pFVar2;
  bool bVar3;
  
  this_00 = *(FHttpDispatcher **)this;
  pFVar2 = *(FHttpRequest **)((longlong)this + 8);
  if (*(int *)((longlong)this + 0x4c) != 0) {
    UE::IoStore::FOnDemandIoBackendStats::OnHttpRetry
              (UE::IoStore::GStatistics,(pFVar2->Options).Category == '\x01');
  }
  if (*(int *)((longlong)this + 0x48) - 200U < 100) {
    UE::IoStore::FIASHostGroup::OnSuccessfulResponse((FIASHostGroup *)((longlong)this + 0x60));
    if (*(char *)((longlong)this + 0x55) == -1) {
      UE::IoStore::GHttpCdnCacheUnknown = UE::IoStore::GHttpCdnCacheUnknown + 1;
    }
    else if (*(char *)((longlong)this + 0x55) == '\0') {
      UE::IoStore::GHttpCdnCacheMiss = UE::IoStore::GHttpCdnCacheMiss + 1;
    }
    else {
      UE::IoStore::GHttpCdnCacheHit = UE::IoStore::GHttpCdnCacheHit + 1;
    }
    UE::IoStore::FOnDemandIoBackendStats::OnHttpGet
              (UE::IoStore::GStatistics,(pFVar2->Options).Category == '\x01',
               (ulonglong)
               CONCAT14(*(undefined1 *)(*(longlong *)((longlong)this + 0x10) + 0x18),
                        *(undefined4 *)(*(longlong *)((longlong)this + 0x10) + 8)),
               (ulonglong)*(ushort *)((longlong)this + 0x3c) +
               (ulonglong)*(ushort *)((longlong)this + 0x3a) +
               (ulonglong)*(ushort *)((longlong)this + 0x38));
  }
  else {
    uVar1 = (pFVar2->Options).Category;
    if (*(char *)((longlong)this + 0x54) == '\0') {
      UE::IoStore::FOnDemandIoBackendStats::OnHttpError(UE::IoStore::GStatistics,uVar1 == '\x01');
      bVar3 = UE::IoStore::FIASHostGroup::OnFailedResponse((FIASHostGroup *)((longlong)this + 0x60))
      ;
      if (bVar3) {
        UE::IoStore::FOnDemandIoBackendStats::OnHttpDisconnected(UE::IoStore::GStatistics);
      }
    }
    else {
      UE::IoStore::FOnDemandIoBackendStats::OnHttpCancel(UE::IoStore::GStatistics,uVar1 == '\x01');
    }
  }
  UE::IoStore::HttpIoDispatcher::FHttpDispatcher::CompleteRequest
            (this_00,pFVar2,
             (TArray<FAnsiString,TSizedDefaultAllocator<32>_> *)((longlong)this + 0x18),
             (FIoBuffer *)((longlong)this + 0x10),(FIoHttpRange *)((longlong)this + 0x58),
             *(uint *)((longlong)this + 0x48),false);
  return;
}

// operator() @ 1445aab40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
``UE::IoStore::FOnDemandContentInstaller::ExecuteInstallRequest'::__l112::<lambda_2>::operator()'::
__l2::<lambda_1>::operator()(void *this)

{
  int *piVar1;
  int iVar2;
  FIoBuffer this_00;
  FIoBuffer local_res10 [3];
  
  local_res10[0].CorePtr.Reference = *(TRefCountPtr<FIoBuffer::BufCore> *)((longlong)this + 0x48);
  if (local_res10[0].CorePtr.Reference != (BufCore *)0x0) {
    LOCK();
    ((BufCore *)local_res10[0].CorePtr.Reference)->NumRefs =
         ((BufCore *)local_res10[0].CorePtr.Reference)->NumRefs + 1;
    UNLOCK();
  }
  UE::IoStore::FOnDemandContentInstaller::ProcessDownloadedChunk
            (*(FOnDemandContentInstaller **)this,(FIoHash *)((longlong)this + 8),
             *(uint *)((longlong)this + 0x1c),*(EIoErrorCode *)((longlong)this + 0x50),
             *(uint *)((longlong)this + 0x54),local_res10);
  this_00.CorePtr.Reference = local_res10[0].CorePtr.Reference;
  if (local_res10[0].CorePtr.Reference != (BufCore *)0x0) {
    FIoBuffer::BufCore::CheckRefCount((BufCore *)local_res10[0].CorePtr.Reference);
    LOCK();
    piVar1 = (int *)((longlong)this_00.CorePtr.Reference + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FIoBuffer::BufCore::~BufCore((BufCore *)this_00.CorePtr.Reference);
      ::operator_delete((void *)this_00.CorePtr.Reference,0x20);
    }
  }
  return;
}

// operator() @ 1445ae300

/* WARNING: Removing unreachable block (ram,0x0001445ae44e) */
/* WARNING: Removing unreachable block (ram,0x0001445ae579) */

bool __thiscall
``UE::IoStore::FMultiEndpointHttpClient::IssueRequest'::__l2::<lambda_1>::operator()'::__l8::
<lambda_1>::operator()(void *this,TStringView<char> *param_1,TStringView<char> *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FAnsiString *pFVar6;
  undefined8 *puVar7;
  FAnsiString local_78;
  FAnsiString local_68;
  FAnsiString local_58;
  FAnsiString local_48;
  char *local_38;
  undefined8 uStack_30;
  char *local_28;
  undefined8 uStack_20;
  
  local_38 = param_1->DataPtr;
  uStack_30 = *(undefined8 *)&param_1->Size;
  lVar1 = *(longlong *)this;
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  pFVar6 = FAnsiString::ConstructFromPtrSize
                     (&local_58,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
  if (&local_78 != pFVar6) {
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    local_78.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Data.ArrayNum = (pFVar6->Data).ArrayNum;
    local_78.Data.ArrayMax = (pFVar6->Data).ArrayMax;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (((*(FAnsiString **)(lVar1 + 0x40) <= &local_78) &&
      (&local_78 < *(FAnsiString **)(lVar1 + 0x40) + *(int *)(lVar1 + 0x4c))) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  iVar5 = *(int *)(lVar1 + 0x48);
  if (iVar5 == *(int *)(lVar1 + 0x4c)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)(lVar1 + 0x40),(int *)(lVar1 + 0x4c));
  }
  *(int *)(lVar1 + 0x48) = iVar5 + 1;
  puVar7 = (undefined8 *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 0x40));
  *puVar7 = 0;
  *puVar7 = local_78.Data.AllocatorInstance.Data;
  *(int *)(puVar7 + 1) = local_78.Data.ArrayNum;
  *(int *)((longlong)puVar7 + 0xc) = local_78.Data.ArrayMax;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28 = param_2->DataPtr;
  uStack_20 = *(undefined8 *)&param_2->Size;
  lVar1 = *(longlong *)this;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  pFVar6 = FAnsiString::ConstructFromPtrSize
                     (&local_48,param_2->DataPtr,(int)*(undefined8 *)&param_2->Size);
  if (&local_68 != pFVar6) {
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    local_68.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Data.ArrayNum = (pFVar6->Data).ArrayNum;
    local_68.Data.ArrayMax = (pFVar6->Data).ArrayMax;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (((*(FAnsiString **)(lVar1 + 0x40) <= &local_68) &&
      (&local_68 < *(FAnsiString **)(lVar1 + 0x40) + *(int *)(lVar1 + 0x4c))) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  iVar5 = *(int *)(lVar1 + 0x48);
  if (iVar5 == *(int *)(lVar1 + 0x4c)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)(lVar1 + 0x40),(int *)(lVar1 + 0x4c));
  }
  *(int *)(lVar1 + 0x48) = iVar5 + 1;
  puVar7 = (undefined8 *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 0x40));
  *puVar7 = 0;
  *puVar7 = local_68.Data.AllocatorInstance.Data;
  *(int *)(puVar7 + 1) = local_68.Data.ArrayNum;
  *(int *)((longlong)puVar7 + 0xc) = local_68.Data.ArrayMax;
  return true;
}

// `vector_deleting_destructor'`adjustor{8}' @ 1445b03fc

/* [thunk]:public: virtual void * __ptr64 __cdecl UE::UnifiedError::TErrorDetails<struct
   UE::UnifiedError::IoStoreOnDemand::FCasErrorContext>::`vector deleting destructor'`adjustor{8}'
   (unsigned int) __ptr64 */

void * __thiscall
UE::UnifiedError::TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FCasErrorContext>::
_vector_deleting_destructor__adjustor_8__
          (TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FCasErrorContext> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FCasErrorContext> *)
                      &this[-1].DetailFilterMask,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 1445b040c

/* [thunk]:public: virtual void * __ptr64 __cdecl UE::UnifiedError::TErrorDetails<struct
   UE::UnifiedError::IoStoreOnDemand::FChunkHashMismatchErrorContext>::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
UE::UnifiedError::TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FChunkHashMismatchErrorContext>::
_vector_deleting_destructor__adjustor_8__
          (TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FChunkHashMismatchErrorContext> *this,
          uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FChunkHashMismatchErrorContext>
                       *)(this[-1].ErrorDetail.ActualHash.Hash + 0x10),param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 1445b041c

/* [thunk]:public: virtual void * __ptr64 __cdecl UE::UnifiedError::TErrorDetails<struct
   UE::UnifiedError::IoStoreOnDemand::FChunkMissingErrorContext>::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
UE::UnifiedError::TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FChunkMissingErrorContext>::
_vector_deleting_destructor__adjustor_8__
          (TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FChunkMissingErrorContext> *this,
          uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FChunkMissingErrorContext> *
                      )&this[-1].DetailFilterMask,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 1445b042c

/* [thunk]:public: virtual void * __ptr64 __cdecl UE::UnifiedError::TErrorDetails<struct
   UE::UnifiedError::IoStoreOnDemand::FInstallCacheErrorContext>::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
UE::UnifiedError::TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FInstallCacheErrorContext>::
_vector_deleting_destructor__adjustor_8__
          (TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FInstallCacheErrorContext> *this,
          uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FInstallCacheErrorContext> *
                      )&this[-1].DetailFilterMask,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 1445b043c

/* [thunk]:public: virtual void * __ptr64 __cdecl UE::UnifiedError::TErrorDetails<struct
   UE::UnifiedError::IoStoreOnDemand::FVerificationErrorContext>::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
UE::UnifiedError::TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FVerificationErrorContext>::
_vector_deleting_destructor__adjustor_8__
          (TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FVerificationErrorContext> *this,
          uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FVerificationErrorContext> *
                      )&this[-1].ErrorDetail.ReadErrorCount,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 1445b044c

/* WARNING: Enum "Type": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl
   UE::IoStore::HttpIoDispatcher::FHttpDispatcher::`vector deleting destructor'`adjustor{8}'
   (unsigned int) __ptr64 */

void * __thiscall
UE::IoStore::HttpIoDispatcher::FHttpDispatcher::_vector_deleting_destructor__adjustor_8__
          (FHttpDispatcher *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FHttpDispatcher *)&this[-1].DropCacheCommand,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{16}' @ 1445b045c

/* WARNING: Enum "Type": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl
   UE::IoStore::HttpIoDispatcher::FHttpDispatcher::`vector deleting destructor'`adjustor{16}'
   (unsigned int) __ptr64 */

void * __thiscall
UE::IoStore::HttpIoDispatcher::FHttpDispatcher::_vector_deleting_destructor__adjustor_16__
          (FHttpDispatcher *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FHttpDispatcher *)&this[-1].UnpauseCommand,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 1445b046c

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UE::IoStore::FOnDemandHttpThread::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
UE::IoStore::FOnDemandHttpThread::_vector_deleting_destructor__adjustor_8__
          (FOnDemandHttpThread *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FOnDemandHttpThread *)&this[-1].RequestAllocator,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 1445b0480

void * __thiscall
IBaseDelegateInstance<void___cdecl(TMultiMap<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b04b0

void * __thiscall
IBaseDelegateInstance<void___cdecl(FName_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FName_const_&),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b04e0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TMultiMap<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>_&),FDefaultDelegateUserPolicy,`UE::IoStore::FOnDemandIoBackendStats::FOnDemandIoBackendStats'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b0510

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FOutputDevice_&),FDefaultDelegateUserPolicy,`UE::IoStore::HttpIoDispatcher::FHttpDispatcher::FHttpDispatcher'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b0540

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FOutputDevice_&),FDefaultDelegateUserPolicy,`UE::IoStore::HttpIoDispatcher::FHttpDispatcher::FHttpDispatcher'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b0570

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FOutputDevice_&),FDefaultDelegateUserPolicy,`UE::IoStore::FOnDemandHttpThread::FOnDemandHttpThread'::__l2::<lambda_3>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b05a0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FOutputDevice_&),FDefaultDelegateUserPolicy,`UE::IoStore::FOnDemandHttpThread::FOnDemandHttpThread'::__l2::<lambda_4>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b05d0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EForkProcessRole),FDefaultDelegateUserPolicy,`UE::IoStore::FOnDemandIoStore::Initialize'::__l5::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b0600

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::IoStore::FOnDemandHttpThread::FOnDemandHttpThread'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b0630

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::IoStore::FOnDemandIoBackend::FOnDemandIoBackend'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b0660

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::IoStore::FOnDemandIoBackendStats::FOnDemandIoBackendStats'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b0690

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::IoStore::FOnDemandDebugCommands::BindConsoleCommands'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b06c0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::IoStore::HttpIoDispatcher::FHttpDispatcher::Init'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b06f0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::IoStore::FOnDemandInstallCache::RegisterConsoleCommands'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b0720

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::IoStore::HttpIoDispatcher::FHttpDispatcher::FHttpDispatcher'::__l2::<lambda_3>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b0750

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::IoStore::FOnDemandIoBackendStats::FOnDemandIoBackendStats'::__l2::<lambda_3>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b0780

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultTSDelegateUserPolicy,`UE::IoStore::FOnDemandHttpThread::FOnDemandHttpThread'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b07b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<1,UE::IoStore::FOnDemandDebugCommands_const_,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<1,UE::IoStore::FOnDemandDebugCommands_const_,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b07e0

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::IoStore::FOnDemandIoBackendStats,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::IoStore::FOnDemandIoBackendStats,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b0810

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::IoStore::FOnDemandIoStore,void___cdecl(FGuid_const_&,FAES::FAESKey_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::IoStore::FOnDemandIoStore,void___cdecl(FGuid_const_&,FAES::FAESKey_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b0840

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::IoStore::FOnDemandIoStore,void___cdecl(FName_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::IoStore::FOnDemandIoStore,void___cdecl(FName_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b0870

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TMultiMap<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b08a0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FName_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FName_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b08d0

void * __thiscall
UE::UnifiedError::TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FCasErrorContext>::
_scalar_deleting_destructor_
          (TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FCasErrorContext> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ErrorDetail).ErrorMessage.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FDynamicErrorDetails::~FDynamicErrorDetails((FDynamicErrorDetails *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b0920

void * __thiscall
UE::UnifiedError::TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FChunkHashMismatchErrorContext>::
_scalar_deleting_destructor_
          (TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FChunkHashMismatchErrorContext> *this,
          uint param_1)

{
  FDynamicErrorDetails::~FDynamicErrorDetails((FDynamicErrorDetails *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b0960

void * __thiscall
UE::UnifiedError::TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FChunkMissingErrorContext>::
_scalar_deleting_destructor_
          (TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FChunkMissingErrorContext> *this,
          uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ErrorDetail).ChunkIds.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FDynamicErrorDetails::~FDynamicErrorDetails((FDynamicErrorDetails *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b09b0

void * __thiscall
UE::UnifiedError::TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FInstallCacheErrorContext>::
_scalar_deleting_destructor_
          (TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FInstallCacheErrorContext> *this,
          uint param_1)

{
  FIoStatus::~FIoStatus(&(this->ErrorDetail).IoError);
  FDynamicErrorDetails::~FDynamicErrorDetails((FDynamicErrorDetails *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b0a00

void * __thiscall
UE::UnifiedError::TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FVerificationErrorContext>::
_scalar_deleting_destructor_
          (TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FVerificationErrorContext> *this,
          uint param_1)

{
  FDynamicErrorDetails::~FDynamicErrorDetails((FDynamicErrorDetails *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b0a40

void * __thiscall
UE::Tasks::Private::
TExecutableTask<``UE::IoStore::HttpIoDispatcher::FHttpDispatcher::ProcessHttpRequests'::__l9::<lambda_1>::operator()'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x180,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b0aa0

void * __thiscall
UE::Tasks::Private::
TExecutableTask<``UE::IoStore::FOnDemandInstallCache::Resolve'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b0b10

void * __thiscall
UE::Tasks::Private::
TExecutableTask<``UE::IoStore::FOnDemandContentInstaller::ExecuteInstallRequest'::__l112::<lambda_2>::operator()'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x140,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b0b70

void * __thiscall
UE::Tasks::Private::
TExecutableTask<``UE::IoStore::FOnDemandContentInstaller::ExecuteInstallRequest'::__l114::<lambda_3>::operator()'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x140,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b0bd0

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::IoStore::FOnDemandIoBackend::BeginCreateDefaultHostGroup'::__l2::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b0c40

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::IoStore::FOnDemandContentInstaller::CancelInstallRequest'::__l2::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b0cb0

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::IoStore::FOnDemandContentInstaller::EnqueueInstallRequest'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b0d20

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::IoStore::FOnDemandContentInstaller::UpdateInstallRequestPriority'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b0d90

void * __thiscall
UE::Tasks::Private::
TExecutableTask<``UE::IoStore::FOnDemandIoBackend::IssueHttpRequest'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b0e00

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::IoStore::FOnDemandContentInstaller::TryExecuteNextRequest'::__l7::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b0e70

void * __thiscall
UE::Tasks::Private::TExecutableTask<`UE::IoStore::FOnDemandIoBackend::Resolve'::__l23::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b0ee0

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::IoStore::HttpIoDispatcher::FHttpDispatcher::CancelRequest'::__l32::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b0f50

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::IoStore::FOnDemandInstallCache::Resolve'::__l33::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b0fc0

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::IoStore::HttpIoDispatcher::FHttpDispatcher::TryReadFromCache'::__l11::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b1030

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::IoStore::FOnDemandContentInstaller::TryExecuteNextRequest'::__l27::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b10a0

void * __thiscall
UE::Tasks::Private::TExecutableTask<`UE::IoStore::FOnDemandIoBackend::Resolve'::__l33::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b1110

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::IoStore::HttpIoDispatcher::FHttpDispatcher::TryReadFromCache'::__l14::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b1180

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<``UE::IoStore::HttpIoDispatcher::FHttpDispatcher::ProcessHttpRequests'::__l9::<lambda_1>::operator()'::__l2::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x148);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b11c0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<``UE::IoStore::FOnDemandInstallCache::Resolve'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b1200

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<``UE::IoStore::FOnDemandContentInstaller::ExecuteInstallRequest'::__l112::<lambda_2>::operator()'::__l2::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x138);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b1240

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<``UE::IoStore::FOnDemandContentInstaller::ExecuteInstallRequest'::__l114::<lambda_3>::operator()'::__l2::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b1280

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::IoStore::FOnDemandIoBackend::BeginCreateDefaultHostGroup'::__l2::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b12c0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::IoStore::FOnDemandContentInstaller::CancelInstallRequest'::__l2::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b1300

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::IoStore::FOnDemandContentInstaller::EnqueueInstallRequest'::__l2::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b1340

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::IoStore::FOnDemandContentInstaller::UpdateInstallRequestPriority'::__l2::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b1380

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<``UE::IoStore::FOnDemandIoBackend::IssueHttpRequest'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b13c0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::IoStore::FOnDemandContentInstaller::TryExecuteNextRequest'::__l7::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b1400

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::IoStore::FOnDemandIoBackend::Resolve'::__l23::<lambda_1>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b1440

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::IoStore::HttpIoDispatcher::FHttpDispatcher::CancelRequest'::__l32::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b1480

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::IoStore::FOnDemandInstallCache::Resolve'::__l33::<lambda_1>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b14c0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::IoStore::HttpIoDispatcher::FHttpDispatcher::TryReadFromCache'::__l11::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b1500

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::IoStore::FOnDemandContentInstaller::TryExecuteNextRequest'::__l27::<lambda_2>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b1540

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::IoStore::FOnDemandIoBackend::Resolve'::__l33::<lambda_2>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b1580

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::IoStore::HttpIoDispatcher::FHttpDispatcher::TryReadFromCache'::__l14::<lambda_2>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b15c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`UE::IoStore::FOnDemandIoStore::CompleteMountRequest'::__l8::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`ExecuteOnGameThread<`UE::IoStore::FOnDemandIoStore::CompleteMountRequest'::`8'::<lambda_1>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  FIoStatus::~FIoStatus((FIoStatus *)((longlong)this + 0x50));
  if (*(void **)((longlong)this + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x40));
  }
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b1640

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`UE::IoStore::FOnDemandContentInstaller::CompleteDefragRequest'::__l34::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`ExecuteOnGameThread<`UE::IoStore::FOnDemandContentInstaller::CompleteDefragRequest'::`34'::<lambda_1>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(char *)((longlong)this + 0x58) != '\0') {
    *(undefined8 *)((longlong)this + 0x48) = 0;
    plVar1 = *(longlong **)((longlong)this + 0x50);
    if (plVar1 != (longlong *)0x0) {
      *(undefined8 *)((longlong)this + 0x50) = 0;
      (**(code **)(*plVar1 + 0x10))();
    }
    if (*(longlong **)((longlong)this + 0x50) != (longlong *)0x0) {
      (**(code **)(**(longlong **)((longlong)this + 0x50) + 0x10))();
    }
  }
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b16d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`UE::IoStore::FOnDemandContentInstaller::CompletePurgeRequest'::__l34::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`ExecuteOnGameThread<`UE::IoStore::FOnDemandContentInstaller::CompletePurgeRequest'::`34'::<lambda_1>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(char *)((longlong)this + 0x58) != '\0') {
    *(undefined8 *)((longlong)this + 0x48) = 0;
    plVar1 = *(longlong **)((longlong)this + 0x50);
    if (plVar1 != (longlong *)0x0) {
      *(undefined8 *)((longlong)this + 0x50) = 0;
      (**(code **)(*plVar1 + 0x10))();
    }
    if (*(longlong **)((longlong)this + 0x50) != (longlong *)0x0) {
      (**(code **)(**(longlong **)((longlong)this + 0x50) + 0x10))();
    }
  }
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b1760

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`UE::IoStore::FOnDemandContentInstaller::NotifyInstallProgress'::__l11::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`ExecuteOnGameThread<`UE::IoStore::FOnDemandContentInstaller::NotifyInstallProgress'::`11'::<lambda_1>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b17a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`UE::IoStore::FOnDemandContentInstaller::CompleteInstallRequest'::__l60::<lambda_2>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`ExecuteOnGameThread<`UE::IoStore::FOnDemandContentInstaller::CompleteInstallRequest'::`60'::<lambda_2>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(char *)((longlong)this + 0x48) != '\0') {
    *(undefined8 *)((longlong)this + 0x38) = 0;
    plVar1 = *(longlong **)((longlong)this + 0x40);
    if (plVar1 != (longlong *)0x0) {
      *(undefined8 *)((longlong)this + 0x40) = 0;
      (**(code **)(*plVar1 + 0x10))();
    }
    if (*(longlong **)((longlong)this + 0x40) != (longlong *)0x0) {
      (**(code **)(**(longlong **)((longlong)this + 0x40) + 0x10))();
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b1810

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::FCasSnapshot::FromJournal'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::IoStore::FCasSnapshot::FromJournal'::`2'::<lambda_1>,0,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b1850

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::FOnDemandIoBackend::IssueHttpRequest'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::IoStore::FOnDemandIoBackend::IssueHttpRequest'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b1890

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::FMultiEndpointHttpClient::IssueRequest'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::IoStore::FMultiEndpointHttpClient::IssueRequest'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  IoStore::FMultiEndpointHttpClient::FRequest::~FRequest((FRequest *)((longlong)this + 0x20));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b18e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::FDistributionEndpoints::ResolveEndpoints'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::IoStore::FDistributionEndpoints::ResolveEndpoints'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  `UE::IoStore::FDistributionEndpoints::ResolveEndpoints'::__l2::<lambda_1>::~<lambda_1>
            ((void *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b1930

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::FOnDemandDebugCommands::RunRequestTest'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::IoStore::FOnDemandDebugCommands::RunRequestTest'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b1970

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::TrackCdnCacheStats'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::IoStore::TrackCdnCacheStats'::`2'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b19b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::FHttpIoDispatcherBackend::ResolveIoRequests'::__l4::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::IoStore::FHttpIoDispatcherBackend::ResolveIoRequests'::`4'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b19f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::FMultiEndpointHttpClient::Get'::__l7::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::IoStore::FMultiEndpointHttpClient::Get'::`7'::<lambda_1>,0,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b1a30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UE::IoStore::FMultiEndpointHttpClient::IssueRequest'::__l2::<lambda_1>::operator()'::__l8::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``UE::IoStore::FMultiEndpointHttpClient::IssueRequest'::`2'::<lambda_1>::operator()'::`8'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b1a70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::HttpIoDispatcher::FHttpDispatcher::ProcessHttpRequests'::__l9::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::IoStore::HttpIoDispatcher::FHttpDispatcher::ProcessHttpRequests'::`9'::<lambda_1>,0,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x30));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b1ac0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::LatencyTest'::__l26::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::IoStore::LatencyTest'::`26'::<lambda_1>,0,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b1b00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::FOnDemandIoStore::TryEnterTickLoop'::__l30::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::IoStore::FOnDemandIoStore::TryEnterTickLoop'::`30'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b1b40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::FOnDemandHttpThread::TickRequests'::__l55::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::IoStore::FOnDemandHttpThread::TickRequests'::`55'::<lambda_1>,0,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b1b80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::FOnDemandInstallCache::FOnDemandInstallCache'::__l108::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::IoStore::FOnDemandInstallCache::FOnDemandInstallCache'::`108'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b1bc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::FOnDemandInstallCache::Resolve'::__l2::<lambda_2>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::IoStore::FOnDemandInstallCache::Resolve'::`2'::<lambda_2>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b1c00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::FOnDemandIoStore::InitializePostHotfix'::__l83::<lambda_2>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::IoStore::FOnDemandIoStore::InitializePostHotfix'::`83'::<lambda_2>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b1c40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::FOnDemandDebugCommands::RunRequestTest'::__l83::<lambda_2>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::IoStore::FOnDemandDebugCommands::RunRequestTest'::`83'::<lambda_2>,1,0>
        ::_vftable_;
  DestructItems<FIoRequest,int>
            (*(FIoRequest **)((longlong)this + 8),*(int *)((longlong)this + 0x10));
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b1ca0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::FOnDemandContentInstaller::ExecuteInstallRequest'::__l112::<lambda_2>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::IoStore::FOnDemandContentInstaller::ExecuteInstallRequest'::`112'::<lambda_2>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b1ce0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::IoStore::FOnDemandContentInstaller::ExecuteInstallRequest'::__l114::<lambda_3>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::IoStore::FOnDemandContentInstaller::ExecuteInstallRequest'::`114'::<lambda_3>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b1d20

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::IoStore::FIASHostGroup::FImpl,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::IoStore::FIASHostGroup::FImpl,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b1d60

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FIoContainerHeader,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FIoContainerHeader,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b1da0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::IoStore::FOnDemandIoStore::FMountRequest,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::IoStore::FOnDemandIoStore::FMountRequest,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b1de0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::IoStore::FOnDemandContainer,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::IoStore::FOnDemandContainer,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x128);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b1e20

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::IoStore::HttpIoDispatcher::FCancelationToken,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::IoStore::HttpIoDispatcher::FCancelationToken,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b1e60

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::IoStore::HttpIoDispatcher::FHttpDispatcher,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::IoStore::HttpIoDispatcher::FHttpDispatcher,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x120);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b1ea0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::IoStore::FOnDemandInstallCache,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::IoStore::FOnDemandInstallCache,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x220);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b1ee0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::IoStore::FOnDemandInternalInstallRequest,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::IoStore::FOnDemandInternalInstallRequest,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b1f20

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::IoStore::FOnDemandPackageStoreBackend,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::IoStore::FOnDemandPackageStoreBackend,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b1f60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<UE::IoStore::FHttpIoDispatcherBackend,SharedPointerInternals::DefaultDeleter<UE::IoStore::FHttpIoDispatcherBackend>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<UE::IoStore::FHttpIoDispatcherBackend,SharedPointerInternals::DefaultDeleter<UE::IoStore::FHttpIoDispatcherBackend>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b1fa0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<IAsyncReadFileHandle,`UE::IoStore::FCas::OpenAsyncRead'::__l11::<lambda_1>,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b1fe0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<IFileHandle,`UE::IoStore::FCas::OpenRead'::__l5::<lambda_1>,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b2020

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<UE::IoStore::IOnDemandIoDispatcherBackend,SharedPointerInternals::DefaultDeleter<UE::IoStore::IOnDemandIoDispatcherBackend>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<UE::IoStore::IOnDemandIoDispatcherBackend,SharedPointerInternals::DefaultDeleter<UE::IoStore::IOnDemandIoDispatcherBackend>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b2060

void * __thiscall
`UE::IoStore::FCas::GetBlockInfo'::__l2::FDirectoryVisitor::_scalar_deleting_destructor_
          (void *this,uint param_1)

{
  *(undefined4 *)((longlong)this + 0x68) = 0;
  if (*(void **)((longlong)this + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x60));
  }
  TSparseArray<TSparseSetElement<TTuple<UE::IoStore::FCasBlockId,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::IoStore::FCasBlockId,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::IoStore::FCasBlockId,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)this + 0x20));
  *(undefined ***)this = &___7FDirectoryVisitor_IPlatformFile__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b20d0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
UE::IoStore::HttpIoDispatcher::FHttpDispatcher::_scalar_deleting_destructor_
          (FHttpDispatcher *this,uint param_1)

{
  ~FHttpDispatcher(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x110);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b2110

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void * __thiscall
UE::IoStore::FHttpIoDispatcherBackend::_scalar_deleting_destructor_
          (FHttpIoDispatcherBackend *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->BackendContext).SharedReferenceCount.ReferenceController);
  FOnDemandIoBackendStats::~FOnDemandIoBackendStats(&this->Stats);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b2160

void * __thiscall
UE::IoStore::FJournaledCache::_scalar_deleting_destructor_(FJournaledCache *this,uint param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  FCache *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FServiceThread *pFVar6;
  void *pvVar7;
  undefined2 uStack_36;
  undefined4 uStack_34;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined4 uStack_2c;
  undefined2 local_28;
  
  this->_padding_ = (longlong)&_vftable__for__UE__IoStore__IIasCache__;
  this->_padding_ =
       (longlong)&_vftable__for__UE__IoStore__JournaledCache__FServiceThread__FReadSink__;
  if (this->Cache != (FCache *)0x0) {
    pFVar6 = JournaledCache::FServiceThread::Get();
    pFVar2 = this->Cache;
    uStack_36 = SUB82(pFVar2,0);
    uStack_34 = (undefined4)((ulonglong)pFVar2 >> 0x10);
    uStack_30 = (undefined2)((ulonglong)pFVar2 >> 0x30);
    lpCriticalSection = &pFVar6->Lock;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x12,2,1,&(pFVar6->PendingWork).AllocatorInstance,
                       &(pFVar6->PendingWork).ArrayNum,&(pFVar6->PendingWork).ArrayMax);
    pFVar1 = (pFVar6->PendingWork).AllocatorInstance.Data + (longlong)iVar5 * 0x12;
    *(uint *)pFVar1 = CONCAT22(uStack_36,1);
    *(undefined4 *)(pFVar1 + 4) = uStack_34;
    *(uint *)(pFVar1 + 8) = CONCAT22(uStack_2e,uStack_30);
    *(undefined4 *)(pFVar1 + 0xc) = uStack_2c;
    *(undefined2 *)(pFVar1 + 0x10) = local_28;
    LOCK();
    pFVar6->PendingCount = (atomic<int>)((int)pFVar6->PendingCount + 1);
    UNLOCK();
    (**(code **)(((pFVar6->WakeEvent).Event)->_padding_ + 0x10))();
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    LOCK();
    pFVar6->RunCount = (atomic<int>)((int)pFVar6->RunCount + -1);
    UNLOCK();
  }
  pFVar6 = JournaledCache::FServiceThread::Get();
  JournaledCache::FServiceThread::SetGovernor(pFVar6,(FDiskCacheGovernor *)0x0);
  *(undefined4 *)&(this->PendingMaterializes).field_0x48 = 0;
  pvVar7 = *(void **)&(this->PendingMaterializes).field_0x40;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  TSparseArray<TSparseSetElement<TTuple<int,UE::IoStore::FJournaledCache::FMaterialOp>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,UE::IoStore::FJournaledCache::FMaterialOp>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,UE::IoStore::FJournaledCache::FMaterialOp>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PendingMaterializes);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->Lock);
  if ((this->GetPipe).TaskCount != (atomic<unsigned___int64>)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!HasWork()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Pipe.h"
                       ,0x2a,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pvVar7 = (void *)(*pcVar3)();
      return pvVar7;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->GetPipe).EmptyEventRef.SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b22f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void * __thiscall
UE::IoStore::FOnDemandHttpThread::_scalar_deleting_destructor_
          (FOnDemandHttpThread *this,uint param_1)

{
  ~FOnDemandHttpThread(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x128);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b2330

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void * __thiscall
UE::IoStore::FOnDemandInstallCache::_scalar_deleting_destructor_
          (FOnDemandInstallCache *this,uint param_1)

{
  ~FOnDemandInstallCache(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x210);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b2370

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void * __thiscall
UE::IoStore::FOnDemandIoBackend::_scalar_deleting_destructor_(FOnDemandIoBackend *this,uint param_1)

{
  ~FOnDemandIoBackend(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x198);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b23b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void * __thiscall
UE::IoStore::FOnDemandIoStore::_scalar_deleting_destructor_(FOnDemandIoStore *this,uint param_1)

{
  ~FOnDemandIoStore(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x148);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b23f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void * __thiscall
UE::IoStore::FOnDemandPackageStoreBackend::_scalar_deleting_destructor_
          (FOnDemandPackageStoreBackend *this,uint param_1)

{
  ~FOnDemandPackageStoreBackend(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b2430

void * __thiscall
UE::IoStore::JournaledCache::FServiceThread::_scalar_deleting_destructor_
          (FServiceThread *this,uint param_1)

{
  ~FServiceThread(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b2470

void * __thiscall
UE::IHttpIoDispatcher::_scalar_deleting_destructor_(IHttpIoDispatcher *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b24a0

void * __thiscall UE::IoStore::IIasCache::_scalar_deleting_destructor_(IIasCache *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b24d0

void * __thiscall
UE::IoStore::IOnDemandHttpIoDispatcher::_scalar_deleting_destructor_
          (IOnDemandHttpIoDispatcher *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b2500

void * __thiscall
UE::IoStore::IOnDemandHttpIoDispatcherBackend::_scalar_deleting_destructor_
          (IOnDemandHttpIoDispatcherBackend *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b2530

void * __thiscall
UE::IoStore::IOnDemandInstallCache::_scalar_deleting_destructor_
          (IOnDemandInstallCache *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b2560

void * __thiscall
UE::IoStore::IOnDemandIoDispatcherBackend::_scalar_deleting_destructor_
          (IOnDemandIoDispatcherBackend *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b2590

void * __thiscall
UE::IoStore::IOnDemandIoStore::_scalar_deleting_destructor_(IOnDemandIoStore *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1445b25c0

void * __thiscall
UE::IoStore::IOnDemandPackageStoreBackend::_scalar_deleting_destructor_
          (IOnDemandPackageStoreBackend *this,uint param_1)

{
  *this = (IOnDemandPackageStoreBackend)&___7IPackageStoreBackend__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// LexToString @ 1445df620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

FString * __cdecl LexToString(FString *__return_storage_ptr__,EOnDemandContainerFlags param_1)

{
  longlong lVar1;
  undefined1 auStack_158 [32];
  TStringBuilderBase<wchar_t> local_138;
  wchar_t local_118 [128];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_158;
  local_138.Base = local_118;
  local_138.bIsDynamic = false;
  local_138.bIsExternal = false;
  local_138.CurPos = local_118;
  local_138.End = (wchar_t *)local_18;
  operator<<(&local_138,param_1);
  lVar1 = (longlong)local_138.CurPos - (longlong)local_138.Base;
  if (local_138.End < local_138.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_138,1);
  }
  *local_138.CurPos = L'\0';
  FString::ConstructFromPtrSize(__return_storage_ptr__,local_138.Base,(int)(lVar1 >> 1));
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_138);
  return __return_storage_ptr__;
}

// LexToString @ 1445df6f0

wchar_t * __cdecl LexToString(EThreadPriority param_1)

{
  switch(param_1) {
  case TPri_Normal:
    return L"TPri_Normal";
  case TPri_AboveNormal:
    return L"TPri_AboveNormal";
  case TPri_BelowNormal:
    return L"TPri_BelowNormal";
  case TPri_Highest:
    return L"TPri_Highest";
  case TPri_Lowest:
    return L"TPri_Lowest";
  case TPri_SlightlyBelowNormal:
    return L"TPri_SlightlyBelowNormal";
  case TPri_TimeCritical:
    return L"TPri_TimeCritical";
  default:
    return L"TPri_Undefined";
  }
}

// SerializeForLog @ 1445fe4e0

void __cdecl SerializeForLog(FCbWriter *param_1,FCasErrorContext *param_2)

{
  ECasErrorCode EVar1;
  EIoErrorCode EVar2;
  size_t sVar3;
  int iVar4;
  TStringView<char8_t> local_28;
  TStringView<wchar_t> local_18;
  
  FCbWriter::BeginObject(param_1);
  local_28.Size = 5;
  local_18.DataPtr = L"IoStoreOnDemand::FCasErrorContext";
  local_18.Size = 0x21;
  local_28.DataPtr = "$type";
  FCbWriter::SetName(param_1,&local_28);
  FCbWriter::AddString(param_1,(TStringView<char8_t> *)&local_18);
  local_18.Size = 7;
  local_28.DataPtr = "({ErrorCodeText}: {ErrorMessage})";
  local_28.Size = 0x21;
  local_18.DataPtr = L"$format";
  FCbWriter::SetName(param_1,(TStringView<char8_t> *)&local_18);
  local_18.DataPtr = (wchar_t *)local_28.DataPtr;
  local_18.Size = local_28.Size;
  local_18._12_4_ = local_28._12_4_;
  FCbWriter::AddString(param_1,&local_18);
  EVar1 = param_2->ErrorCode;
  local_18.Size = 9;
  local_18.DataPtr = L"ErrorCode";
  FCbWriter::SetName(param_1,(TStringView<char8_t> *)&local_18);
  FCbWriter::AddInteger(param_1,EVar1);
  switch(param_2->ErrorCode) {
  case None:
    local_28.DataPtr = "None";
    break;
  case InitializeFailed:
    local_28.DataPtr = "InitializeFailed";
    break;
  case VerifyFailed:
    local_28.DataPtr = "VerifyFailed";
    break;
  case ReadBlockFailed:
    local_28.DataPtr = "ReadBlockFailed";
    break;
  case WriteBlockFailed:
    local_28.DataPtr = "WriteBlockFailed";
    break;
  case DeleteBlockFailed:
    local_28.DataPtr = "DeleteBlockFailed";
    break;
  case CreateJournalFailed:
    local_28.DataPtr = "CreateJournalFailed";
    break;
  case ReplayJournalFailed:
    local_28.DataPtr = "ReplayJournalFailed";
    break;
  case CommitJournalFailed:
    local_28.DataPtr = "CommitJournalFailed";
    break;
  case CreateSnapshotFailed:
    local_28.DataPtr = "CreateSnapshotFailed";
    break;
  case LoadSnapshotFailed:
    local_28.DataPtr = "LoadSnapshotFailed";
    break;
  case SaveSnapshotFailed:
    local_28.DataPtr = "SaveSnapshotFailed";
    break;
  default:
    local_28.DataPtr = "<InvalidErrorCode>";
  }
  sVar3 = wcslen((wchar_t *)local_28.DataPtr);
  local_18.Size = 0xd;
  local_28.Size = (int)sVar3;
  local_18.DataPtr = L"ErrorCodeText";
  FCbWriter::SetName(param_1,(TStringView<char8_t> *)&local_18);
  local_18.DataPtr = (wchar_t *)local_28.DataPtr;
  local_18.Size = local_28.Size;
  local_18._12_4_ = local_28._12_4_;
  FCbWriter::AddString(param_1,&local_18);
  EVar2 = param_2->IoErrorCode;
  local_18.Size = 0xb;
  local_18.DataPtr = L"IoErrorCode";
  FCbWriter::SetName(param_1,(TStringView<char8_t> *)&local_18);
  FCbWriter::AddInteger(param_1,EVar2);
  local_28.DataPtr = (uchar *)GetIoErrorText(param_2->IoErrorCode);
  iVar4 = 0;
  if ((wchar_t *)local_28.DataPtr != (wchar_t *)0x0) {
    sVar3 = wcslen((wchar_t *)local_28.DataPtr);
    iVar4 = (int)sVar3;
  }
  local_18.Size = 0xf;
  local_18.DataPtr = L"IoErrorCodeText";
  local_28.Size = iVar4;
  FCbWriter::SetName(param_1,(TStringView<char8_t> *)&local_18);
  local_18.DataPtr = (wchar_t *)local_28.DataPtr;
  local_18.Size = local_28.Size;
  local_18._12_4_ = local_28._12_4_;
  FCbWriter::AddString(param_1,&local_18);
  local_28.DataPtr = (uchar *)(param_2->ErrorMessage).Data.AllocatorInstance.Data;
  iVar4 = (param_2->ErrorMessage).Data.ArrayNum;
  local_18.Size = 0xc;
  local_28.Size = iVar4 + -1;
  if (iVar4 == 0) {
    local_28.Size = 0;
  }
  local_18.DataPtr = L"ErrorMessage";
  FCbWriter::SetName(param_1,(TStringView<char8_t> *)&local_18);
  local_18.DataPtr = (wchar_t *)local_28.DataPtr;
  local_18.Size = local_28.Size;
  local_18._12_4_ = local_28._12_4_;
  FCbWriter::AddString(param_1,&local_18);
  FCbWriter::EndObject(param_1);
  return;
}

// SerializeForLog @ 1445fe7e0

void __cdecl SerializeForLog(FCbWriter *param_1,FChunkHashMismatchErrorContext *param_2)

{
  int iVar1;
  int iVar2;
  FString *pFVar3;
  TStringView<char8_t> local_48;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  FCbWriter::BeginObject(param_1);
  local_48.Size = 5;
  local_38.DataPtr = L"IoStoreOnDemand::FChunkHashMismatchErrorContext";
  local_38.Size = 0x2f;
  local_48.DataPtr = "$type";
  FCbWriter::SetName(param_1,&local_48);
  FCbWriter::AddString(param_1,(TStringView<char8_t> *)&local_38);
  local_38.Size = 7;
  local_48.DataPtr = "(ChunkId: {ChunkId}, ExpectedHash: {ExpectedHash}, ActualHash: {ActualHash})";
  local_48.Size = 0x4c;
  local_38.DataPtr = L"$format";
  FCbWriter::SetName(param_1,(TStringView<char8_t> *)&local_38);
  local_38.DataPtr = (wchar_t *)local_48.DataPtr;
  local_38.Size = local_48.Size;
  local_38._12_4_ = local_48._12_4_;
  FCbWriter::AddString(param_1,&local_38);
  pFVar3 = LexToString((FString *)&local_28,&param_2->ChunkId);
  local_38.Size = 7;
  local_48.DataPtr = (uchar *)(pFVar3->Data).AllocatorInstance.Data;
  iVar2 = (pFVar3->Data).ArrayNum;
  local_48.Size = iVar2 + -1;
  if (iVar2 == 0) {
    local_48.Size = 0;
  }
  local_38.DataPtr = L"ChunkId";
  FCbWriter::SetName(param_1,(TStringView<char8_t> *)&local_38);
  local_38.DataPtr = (wchar_t *)local_48.DataPtr;
  local_38.Size = local_48.Size;
  local_38._12_4_ = local_48._12_4_;
  FCbWriter::AddString(param_1,&local_38);
  if (local_28.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_28.DataPtr);
  }
  pFVar3 = LexToString((FString *)&local_18,&param_2->ExpectedHash);
  local_38.Size = 0xc;
  local_48.DataPtr = (uchar *)(pFVar3->Data).AllocatorInstance.Data;
  iVar1 = (pFVar3->Data).ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  local_48.Size = iVar2;
  local_38.DataPtr = L"ExpectedHash";
  local_28.DataPtr = L"ExpectedHash";
  local_28.Size = 0xc;
  local_28._12_4_ = local_38._12_4_;
  FCbWriter::SetName(param_1,(TStringView<char8_t> *)&local_28);
  local_28.DataPtr = (wchar_t *)local_48.DataPtr;
  local_28.Size = local_48.Size;
  local_28._12_4_ = local_48._12_4_;
  FCbWriter::AddString(param_1,&local_28);
  if (local_18.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_18.DataPtr);
  }
  pFVar3 = LexToString((FString *)&local_28,&param_2->ActualHash);
  local_38.Size = 10;
  local_48.DataPtr = (uchar *)(pFVar3->Data).AllocatorInstance.Data;
  iVar1 = (pFVar3->Data).ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  local_48.Size = iVar2;
  local_38.DataPtr = L"ActualHash";
  local_18.DataPtr = L"ActualHash";
  local_18.Size = 10;
  local_18._12_4_ = local_38._12_4_;
  FCbWriter::SetName(param_1,(TStringView<char8_t> *)&local_18);
  local_18.DataPtr = (wchar_t *)local_48.DataPtr;
  local_18.Size = local_48.Size;
  local_18._12_4_ = local_48._12_4_;
  FCbWriter::AddString(param_1,&local_18);
  if ((FScriptContainerElement *)local_28.DataPtr != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.DataPtr);
  }
  FCbWriter::EndObject(param_1);
  return;
}

// SerializeForLog @ 1445fea10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl SerializeForLog(FCbWriter *param_1,FChunkMissingErrorContext *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  void *pvVar4;
  FScriptContainerElement *pFVar5;
  undefined1 auStack_4a8 [32];
  TStringView<wchar_t> local_488;
  undefined1 local_478 [16];
  TArrayView<unsigned_char_const_,int> local_468;
  TStringBuilderBase<char8_t> local_458;
  wchar_t local_438 [512];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_4a8;
  FCbWriter::BeginObject(param_1);
  local_468.ArrayNum = 5;
  local_488.DataPtr = L"IoStoreOnDemand::FChunkMissingErrorContext";
  local_488.Size = 0x2a;
  local_468.DataPtr = "$type";
  FCbWriter::SetName(param_1,(TStringView<char8_t> *)&local_468);
  FCbWriter::AddString(param_1,(TStringView<char8_t> *)&local_488);
  local_488.Size = 7;
  local_468.DataPtr = "(MissingCount: {MissingCount}, ChunkIds: [{ChunkIds}])";
  local_468.ArrayNum = 0x36;
  local_488.DataPtr = L"$format";
  FCbWriter::SetName(param_1,(TStringView<char8_t> *)&local_488);
  local_488.DataPtr = (wchar_t *)local_468.DataPtr;
  local_488.Size = local_468.ArrayNum;
  local_488._12_4_ = local_468._12_4_;
  FCbWriter::AddString(param_1,&local_488);
  iVar2 = (param_2->ChunkIds).ArrayNum;
  local_488.Size = 0xc;
  local_488.DataPtr = L"MissingCount";
  FCbWriter::SetName(param_1,(TStringView<char8_t> *)&local_488);
  FCbWriter::AddInteger(param_1,iVar2);
  iVar2 = (param_2->ChunkIds).ArrayNum;
  local_458.Base = (uchar *)local_438;
  pFVar5 = (param_2->ChunkIds).AllocatorInstance.Data;
  bVar3 = true;
  local_458.CurPos = (uchar *)local_438;
  local_458.End = (uchar *)local_38;
  local_458.bIsDynamic = false;
  local_458.bIsExternal = false;
  pFVar1 = pFVar5 + (longlong)iVar2 * 0xc;
  while( true ) {
    if ((param_2->ChunkIds).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FIoChunkId_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_478);
    }
    if (pFVar5 == pFVar1) break;
    if (bVar3) {
      bVar3 = false;
    }
    else {
      if (local_458.End < (wchar_t *)((longlong)local_458.CurPos + 2)) {
        TStringBuilderBase<char8_t>::Extend(&local_458,2);
      }
      pvVar4 = FGenericPlatformString::Memcpy(local_458.CurPos,", ",2);
      local_458.CurPos = (uchar *)((longlong)pvVar4 + 2);
    }
    local_488.Size = 0xc;
    local_468.ArrayNum = 0xc;
    local_468._12_4_ = local_488._12_4_;
    local_488.DataPtr = (wchar_t *)pFVar5;
    local_468.DataPtr = (uchar *)pFVar5;
    UE::String::BytesToHexLower(&local_468,&local_458);
    pFVar5 = pFVar5 + 0xc;
  }
  local_488.Size = 8;
  local_468.ArrayNum = (int)local_458.CurPos - (int)local_458.Base;
  local_468.DataPtr = local_458.Base;
  local_488.DataPtr = L"ChunkIds";
  FCbWriter::SetName(param_1,(TStringView<char8_t> *)&local_488);
  local_488.DataPtr = (wchar_t *)local_468.DataPtr;
  local_488.Size = local_468.ArrayNum;
  local_488._12_4_ = local_468._12_4_;
  FCbWriter::AddString(param_1,(TStringView<char8_t> *)&local_488);
  FCbWriter::EndObject(param_1);
  TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>(&local_458);
  return;
}

// SerializeForLog @ 1445feca0

void __cdecl SerializeForLog(FCbWriter *param_1,FInstallCacheErrorContext *param_2)

{
  EIoErrorCode EVar1;
  int iVar2;
  uint uVar3;
  ulong64 uVar4;
  FString *pFVar5;
  TStringView<char8_t> local_38;
  TStringView<wchar_t> local_28;
  TStringView<char8_t> local_18;
  
  FCbWriter::BeginObject(param_1);
  local_38.Size = 5;
  local_28.DataPtr = L"IoStoreOnDemand::FInstallCacheErrorContext";
  local_28.Size = 0x2a;
  local_38.DataPtr = "$type";
  FCbWriter::SetName(param_1,&local_38);
  FCbWriter::AddString(param_1,(TStringView<char8_t> *)&local_28);
  local_28.Size = 7;
  local_38.DataPtr = "({ErrorMessage})";
  local_38.Size = 0x10;
  local_28.DataPtr = L"$format";
  FCbWriter::SetName(param_1,(TStringView<char8_t> *)&local_28);
  local_28.DataPtr = (wchar_t *)local_38.DataPtr;
  local_28.Size = local_38.Size;
  local_28._12_4_ = local_38._12_4_;
  FCbWriter::AddString(param_1,&local_28);
  EVar1 = (param_2->IoError).ErrorCode;
  local_28.Size = 9;
  local_28.DataPtr = L"ErrorCode";
  FCbWriter::SetName(param_1,(TStringView<char8_t> *)&local_28);
  FCbWriter::AddInteger(param_1,EVar1);
  pFVar5 = FIoStatus::ToString(&param_2->IoError,(FString *)&local_18);
  local_28.Size = 0xc;
  local_38.DataPtr = (uchar *)(pFVar5->Data).AllocatorInstance.Data;
  iVar2 = (pFVar5->Data).ArrayNum;
  local_38.Size = iVar2 + -1;
  if (iVar2 == 0) {
    local_38.Size = 0;
  }
  local_28.DataPtr = L"ErrorMessage";
  FCbWriter::SetName(param_1,(TStringView<char8_t> *)&local_28);
  local_28.DataPtr = (wchar_t *)local_38.DataPtr;
  local_28.Size = local_38.Size;
  local_28._12_4_ = local_38._12_4_;
  FCbWriter::AddString(param_1,&local_28);
  if (local_18.DataPtr != (uchar *)0x0) {
    FMemory::Free(local_18.DataPtr);
  }
  uVar3 = (param_2->IoError).SystemErrorCode;
  local_28.DataPtr = L"SystemErrorCode";
  local_28.Size = 0xf;
  local_18.DataPtr = "SystemErrorCode";
  local_18.Size = 0xf;
  local_18._12_4_ = local_28._12_4_;
  FCbWriter::SetName(param_1,&local_18);
  FCbWriter::AddInteger(param_1,uVar3);
  uVar4 = param_2->MaxCacheSize;
  local_28.DataPtr = L"MaxCacheSize";
  local_28.Size = 0xc;
  local_18.DataPtr = "MaxCacheSize";
  local_18.Size = 0xc;
  local_18._12_4_ = local_28._12_4_;
  FCbWriter::SetName(param_1,&local_18);
  FCbWriter::AddInteger(param_1,uVar4);
  uVar4 = param_2->CacheSize;
  local_28.DataPtr = L"CacheSize";
  local_28.Size = 9;
  local_18.DataPtr = "CacheSize";
  local_18.Size = 9;
  local_18._12_4_ = local_28._12_4_;
  FCbWriter::SetName(param_1,&local_18);
  FCbWriter::AddInteger(param_1,uVar4);
  uVar4 = param_2->DiskTotalBytes;
  local_28.DataPtr = L"DiskTotalBytes";
  local_28.Size = 0xe;
  local_18.DataPtr = "DiskTotalBytes";
  local_18.Size = 0xe;
  local_18._12_4_ = local_28._12_4_;
  FCbWriter::SetName(param_1,&local_18);
  FCbWriter::AddInteger(param_1,uVar4);
  uVar4 = param_2->DiskFreeBytes;
  local_28.DataPtr = L"DiskFreeBytes";
  local_28.Size = 0xd;
  local_18.DataPtr = "DiskFreeBytes";
  local_18.Size = 0xd;
  local_18._12_4_ = local_28._12_4_;
  FCbWriter::SetName(param_1,&local_18);
  FCbWriter::AddInteger(param_1,uVar4);
  uVar3 = param_2->LineNo;
  local_28.DataPtr = L"LineNo";
  local_28.Size = 6;
  local_18.DataPtr = "LineNo";
  local_18.Size = 6;
  local_18._12_4_ = local_28._12_4_;
  FCbWriter::SetName(param_1,&local_18);
  FCbWriter::AddInteger(param_1,uVar3);
  FCbWriter::EndObject(param_1);
  return;
}

// IMPLEMENT_MODULE_IoStoreOnDemand @ 1446109b0

void __cdecl IMPLEMENT_MODULE_IoStoreOnDemand(void)

{
  return;
}

// Allocator'' @ 15036d310

void __cdecl
`dynamic_atexit_destructor_for_'UE::IoStore::FHttpIoDispatcherBackend::FResolvedRequest::Allocator__
          (void)

{
  code *pcVar1;
  bool bVar2;
  
  if (((UE::IoStore::FHttpIoDispatcherBackend::FResolvedRequest::Allocator.CurrentSlab)->Allocated
       != (UE::IoStore::FHttpIoDispatcherBackend::FResolvedRequest::Allocator.CurrentSlab)->Freed)
     && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                           ("CurrentSlab->Allocated == CurrentSlab->Freed",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoAllocators.h"
                            ,0x23,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  ::operator_delete(UE::IoStore::FHttpIoDispatcherBackend::FResolvedRequest::Allocator.CurrentSlab,
                    0x1208);
  return;
}

// `dynamic_atexit_destructor_for_'CVarCompleteMaterializeTaskPriority'' @ 15036d370

void __cdecl
UE::IoStore::_dynamic_atexit_destructor_for__CVarCompleteMaterializeTaskPriority__(void)

{
  CVarCompleteMaterializeTaskPriority._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarCompleteMaterializeTaskPriority);
  return;
}

// `dynamic_atexit_destructor_for_'CVarOnDemandBackendThreadPriority'' @ 15036d390

void __cdecl UE::IoStore::_dynamic_atexit_destructor_for__CVarOnDemandBackendThreadPriority__(void)

{
  CVarOnDemandBackendThreadPriority._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarOnDemandBackendThreadPriority);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_ContentInstallerEnableHttpCancel'' @ 15036d3b0

void __cdecl
UE::IoStore::CVars::_dynamic_atexit_destructor_for__CVar_ContentInstallerEnableHttpCancel__(void)

{
  CVar_ContentInstallerEnableHttpCancel._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVar_ContentInstallerEnableHttpCancel);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_ContentInstallerFlushOnIdle'' @ 15036d3d0

void __cdecl
UE::IoStore::CVars::_dynamic_atexit_destructor_for__CVar_ContentInstallerFlushOnIdle__(void)

{
  CVar_ContentInstallerFlushOnIdle._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_ContentInstallerFlushOnIdle);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_DisplayOnScreenStatistics'' @ 15036d3f0

void __cdecl UE::IoStore::_dynamic_atexit_destructor_for__CVar_DisplayOnScreenStatistics__(void)

{
  CVar_DisplayOnScreenStatistics._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_DisplayOnScreenStatistics);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_DistributedEndpointAttemptCount'' @ 15036d410

void __cdecl
UE::IoStore::_dynamic_atexit_destructor_for__CVar_DistributedEndpointAttemptCount__(void)

{
  CVar_DistributedEndpointAttemptCount._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVar_DistributedEndpointAttemptCount);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_DistributedEndpointFallbackUrl'' @ 15036d430

void __cdecl
UE::IoStore::Config::_dynamic_atexit_destructor_for__CVar_DistributedEndpointFallbackUrl__(void)

{
  CVar_DistributedEndpointFallbackUrl._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVar_DistributedEndpointFallbackUrl);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_DistributedEndpointRetryWaitTime'' @ 15036d450

void __cdecl
UE::IoStore::_dynamic_atexit_destructor_for__CVar_DistributedEndpointRetryWaitTime__(void)

{
  CVar_DistributedEndpointRetryWaitTime._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVar_DistributedEndpointRetryWaitTime);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_DistributedEndpointTimeout'' @ 15036d470

void __cdecl UE::IoStore::_dynamic_atexit_destructor_for__CVar_DistributedEndpointTimeout__(void)

{
  CVar_DistributedEndpointTimeout._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_DistributedEndpointTimeout);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_EnableConcurrentRequests'' @ 15036d490

void __cdecl
UE::IoStore::CVars::_dynamic_atexit_destructor_for__CVar_EnableConcurrentRequests__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_EnableConcurrentRequests);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_EnableRequestHandleClear'' @ 15036d4b0

void __cdecl UE::IoStore::_dynamic_atexit_destructor_for__CVar_EnableRequestHandleClear__(void)

{
  CVar_EnableRequestHandleClear._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_EnableRequestHandleClear);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_GIasHttpPollTimeoutMs'' @ 15036d4d0

void __cdecl UE::IoStore::_dynamic_atexit_destructor_for__CVar_GIasHttpPollTimeoutMs__(void)

{
  CVar_GIasHttpPollTimeoutMs._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_GIasHttpPollTimeoutMs);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_GIasHttpRateLimitKiBPerSecond'' @ 15036d4f0

void __cdecl UE::IoStore::_dynamic_atexit_destructor_for__CVar_GIasHttpRateLimitKiBPerSecond__(void)

{
  CVar_GIasHttpRateLimitKiBPerSecond._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_GIasHttpRateLimitKiBPerSecond)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVar_GIasHttpRecvBufKiB'' @ 15036d510

void __cdecl UE::IoStore::_dynamic_atexit_destructor_for__CVar_GIasHttpRecvBufKiB__(void)

{
  CVar_GIasHttpRecvBufKiB._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_GIasHttpRecvBufKiB);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_GIasHttpSendBufKiB'' @ 15036d530

void __cdecl UE::IoStore::_dynamic_atexit_destructor_for__CVar_GIasHttpSendBufKiB__(void)

{
  CVar_GIasHttpSendBufKiB._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_GIasHttpSendBufKiB);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_GIaxInvalidUrlChance'' @ 15036d550

void __cdecl UE::IoStore::_dynamic_atexit_destructor_for__CVar_GIaxInvalidUrlChance__(void)

{
  CVar_GIaxInvalidUrlChance._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_GIaxInvalidUrlChance);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_HttpCacheEnabled'' @ 15036d570

void __cdecl UE::IoStore::_dynamic_atexit_destructor_for__CVar_HttpCacheEnabled__(void)

{
  CVar_HttpCacheEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_HttpCacheEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_HttpIoDispatcherEnabled'' @ 15036d590

void __cdecl _dynamic_atexit_destructor_for__CVar_HttpIoDispatcherEnabled__(void)

{
  CVar_HttpIoDispatcherEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_HttpIoDispatcherEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_IasCacheSuspendTimeoutFactor'' @ 15036d5b0

void __cdecl _dynamic_atexit_destructor_for__CVar_IasCacheSuspendTimeoutFactor__(void)

{
  CVar_IasCacheSuspendTimeoutFactor._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_IasCacheSuspendTimeoutFactor);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_IasCancelationEnabled'' @ 15036d5d0

void __cdecl UE::IoStore::_dynamic_atexit_destructor_for__CVar_IasCancelationEnabled__(void)

{
  CVar_IasCancelationEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_IasCancelationEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_IasHttpAllowChunkedXfer'' @ 15036d5f0

void __cdecl UE::IoStore::_dynamic_atexit_destructor_for__CVar_IasHttpAllowChunkedXfer__(void)

{
  CVar_IasHttpAllowChunkedXfer._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_IasHttpAllowChunkedXfer);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_IasHttpConcurrentRequests'' @ 15036d610

void __cdecl UE::IoStore::_dynamic_atexit_destructor_for__CVar_IasHttpConcurrentRequests__(void)

{
  CVar_IasHttpConcurrentRequests._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_IasHttpConcurrentRequests);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_IasHttpConnectionCount'' @ 15036d630

void __cdecl UE::IoStore::_dynamic_atexit_destructor_for__CVar_IasHttpConnectionCount__(void)

{
  CVar_IasHttpConnectionCount._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_IasHttpConnectionCount);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_IasHttpEnabled'' @ 15036d650

void __cdecl UE::IoStore::_dynamic_atexit_destructor_for__CVar_IasHttpEnabled__(void)

{
  CVar_IasHttpEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_IasHttpEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_IasHttpErrorHighWater'' @ 15036d670

void __cdecl UE::IoStore::_dynamic_atexit_destructor_for__CVar_IasHttpErrorHighWater__(void)

{
  CVar_IasHttpErrorHighWater._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_IasHttpErrorHighWater);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_IasHttpErrorSampleCount'' @ 15036d690

void __cdecl UE::IoStore::_dynamic_atexit_destructor_for__CVar_IasHttpErrorSampleCount__(void)

{
  CVar_IasHttpErrorSampleCount._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_IasHttpErrorSampleCount);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_IasHttpFailTimeOutMs'' @ 15036d6b0

void __cdecl UE::IoStore::_dynamic_atexit_destructor_for__CVar_IasHttpFailTimeOutMs__(void)

{
  CVar_IasHttpFailTimeOutMs._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_IasHttpFailTimeOutMs);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_IasHttpHealthCheckWaitTime'' @ 15036d6d0

void __cdecl UE::IoStore::_dynamic_atexit_destructor_for__CVar_IasHttpHealthCheckWaitTime__(void)

{
  CVar_IasHttpHealthCheckWaitTime._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_IasHttpHealthCheckWaitTime);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_IasHttpOptionalBulkDataEnabled'' @ 15036d6f0

void __cdecl
UE::IoStore::_dynamic_atexit_destructor_for__CVar_IasHttpOptionalBulkDataEnabled__(void)

{
  CVar_IasHttpOptionalBulkDataEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVar_IasHttpOptionalBulkDataEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_IasHttpPrimaryEndpoint'' @ 15036d710

void __cdecl UE::IoStore::_dynamic_atexit_destructor_for__CVar_IasHttpPrimaryEndpoint__(void)

{
  CVar_IasHttpPrimaryEndpoint._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_IasHttpPrimaryEndpoint);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_IasHttpRangeRequestMinSizeKiB'' @ 15036d730

void __cdecl UE::IoStore::_dynamic_atexit_destructor_for__CVar_IasHttpRangeRequestMinSizeKiB__(void)

{
  CVar_IasHttpRangeRequestMinSizeKiB._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_IasHttpRangeRequestMinSizeKiB)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVar_IasHttpRetryCount'' @ 15036d750

void __cdecl UE::IoStore::_dynamic_atexit_destructor_for__CVar_IasHttpRetryCount__(void)

{
  CVar_IasHttpRetryCount._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_IasHttpRetryCount);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_IasHttpTimeOutMs'' @ 15036d770

void __cdecl UE::IoStore::_dynamic_atexit_destructor_for__CVar_IasHttpTimeOutMs__(void)

{
  CVar_IasHttpTimeOutMs._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_IasHttpTimeOutMs);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_IasPoisonCache'' @ 15036d790

void __cdecl UE::IoStore::_dynamic_atexit_destructor_for__CVar_IasPoisonCache__(void)

{
  CVar_IasPoisonCache._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_IasPoisonCache);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_IaxAllowPartialContentRequests'' @ 15036d7b0

void __cdecl
UE::IoStore::_dynamic_atexit_destructor_for__CVar_IaxAllowPartialContentRequests__(void)

{
  CVar_IaxAllowPartialContentRequests._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVar_IaxAllowPartialContentRequests);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_IaxHttpEnableInflightCancellation'' @ 15036d7d0

void __cdecl
UE::IoStore::_dynamic_atexit_destructor_for__CVar_IaxHttpEnableInflightCancellation__(void)

{
  CVar_IaxHttpEnableInflightCancellation._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVar_IaxHttpEnableInflightCancellation);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_IaxHttpMaxInflight'' @ 15036d7f0

void __cdecl UE::IoStore::_dynamic_atexit_destructor_for__CVar_IaxHttpMaxInflight__(void)

{
  CVar_IaxHttpMaxInflight._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_IaxHttpMaxInflight);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_IaxHttpVersion'' @ 15036d810

void __cdecl UE::IoStore::_dynamic_atexit_destructor_for__CVar_IaxHttpVersion__(void)

{
  CVar_IaxHttpVersion._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_IaxHttpVersion);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_IaxWarnOnFailure'' @ 15036d830

void __cdecl UE::IoStore::_dynamic_atexit_destructor_for__CVar_IaxWarnOnFailure__(void)

{
  CVar_IaxWarnOnFailure._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_IaxWarnOnFailure);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_ImmediateAnalyticsChance'' @ 15036d850

void __cdecl UE::IoStore::_dynamic_atexit_destructor_for__CVar_ImmediateAnalyticsChance__(void)

{
  CVar_ImmediateAnalyticsChance._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_ImmediateAnalyticsChance);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_IoReportAnalytics'' @ 15036d870

void __cdecl UE::IoStore::_dynamic_atexit_destructor_for__CVar_IoReportAnalytics__(void)

{
  CVar_IoReportAnalytics._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_IoReportAnalytics);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_IoStoreDebugRequest'' @ 15036d890

void __cdecl UE::IoStore::CVars::_dynamic_atexit_destructor_for__CVar_IoStoreDebugRequest__(void)

{
  CVar_IoStoreDebugRequest._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_IoStoreDebugRequest);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_IoStoreErrorOnRequest'' @ 15036d8b0

void __cdecl UE::IoStore::CVars::_dynamic_atexit_destructor_for__CVar_IoStoreErrorOnRequest__(void)

{
  CVar_IoStoreErrorOnRequest._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_IoStoreErrorOnRequest);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_IoStoreOnDemandEnableDefrag'' @ 15036d8d0

void __cdecl
UE::IoStore::CVars::_dynamic_atexit_destructor_for__CVar_IoStoreOnDemandEnableDefrag__(void)

{
  CVar_IoStoreOnDemandEnableDefrag._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_IoStoreOnDemandEnableDefrag);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_IoStoreOnDemandInstallCacheEnabled'' @ 15036d8f0

void __cdecl
UE::IoStore::Config::_dynamic_atexit_destructor_for__CVar_IoStoreOnDemandInstallCacheEnabled__(void)

{
  CVar_IoStoreOnDemandInstallCacheEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVar_IoStoreOnDemandInstallCacheEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_ReportCacheAnalytics'' @ 15036d910

void __cdecl UE::IoStore::_dynamic_atexit_destructor_for__CVar_ReportCacheAnalytics__(void)

{
  CVar_ReportCacheAnalytics._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_ReportCacheAnalytics);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_ReportHttpAnalytics'' @ 15036d930

void __cdecl UE::IoStore::_dynamic_atexit_destructor_for__CVar_ReportHttpAnalytics__(void)

{
  CVar_ReportHttpAnalytics._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_ReportHttpAnalytics);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_ReportIadAnalyticsEnabled'' @ 15036d950

void __cdecl UE::IoStore::_dynamic_atexit_destructor_for__CVar_ReportIadAnalyticsEnabled__(void)

{
  CVar_ReportIadAnalyticsEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_ReportIadAnalyticsEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_StatisticsLogInterval'' @ 15036d970

void __cdecl UE::IoStore::_dynamic_atexit_destructor_for__CVar_StatisticsLogInterval__(void)

{
  CVar_StatisticsLogInterval._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_StatisticsLogInterval);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_WriteOnlyDecoding'' @ 15036d990

void __cdecl UE::IoStore::_dynamic_atexit_destructor_for__CVar_WriteOnlyDecoding__(void)

{
  CVar_WriteOnlyDecoding._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVar_WriteOnlyDecoding);
  return;
}

// `dynamic_atexit_destructor_for_'Cleanup'' @ 15036d9b0

void __cdecl
`TLinearAllocatorBase<UE::IoStore::HttpIoDispatcher::FHttpRequestBlockAllocationTag,0>::Malloc'::
__l12::_dynamic_atexit_destructor_for__Cleanup__(void)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint *puVar4;
  undefined8 uVar5;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  lVar3 = *(longlong *)(lVar2 + 0xe70);
  if (lVar3 != 0) {
    *(longlong *)(lVar3 + 0x40) = lVar3 + 0x1000;
    puVar4 = *(uint **)(lVar2 + 0xe70);
    LOCK();
    uVar1 = *puVar4;
    *puVar4 = *puVar4 - ~puVar4[0x12];
    UNLOCK();
    if (uVar1 == ~puVar4[0x12]) {
      MemoryTrace_UnmarkAllocAsHeap(*(ulong64 *)(lVar2 + 0xe70),0,0);
      uVar5 = *(undefined8 *)(lVar2 + 0xe70);
      if ((*(uint *)(lVar2 + 0xe84) & 1) == 0) {
        *(uint *)(lVar2 + 0xe84) = *(uint *)(lVar2 + 0xe84) | 1;
        __tlregdtor(`TBlockAllocationCache<4096,FAlignedAllocator>::SwapBlock'::__l2::
                    _dynamic_atexit_destructor_for__Tls__);
      }
      lVar3 = *(longlong *)(lVar2 + 0xe68);
      *(undefined8 *)(lVar2 + 0xe68) = uVar5;
      if (lVar3 != 0) {
        (**(code **)((longlong)*UE::Private::GMalloc + 0x48))();
      }
    }
  }
  return;
}

// `dynamic_atexit_destructor_for_'CloneCachedIOBufferDataCVar'' @ 15036da60

void __cdecl
UE::IoStore::JournaledCache::_dynamic_atexit_destructor_for__CloneCachedIOBufferDataCVar__(void)

{
  CloneCachedIOBufferDataCVar._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CloneCachedIOBufferDataCVar);
  return;
}

// `dynamic_atexit_destructor_for_'ContentHandle'' @ 15036da80

void __cdecl
`UE::IoStore::FOnDemandIoStore::InitializePostHotfix'::__l77::
_dynamic_atexit_destructor_for__ContentHandle__(void)

{
  UE::IoStore::FOnDemandContentHandle::~FOnDemandContentHandle(&ContentHandle);
  return;
}

// `dynamic_atexit_destructor_for_'DefaultCerts'' @ 15036daa0

void __cdecl
`UE::IoStore::LoadDefaultHttpCertificates'::__l2::_dynamic_atexit_destructor_for__DefaultCerts__
          (void)

{
  FIoStatus::~FIoStatus(&DefaultCerts.Status);
  return;
}

// `dynamic_atexit_destructor_for_'GCacheCachedBytes'' @ 15036dac0

void __cdecl UE::IoStore::_dynamic_atexit_destructor_for__GCacheCachedBytes__(void)

{
  if ((GCacheCachedBytes.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(GCacheCachedBytes.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GCacheDecodeErrorCount'' @ 15036dae0

void __cdecl UE::IoStore::_dynamic_atexit_destructor_for__GCacheDecodeErrorCount__(void)

{
  if ((GCacheDecodeErrorCount.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(GCacheDecodeErrorCount.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GCacheErrorCount'' @ 15036db00

void __cdecl UE::IoStore::_dynamic_atexit_destructor_for__GCacheErrorCount__(void)

{
  if ((GCacheErrorCount.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(GCacheErrorCount.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GCacheGetCount'' @ 15036db20

void __cdecl UE::IoStore::_dynamic_atexit_destructor_for__GCacheGetCount__(void)

{
  if ((GCacheGetCount.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(GCacheGetCount.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GCachePendingBytes'' @ 15036db40

void __cdecl UE::IoStore::_dynamic_atexit_destructor_for__GCachePendingBytes__(void)

{
  if ((GCachePendingBytes.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(GCachePendingBytes.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GCachePutCount'' @ 15036db60

void __cdecl UE::IoStore::_dynamic_atexit_destructor_for__GCachePutCount__(void)

{
  if ((GCachePutCount.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(GCachePutCount.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GCachePutExistingCount'' @ 15036db80

void __cdecl UE::IoStore::_dynamic_atexit_destructor_for__GCachePutExistingCount__(void)

{
  if ((GCachePutExistingCount.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(GCachePutExistingCount.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GCachePutRejectCount'' @ 15036dba0

void __cdecl UE::IoStore::_dynamic_atexit_destructor_for__GCachePutRejectCount__(void)

{
  if ((GCachePutRejectCount.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(GCachePutRejectCount.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GCacheReadBytes'' @ 15036dbc0

void __cdecl UE::IoStore::_dynamic_atexit_destructor_for__GCacheReadBytes__(void)

{
  if ((GCacheReadBytes.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(GCacheReadBytes.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GCacheRejectBytes'' @ 15036dbe0

void __cdecl UE::IoStore::_dynamic_atexit_destructor_for__GCacheRejectBytes__(void)

{
  if ((GCacheRejectBytes.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(GCacheRejectBytes.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GCacheSuspendedSeconds'' @ 15036dc00

void __cdecl UE::IoStore::_dynamic_atexit_destructor_for__GCacheSuspendedSeconds__(void)

{
  if ((GCacheSuspendedSeconds.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(GCacheSuspendedSeconds.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GCacheWrittenBytes'' @ 15036dc20

void __cdecl UE::IoStore::_dynamic_atexit_destructor_for__GCacheWrittenBytes__(void)

{
  if ((GCacheWrittenBytes.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(GCacheWrittenBytes.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GDeltaTracking'' @ 15036dc40

void __cdecl UE::IoStore::_dynamic_atexit_destructor_for__GDeltaTracking__(void)

{
  GDeltaTracking.RealTotals._72_4_ = 0;
  if (GDeltaTracking.RealTotals._64_8_ != 0) {
    FMemory::Free((void *)GDeltaTracking.RealTotals._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GDeltaTracking.RealTotals);
  GDeltaTracking.IntTotals._72_4_ = 0;
  if (GDeltaTracking.IntTotals._64_8_ != 0) {
    FMemory::Free((void *)GDeltaTracking.IntTotals._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GDeltaTracking);
  return;
}

// `dynamic_atexit_destructor_for_'GDistributedEndpointFallbackUrl'' @ 15036dca0

void __cdecl
UE::IoStore::Config::_dynamic_atexit_destructor_for__GDistributedEndpointFallbackUrl__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = GDistributedEndpointFallbackUrl.Data.AllocatorInstance.Data;
  if (GDistributedEndpointFallbackUrl.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
  {
    return;
  }
  if (GDistributedEndpointFallbackUrl.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'GHttpBandwidthMbps'' @ 15036dcc0

void __cdecl UE::IoStore::_dynamic_atexit_destructor_for__GHttpBandwidthMbps__(void)

{
  if ((GHttpBandwidthMbps[1].CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(GHttpBandwidthMbps[1].CounterName);
  }
  if ((GHttpBandwidthMbps[0].CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(GHttpBandwidthMbps[0].CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GHttpCancelCount'' @ 15036dd00

void __cdecl UE::IoStore::_dynamic_atexit_destructor_for__GHttpCancelCount__(void)

{
  if ((GHttpCancelCount[1].CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(GHttpCancelCount[1].CounterName);
  }
  if ((GHttpCancelCount[0].CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(GHttpCancelCount[0].CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GHttpConnectCount'' @ 15036dd40

void __cdecl UE::IoStore::_dynamic_atexit_destructor_for__GHttpConnectCount__(void)

{
  if ((GHttpConnectCount.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(GHttpConnectCount.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GHttpDecodeErrorCount'' @ 15036dd60

void __cdecl UE::IoStore::_dynamic_atexit_destructor_for__GHttpDecodeErrorCount__(void)

{
  if ((GHttpDecodeErrorCount[1].CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(GHttpDecodeErrorCount[1].CounterName);
  }
  if ((GHttpDecodeErrorCount[0].CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(GHttpDecodeErrorCount[0].CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GHttpDisconnectCount'' @ 15036dda0

void __cdecl UE::IoStore::_dynamic_atexit_destructor_for__GHttpDisconnectCount__(void)

{
  if ((GHttpDisconnectCount.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(GHttpDisconnectCount.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GHttpDownloadedBytes'' @ 15036ddc0

void __cdecl UE::IoStore::_dynamic_atexit_destructor_for__GHttpDownloadedBytes__(void)

{
  if ((GHttpDownloadedBytes[1].CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(GHttpDownloadedBytes[1].CounterName);
  }
  if ((GHttpDownloadedBytes[0].CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(GHttpDownloadedBytes[0].CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GHttpDurationMs'' @ 15036de00

void __cdecl UE::IoStore::_dynamic_atexit_destructor_for__GHttpDurationMs__(void)

{
  if ((GHttpDurationMs[1].CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(GHttpDurationMs[1].CounterName);
  }
  if ((GHttpDurationMs[0].CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(GHttpDurationMs[0].CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GHttpErrorCount'' @ 15036de40

void __cdecl UE::IoStore::_dynamic_atexit_destructor_for__GHttpErrorCount__(void)

{
  if ((GHttpErrorCount[1].CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(GHttpErrorCount[1].CounterName);
  }
  if ((GHttpErrorCount[0].CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(GHttpErrorCount[0].CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GHttpGetCount'' @ 15036de80

void __cdecl UE::IoStore::_dynamic_atexit_destructor_for__GHttpGetCount__(void)

{
  if ((GHttpGetCount[1].CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(GHttpGetCount[1].CounterName);
  }
  if ((GHttpGetCount[0].CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(GHttpGetCount[0].CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GHttpInflightCount'' @ 15036dec0

void __cdecl UE::IoStore::_dynamic_atexit_destructor_for__GHttpInflightCount__(void)

{
  if ((GHttpInflightCount[1].CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(GHttpInflightCount[1].CounterName);
  }
  if ((GHttpInflightCount[0].CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(GHttpInflightCount[0].CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GHttpPendingCount'' @ 15036df00

void __cdecl UE::IoStore::_dynamic_atexit_destructor_for__GHttpPendingCount__(void)

{
  if ((GHttpPendingCount[1].CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(GHttpPendingCount[1].CounterName);
  }
  if ((GHttpPendingCount[0].CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(GHttpPendingCount[0].CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GHttpRetryCount'' @ 15036df40

void __cdecl UE::IoStore::_dynamic_atexit_destructor_for__GHttpRetryCount__(void)

{
  if ((GHttpRetryCount[1].CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(GHttpRetryCount[1].CounterName);
  }
  if ((GHttpRetryCount[0].CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(GHttpRetryCount[0].CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GIoRequestCancelCount'' @ 15036df80

void __cdecl UE::IoStore::_dynamic_atexit_destructor_for__GIoRequestCancelCount__(void)

{
  if ((GIoRequestCancelCount.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(GIoRequestCancelCount.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GIoRequestCount'' @ 15036dfa0

void __cdecl UE::IoStore::_dynamic_atexit_destructor_for__GIoRequestCount__(void)

{
  if ((GIoRequestCount.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(GIoRequestCount.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GIoRequestErrorCount'' @ 15036dfc0

void __cdecl UE::IoStore::_dynamic_atexit_destructor_for__GIoRequestErrorCount__(void)

{
  if ((GIoRequestErrorCount.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(GIoRequestErrorCount.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GIoRequestReadBytes'' @ 15036dfe0

void __cdecl UE::IoStore::_dynamic_atexit_destructor_for__GIoRequestReadBytes__(void)

{
  if ((GIoRequestReadBytes.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(GIoRequestReadBytes.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GIoRequestReadCount'' @ 15036e000

void __cdecl UE::IoStore::_dynamic_atexit_destructor_for__GIoRequestReadCount__(void)

{
  if ((GIoRequestReadCount.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(GIoRequestReadCount.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'HttpDispatcher'' @ 15036e020

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UE::IoStore::HttpIoDispatcher::_dynamic_atexit_destructor_for__HttpDispatcher__(void)

{
  TUniquePtr<UE::IoStore::HttpIoDispatcher::FHttpDispatcher,TDefaultDelete<UE::IoStore::HttpIoDispatcher::FHttpDispatcher>_>
  TVar1;
  
  TVar1.Ptr = HttpDispatcher.Ptr;
  if (HttpDispatcher.Ptr != (FHttpDispatcher *)0x0) {
    FHttpDispatcher::~FHttpDispatcher(HttpDispatcher.Ptr);
    ::operator_delete(TVar1.Ptr,0x110);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'InstallerTraceCounters'' @ 15036e060

void __cdecl UE::IoStore::_dynamic_atexit_destructor_for__InstallerTraceCounters__(void)

{
  if ((InstallerTraceCounters.AvgCacheHitRatio.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(InstallerTraceCounters.AvgCacheHitRatio.CounterName);
  }
  if ((InstallerTraceCounters.AvgInstallDurationMs.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(InstallerTraceCounters.AvgInstallDurationMs.CounterName);
  }
  if ((InstallerTraceCounters.DownloadedBytes.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(InstallerTraceCounters.DownloadedBytes.CounterName);
  }
  if ((InstallerTraceCounters.InflightInstallCount.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(InstallerTraceCounters.InflightInstallCount.CounterName);
  }
  if ((InstallerTraceCounters.InstallCount.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(InstallerTraceCounters.InstallCount.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Instance'' @ 15036e0e0

void __cdecl
`UE::IoStore::FHostGroupManager::Get'::__l2::_dynamic_atexit_destructor_for__Instance__(void)

{
  code *pcVar1;
  BOOLEAN BVar2;
  bool bVar3;
  
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&::Instance.Mutex);
  if (BVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&::Instance.Mutex);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             ::Instance.HostGroupDisconnectedDelegate._40_8_,
             ::Instance.HostGroupDisconnectedDelegate._48_4_);
  if (::Instance.HostGroupDisconnectedDelegate._40_8_ != 0) {
    FMemory::Free((void *)::Instance.HostGroupDisconnectedDelegate._40_8_);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Instance.HostGroupDisconnectedDelegate);
  DestructItems<UE::IoStore::FIASHostGroup,int>
            ((FIASHostGroup *)::Instance.HostGroups.AllocatorInstance.Data,
             ::Instance.HostGroups.ArrayNum);
  if (::Instance.HostGroups.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(::Instance.HostGroups.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Instance'' @ 15036e190

void __cdecl
`UE::IoStore::JournaledCache::FServiceThread::Get'::__l2::_dynamic_atexit_destructor_for__Instance__
          (void)

{
  TUniquePtr<FRunnableThread,TDefaultDelete<FRunnableThread>_> TVar1;
  
  TVar1.Ptr = ::Instance.Thread.Ptr;
  ::Instance._padding_ = (longlong)&___7FServiceThread_JournaledCache_IoStore_UE__6B_;
  if (::Instance.Thread.Ptr != (FRunnableThread *)0x0) {
    ::Instance.Thread.Ptr = (FRunnableThread *)0x0;
    (**(code **)((TVar1.Ptr)->_padding_ + 0x30))(TVar1.Ptr,1);
  }
  if (::Instance.PendingWork.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(::Instance.PendingWork.AllocatorInstance.Data);
  }
  if (::Instance.ActiveReads.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(::Instance.ActiveReads.AllocatorInstance.Data);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Instance.Lock);
  DestructItems<TUniquePtr<UE::IoStore::JournaledCache::FCache,TDefaultDelete<UE::IoStore::JournaledCache::FCache>_>,int>
            ((TUniquePtr<UE::IoStore::JournaledCache::FCache,TDefaultDelete<UE::IoStore::JournaledCache::FCache>_>
              *)::Instance.Caches.AllocatorInstance.Data,::Instance.Caches.ArrayNum);
  if (::Instance.Caches.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(::Instance.Caches.AllocatorInstance.Data);
  }
  FEventRef::~FEventRef(&::Instance.WakeEvent);
  if (::Instance.Thread.Ptr != (FRunnableThread *)0x0) {
    (**(code **)((::Instance.Thread.Ptr)->_padding_ + 0x30))(::Instance.Thread.Ptr,1);
  }
  ::Instance._padding_ = (longlong)&___7FRunnable__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'IoStoreDebugRequest'' @ 15036e260

void __cdecl UE::IoStore::CVars::_dynamic_atexit_destructor_for__IoStoreDebugRequest__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = IoStoreDebugRequest.Data.AllocatorInstance.Data;
  if (IoStoreDebugRequest.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (IoStoreDebugRequest.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'IoStoreErrorOnRequest'' @ 15036e280

void __cdecl UE::IoStore::CVars::_dynamic_atexit_destructor_for__IoStoreErrorOnRequest__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = IoStoreErrorOnRequest.Data.AllocatorInstance.Data;
  if (IoStoreErrorOnRequest.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (IoStoreErrorOnRequest.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'OnDemandImmediateAnalyticEventHandler'' @ 15036e2a0

void __cdecl
UE::IoStore::_dynamic_atexit_destructor_for__OnDemandImmediateAnalyticEventHandler__(void)

{
  longlong *plVar1;
  
  if (OnDemandImmediateAnalyticEventHandler.EventHandler._0_8_ != 0) {
    plVar1 = (longlong *)&OnDemandImmediateAnalyticEventHandler.EventHandler.field_0x10;
    if (OnDemandImmediateAnalyticEventHandler.EventHandler._40_8_ != 0) {
      plVar1 = (longlong *)OnDemandImmediateAnalyticEventHandler.EventHandler._40_8_;
    }
                    /* WARNING: Could not recover jumptable at 0x00015036e2c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'OnRecreateHttpClient'' @ 15036e2d0

void __cdecl UE::IoStore::_dynamic_atexit_destructor_for__OnRecreateHttpClient__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)OnRecreateHttpClient._8_8_,
             OnRecreateHttpClient._16_4_);
  if (OnRecreateHttpClient._8_8_ != 0) {
    FMemory::Free((void *)OnRecreateHttpClient._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&OnRecreateHttpClient);
  return;
}

// `dynamic_atexit_destructor_for_'SafeHandler'' @ 15036e310

void __cdecl
`UE::IoStore::SendImmediateAnalytic'::__l5::_dynamic_atexit_destructor_for__SafeHandler__(void)

{
  longlong *plVar1;
  
  if (SafeHandler.EventHandler._0_8_ != 0) {
    plVar1 = (longlong *)&SafeHandler.EventHandler.field_0x10;
    if (SafeHandler.EventHandler._40_8_ != 0) {
      plVar1 = (longlong *)SafeHandler.EventHandler._40_8_;
    }
                    /* WARNING: Could not recover jumptable at 0x00015036e332. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Tls'' @ 15036e340

void __cdecl
`TBlockAllocationCache<4096,FAlignedAllocator>::SwapBlock'::__l2::
_dynamic_atexit_destructor_for__Tls__(void)

{
  if (*(longlong *)
       (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xe68) != 0
     ) {
                    /* WARNING: Could not recover jumptable at 0x00015036e36b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'_GCsvCategory_Iad'' @ 15036e380

void __cdecl UE::IoStore::_dynamic_atexit_destructor_for___GCsvCategory_Iad__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_Iad.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_Iad.Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (_GCsvCategory_Iad.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'_GCsvCategory_Ias'' @ 15036e3a0

void __cdecl UE::IoStore::_dynamic_atexit_destructor_for___GCsvCategory_Ias__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_Ias.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_Ias.Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (_GCsvCategory_Ias.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterIasAllowance'' @ 15036e3c0

void __cdecl
UE::IoStore::JournaledCache::_dynamic_atexit_destructor_for____GTraceCounterIasAllowance__(void)

{
  if ((__GTraceCounterIasAllowance.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterIasAllowance.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterIasMemDemand'' @ 15036e3e0

void __cdecl
UE::IoStore::JournaledCache::_dynamic_atexit_destructor_for____GTraceCounterIasMemDemand__(void)

{
  if ((__GTraceCounterIasMemDemand.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterIasMemDemand.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterIasOpCount'' @ 15036e400

void __cdecl
UE::IoStore::JournaledCache::_dynamic_atexit_destructor_for____GTraceCounterIasOpCount__(void)

{
  if ((__GTraceCounterIasOpCount.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterIasOpCount.CounterName);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'__GTraceCounterIasReadCursor'' @ 15036e420

void __cdecl
UE::IoStore::JournaledCache::_dynamic_atexit_destructor_for____GTraceCounterIasReadCursor__(void)

{
  if ((__GTraceCounterIasReadCursor.CounterFlags & 0x20) != 0) {
    FCountersTrace::FreeCounterName(__GTraceCounterIasReadCursor.CounterName);
    return;
  }
  return;
}

// operator() @ 1504c19e0

bool __thiscall
``UE::IoStore::FOnDemandIoStore::Unmount'::__l25::<lambda_2>::operator()'::__l5::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9201750686155406609>);
  if (bVar2) {
    if ((**(longlong **)this == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    if ((**(longlong **)this == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9201750686155406609>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

