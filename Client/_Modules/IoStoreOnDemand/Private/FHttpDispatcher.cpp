// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 33

// FHttpDispatcher @ 1445a2bf0

/* WARNING: Enum "Type": Some values do not have unique names */

FHttpDispatcher * __thiscall
UE::IoStore::HttpIoDispatcher::FHttpDispatcher::FHttpDispatcher
          (FHttpDispatcher *this,
          TUniquePtr<UE::IoStore::IIasCache,TDefaultDelete<UE::IoStore::IIasCache>_> *param_1)

{
  TUniquePtr<IConsoleCommand,FConsoleCommandUnregister> *pTVar1;
  IConsoleCommand *pIVar2;
  FRunnableThread *pFVar3;
  code *pcVar4;
  IConsoleManager *pIVar5;
  bool bVar6;
  FHttpDispatcher *pFVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  IConsoleCommand *pIVar10;
  FRunnableThread *pFVar11;
  int iVar12;
  int iVar13;
  IConsoleCommand *pIVar14;
  wchar_t *pwVar15;
  undefined8 in_stack_fffffffffffffea8;
  uint uVar17;
  ulonglong uVar16;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_138;
  FDelegateAllocation local_130;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_120;
  FDelegateAllocation local_118;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_108;
  FDelegateAllocation local_100;
  FDestructionSentinel local_f0;
  FDestructionSentinel local_d8;
  FDestructionSentinel local_c0;
  FDestructionSentinel local_a8;
  FDelegateAllocation *local_90;
  FDestructionSentinel local_88;
  FDelegateAllocation *local_70;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FConsoleCommandUnregister local_48 [8];
  FConsoleCommandUnregister local_40 [8];
  FConsoleCommandUnregister local_38 [16];
  
  uVar17 = (uint)((ulonglong)in_stack_fffffffffffffea8 >> 0x20);
  pIVar14 = (IConsoleCommand *)0x0;
  this->_padding_ = (longlong)&_vftable__for__FRunnable__;
  this->_padding_ = (longlong)&_vftable__for__FSingleThreadRunnable__;
  this->_padding_ = (longlong)&_vftable__for__UE__IoStore__IOnDemandHttpIoDispatcher__;
  (this->Cache).Ptr = param_1->Ptr;
  param_1->Ptr = (IIasCache *)0x0;
  (this->HttpClient).Ptr = (FMultiEndpointHttpClient *)0x0;
  (this->Thread).Ptr = (FRunnableThread *)0x0;
  this->ThreadPriority = TPri_Normal;
  FHttpQueue::FHttpQueue(&this->HttpQueue);
  *(undefined8 *)&this->HostGroupRegisterd = 0;
  *(undefined8 *)&(this->HostGroupRegisterd).field_0x8 = 0;
  *(undefined8 *)&(this->HostGroupRegisterd).field_0x10 = 0;
  *(undefined8 *)&(this->HostGroupRegisterd).field_0x18 = 2;
  FEventRef::FEventRef(&this->WakeUp,AutoReset);
  pTVar1 = &this->PauseCommand;
  (this->CancelationMutex).State = (atomic<unsigned_char>)0x0;
  pTVar1->Ptr = (IConsoleCommand *)0x0;
  pwVar15 = L"";
  (this->OnRecreateHttpClientHandle).ID = 0;
  this->bRecreateHttpClient = (atomic<bool>)0x0;
  this->bStopRequested = (atomic<bool>)0x0;
  (this->UnpauseCommand).Ptr = (IConsoleCommand *)0x0;
  (this->DropCacheCommand).Ptr = (IConsoleCommand *)0x0;
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FHttpDispatcher *)(*pcVar4)();
        return pFVar7;
      }
    }
  }
  pIVar5 = IConsoleManager::Singleton;
  local_138.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_130.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_130.DelegateSize = 0;
  pcVar4 = *(code **)((longlong)*IConsoleManager::Singleton + 0x88);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_138,(FWriteAccessScope *)&local_a8);
  local_90 = &local_130;
  puVar8 = Core::Private::DelegateAllocate(0x20,&local_130);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar9;
    *puVar8 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FOutputDevice_&),FDefaultDelegateUserPolicy,`UE::IoStore::HttpIoDispatcher::FHttpDispatcher::FHttpDispatcher'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar8[3] = this;
  }
  if (local_a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
  }
  uVar16 = (ulonglong)uVar17 << 0x20;
  pIVar10 = (IConsoleCommand *)
            (*pcVar4)(pIVar5,L"iax.HttpPause",
                      L"Pause all http requests. Passing in \'IAD\' or \'IAS\' as an arg to only pause requests of that type"
                      ,&local_138,uVar16);
  if ((FConsoleCommandUnregister *)pTVar1 != local_48) {
    pIVar2 = pTVar1->Ptr;
    pTVar1->Ptr = pIVar10;
    FConsoleCommandUnregister::operator()((FConsoleCommandUnregister *)pTVar1,pIVar2);
    pIVar10 = pIVar14;
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FHttpDispatcher *)(*pcVar4)();
        return pFVar7;
      }
    }
  }
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))(IConsoleManager::Singleton,pIVar10);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_138,(FWriteAccessScope *)&local_f0);
  if ((local_130.DelegateSize != 0) &&
     (local_130.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_130.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_130,0,0,0x10);
    local_130.DelegateSize = 0;
  }
  if (local_f0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f0.Accessor,&local_f0);
  }
  if (local_130.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_130.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_138.AccessDetector);
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FHttpDispatcher *)(*pcVar4)();
        return pFVar7;
      }
    }
  }
  pIVar5 = IConsoleManager::Singleton;
  local_120.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_118.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_118.DelegateSize = 0;
  pcVar4 = *(code **)((longlong)*IConsoleManager::Singleton + 0x88);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_120,(FWriteAccessScope *)&local_88);
  local_70 = &local_118;
  puVar8 = Core::Private::DelegateAllocate(0x20,&local_118);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar9;
    *puVar8 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FOutputDevice_&),FDefaultDelegateUserPolicy,`UE::IoStore::HttpIoDispatcher::FHttpDispatcher::FHttpDispatcher'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar8[3] = this;
  }
  if (local_88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
  }
  uVar16 = uVar16 & 0xffffffff00000000;
  pIVar10 = (IConsoleCommand *)
            (*pcVar4)(pIVar5,L"iax.HttpUnpause",
                      L"Unpause all http requests. Passing in \'IAD\' or \'IAS\' as an arg to only unpause requests of that type"
                      ,&local_120,uVar16);
  pTVar1 = &this->UnpauseCommand;
  if ((FConsoleCommandUnregister *)pTVar1 != local_40) {
    pIVar2 = pTVar1->Ptr;
    pTVar1->Ptr = pIVar10;
    FConsoleCommandUnregister::operator()((FConsoleCommandUnregister *)pTVar1,pIVar2);
    pIVar10 = pIVar14;
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FHttpDispatcher *)(*pcVar4)();
        return pFVar7;
      }
    }
  }
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))(IConsoleManager::Singleton,pIVar10);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_120,(FWriteAccessScope *)&local_d8);
  if ((local_118.DelegateSize != 0) &&
     (local_118.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_118.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_118,0,0,0x10);
    local_118.DelegateSize = 0;
  }
  if (local_d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d8.Accessor,&local_d8);
  }
  if (local_118.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_118.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_120.AccessDetector);
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FHttpDispatcher *)(*pcVar4)();
        return pFVar7;
      }
    }
  }
  pIVar5 = IConsoleManager::Singleton;
  local_108.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_100.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_100.DelegateSize = 0;
  pcVar4 = *(code **)((longlong)*IConsoleManager::Singleton + 0xa8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_108,(FWriteAccessScope *)&local_68);
  local_50 = &local_100;
  puVar8 = Core::Private::DelegateAllocate(0x20,&local_100);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar9;
    *puVar8 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::IoStore::HttpIoDispatcher::FHttpDispatcher::FHttpDispatcher'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar8[3] = this;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  pIVar10 = (IConsoleCommand *)
            (*pcVar4)(pIVar5,L"ias.DropCache",
                      L"Resets the IAS cache and deletes the data from disk.",&local_108,
                      uVar16 & 0xffffffff00000000);
  pTVar1 = &this->DropCacheCommand;
  if ((FConsoleCommandUnregister *)pTVar1 != local_38) {
    pIVar2 = pTVar1->Ptr;
    pTVar1->Ptr = pIVar10;
    FConsoleCommandUnregister::operator()((FConsoleCommandUnregister *)pTVar1,pIVar2);
    pIVar10 = pIVar14;
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FHttpDispatcher *)(*pcVar4)();
        return pFVar7;
      }
    }
  }
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))(IConsoleManager::Singleton,pIVar10);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_108,(FWriteAccessScope *)&local_c0);
  if ((local_100.DelegateSize != 0) &&
     (local_100.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_100.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_100,0,0,0x10);
    local_100.DelegateSize = 0;
  }
  if (local_c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c0.Accessor,&local_c0);
  }
  if (local_100.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_100.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_108.AccessDetector);
  iVar12 = 4;
  if (GOnDemandBackendThreadPriorityIndex < 4) {
    iVar12 = GOnDemandBackendThreadPriorityIndex;
  }
  iVar13 = 0;
  if (0 < iVar12) {
    iVar13 = iVar12;
  }
  this->ThreadPriority = GThreadPriorities[iVar13];
  bVar6 = FCommandLine::IsInitialized();
  if (bVar6) {
    pwVar15 = FCommandLine::Get();
  }
  bVar6 = FParse::Param(pwVar15,L"-Ias.EnableHttpThreadPreFork");
  pFVar11 = FForkProcessHelper::CreateForkableThread
                      ((FRunnable *)this,L"IoService.Http",0,this->ThreadPriority,0xffffffffffffffff
                       ,None,bVar6);
  pFVar3 = (this->Thread).Ptr;
  if ((pFVar3 != pFVar11) && ((this->Thread).Ptr = pFVar11, pFVar3 != (FRunnableThread *)0x0)) {
    (**(code **)(pFVar3->_padding_ + 0x30))(pFVar3,1);
  }
  return this;
}

// ~FHttpDispatcher @ 1445a84a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::IoStore::HttpIoDispatcher::FHttpDispatcher::~FHttpDispatcher(FHttpDispatcher *this)

{
  FDelegateHandle FVar1;
  FRunnableThread *pFVar2;
  IConsoleCommand *pIVar3;
  void *pvVar4;
  FScriptContainerElement *pFVar5;
  IIasCache *pIVar6;
  code *pcVar7;
  bool bVar8;
  
  FVar1.ID = (this->OnRecreateHttpClientHandle).ID;
  this->_padding_ = (longlong)&_vftable__for__FRunnable__;
  this->_padding_ = (longlong)&_vftable__for__FSingleThreadRunnable__;
  this->_padding_ = (longlong)&_vftable__for__UE__IoStore__IOnDemandHttpIoDispatcher__;
  if (FVar1.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&OnRecreateHttpClient,FVar1);
    (this->OnRecreateHttpClientHandle).ID = 0;
  }
  pFVar2 = (this->Thread).Ptr;
  if (pFVar2 != (FRunnableThread *)0x0) {
    (this->Thread).Ptr = (FRunnableThread *)0x0;
    (**(code **)(pFVar2->_padding_ + 0x30))(pFVar2,1);
  }
  pIVar3 = (this->DropCacheCommand).Ptr;
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
  }
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))(IConsoleManager::Singleton,pIVar3,1);
  pIVar3 = (this->UnpauseCommand).Ptr;
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
  }
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))(IConsoleManager::Singleton,pIVar3,1);
  pIVar3 = (this->PauseCommand).Ptr;
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
  }
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))(IConsoleManager::Singleton,pIVar3,1);
  FEventRef::~FEventRef(&this->WakeUp);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->HostGroupRegisterd).field_0x8,*(int *)&(this->HostGroupRegisterd).field_0x10);
  pvVar4 = *(void **)&(this->HostGroupRegisterd).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->HostGroupRegisterd);
  pFVar5 = (this->HttpQueue).PausedRequests.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  *(undefined4 *)&(this->HttpQueue).ByChunkKey.field_0x48 = 0;
  pvVar4 = *(void **)&(this->HttpQueue).ByChunkKey.field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FIoHash,TIntrusiveList<UE::IoStore::HttpIoDispatcher::FHttpRequest>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FIoHash,TIntrusiveList<UE::IoStore::HttpIoDispatcher::FHttpRequest>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FIoHash,TIntrusiveList<UE::IoStore::HttpIoDispatcher::FHttpRequest>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->HttpQueue).ByChunkKey);
  pFVar5 = (this->HttpQueue).Heap.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar2 = (this->Thread).Ptr;
  if (pFVar2 != (FRunnableThread *)0x0) {
    (**(code **)(pFVar2->_padding_ + 0x30))(pFVar2,1);
  }
  TDefaultDelete<UE::IoStore::FMultiEndpointHttpClient>::operator()
            ((TDefaultDelete<UE::IoStore::FMultiEndpointHttpClient> *)&this->HttpClient,
             (this->HttpClient).Ptr);
  pIVar6 = (this->Cache).Ptr;
  if (pIVar6 != (IIasCache *)0x0) {
    (**(code **)*pIVar6)(pIVar6,1);
  }
  this->_padding_ = (longlong)&___7FSingleThreadRunnable__6B_;
  this->_padding_ = (longlong)&___7FRunnable__6B_;
  return;
}

// operator() @ 1445ae5b0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EIoHttpFlags": Some values do not have unique names */

