// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 4

// operator() @ 1445afb70

void __thiscall
TDefaultDelete<UE::IoStore::JournaledCache::FCache>::operator()
          (TDefaultDelete<UE::IoStore::JournaledCache::FCache> *this,FCache *param_1)

{
  int *piVar1;
  int iVar2;
  BufCore *this_00;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  BOOLEAN BVar5;
  bool bVar6;
  
  if (param_1 != (FCache *)0x0) {
    this_00 = (param_1->Partial).Data.CorePtr.Reference;
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
      }
    }
    UE::IoStore::JournaledCache::FDiskCache::~FDiskCache(&param_1->DiskCache);
    DestructItems<UE::IoStore::JournaledCache::FMemCache::FItem,int>
              ((FItem *)(param_1->MemCache).Items.AllocatorInstance.Data,
               (param_1->MemCache).Items.ArrayNum);
    pFVar3 = (param_1->MemCache).Items.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    BVar5 = TryAcquireSRWLockExclusive((PSRWLOCK)param_1);
    if (BVar5 != '\0') {
      ReleaseSRWLockExclusive((PSRWLOCK)param_1);
      ::operator_delete(param_1,0x108);
      return;
    }
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    ::operator_delete(param_1,0x108);
  }
  return;
}

// operator() @ 1445afc50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TDefaultDelete<UE::IoStore::FMultiEndpointHttpClient>::operator()
          (TDefaultDelete<UE::IoStore::FMultiEndpointHttpClient> *this,
          FMultiEndpointHttpClient *param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  if (param_1 != (FMultiEndpointHttpClient *)0x0) {
    bVar4 = UE::IoStore::HTTP::FEventLoop::IsIdle(&param_1->EventLoop);
    if (!bVar4) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("EventLoop.IsIdle()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpClient.cpp"
                         ,0xad,L"FMultiEndpointHttpClient still has active requests on shutdown");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (*(int *)&(param_1->TicketLookupMap).field_0x8 !=
        *(int *)&(param_1->TicketLookupMap).field_0x34) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TicketLookupMap.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpClient.cpp"
                         ,0xae,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    *(undefined4 *)&(param_1->TicketLookupMap).field_0x48 = 0;
    pvVar1 = *(void **)&(param_1->TicketLookupMap).field_0x40;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::IoStore::FMultiEndpointHttpClient::FTicketInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::IoStore::FMultiEndpointHttpClient::FTicketInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::IoStore::FMultiEndpointHttpClient::FTicketInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&param_1->TicketLookupMap);
    DestructItems<UE::IoStore::FMultiEndpointHttpClient::FRequest,int>
              ((FRequest *)(param_1->Retries).AllocatorInstance.Data,(param_1->Retries).ArrayNum);
    pFVar2 = (param_1->Retries).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    UE::IoStore::HTTP::FEventLoop::~FEventLoop(&param_1->EventLoop);
    DestructItems<TUniquePtr<UE::IoStore::FMultiEndpointHttpClient::FConnection,TDefaultDelete<UE::IoStore::FMultiEndpointHttpClient::FConnection>_>,int>
              ((TUniquePtr<UE::IoStore::FMultiEndpointHttpClient::FConnection,TDefaultDelete<UE::IoStore::FMultiEndpointHttpClient::FConnection>_>
                *)(param_1->Connections).AllocatorInstance.Data,(param_1->Connections).ArrayNum);
    pFVar2 = (param_1->Connections).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(param_1,0xb0);
  }
  return;
}

// operator() @ 1445afd60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
TDefaultDelete<UE::IoStore::FOnDemandContentInstaller>::operator()
          (TDefaultDelete<UE::IoStore::FOnDemandContentInstaller> *this,
          FOnDemandContentInstaller *param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  FSlab *pFVar3;
  code *pcVar4;
  bool bVar5;
  
  if (param_1 != (FOnDemandContentInstaller *)0x0) {
    UE::IoStore::FOnDemandContentInstaller::Shutdown(param_1);
    *(undefined4 *)&(param_1->PendingChunkDownloads).field_0x48 = 0;
    pvVar1 = *(void **)&(param_1->PendingChunkDownloads).field_0x40;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<FIoHash,UE::IoStore::FOnDemandContentInstaller::FChunkDownloadRequest>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FIoHash,UE::IoStore::FOnDemandContentInstaller::FChunkDownloadRequest>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FIoHash,UE::IoStore::FOnDemandContentInstaller::FChunkDownloadRequest>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&param_1->PendingChunkDownloads);
    pFVar2 = (param_1->RunningRequests).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (param_1->RequestQueue).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar3 = (param_1->RequestAllocator).CurrentSlab;
    if (pFVar3->Allocated != pFVar3->Freed) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentSlab->Allocated == CurrentSlab->Freed",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoAllocators.h"
                         ,0x23,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    ::operator_delete((param_1->RequestAllocator).CurrentSlab,0x2c10);
    if ((param_1->InstallerPipe).TaskCount != (atomic<unsigned___int64>)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!HasWork()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Pipe.h"
                         ,0x2a,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->InstallerPipe).EmptyEventRef.SharedReferenceCount.ReferenceController);
    ::operator_delete(param_1,0xc0);
  }
  return;
}

// operator() @ 1445afe60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
TDefaultDelete<UE::IoStore::FOnDemandDebugCommands>::operator()
          (TDefaultDelete<UE::IoStore::FOnDemandDebugCommands> *this,FOnDemandDebugCommands *param_1
          )

{
  int iVar1;
  undefined8 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res10 [8];
  
  if (param_1 != (FOnDemandDebugCommands *)0x0) {
    pFVar6 = (param_1->DynamicConsoleCommands).AllocatorInstance.Data;
    iVar1 = (param_1->DynamicConsoleCommands).ArrayNum;
    pFVar3 = pFVar6 + (longlong)iVar1 * 8;
    while( true ) {
      if ((param_1->DynamicConsoleCommands).ArrayNum != iVar1) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<IConsoleCommand_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar6 == pFVar3) break;
      uVar2 = *(undefined8 *)pFVar6;
      if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
        IConsoleManager::SetupSingleton();
        if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Singleton != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x4fb,L"");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
      }
      (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
                (IConsoleManager::Singleton,uVar2,1);
      pFVar6 = pFVar6 + 8;
    }
    pFVar3 = (param_1->DynamicConsoleCommands).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    ::operator_delete(param_1,0x18);
  }
  return;
}