void __thiscall
`UE::IoStore::HttpIoDispatcher::FHttpDispatcher::ProcessHttpRequests'::__l9::<lambda_1>::operator()
          (void *this,FMultiEndpointHttpClientResponse *param_1)

{
  atomic<unsigned_int> *paVar1;
  int *piVar2;
  atomic<unsigned_int> aVar3;
  int iVar4;
  FIoBuffer this_00;
  ForAnyElementType FVar5;
  FTaskHandle local_res8;
  <lambda_1> local_78;
  
  LOCK();
  UE::IoStore::GHttpNumConcurrentRequests =
       (atomic<unsigned_int>)((int)UE::IoStore::GHttpNumConcurrentRequests + -1);
  UNLOCK();
  **(int **)((longlong)this + 0x18) = **(int **)((longlong)this + 0x18) + -1;
  local_78.__this = *(FHttpDispatcher **)this;
  local_78.HttpRequest = *(FHttpRequest **)((longlong)this + 8);
  local_78.HttpResponse.Body.CorePtr.Reference =
       (TRefCountPtr<FIoBuffer::BufCore>)(param_1->Body).CorePtr.Reference;
  (param_1->Body).CorePtr.Reference = (BufCore *)0x0;
  local_78.HttpResponse.Headers.AllocatorInstance.Data = (param_1->Headers).AllocatorInstance.Data;
  (param_1->Headers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.HttpResponse.Headers.ArrayNum = (param_1->Headers).ArrayNum;
  local_78.HttpResponse.Headers.ArrayMax = (param_1->Headers).ArrayMax;
  (param_1->Headers).ArrayNum = 0;
  (param_1->Headers).ArrayMax = 0;
  local_78.HttpResponse.Reason.Data.AllocatorInstance.Data =
       (param_1->Reason).Data.AllocatorInstance.Data;
  (param_1->Reason).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.HttpResponse.Reason.Data.ArrayNum = (param_1->Reason).Data.ArrayNum;
  local_78.HttpResponse.Reason.Data.ArrayMax = (param_1->Reason).Data.ArrayMax;
  (param_1->Reason).Data.ArrayNum = 0;
  (param_1->Reason).Data.ArrayMax = 0;
  local_78.HttpResponse.Sample = param_1->Sample;
  local_78.HttpResponse.DurationMilliseconds = param_1->DurationMilliseconds;
  local_78.HttpResponse.StatusCode = param_1->StatusCode;
  local_78.HttpResponse.RetryCount = param_1->RetryCount;
  local_78.HttpResponse.HostIndex = param_1->HostIndex;
  local_78.HttpResponse.bCanceled = param_1->bCanceled;
  local_78.HttpResponse.CDNCacheStatus = param_1->CDNCacheStatus;
  local_78.TotalRange = *(FIoHttpRange *)((longlong)this + 0x10);
  local_78.HostGroup.Impl.Object = *(FImpl **)((longlong)this + 0x20);
  local_78.HostGroup.Impl.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)((longlong)this + 0x28);
  if (local_78.HostGroup.Impl.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_78.HostGroup.Impl.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_78.HostGroup.Impl.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_res8.Pimpl.Reference = (TRefCountPtr<UE::Tasks::Private::FTaskBase>)(FTaskBase *)0x0;
  UE::Tasks::Private::FTaskHandle::
  Launch<__UE::IoStore::HttpIoDispatcher::FHttpDispatcher::ProcessHttpRequests_::__l9::<lambda_1>::operator()_::__l2::<lambda_1>_>
            (&local_res8,
             L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpIoDispacher.cpp(1328)"
             ,&local_78,BackgroundLow,None,None);
  if (local_res8.Pimpl.Reference != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned_int> *)((longlong)local_res8.Pimpl.Reference + 0x30);
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<unsigned_int>)0x1) {
      (*(code *)**(undefined8 **)local_res8.Pimpl.Reference)(local_res8.Pimpl.Reference,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.HostGroup.Impl.SharedReferenceCount.ReferenceController);
  if (local_78.HttpResponse.Reason.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.HttpResponse.Reason.Data.AllocatorInstance.Data);
  }
  FVar5.Data = local_78.HttpResponse.Headers.AllocatorInstance.Data;
  DestructItems<FAnsiString,int>
            ((FAnsiString *)local_78.HttpResponse.Headers.AllocatorInstance.Data,
             local_78.HttpResponse.Headers.ArrayNum);
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar5.Data);
  }
  this_00.CorePtr.Reference = local_78.HttpResponse.Body.CorePtr.Reference;
  if (local_78.HttpResponse.Body.CorePtr.Reference != (BufCore *)0x0) {
    FIoBuffer::BufCore::CheckRefCount((BufCore *)local_78.HttpResponse.Body.CorePtr.Reference);
    LOCK();
    piVar2 = (int *)((longlong)this_00.CorePtr.Reference + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      FIoBuffer::BufCore::~BufCore((BufCore *)this_00.CorePtr.Reference);
      ::operator_delete((void *)this_00.CorePtr.Reference,0x20);
    }
  }
  return;
}

// operator() @ 1445af800

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EIoHttpFlags": Some values do not have unique names */

void __thiscall
`UE::IoStore::HttpIoDispatcher::FHttpDispatcher::TryReadFromCache'::__l14::<lambda_2>::operator()
          (void *this)

{
  longlong lVar1;
  FIoHttpRange local_res8 [4];
  uint uVar2;
  bool bVar3;
  TArray<FAnsiString,TSizedDefaultAllocator<32>_> local_18;
  
  lVar1 = *(longlong *)((longlong)this + 8);
  if (*(int *)(lVar1 + 0xa8) == 0) {
    UE::IoStore::FOnDemandIoBackendStats::OnCacheGet
              (UE::IoStore::GStatistics,
               (ulonglong)
               CONCAT14(*(undefined1 *)(*(longlong *)(lVar1 + 0x88) + 0x18),
                        *(undefined4 *)(*(longlong *)(lVar1 + 0x88) + 8)));
    bVar3 = true;
    uVar2 = 200;
  }
  else {
    if ((*(int *)(lVar1 + 0xa8) != 3) && ((*(uint *)(lVar1 + 0xac) & 0x10) == 0)) {
      if (*(int *)(*(longlong *)((longlong)this + 8) + 0xa8) == 6) {
        UE::IoStore::FOnDemandIoBackendStats::OnCacheError(UE::IoStore::GStatistics);
      }
      UE::IoStore::HttpIoDispatcher::FHttpQueue::Enqueue
                ((FHttpQueue *)(*(longlong *)this + 0x38),*(FHttpRequest **)((longlong)this + 8));
                    /* WARNING: Could not recover jumptable at 0x0001445af894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(*(longlong *)this + 0xd8) + 0x10))();
      return;
    }
    bVar3 = false;
    uVar2 = 0;
  }
  local_res8[0].Max = 0;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  local_res8[0].Min = 0xffffffff;
  UE::IoStore::HttpIoDispatcher::FHttpDispatcher::CompleteRequest
            (*(FHttpDispatcher **)this,*(FHttpRequest **)((longlong)this + 8),&local_18,
             &(*(FHttpRequest **)((longlong)this + 8))->Buffer,local_res8,uVar2,bVar3);
  DestructItems<FAnsiString,int>((FAnsiString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// CacheResponse @ 1445b5410

/* WARNING: Enum "Type": Some values do not have unique names */

FIoStatus * __thiscall
UE::IoStore::HttpIoDispatcher::FHttpDispatcher::CacheResponse
          (FHttpDispatcher *this,FIoStatus *__return_storage_ptr__,FIoHttpResponse *param_1)

{
  int *piVar1;
  int iVar2;
  TRefCountPtr<FIoBuffer::BufCore> this_00;
  FIoHttpResponse *pFVar3;
  TRefCountPtr<FIoBuffer::BufCore> local_res20;
  
  if ((((param_1->Flags & Cached) != None) || (!GHttpCacheEnabled)) || (this->_padding_ == 0)) {
    FIoStatus::FIoStatus(__return_storage_ptr__,Ok);
    return __return_storage_ptr__;
  }
  if (param_1->ErrorCode == Ok) {
    for (pFVar3 = param_1; pFVar3 != (FIoHttpResponse *)&param_1->field_0x14;
        pFVar3 = (FIoHttpResponse *)((pFVar3->CacheKey).Hash + 4)) {
      if (*(int *)(pFVar3->CacheKey).Hash != 0) {
        local_res20.Reference = (param_1->Body).CorePtr.Reference;
        if ((local_res20.Reference)->DataSizeHigh != '\0' ||
            (local_res20.Reference)->DataSizeLow != 0) {
          if (local_res20.Reference != (BufCore *)0x0) {
            LOCK();
            (local_res20.Reference)->NumRefs = (local_res20.Reference)->NumRefs + 1;
            UNLOCK();
          }
          (**(code **)(*(longlong *)this->_padding_ + 0x38))
                    ((longlong *)this->_padding_,__return_storage_ptr__,param_1,&local_res20);
          this_00.Reference = local_res20.Reference;
          if (local_res20.Reference != (BufCore *)0x0) {
            FIoBuffer::BufCore::CheckRefCount(local_res20.Reference);
            LOCK();
            piVar1 = &(this_00.Reference)->NumRefs;
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              FIoBuffer::BufCore::~BufCore(this_00.Reference);
              ::operator_delete(this_00.Reference,0x20);
            }
          }
          return __return_storage_ptr__;
        }
        break;
      }
    }
  }
  FIoStatus::FIoStatus(__return_storage_ptr__,InvalidParameter);
  return __return_storage_ptr__;
}

// CancelRequest @ 1445b69c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EIoHttpFlags": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::IoStore::HttpIoDispatcher::FHttpDispatcher::CancelRequest(FHttpDispatcher *this,ulong64 param_1)

{
  atomic<unsigned_int> *paVar1;
  undefined1 *this_00;
  char cVar2;
  byte bVar3;
  atomic<unsigned_int> aVar4;
  uint uVar5;
  code *pcVar6;
  bool bVar7;
  FTaskBase *this_01;
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  
  if (param_1 == 0) {
    bVar7 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4214109730584394773>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpIoDispacher.cpp"
                       ,0x3eb,"Handle != 0");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    uVar5 = *(uint *)(param_1 + 0xac);
    if ((uVar5 & 0x70) == 0) {
      LOCK();
      *(uint *)(param_1 + 0xac) = *(uint *)(param_1 + 0xac) | 0x10;
      UNLOCK();
      if (5 < (byte)LogHttpIoDispatcher._0_1_) {
        Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogHttpIoDispatcher);
      }
      if ((uVar5 & 2) != 0) {
        (**(code **)(*(longlong *)this->_padding_ + 0x30))
                  ((longlong *)this->_padding_,param_1 + 0x88);
      }
      bVar7 = FHttpQueue::Cancel((FHttpQueue *)&this->Thread,(FHttpRequest *)param_1);
      if (bVar7) {
        this_01 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                  ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                              *)&Tasks::Private::SmallTaskAllocator);
        if (this_01 == (FTaskBase *)0x0) {
          Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x100);
        }
        else {
          Tasks::Private::FTaskBase::FTaskBase(this_01,2,true);
          this_01->_padding_ =
               (longlong)
               &Tasks::Private::
                TExecutableTaskBase<`UE::IoStore::HttpIoDispatcher::FHttpDispatcher::CancelRequest'::`32'::<lambda_1>,void,void>
                ::_vftable_;
          Tasks::Private::FTaskBase::Init
                    (this_01,
                     L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpIoDispacher.cpp(1027)"
                     ,BackgroundLow,None,None);
          this_01[1]._padding_ = (longlong)&this[-1].UnpauseCommand;
          this_01[1]._padding_ = param_1;
          this_01->_padding_ =
               (longlong)
               &Tasks::Private::
                TExecutableTask<`UE::IoStore::HttpIoDispatcher::FHttpDispatcher::CancelRequest'::`32'::<lambda_1>_>
                ::_vftable_;
          Tasks::Private::FTaskBase::TryLaunch(this_01,0x100);
          LOCK();
          paVar1 = &this_01->RefCount;
          aVar4 = *paVar1;
          *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar4 == (atomic<unsigned_int>)0x1) {
            (**(code **)this_01->_padding_)(this_01,1);
          }
        }
      }
      if (GIaxHttpEnableInflightCancellation != false) {
        this_00 = &(this->HostGroupRegisterd).field_0x18;
        LOCK();
        cVar2 = *this_00;
        if (cVar2 == '\0') {
          *this_00 = 1;
        }
        UNLOCK();
        if (cVar2 != '\0') {
          FMutex::LockSlow((FMutex *)this_00);
        }
        local_28 = 0;
        FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if ((undefined8 *)(param_1 + 0xc0) != &local_28) {
          *(undefined8 *)(param_1 + 0xc0) = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    ((FSharedReferencer<1> *)(param_1 + 200),&FStack_20);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_20.ReferenceController);
        LOCK();
        bVar3 = *this_00;
        *this_00 = *this_00 + -1;
        UNLOCK();
        if ((bVar3 & 2) != 0) {
          FMutex::WakeWaitingThread((FMutex *)this_00);
        }
      }
    }
  }
  return;
}

// CompleteHttpRequest @ 1445b9830

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EIoHttpFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::HttpIoDispatcher::FHttpDispatcher::CompleteHttpRequest
          (FHttpDispatcher *this,FHttpRequest *param_1,FMultiEndpointHttpClientResponse *param_2,
          FIASHostGroup *param_3,FIoHttpRange *param_4)

{
  uchar uVar1;
  BufCore *pBVar2;
  bool bVar3;
  
  if (param_2->RetryCount != 0) {
    FOnDemandIoBackendStats::OnHttpRetry(GStatistics,(param_1->Options).Category == '\x01');
  }
  if (param_2->StatusCode - 200 < 100) {
    FIASHostGroup::OnSuccessfulResponse(param_3);
    if (param_2->CDNCacheStatus == -1) {
      GHttpCdnCacheUnknown = GHttpCdnCacheUnknown + 1;
    }
    else if (param_2->CDNCacheStatus == '\0') {
      GHttpCdnCacheMiss = GHttpCdnCacheMiss + 1;
    }
    else {
      GHttpCdnCacheHit = GHttpCdnCacheHit + 1;
    }
    pBVar2 = (param_2->Body).CorePtr.Reference;
    FOnDemandIoBackendStats::OnHttpGet
              (GStatistics,(param_1->Options).Category == '\x01',
               (ulonglong)CONCAT14(pBVar2->DataSizeHigh,pBVar2->DataSizeLow),
               (ulonglong)(param_2->Sample).RecvMs + (ulonglong)(param_2->Sample).WaitMs +
               (ulonglong)(param_2->Sample).SendMs);
  }
  else {
    uVar1 = (param_1->Options).Category;
    if (param_2->bCanceled == false) {
      FOnDemandIoBackendStats::OnHttpError(GStatistics,uVar1 == '\x01');
      bVar3 = FIASHostGroup::OnFailedResponse(param_3);
      if (bVar3) {
        FOnDemandIoBackendStats::OnHttpDisconnected(GStatistics);
      }
    }
    else {
      FOnDemandIoBackendStats::OnHttpCancel(GStatistics,uVar1 == '\x01');
    }
  }
  CompleteRequest(this,param_1,&param_2->Headers,&param_2->Body,param_4,param_2->StatusCode,false);
  return;
}

// CompleteRequest @ 1445bb120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EIoHttpFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::HttpIoDispatcher::FHttpDispatcher::CompleteRequest
          (FHttpDispatcher *this,FHttpRequest *param_1,
          TArray<FAnsiString,TSizedDefaultAllocator<32>_> *param_2,FIoBuffer *param_3,
          FIoHttpRange *param_4,uint param_5,bool param_6)

{
  atomic<int> *paVar1;
  int iVar2;
  atomic<int> aVar3;
  uint uVar4;
  uint uVar5;
  FHttpRequest *pFVar6;
  BufCore *pBVar7;
  char *pcVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  FIoBuffer FVar11;
  bool bVar12;
  FIoBuffer *pFVar13;
  FIoHttpHeaders *pFVar14;
  undefined8 uVar15;
  int *piVar16;
  longlong *plVar17;
  BufCore *pBVar18;
  ulonglong uVar19;
  BufCore *pBVar20;
  ulonglong uVar21;
  uint uVar22;
  atomic<EIoErrorCode> aVar23;
  ulonglong uVar24;
  undefined1 auStackY_138 [32];
  FIoBuffer local_f8;
  FIoBuffer local_f0;
  FIoBuffer local_e8;
  TArray<FAnsiString,TSizedDefaultAllocator<32>_> *local_e0;
  FIoHttpHeaders local_d8;
  TMemoryView<void_const_> local_c8;
  code *local_b8;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  FScriptContainerElement *local_70;
  int local_68;
  int local_64;
  BufCore *local_60;
  atomic<EIoErrorCode> local_58;
  uint local_54;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_138;
  local_e0 = param_2;
  if ((GIasPoisonCache) && (param_6)) {
    pBVar18 = (param_3->CorePtr).Reference;
    uVar21 = 0;
    if (pBVar18->DataSizeHigh != '\0' || pBVar18->DataSizeLow != 0) {
      do {
        pBVar18->DataPtr[uVar21] = 'M';
        uVar21 = uVar21 + 1;
        pBVar18 = (param_3->CorePtr).Reference;
      } while (uVar21 < CONCAT14(pBVar18->DataSizeHigh,pBVar18->DataSizeLow));
    }
  }
  do {
    if (param_1 == (FHttpRequest *)0x0) {
      return;
    }
    pFVar6 = param_1->Next;
    param_1->Next = (FHttpRequest *)0x0;
    if ((((uint)(param_1->Flags).Flags & 0x60) != 0) &&
       (bVar12 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_4214109730584394330>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpIoDispacher.cpp"
                            ,0x5a6,
                            "!ToComplete->Flags.HasAny(EHttpRequestFlags::Completing | EHttpRequestFlags::Completed)"
                           ), bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    LOCK();
    (param_1->Flags).Flags = (atomic<unsigned_int>)((uint)(param_1->Flags).Flags | 0x20);
    UNLOCK();
    LOCK();
    (param_1->Flags).Flags = (atomic<unsigned_int>)((uint)(param_1->Flags).Flags & 0xfffffff5);
    UNLOCK();
    pBVar18 = (param_3->CorePtr).Reference;
    aVar23 = (atomic<EIoErrorCode>)0x6;
    if (param_5 - 200 < 100) {
      aVar23 = (atomic<EIoErrorCode>)0x0;
    }
    if (pBVar18 != (BufCore *)0x0) {
      LOCK();
      pBVar18->NumRefs = pBVar18->NumRefs + 1;
      UNLOCK();
    }
    pBVar20 = pBVar18;
    uVar22 = param_5;
    if (((uint)(param_1->Flags).Flags & 0x10) != 0) {
      aVar23 = (atomic<EIoErrorCode>)0x3;
      pFVar13 = FIoBuffer::FIoBuffer(&local_f8);
      if (&local_f0 != pFVar13) {
        pBVar20 = (pFVar13->CorePtr).Reference;
        (pFVar13->CorePtr).Reference = (BufCore *)0x0;
        if (pBVar18 != (BufCore *)0x0) {
          FIoBuffer::BufCore::CheckRefCount(pBVar18);
          LOCK();
          piVar16 = &pBVar18->NumRefs;
          iVar2 = *piVar16;
          *piVar16 = *piVar16 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            FIoBuffer::BufCore::~BufCore(pBVar18);
            ::operator_delete(pBVar18,0x20);
          }
        }
      }
      FVar11.CorePtr.Reference = local_f8.CorePtr.Reference;
      uVar22 = 0;
      if (local_f8.CorePtr.Reference != (BufCore *)0x0) {
        FIoBuffer::BufCore::CheckRefCount((BufCore *)local_f8.CorePtr.Reference);
        LOCK();
        piVar16 = (int *)((longlong)FVar11.CorePtr.Reference + 0xc);
        iVar2 = *piVar16;
        *piVar16 = *piVar16 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          FIoBuffer::BufCore::~BufCore((BufCore *)FVar11.CorePtr.Reference);
          ::operator_delete((void *)FVar11.CorePtr.Reference,0x20);
          uVar22 = 0;
        }
      }
    }
    pBVar18 = pBVar20;
    if ((!param_6) && (aVar23 == (atomic<EIoErrorCode>)0x0)) {
      uVar4 = (param_1->Options).Range.Min;
      uVar5 = (param_1->Options).Range.Max;
      if (uVar4 <= uVar5) {
        uVar24 = (ulonglong)(uVar5 - uVar4);
        uVar21 = (ulonglong)uVar4;
        if (param_4->Min <= param_4->Max) {
          if ((uVar4 < param_4->Min) &&
             (bVar12 = Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_4214109730584394306>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpIoDispacher.cpp"
                                  ,0x5be,"Range.GetMin() >= TotalRange.GetMin()"), bVar12)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          if ((param_4->Max < (param_1->Options).Range.Max) &&
             (bVar12 = Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_4214109730584394305>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpIoDispacher.cpp"
                                  ,0x5bf,"Range.GetMax() <= TotalRange.GetMax()"), bVar12)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          uVar21 = (ulonglong)uVar4 - (ulonglong)param_4->Min;
        }
        pBVar7 = (param_3->CorePtr).Reference;
        uVar19 = (ulonglong)CONCAT14(pBVar7->DataSizeHigh,pBVar7->DataSizeLow);
        if (uVar19 < uVar21) {
          uVar21 = uVar19;
        }
        local_c8.Data = pBVar7->DataPtr + uVar21;
        local_c8.Size = uVar24;
        if (uVar19 - uVar21 < uVar24) {
          local_c8.Size = uVar19 - uVar21;
        }
        pFVar13 = FIoBuffer::FIoBuffer(&local_e8,&local_c8,param_3);
        if (&local_f0 != pFVar13) {
          pBVar18 = (pFVar13->CorePtr).Reference;
          (pFVar13->CorePtr).Reference = (BufCore *)0x0;
          if (pBVar20 != (BufCore *)0x0) {
            FIoBuffer::BufCore::CheckRefCount(pBVar20);
            LOCK();
            piVar16 = &pBVar20->NumRefs;
            iVar2 = *piVar16;
            *piVar16 = *piVar16 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              FIoBuffer::BufCore::~BufCore(pBVar20);
              ::operator_delete(pBVar20,0x20);
            }
          }
        }
        FVar11.CorePtr.Reference = local_e8.CorePtr.Reference;
        if (local_e8.CorePtr.Reference != (BufCore *)0x0) {
          FIoBuffer::BufCore::CheckRefCount((BufCore *)local_e8.CorePtr.Reference);
          LOCK();
          piVar16 = (int *)((longlong)FVar11.CorePtr.Reference + 0xc);
          iVar2 = *piVar16;
          *piVar16 = *piVar16 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            FIoBuffer::BufCore::~BufCore((BufCore *)FVar11.CorePtr.Reference);
            ::operator_delete((void *)FVar11.CorePtr.Reference,0x20);
          }
        }
      }
    }
    local_b8 = *(code **)&param_1->OnCompleted;
    local_90 = *(longlong **)&(param_1->OnCompleted).field_0x28;
    *(undefined8 *)&(param_1->OnCompleted).field_0x28 = 0;
    local_a8 = *(longlong *)&(param_1->OnCompleted).field_0x10;
    uStack_a0 = *(undefined8 *)&(param_1->OnCompleted).field_0x18;
    local_98 = *(undefined8 *)&(param_1->OnCompleted).field_0x20;
    if (local_b8 != (code *)0x0) {
      *(undefined8 *)&param_1->OnCompleted = 0;
    }
    pFVar14 = FIoHttpHeaders::Create(&local_d8,local_e0);
    local_78 = *(undefined4 *)((param_1->CacheKey).Hash + 0x10);
    local_88 = *(undefined8 *)(param_1->CacheKey).Hash;
    uStack_80 = *(undefined8 *)((param_1->CacheKey).Hash + 8);
    local_70 = (pFVar14->Headers).AllocatorInstance.Data;
    (pFVar14->Headers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68 = (pFVar14->Headers).ArrayNum;
    local_64 = (pFVar14->Headers).ArrayMax;
    (pFVar14->Headers).ArrayNum = 0;
    (pFVar14->Headers).ArrayMax = 0;
    if (pBVar18 != (BufCore *)0x0) {
      LOCK();
      pBVar18->NumRefs = pBVar18->NumRefs + 1;
      UNLOCK();
    }
    local_60 = pBVar18;
    local_58 = aVar23;
    local_54 = uVar22;
    local_50 = param_6;
    Core::Private::Function::CheckCallable(local_b8);
    pcVar10 = local_b8;
    plVar17 = &local_a8;
    if (local_90 != (longlong *)0x0) {
      plVar17 = local_90;
    }
    uVar15 = (**(code **)(*plVar17 + 8))();
    (*pcVar10)(uVar15,&local_88);
    pBVar20 = local_60;
    if (local_60 != (BufCore *)0x0) {
      FIoBuffer::BufCore::CheckRefCount(local_60);
      LOCK();
      piVar16 = &pBVar20->NumRefs;
      iVar2 = *piVar16;
      *piVar16 = *piVar16 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FIoBuffer::BufCore::~BufCore(pBVar20);
        ::operator_delete(pBVar20,0x20);
      }
    }
    DestructItems<FAnsiString,int>((FAnsiString *)local_70,local_68);
    if (local_70 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70);
    }
    DestructItems<FAnsiString,int>
              ((FAnsiString *)local_d8.Headers.AllocatorInstance.Data,local_d8.Headers.ArrayNum);
    if (local_d8.Headers.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Headers.AllocatorInstance.Data);
    }
    LOCK();
    (param_1->Flags).Flags = (atomic<unsigned_int>)((uint)(param_1->Flags).Flags | 0x40);
    UNLOCK();
    LOCK();
    param_1->CompletionStatus = aVar23;
    UNLOCK();
    LOCK();
    paVar1 = &param_1->RefCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->CancelationToken).SharedReferenceCount.ReferenceController);
      pcVar8 = (param_1->RelativeUrl).Url.Chars;
      if (pcVar8 != (char *)0x0) {
        piVar16 = (int *)(pcVar8 + -8);
        LOCK();
        iVar2 = *piVar16;
        *piVar16 = *piVar16 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          FMemory::Free(piVar16);
        }
      }
      pBVar20 = (param_1->Buffer).CorePtr.Reference;
      if (pBVar20 != (BufCore *)0x0) {
        FIoBuffer::BufCore::CheckRefCount(pBVar20);
        LOCK();
        piVar16 = &pBVar20->NumRefs;
        iVar2 = *piVar16;
        *piVar16 = *piVar16 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          FIoBuffer::BufCore::~BufCore(pBVar20);
          ::operator_delete(pBVar20,0x20);
        }
      }
      DestructItems<FAnsiString,int>
                ((FAnsiString *)(param_1->Headers).Headers.AllocatorInstance.Data,
                 (param_1->Headers).Headers.ArrayNum);
      pFVar9 = (param_1->Headers).Headers.AllocatorInstance.Data;
      if (pFVar9 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar9);
      }
      if (*(longlong *)&param_1->OnCompleted != 0) {
        plVar17 = *(longlong **)&(param_1->OnCompleted).field_0x28;
        if (plVar17 == (longlong *)0x0) {
          plVar17 = (longlong *)&(param_1->OnCompleted).field_0x10;
        }
        (**(code **)(*plVar17 + 0x10))();
      }
      TLinearAllocatorBase<UE::IoStore::HttpIoDispatcher::FHttpRequestBlockAllocationTag,0>::Free
                (param_1);
    }
    if (local_b8 != (code *)0x0) {
      plVar17 = &local_a8;
      if (local_90 != (longlong *)0x0) {
        plVar17 = local_90;
      }
      (**(code **)(*plVar17 + 0x10))();
    }
    param_1 = pFVar6;
    if (pBVar18 != (BufCore *)0x0) {
      FIoBuffer::BufCore::CheckRefCount(pBVar18);
      LOCK();
      piVar16 = &pBVar18->NumRefs;
      iVar2 = *piVar16;
      *piVar16 = *piVar16 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FIoBuffer::BufCore::~BufCore(pBVar18);
        ::operator_delete(pBVar18,0x20);
      }
    }
  } while( true );
}

// CreateRequest @ 1445c2200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EIoHttpFlags": Some values do not have unique names */

ulong64 __thiscall
UE::IoStore::HttpIoDispatcher::FHttpDispatcher::CreateRequest
          (FHttpDispatcher *this,ulong64 *param_1,ulong64 *param_2,FName *param_3,
          FIoRelativeUrl *param_4,FIoHttpOptions *param_5,FIoHttpHeaders *param_6,
          TUniqueFunction<void___cdecl(UE::FIoHttpResponse_&&)> *param_7,FIoHash *param_8)

{
  FIoHttpHeaders *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  char *pcVar4;
  longlong lVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  FName *pFVar14;
  bool bVar15;
  void *_Dst;
  ulong64 uVar16;
  FBlake3Hash *pFVar17;
  int *piVar18;
  undefined1 auStackY_838 [32];
  FName *local_808;
  FIoRelativeUrl *local_800;
  FIoHash local_7f8;
  FBlake3Hash local_7e4;
  FBlake3 local_7c0;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_838;
  local_800 = param_4;
  local_808 = param_3;
  _Dst = TLinearAllocatorBase<UE::IoStore::HttpIoDispatcher::FHttpRequestBlockAllocationTag,0>::
         Malloc(0xd0,0x10);
  if (_Dst == (void *)0x0) {
    _Dst = (void *)0x0;
  }
  else {
    memset(_Dst,0,0xd0);
    *(undefined4 *)((longlong)_Dst + 0x70) = 0xffffffff;
    *(undefined4 *)((longlong)_Dst + 0x80) = 1;
    FIoBuffer::FIoBuffer((FIoBuffer *)((longlong)_Dst + 0x88));
    *(undefined8 *)((longlong)_Dst + 0xa8) = 1;
    *(undefined8 *)((longlong)_Dst + 0x90) = 0;
    *(undefined8 *)((longlong)_Dst + 0x98) = 0;
    *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
    *(undefined4 *)((longlong)_Dst + 0xb0) = 0;
    *(undefined4 *)((longlong)_Dst + 0xb4) = 1;
    FHttpRequest::NextSeqNo = FHttpRequest::NextSeqNo + 1;
    *(uint *)((longlong)_Dst + 0xb8) = FHttpRequest::NextSeqNo;
    *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
    *(undefined8 *)((longlong)_Dst + 200) = 0;
  }
  uVar7 = *(undefined8 *)&param_7->field_0x8;
  uVar8 = *(undefined8 *)((longlong)_Dst + 0x30);
  uVar9 = *(undefined8 *)((longlong)_Dst + 0x38);
  uVar10 = *(undefined8 *)((longlong)_Dst + 0x40);
  uVar11 = *(undefined8 *)((longlong)_Dst + 0x48);
  uVar12 = *(undefined8 *)((longlong)_Dst + 0x50);
  uVar13 = *(undefined8 *)((longlong)_Dst + 0x58);
  *(undefined8 *)((longlong)_Dst + 0x30) = *(undefined8 *)param_7;
  *(undefined8 *)((longlong)_Dst + 0x38) = uVar7;
  uVar7 = *(undefined8 *)&param_7->field_0x18;
  *(undefined8 *)((longlong)_Dst + 0x40) = *(undefined8 *)&param_7->field_0x10;
  *(undefined8 *)((longlong)_Dst + 0x48) = uVar7;
  uVar7 = *(undefined8 *)&param_7->field_0x28;
  *(undefined8 *)((longlong)_Dst + 0x50) = *(undefined8 *)&param_7->field_0x20;
  *(undefined8 *)((longlong)_Dst + 0x58) = uVar7;
  *(undefined8 *)param_7 = uVar8;
  *(undefined8 *)&param_7->field_0x8 = uVar9;
  *(undefined8 *)&param_7->field_0x10 = uVar10;
  *(undefined8 *)&param_7->field_0x18 = uVar11;
  *(undefined8 *)&param_7->field_0x20 = uVar12;
  *(undefined8 *)&param_7->field_0x28 = uVar13;
  pFVar1 = (FIoHttpHeaders *)((longlong)_Dst + 0x60);
  if (pFVar1 != param_6) {
    DestructItems<FAnsiString,int>
              ((FAnsiString *)(pFVar1->Headers).AllocatorInstance.Data,
               *(int *)((longlong)_Dst + 0x68));
    pFVar3 = (pFVar1->Headers).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar1->Headers).AllocatorInstance.Data = (param_6->Headers).AllocatorInstance.Data;
    (param_6->Headers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)_Dst + 0x68) = (param_6->Headers).ArrayNum;
    *(int *)((longlong)_Dst + 0x6c) = (param_6->Headers).ArrayMax;
    (param_6->Headers).ArrayNum = 0;
    (param_6->Headers).ArrayMax = 0;
  }
  uVar7 = *(undefined8 *)&param_5->Priority;
  ((FIoHttpOptions *)((longlong)_Dst + 0x70))->Range = param_5->Range;
  *(undefined8 *)((longlong)_Dst + 0x78) = uVar7;
  *(undefined8 *)((longlong)_Dst + 0x80) = *(undefined8 *)&param_5->Flags;
  pcVar4 = (local_800->Url).Chars;
  lVar5 = *(longlong *)((longlong)_Dst + 0x90);
  if (pcVar4 != (char *)0x0) {
    LOCK();
    *(int *)(pcVar4 + -8) = *(int *)(pcVar4 + -8) + 1;
    UNLOCK();
  }
  if (lVar5 != 0) {
    piVar18 = (int *)(lVar5 + -8);
    LOCK();
    iVar2 = *piVar18;
    *piVar18 = *piVar18 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FMemory::Free(piVar18);
    }
  }
  pFVar14 = local_808;
  *(char **)((longlong)_Dst + 0x90) = pcVar4;
  *(FName *)((longlong)_Dst + 0xa0) = *local_808;
  if (*(longlong *)((longlong)_Dst + 0x98) != 0) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("Request->Next == nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpIoDispacher.cpp"
                        ,0x3ac,L"");
    if (bVar15) {
      pcVar6 = (code *)swi(3);
      uVar16 = (*pcVar6)();
      return uVar16;
    }
  }
  uVar7 = FIoHash::Zero.Hash._8_8_;
  if (param_8 == (FIoHash *)0x0) {
    *(undefined8 *)((longlong)_Dst + 4) = FIoHash::Zero.Hash._0_8_;
    *(undefined8 *)((longlong)_Dst + 0xc) = uVar7;
    *(undefined4 *)((longlong)_Dst + 0x14) = FIoHash::Zero.Hash._16_4_;
    local_808 = *(FName **)((longlong)_Dst + 0x90);
    if (local_808 != (FName *)0x0) {
      LOCK();
      local_808[-1].ComparisonIndex.Value = local_808[-1].ComparisonIndex.Value + 1;
      UNLOCK();
    }
    pFVar17 = (FBlake3Hash *)
              GetCacheKey(&local_7f8,pFVar14,(FIoRelativeUrl)&local_808,pFVar1,
                          (FIoHttpOptions *)((longlong)_Dst + 0x70));
  }
  else {
    uVar7 = *(undefined8 *)(param_8->Hash + 8);
    *(undefined8 *)((longlong)_Dst + 4) = *(undefined8 *)param_8->Hash;
    *(undefined8 *)((longlong)_Dst + 0xc) = uVar7;
    *(undefined4 *)((longlong)_Dst + 0x14) = *(undefined4 *)(param_8->Hash + 0x10);
    FBlake3::Reset(&local_7c0);
    FBlake3::Update(&local_7c0,param_8,0x14);
    FBlake3::Update(&local_7c0,param_5,8);
    pFVar17 = FBlake3::Finalize(&local_7c0,&local_7e4);
  }
  uVar7 = *(undefined8 *)(pFVar17->Hash + 8);
  *(undefined8 *)((longlong)_Dst + 0x18) = *(undefined8 *)pFVar17->Hash;
  *(undefined8 *)((longlong)_Dst + 0x20) = uVar7;
  *(undefined4 *)((longlong)_Dst + 0x28) = *(undefined4 *)(pFVar17->Hash + 0x10);
  if (*param_2 == 0) {
    if (*param_1 != 0) {
      bVar15 = Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_4214109730584394821>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpIoDispacher.cpp"
                          ,0x3bb,"First == 0");
      if (bVar15) {
        pcVar6 = (code *)swi(3);
        uVar16 = (*pcVar6)();
        return uVar16;
      }
    }
    *param_1 = (ulong64)_Dst;
  }
  else {
    *(void **)(*param_2 + 0x98) = _Dst;
  }
  *param_2 = (ulong64)_Dst;
  LOCK();
  *(int *)((longlong)_Dst + 0xb0) = *(int *)((longlong)_Dst + 0xb0) + 1;
  UNLOCK();
  return (ulong64)_Dst;
}

// EvictFromCache @ 1445cb100

/* WARNING: Enum "Type": Some values do not have unique names */

FIoStatus * __thiscall
UE::IoStore::HttpIoDispatcher::FHttpDispatcher::EvictFromCache
          (FHttpDispatcher *this,FIoStatus *__return_storage_ptr__,FIoHttpResponse *param_1)

{
  undefined1 *puVar1;
  longlong *plVar2;
  
  if ((GHttpCacheEnabled) && (plVar2 = (longlong *)this->_padding_, plVar2 != (longlong *)0x0)) {
    if (param_1->ErrorCode == Ok) {
      puVar1 = &param_1->field_0x14;
      for (; param_1 != (FIoHttpResponse *)puVar1;
          param_1 = (FIoHttpResponse *)((param_1->CacheKey).Hash + 4)) {
        if (*(int *)(param_1->CacheKey).Hash != 0) {
          (**(code **)(*plVar2 + 0x40))(plVar2);
          return __return_storage_ptr__;
        }
      }
    }
    FIoStatus::FIoStatus(__return_storage_ptr__,InvalidParameter);
    return __return_storage_ptr__;
  }
  FIoStatus::FIoStatus(__return_storage_ptr__,Ok);
  return __return_storage_ptr__;
}

// Exit @ 1445cd420

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::IoStore::HttpIoDispatcher::FHttpDispatcher::Exit(FHttpDispatcher *this)

{
  return;
}

// GetNextRequest @ 1445d66f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EIoHttpFlags": Some values do not have unique names */

FHttpRequest * __thiscall
UE::IoStore::HttpIoDispatcher::FHttpDispatcher::GetNextRequest(FHttpDispatcher *this)

{
  FHttpRequest *pFVar1;
  
  if (this->bRecreateHttpClient == (atomic<bool>)0x0) {
    pFVar1 = FHttpQueue::Dequeue(&this->HttpQueue);
    return pFVar1;
  }
  return (FHttpRequest *)0x0;
}

// GetRequestStatus @ 1445d7820

/* WARNING: Enum "Type": Some values do not have unique names */

EIoErrorCode __thiscall
UE::IoStore::HttpIoDispatcher::FHttpDispatcher::GetRequestStatus
          (FHttpDispatcher *this,ulong64 param_1)

{
  if (param_1 != 0) {
    return *(EIoErrorCode *)(param_1 + 0xb4);
  }
  return InvalidCode;
}

// GetSingleThreadInterface @ 1445d7870

/* WARNING: Enum "Type": Some values do not have unique names */

FSingleThreadRunnable * __thiscall
UE::IoStore::HttpIoDispatcher::FHttpDispatcher::GetSingleThreadInterface(FHttpDispatcher *this)

{
  FSingleThreadRunnable *pFVar1;
  
  pFVar1 = (FSingleThreadRunnable *)&this->_padding_;
  if (this == (FHttpDispatcher *)0x0) {
    pFVar1 = (FSingleThreadRunnable *)0x0;
  }
  return pFVar1;
}

// Init @ 1445d95c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UE::IoStore::HttpIoDispatcher::FHttpDispatcher::Init(FHttpDispatcher *this)

{
  bool bVar1;
  FDelegateHandle FVar2;
  <lambda_1> local_res10 [3];
  
  FVar2 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
          AddLambda<_UE::IoStore::HttpIoDispatcher::FHttpDispatcher::Init_::__l2::<lambda_1>_>
                    ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                      *)&OnRecreateHttpClient,local_res10);
                    /* WARNING: Load size is inaccurate */
  (this->OnRecreateHttpClientHandle).ID = *FVar2.ID;
  bVar1 = TryCreateHttpClient(this);
  return bVar1;
}

// IsHostGroupOk @ 1445ddd30

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::IoStore::HttpIoDispatcher::FHttpDispatcher::IsHostGroupOk(FHttpDispatcher *this,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  FHostGroupManager *this_00;
  FIASHostGroup local_18;
  
  this_00 = FHostGroupManager::Get();
  FHostGroupManager::Find(this_00,&local_18,*param_1);
  if (local_18.Impl.Object == (FImpl *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  iVar4 = FOnDemandHostGroup::PrimaryHostIndex(&(local_18.Impl.Object)->HostGroup);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.Impl.SharedReferenceCount.ReferenceController);
  return iVar4 != -1;
}

// IsHostGroupRegistered @ 1445dddb0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::IoStore::HttpIoDispatcher::FHttpDispatcher::IsHostGroupRegistered
          (FHttpDispatcher *this,FName *param_1)

{
  FName FVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FHostGroupManager *this_00;
  FIASHostGroup local_18;
  
  this_00 = FHostGroupManager::Get();
  FHostGroupManager::Find(this_00,&local_18,*param_1);
  if (local_18.Impl.Object == (FImpl *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  FVar1 = *param_1;
  FVar2 = (local_18.Impl.Object)->Name;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.Impl.SharedReferenceCount.ReferenceController);
  return FVar2 == FVar1;
}

// IssueRequest @ 1445de3d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EIoHttpFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::HttpIoDispatcher::FHttpDispatcher::IssueRequest(FHttpDispatcher *this,ulong64 param_1)

{
  FHttpRequest *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  
  if (param_1 == 0) {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4214109730584394805>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpIoDispacher.cpp"
                       ,0x3cb,"RequestHandle != 0");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    bVar3 = false;
    do {
      pFVar1 = ((FHttpRequest *)param_1)->Next;
      ((FHttpRequest *)param_1)->Next = (FHttpRequest *)0x0;
      LOCK();
      ((FHttpRequest *)param_1)->RefCount =
           (atomic<int>)((int)((FHttpRequest *)param_1)->RefCount + 1);
      UNLOCK();
      LOCK();
      (((FHttpRequest *)param_1)->Flags).Flags =
           (atomic<unsigned_int>)((uint)(((FHttpRequest *)param_1)->Flags).Flags | 1);
      UNLOCK();
      bVar4 = TryReadFromCache((FHttpDispatcher *)&this[-1].UnpauseCommand,(FHttpRequest *)param_1);
      if (!bVar4) {
        FHttpQueue::Enqueue((FHttpQueue *)&this->Thread,(FHttpRequest *)param_1);
        bVar3 = true;
      }
      param_1 = (ulong64)pFVar1;
    } while (pFVar1 != (FHttpRequest *)0x0);
    if (bVar3) {
                    /* WARNING: Could not recover jumptable at 0x0001445de4ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)&(this->HostGroupRegisterd).field_0x10 + 0x10))();
      return;
    }
  }
  return;
}

// OnHostGroupRegistered @ 1445e4500

/* WARNING: Enum "Type": Some values do not have unique names */

TMulticastDelegate<void___cdecl(FName_const_&),FDefaultDelegateUserPolicy> * __thiscall
UE::IoStore::HttpIoDispatcher::FHttpDispatcher::OnHostGroupRegistered(FHttpDispatcher *this)

{
  return (TMulticastDelegate<void___cdecl(FName_const_&),FDefaultDelegateUserPolicy> *)
         &(this->HttpQueue).PausedRequests.ArrayNum;
}

// OnPauseCommand @ 1445e5910

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::IoStore::HttpIoDispatcher::FHttpDispatcher::OnPauseCommand
          (FHttpDispatcher *this,bool param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2,
          FOutputDevice *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  EHttpRequestTypeFilter EVar7;
  
  iVar4 = param_2->ArrayNum;
  if (iVar4 < 2) {
    EVar7 = All;
    if (iVar4 != 0) {
      if ((iVar4 < 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (param_2->AllocatorInstance).Data;
      pwVar6 = L"";
      if (*(int *)(pFVar1 + 8) == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = *(wchar_t **)pFVar1;
      }
      iVar4 = FGenericPlatformStricmp::Stricmp(pwVar5,L"IAD");
      if (iVar4 == 0) {
        EVar7 = Installed;
      }
      else {
        if ((param_2->ArrayNum < 1) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = (param_2->AllocatorInstance).Data;
        if (*(int *)(pFVar1 + 8) != 0) {
          pwVar6 = *(wchar_t **)pFVar1;
        }
        iVar4 = FGenericPlatformStricmp::Stricmp(pwVar6,L"IAS");
        if (iVar4 != 0) {
          FOutputDevice::Log(param_3,(FName *)&LogHttpIoDispatcher.field_0x4,Error,
                             L"Invalid arg for command, expecting \'IAD\' or \'IAS\'");
          return;
        }
        EVar7 = Streaming;
      }
    }
    FHttpQueue::OnTogglePause(&this->HttpQueue,param_1,EVar7);
    if (!param_1) {
      (**(code **)(((this->WakeUp).Event)->_padding_ + 0x10))();
    }
  }
  else {
    FOutputDevice::Log(param_3,(FName *)&LogHttpIoDispatcher.field_0x4,Error,
                       L"Too many args for command, either 0 (all) or 1 (IAD/IAS) expected");
  }
  return;
}

// ProcessHttpRequests @ 1445ebac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001445ebeea) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EIoHttpFlags": Some values do not have unique names */

bool __thiscall
UE::IoStore::HttpIoDispatcher::FHttpDispatcher::ProcessHttpRequests(FHttpDispatcher *this)

{
  FPlatformRWLock *SRWLock;
  FIoHash *pFVar1;
  FMutex *this_00;
  atomic<unsigned_char> aVar2;
  EIoHttpFlags EVar3;
  uint uVar4;
  FName FVar5;
  FImpl *this_01;
  char *pcVar6;
  FMultiEndpointHttpClient *pFVar7;
  code *pcVar8;
  float fVar9;
  ForAnyElementType FVar10;
  FSharedReferencer<1> FVar11;
  bool bVar12;
  undefined1 uVar13;
  bool bVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  atomic<int> aVar18;
  FHttpRequest *pFVar19;
  FHostGroupManager *pFVar20;
  FIASHostGroup *pFVar21;
  FHttpRequest *pFVar22;
  FIoHash *pFVar23;
  size_t sVar24;
  void *pvVar25;
  TArray<FAnsiString,TSizedDefaultAllocator<32>_> *pTVar26;
  TReferenceControllerBase<1> *pTVar27;
  code **ppcVar28;
  ulong64 uVar29;
  atomic<int> *paVar30;
  int iVar31;
  TReferenceControllerBase<1> *pTVar32;
  FHttpQueue *this_02;
  uint uVar33;
  char *pcVar34;
  bool bVar35;
  undefined1 auStackY_2a8 [32];
  FIoOffsetAndLength local_260;
  int local_250 [2];
  FImpl *local_248;
  uint local_240;
  code *local_238;
  TArray<FAnsiString,TSizedDefaultAllocator<32>_> local_230;
  FIASHostGroup local_220;
  uint local_210;
  uint uStack_20c;
  int local_208;
  FHttpDispatcher *local_200;
  TArray<FAnsiString,TSizedDefaultAllocator<32>_> local_1f8;
  FIoHttpRange local_1e8;
  TArray<FAnsiString,TSizedDefaultAllocator<32>_> local_1e0;
  FIoHash *local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  char *local_1b8;
  int iStack_1b0;
  undefined4 uStack_1ac;
  TArrayView<unsigned_char_const_,int> local_1a8;
  TStringView<char> local_198;
  FCancelationToken *local_188;
  TReferenceControllerBase<1> *pTStack_180;
  TStringBuilderBase<char> local_178;
  char local_158 [128];
  TStringBuilderBase<char> local_d8;
  char local_b8 [41];
  char local_8f [7];
  code *local_88 [2];
  code *local_78 [3];
  code **local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  bVar35 = -1 < CpuChannel->Enabled;
  local_200 = this;
  if (bVar35) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1242,"FHttpDispatcher::ProcessHttpRequests",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpIoDispacher.cpp"
               ,0x4da);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1242);
  }
  RecreateHttpClientIfNeeded(this);
  this_02 = &this->HttpQueue;
  local_208 = 0x20;
  if (GIasHttpConcurrentRequests < 0x20) {
    local_208 = GIasHttpConcurrentRequests;
  }
  local_250[0] = 0;
  pFVar19 = FHttpQueue::Dequeue(this_02);
  fVar9 = __real_3b480190;
  if (pFVar19 != (FHttpRequest *)0x0) {
    local_178.Base = local_158;
    local_178.CurPos = local_158;
    local_178.End = (char *)&local_d8;
    local_d8.Base = local_b8;
    local_d8.CurPos = local_b8;
    local_d8.End = local_8f;
    local_178.bIsDynamic = false;
    local_178.bIsExternal = false;
    local_d8.bIsDynamic = false;
    local_d8.bIsExternal = false;
LAB_1445ebc20:
    if ((((uint)(pFVar19->Flags).Flags & 6) != 0) &&
       (bVar12 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_4214109730584394511>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpIoDispacher.cpp"
                            ,0x4f1,
                            "!HttpRequest->Flags.HasAny(EHttpRequestFlags::HttpQueued | EHttpRequestFlags::CacheInflight)"
                           ), bVar12)) {
      pcVar8 = (code *)swi(3);
      uVar13 = (*pcVar8)();
      return (bool)uVar13;
    }
    pFVar20 = FHostGroupManager::Get();
    FVar5 = pFVar19->HostGroupName;
    SRWLock = &pFVar20->Mutex;
    if ((SRWLock == (FPlatformRWLock *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mutex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                            ,0x1c,L""), bVar12)) {
      pcVar8 = (code *)swi(3);
      uVar13 = (*pcVar8)();
      return (bool)uVar13;
    }
    AcquireSRWLockShared((PSRWLOCK)SRWLock);
    pFVar21 = AlgoImpl::
              FindByPredicate<TArray<UE::IoStore::FIASHostGroup,TSizedDefaultAllocator<32>_>_&,_UE::IoStore::FHostGroupManager::Find_::__l2::<lambda_1>_>
                        (&pFVar20->HostGroups,(<lambda_1>)FVar5);
    if (pFVar21 == (FIASHostGroup *)0x0) {
      FIASHostGroup::FIASHostGroup(&local_220);
      this_01 = local_220.Impl.Object;
    }
    else {
      this_01 = (pFVar21->Impl).Object;
      local_220.Impl.SharedReferenceCount.ReferenceController =
           (pFVar21->Impl).SharedReferenceCount.ReferenceController;
      if (local_220.Impl.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_220.Impl.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_220.Impl.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
             1);
        UNLOCK();
      }
    }
    local_248 = this_01;
    local_220.Impl.Object = this_01;
    if (SRWLock != (FPlatformRWLock *)0x0) {
      ReleaseSRWLockShared((PSRWLOCK)SRWLock);
    }
    if ((this_01 == (FImpl *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar8 = (code *)swi(3);
      uVar13 = (*pcVar8)();
      return (bool)uVar13;
    }
    iVar15 = FOnDemandHostGroup::PrimaryHostIndex(&this_01->HostGroup);
    if (iVar15 != -1) {
      local_178.CurPos = local_178.Base;
      local_d8.CurPos = local_d8.Base;
      local_230.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_240 = 0;
      local_238 = (code *)0xffffffff;
      local_230.ArrayNum = 0;
      local_230.ArrayMax = 0;
      pFVar1 = &pFVar19->ChunkHash;
      for (pFVar23 = pFVar1; pFVar23 != &pFVar19->CacheKey; pFVar23 = (FIoHash *)(pFVar23->Hash + 4)
          ) {
        if (*(int *)pFVar23->Hash != 0) {
          uStack_1c0 = 0x14;
          local_1a8._12_4_ = uStack_1bc;
          local_1a8.ArrayNum = 0x14;
          local_1c8 = pFVar1;
          local_1a8.DataPtr = pFVar1->Hash;
          String::BytesToHexLower(&local_1a8,&local_d8);
          pcVar6 = (pFVar19->RelativeUrl).Url.Chars;
          pcVar34 = "";
          if (pcVar6 != (char *)0x0) {
            pcVar34 = pcVar6;
          }
          sVar24 = strlen(pcVar34);
          uVar29 = (ulong64)(int)sVar24;
          if (local_178.End < (TStringBuilderBase<char> *)(local_178.CurPos + uVar29)) {
            TStringBuilderBase<char>::Extend(&local_178,uVar29);
          }
          if ((int)sVar24 != 0) {
            pvVar25 = FGenericPlatformString::Memcpy(local_178.CurPos,pcVar34,uVar29);
            local_178.CurPos = (char *)(uVar29 + (longlong)pvVar25);
          }
          if (local_178.End < (TStringBuilderBase<char> *)(local_178.CurPos + 1)) {
            TStringBuilderBase<char>::Extend(&local_178,1);
          }
          pvVar25 = FGenericPlatformString::Memcpy(local_178.CurPos,&s__,1);
          pcVar6 = local_d8.Base;
          local_178.CurPos = (char *)((longlong)pvVar25 + 1);
          iVar15 = (int)local_d8.CurPos - (int)local_d8.Base;
          if (2 < iVar15) {
            iVar15 = 2;
          }
          iVar31 = 0;
          if (0 < iVar15) {
            iVar31 = iVar15;
          }
          uVar29 = (ulong64)iVar31;
          if (local_178.End < (TStringBuilderBase<char> *)(local_178.CurPos + uVar29)) {
            TStringBuilderBase<char>::Extend(&local_178,uVar29);
          }
          if (iVar31 != 0) {
            pvVar25 = FGenericPlatformString::Memcpy(local_178.CurPos,pcVar6,uVar29);
            local_178.CurPos = (char *)(uVar29 + (longlong)pvVar25);
          }
          if (local_178.End < (TStringBuilderBase<char> *)(local_178.CurPos + 1)) {
            TStringBuilderBase<char>::Extend(&local_178,1);
          }
          pvVar25 = FGenericPlatformString::Memcpy(local_178.CurPos,&s__,1);
          pcVar6 = local_d8.Base;
          iVar15 = (int)local_d8.CurPos - (int)local_d8.Base;
          local_178.CurPos = (char *)((longlong)pvVar25 + 1);
          uVar29 = (ulong64)iVar15;
          if (local_178.End < (TStringBuilderBase<char> *)(local_178.CurPos + uVar29)) {
            TStringBuilderBase<char>::Extend(&local_178,uVar29);
          }
          if (iVar15 != 0) {
            pvVar25 = FGenericPlatformString::Memcpy(local_178.CurPos,pcVar6,uVar29);
            local_178.CurPos = (char *)(uVar29 + (longlong)pvVar25);
          }
          if (local_178.End < (TStringBuilderBase<char> *)(local_178.CurPos + 8)) {
            TStringBuilderBase<char>::Extend(&local_178,8);
          }
          pvVar25 = FGenericPlatformString::Memcpy(local_178.CurPos,".iochunk",8);
          local_178.CurPos = (char *)((longlong)pvVar25 + 8);
          pFVar22 = pFVar19;
          uVar33 = 0xffffffff;
          uVar16 = 0;
          goto LAB_1445ec1a0;
        }
      }
      if ((pFVar19->Next != (FHttpRequest *)0x0) &&
         (bVar12 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_4214109730584394485>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpIoDispacher.cpp"
                              ,0x50b,"HttpRequest->Next == nullptr"), bVar12)) {
        pcVar8 = (code *)swi(3);
        uVar13 = (*pcVar8)();
        return (bool)uVar13;
      }
      pcVar6 = (pFVar19->RelativeUrl).Url.Chars;
      pcVar34 = "";
      if (pcVar6 != (char *)0x0) {
        pcVar34 = pcVar6;
      }
      sVar24 = strlen(pcVar34);
      uVar29 = (ulong64)(int)sVar24;
      if (local_178.End < (TStringBuilderBase<char> *)(local_178.CurPos + uVar29)) {
        TStringBuilderBase<char>::Extend(&local_178,uVar29);
      }
      if ((int)sVar24 != 0) {
        pvVar25 = FGenericPlatformString::Memcpy(local_178.CurPos,pcVar34,uVar29);
        local_178.CurPos = (char *)((longlong)pvVar25 + uVar29);
      }
      pTVar26 = FIoHttpHeaders::ToArray(&pFVar19->Headers,&local_1e0);
      if (&local_230 != pTVar26) {
        DestructItems<FAnsiString,int>((FAnsiString *)0x0,0);
        local_230.AllocatorInstance.Data = (pTVar26->AllocatorInstance).Data;
        (pTVar26->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        local_230.ArrayNum = pTVar26->ArrayNum;
        local_230.ArrayMax = pTVar26->ArrayMax;
        pTVar26->ArrayNum = 0;
        pTVar26->ArrayMax = 0;
      }
      DestructItems<FAnsiString,int>
                ((FAnsiString *)local_1e0.AllocatorInstance.Data,local_1e0.ArrayNum);
      uVar33 = local_240;
      if (local_1e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e0.AllocatorInstance.Data);
        uVar33 = local_240;
      }
      goto LAB_1445ebf2f;
    }
    FOnDemandIoBackendStats::OnHttpCancel(GStatistics,(pFVar19->Options).Category == '\x01');
    pFVar22 = (FHttpRequest *)0x0;
    local_1e8.Min = 0xffffffff;
    local_1e8.Max = 0;
    local_1f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1f8.ArrayNum = 0;
    local_1f8.ArrayMax = 0;
    CompleteRequest(this,pFVar19,&local_1f8,&pFVar19->Buffer,&local_1e8,0,false);
    DestructItems<FAnsiString,int>
              ((FAnsiString *)local_1f8.AllocatorInstance.Data,local_1f8.ArrayNum);
    if (local_1f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f8.AllocatorInstance.Data);
    }
    if (this->bRecreateHttpClient == (atomic<bool>)0x0) {
      pFVar22 = FHttpQueue::Dequeue(this_02);
    }
    goto LAB_1445ec572;
  }
  bVar12 = false;
LAB_1445ec68d:
  if (bVar35) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar12;
  while( true ) {
    uStack_20c = uVar4;
    if (uVar33 <= uVar16) {
      if (uVar33 < uVar17) {
        uVar17 = uVar33;
      }
      if (uVar4 < uVar16) {
        uStack_20c = uVar16;
      }
    }
    pFVar22 = pFVar22->Next;
    uVar33 = uVar17;
    local_210 = uVar17;
    uVar16 = uStack_20c;
    if (pFVar22 == (FHttpRequest *)0x0) break;
LAB_1445ec1a0:
    uVar4 = (pFVar22->Options).Range.Max;
    uVar17 = (pFVar22->Options).Range.Min;
    if (uVar4 < uVar17) {
      local_238 = (code *)0xffffffff;
      uVar33 = 0;
      goto LAB_1445ebf2f;
    }
  }
  local_238 = (code *)CONCAT44(uStack_20c,uVar17);
  uVar33 = uStack_20c;
LAB_1445ebf2f:
  if ((0.0 < GIaxInvalidUrlChance) &&
     (uVar16 = rand(), (float)(uVar16 & 0x7fff) * fVar9 < GIaxInvalidUrlChance)) {
    if (local_178.End < (TStringBuilderBase<char> *)(local_178.CurPos + 0x10)) {
      TStringBuilderBase<char>::Extend(&local_178,0x10);
    }
    pvVar25 = FGenericPlatformString::Memcpy(local_178.CurPos,"-DebugInvalidUrl",0x10);
    local_178.CurPos = (char *)((longlong)pvVar25 + 0x10);
  }
  FVar11.ReferenceController = local_220.Impl.SharedReferenceCount.ReferenceController;
  local_250[0] = local_250[0] + 1;
  LOCK();
  GHttpNumConcurrentRequests = (atomic<unsigned_int>)((int)GHttpNumConcurrentRequests + 1);
  UNLOCK();
  EVar3 = (pFVar19->Options).Flags;
  pFVar7 = (local_200->HttpClient).Ptr;
  if (local_220.Impl.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0)
  {
    paVar30 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar30 = &(local_220.Impl.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
    LOCK();
    *paVar30 = (atomic<int>)((int)*paVar30 + 1);
    UNLOCK();
  }
  local_88[0] = (code *)0x0;
  local_60 = (code **)0x0;
  local_60 = FMemory::Malloc(0x38,8);
  local_60[2] = (code *)pFVar19;
  *local_60 = (code *)&Core::Private::Function::
                       TFunction_OwnedObject<`UE::IoStore::HttpIoDispatcher::FHttpDispatcher::ProcessHttpRequests'::`9'::<lambda_1>,0,1>
                       ::_vftable_;
  local_60[1] = (code *)local_200;
  local_60[3] = local_238;
  local_60[4] = (code *)local_250;
  local_60[5] = (code *)local_248;
  local_60[6] = (code *)local_220.Impl.SharedReferenceCount.ReferenceController;
  if (FVar11.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar30 = (atomic<int>)((int)*paVar30 + 1);
    UNLOCK();
  }
  if (local_60 + 1 != (code **)0x0) {
    local_88[0] = Core::Private::Function::
                  TFunctionRefCaller<`UE::IoStore::HttpIoDispatcher::FHttpDispatcher::ProcessHttpRequests'::__l9::<lambda_1>,void,UE::IoStore::FMultiEndpointHttpClientResponse_&&>
                  ::Call;
  }
  if (uVar33 < (uint)local_238) {
    local_260.OffsetAndLength[0] = '\0';
    local_260.OffsetAndLength[1] = '\0';
    local_260.OffsetAndLength[2] = '\0';
    local_260.OffsetAndLength[3] = '\0';
    local_260.OffsetAndLength[4] = '\0';
    local_260.OffsetAndLength[5] = '\0';
    local_260.OffsetAndLength[6] = '\0';
    local_260.OffsetAndLength[7] = '\0';
    local_260.OffsetAndLength[8] = '\0';
    local_260.OffsetAndLength[9] = '\0';
  }
  else {
    iVar15 = uVar33 - (uint)local_238;
    local_260.OffsetAndLength._0_8_ =
         (ulonglong)CONCAT11((char)((uint)iVar15 >> 0x10),(char)((uint)iVar15 >> 0x18)) << 0x30;
    local_260.OffsetAndLength._0_8_ =
         (ulonglong)
         CONCAT34(local_260.OffsetAndLength._5_3_,
                  CONCAT13((char)local_238,
                           CONCAT12((char)((ulonglong)local_238 >> 8),
                                    CONCAT11((char)((ulonglong)local_238 >> 0x10),
                                             (char)((ulonglong)local_238 >> 0x18))))) << 8;
    local_260.OffsetAndLength[9] = (uchar)iVar15;
    local_260.OffsetAndLength[8] = (uchar)((uint)iVar15 >> 8);
  }
  iStack_1b0 = (int)local_178.CurPos - (int)local_178.Base;
  local_1b8 = local_178.Base;
  if ((local_248 == (FImpl *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    uVar13 = (*pcVar8)();
    return (bool)uVar13;
  }
  local_198._12_4_ = uStack_1ac;
  local_198.Size = iStack_1b0;
  local_198.DataPtr = local_1b8;
  aVar18 = (atomic<int>)
           FMultiEndpointHttpClient::Get
                     (pFVar7,&local_248->HostGroup,&local_198,&local_260,&local_230,
                      (EMultiEndpointRequestFlags)(EVar3 >> 1) & ResponseHeaders,
                      (TFunction<void___cdecl(UE::IoStore::FMultiEndpointHttpClientResponse_&&)> *)
                      local_88);
  if (local_88[0] != (code *)0x0) {
    ppcVar28 = local_88 + 2;
    if (local_60 != (code **)0x0) {
      ppcVar28 = local_60;
    }
    (**(code **)(*ppcVar28 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar11.ReferenceController);
  this = local_200;
  this_00 = &local_200->CancelationMutex;
  LOCK();
  bVar12 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar12) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar12) {
    FMutex::LockSlow(this_00);
  }
  pFVar7 = (this->HttpClient).Ptr;
  pTVar27 = ::operator_new(0x20);
  if (pTVar27 == (TReferenceControllerBase<1> *)0x0) {
    pTVar27 = (TReferenceControllerBase<1> *)0x0;
    pTVar32 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar27[1].SharedReferenceCount = aVar18;
    pTVar32 = pTVar27 + 1;
    pTVar27->SharedReferenceCount = (atomic<int>)0x1;
    pTVar27->WeakReferenceCount = (atomic<int>)0x1;
    pTVar27[1]._padding_ = (longlong)pFVar7;
    pTVar27->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFCancelationToken_HttpIoDispatcher_IoStore_UE___00_SharedPointerInternals__6B_
    ;
    if ((pTVar32 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("InObject != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x246,L""), bVar12)) {
      pcVar8 = (code *)swi(3);
      uVar13 = (*pcVar8)();
      return (bool)uVar13;
    }
    LOCK();
    pTVar27->SharedReferenceCount = (atomic<int>)((int)pTVar27->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar22 = (FHttpRequest *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar27);
  do {
    if (((uint)(pFVar19->Flags).Flags & 0x10) == 0) {
      if (pTVar27 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar27->SharedReferenceCount = (atomic<int>)((int)pTVar27->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_188 = (pFVar19->CancelationToken).Object;
      pTStack_180 = (pFVar19->CancelationToken).SharedReferenceCount.ReferenceController;
      (pFVar19->CancelationToken).Object = (FCancelationToken *)pTVar32;
      (pFVar19->CancelationToken).SharedReferenceCount.ReferenceController = pTVar27;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_180);
    }
    pFVar19 = pFVar19->Next;
  } while (pFVar19 != (FHttpRequest *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar27);
  LOCK();
  aVar2 = this_00->State;
  this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
  UNLOCK();
  if (((byte)aVar2 & 2) != 0) {
    FMutex::WakeWaitingThread(this_00);
  }
  iVar15 = local_208;
  if (local_208 <= local_250[0]) {
    bVar12 = -1 < CpuChannel->Enabled;
    if (bVar12) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId1353,"FHttpDispatcher::TickHttpSaturated",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpIoDispacher.cpp"
                 ,0x549);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1353);
    }
    while (iVar15 <= local_250[0]) {
      FMultiEndpointHttpClient::Tick((this->HttpClient).Ptr,-1,GIasHttpRateLimitKiBPerSecond);
    }
    if (bVar12) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  this_02 = &this->HttpQueue;
  if (this->bRecreateHttpClient == (atomic<bool>)0x0) {
    pFVar22 = FHttpQueue::Dequeue(this_02);
  }
  FVar10.Data = local_230.AllocatorInstance.Data;
  DestructItems<FAnsiString,int>((FAnsiString *)local_230.AllocatorInstance.Data,local_230.ArrayNum)
  ;
  if (FVar10.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar10.Data);
  }
LAB_1445ec572:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_220.Impl.SharedReferenceCount.ReferenceController);
  pFVar19 = pFVar22;
  if (pFVar22 != (FHttpRequest *)0x0) goto LAB_1445ebc20;
  if (CpuChannel->Enabled < 0) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1369,"FHttpDispatcher::TickHttp",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpIoDispacher.cpp"
               ,0x559);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1369);
  }
  do {
    bVar14 = FMultiEndpointHttpClient::Tick
                       ((this->HttpClient).Ptr,GIasHttpPollTimeoutMs,GIasHttpRateLimitKiBPerSecond);
    if (!bVar14) break;
    pFVar19 = (FHttpRequest *)0x0;
  } while ((this->bRecreateHttpClient != (atomic<bool>)0x0) ||
          (pFVar19 = FHttpQueue::Dequeue(this_02), pFVar19 == (FHttpRequest *)0x0));
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (pFVar19 == (FHttpRequest *)0x0) goto code_r0x0001445ec624;
  goto LAB_1445ebc20;
code_r0x0001445ec624:
  if ((local_250[0] != 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumConcurrentRequests == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpIoDispacher.cpp"
                          ,0x562,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    uVar13 = (*pcVar8)();
    return (bool)uVar13;
  }
  bVar12 = true;
  TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_d8);
  TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_178);
  goto LAB_1445ec68d;
}

// RecreateHttpClientIfNeeded @ 1445f1000

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::IoStore::HttpIoDispatcher::FHttpDispatcher::RecreateHttpClientIfNeeded(FHttpDispatcher *this)

{
  TUniquePtr<UE::IoStore::FMultiEndpointHttpClient,TDefaultDelete<UE::IoStore::FMultiEndpointHttpClient>_>
  *pTVar1;
  atomic<bool> aVar2;
  FMultiEndpointHttpClient *pFVar3;
  FMultiEndpointHttpClient *pFVar4;
  void *pvVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  FStaticLogRecord *pFVar9;
  bool bVar10;
  FMultiEndpointHttpClient *local_18 [2];
  
  LOCK();
  aVar2 = this->bRecreateHttpClient;
  this->bRecreateHttpClient = (atomic<bool>)0x0;
  UNLOCK();
  if (aVar2 == (atomic<bool>)0x0) {
    return;
  }
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1127,"FHttpDispatcher::RecreateHttpClientIfNeeded",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpIoDispacher.cpp"
               ,0x467);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1127);
  }
  pFVar3 = (this->HttpClient).Ptr;
  pTVar1 = &this->HttpClient;
  pTVar1->Ptr = (FMultiEndpointHttpClient *)0x0;
  local_18[0] = pFVar3;
  bVar8 = TryCreateHttpClient(this);
  if (bVar8) {
    if (pFVar3 != (FMultiEndpointHttpClient *)0x0) {
      local_18[0] = (FMultiEndpointHttpClient *)0x0;
      TDefaultDelete<UE::IoStore::FMultiEndpointHttpClient>::operator()
                ((TDefaultDelete<UE::IoStore::FMultiEndpointHttpClient> *)local_18,pFVar3);
    }
    if ((byte)LogIas._0_1_ < 4) goto LAB_1445f11cc;
    pFVar9 = &::LOG_Static;
  }
  else {
    if (pTVar1 != (TUniquePtr<UE::IoStore::FMultiEndpointHttpClient,TDefaultDelete<UE::IoStore::FMultiEndpointHttpClient>_>
                   *)local_18) {
      pFVar4 = pTVar1->Ptr;
      pTVar1->Ptr = pFVar3;
      local_18[0] = (FMultiEndpointHttpClient *)0x0;
      if (pFVar4 != (FMultiEndpointHttpClient *)0x0) {
        bVar8 = HTTP::FEventLoop::IsIdle(&pFVar4->EventLoop);
        if ((!bVar8) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("EventLoop.IsIdle()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpClient.cpp"
                               ,0xad,
                               L"FMultiEndpointHttpClient still has active requests on shutdown"),
           bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if ((*(int *)&(pFVar4->TicketLookupMap).field_0x8 !=
             *(int *)&(pFVar4->TicketLookupMap).field_0x34) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("TicketLookupMap.IsEmpty()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpClient.cpp"
                               ,0xae,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        *(undefined4 *)&(pFVar4->TicketLookupMap).field_0x48 = 0;
        pvVar5 = *(void **)&(pFVar4->TicketLookupMap).field_0x40;
        if (pvVar5 != (void *)0x0) {
          FMemory::Free(pvVar5);
        }
        TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::IoStore::FMultiEndpointHttpClient::FTicketInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::IoStore::FMultiEndpointHttpClient::FTicketInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::IoStore::FMultiEndpointHttpClient::FTicketInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)&pFVar4->TicketLookupMap);
        DestructItems<UE::IoStore::FMultiEndpointHttpClient::FRequest,int>
                  ((FRequest *)(pFVar4->Retries).AllocatorInstance.Data,(pFVar4->Retries).ArrayNum);
        pFVar6 = (pFVar4->Retries).AllocatorInstance.Data;
        if (pFVar6 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar6);
        }
        HTTP::FEventLoop::~FEventLoop(&pFVar4->EventLoop);
        DestructItems<TUniquePtr<UE::IoStore::FMultiEndpointHttpClient::FConnection,TDefaultDelete<UE::IoStore::FMultiEndpointHttpClient::FConnection>_>,int>
                  ((TUniquePtr<UE::IoStore::FMultiEndpointHttpClient::FConnection,TDefaultDelete<UE::IoStore::FMultiEndpointHttpClient::FConnection>_>
                    *)(pFVar4->Connections).AllocatorInstance.Data,(pFVar4->Connections).ArrayNum);
        pFVar6 = (pFVar4->Connections).AllocatorInstance.Data;
        if (pFVar6 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar6);
        }
        ::operator_delete(pFVar4,0xb0);
      }
    }
    if ((byte)LogIas._0_1_ < 3) goto LAB_1445f11cc;
    pFVar9 = &::LOG_Static;
  }
  Logging::Private::LogWithFields<UE::Logging::Private::FStaticLogRecord>
            ((FLogCategoryBase *)&LogIas,pFVar9);
LAB_1445f11cc:
  pFVar3 = local_18[0];
  if (local_18[0] != (FMultiEndpointHttpClient *)0x0) {
    bVar8 = HTTP::FEventLoop::IsIdle(&local_18[0]->EventLoop);
    if ((!bVar8) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("EventLoop.IsIdle()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpClient.cpp"
                           ,0xad,L"FMultiEndpointHttpClient still has active requests on shutdown"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((*(int *)&(pFVar3->TicketLookupMap).field_0x8 !=
         *(int *)&(pFVar3->TicketLookupMap).field_0x34) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("TicketLookupMap.IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpClient.cpp"
                           ,0xae,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    *(undefined4 *)&(pFVar3->TicketLookupMap).field_0x48 = 0;
    pvVar5 = *(void **)&(pFVar3->TicketLookupMap).field_0x40;
    if (pvVar5 != (void *)0x0) {
      FMemory::Free(pvVar5);
    }
    TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::IoStore::FMultiEndpointHttpClient::FTicketInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::IoStore::FMultiEndpointHttpClient::FTicketInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::IoStore::FMultiEndpointHttpClient::FTicketInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pFVar3->TicketLookupMap);
    DestructItems<UE::IoStore::FMultiEndpointHttpClient::FRequest,int>
              ((FRequest *)(pFVar3->Retries).AllocatorInstance.Data,(pFVar3->Retries).ArrayNum);
    pFVar6 = (pFVar3->Retries).AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    HTTP::FEventLoop::~FEventLoop(&pFVar3->EventLoop);
    DestructItems<TUniquePtr<UE::IoStore::FMultiEndpointHttpClient::FConnection,TDefaultDelete<UE::IoStore::FMultiEndpointHttpClient::FConnection>_>,int>
              ((TUniquePtr<UE::IoStore::FMultiEndpointHttpClient::FConnection,TDefaultDelete<UE::IoStore::FMultiEndpointHttpClient::FConnection>_>
                *)(pFVar3->Connections).AllocatorInstance.Data,(pFVar3->Connections).ArrayNum);
    pFVar6 = (pFVar3->Connections).AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    ::operator_delete(pFVar3,0xb0);
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// RegisterHostGroup @ 1445f1c70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001445f2109) */
/* WARNING: Enum "Type": Some values do not have unique names */

FIoStatus * __thiscall
UE::IoStore::HttpIoDispatcher::FHttpDispatcher::RegisterHostGroup
          (FHttpDispatcher *this,FIoStatus *__return_storage_ptr__,FName *param_1,
          TArrayView<FAnsiString_const_,int> *param_2,TStringView<char> *param_3)

{
  undefined1 *puVar1;
  int *this_00;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  TSharedString<wchar_t> TVar5;
  FHttpDispatcher *pFVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  FHostGroupManager *pFVar12;
  FIoStatus *pFVar13;
  wchar_t *pwVar14;
  size_t sVar15;
  char *pcVar16;
  FAnsiString *pFVar17;
  FString *pFVar18;
  FScriptContainerElement *pFVar19;
  ForAnyElementType FVar20;
  longlong *plVar21;
  longlong lVar22;
  ForAnyElementType this_01;
  longlong *plVar23;
  FScriptContainerElement *pFVar24;
  uint uVar25;
  FAnsiString *pFVar26;
  undefined1 auStackY_2c8 [32];
  undefined1 local_278;
  undefined1 local_277 [7];
  ForAnyElementType local_270;
  undefined8 local_268;
  FAnsiString local_260;
  TArray<FString,TSizedDefaultAllocator<32>_> local_250;
  FString local_240;
  FIoStatus local_230;
  FIASHostGroup local_220;
  FName *local_210;
  FIoStatus *local_208;
  FString local_200;
  TArrayView<FAnsiString_const_,int> *local_1f0;
  FHttpDispatcher *local_1e8;
  FIASHostGroup local_1e0;
  FScriptContainerElement *local_1d0;
  int iStack_1c8;
  undefined4 uStack_1c4;
  FDestructionSentinel local_1c0;
  TStringView<char> local_1a8;
  FAnsiString local_198;
  TArrayView<FAnsiString_const_,int> local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FReadAccessScope local_148;
  FString local_130;
  undefined1 local_120 [24];
  TReferenceControllerBase<1> *local_108;
  FScriptContainerElement local_f8 [128];
  ForAnyElementType local_78;
  FScriptContainerElement *local_70;
  int local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  local_210 = param_1;
  local_208 = __return_storage_ptr__;
  local_1f0 = param_2;
  local_1e8 = this;
  pFVar12 = FHostGroupManager::Get();
  FHostGroupManager::Find(pFVar12,&local_220,*param_1);
  if ((local_220.Impl.Object == (FImpl *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    pFVar13 = (FIoStatus *)(*pcVar4)();
    return pFVar13;
  }
  TVar5.Chars = FIoStatus::Ok.ErrorMessage.Chars;
  if ((local_220.Impl.Object)->Name == *param_1) {
    (__return_storage_ptr__->ErrorMessage).Chars = FIoStatus::Ok.ErrorMessage.Chars;
    if (TVar5.Chars != (wchar_t *)0x0) {
      LOCK();
      pwVar14 = TVar5.Chars + -4;
      *(int *)pwVar14 = *(int *)pwVar14 + 1;
      UNLOCK();
    }
    __return_storage_ptr__->ErrorCode = FIoStatus::Ok.ErrorCode;
    __return_storage_ptr__->SystemErrorCode = FIoStatus::Ok.SystemErrorCode;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_220.Impl.SharedReferenceCount.ReferenceController);
  }
  else {
    pFVar12 = FHostGroupManager::Get();
    local_1a8.DataPtr = param_3->DataPtr;
    local_1a8.Size = param_3->Size;
    local_1a8._12_4_ = *(undefined4 *)&param_3->field_0xc;
    FHostGroupManager::Register
              (pFVar12,(TIoStatusOr<UE::IoStore::FIASHostGroup> *)local_120,*param_1,&local_1a8);
    if (local_120._8_4_ == Ok) {
      local_270.Data = (FScriptContainerElement *)0x0;
      local_268 = 0;
      if (*param_1 == FOnDemandHostGroup::DefaultName) {
        local_200.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_200.Data.ArrayNum = 0;
        local_200.Data.ArrayMax = 0;
        pwVar14 = FCommandLine::Get();
        bVar7 = FParse::Value(pwVar14,L"Iax.DefaultHostGroup=",&local_200,true,(wchar_t **)0x0);
        if (bVar7) {
          local_250.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_250.ArrayNum = 0;
          local_250.ArrayMax = 0;
          ::FString::ParseIntoArray(&local_200,&local_250,L",",true);
          iVar2 = local_250.ArrayNum;
          pFVar24 = local_250.AllocatorInstance.Data + (longlong)local_250.ArrayNum * 0x10;
          this_01.Data = local_250.AllocatorInstance.Data;
          while( true ) {
            if (local_250.ArrayNum != iVar2) {
              local_278 = 0;
              `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (&local_278);
            }
            __return_storage_ptr__ = local_208;
            if (this_01.Data == pFVar24) break;
            ::FString::TrimStartAndEndInline((FString *)this_01.Data);
            bVar7 = ::FString::StartsWith((FString *)this_01.Data,L"http",4,IgnoreCase);
            if (!bVar7) {
              ::FString::ConcatCF(&local_240,L"http://",(FString *)this_01.Data);
              if (this_01.Data != (FScriptContainerElement *)&local_240) {
                if (*(void **)this_01.Data != (void *)0x0) {
                  FMemory::Free(*(void **)this_01.Data);
                }
                *(FScriptContainerElement **)this_01.Data = local_240.Data.AllocatorInstance.Data;
                *(int *)(this_01.Data + 8) = local_240.Data.ArrayNum;
                *(int *)(this_01.Data + 0xc) = local_240.Data.ArrayMax;
                local_240.Data.ArrayNum = 0;
                local_240.Data.ArrayMax = 0;
                local_240.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              }
              if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_240.Data.AllocatorInstance.Data);
              }
            }
            local_78.Data = (FScriptContainerElement *)0x0;
            if (*(int *)(this_01.Data + 8) == 0) {
              pwVar14 = L"";
LAB_1445f1f34:
              sVar15 = wcslen(pwVar14);
              local_68 = (int)sVar15;
              uVar25 = local_68 + 1;
              FVar20.Data = (FScriptContainerElement *)0x0;
              if (0x80 < uVar25) {
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          (&local_78,0,uVar25,1);
                FVar20.Data = local_78.Data;
              }
              local_70 = local_f8;
              if (FVar20.Data != (FScriptContainerElement *)0x0) {
                local_70 = FVar20.Data;
              }
              pcVar16 = FGenericPlatformString::Convert<wchar_t,char>
                                  ((char *)local_70,uVar25,pwVar14,uVar25);
              if ((pcVar16 == (char *)0x0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Result",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                     ,0x25,L""), bVar7)) {
                pcVar4 = (code *)swi(3);
                pFVar13 = (FIoStatus *)(*pcVar4)();
                return pFVar13;
              }
            }
            else {
              pwVar14 = *(wchar_t **)this_01.Data;
              if (pwVar14 != (wchar_t *)0x0) goto LAB_1445f1f34;
              local_70 = (FScriptContainerElement *)0x0;
              local_68 = 0;
            }
            local_260.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_260.Data.ArrayNum = 0;
            local_260.Data.ArrayMax = 0;
            pFVar17 = FAnsiString::ConstructFromPtrSize(&local_198,(char *)local_70,local_68);
            if (&local_260 != pFVar17) {
              if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_260.Data.AllocatorInstance.Data);
              }
              local_260.Data.AllocatorInstance.Data = (pFVar17->Data).AllocatorInstance.Data;
              (pFVar17->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_260.Data.ArrayNum = (pFVar17->Data).ArrayNum;
              local_260.Data.ArrayMax = (pFVar17->Data).ArrayMax;
              (pFVar17->Data).ArrayNum = 0;
              (pFVar17->Data).ArrayMax = 0;
            }
            if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_198.Data.AllocatorInstance.Data);
            }
            if (((local_270.Data <= (FScriptContainerElement *)&local_260) &&
                ((FScriptContainerElement *)&local_260 <
                 local_270.Data + (longlong)local_268._4_4_ * 0x10)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar7)) {
              pcVar4 = (code *)swi(3);
              pFVar13 = (FIoStatus *)(*pcVar4)();
              return pFVar13;
            }
            iVar10 = (int)local_268;
            if ((int)local_268 == local_268._4_4_) {
              iVar10 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&local_270,(int *)((longlong)&local_268 + 4));
            }
            local_268 = CONCAT44(local_268._4_4_,iVar10 + 1);
            pFVar19 = local_270.Data + (longlong)iVar10 * 0x10;
            *(undefined8 *)pFVar19 = 0;
            *(FScriptContainerElement **)pFVar19 = local_260.Data.AllocatorInstance.Data;
            *(int *)(pFVar19 + 8) = local_260.Data.ArrayNum;
            *(int *)(pFVar19 + 0xc) = local_260.Data.ArrayMax;
            local_260.Data.ArrayNum = 0;
            local_260.Data.ArrayMax = 0;
            local_260.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            if (local_78.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_78.Data);
            }
            this_01.Data = this_01.Data + 0x10;
          }
          iVar2 = (int)local_268;
          local_1d0 = local_270.Data;
          if (((int)local_268 < 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar7)) {
            pcVar4 = (code *)swi(3);
            pFVar13 = (FIoStatus *)(*pcVar4)();
            return pFVar13;
          }
          param_2 = local_1f0;
          iStack_1c8 = iVar2;
          local_1f0->DataPtr = (FAnsiString *)local_1d0;
          *(ulonglong *)&local_1f0->ArrayNum = CONCAT44(uStack_1c4,iVar2);
          DestructItems<FString,int>((FString *)local_250.AllocatorInstance.Data,local_250.ArrayNum)
          ;
          param_1 = local_210;
          if (local_250.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_250.AllocatorInstance.Data);
            param_1 = local_210;
          }
        }
        if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_200.Data.AllocatorInstance.Data);
        }
        if (local_120._8_4_ != Ok) {
          StatusOrCrash((FIoStatus *)local_120);
        }
      }
      FIoStatus::operator=((FIoStatus *)local_120,&FIoStatus::Unknown);
      local_1e0.Impl.Object = (FImpl *)local_120._16_8_;
      local_1e0.Impl.SharedReferenceCount.ReferenceController = local_108;
      if (local_108 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_108->SharedReferenceCount = (atomic<int>)((int)local_108->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_188.DataPtr = param_2->DataPtr;
      local_188.ArrayNum = param_2->ArrayNum;
      local_188._12_4_ = *(undefined4 *)&param_2->field_0xc;
      FIASHostGroup::Resolve(&local_1e0,&local_230,&local_188);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1e0.Impl.SharedReferenceCount.ReferenceController);
      if (local_230.ErrorCode == Ok) {
        FIoStatus::~FIoStatus(&local_230);
        if (4 < (byte)LogHttpIoDispatcher._0_1_) {
          ::FName::ToString(param_1,&local_168);
          Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogHttpIoDispatcher);
          if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_168.Data.AllocatorInstance.Data);
          }
        }
        pFVar17 = param_2->DataPtr;
        pFVar26 = pFVar17 + param_2->ArrayNum;
        if (pFVar17 != pFVar26) {
          do {
            if (4 < (byte)LogHttpIoDispatcher._0_1_) {
              iVar2 = (pFVar17->Data).ArrayNum;
              iVar10 = iVar2 + -1;
              if (iVar2 == 0) {
                iVar10 = 0;
              }
              pFVar18 = ::FString::ConstructFromPtrSize
                                  (&local_158,(char *)(pFVar17->Data).AllocatorInstance.Data,iVar10)
              ;
              pFVar24 = (FScriptContainerElement *)0x0;
              if (&local_130 != pFVar18) {
                pFVar24 = (pFVar18->Data).AllocatorInstance.Data;
                (pFVar18->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                (pFVar18->Data).ArrayNum = 0;
                (pFVar18->Data).ArrayMax = 0;
              }
              if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_158.Data.AllocatorInstance.Data);
              }
              Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogHttpIoDispatcher);
              if (pFVar24 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar24);
              }
            }
            pFVar17 = pFVar17 + 1;
            __return_storage_ptr__ = local_208;
          } while (pFVar17 != pFVar26);
        }
        pFVar6 = local_1e8;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &(local_1e8->HttpQueue).PausedRequests.ArrayNum,&local_148);
        iVar2 = *(int *)&pFVar6->HostGroupRegisterd;
        plVar21 = *(longlong **)&(pFVar6->HttpQueue).bReprioritize;
        plVar23 = plVar21 + (longlong)iVar2 * 2;
        while( true ) {
          if (*(int *)&pFVar6->HostGroupRegisterd != iVar2) {
            local_277[0] = 0;
            `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>_const_,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_277);
          }
          if (plVar21 == plVar23) {
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_148);
            goto LAB_1445f24b9;
          }
          if (((int)plVar21[1] != 0) && (*plVar21 != 0)) break;
          plVar21 = plVar21 + 2;
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_148);
        this_00 = &(pFVar6->HttpQueue).PausedRequests.ArrayNum;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                   (FWriteAccessScope *)&local_1c0);
        puVar1 = &(pFVar6->HostGroupRegisterd).field_0xc;
        *(int *)puVar1 = *(int *)puVar1 + 1;
        bVar7 = false;
        uVar25 = *(int *)&pFVar6->HostGroupRegisterd - 1;
        if (-1 < (int)uVar25) {
          lVar22 = (longlong)(int)uVar25 << 4;
          bVar7 = false;
          do {
            uVar11 = 0;
            if ((int)uVar25 < *(int *)&pFVar6->HostGroupRegisterd) {
              uVar11 = ~uVar25 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar4 = (code *)swi(3);
              pFVar13 = (FIoStatus *)(*pcVar4)();
              return pFVar13;
            }
            lVar3 = *(longlong *)&(pFVar6->HttpQueue).bReprioritize;
            if (((*(int *)(lVar22 + 8 + lVar3) == 0) ||
                (plVar21 = *(longlong **)(lVar22 + lVar3), plVar21 == (longlong *)0x0)) ||
               (cVar9 = (**(code **)(*plVar21 + 0x68))(), cVar9 == '\0')) {
              bVar7 = true;
            }
            lVar22 = lVar22 + -0x10;
            uVar25 = uVar25 - 1;
          } while (-1 < (int)uVar25);
        }
        puVar1 = &(pFVar6->HostGroupRegisterd).field_0xc;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        if (bVar7) {
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
        }
        if (local_1c0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1c0.Accessor,&local_1c0);
        }
LAB_1445f24b9:
        TVar5.Chars = FIoStatus::Ok.ErrorMessage.Chars;
        (__return_storage_ptr__->ErrorMessage).Chars = FIoStatus::Ok.ErrorMessage.Chars;
        if (TVar5.Chars != (wchar_t *)0x0) {
          LOCK();
          pwVar14 = TVar5.Chars + -4;
          *(int *)pwVar14 = *(int *)pwVar14 + 1;
          UNLOCK();
        }
        __return_storage_ptr__->ErrorCode = FIoStatus::Ok.ErrorCode;
        __return_storage_ptr__->SystemErrorCode = FIoStatus::Ok.SystemErrorCode;
      }
      else {
        if (2 < (byte)LogHttpIoDispatcher._0_1_) {
          ::FName::ToString(param_1,&local_178);
          Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttpIoDispatcher);
          if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_178.Data.AllocatorInstance.Data);
          }
        }
        (__return_storage_ptr__->ErrorMessage).Chars = local_230.ErrorMessage.Chars;
        if (local_230.ErrorMessage.Chars != (wchar_t *)0x0) {
          LOCK();
          *(int *)(local_230.ErrorMessage.Chars + -4) =
               *(int *)(local_230.ErrorMessage.Chars + -4) + 1;
          UNLOCK();
        }
        __return_storage_ptr__->ErrorCode = local_230.ErrorCode;
        __return_storage_ptr__->SystemErrorCode = local_230.SystemErrorCode;
        FIoStatus::~FIoStatus(&local_230);
      }
      DestructItems<FAnsiString,int>((FAnsiString *)local_270.Data,(int)local_268);
      if (local_270.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_270.Data);
      }
      FIoStatus::operator=((FIoStatus *)local_120,Unknown);
      if (local_120._8_4_ == Ok) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_108);
      }
      FIoStatus::~FIoStatus((FIoStatus *)local_120);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_220.Impl.SharedReferenceCount.ReferenceController);
    }
    else {
      (__return_storage_ptr__->ErrorMessage).Chars = (wchar_t *)local_120._0_8_;
      if ((wchar_t *)local_120._0_8_ != (wchar_t *)0x0) {
        LOCK();
        *(int *)(local_120._0_8_ + -8) = *(int *)(local_120._0_8_ + -8) + 1;
        UNLOCK();
      }
      __return_storage_ptr__->SystemErrorCode = local_120._12_4_;
      __return_storage_ptr__->ErrorCode = local_120._8_4_;
      FIoStatus::operator=((FIoStatus *)local_120,Unknown);
      if (local_120._8_4_ == Ok) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_108);
      }
      FIoStatus::~FIoStatus((FIoStatus *)local_120);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_220.Impl.SharedReferenceCount.ReferenceController);
    }
  }
  return __return_storage_ptr__;
}

// ReleaseRequest @ 1445f5970

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::IoStore::HttpIoDispatcher::FHttpDispatcher::ReleaseRequest
          (FHttpDispatcher *this,ulong64 param_1)

{
  int iVar1;
  BufCore *this_00;
  code *pcVar2;
  void *pvVar3;
  bool bVar4;
  int *piVar5;
  longlong *plVar6;
  undefined1 local_res10 [8];
  
  if ((param_1 == 0) &&
     (bVar4 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_4214109730584394553>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpIoDispacher.cpp"
                         ,0x4c7,"Handle != 0"), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  while (pvVar3 = (void *)param_1, pvVar3 != (void *)0x0) {
    param_1 = *(undefined8 *)((longlong)pvVar3 + 0x98);
    *(undefined8 *)((longlong)pvVar3 + 0x98) = 0;
    if ((*(uint *)((longlong)pvVar3 + 0xac) != 0) &&
       ((*(uint *)((longlong)pvVar3 + 0xac) & 0x60) == 0)) {
      `UE::IoStore::HttpIoDispatcher::FHttpDispatcher::ReleaseRequest'::__l4::<lambda_1>::operator()
                (local_res10);
    }
    LOCK();
    piVar5 = (int *)((longlong)pvVar3 + 0xb0);
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)((longlong)pvVar3 + 200));
      if (*(longlong *)((longlong)pvVar3 + 0x90) != 0) {
        piVar5 = (int *)(*(longlong *)((longlong)pvVar3 + 0x90) + -8);
        LOCK();
        iVar1 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar1 == 1) {
          FMemory::Free(piVar5);
        }
      }
      this_00 = *(BufCore **)((longlong)pvVar3 + 0x88);
      if (this_00 != (BufCore *)0x0) {
        FIoBuffer::BufCore::CheckRefCount(this_00);
        LOCK();
        piVar5 = &this_00->NumRefs;
        iVar1 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar1 == 1) {
          FIoBuffer::BufCore::~BufCore(this_00);
          ::operator_delete(this_00,0x20);
        }
      }
      DestructItems<FAnsiString,int>
                (*(FAnsiString **)((longlong)pvVar3 + 0x60),*(int *)((longlong)pvVar3 + 0x68));
      if (*(void **)((longlong)pvVar3 + 0x60) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)pvVar3 + 0x60));
      }
      if (*(longlong *)((longlong)pvVar3 + 0x30) != 0) {
        plVar6 = (longlong *)((longlong)pvVar3 + 0x40);
        if (*(longlong **)((longlong)pvVar3 + 0x58) != (longlong *)0x0) {
          plVar6 = *(longlong **)((longlong)pvVar3 + 0x58);
        }
        (**(code **)(*plVar6 + 0x10))();
      }
      TLinearAllocatorBase<UE::IoStore::HttpIoDispatcher::FHttpRequestBlockAllocationTag,0>::Free
                (pvVar3);
    }
  }
  return;
}

// Run @ 1445fd620

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall UE::IoStore::HttpIoDispatcher::FHttpDispatcher::Run(FHttpDispatcher *this)

{
  EThreadPriority EVar1;
  FEvent *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FHostGroupManager *pFVar7;
  int iVar8;
  wchar_t *local_res8;
  
  if (((this->HttpClient).Ptr == (FMultiEndpointHttpClient *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("HttpClient.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpIoDispacher.cpp"
                         ,0x321,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return uVar5;
  }
  while( true ) {
    iVar8 = 4;
    if (GOnDemandBackendThreadPriorityIndex < 4) {
      iVar8 = GOnDemandBackendThreadPriorityIndex;
    }
    iVar6 = 0;
    if (0 < iVar8) {
      iVar6 = iVar8;
    }
    EVar1 = GThreadPriorities[iVar6];
    if (EVar1 != this->ThreadPriority) {
      if (4 < (byte)LogHttpIoDispatcher._0_1_) {
        local_res8 = ::LexToString(EVar1);
        Logging::Private::LogWithFields<UE::Logging::Private::FStaticLogRecord,wchar_t_const_*>
                  ((FLogCategoryBase *)&LogHttpIoDispatcher,&::LOG_Static,&local_res8);
      }
      FWindowsPlatformProcess::SetThreadPriority(EVar1);
      this->ThreadPriority = EVar1;
    }
    pFVar7 = FHostGroupManager::Get();
    FHostGroupManager::Tick(pFVar7,GIasHttpTimeOutMs,&this->bStopRequested);
    FMultiEndpointHttpClient::UpdateConnections((this->HttpClient).Ptr);
    ProcessHttpRequests(this);
    if (this->bStopRequested != (atomic<bool>)0x0) break;
    pFVar2 = (this->WakeUp).Event;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x20);
    pFVar7 = FHostGroupManager::Get();
    uVar5 = FHostGroupManager::GetNumDisconnctedHosts(pFVar7);
    iVar8 = -1;
    if (uVar5 != 0) {
      iVar8 = GIasHttpHealthCheckWaitTime;
    }
    (*pcVar3)(pFVar2,iVar8,0);
  }
  return 0;
}

// Shutdown @ 144600290

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::IoStore::HttpIoDispatcher::FHttpDispatcher::Shutdown(FHttpDispatcher *this)

{
  bool bVar1;
  
  LOCK();
  bVar1 = this->field_0xe1 == '\0';
  if (bVar1) {
    this->field_0xe1 = 1;
  }
  UNLOCK();
  if (!bVar1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001446002ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&(this->HostGroupRegisterd).field_0x10 + 0x10))();
  return;
}

// Stop @ 1446013f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::IoStore::HttpIoDispatcher::FHttpDispatcher::Stop(FHttpDispatcher *this)

{
  bool bVar1;
  
  LOCK();
  bVar1 = this->bStopRequested == (atomic<bool>)0x0;
  if (bVar1) {
    this->bStopRequested = (atomic<bool>)0x1;
  }
  UNLOCK();
  if (!bVar1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014460140b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(((this->WakeUp).Event)->_padding_ + 0x10))();
  return;
}

// Tick @ 1446016d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::IoStore::HttpIoDispatcher::FHttpDispatcher::Tick(FHttpDispatcher *this)

{
  FHostGroupManager *this_00;
  
  this_00 = FHostGroupManager::Get();
  FHostGroupManager::Tick
            (this_00,GIasHttpTimeOutMs,
             (atomic<bool> *)((longlong)&(this->OnRecreateHttpClientHandle).ID + 1));
  FMultiEndpointHttpClient::UpdateConnections((FMultiEndpointHttpClient *)(this->Cache).Ptr);
  ProcessHttpRequests((FHttpDispatcher *)&this[-1].DropCacheCommand);
  return;
}

// TryCreateHttpClient @ 144606390

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::IoStore::HttpIoDispatcher::FHttpDispatcher::TryCreateHttpClient(FHttpDispatcher *this)

{
  TUniquePtr<UE::IoStore::FMultiEndpointHttpClient,TDefaultDelete<UE::IoStore::FMultiEndpointHttpClient>_>
  *this_00;
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  FMultiEndpointHttpClient *pFVar7;
  int iVar8;
  FMultiEndpointHttpClient *pFVar9;
  TDefaultDelete<UE::IoStore::FMultiEndpointHttpClient> local_48 [8];
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int local_30;
  undefined4 uStack_2c;
  undefined2 uStack_28;
  undefined1 uStack_26;
  undefined5 uStack_25;
  FLogCategoryBase *local_20;
  undefined1 uStack_18;
  undefined7 uStack_17;
  
  iVar6 = 0xffff;
  if (GIasHttpConnectionCount < 0xffff) {
    iVar6 = GIasHttpConnectionCount;
  }
  iVar8 = 1;
  if (1 < iVar6) {
    iVar8 = iVar6;
  }
  if ((1 < (byte)LogHttpIoDispatcher._0_1_) && (iVar8 != GIasHttpConnectionCount)) {
    Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogHttpIoDispatcher);
  }
  if (GIasHttpRecvBufKiB < 0) {
    iStack_3c = -1;
  }
  else {
    iStack_3c = GIasHttpRecvBufKiB << 10;
  }
  if (GIasHttpSendBufKiB < 0) {
    iStack_38 = -1;
  }
  else {
    iStack_38 = GIasHttpSendBufKiB << 10;
  }
  iStack_34 = GIasHttpRetryCount;
  local_30 = GIasHttpFailTimeOutMs;
  uStack_2c = 1;
  uStack_28 = 0x100;
  uStack_26 = 0;
  local_20 = (FLogCategoryBase *)&LogHttpIoDispatcher;
  uStack_18 = 7;
  local_40 = iVar8;
  pFVar7 = ::operator_new(0xb0);
  pFVar9 = (FMultiEndpointHttpClient *)0x0;
  if (pFVar7 != (FMultiEndpointHttpClient *)0x0) {
    (pFVar7->Config).MaxConnectionCount = local_40;
    (pFVar7->Config).ReceiveBufferSize = iStack_3c;
    (pFVar7->Config).SendBufferSize = iStack_38;
    (pFVar7->Config).MaxRetryCount = iStack_34;
    (pFVar7->Config).TimeoutMs = local_30;
    (pFVar7->Config).Redirects = uStack_2c;
    (pFVar7->Config).bEnableThreadSafetyChecks = (bool)(char)uStack_28;
    (pFVar7->Config).bAllowChunkedTransfer = (bool)(char)((ushort)uStack_28 >> 8);
    (pFVar7->Config).bResponseBodyOnError = (bool)uStack_26;
    *(undefined5 *)&(pFVar7->Config).field_0x1b = uStack_25;
    (pFVar7->Config).LogCategory = local_20;
    *(ulonglong *)&(pFVar7->Config).LogVerbosity = CONCAT71(uStack_17,uStack_18);
    (pFVar7->Connections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->Connections).ArrayNum = 0;
    (pFVar7->Connections).ArrayMax = 0;
    HTTP::FEventLoop::FEventLoop(&pFVar7->EventLoop);
    (pFVar7->Retries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->Retries).ArrayNum = 0;
    (pFVar7->Retries).ArrayMax = 0;
    (pFVar7->TicketLookupMutex).State = (atomic<unsigned_int>)0x0;
    (pFVar7->TicketLookupMutex).ThreadId = (atomic<unsigned_int>)0x0;
    *(undefined8 *)&pFVar7->TicketLookupMap = 0;
    *(undefined8 *)&(pFVar7->TicketLookupMap).field_0x8 = 0;
    *(undefined8 *)&(pFVar7->TicketLookupMap).field_0x20 = 0;
    *(undefined4 *)&(pFVar7->TicketLookupMap).field_0x28 = 0;
    *(undefined4 *)&(pFVar7->TicketLookupMap).field_0x2c = 0x80;
    *(undefined4 *)&(pFVar7->TicketLookupMap).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar7->TicketLookupMap).field_0x34 = 0;
    *(undefined8 *)&(pFVar7->TicketLookupMap).field_0x40 = 0;
    *(undefined4 *)&(pFVar7->TicketLookupMap).field_0x48 = 0;
    HTTP::FEventLoop::SetFailTimeout(&pFVar7->EventLoop,(pFVar7->Config).TimeoutMs);
    pFVar9 = pFVar7;
  }
  this_00 = &this->HttpClient;
  if ((TDefaultDelete<UE::IoStore::FMultiEndpointHttpClient> *)this_00 == local_48) {
    if (pFVar9 != (FMultiEndpointHttpClient *)0x0) {
      bVar4 = HTTP::FEventLoop::IsIdle(&pFVar9->EventLoop);
      if ((!bVar4) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("EventLoop.IsIdle()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpClient.cpp"
                             ,0xad,L"FMultiEndpointHttpClient still has active requests on shutdown"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      if ((*(int *)&(pFVar9->TicketLookupMap).field_0x8 !=
           *(int *)&(pFVar9->TicketLookupMap).field_0x34) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("TicketLookupMap.IsEmpty()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpClient.cpp"
                             ,0xae,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      *(undefined4 *)&(pFVar9->TicketLookupMap).field_0x48 = 0;
      pvVar1 = *(void **)&(pFVar9->TicketLookupMap).field_0x40;
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::IoStore::FMultiEndpointHttpClient::FTicketInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::IoStore::FMultiEndpointHttpClient::FTicketInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::IoStore::FMultiEndpointHttpClient::FTicketInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)&pFVar9->TicketLookupMap);
      DestructItems<UE::IoStore::FMultiEndpointHttpClient::FRequest,int>
                ((FRequest *)(pFVar9->Retries).AllocatorInstance.Data,(pFVar9->Retries).ArrayNum);
      pFVar2 = (pFVar9->Retries).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      HTTP::FEventLoop::~FEventLoop(&pFVar9->EventLoop);
      DestructItems<TUniquePtr<UE::IoStore::FMultiEndpointHttpClient::FConnection,TDefaultDelete<UE::IoStore::FMultiEndpointHttpClient::FConnection>_>,int>
                ((TUniquePtr<UE::IoStore::FMultiEndpointHttpClient::FConnection,TDefaultDelete<UE::IoStore::FMultiEndpointHttpClient::FConnection>_>
                  *)(pFVar9->Connections).AllocatorInstance.Data,(pFVar9->Connections).ArrayNum);
      pFVar2 = (pFVar9->Connections).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      ::operator_delete(pFVar9,0xb0);
    }
  }
  else {
    pFVar7 = this_00->Ptr;
    this_00->Ptr = pFVar9;
    TDefaultDelete<UE::IoStore::FMultiEndpointHttpClient>::operator()
              ((TDefaultDelete<UE::IoStore::FMultiEndpointHttpClient> *)this_00,pFVar7);
  }
  return this_00->Ptr != (FMultiEndpointHttpClient *)0x0;
}

// TryReadFromCache @ 144608cb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EIoHttpFlags": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
UE::IoStore::HttpIoDispatcher::FHttpDispatcher::TryReadFromCache
          (FHttpDispatcher *this,FHttpRequest *param_1)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  IIasCache *pIVar3;
  BufCore *pBVar4;
  int iVar5;
  FTaskBase *pFVar6;
  FTaskBase *this_00;
  FTaskBase *local_res18;
  
  if (((GHttpCacheEnabled) && ((this->Cache).Ptr != (IIasCache *)0x0)) &&
     (((param_1->Options).Flags & Default) != None)) {
    LOCK();
    (param_1->Flags).Flags = (atomic<unsigned_int>)((uint)(param_1->Flags).Flags | 2);
    UNLOCK();
    pIVar3 = (this->Cache).Ptr;
    iVar5 = (**(code **)((longlong)*pIVar3 + 0x20))(pIVar3,&param_1->CacheKey,&param_1->Buffer);
    if (iVar5 == 0) {
      pBVar4 = (param_1->Buffer).CorePtr.Reference;
      FOnDemandIoBackendStats::OnCacheGet
                (GStatistics,(ulonglong)CONCAT14(pBVar4->DataSizeHigh,pBVar4->DataSizeLow));
      pFVar6 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
               ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                           *)&Tasks::Private::SmallTaskAllocator);
      if (pFVar6 == (FTaskBase *)0x0) {
        Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x100);
      }
      else {
        Tasks::Private::FTaskBase::FTaskBase(pFVar6,2,true);
        pFVar6->_padding_ =
             (longlong)
             &Tasks::Private::
              TExecutableTaskBase<`UE::IoStore::HttpIoDispatcher::FHttpDispatcher::TryReadFromCache'::`11'::<lambda_1>,void,void>
              ::_vftable_;
        Tasks::Private::FTaskBase::Init
                  (pFVar6,
                   L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpIoDispacher.cpp(1179)"
                   ,BackgroundLow,None,None);
        pFVar6[1]._padding_ = (longlong)this;
        pFVar6[1]._padding_ = (longlong)param_1;
        pFVar6->_padding_ =
             (longlong)
             &Tasks::Private::
              TExecutableTask<`UE::IoStore::HttpIoDispatcher::FHttpDispatcher::TryReadFromCache'::`11'::<lambda_1>_>
              ::_vftable_;
        Tasks::Private::FTaskBase::TryLaunch(pFVar6,0x100);
        LOCK();
        paVar1 = &pFVar6->RefCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<unsigned_int>)0x1) {
          (**(code **)pFVar6->_padding_)(pFVar6,1);
          return true;
        }
      }
      return true;
    }
    if (iVar5 == 5) {
      pFVar6 = (FTaskBase *)Tasks::Private::FTaskEventBase::Create(L"HttpCacheReadComplete");
      this_00 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                            *)&Tasks::Private::SmallTaskAllocator);
      if (this_00 == (FTaskBase *)0x0) {
        this_00 = (FTaskBase *)0x0;
      }
      else {
        Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
        this_00->_padding_ =
             (longlong)
             &Tasks::Private::
              TExecutableTaskBase<`UE::IoStore::HttpIoDispatcher::FHttpDispatcher::TryReadFromCache'::`14'::<lambda_2>,void,void>
              ::_vftable_;
        Tasks::Private::FTaskBase::Init
                  (this_00,
                   L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpIoDispacher.cpp(1190)"
                   ,BackgroundLow,None,None);
        this_00[1]._padding_ = (longlong)this;
        this_00[1]._padding_ = (longlong)param_1;
        this_00->_padding_ =
             (longlong)
             &Tasks::Private::
              TExecutableTask<`UE::IoStore::HttpIoDispatcher::FHttpDispatcher::TryReadFromCache'::`14'::<lambda_2>_>
              ::_vftable_;
      }
      if (pFVar6 != (FTaskBase *)0x0) {
        Tasks::Private::FTaskBase::AddPrerequisites(this_00,pFVar6);
      }
      Tasks::Private::FTaskBase::TryLaunch(this_00,0x100);
      if (this_00 != (FTaskBase *)0x0) {
        LOCK();
        paVar1 = &this_00->RefCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<unsigned_int>)0x1) {
          (**(code **)this_00->_padding_)(this_00,1);
        }
      }
      pIVar3 = (this->Cache).Ptr;
      local_res18 = pFVar6;
      (**(code **)((longlong)*pIVar3 + 0x28))
                (pIVar3,&param_1->CacheKey,&param_1->Buffer,&param_1->CacheStatus,&local_res18);
      return true;
    }
  }
  return false;
}

// UpdateRequestPriority @ 14460d270

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EIoHttpFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::HttpIoDispatcher::FHttpDispatcher::UpdateRequestPriority
          (FHttpDispatcher *this,ulong64 param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == 0) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4214109730584394734>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpIoDispacher.cpp"
                       ,0x412,"Handle != 0");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    if (5 < (byte)LogHttpIoDispatcher._0_1_) {
      Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogHttpIoDispatcher);
    }
    FHttpQueue::Reprioritize((FHttpQueue *)&this->Thread,(FHttpRequest *)param_1,param_2);
  }
  return;
}

// UpdateThreadPriorityIfNeeded @ 14460d320

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::IoStore::HttpIoDispatcher::FHttpDispatcher::UpdateThreadPriorityIfNeeded(FHttpDispatcher *this)

{
  EThreadPriority EVar1;
  int iVar2;
  int iVar3;
  wchar_t *local_res8;
  
  iVar3 = 4;
  if (GOnDemandBackendThreadPriorityIndex < 4) {
    iVar3 = GOnDemandBackendThreadPriorityIndex;
  }
  iVar2 = 0;
  if (0 < iVar3) {
    iVar2 = iVar3;
  }
  EVar1 = GThreadPriorities[iVar2];
  if (EVar1 != this->ThreadPriority) {
    if (4 < (byte)LogHttpIoDispatcher._0_1_) {
      local_res8 = ::LexToString(EVar1);
      Logging::Private::LogWithFields<UE::Logging::Private::FStaticLogRecord,wchar_t_const_*>
                ((FLogCategoryBase *)&LogHttpIoDispatcher,&::LOG_Static,&local_res8);
    }
    FWindowsPlatformProcess::SetThreadPriority(EVar1);
    this->ThreadPriority = EVar1;
  }
  return;
}

// operator() @ 1504c19a0

bool __thiscall
`UE::IoStore::HttpIoDispatcher::FHttpDispatcher::ReleaseRequest'::__l4::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4214109730584394542>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4214109730584394542>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

